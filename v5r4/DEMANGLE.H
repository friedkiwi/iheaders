#ifndef __DEMANGLEH
#define __DEMANGLEH

/**************************************************************************
*                                                                         *
* IBM(R) VisualAge(TM) for C++ for AS/400(R), V3R6M0, V3R7M0              *
*                                                                         *
* (C) Copyright IBM Corporation, 1995, 1996 - All Rights Reserved         *
*                                                                         *
* 5716-CX4, 5716-CX5                                                      *
*                                                                         *
* Licensed Materials - Property of IBM                                    *
*                                                                         *
* US Government Users Restricted Rights - Use, duplication or disclosure  *
* restricted by GSA ADP Schedule Contract with IBM Corp.                  *
*                                                                         *
**************************************************************************/

/**************************************************************************
     utilC++/filter/demangle.h, C++-util, C++.1.0

    demangle.h

This file contains the C and C++ interfaces to the C++ name demangler.

The library provides the function "Demangle" and a number of classes.
"Demangle" is used to convert mangled C++ names to (pointers to) instances
of the "Name" class (or some class derived from "Name"). Once such an object
has been created, the user can find out certain characteristics of the name.

There are six subclasses of "Name", organized in the following way:

                          Name
                       /  |  \  \
            SpecialName  / \  \  ClassName
                        /   \  LongName
                       /     \
                      /    FunctionName
                     /           \
                    /             \
          MemberVarName         MemberFunctionName

The "SpecialName" class is for special compiler generated class objects,
while the "ClassName" class is for names that are mangled class names.
The "LongName" class is reserved for names that, when mangled, are "too
long". "Too long" is system dependent, and determined by the compiler. See
below.

The objects that the other subclasses represent should be self-evident.

The demangler will only demangle "special" names and names that are only
class names when the "SpecialNames" and "ClassNames" flags, respectively,
are supplied to the demangler in the "options" parameter. This parameter
takes the default value of "RegularNames", and so it will by default
demangle only regular names. "SpecialNames", "ClassNames" and "RegularNames"
can be specified in any combination simply by "bit-or"ing them together.

One can also request that the text of the individual parameters of functions
be kept around by specifying the option "ParameterText". It should be noted
that this increases the amount of storage required to store a demangled name
and can amount to alot when many names are being demangled and kept around.

One can also request that the text of the individual members of a qualifier
list can be kept around by specifying the option "QualifierText". It should
be noted that this increases the amount of storage required to store a
demangled name. The "Qualifier" class is an auxiliary class that represents
a member name's qualifier. Normally, only the text is available, but if
QualifierText is specified as an option, the text of individual class names
is available, both in full and without template arguments.

An important feature of the demangler is that, while it is a C++ program, it
uses no features requiring the C++ runtime library, and hence it is not
necessary to link libC.a to the program containing demangle.o. This affects
the interface in only one way. Normally, the class "Name" would be a virtual
class, but due to the lack of libC.a, pure virtual functions cannot be used.
The user should always treat the Name class as though it is a virtual.

The most common operation is expected to be simply the retrieval of the
string representation of the demangled name, and is accomplished by the
virtual "Name" member "Text", which returns a pointer to a string. This
string is part of the Name object; if a user wants to change it or have
it exist beyond the lifetime of the object, s/he must make a copy of the
string. There is also a "char *" conversion operator for "Name" (and its
derived classes).

Other information about a demangled name is available. This is accomplished
by first determining the actual kind of the given name, via the virtual
method "Kind" of "Name", which returns a "NameKind" value (see below). Once
this value is determined, the "Name *" can be cast to the appropriate
derived class, and the methods of this class can then be called. These
methods are defined below.

**************************************************************************/

#if (__OS400_TGTVRM__ >= 510)
  #if defined(__LLP64_RTBND__)
    #error RTBND with *LLP64 not supported for this file
  #endif
  #pragma datamodel(P128)
#ifdef __cplusplus
  #pragma object_model(compat)
#endif
#endif

