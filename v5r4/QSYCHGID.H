 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYCHGID                                   */
 /*                                                                */
 /* Descriptive Name: Change User Profile UID or GID.              */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Change User Profile UID or GID API provides   */
 /*              an interface to change the user ID number (UID)   */
 /*              or group ID number (GID) value for a user profile.*/
 /*                                                                */
 /* Header Files Included: H/QSYCHGID                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSYCHGID                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3622019     3D70  960604 KARENS:   New Include           */
 /* $01= P3624052     3Q70  960719 BASMITH:  Make 'int's into      */
 /*                                          'unsigned int's.      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYCHGID_h
 #define QSYCHGID_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYCHGID                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYCHGID,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYCHGID (char *,          /* User profile name              */
                unsigned int,    /* User ID number (UID)           */
                unsigned int,    /* Group ID number (GID)          */
                void *);         /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

 #endif
