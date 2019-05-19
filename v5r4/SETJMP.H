#ifndef   __setjmp_h
  #define __setjmp_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: setjmp.h                                        */
/*                                                                   */
/* This header contains the declarations used by the setjmp and      */
/* longjmp routines.                                                 */
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
  #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
        #define QBFC_EXTERN extern
     #else
        #define QBFC_EXTERN extern "C"
     #endif
     #define __QBFC_EXTERN  1
  #endif

  #ifndef __pointer_h
    #include <pointer.h>
  #endif

  #ifndef  __signal_h
    #include <signal.h>
  #endif

  #pragma datamodel(P128)

  #define SIGSETJMP_NOMASK   0
  #define SIGSETJMP_SETMASK  1


  typedef struct {           /* information needed by setjmp/longjmp */
    _INVPTR   __ptr1;
    _LBLPTR   __ptr2;
    int       __num;
  } jmp_buf[1];


  typedef struct  {         /* Jump buffer used by sigsetjmp/siglongjmp */
     jmp_buf   sigjmp_env;
     int       setmask;
     sigset_t  sigmask;
  } sigjmp_buf[1];


  void   longjmp   ( jmp_buf, int );

  #ifdef __cplusplus
    extern "builtin"
  #else
    #pragma linkage( __setjmp, builtin )
  #endif

  int     __setjmp(jmp_buf);

  #ifdef __cplusplus
    extern "builtin"
  #else
    #pragma linkage( __setjmp2, builtin )
  #endif

  void __setjmp2 ( _LBLPTR *);

  #define setjmp(env) __setjmp(env)


  QBFC_EXTERN void siglongjmp ( sigjmp_buf, int );
  QBFC_EXTERN void setsigjmp  ( sigjmp_buf, int );

  #define sigsetjmp(env, val)          \
       (setsigjmp(env, val),          \
        setjmp(env[0].sigjmp_env))


  #pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif  /* #ifndef __setjmp_h */