#include <stddef.h>

#ifndef _BooleanType
#define _BooleanType
#if __IBMCPP__ >= 400 && defined(__cplusplus) && \
  !defined(__BUILD_ATT370__) && (defined(__EXTENDED__) || defined(__ANSI__))
  typedef bool Boolean;
#endif
#endif

#ifndef _BooleanConst
#define _BooleanConst
#if __IBMCPP__ < 400 || !defined(__cplusplus) || \
  defined(__BUILD_ATT370__) || !(defined(__EXTENDED__) || defined(__ANSI__))
  typedef enum { False = 0, True = 1 } Boolean;
#else
  typedef enum { False = false, True = true };
#endif
#endif

typedef enum { VirtualName, MemberVar, Function, MemberFunction, Class,
               Special, Long } NameKind;
typedef enum { RegularNames = 0x1, ClassNames = 0x2, SpecialNames = 0x4,
               ParameterText = 0x8, QualifierText = 0x10 } DemanglingOptions;

#ifdef __cplusplus

class CommonType;
class TypeList;
class Argument;
class ArgumentList;
class ElaboratedFunctionTemplateArgumentList;

class Name;

/*
 * Demangle. Given a valid C "name" and the address of a char pointer, this
 * function creates a "Name" instance and returns its address. A valid C name
 * is one starting with an "_" or letter followed by a number of letters, digits
 * and "_"s. The name is assumed to start at the beginning of the string, but
 * there may be trailing characters not part of the mangled name. A pointer
 * into "name" at the first character not part of the mangled name is returned
 * in "rest".
 *     Demangle will return NULL when the text of the demangled name is the
 * same as the text of the mangled name. Thus, when NULL is returned, the
 * character string given as Demangle's first argument is in fact the
 * demangled name, too.
 */

Name *Demangle(char *name, char *&rest, unsigned long options = RegularNames);
Name *BufferedDemangle(char *, char *&, unsigned long = RegularNames);

class Name {
    public:
        virtual ~Name();
        virtual NameKind Kind();

        virtual char *Text();
        operator char *();
};

// ClassName: representation of a demangled (possibly nested) class name
/*
 *     Kind: returns the kind of the name (Class)
 *     Text: returns the text of the demangled name
 *     operator Qualifier *: returns the associated qualifier
 */

class Qualifier;

class ClassName: public Name {
    protected:
#if __IBMCPP__ < 400
        friend Name *BufferedDemangle(char *, char *&,
                                      unsigned long = RegularNames);
#else
        friend Name *BufferedDemangle(char *, char *&, unsigned long);
#endif

        Qualifier *qualifier;

        ClassName(Qualifier *);
    public:
        ~ClassName();
        virtual NameKind Kind();

        operator Qualifier *();

        char *Text();

        enum ObjectModelKind {
             VirtualBasePointerWithThisAdjustment,
             VirtualBasePointerWithThunk,
             VirtualBaseOffsetInVftWithThunk,
             VirtualBaseOffsetInTableWithThunk,
             SystemObjectModel,
             NumObjectModelKind
        };

        virtual ObjectModelKind objectModelKind();
};

class ClassNameForVirtualBasePointerWithThisAdjustment: public ClassName {
        friend Name *BufferedDemangle(char *, char *&, unsigned long);

        ClassNameForVirtualBasePointerWithThisAdjustment(Qualifier *q);

   public:
        virtual ObjectModelKind objectModelKind();
};

class ClassNameForVirtualBasePointerWithThunk: public ClassName {
        friend Name *BufferedDemangle(char *, char *&, unsigned long);

        ClassNameForVirtualBasePointerWithThunk(Qualifier *q);

   public:
        virtual ObjectModelKind objectModelKind();
};

class ClassNameForVirtualBaseOffsetInVftWithThunk: public ClassName {
        friend Name *BufferedDemangle(char *, char *&, unsigned long);

        ClassNameForVirtualBaseOffsetInVftWithThunk(Qualifier *q);

