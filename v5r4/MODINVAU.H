#pragma nomargins nosequence
#pragma checkout(suspend)

#ifndef __ILEC400__
extern "C" {
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:  mih/modinvau.h                                */
/*                                                                   */
/*  Descriptive: Modify Invocation Authority Attributes              */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1994, 1995, 2001                */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file provides the definitions and       */
/*               structure to be used with the MODINVAU MI           */
/*               instruction.                                        */
/*                                                                   */
/*  Header Files Included :                                          */
/*                                                                   */
/*  Macros List :                                                    */
/*                                                                   */
/*  Structure List : None                                            */
/*                                                                   */
/*  Function Prototype List :                                        */
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/*  ---- ------------ ----- ------ --------- ----------------------- */
/*  $A0= D28869       3D60  941118 ROCH      new include             */
/*  $A1= D98212.2    v5r1m0 112199 gchaney: Teraspace stage 2        */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __modinvau_h
#define __modinvau_h 1

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
    #pragma datamodel(P128)                                   /* @A1A*/
#endif                                                        /* @A1A*/

/* Acceptable values for MODINVAU_T.option                           */
#define MODINVAU_PROPAGATE 0
#define MODINVAU_SUPPRESS  1

typedef struct MODINVAU_T {          /* Template for MODINVAU        */
   char      option;
} MODINVAU_T;

#ifdef __ILEC400__
#pragma linkage( _MODINVAU, builtin )
#else
extern "builtin"
#endif
void    _MODINVAU ( MODINVAU_T*  t);

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
    #pragma datamodel(pop)                                    /* @A1A*/
#endif                                                        /* @A1A*/

#endif /* #ifndef __modinvau_h */

#ifndef __ILEC400__
}
#endif

#pragma checkout(resume)
