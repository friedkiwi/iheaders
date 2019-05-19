#ifndef _H_TYPEINFO_
#define _H_TYPEINFO_

   #pragma info(none)
   #ifndef __CHKHDR__
      #pragma report(level, E)
   #endif
   #pragma info(restore)

   #if (__OS400_TGTVRM__ >= 510)
   #  if defined(__LLP64_RTBND__)
   #    pragma datamodel(LLP64)
   #  else
   #    pragma datamodel(P128)
   #  endif
   #endif

   #if __IBMCPP__ >= 500
      #pragma object_model (compat)
   #endif /* __IBMCPP__ */

   /********************************************************************/
   /*  <typeinfo.h> header file                                        */
   /*                                                                  */
   /*  VisualAge C++ Professional, Version 6.0                         */
   /*    Licensed Material - Property of IBM                           */
   /*                                                                  */
   /*  5801-AAR and Other Materials                                    */
   /*                                                                  */
   /*  (c) Copyright IBM Corp 1991, 2002. All rights reserved.         */
   /*                                                                  */
   /*  US Government Users Restricted Rights - Use, duplication or     */
   /*  disclosure restricted by GSA ADP Schedule Contract with         */
   /*  IBM Corp.                                                       */
   /*                                                                  */
   /********************************************************************/

#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   #pragma namemangling(ansi)

   #include <typeinfo>

   using std::exception;
   using std::bad_exception;
   using std::uncaught_exception;
   using std::type_info;

   #ifndef __BUILD_RT__
   using std::terminate;
   using std::unexpected;
   using std::set_terminate;
   using std::set_unexpected;
   using std::terminate_handler;
   using std::unexpected_handler;
     #ifdef __MULTI__
     using std::_set_mt_terminate;
     using std::_set_mt_unexpected;
     #endif /* __MULTI__ */
   #endif  /* __BUILD_RT__ */

   #pragma namemangling()
#else
#include <string.h>

class type_info {
  public:
    typedef int Bool;
    virtual             ~type_info();
    Bool                operator==(const type_info&) const;
    Bool                operator!=(const type_info&) const;
    Bool                before(const type_info&) const;
    const char*         name() const;

  private:
                        type_info(const type_info&);
    type_info&          operator=(const type_info&);

  protected:
    char *              typeName;
    char *              mangledName;
};

class extended_type_info : public type_info {
  public:
                        ~extended_type_info();
    virtual size_t      size() const=0;
    virtual void*       create(void* at) const=0;
    virtual void*       create(void* at, size_t count) const=0;
    virtual void*       copy(void* to, const void* from) const=0;
    virtual void*       copy(void* to, const void* from, size_t count) const=0;
    virtual void*       destroy(void* at) const=0;
    virtual void*       destroy(void* at, size_t count) const=0;
    virtual void*       allocObject() const=0;
    virtual void*       allocArray(size_t count) const=0;
    virtual void        deallocObject(void* at) const=0;
    virtual void        deallocArray(void* at, size_t count) const=0;
    virtual const void* linkageInfo() const=0;

  private:
                        extended_type_info(const extended_type_info&);
    extended_type_info& operator=(const extended_type_info&);
};

inline const char * type_info::name() const {
  return typeName;
}

inline type_info::Bool type_info::operator==(const type_info&x) const {
  return (&x==this) || (strcmp(x.mangledName,this->mangledName)==0);
}

inline type_info::Bool type_info::operator!=(const type_info&x) const {
  return (&x!=this) && (strcmp(x.mangledName,this->mangledName)!=0);
}

inline type_info::Bool type_info::before(const type_info&x) const {
  return (&x!=this) && (strcmp(x.mangledName,this->mangledName)>=0);
}

#endif

   #if __IBMCPP__ >= 500
      #pragma object_model (pop)
   #endif /* __IBMCPP__ */

   #if (__OS400_TGTVRM__ >= 510)
      #pragma datamodel(pop)
   #endif

   #pragma info(none)
   #ifndef __CHKHDR__
      #pragma report(pop)
   #endif
   #pragma info(restore)

#endif /* _H_TYPEINFO_ */