   public:
        virtual ObjectModelKind objectModelKind();
};

class ClassNameForVirtualBaseOffsetInTableWithThunk: public ClassName {
        friend Name *BufferedDemangle(char *, char *&, unsigned long);

        ClassNameForVirtualBaseOffsetInTableWithThunk(Qualifier *q);

   public:
        virtual ObjectModelKind objectModelKind();
};

// SpecialName: representation of a demangled compiler-generated name
/*
 *     Kind: returns the kind of the name (Special)
 *     Text: return the text of the demangled name
 */

class SpecialName: public Name {
#if __IBMCPP__ < 400
        friend Name *BufferedDemangle(char *, char *&,
                                      unsigned long = RegularNames);
#else
        friend Name *BufferedDemangle(char *, char *&, unsigned long);
#endif

        char *text;

        SpecialName(char *);
    public:
        virtual ~SpecialName();

        virtual NameKind Kind();
        virtual char *Text();
};

// LongName: representation of a demangled long name
/*
 *     Kind: returns the kind of the name (LongName)
 *     ProbableKind: returns the probable kind of the name, but if the
 *           name is extremely long, the value might be wrong (e.g. a
 *           member function name might be confused for a member var
 *           name).
 *     Text: return the text of the demangled name
 */

class LongName: public Name {
#if __IBMCPP__ < 400
        friend Name *BufferedDemangle(char *, char *&,
                                      unsigned long = RegularNames);
#else
        friend Name *BufferedDemangle(char *, char *&, unsigned long);
#endif

        char *text;
        NameKind probableKind;

        LongName(Name *);
        LongName(char *);
    public:
        virtual ~LongName();

        virtual NameKind Kind();
        virtual NameKind ProbableKind();
        virtual char *Text();
};

// MemberVarName: representation of a demangled static member variable name
/*
 *     Kind: returns the kind of the name (MemberVar)
 *     VarName: returns the unqualified name of the member variable
 *     Scope: returns the qualifier of the member variable
 *     Text: return the text of the demangled name
 *
 *     IsConstant: returns whether the function is a constant function
 *     IsVolatile: returns whether the function is a volatile function
 *     IsStatic: returns whether the function is a static member function
 */

class MemberVarName: public Name {
#if __IBMCPP__ < 400
        friend Name *BufferedDemangle(char *, char *&,
                                      unsigned long = RegularNames);
#else
        friend Name *BufferedDemangle(char *, char *&, unsigned long);
#endif

        char *text;
        char *name;
        Qualifier *qualifier;

        Boolean isConstant:8;
        Boolean isStatic:8;
        Boolean isVolatile:8;

        MemberVarName(char *, unsigned long, Qualifier *, Boolean, Boolean,
                      Boolean);
    public:
        virtual ~MemberVarName();

        virtual NameKind Kind();
        char *VarName();
        Qualifier *Scope();
        virtual char *Text();

        Boolean IsConstant();
        Boolean IsStatic();
        Boolean IsVolatile();
};

// FunctionName: representation of a demangled function name
/*
 *     Kind: returns the kind of the name (Function)
 *     RootName: returns the unqualified name of the function
 *     Text: returns the text of the demangled name
 *
 * Further, if the option "ParameterText" was supplied to Demangle, the
 * function "ParamDataKept" is True, and the following functions are
 * useful:
 *
 *     nArguments: returns the number of arguments of the function
 *     Arguments: returns the text of the function's argument string
 *     Argument: returns the text of the i'th argument (numbered from 0) of
 *       the function. If i < 0 or i >= n, where n is the number of arguments
 *       of the function, NULL is returned.
 */

class FunctionName: public Name {
#if __IBMCPP__ < 400
        friend Name *BufferedDemangle(char *, char *&,
                                      unsigned long = RegularNames);
#else
        friend Name *BufferedDemangle(char *, char *&, unsigned long);
#endif

    protected:
        Boolean paramDataKept;
        char *name;
        TypeList *arguments;
        ElaboratedFunctionTemplateArgumentList *templateArgs;

