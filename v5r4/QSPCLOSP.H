/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPCLOSP                                  */
/*                                                               */
/* Descriptive Name: Close Spooled File.                         */
/*                                                               */
/* 5763-SS1, 5722-SS1  (C) Copyright IBM Corp. 1994,2001         */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Close Spooled File API closes a spooled file */
/*              opened by the Open Spooled File API or created   */
/*              by the Create Spooled File API.                  */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None                                          */
/*                                                               */
/* Function Prototype List: QSPCLOSP                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940318 XZS2523:  New Include          */
/* $A3= D98212.4     5D10  991228 GCHANEY: Compiler directive for*/
/*                                         16 byte pointers.     */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPCLOSP_h
 #define QSPCLOSP_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPCLOSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Closed Spooled File API QSPCLOSP          */
 /*                                                              */
 /****************************************************************/
 void QSPCLOSP (int,             /* Spooled file handle          */
                void *);         /* Error code                   */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
