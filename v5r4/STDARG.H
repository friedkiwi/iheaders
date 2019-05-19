#ifndef   __stdarg_h
  #define __stdarg_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/*  Header File Name: stdarg.h                                       */
/*                                                                   */
/*  This header contains the declarations used for functions         */
/*  which have a variable number of arguments.                       */
/*                                                                   */
/*  The following assumptions have been made:                        */
/*      - the user specifies only a promoted type (int, long,        */
/*        double, decimal, struct or union) which can be converted   */
/*        into a pointer to type by adding a '*' after "type"        */
/*      - formal parameters are "right justified" within the         */
/*        storage they occupy.  For example, the address of a float  */
/*        parameter is the last half of the double to which it has   */
/*        been promoted.  This requires conversion in place by the   */
/*        compiler.                                                  */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1991,2003                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================= */

  #pragma datamodel(P128)

  #ifndef __va_list
    #define __va_list
    typedef char *va_list[2];
  #endif

  #define __VAOLD  0
  #define __VANEW  1

  #define __bndof(__ty)                                   \
              ( (sizeof(__ty) <= 2) ? (sizeof(__ty) - 1): \
              ( (sizeof(__ty) <= 4) ? 3 :               \
              ( (sizeof(__ty) <= 8) ? 7 : 15 ) ) )

  #define __bndup(__ptr, __ty) ( (__ptr) + __bndof(__ty) -      \
                           (((unsigned) (__ptr) - 1) & __bndof(__ty)) )

  #define va_arg(__ap, __type)                              \
    ( (__ap)[__VAOLD] = __bndup((__ap)[__VANEW], __type) ,  \
      (__ap)[__VANEW] = (__ap)[__VAOLD] + sizeof(__type),   \
      *(__type *)(__ap)[__VAOLD] )

  #define va_end(__ap)

  #define va_start(__ap, __arg)                             \
    ( (__ap)[__VANEW] = ((char *) &(__arg)) + sizeof(__arg) )

  #pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __stdarg_h                                          */