        char *text;
#if ((__OS400_TGTVRM__ < 510) || defined(__BUILD_ATT370__))
        FunctionName(char *, unsigned long, TypeList *, Boolean);
#else
        FunctionName(char *, unsigned long, TypeList *,
                     ElaboratedFunctionTemplateArgumentList*, Boolean);
#endif

    public:
        virtual ~FunctionName();

        virtual NameKind Kind();
        char *RootName();
        virtual char *Text();

        Boolean ParamDataKept();
        long nArguments();
        char *Arguments();
        char *Argument(unsigned long);
};

// MemberFunctionName: representation of a demangled member function name
/*
 *     Kind: returns the kind of the name (MemberFunction)
 *     Scope: returns a pointer to the qualifier of the name
 *     Text: returns the text of the demangled name
 *
 *     IsConstant: returns whether the function is a constant function
 *     IsVolatile: returns whether the function is a volatile function
 *     IsStatic: returns whether the function is a static member function
 */

class MemberFunctionName: public FunctionName {
#if __IBMCPP__ < 400
        friend Name *BufferedDemangle(char *, char *&,
                                      unsigned long = RegularNames);
#else
        friend Name *BufferedDemangle(char *, char *&, unsigned long);
#endif

        Qualifier *qualifier;
        Boolean isConstant: 8;
        Boolean isStatic: 8;
        Boolean isVolatile: 8;
        Boolean isContravariant: 4;
        Boolean isUnaligned: 2;
        Boolean isTDispThunk: 2;

        char *text;

#if ((__OS400_TGTVRM__ < 510) || defined(__BUILD_ATT370__))
        MemberFunctionName(char *, unsigned long, Qualifier *, TypeList *,
                           Boolean, Boolean, Boolean, Boolean);
#else
        MemberFunctionName(char *, unsigned long, Qualifier *, TypeList *,
                           ElaboratedFunctionTemplateArgumentList*,
                           Boolean, Boolean, Boolean, Boolean, Boolean);
#endif
    public:
        virtual ~MemberFunctionName();

        virtual NameKind Kind();
        Qualifier *Scope();
        virtual char *Text();

        Boolean IsConstant();
        Boolean IsStatic();
        Boolean IsVolatile();
        Boolean IsContravariant();
        Boolean IsUnaligned();
        Boolean IsTDispThunk();
};

// Qualifier: representation of a demangled (possibly nested) class name.
/*
 *     Text: returns the text of the qualifier
 *
 * Additionally, if the option "QualifierText" was specified, "ClassDataKept"
 * is True, and the following members are useful:
 *
 *     NQualifiers: returns the number of segments in the qualifier name; i.e.,
 *                  the number of levels the class name is nested, plus one.
 *     operator[]: returns a pointer to the Qualifier::Class of the given
 *                 class of the qualifier. These are numbered starting at zero
 *                 on the left, and increasing to the right. Thus, in X::Y,
 *                 "X" has number zero and "Y" number one.
 *
 * The nested class "Class" provides the information about one of the
 * classes of the qualification. This information is available only if
 * "ClassDataKept" is True. Its public members are:
 *     Name: returns a pointer to the raw name of the class, excluding any
 *           template arguments).
 *     Text: returns a pointer to the full class name, including template
 *           arguments.
 */

class Qualifier {
    public:
        class Class {
                friend class Qualifier;
                friend Class *ValidClassName(char *, unsigned long &, Boolean);
                friend Class *ValidClassName(char *, unsigned long &, Boolean,
                                             ClassName::ObjectModelKind& kind);

                char *name;
                char *text;
            public:
                char *Name();
                char *Text();
        };

    private:
        friend Qualifier *ValidQualifier(char *, unsigned long &, Boolean);
        friend Qualifier *ValidQualifier(char *, unsigned long &, Boolean,
                                         ClassName::ObjectModelKind& kind);

        friend class MemberVarName;
        friend class MemberFunctionName;

