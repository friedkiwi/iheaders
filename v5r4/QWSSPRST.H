/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QWSSPRST                                      */
/*                                                                   */
/* Descriptive Name: Suspend/Restore a Display File                  */
/*                                                                   */
/* 5722-SS1  (C) Copyright IBM Corp. 1999,2001                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Suspend/Restore API allows the user to suspend   */
/*              a display file, with or without saving the screen,   */
/*              or restore a display file, with or without refreshing*/
/*              the screen contents from the saved file.  When a     */
/*              file is suspended, a "handle" is returned.  The      */
/*              handle is used to restore the same file.             */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QWSSPRST.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON    LEVEL      DATE   PGMR     CHANGE DESCRIPTION      */
/* ---- --------- ---------- ------ -------- ----------------------- */
/* $A0= D9746100  v5r1m0.xpf 102600 V2CIB10  :New Include            */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QWSSPRST_h
 #define QWSSPRST_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for QWSSPRST API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QWSSPRST,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QWSSPRST (char *,     /*   Operation request: (Input)     */
                              /*    '0' Suspend                   */
                              /*    '1' Restore                   */
                  int *,      /* Handle	                          */
                              /*   Suspend:  (Output)             */
                              /*   Restore:  (Input)              */
                  char *,     /*  Screen image option             */
                              /*   '0' (Suspend) Do not save the  */
                              /*       screen                     */
                              /*   '0' (Restore) Do not restore   */
                              /*       the saved screen, if any.  */
                              /*   '1' (Suspend) Save the current */
                              /*       screen image               */
                              /*   '1' (Restore) Restore the      */
                              /*       saved screen image         */
                              /*       associated with the        */
                              /*       suspended file             */
                  void *);    /*  The structure in which to return*/
                              /*  error information.  For the     */
                              /*  format of the structure, see    */
                              /*  Chapter 2 in the AS400 System   */
                              /*  API Reference book.             */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
