 /************** START HEADER FILE SPECIFICATIONS ******************/
 /*                                                                */
 /* Header File Name: H/QZCACLT                                    */
 /*                                                                */
 /* Descriptive Name: Client Software Management and Configuration */
 /*                   API's                                        */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QZCACLT service program.     */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: QzcaToken_Business_Location_C                     */
 /*              QzcaToken_Community_Name_C                        */
 /*              QzcaToken_Description_C                           */
 /*              QzcaToken_Internet_Address_C                      */
 /*              QzcaToken_Office_C                                */
 /*              QzcaToken_Owner_C                                 */
 /*              QzcaToken_Owner_Telephone_C                       */
 /*              QzcaToken_PC_Support_User_C                       */
 /*              QzcaToken_Client_Status_C                         */
 /*              QzcaClient_Info_List_MAX                          */
 /*                                                                */
 /* Structure List:   QzcaClient_Info_List_t                       */
 /*                   QzcaConnectivity_Info_t                      */
 /*                                                                */
 /* Function Prototype List: QzcaAddClient                         */
 /*                          QzcaRemoveClient                      */
 /*                          QzcaUpdateClientInfo                  */
 /*                          QzcaRefreshClientInfo                 */
 /*                          QzcaGetClientHandle                   */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3974713    3D60 941116 RAJESHK:    New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* Additional notes about the Change Activity                     */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZCACLT_h
#define QZCACLT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*--------------------------------------------------------------------*/
/*               DEFINE constants                                     */
/*--------------------------------------------------------------------*/
#define QzcaToken_Business_Location_C 1
#define QzcaToken_Community_Name_C    2
#define QzcaToken_Description_C       3
#define QzcaToken_Internet_Address_C  4
#define QzcaToken_Office_C            5
#define QzcaToken_Owner_C             6
#define QzcaToken_Owner_Telephone_C   7
#define QzcaToken_PC_Support_User_C   8
#define QzcaToken_Client_Status_C     9
#define QzcaClient_Info_List_MAX   1016

 /******************************************************************/
 /* Type Definition for the Connectivity Information.              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
   typedef _Packed struct QzcaConnectivity_Info
   {
       char NodeType;
       char Reserved[3];
       int  NodeNameLength;
     /*char NodeName[];*/      /* Varying length                     */
   } QzcaConnectivity_Info_t;

 /******************************************************************/
 /* Type Definition for the Client Information List.               */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
   typedef _Packed struct QzcaClient_Info_List
   {
       int Number_Of_Tokens;
     /*int OffsetToToken[]; */  /* Varying length                     */
   } QzcaClient_Info_List_t;

   typedef _Packed struct QzcaClient_Info_List_Token
   {
       int Token;
       int Length;
     /*char Value[];       */  /* Varying length                     */
   } QzcaClient_Info_List_Token_t;

 /******************************************************************/
 /* Prototype for calling Add Client API                           */
 /******************************************************************/

#ifdef __ILEC400__
#pragma argument (QzcaAddClient,OS,nowiden)
#else
   extern "C"
#endif
     void QzcaAddClient(
                       void *, /* Client Handle Assigned   */
                       void *, /* Client Handle Requested  */
                       void *, /* Client ID                */
                       void *, /* Community Name           */
                       void *, /* Connectivity Info        */
                       void *);/* Error Code               */


 /******************************************************************/
 /* Prototype for calling Remove Client API                        */
 /******************************************************************/

#ifdef __ILEC400__
#pragma argument (QzcaRemoveClient,OS,nowiden)
#else
   extern "C"
#endif
     void QzcaRemoveClient(
                          void *, /* Client Handle Assigned  */
                          void *);/* Error Code              */

 /******************************************************************/
 /* Prototype for calling Update Client Information API            */
 /******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QzcaUpdateClientInfo,OS,nowiden)
   void QzcaUpdateClientInfo(
                            void *, /* Client Handle Assigned     */
                            void *, /* Client Info List           */
                            int   , /* Length of Client Info List */
                            void *);/* Error Code                 */
#else
   extern "C"
     void QzcaUpdateClientInfo(
                              void *, /* Client Handle Assigned     */
                              void *, /* Client Info List           */
                              int  *, /* Length of Client Info List */
                              void *);/* Error Code                 */
#endif

 /******************************************************************/
 /* Prototype for calling Refresh Client Information API           */
 /******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QzcaRefreshClientInfo,OS,nowiden)
   void QzcaRefreshClientInfo(
                             void *, /* Client Handle Assigned,    */
                             void *, /* Information Type           */
                             int   , /* Time Out                   */
                             void *);/* Error Code                 */
#else
   extern "C"
     void QzcaRefreshClientInfo(
                               void *, /* Client Handle Assigned,    */
                               void *, /* Information Type           */
                               int  *, /* Time Out                   */
                               void *);/* Error Code                 */

#endif

 /******************************************************************/
 /* Prototype for calling Get Client Handle API                    */
 /******************************************************************/

#ifdef __ILEC400__
   #pragma argument (QzcaGetClientHandle,OS,nowiden)
#else
   extern "C"
#endif
     void QzcaGetClientHandle(
                             void *, /* Client_Handle_Assigned     */
                             void *, /* Client_ID                  */
                             void *);/* Error_Code                 */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
