/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPPUTSP                                  */
/*                                                               */
/* Descriptive Name: Put Spooled File Data.                      */
/*                                                               */
/* 5763-SS1, 5722-SS1(C) Copyright IBM Corp. 1994,2001           */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Put Spooled File Data API puts data into a   */
/*              spooled file, which was created using the Create */
/*              Spooled File API.                                */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None                                          */
/*                                                               */
/* Function Prototype List: QSPPUTSP                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940401 XZS2523:  New Include          */
/* $A1= D98212.4     5D10  991228 GCHANEY: Compiler directive for*/
/*                                         16 byte pointers.     */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPPUTSP_h
 #define QSPPUTSP_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPPUTSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Put Spooled File Data API                 */
 /*  QSPPUTSP                                                    */
 /****************************************************************/
 void QSPPUTSP (int,             /* Spooled file handle          */
                void *,          /* Qualified user space name    */
                void *);         /* Error code                   */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
