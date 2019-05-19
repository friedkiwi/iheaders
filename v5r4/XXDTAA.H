#ifndef __xxdtaa_h
  #define __xxdtaa_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================== */
/*  Header File Name: xxdtaa.h                                        */
/*                                                                    */
/*  This header contains the declarations for the data area interface */
/*  functions.                                                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1991,2001                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================== */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #if defined (__EXTENDED__)

    #define _MAXDTAA_SIZE    2000   /* Maximum data area size         */

    typedef struct _DTAA_NAME_T {   /* Data area name structure       */
            char  dtaa_name[10];    /* Name of data area              */
            char  dtaa_lib[10];     /* Library containing data area   */
    }_DTAA_NAME_T;

    #ifdef __cplusplus
      extern "OS"
    #else
      #pragma linkage(QXXCHGDA, OS)
    #endif
    void   QXXCHGDA(_DTAA_NAME_T, short int, short int, char *);

    #ifdef __cplusplus
      extern "OS"
    #else
      #pragma linkage(QXXRTVDA, OS)
    #endif
    void   QXXRTVDA(_DTAA_NAME_T, short int, short int, char *);

  #endif /* #if defined (__EXTENDED__)                                */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* ifndef __xxdtaa_h */
