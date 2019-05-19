 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRTVSE                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Server Authentication Entry.        */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1997,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Server Authentication Entries API    */
 /*              provides information about the server             */
 /*              authentication entries for a user profile.        */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_SVRE0100_T                                 */
 /*                 Qsy_RSVRE_Feedback_Info_T                      */
 /*                                                                */
 /* Function Prototype List: QSYRTVSE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9533500     4D20  970326 ROCH:     New Include           */
 /* $A1= P3650923     4D20  970806 ROCH:     Return CCSID before   */
 /*                                            server name.        */
 /* $A2= P3652324     4D20  970820 ROCH:     Add length of server  */
 /*                                          name field.           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYRTVSE_h
 #define QSYRTVSE_h

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Record structure for SVRE0100 format                           */
 /******************************************************************/
 typedef _Packed struct Qsy_SVRE0100
    {
       int   Entry_Length;
       int   Length_of_Server_Name;
       int   CCSID_of_Server_Name;
       char  Server_Name[200];
       int   Displacement_to_UserID;
       int   Length_of_UserID;
       int   CCSID_of_UserID;
       char  Password_Stored_Indicator;
       /*char  UserID[];*/               /* Varying length         */
    } Qsy_SVRE0100_T;

 /******************************************************************/
 /* Record structure for Return Records Feedback Information       */
 /******************************************************************/
 typedef _Packed struct Qsy_RSVRE_Feedback_Info
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       int   Server_Auth_Number;
    } Qsy_RSVRE_Feedback_Info_T;


 /******************************************************************/
 /* Prototype for calling Security API QSYRTVSE                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRTVSE,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRTVSE (void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                void *,          /* Feedback information - ptr to  */
                                 /*   Qsy_RSVRE_Feedback_Info_T    */
                char *,          /* Format name                    */
                char *,          /* Starting server name           */
                int,             /* Starting server name length    */
                char,            /* Starting server option         */
                char[10],        /* User profile name              */
                void *);         /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
