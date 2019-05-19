#ifndef __bcd_h
#define __bcd_h

/**************************************************************************
*                                                                         *
* - bcd.h                                                                 *
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

#if (__OS400_TGTVRM__ >= 510)
  #if defined(__LLP64_RTBND__)
  #pragma datamodel(LLP64)
  #else
  #pragma datamodel(P128)
  #pragma object_model(compat)
  #endif
#endif

#include <stdio.h>
#include <string.h>

#pragma info(none)

// This file may be included by other files within an extern
// "C" linkage block. The linkages here must be C++, so wrap the code in
// an extern "C++" block to protect it.

extern "C++" {

#if (__OS400_TGTVRM__ < 510)
class istream;
class ostream;
#endif

// *************************************************
// *** Functions to perform basic BCD operations ***
// *************************************************
extern int __padd (char *, int, int,
                    const char *, int, int,
                    const char *, int, int);
extern int __psub (char *, int, int,
                    const char *, int, int,
                    const char *, int, int);
extern int __pmpy  (char *, int , int,
                    const char *, int,
                    const char *, int);
extern int __pdiv  (char *, int, int,
                    const char *, int, int,
                    const char *, int, int);
extern int __pcmp (const char *, int, int,
                   const char *, int, int,
                   int);

// ********************************************************
// *** Function to convert BCD from one type to another ***
// ********************************************************
extern int  __dectodec (int , int , int , int ,
                        const char * , char *, int);

// ***********************************************************
// *** Functions to convert BCD to/from builtin data types ***
// ***********************************************************
extern void   __dtodec(unsigned char *, int, int, double); // double to BCD
extern void   __itodec(unsigned char *, int, int, int);    // int to BCD
extern void   __lltodec(unsigned char *, int, int, long long);//long long to BCD
extern double __dectod(unsigned char *, int, int);         // BCD to double
extern int    __dectoi(unsigned char *, int, int);         // BCD to int
extern int    __dectoll(unsigned char *, int, int);        // BCD to long long

#define __NONZERO (1)
#define __ZERO    (0)

#define DEC_MIN         (_ConvertDecimal)("-9999999999999999999999999999999")
#define DEC_MAX         (_ConvertDecimal)("+9999999999999999999999999999999")
#define DEC_EPSILON     (_ConvertDecimal)(".0000000000000000000000000000001")

#define DEC_DIG         31
#define DEC_PRECISION   31

#define DEC_INT_DIG     10
#define DEC_INT_PREC    0

#define __MAX_BUF_SIZE    ((DEC_DIG >> 1) + 1)

#define decimal     _Decimal
#define digitsof    __digitsof
#define precisionof __precisionof

#define _Decimal(n,p) _DecimalT<n,p>
#define __D(DECIMAL_CONSTANT)  (_ConvertDecimal)(DECIMAL_CONSTANT)

#define __digitsof(DecName) (DecName).DigitsOf()
#define __precisionof(DecName) (DecName).PrecisionOf()

// ************************************
// *** Macros used by _ADD_RET_TYPE ***
// ************************************
#define imax(dig1, prec1, dig2, prec2) (dig1-prec1>dig2-prec2?          \
                                        dig1-prec1+1:dig2-prec2+1)

#define pmax(prec1, prec2) (prec1>prec2?prec1:prec2)

#define nmax(dig1, prec1, dig2, prec2) (imax(dig1,prec1,dig2,prec2)+    \
                                        pmax(prec1,prec2))


// *****************************************************
// *** Intermediate result of addition :             ***
// *** prec = max(prec1, prec2)                      ***
// *** dig  = max(dig1-prec1, dig2-prec2) + prec + 1 ***
// *** dig <= DEC_DIG                                ***
// *****************************************************
#define _ADD_RET_TYPE(dig1,prec1,dig2,prec2)                            \
          (nmax(dig1,prec1,dig2,prec2)>DEC_DIG?                         \
           DEC_DIG:                                                     \
           nmax(dig1,prec1,dig2,prec2)),                                \
          (nmax(dig1,prec1,dig2,prec2)>DEC_DIG?                         \
            (imax(dig1,prec1,dig2,prec2)>=DEC_DIG?                      \
             0:                                                         \
             DEC_DIG-imax(dig1,prec1,dig2,prec2)):                      \
            (pmax(prec1, prec2)))

// ********************************************
// *** Intermediate result of subtraction : ***
// *** Same as addition                     ***
// ********************************************
#define _SUB_RET_TYPE(dig1,prec1,dig2,prec2) _ADD_RET_TYPE(             \
                                             dig1,prec1,dig2,prec2)

// **********************************************
// *** Intermediate result of multiplication :***
// *** dig = dig1 + dig2                      ***
// *** prec = prec1 + prec2                   ***
// **********************************************
#define _MUL_RET_TYPE(dig1,prec1,dig2,prec2)                            \
              (dig1+dig2>DEC_DIG?DEC_DIG:(dig1+dig2)),                  \
              (dig1+dig2>DEC_DIG?                                       \
                 (dig1+dig2-prec1-prec2>=DEC_DIG?                       \
                  0:                                                    \
                  DEC_DIG-(dig1+dig2-prec1-prec2)):                     \
                 (prec1+prec2))

// *************************************************
// *** Intermediate result of division :         ***
// *** dig = DEC_DIG                             ***
// *** prec = DEC_DIG - ((dig1 - prec1) + prec2) ***
// *************************************************
#define _DIV_RET_TYPE(dig1,prec1,dig2,prec2)                            \
               DEC_DIG,                                                 \
               (((dig1-prec1)+prec2)>DEC_DIG?                           \
                0:                                                      \
                (DEC_DIG-(dig1-prec1)-prec2))


// ************************************************************
// *** Macro used by decimal<> = decimal<> OP integer/float ***
// *** where OP is + - * /                                  ***
// ************************************************************
#define GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(_OPERATOR,_TYPE,_RET_TYPE)    \
template<int dig, int prec>                                             \
inline _DecimalT <_RET_TYPE(dig,prec,DEC_INT_DIG,DEC_INT_PREC)>         \
operator _OPERATOR ( const _DecimalT<dig, prec> & val1,                 \
                     const _TYPE & val2)                                \
{                                                                       \
   return (val1 _OPERATOR _DecimalT<DEC_INT_DIG,DEC_INT_PREC>(val2));   \
}


// ************************************************************
// *** Macro used by decimal<> = integer/float OP decimal<> ***
// *** where OP is + - * /                                  ***
// ************************************************************
#define GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(_OPERATOR,_TYPE,_RET_TYPE)    \
template<int dig, int prec>                                             \
inline _DecimalT <_RET_TYPE(DEC_INT_DIG,DEC_INT_PREC,dig,prec)>         \
operator _OPERATOR (const _TYPE & val1,                                 \
                    const _DecimalT<dig, prec> & val2)                  \
{                                                                       \
   return ( _DecimalT<DEC_INT_DIG,DEC_INT_PREC>(val1) _OPERATOR val2);  \
}


// ******************************************
// *** Macro used by decimal<> += integer ***
// ******************************************
#define GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(_OPERATOR,_TYPE)              \
template<int dig, int prec>                                             \
inline _DecimalT <dig,prec>                                             \
operator _OPERATOR##= ( _DecimalT<dig, prec> & val1,                    \
                     const _TYPE & val2)                                \
{                                                                       \
   val1 = val1 _OPERATOR _DecimalT<DEC_INT_DIG,DEC_INT_PREC>(val2);     \
   return (val1);                                                       \
}


// ****************************************
// *** Macro used by decimal<> += float ***
// ****************************************
#define GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(_OPERATOR,_TYPE)              \
template<int dig, int prec>                                             \
inline _DecimalT <dig,prec>                                             \
operator _OPERATOR##= ( _DecimalT<dig, prec> & val1,                    \
                     const _TYPE & val2)                                \
{                                                                       \
   return (val1 = (long double)val1 _OPERATOR val2);                    \
}


// ******************************************
// *** Macro used by decimal<> OP integer ***
// *** where OP is > >= < <= == !=        ***
// ******************************************
#define GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(_OPERATOR,_TYPE)              \
template<int dig, int prec>                                             \
inline int                                                              \
operator _OPERATOR ( const _DecimalT<dig, prec> & val1,                 \
                     const _TYPE & val2)                                \
{                                                                       \
   return (val1 _OPERATOR _DecimalT<DEC_INT_DIG,DEC_INT_PREC>(val2));   \
}


// ******************************************
// *** Macro used by integer OP decimal<> ***
// *** where OP is > >= < <= == !=        ***
// ******************************************
#define GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(_OPERATOR,_TYPE)              \
template<int dig, int prec>                                             \
inline int                                                              \
operator _OPERATOR (const _TYPE & val1,                                 \
                    const _DecimalT<dig, prec> & val2)                  \
{                                                                       \
   return ( _DecimalT<DEC_INT_DIG,DEC_INT_PREC>(val1) _OPERATOR val2);  \
}


// ****************************************
// *** Macro used by decimal<> OP float ***
// *** where OP is > >= < <= == !=      ***
// ****************************************
#define GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(_OPERATOR,_TYPE)          \
template<int dig, int prec>                                             \
inline int                                                              \
operator _OPERATOR ( const _DecimalT<dig, prec> & val1,                 \
                     const _TYPE & val2)                                \
{                                                                       \
   return ((_TYPE)val1 _OPERATOR val2);                                 \
}


// ****************************************
// *** Macro used by float OP decimal<> ***
// *** where OP is > >= < <= == !=      ***
// ****************************************
#define GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(_OPERATOR,_TYPE)          \
template<int dig, int prec>                                             \
inline int                                                              \
operator _OPERATOR (const _TYPE & val1,                                 \
                    const _DecimalT<dig, prec> & val2)                  \
{                                                                       \
   return (val1 _OPERATOR (_TYPE)val2);                                 \
}


// ************************************************
// *** Macro used by _ConvertDecimal OP integer ***
// *** where OP is + - * / > >= < <= == !=      ***
// ************************************************
#define GEN_1ST_CONV_DEC_FUNC_TAKE_INT(_OPERATOR,_TYPE,_RET_TYPE)       \
inline _RET_TYPE                                                        \
operator _OPERATOR ( const _ConvertDecimal & val1,                      \
                     const _TYPE & val2)                                \
{                                                                       \
   _ConvertDecimal tempVal2(DEC_INT_DIG, DEC_INT_PREC);                 \
   __itodec ( (unsigned char *)&tempVal2,                               \
             DEC_INT_DIG, DEC_INT_PREC, val2);                          \
   return (val1 _OPERATOR tempVal2);                                    \
}


// ************************************************
// *** Macro used by integer OP _ConvertDecimal ***
// *** where OP is + - * / > >= < <= == !=      ***
// ************************************************
#define GEN_2ND_CONV_DEC_FUNC_TAKE_INT(_OPERATOR,_TYPE,_RET_TYPE)       \
inline _RET_TYPE                                                        \
operator _OPERATOR ( const _TYPE & val1,                                \
                     const _ConvertDecimal & val2)                      \
{                                                                       \
   _ConvertDecimal tempVal1(DEC_INT_DIG, DEC_INT_PREC);                 \
   __itodec ( (unsigned char *)&tempVal1,                               \
             DEC_INT_DIG, DEC_INT_PREC, val1);                          \
   return (tempVal1 _OPERATOR val2);                                    \
}


// **********************************************
// *** Macro used by _ConvertDecimal OP float ***
// *** where OP is + - * / > >= < <= == !=    ***
// **********************************************
#define GEN_1ST_CONV_DEC_FUNC_TAKE_FLT(_OPERATOR,_TYPE,_RET_TYPE)       \
inline _RET_TYPE                                                        \
operator _OPERATOR ( const _ConvertDecimal & val1,                      \
                     const _TYPE & val2)                                \
{                                                                       \
   double d = __dectod ( (unsigned char *)&val1,                        \
                         val1.DigitsOf(), val1.PrecisionOf());          \
   return (d _OPERATOR val2);                                           \
}


// **********************************************
// *** Macro used by float OP _ConvertDecimal ***
// *** where OP is + - * / > >= < <= == !=    ***
// **********************************************
#define GEN_2ND_CONV_DEC_FUNC_TAKE_FLT(_OPERATOR,_TYPE,_RET_TYPE)       \
inline _RET_TYPE                                                        \
operator _OPERATOR ( const _TYPE & val1,                                \
                     const _ConvertDecimal & val2)                      \
{                                                                       \
   double d = __dectod ( (unsigned char *)&val2,                        \
                        val2.DigitsOf(), val2.PrecisionOf());           \
   return (val1 _OPERATOR d);                                           \
}

// **********************************
// *** enum type used by __pcmp() ***
// **********************************
enum CmpType
{
   Equ = 1,
   NotEqu,
   Grt,
   GrtEqu,
   Sml,
   SmlEqu
};


// *********************
// *** class _DecErr ***
// *********************
class _DecErr { };

// ************************************
// *** classes derived from _DecErr ***
// ************************************
class _DecErrInvalidConst : public _DecErr { }; // Invalid BCD constant
class _DecErrInvalidParam : public _DecErr { }; // Invalid BCD parameters
class _DecErrDivByZero    : public _DecErr { }; // Divided by zero
class _DecErrOverflow     : public _DecErr { }; // Overflow
class _DecErrDigTruncated : public _DecErr { }; // Truncation in BCD digit
class _DecErrInternal     : public _DecErr { }; // Internal error

// *****************************
// *** class _ConvertDecimal ***
// *****************************

class _ConvertDecimal
{
private:
   char buf[32];
   int dig, prec;
public:

   _ConvertDecimal () {}

#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   explicit  inline _ConvertDecimal (char * val) throw(_DecErrInvalidConst);
#else
   inline _ConvertDecimal (char * val) throw(_DecErrInvalidConst);
#endif

   _ConvertDecimal (int val1, int val2) { dig = val1; prec = val2; }
   _ConvertDecimal &operator -()
   {
      int bufSize = (dig >> 1) + 1;

      buf[bufSize - 1] = (buf[bufSize - 1] & 0xF0) |
                      (((buf[bufSize - 1] & 0x0F) == 0x0F) ? 0x0D : 0x0F);
      return *this;
   }
   operator long double ()
   {
      return ( __dectod ( (unsigned char *)buf, dig, prec));
   }
   operator double ()
   {
      return ( __dectod ( (unsigned char *)buf, dig, prec));
   }
   operator float ()
   {
      return ( __dectod ( (unsigned char *)buf, dig, prec));
   }
   operator signed long ()
   {
      return ( (signed long)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator signed int ()
   {
      return ( (signed int)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator signed short ()
   {
      return ( (signed short)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator signed char ()
   {
      return ( (signed char)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator unsigned long ()
   {
      return ( (unsigned long)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator unsigned int ()
   {
      return ( (unsigned int)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator unsigned short ()
   {
      return ( (unsigned short)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator unsigned char ()
   {
      return ( (unsigned char)__dectoi ( (unsigned char *)buf, dig, prec));
   }
   operator char ()
   {
      return ( (char)__dectoi ( (unsigned char *)buf, dig, prec));
   }
#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   operator bool ()
   {
      return ( (bool)__dectoi ( (unsigned char *)buf, dig, prec));
   }
#endif
#if defined(_LONG_LONG)
   operator long long ()
   {
      return ( (long long)__dectoll ( (unsigned char *)buf, dig, prec));
   }
   operator unsigned long long ()
   {
      return ( (unsigned long long)__dectoll( (unsigned char *)buf, dig, prec));
   }
#endif
   int  DigitsOf    () const             { return dig; }
   int  PrecisionOf () const             { return prec; }
};

inline _ConvertDecimal::_ConvertDecimal (char * val)
      throw(_DecErrInvalidConst)
{
   int positive = __NONZERO;
   int notAllZero = 0;
   int NumDig;
   int counter, bufCounter, digVal, precVal, decVal;
   char tempVal[DEC_DIG * 2 + 1];
   int retErr = 0;

   memset ((char *)tempVal, 0, DEC_DIG * 2 + 1);

   // look for +/- sign
   if (val[0] == '-')
   {
      positive = __ZERO;
      val ++;
   }
   else if (val[0] == '+')
      val ++;

   char * decPosPtr = strstr( val, ".");
   digVal = strlen(val);

   if (decPosPtr != NULL)                       // contains '.'
   {
      digVal--;
      precVal = digVal - (int)(decPosPtr - val);
      decVal = digVal - precVal;
      counter = 0;
      NumDig = 0;
      for (char * ptr = val;
           ptr < decPosPtr;
           ptr++, counter++, NumDig++ )
      {
         notAllZero += (tempVal[DEC_DIG - decVal + counter] = *ptr - '0');
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
         if (*ptr < '0' || *ptr > '9')
         {
            _DecErrInvalidConst DecErr;         // Invalid digit
            throw (DecErr);
         }
#endif
      }
      counter = 0;
      for (char *ptr2 = decPosPtr + 1;
           *ptr2 != '\0';
           ptr2++, counter++, NumDig++)
      {
         notAllZero += (tempVal[DEC_DIG + counter] = *ptr2 - '0');
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
         if (*ptr2 < '0' || *ptr2 > '9')
         {
            _DecErrInvalidConst DecErr;         // Invalid digit
            throw (DecErr);
         }
#endif
      }
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
      if (NumDig > DEC_DIG)
      {
         _DecErrInvalidConst DecErr;            // Number of digits > DEC_DIG
         throw (DecErr);
      }
#endif
   }
   else                                         // Does not contain '.'
   {
      precVal = 0;
      decVal = digVal - precVal;
      counter = 0;
      for (char *ptr = val; *ptr != '\0'; ptr++, counter++)
      {
         notAllZero += (tempVal[DEC_DIG - decVal + counter] = *ptr - '0');
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
         if (*ptr < '0' || *ptr > '9')
         {
            _DecErrInvalidConst DecErr;         // Invalid digit
            throw (DecErr);
         }
#endif
      }
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
      if (counter > DEC_DIG)
      {
         _DecErrInvalidConst DecErr;            // Number of digits > DEC_DIG
         throw (DecErr);
      }
#endif
   }

   prec = precVal;
   dig = digVal;
   int dec = dig - prec;
   int bufSize = (dig >> 1) + 1;

   counter = DEC_DIG + prec;
   for (bufCounter = bufSize - 1;
        bufCounter >=0;
        bufCounter--, counter -= 2)
   {
      buf[bufCounter] = tempVal[counter] | (tempVal[counter - 1] << 4);
   }
   buf[bufSize - 1] = (buf[bufSize - 1] & 0xF0) |       // set the sign n
                      ((positive | !notAllZero)?0x0F:0x0D);
   if ( (dig & 0x00000001) == 0)
      buf[0] &= 0x0F;                                   // Reset leading zero
}



// ********************************
// *** class template _DecimalT ***
// ********************************
template<int dig, int prec>
class _DecimalT
{
public:
   // ********************
   // *** Constructors ***
   // ********************
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   inline _DecimalT (const int val = 0)          throw(_DecErrInvalidParam);
   inline _DecimalT (const unsigned int val)     throw(_DecErrInvalidParam);
   inline _DecimalT (const long val)             throw(_DecErrInvalidParam);
   inline _DecimalT (const unsigned long val)    throw(_DecErrInvalidParam);
   inline _DecimalT (const float val)            throw(_DecErrInvalidParam);
   inline _DecimalT (const double val)           throw(_DecErrInvalidParam);
   inline _DecimalT (const long double val)      throw(_DecErrInvalidParam);
   inline _DecimalT (const _ConvertDecimal val)  throw(_DecErr);
#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   inline _DecimalT (const bool val)             throw(_DecErrInvalidParam);
   template<int dig2, int prec2>
   inline _DecimalT (const _DecimalT<dig2, prec2>) throw(_DecErr);
#endif
#if defined(_LONG_LONG)
   inline _DecimalT (const long long val)        throw(_DecErrInvalidParam);
   inline _DecimalT (const unsigned long long val) throw(_DecErrInvalidParam);
#endif
#define _THROW_DECERRINVALIDPARAM throw(_DecErrInvalidParam)
#define _THROW_DECERR throw(_DecErr)
#else
   inline _DecimalT (const int val = 0);
   inline _DecimalT (const unsigned int val);
   inline _DecimalT (const long val);
   inline _DecimalT (const unsigned long val);
   inline _DecimalT (const float val);
   inline _DecimalT (const double val);
   inline _DecimalT (const long double val);
   inline _DecimalT (const _ConvertDecimal val);
#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   inline _DecimalT (const bool val);
   template<int dig2, int prec2>
   inline _DecimalT (const _DecimalT<dig2, prec2>);
#endif
#if defined(_LONG_LONG)
   inline _DecimalT (const long long val);
   inline _DecimalT (const unsigned long long val);
#endif
#define _THROW_DECERRINVALIDPARAM
#define _THROW_DECERR
#endif

   // ****************************
   // *** Conversion functions ***
   // ****************************
   inline operator _ConvertDecimal ();
   inline operator long double () const;
   inline operator double () const;
   inline operator float () const;
   inline operator signed int () const;
   inline operator signed long () const;
   inline operator signed short () const;
   inline operator signed char () const;
   inline operator unsigned int () const;
   inline operator unsigned long () const;
   inline operator unsigned short () const;
   inline operator unsigned char () const;
   inline operator char () const;
#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   inline operator bool () const;
#endif
#if defined(_LONG_LONG)
   inline operator signed long long () const;
   inline operator unsigned long long () const;
#endif

#if (__IBMCPP__ < 400) || (defined(__COMPAT__))
   // *****************
   // *** Operators ***
   // *****************
   inline _DecimalT<dig,prec>& operator = (const char *)
   {  memset (buf, 0, dig/2 + 1);
      buf[dig/2] = 0x0F;
      return *this;
   }
   // The assignment operator defined above is a dummy operator used to
   // eliminate ambiguity in the following situation :
   //      _DecimalT <10,2> dec; dec = 0;
   // If the above operator is not present, the compiler could either :
   //  1) convert the 0 to _DecimalT<10,2>  or
   //  2) convert the 0 to _ConvertDecimal (0 is treated as a
   //     NULL char * in this case)
   // before it gets assigned to dec.
   // In any case, users are not supposed to use this operator.

   // If we are using a newer compiler that supports the explicit
   // keyword, this operator is not needed because the _ConvertDecimal
   // constructors above will not be used as part of the conversion
   // sequence above that led to the ambiguity.

#endif

#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   template<int dig2, int prec2>
   inline _DecimalT<dig,prec>& operator = (const _DecimalT<dig2, prec2>);
#endif
   inline _DecimalT<dig,prec>& operator = (const _ConvertDecimal val);
   inline _DecimalT<dig,prec> operator ++ ();          // increment (prefix)
   inline _DecimalT<dig,prec> operator ++ (int);       // increment (postfix)
   inline _DecimalT<dig,prec> operator -- ();          // decrement (prefix)
   inline _DecimalT<dig,prec> operator -- (int);       // decrement (postfix)
   inline _DecimalT<dig,prec> operator +  () const;    // unary plus
   inline _DecimalT<dig,prec> operator -  () const;    // unary minus
   inline int operator ! () const;                     // negation

   // ************************
   // *** Member Functions ***
   // ************************
   const int DigitsOf () const;
   const int PrecisionOf () const;
   const int IsPositive () const;
   const int IsNegative () const;

private:
   char buf[dig/2+1];

   const int signNibble () const;
   void SetPositive ();
   void SetNegative ();

};


// ********************
// *** Constructors ***
// ********************
template<int dig, int prec>
inline
_DecimalT<dig,prec>::_DecimalT (const _ConvertDecimal val)
_THROW_DECERR
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __dectodec (val.DigitsOf(), val.PrecisionOf(), dig, prec,
               (char *)&val, buf, __ZERO);
}

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const int val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __itodec ( (unsigned char *)buf, dig, prec, val);
}

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const unsigned int val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __itodec ( (unsigned char *)buf, dig, prec, val);
}

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const long val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __itodec ( (unsigned char *)buf, dig, prec, val);
}

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const unsigned long val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __itodec ( (unsigned char *)buf, dig, prec, val);
}

#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const bool val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }

#endif

   __itodec ( (unsigned char *)buf, dig, prec, val);
}

template<int dig, int prec>
template<int dig2, int prec2>
inline _DecimalT<dig,prec>::_DecimalT (const _DecimalT<dig2, prec2> val)
_THROW_DECERR
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }

#endif

   __dectodec(dig2, prec2, dig, prec,
              (char *)&val, (char *)buf, __ZERO);
}
#endif

#if defined(_LONG_LONG)
template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const long long val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __lltodec ( (unsigned char *)buf, dig, prec, val);
}

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const unsigned long long val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __lltodec ( (unsigned char *)buf, dig, prec, val);
}
#endif

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const float val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __dtodec ( (unsigned char *)buf, dig, prec, val);
}

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const double val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __dtodec ( (unsigned char *)buf, dig, prec, val);
}

template<int dig, int prec>
inline _DecimalT<dig,prec>::_DecimalT (const long double val)
_THROW_DECERRINVALIDPARAM
{
#if (_DEBUG || _DEBUG_DECIMAL) && !_NODEBUG_DECIMAL
   if (dig > DEC_DIG || dig < 1 || dig < prec || prec < 0)
   {
      _DecErrInvalidParam DecErr;
      throw (DecErr);
   }
#endif

   __dtodec ( (unsigned char *)buf, dig, prec, val);
}


// ************************
// *** Member Functions ***
// ************************

template<int dig, int prec>
inline const int _DecimalT<dig,prec>::DigitsOf () const
{
   return (const int)dig;
}

template<int dig, int prec>
inline const int _DecimalT<dig,prec>::PrecisionOf () const
{
   return (const int)prec;
}

template<int dig, int prec>
inline const int _DecimalT<dig,prec>::signNibble () const
{
   return (const int)(buf[dig >> 1] & 0x0F);
}

template<int dig, int prec>
inline void _DecimalT<dig,prec>::SetPositive ()
{
   buf[dig >> 1] |= 0x0F;
}

template<int dig, int prec>
inline void _DecimalT<dig,prec>::SetNegative ()
{
   int Lastbuf = dig >> 1;

   for (int counter = 0; counter < Lastbuf; counter ++)
   {
      if (buf[counter] != 0)
      {
         buf[Lastbuf] = (buf[Lastbuf] & 0xF0) | 0x0D;
         break;
      }
   }
   if ((buf[Lastbuf] & 0xF0) != 0)
      buf[Lastbuf] = (buf[Lastbuf] & 0xF0) | 0x0D;
}

template<int dig, int prec>
inline const int _DecimalT<dig,prec>::IsPositive () const
{
   char sign = signNibble();
   return ( sign == 0x0F || sign == 0x0A || sign == 0x0C || sign == 0x0E);
}

template<int dig, int prec>
inline const int _DecimalT<dig,prec>::IsNegative () const
{
   char sign = signNibble();
   return ( sign == 0x0D || sign == 0x0B);
}


// ***************************
// *** Conversion function ***
// ***************************

template<int dig, int prec>
_DecimalT<dig,prec>::operator _ConvertDecimal ()
{
   _ConvertDecimal temp(dig,prec);
   memcpy((char *)&temp, buf, (dig/2+1));
   return temp;
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator long double () const
{
   return (__dectod ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator double () const
{
   return (__dectod ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator float () const
{
   return (__dectod ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator signed int () const
{
   return ((signed int)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator signed long () const
{
   return ((signed long)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator signed short () const
{
   return ((signed short)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator signed char () const
{
   return ((signed char)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator unsigned int () const
{
   return ((unsigned int)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator unsigned long () const
{
   return ((unsigned long)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator unsigned short () const
{
   return ((unsigned short)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator unsigned char () const
{
   return ((unsigned char)__dectoi ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator char () const
{
   return ((char)__dectoi ( (unsigned char *)buf, dig, prec));
}

#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
template<int dig, int prec>
_DecimalT<dig,prec>::operator bool () const
{
   return ((bool)__dectoi ( (unsigned char *)buf, dig, prec));
}
#endif

#if defined(_LONG_LONG)
template<int dig, int prec>
_DecimalT<dig,prec>::operator signed long long () const
{
   return ((signed long long)__dectoll ( (unsigned char *)buf, dig, prec));
}

template<int dig, int prec>
_DecimalT<dig,prec>::operator unsigned long long () const
{
   return ((unsigned long long)__dectoll ( (unsigned char *)buf, dig, prec));
}
#endif

// ***************************
// *** Assignment operator ***
// ***************************
#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
template<int dig, int prec>
template<int dig2, int prec2>
inline _DecimalT<dig, prec>&
_DecimalT<dig,prec>::operator = (const _DecimalT<dig2, prec2> val)
{
   __dectodec(dig2, prec2, dig, prec,
              (char *)&val, (char *)buf, __ZERO);

   return *this;
}
#endif

template<int dig, int prec>
inline _DecimalT<dig, prec>&
_DecimalT<dig,prec>::operator = (const _ConvertDecimal val)
{
   __dectodec(val.DigitsOf(), val.PrecisionOf(), dig, prec,
              (char *)&val, (char *)buf, __ZERO);

   return *this;
}


// *****************
// *** Operators ***
// *****************

// ******************
// *** unary plus ***
// ******************
template<int dig, int prec>
inline _DecimalT<dig,prec>
_DecimalT<dig,prec>::operator + () const
{
   return (*this);
}

// *******************
// *** unary minus ***
// *******************
template<int dig, int prec>
inline _DecimalT<dig,prec>
_DecimalT<dig,prec>::operator - () const
{
   _DecimalT<dig, prec> tempVal = *this;

   if (tempVal.IsPositive())
      tempVal.SetNegative();
   else if (tempVal.IsNegative())
      tempVal.SetPositive();

   return (tempVal);
}


// **************************
// *** increment (prefix) ***
// **************************
template<int dig, int prec>
inline _DecimalT<dig,prec>
_DecimalT<dig,prec>::operator ++ ()
{
   const int thisBufSize = dig / 2 + 1;
   char one = 0x1F;
   char tempbuf[__MAX_BUF_SIZE];

   __padd(tempbuf, dig, 0,
          this->buf, dig, 0,
          (char*)&one, 1, prec);

   memcpy (this->buf, tempbuf + __MAX_BUF_SIZE - thisBufSize, thisBufSize);

   return (*this);
}

// ***************************
// *** increment (postfix) ***
// ***************************
template<int dig, int prec>
inline _DecimalT<dig,prec>
_DecimalT<dig,prec>::operator ++ (int)
{
   const int thisBufSize = dig / 2 + 1;
   _DecimalT <dig, prec> OrigVal = *this;
   char one = 0x1F;
   char tempbuf[__MAX_BUF_SIZE];

   __padd(tempbuf, dig, 0,
          this->buf, dig, 0,
          (char*)&one, 1, prec);

   memcpy (this->buf, tempbuf + __MAX_BUF_SIZE - thisBufSize, thisBufSize);

   return (OrigVal);
}

// **************************
// *** decrement (prefix) ***
// **************************
template<int dig, int prec>
inline _DecimalT<dig,prec>
_DecimalT<dig,prec>::operator -- ()
{
   const int thisBufSize = dig / 2 + 1;
   char one = 0x1F;
   char tempbuf[__MAX_BUF_SIZE];

   __psub(tempbuf, dig, 0,
          this->buf, dig, 0,
          (char*)&one, 1, prec);

   memcpy (this->buf, tempbuf + __MAX_BUF_SIZE - thisBufSize, thisBufSize);

   return (*this);
}


// ***************************
// *** decrement (postfix) ***
// ***************************
template<int dig, int prec>
inline _DecimalT<dig,prec>
_DecimalT<dig,prec>::operator -- (int)
{
   const int thisBufSize = dig / 2 + 1;

   _DecimalT <dig, prec> OrigVal = *this;
   char one = 0x1F;
   char tempbuf[__MAX_BUF_SIZE];

   __psub(tempbuf, dig, 0,
          this->buf, dig, 0,
          (char*)&one, 1, prec);

   memcpy (this->buf, tempbuf + __MAX_BUF_SIZE - thisBufSize, thisBufSize);

   return (OrigVal);
}


// ****************
// *** negation ***
// ****************
template<int dig, int prec>
inline int
_DecimalT<dig,prec>::operator ! () const
{
   return (*this == (_ConvertDecimal)"0");
}


//////////////////////////////////////////////
// Operators defined by function templates  //
// --------------------------------------   //
// Multiplicative : *, /                    //
// Additive       : +, -                    //
// Relational     : <, >, <=, >=            //
// Equality       : ==, !=                  //
//                : *=, /=                  //
//                : +=, -=                  //
//////////////////////////////////////////////

// *****************************************
// *** Function Templates for operator + ***
// *****************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT < _ADD_RET_TYPE(dig1, prec1, dig2, prec2) >
operator + (const _DecimalT<dig1, prec1> & val1,
            const _DecimalT<dig2, prec2> & val2)
{
   _DecimalT <_ADD_RET_TYPE(dig1, prec1, dig2, prec2)> RetResult;

   int RetBufSize = RetResult.DigitsOf() / 2 + 1;
   int maxp = pmax(prec1, prec2);

   char tempbuf[__MAX_BUF_SIZE];

   __padd(tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
          (char *)&val1, dig1, maxp - prec1,
          (char *)&val2, dig2, maxp - prec2);

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,char,          _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,short,         _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,int,           _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,long,          _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned char, _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned short,_ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned int,  _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned long, _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,double,        _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,float,         _ADD_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(+,long double,   _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,char,          _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,short,         _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,int,           _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,long,          _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned char, _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned short,_ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned int,  _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,unsigned long, _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,double,        _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,float,         _ADD_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(+,long double,   _ADD_RET_TYPE)


// *****************************************
// *** Function Templates for operator - ***
// *****************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT < _SUB_RET_TYPE(dig1, prec1, dig2, prec2) >
operator - (const _DecimalT<dig1, prec1> & val1,
            const _DecimalT<dig2, prec2> & val2)
{
   _DecimalT <_SUB_RET_TYPE(dig1, prec1, dig2, prec2)> RetResult;

   int RetBufSize = RetResult.DigitsOf() / 2 + 1;
   int maxp = pmax(prec1, prec2);

   char tempbuf[__MAX_BUF_SIZE];

   __psub(tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
          (char *)&val1, dig1, maxp - prec1,
          (char *)&val2, dig2, maxp - prec2);

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,char,          _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,short,         _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,int,           _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,long,          _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned char, _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned short,_SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned int,  _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned long, _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,double,        _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,float,         _SUB_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(-,long double,   _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,char,          _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,short,         _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,int,           _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,long,          _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned char, _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned short,_SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned int,  _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,unsigned long, _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,double,        _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,float,         _SUB_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(-,long double,   _SUB_RET_TYPE)


// *****************************************
// *** Function Templates for operator * ***
// *****************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT < _MUL_RET_TYPE(dig1, prec1, dig2, prec2) >
operator * (const _DecimalT<dig1, prec1> & val1,
            const _DecimalT<dig2, prec2> & val2)
{
   const int maxp = prec1 + prec2;
   char tempBuf[__MAX_BUF_SIZE];

   _DecimalT<_MUL_RET_TYPE(dig1, prec1, dig2, prec2)> RetResult;

   int RetBufSize = RetResult.DigitsOf() / 2 + 1;

   __pmpy ( tempBuf, RetResult.DigitsOf(), RetResult.PrecisionOf()-maxp,
            (char *)&val1, dig1,
            (char *)&val2, dig2);

   memcpy ((char *)&RetResult, tempBuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,char,          _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,short,         _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,int,           _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,long,          _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned char, _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned short,_MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned int,  _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned long, _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,double,        _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,float,         _MUL_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(*,long double,   _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,char,          _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,short,         _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,int,           _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,long,          _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned char, _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned short,_MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned int,  _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,unsigned long, _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,double,        _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,float,         _MUL_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(*,long double,   _MUL_RET_TYPE)


// *****************************************
// *** Function Templates for operator / ***
// *****************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT < _DIV_RET_TYPE(dig1, prec1, dig2, prec2) >
operator / (const _DecimalT<dig1, prec1> & val1,
            const _DecimalT<dig2, prec2> & val2)
{
   _DecimalT<_DIV_RET_TYPE(dig1, prec1, dig2, prec2)> RetResult;

   int adjq = prec2 - prec1 + RetResult.PrecisionOf();

   __pdiv ( (char *)&RetResult, DEC_DIG, 0,
            (char *)&val1, dig1, adjq,
            (char *)&val2, dig2, 0);

   return (RetResult);
}


GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,char,          _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,short,         _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,int,           _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,long,          _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned char, _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned short,_DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned int,  _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned long, _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,double,        _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,float,         _DIV_RET_TYPE)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_DEC(/,long double,   _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,char,          _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,short,         _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,int,           _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,long,          _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned char, _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned short,_DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned int,  _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,unsigned long, _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,double,        _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,float,         _DIV_RET_TYPE)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_DEC(/,long double,   _DIV_RET_TYPE)


// *****************************************
// *** Function Templates for operator > ***
// *****************************************
template<int dig1, int prec1, int dig2, int prec2>
inline int
operator > (const _DecimalT<dig1, prec1> & val1,
            const _DecimalT<dig2, prec2> & val2)
{
   return ( __pcmp( (char *)&val1, dig1, prec1 > prec2 ? 0 : prec2 - prec1,
                    (char *)&val2, dig2, prec2 > prec1 ? 0 : prec1 - prec2,
                    Grt));
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,long)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned long)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(>,double)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(>,float)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(>,long double)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,long)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>,unsigned long)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(>,double)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(>,float)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(>,long double)



// ******************************************
// *** Function Templates for operator >= ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline int
operator >= (const _DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   return ( __pcmp( (char *)&val1, dig1, prec1 > prec2 ? 0 : prec2 - prec1,
                    (char *)&val2, dig2, prec2 > prec1 ? 0 : prec1 - prec2,
                    GrtEqu));
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,long)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned long)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(>=,double)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(>=,float)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(>=,long double)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,long)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(>=,unsigned long)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(>=,double)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(>=,float)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(>=,long double)


// *****************************************
// *** Function Templates for operator < ***
// *****************************************
template<int dig1, int prec1, int dig2, int prec2>
inline int
operator < (const _DecimalT<dig1, prec1> & val1,
            const _DecimalT<dig2, prec2> & val2)
{
   return ( __pcmp( (char *)&val1, dig1, prec1 > prec2 ? 0 : prec2 - prec1,
                    (char *)&val2, dig2, prec2 > prec1 ? 0 : prec1 - prec2,
                    Sml));
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,long)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned long)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(<,double)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(<,float)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(<,long double)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,long)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<,unsigned long)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(<,double)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(<,float)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(<,long double)


// ******************************************
// *** Function Templates for operator <= ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline int
operator <= (const _DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   return ( __pcmp( (char *)&val1, dig1, prec1 > prec2 ? 0 : prec2 - prec1,
                    (char *)&val2, dig2, prec2 > prec1 ? 0 : prec1 - prec2,
                    SmlEqu));

}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,long)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned long)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(<=,double)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(<=,float)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(<=,long double)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,long)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(<=,unsigned long)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(<=,double)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(<=,float)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(<=,long double)


// ******************************************
// *** Function Templates for operator == ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline int
operator == (const _DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   return ( __pcmp( (char *)&val1, dig1, prec1 > prec2 ? 0 : prec2 - prec1,
                    (char *)&val2, dig2, prec2 > prec1 ? 0 : prec1 - prec2,
                    Equ));
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,long)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned long)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(==,double)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(==,float)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(==,long double)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,long)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(==,unsigned long)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(==,double)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(==,float)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(==,long double)


// ******************************************
// *** Function Templates for operator != ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline int
operator != (const _DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   return ( __pcmp( (char *)&val1, dig1, prec1 > prec2 ? 0 : prec2 - prec1,
                    (char *)&val2, dig2, prec2 > prec1 ? 0 : prec1 - prec2,
                    NotEqu));
}

GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,long)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned char)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned short)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned int)
GEN_1ST_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned long)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(!=,double)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(!=,float)
GEN_1ST_DEC_TEMPLATE_FLT_FUNC_RET_INT(!=,long double)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,long)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned char)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned short)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned int)
GEN_2ND_DEC_TEMPLATE_FUNC_RET_INT(!=,unsigned long)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(!=,double)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(!=,float)
GEN_2ND_DEC_TEMPLATE_FLT_FUNC_RET_INT(!=,long double)


// ******************************************
// *** Function Templates for operator += ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT<dig1,prec1>
operator += (_DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   val1 = val1 + val2;
   return val1;
}

template<int dig1, int prec1>
inline _DecimalT<dig1,prec1>
operator += (_DecimalT<dig1, prec1> & val1,
             const _ConvertDecimal & val2)
{
   val1 = val1 + val2;
   return val1;
}

GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,long)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,unsigned char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,unsigned short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,unsigned int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(+,unsigned long)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(+,float)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(+,double)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(+,long double)


// ******************************************
// *** Function Templates for operator -= ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT<dig1,prec1>
operator -= (_DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   val1 = val1 - val2;
   return val1;
}

template<int dig1, int prec1>
inline _DecimalT<dig1,prec1>
operator -= (_DecimalT<dig1, prec1> & val1,
             const _ConvertDecimal & val2)
{
   val1 = val1 - val2;
   return val1;
}

GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,long)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,unsigned char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,unsigned short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,unsigned int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(-,unsigned long)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(-,float)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(-,double)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(-,long double)


// ******************************************
// *** Function Templates for operator *= ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT<dig1,prec1>
operator *= (_DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   val1 = val1 * val2;
   return val1;
}

template<int dig1, int prec1>
inline _DecimalT<dig1,prec1>
operator *= (_DecimalT<dig1, prec1> & val1,
             const _ConvertDecimal & val2)
{
   val1 = val1 * val2;
   return val1;
}

GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,long)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,unsigned char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,unsigned short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,unsigned int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(*,unsigned long)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(*,float)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(*,double)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(*,long double)


// ******************************************
// *** Function Templates for operator /= ***
// ******************************************
template<int dig1, int prec1, int dig2, int prec2>
inline _DecimalT<dig1,prec1>
operator /= (_DecimalT<dig1, prec1> & val1,
             const _DecimalT<dig2, prec2> & val2)
{
   val1 = val1 / val2;
   return val1;
}

template<int dig1, int prec1>
inline _DecimalT<dig1,prec1>
operator /= (_DecimalT<dig1, prec1> & val1,
             const _ConvertDecimal & val2)
{
   val1 = val1 / val2;
   return val1;
}

GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,long)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,unsigned char)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,unsigned short)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,unsigned int)
GEN_DEC_TEMPLATE_FUNC_INT_RET_DEC(/,unsigned long)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(/,float)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(/,double)
GEN_DEC_TEMPLATE_FUNC_FLT_RET_DEC(/,long double)


//////////////////////////////////////////////
// Operators defined for _ConvertDecimal    //
// --------------------------------------   //
// Multiplicative : *, /                    //
// Additive       : +, -                    //
// Relational     : <, >, <=, >=            //
// Equality       : ==, !=                  //
//////////////////////////////////////////////

// *****************************************
// *** _ConvertDecimal + _ConvertDecimal ***
// *****************************************
inline _ConvertDecimal
operator + (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _ADD_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 val2.DigitsOf(), val2.PrecisionOf()));
   char tempbuf[__MAX_BUF_SIZE];
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   __padd (tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
           (char *)&val1, val1.DigitsOf(), maxp - val1.PrecisionOf(),
           (char *)&val2, val2.DigitsOf(), maxp - val2.PrecisionOf());

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

// ***********************************
// *** _ConvertDecimal + _DecimalT ***
// ***********************************
template<int dig2, int prec2>
inline _ConvertDecimal
operator + (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   _ConvertDecimal RetResult (
                   _ADD_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 dig2, prec2));
   char tempbuf[__MAX_BUF_SIZE];
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   __padd (tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
           (char *)&val1, val1.DigitsOf(), maxp - val1.PrecisionOf(),
           (char *)&val2, dig2, maxp - prec2);

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

// ***********************************
// *** _DecimalT + _ConvertDecimal ***
// ***********************************
template<int dig1, int prec1>
inline _ConvertDecimal
operator + (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _ADD_RET_TYPE(dig1, prec1,
                                 val2.DigitsOf(), val2.PrecisionOf()));
   char tempbuf[__MAX_BUF_SIZE];
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = pmax(prec1, val2.PrecisionOf());

   __padd (tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
           (char *)&val1, dig1, maxp - prec1,
           (char *)&val2, val2.DigitsOf(), maxp - val2.PrecisionOf());

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}


GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,char,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,short,         _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,int,           _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,long,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,unsigned char, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,unsigned short,_ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,unsigned int,  _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (+,unsigned long, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (+,float,         float)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (+,double,        double)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (+,long double,   long double)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,char,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,short,         _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,int,           _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,long,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,unsigned char, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,unsigned short,_ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,unsigned int,  _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (+,unsigned long, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (+,float,         float)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (+,double,        double)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (+,long double,   long double)


// *****************************************
// *** _ConvertDecimal - _ConvertDecimal ***
// *****************************************
inline _ConvertDecimal
operator - (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _ADD_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 val2.DigitsOf(), val2.PrecisionOf()));
   char tempbuf[__MAX_BUF_SIZE];
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   __psub (tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
           (char *)&val1, val1.DigitsOf(), maxp - val1.PrecisionOf(),
           (char *)&val2, val2.DigitsOf(), maxp - val2.PrecisionOf());

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

// ***********************************
// *** _ConvertDecimal - _DecimalT ***
// ***********************************
template<int dig2, int prec2>
inline _ConvertDecimal
operator - (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   _ConvertDecimal RetResult (
                   _SUB_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 dig2, prec2));
   char tempbuf[__MAX_BUF_SIZE];
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   __psub (tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
           (char *)&val1, val1.DigitsOf(), maxp - val1.PrecisionOf(),
           (char *)&val2, dig2, maxp - prec2);

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

// ***********************************
// *** _DecimalT - _ConvertDecimal ***
// ***********************************
template<int dig1, int prec1>
inline _ConvertDecimal
operator - (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _SUB_RET_TYPE(dig1, prec1,
                                 val2.DigitsOf(), val2.PrecisionOf()));
   char tempbuf[__MAX_BUF_SIZE];
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = pmax(prec1, val2.PrecisionOf());

   __psub (tempbuf, RetResult.DigitsOf(), RetResult.PrecisionOf() - maxp,
           (char *)&val1, dig1, maxp - prec1,
           (char *)&val2, val2.DigitsOf(), maxp - val2.PrecisionOf());

   memcpy ((char *)&RetResult, tempbuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}


GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,char,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,short,         _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,int,           _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,long,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,unsigned char, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,unsigned short,_ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,unsigned int,  _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (-,unsigned long, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (-,float,         float)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (-,double,        double)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (-,long double,   long double)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,char,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,short,         _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,int,           _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,long,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,unsigned char, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,unsigned short,_ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,unsigned int,  _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (-,unsigned long, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (-,float,         float)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (-,double,        double)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (-,long double,   long double)


// *****************************************
// *** _ConvertDecimal * _ConvertDecimal ***
// *****************************************
inline _ConvertDecimal
operator * (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _MUL_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 val2.DigitsOf(), val2.PrecisionOf()));
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = val1.PrecisionOf() + val2.PrecisionOf();
   char tempBuf[__MAX_BUF_SIZE];

   __pmpy ( tempBuf, RetResult.DigitsOf(), RetResult.PrecisionOf()-maxp,
            (char *)&val1, val1.DigitsOf(),
            (char *)&val2, val2.DigitsOf());

   memcpy ((char *)&RetResult, tempBuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

// ***********************************
// *** _ConvertDecimal * _DecimalT ***
// ***********************************
template<int dig2, int prec2>
inline _ConvertDecimal
operator * (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   _ConvertDecimal RetResult (
                   _MUL_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 dig2, prec2));
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = val1.PrecisionOf() + prec2;
   char tempBuf[__MAX_BUF_SIZE];

   __pmpy ( tempBuf, RetResult.DigitsOf(), RetResult.PrecisionOf()-maxp,
            (char *)&val1, val1.DigitsOf(),
            (char *)&val2, dig2);

   memcpy ((char *)&RetResult, tempBuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

// ***********************************
// *** _DecimalT * _ConvertDecimal ***
// ***********************************
template<int dig1, int prec1>
inline _ConvertDecimal
operator * (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _MUL_RET_TYPE(dig1, prec1,
                                 val2.DigitsOf(), val2.PrecisionOf()));
   const int RetBufSize = (RetResult.DigitsOf() >> 1) + 1;
   const int maxp = prec1 + val2.PrecisionOf();
   char tempBuf[__MAX_BUF_SIZE];

   __pmpy ( tempBuf, RetResult.DigitsOf(), RetResult.PrecisionOf()-maxp,
            (char *)&val1, dig1,
            (char *)&val2, val2.DigitsOf());

   memcpy ((char *)&RetResult, tempBuf + __MAX_BUF_SIZE - RetBufSize,
           RetBufSize);

   return (RetResult);
}

GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,char,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,short,         _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,int,           _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,long,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,unsigned char, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,unsigned short,_ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,unsigned int,  _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (*,unsigned long, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (*,float,         float)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (*,double,        double)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (*,long double,   long double)


GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,char,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,short,         _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,int,           _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,long,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,unsigned char, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,unsigned short,_ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,unsigned int,  _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (*,unsigned long, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (*,float,         float)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (*,double,        double)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (*,long double,   long double)


// *****************************************
// *** _ConvertDecimal / _ConvertDecimal ***
// *****************************************
inline _ConvertDecimal
operator / (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _DIV_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 val2.DigitsOf(), val2.PrecisionOf()));

   int adjq = val2.PrecisionOf() - val1.PrecisionOf()+ RetResult.PrecisionOf();

   __pdiv ( (char *)&RetResult, DEC_DIG, 0,
            (char *)&val1, val1.DigitsOf(), adjq,
            (char *)&val2, val2.DigitsOf(), 0);

   return (RetResult);

}

// ***********************************
// *** _ConvertDecimal / _DecimalT ***
// ***********************************
template<int dig2, int prec2>
inline _ConvertDecimal
operator / (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   _ConvertDecimal RetResult (
                   _DIV_RET_TYPE(val1.DigitsOf(), val1.PrecisionOf(),
                                 dig2, prec2));

   int adjq = prec2 - val1.PrecisionOf() + RetResult.PrecisionOf();

   __pdiv ( (char *)&RetResult, DEC_DIG, 0,
            (char *)&val1, val1.DigitsOf(), adjq,
            (char *)&val2, dig2, 0);

   return (RetResult);
}

// ***********************************
// *** _DecimalT / _ConvertDecimal ***
// ***********************************
template<int dig1, int prec1>
inline _ConvertDecimal
operator / (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   _ConvertDecimal RetResult (
                   _DIV_RET_TYPE(dig1, prec1,
                                 val2.DigitsOf(), val2.PrecisionOf()));

   int adjq = val2.PrecisionOf() - prec1 + RetResult.PrecisionOf();

   __pdiv ( (char *)&RetResult, DEC_DIG, 0,
            (char *)&val1, dig1, adjq,
            (char *)&val2, val2.DigitsOf(), 0);

   return (RetResult);
}


GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,char,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,short,         _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,int,           _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,long,          _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,unsigned char, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,unsigned short,_ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,unsigned int,  _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (/,unsigned long, _ConvertDecimal)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (/,float,         float)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (/,double,        double)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (/,long double,   long double)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,char,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,short,         _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,int,           _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,long,          _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,unsigned char, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,unsigned short,_ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,unsigned int,  _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (/,unsigned long, _ConvertDecimal)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (/,float,         float)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (/,double,        double)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (/,long double,   long double)


// *****************************************
// *** _ConvertDecimal > _ConvertDecimal ***
// *****************************************
inline int
operator > (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    Grt));
}


// ***********************************
// *** _ConvertDecimal > _DecimalT ***
// ***********************************
template <int dig2, int prec2>
inline int
operator > (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, dig2, maxp - prec2,
                    Grt));
}

// ***********************************
// *** _DecimalT > _ConvertDecimal ***
// ***********************************
template <int dig1, int prec1>
inline int
operator > (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(dig1, val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, dig1, maxp - prec1,
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    Grt));
}


GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,char,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,short,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,int,           int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,long,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,unsigned char, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,unsigned short,int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,unsigned int,  int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>,unsigned long, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (>,float,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (>,double,        int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (>,long double,   int)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,char,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,short,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,int,           int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,long,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,unsigned char, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,unsigned short,int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,unsigned int,  int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>,unsigned long, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (>,float,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (>,double,        int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (>,long double,   int)

// ******************************************
// *** _ConvertDecimal >= _ConvertDecimal ***
// ******************************************
inline int
operator >= (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    GrtEqu));
}

// ************************************
// *** _ConvertDecimal >= _DecimalT ***
// ************************************
template <int dig2, int prec2>
inline int
operator >= (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   return ( __pcmp( (char *)&val1, val1.DigitsOf(), maxp - val1.PrecisionOf(),
                    (char *)&val2, dig2, maxp - prec2,
                    GrtEqu));
}

// ************************************
// *** _DecimalT >= _ConvertDecimal ***
// ************************************
template <int dig1, int prec1>
inline int
operator >= (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(dig1, val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, dig1, maxp - prec1,
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    GrtEqu));
}

GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,char,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,short,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,int,           int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,long,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,unsigned char, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,unsigned short,int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,unsigned int,  int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (>=,unsigned long, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (>=,float,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (>=,double,        int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (>=,long double,   int)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,char,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,short,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,int,           int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,long,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,unsigned char, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,unsigned short,int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,unsigned int,  int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (>=,unsigned long, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (>=,float,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (>=,double,        int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (>=,long double,   int)


// *****************************************
// *** _ConvertDecimal < _ConvertDecimal ***
// *****************************************
inline int
operator < (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    Sml));
}

// ***********************************
// *** _ConvertDecimal < _DecimalT ***
// ***********************************
template <int dig2, int prec2>
inline int
operator < (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, dig2, maxp - prec2,
                    Sml));
}

// ***********************************
// *** _DecimalT < _ConvertDecimal ***
// ***********************************
template <int dig1, int prec1>
inline int
operator < (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(dig1, val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, dig1, maxp - prec1,
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    Sml));
}


GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,char,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,short,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,int,           int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,long,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,unsigned char, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,unsigned short,int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,unsigned int,  int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<,unsigned long, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (<,float,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (<,double,        int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (<,long double,   int)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,char,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,short,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,int,           int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,long,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,unsigned char, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,unsigned short,int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,unsigned int,  int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<,unsigned long, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (<,float,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (<,double,        int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (<,long double,   int)

// ******************************************
// *** _ConvertDecimal <= _ConvertDecimal ***
// ******************************************
inline int
operator <= (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    SmlEqu));
}

// ***********************************
// *** _ConvertDecimal <= _DecimalT ***
// ***********************************
template <int dig2, int prec2>
inline int
operator <= (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, dig2, maxp - prec2,
                    SmlEqu));
}

// ************************************
// *** _DecimalT <= _ConvertDecimal ***
// ************************************
template <int dig1, int prec1>
inline int
operator <= (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(dig1, val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, dig1, maxp - prec1,
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    SmlEqu));
}


GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,char,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,short,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,int,           int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,long,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,unsigned char, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,unsigned short,int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,unsigned int,  int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (<=,unsigned long, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (<=,float,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (<=,double,        int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (<=,long double,   int)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,char,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,short,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,int,           int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,long,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,unsigned char, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,unsigned short,int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,unsigned int,  int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (<=,unsigned long, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (<=,float,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (<=,double,        int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (<=,long double,   int)


// ******************************************
// *** _ConvertDecimal == _ConvertDecimal ***
// ******************************************
inline int
operator == (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    Equ));
}

// ***********************************
// *** _ConvertDecimal == _DecimalT ***
// ***********************************
template <int dig2, int prec2>
inline int
operator == (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, dig2, maxp - prec2,
                    Equ));
}

// ************************************
// *** _DecimalT == _ConvertDecimal ***
// ************************************
template <int dig1, int prec1>
inline int
operator == (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(dig1, val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, dig1, maxp - prec1,
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    Equ));
}

GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,char,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,short,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,int,           int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,long,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,unsigned char, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,unsigned short,int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,unsigned int,  int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (==,unsigned long, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (==,float,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (==,double,        int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (==,long double,   int)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,char,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,short,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,int,           int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,long,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,unsigned char, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,unsigned short,int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,unsigned int,  int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (==,unsigned long, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (==,float,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (==,double,        int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (==,long double,   int)


// *****************************************
// *** _ConvertDecimal != _ConvertDecimal ***
// *****************************************
inline int
operator != (const _ConvertDecimal & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    NotEqu));
}

// ***********************************
// *** _ConvertDecimal != _DecimalT ***
// ***********************************
template <int dig2, int prec2>
inline int
operator != (const _ConvertDecimal & val1, const _DecimalT<dig2,prec2> & val2)
{
   const int maxp = pmax(val1.PrecisionOf(), prec2);

   return ( __pcmp( (char *)&val1, val1.DigitsOf(),
                    maxp - val1.PrecisionOf(),
                    (char *)&val2, dig2, maxp - prec2,
                    NotEqu));
}

// ************************************
// *** _DecimalT != _ConvertDecimal ***
// ************************************
template <int dig1, int prec1>
inline int
operator != (const _DecimalT<dig1,prec1> & val1, const _ConvertDecimal & val2)
{
   const int maxp = pmax(dig1, val2.PrecisionOf());

   return ( __pcmp( (char *)&val1, dig1, maxp - prec1,
                    (char *)&val2, val2.DigitsOf(),
                    maxp - val2.PrecisionOf(),
                    NotEqu));
}

GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,char,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,short,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,int,           int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,long,          int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,unsigned char, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,unsigned short,int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,unsigned int,  int)
GEN_1ST_CONV_DEC_FUNC_TAKE_INT (!=,unsigned long, int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (!=,float,         int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (!=,double,        int)
GEN_1ST_CONV_DEC_FUNC_TAKE_FLT (!=,long double,   int)

GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,char,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,short,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,int,           int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,long,          int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,unsigned char, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,unsigned short,int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,unsigned int,  int)
GEN_2ND_CONV_DEC_FUNC_TAKE_INT (!=,unsigned long, int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (!=,float,         int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (!=,double,        int)
GEN_2ND_CONV_DEC_FUNC_TAKE_FLT (!=,long double,   int)

#if defined(IOSTREAMH)
inline ostream &
operator << (ostream &os, const _ConvertDecimal &val)
{
   char output[DEC_DIG+10];
   char format[15];
   sprintf (format, "%cD(%d,%d)", '%', val.DigitsOf(), val.PrecisionOf());
   sprintf (output, format, val);
   return (os << (char *)output);
}

template <int dig, int prec>
inline ostream &
operator << (ostream &os, const _DecimalT<dig,prec> &val)
{
   char output[DEC_DIG+10];
   char format[15];
   sprintf (format, "%cD(%d,%d)", '%', dig, prec);
   sprintf (output, format, val);
   return (os << (char *)output);
}

template <int dig, int prec>
inline istream &
operator >> (istream &is, _DecimalT<dig,prec> &val)
{
   char input[255];
   is >> input;
   val = _ConvertDecimal(input);
   return is;
}
#endif

#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__)) && \
    defined(__POSIX_LOCALE__)
#include <iosfwd>
namespace std {
_ENC_BEGIN
_LFS_BEGIN
_UTF32_BEGIN

// the following declaration is needed to prevent
// operator<<(ostream&, const _ConvertDecimal) from looping.
template<class _E, class _Tr>
        inline basic_ostream<_E, _Tr>& operator<<(
                basic_ostream<_E, _Tr>& _O, const char *_X);
_UTF32_END
_UTF32_USING
_LFS_END
_LFS_USING
_ENC_END
_ENC_USING

__USING(_ENC _LFS _UTF32,operator<<)

template<class _E, class _Tr>
inline basic_ostream<_E, _Tr> &
operator << (basic_ostream<_E, _Tr> &os, const _ConvertDecimal &val)
{
   char output[DEC_DIG+10];
   char format[15];
   sprintf (format, "%cD(%d,%d)", '%', val.DigitsOf(), val.PrecisionOf());
   sprintf (output, format, val);
   return (os << (char *)output);
}

template <int dig, int prec, class _E, class _Tr>
inline basic_ostream<_E, _Tr> &
operator << (basic_ostream<_E, _Tr> &os, const _DecimalT<dig,prec> &val)
{
   char output[DEC_DIG+10];
   char format[15];
   sprintf (format, "%cD(%d,%d)", '%', dig, prec);
   sprintf (output, format, val);
   return (os << (char *)output);
}

template <int dig, int prec, class _E, class _Tr>
inline basic_istream<_E, _Tr> &
operator >> (basic_istream<_E, _Tr> &is, _DecimalT<dig,prec> &val)
{
   char input[255];
   is >> input;
   val = _ConvertDecimal(input);
   return is;
}
} //namespace std;
#endif

} //extern "C++"

#pragma info(restore)


#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #if !defined(__LLP64_RTBND__)
      #pragma object_model(pop)
   #endif
#endif

#endif /* #ifndef __bcd_h                                         */