        unsigned long nQNames;
        Class **qualifiers;

        char *text;
        Boolean classDataKept;

        Qualifier(Class **, unsigned long nQNames, Boolean keepClassData);
    public:
        ~Qualifier();

        virtual char *Text();
        unsigned long nQualifiers();

        Boolean ClassDataKept();
        Class *operator[](unsigned long qualifier);
};

// inline function definitions

inline          Name::~Name() { }
inline NameKind Name::Kind() { return VirtualName; }
inline char *   Name::Text() { return (char *)NULL; }
inline          Name::operator char *() { return Text(); }

inline unsigned long Qualifier::nQualifiers() { return nQNames; }
inline char *   Qualifier::Class::Name() { return name; }
inline char *   Qualifier::Class::Text() { return text; }
inline Boolean  Qualifier::ClassDataKept() { return classDataKept; }

inline          ClassName::~ClassName() { delete qualifier; }
inline NameKind ClassName::Kind() { return Class; }
inline          ClassName::operator Qualifier *() { return qualifier; }
inline char *   ClassName::Text() { return qualifier->Text(); }
inline ClassName::ObjectModelKind ClassName::objectModelKind() {
#if __TOS_WIN__
   return ClassName::VirtualBasePointerWithThunk;
#else // __TOS_OS2__
   return ClassName::VirtualBasePointerWithThisAdjustment;
#endif
}
inline ClassName::ObjectModelKind
           ClassNameForVirtualBasePointerWithThisAdjustment::objectModelKind()
           { return ClassName::VirtualBasePointerWithThisAdjustment; }
inline ClassName::ObjectModelKind
           ClassNameForVirtualBasePointerWithThunk::objectModelKind()
           { return ClassName::VirtualBasePointerWithThunk; }
inline ClassName::ObjectModelKind
           ClassNameForVirtualBaseOffsetInVftWithThunk::objectModelKind()
           { return ClassName::VirtualBaseOffsetInVftWithThunk; }
inline ClassName::ObjectModelKind
           ClassNameForVirtualBaseOffsetInTableWithThunk::objectModelKind()
           { return ClassName::VirtualBaseOffsetInTableWithThunk; }

inline          SpecialName::SpecialName(char *t) { text = t; }
inline          SpecialName::~SpecialName() { delete text; }
inline NameKind SpecialName::Kind() { return Special; }
inline char *   SpecialName::Text() { return text; }

inline          LongName::~LongName() { delete text; }
inline NameKind LongName::Kind() { return Long; }
inline NameKind LongName::ProbableKind() { return probableKind; }
inline char *   LongName::Text() { return text; }

inline NameKind MemberVarName::Kind() { return MemberVar; }
inline char *   MemberVarName::VarName() { return name; }
inline Qualifier *MemberVarName::Scope() { return qualifier; }
inline char *   MemberVarName::Text() { return text; }
inline Boolean  MemberVarName::IsConstant() { return (Boolean)isConstant; }
inline Boolean  MemberVarName::IsStatic() { return (Boolean)isStatic; }
inline Boolean  MemberVarName::IsVolatile() { return (Boolean)isVolatile; }

inline NameKind FunctionName::Kind() { return Function; }
inline char *   FunctionName::RootName() { return name; }
inline char *   FunctionName::Text() { return text; }
inline Boolean  FunctionName::ParamDataKept() { return paramDataKept; }

inline NameKind MemberFunctionName::Kind() { return MemberFunction; }
inline Qualifier *MemberFunctionName::Scope() { return qualifier; }
inline char *   MemberFunctionName::Text() { return text; }
inline Boolean  MemberFunctionName::IsConstant() { return (Boolean)isConstant; }
inline Boolean  MemberFunctionName::IsStatic() { return (Boolean)isStatic; }
inline Boolean  MemberFunctionName::IsVolatile() { return (Boolean)isVolatile; }
inline Boolean  MemberFunctionName::IsContravariant()
                    { return (Boolean)isContravariant; }
