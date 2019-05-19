/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPCRTSP                                  */
/*                                                               */
/* Descriptive Name: Create a Spooled File                       */
/*                                                               */
/* 5763-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994,2001          */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Create Spooled File API is used to create    */
/*              a new spooled file with attributes based on      */
/*              values taken from the spooled file attributes    */
/*              parameter.                                       */
/*                                                               */
/* Header Files Included: h/qusrspla                             */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None                                          */
/*                                                               */
/* Function Prototype List: QSPCRTSP                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- -------------------- */
/* $A0= D2862000     3D10  940318 XZS2523:  New Include          */
/* $00= P3985172     3D60  950316 JLINDSAY: Always include .h    */
/* $A3= D98212.4     5D10  991228 GCHANEY: Compiler directive for*/
/*                                         16 byte pointers.     */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPCRTSP_h
 #define QSPCRTSP_h

 #include <qusrspla.h>
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPCRTSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Create Spooled File API QSPCRTSP          */
 /*                                                              */
 /****************************************************************/
 void QSPCRTSP (int  *,          /* Spooled file handle          */
                void *,          /* Spooled file attributes      */
                void *);         /* Error code                   */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
