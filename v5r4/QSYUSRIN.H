 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYUSRIN                                   */
 /*                                                                */
 /* Descriptive Name: User application Information API's.          */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: API prototypes for updating, removing, and        */
 /*              retrieving application information                */
 /*              for a user profile.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QsyUpdateUserApplicationInfo          */
 /*                          QsyRemoveUserApplicationInfo          */
 /*                          QsyRetrieveUserApplicationInfo        */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL  DATE   PGMR  CHANGE DESCRIPTION           */
 /* ---- -------- -----  ------ ----- -----------------------------*/
 /* $A0= D9407600 v5r3m0 020505 ROCH: New Include                  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYUSRIN_h
 #define QSYUSRIN_h

 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Record structure for RUAI0100 format                           */
 /******************************************************************/
 typedef _Packed struct Qsy_RUAI0100
    {
       int   Entry_Length;
       char  Application_Info_ID[200];
       int   Displacement_Application_Info;
       int   Length_Application_Info;
       int   CCSID_of_Application_Info;
       char  First_Valid_Release[6];
       /*char  App_Info[];*/             /* Varying length         */
    } Qsy_RUAI0100_T;

 /******************************************************************/
 /* Record structure for Return Records Feedback Information       */
 /******************************************************************/
 typedef _Packed struct Qsy_RUAI_Feedback_Info
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       int   Number_Entries_Returned;
    } Qsy_RUAI_Feedback_Info_T;

 /******************************************************************/
 /* Prototypes for calling User Application Information API's      */
 /******************************************************************/
 QBFC_EXTERN void QsyUpdateUserApplicationInfo(
                char *,          /* User profile name              */
                char *,          /* Application information ID     */
                int  *,          /* Length of application info ID  */
                char *,          /* Application information        */
                int  *,          /* Length of application info     */
                char *,          /* First valid release            */
                void *);         /* Error code                     */

 QBFC_EXTERN void QsyRemoveUserApplicationInfo(
                char *,          /* User profile name              */
                char *,          /* Application information ID     */
                int  *,          /* Length of application info ID  */
                void *);         /* Error code                     */

 QBFC_EXTERN void QsyRetrieveUserApplicationInfo(
               void *,           /* Receiver variable              */
               int  *,           /* Receiver variable length       */
               void *,           /* Feedback information           */
               char *,           /* Format name                    */
               char *,           /* User profile name              */
               char *,           /* Application information ID     */
               int  *,           /* Length of application info ID  */
               void *);          /* Error code                     */




#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
