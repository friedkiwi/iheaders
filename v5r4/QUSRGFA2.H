 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRGFA2                                   */
 /*                                                                */
 /* Descriptive Name: Registration Facility APIs.                  */
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
 /* Description: APIs that are in the QUSRGFA2 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qusreg                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Structures in QUS and QUSREG)          */
 /*                                                                */
 /* Function Prototype List: QusRetrieveExitInformation            */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940327 LUPA:    :New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QUSRGFA2_h
 #define QUSRGFA2_h

 /******************************************************************/
 /* Includes for structures.                                       */
 /******************************************************************/
 #include <qus.h>
 #include <qusreg.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Retrieve Exit Information API.           */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QusRetrieveExitInformation,OS,nowiden)
    void QusRetrieveExitInformation
                                (void *, /* Continuation Handle    */
                                 void *, /* Receiver Variable      */
                                 int   , /* Length Receiver Var    */
                                 char *, /* Format Name            */
                                 void *, /* Exit Point Name        */
                                 char *, /* Exit Point Format Name */
                                 int   , /* Exit Program Number    */
                                 void *, /* Exit Prog Sel Criteria */
                                 void *);/* Error Code             */
 #else
     extern "C"
     void QusRetrieveExitInformation
                                (void *, /* Continuation Handle    */
                                 void *, /* Receiver Variable      */
                                 int  *, /* Length Receiver Var    */
                                 char *, /* Format Name            */
                                 void *, /* Exit Point Name        */
                                 char *, /* Exit Point Format Name */
                                 int  *, /* Exit Program Number    */
                                 void *, /* Exit Prog Sel Criteria */
                                 void *);/* Error Code             */
 #endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