inline Boolean  MemberFunctionName::IsUnaligned()
                    { return (Boolean)isUnaligned; }
inline Boolean  MemberFunctionName::IsTDispThunk()
                    { return (Boolean)isTDispThunk; }

#else

/*
 * The C Interface
 */

/*
 *     demangle. Given a valid C++ "name" and the address of a char pointer,
 * this function creates a "Name" instance and returns its address. A valid C++
 * name is one starting with an "_" or letter followed by a number of letters,
 * digits and "_"s. The name is assumed to start at the beginning of the
 * string, but there may be trailing characters not part of the mangled name.
 * A pointer into "name" at the first character not part of the mangled name
 * is returned in "rest".
 */

    typedef struct Name *Name;

    Name *demangle(char *name, char **rest, unsigned long options);

/*
 * Each of the following functions takes a pointer to a Name as its only
 * parameter.
 */

    NameKind kind(Name *);

    /* return the character representation of a given Name */
    char *text(Name *);

    /* return the probable type of a given LongName-type Name */
    NameKind probableKind(Name *);

    /* return the actual name of a given Var- or MemberVar-type Name */
    char *varName(Name *);

    /* return the qualifier text of the given Member-type Name */
    char *qualifier(Name *);

    /* return the actual name of a given Function- or MemberFunction- */
    /* type Name                                                      */
    char *functionName(Name *);


    /* returns whether the parameter information was maintained for a */
    /* particular Function- or MemberFunction- type Name.             */
    Boolean paramDataKept(Name *);

    /* returns whether the qualifier information was maintained for a */
    /* particular Member- type Name.                                  */
    Boolean classDataKept(Name *);

    /*
     * The next three functions require that option "ParameterText" was given
     * to Demangle.
     */

    /* return the number of arguments of a given Function- or Member- */
    /* Function type Name.                                            */
    long nArguments(Name *);

    /* return the text of the argument list of a given Function- or Member- */
    /* Function- type Name. (char *)NULL is returned if the name wasn't     */
    /* demangled with option ParameterText, and "" is returned if the arg-  */
    /* ument list is empty.                                                 */
    char *argumentsText(Name *);

    /* return the text of the nth argument of a given Function- or Member- */
    /* Function- type Name. (char *)NULL is returned if the name wasn't    */
    /* demangled with option ParameterText, or the function doesn't have n */
    /* arguments. The arguments of a function are numbered from 0.         */
    char *argumentText(Name *, int n);

    /*
     * The next three functions require that option "QualifierText" was given
     * to Demangle.
     */

    /* return the number of qualifiers of the given Member- type Name */
    unsigned long nQualifiers(Name *);

    /* return the text of the nth qualifier of a given Member- type Name. */
    /* (char *)NULL is returned if "n" is out of range. The qualifiers of */
    /* a name are numbered from the left starting at zero.                */
    char *qualifierText(Name *, unsigned long n);

    /* return the text of the class name of the nth qualifier of a given    */
    /* Member- type Name. (char *)NULL is returned if "n" is out of range.  */
    /* This function will return a value different from the preceding func- */
    /* tion only if the class is a template class. The qualifiers of a name */
    /* are numbered from the left starting at zero.                         */
    char *qualifierNameText(Name *, unsigned long n);


    /* is a Member-type Name constant? */
    Boolean isConstant(Name *);

    /* is a Member-type Name static? */
    Boolean isStatic(Name *);

    /* is a Member-type Name volatile? */
    Boolean isVolatile(Name *);

    /* is a MemberFunction-type Name a contravariant function? */
    Boolean isContravariant(Name *);

    /* is a MemberFunction-type Name a tdisp thunk function? */
    Boolean isTDispThunk(Name *);

    /* is a MemberFunction-type Name __unaligned? */
    Boolean isUnaligned(Name *);

    /* delete the Name instance */
    void erase(Name *);

#endif

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
#ifdef __cplusplus
   #pragma object_model(pop)
#endif
#endif


#endif
