 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRUPWD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Encrypted User Password.            */
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
 /* Description: The Retrieve Encrypted User Password API returns  */
 /*              to the caller the encrypted password for the      */
 /*              specified user profile.  This API works with the  */
 /*              Set Encrypted User Password (QSYSUPWD) API to     */
 /*              allow the user to mirror passwords between        */
 /*              systems.                                          */
 /*                                                                */
 /* Header Files Included: H/QSYRUPWD                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_RUPWD_UPWD0100_t                           */
 /*                                                                */
 /* Function Prototype List: QSYRUPWD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3622019     3D70  960604 KARENS:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYRUPWD_h
 #define QSYRUPWD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYRUPWD                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRUPWD,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRUPWD (void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                char *,          /* Format name                    */
                char *,          /* User ID                        */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Record structure for UPWD0100 format                           */
 /******************************************************************/
 typedef struct Qsy_RUPWD_UPWD0100
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       char  Profile_Name[10];
     /*char  Encrypted_Password[]; */   /* Varying length          */

    } Qsy_RUPWD_UPWD0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
