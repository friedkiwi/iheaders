 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWTCTJBS                                   */
 /*                                                                */
 /* Descriptive Name: Create temporary job structures              */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Create temporary job structures API           */
 /*                allows the user to specify when they would      */
 /*                like additional job structures created on the   */
 /*                system. The can create 1-32000 at a time.  The  */
 /*                number of Temporary and Permanent job           */
 /*                structures after the API has completed will     */
 /*                be returned.                                    */
 /*                                                                */
 /* Header Files Included: none                                    */
 /*                                                                */
 /* Macros List: none                                              */
 /*                                                                */
 /* Structure List: none                                           */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QWTCTJBS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QWTCTJBS_h
#define QWTCTJBS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #ifdef __ILEC400__
       #pragma linkage (QWTCTJBS,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QWTCTJBS                                  */
/********************************************************************/

void QWTCTJBS(int,                  /* Number of temporary on system */
              int,                  /* Number of permanent on system */
              int,                  /* Number of temp to create      */
              void *);              /* Error code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
