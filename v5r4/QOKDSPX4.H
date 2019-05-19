 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOKDSPX4                                   */
 /*                                                                */
 /* Descriptive Name: Display Directory X.400 Panels               */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Display Directory X.400 Panels API has the    */
 /*              ability to display various X.400 O/R name panels  */
 /*              and to process functions interactively without    */
 /*              going through the Work with Directory interface.  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QOKDSPX4                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940422 MARLA:    New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOKSDPX4_h
 #define QOKDSPX4_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Office API QOKDSPX4 OPM                  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QOKDSPX4,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QOKDSPX4 (char *,           /* Function                      */
                char *,           /* Format                        */
                char *,           /* System name                   */
                char *,           /* System group                  */
                char *,           /* User ID                       */
                char *,           /* User address                  */
                char *,           /* Text description              */
                char *,           /* Key code                      */
                void *);          /* Error code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
