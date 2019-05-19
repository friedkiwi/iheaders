 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFPADRUA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Network Server User Attributes      */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000,2000                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Network Server User Attributes       */
 /*              (QFPADRUA) API retrieves information about a user */
 /*              or group that is enrolled to a network server.    */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qfp_DRUA0100_t   (Network server user attrs.)  */
 /*                 Qfp_DRUA0200_t   (Network server group attrs.) */
 /*                 Qfp_DRUA_Domain_t (Windows domain info.)       */
 /*                 Qfp_DRUA_Server_t (Windows server info.)       */
 /*                                                                */
 /* Function Prototype List: QFPADRUA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D97705     5D10  990915 MEADEN  :   New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFPADRUA_h
 #define QFPADRUA_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Retrieve Network User Attributes         */
 /* (QFPADRUA) API                                                 */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPADRUA,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QFPADRUA (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* User profile                   */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the DRUA0100 format - Domain information   */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DRUA_Domain
    {
       char Group_Type[10];
       char Reserved[2];
       int  Disp_Domain_Name;
       int  Len_Domain_Name;
       int  Disp_User_Template_Name;
       int  Len_User_Template_Name;
     /*char Domain_Name[];                    */   /*Varying length*/
     /*char User_Template_Name[];             */   /*Varying length*/
    } Qfp_DRUA_Domain_t;

 /******************************************************************/
 /* Type Definition for the DRUA0100 format - Server information   */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DRUA_Server
    {
       int  Disp_Server_Name;
       int  Len_Server_Name;
       int  Disp_User_Template_Name;
       int  Len_User_Template_Name;
     /*char Server_Name[];                    */   /*Varying length*/
     /*char User_Template_Name[];             */   /*Varying length*/
    } Qfp_DRUA_Server_t;

 /******************************************************************/
 /* Type Definition for the DRUA0100 format - User Enrollment info.*/
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DRUA0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Reserved[12];
       int  Off_List_Windows_Domain_Ent;
       int  Len_Windows_Domain_Entry;
       int  Num_Windows_Domain_Entries;
       int  Off_List_Windows_Server_Ent;
       int  Len_Windows_Server_Entry;
       int  Num_Windows_Server_Entries;
     /*Qfp_DRUA_Domain_t Windows_Domains[];   */   /*Varying length*/
     /*Qfp_DRUA_Server_t Windows_Servers[];   */   /*Varying length*/
    } Qfp_DRUA0100_t;

 /******************************************************************/
 /* Type Definition for the DRUA0200 format - Group Enrollment info*/
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DRUA0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Group_Member_Enrollment[10];
       char Reserved[2];
       int  Off_List_Windows_Domain_Ent;
       int  Len_Windows_Domain_Entry;
       int  Num_Windows_Domain_Entries;
       int  Off_List_Windows_Server_Ent;
       int  Len_Windows_Server_Entry;
       int  Num_Windows_Server_Entries;
     /*Qfp_DRUA_Domain_t Windows_Domains[];   */   /*Varying length*/
     /*Qfp_DRUA_Server_t Windows_Servers[];   */   /*Varying length*/
    } Qfp_DRUA0200_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif
