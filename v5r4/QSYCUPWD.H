 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYCUPWD                                   */
 /*                                                                */
 /* Descriptive Name: Check Encrypted User Password.               */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Check Encrypted User Password API will check  */
 /*              if the encrypted password data for the user       */
 /*              on the current system is the same as the encrypted*/
 /*              password data for the user on the system where    */
 /*              the QSYRUPWD API was run.                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSYCUPWD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P9947229     5P10  010411 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYCUPWD_h
 #define QSYCUPWD_h
 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Security API QSYCUPWD                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYCUPWD,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYCUPWD (char *,          /* Encrypted password return code */
                void *,          /* Receiver variable              */
                char *,          /* Format name                    */
                void *);         /* Error code                     */

 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
 #endif
 #endif
