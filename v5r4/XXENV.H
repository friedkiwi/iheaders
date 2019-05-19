#ifndef __xxenv_h
  #define __xxenv_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================== */
/*  Header File Name: xxenv.h                                        */
/*                                                                    */
/*  This header contains the prototype declarations for the           */
/*  QPXXCALL and QPXXDLTE EPM environment handling programs.          */
/*  ILE procedures cannot be called with this interface.              */
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

   typedef int  _ENVNUM_T;
   typedef char _ENTNAME_T[100];
   typedef char _ENVID_T[10];

   typedef struct _ENVPGM_T {
       char pgmname[10];
       char pgmlib[10];
   } _ENVPGM_T;

   #ifdef __cplusplus
     extern "OS"
   #else
     #pragma linkage(QPXXCALL,OS)
   #endif
   void QPXXCALL (_ENTNAME_T, _ENVID_T, _ENVPGM_T *, ...);

   #ifdef __cplusplus
     extern "OS"
   #else
     #pragma linkage(QPXXDLTE,OS)
   #endif
   void QPXXDLTE (_ENVNUM_T, _ENVID_T);

   /* Special values for _ENVNUM_T in QPXXDLTE                   */

   #define _DLTE_MAIN     0       /* Delete MAIN environment     */
   #define _DLTE_BY_NAME (-1)     /* Delete User Controlled env. */
   #define _DLTE_ALL     (-2)     /* Delete all environments     */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif     /* ifndef __xxenv_h */
