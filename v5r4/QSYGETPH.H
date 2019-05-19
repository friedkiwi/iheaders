 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYGETPH                                   */
 /*                                                                */
 /* Descriptive Name: Get Profile Handle.                          */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Get Profile Handle API validates user IDs and */
 /*              passwords and creates a profile handle, for the   */
 /*              jobs that run under more than one user profile.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSYGETPH                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931222 ROCH:     New Include.          */
 /* $A1= D9831100     5D10  000604 ROCH:     Add password length   */
 /*                                          and CCSID             */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYGETPH_h
 #define QSYGETPH_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYGETPH                    */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QSYGETPH, OS,nowiden)
#else
     extern "OS"
#endif

 void QSYGETPH (char *,       /* User ID                        */
                  char *,       /* Password                       */
                  void *,       /* Profile Handle                 */
                  ...);         /* Optional parameters:           */
                                /*     error code                 */
                                /*     Length of password         */
                                /*     CCSID of password          */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
