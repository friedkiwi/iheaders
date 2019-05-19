/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1999, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCSTCRG3                                   */
 /*                                                                */
 /* Descriptive Name: Cluster Resource Group APIs.                 */
 /*                                                                */
 /* Description: APIs that are in the QCSTCRG3 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qcst                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qcst_CRGL0100_Input_t                         */
 /*                  Qcst_CRGL0100_Header_t                        */
 /*                  Qcst_CRGL0100_t                               */
 /*                  Qcst_LRGI0100_Input_t                         */
 /*                  Qcst_LRGI0100_Header_t                        */
 /*                  Qcst_LRGI0100_t                               */
 /*                  Qcst_LRGI0200_t                               */
 /*                  Qcst_LRGI0300_t                               */
 /*                  Qcst_Rcvy_Domain_Array1_t                     */
 /*                  Qcst_EXTP0100_t                               */
 /*                  Qcst_Rcvy_Domain_LRGI0300_t                   */
 /*                  Qcst_Rcvy_Domain_Array4_t                     */
 /*                  Qcst_EXTP0200_t                               */
 /*                                                                */
 /* Function Prototype List: QcstListClusterResourceGroups         */
 /*                          QcstListClusterResourceGroupInfo      */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9570800     4D40  971205 ROCH:     New Include           */
 /* $A1= D9717040     5D10  990712 ROCH:     Resilient devices     */
 /* $A2=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /* $A3= D97869.10    5d10  000411 ROCH:     DI user queue         */
 /* $A4= D98416       5d20  010326 ROCH:     Primary/Secondary IASP*/
 /* $A5= D98462       5D20  010427 ROCH:     Failover msg queue    */
 /* $A6= D98854.7     5D20  010830 ROCH:     Added Validation Phase*/
 /*                                          Added CHT_CRG         */
 /* $A7= D98416       5D20  010921 ROCH:     Server TakeOver IP@   */
 /* $A8= D99125       5D30  020709 ROCH:     Remote IASP Mirroring */
 /* $A9= D99124       5D30  021118 ROCH:     System automation     */
 /* $A9= PSE09986     5D30  030404 ROCH:     New AC dep data rmv   */
 /* $B1= D99488     v5r4m0  040317 ROCH:     Support Peer CRGs     */
 /* $b2= D94413.5     5d40  040429 ROCH:     Fix extra , from      */
 /*                                          QcstRemovePassiveNode */
 /* $b3= D99844.6   v5r4m0  041026 ROCH:     add in leader node    */
 /* $B4= D99753.1   v5r4m0  050124 ROCH:     add AllowActiveIPAddr */
 /* $B5= P9A91084   v5r4m0  050325 ROCH:     Remove unused         */
 /*                                          System_Automation     */
 /*                                          field                 */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QCSTCRGM3_h
 #define QCSTCRGM3_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A2A*/
     #pragma datamodel(P128)                                 /*@A2A*/
 #endif                                                      /*@A2A*/

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qus.h>
 #include <qcst.h>

 /******************************************************************/
 /* Prototype for calling List Cluster Resource Groups API.        */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstListClusterResourceGroups,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstListClusterResourceGroups
                          (char *,   /* Qualified User Space Name  */
                           char *,   /* Format Name                */
                           char *,   /* Cluster Name               */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Input Parameter Section                                        */
 /******************************************************************/

 typedef _Packed struct Qcst_CRGL0100_Input{
     char User_Space_Name[10];
     char User_Space_Library_Name[10];
     char Format_Name[8];
     char Cluster_Name[10];
} Qcst_CRGL0100_Input_t;

 /******************************************************************/
 /* Header Parameter Section                                       */
 /******************************************************************/

 typedef _Packed struct Qcst_CRGL0100_Header{
     char Information_Status[1];
} Qcst_CRGL0100_Header_t;

 /******************************************************************/
 /* CRGL0100 Format                                                */
 /******************************************************************/

 typedef _Packed struct Qcst_CRGL0100{
     char  Cluster_Resource_Group[10];
     short Cluster_Resource_Group_Type;
     int   Cluster_Resource_Group_Status;
     char  Primary_Node_ID[8];
#if (__OS400_TGTVRM__>=540)
     char  Application_Id[20];
#endif
} Qcst_CRGL0100_t;

 /******************************************************************/
 /* Recovery Domain Array 1                                        */
 /******************************************************************/

 typedef _Packed struct Qcst_Rcvy_Domain_Array1{
     char Node_ID[8];
     int  Node_Role;
     int  Membership_Status;
} Qcst_Rcvy_Domain_Array1_t;

 /******************************************************************/
 /* Prototype for calling List Cluster Resource Group Info API.    */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstListClusterResourceGroupIn,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstListClusterResourceGroupIn
                          (char *,   /* Request Handle             */
                           char *,   /* Qualified User Space       */
                           char *,   /* Format Name                */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Cluster Resource Group Information - Input Parameter Section   */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0100_Input{
     char User_Space_Name[10];
     char User_Space_Library_Name[10];
     char Format_Name[8];
     char Cluster_Name[10];
     char Cluster_Resource_Group_Name[10];
     char Request_Handle[16];
     Qcst_Results_Info_Parm_t Results_Info;
} Qcst_LRGI0100_Input_t;

 /******************************************************************/
 /* Cluster Resource Group Information - Header Section            */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0100_Header{
     char Information_Status[1];
     char Reserved[3];
     int  Cluster_Resource_Group_Type;
     int  Current_CRG_Status;
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char CRG_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Exit_Program_Data[256];
     char Takeover_IP_Address[16];
     char Job_Name[10];
     int  Allow_Application_Restart;
     int  Number_of_Restarts;
     int  Previous_CRG_Status;
     char Reporting_Node_ID[8];
     Qcst_Text_Description_t Object_Text_Desc;
     char DI_User_Queue_Name[10];
     char DI_User_Queue_Lib[10];
     char Configure_Takeover_IP_Addr;
     char CHT_CRG[1];
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
     char Reserved1;
#if (__OS400_TGTVRM__>=540)
     char Application_Id[20];
     char AllowActiveIPAddr;
#endif
} Qcst_LRGI0100_Header_t;

 /******************************************************************/
 /* Recovery Domain Entries - LRGI0100 Section                     */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0100{
     char Node_ID[8];
     int  Current_Node_Role;
     int  Membership_Status;
     int  Preferred_Node_Role;
} Qcst_LRGI0100_t;


 /******************************************************************/
 /* Device Entries - LRGI0200 Section                              */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0200{
     Qcst_Config_Object_t Config_Object_Name;
     char Reserved[2];
     int  Config_Object_Type;
     int  Device_Type;
     int  Config_Object_Online;
     int  Device_Subtype;
     char Server_Takeover_IP_Address[16];
} Qcst_LRGI0200_t;

 /******************************************************************/
 /* Device Entries - LRGI0300 Section                              */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0300{
     Qcst_Config_Object_t Config_Object_Name;
     char Reserved[2];
     int  Config_Object_Type;
     int  Device_Type;
     int  Config_Object_Online;
     int  Device_Subtype;
     char Server_Takeover_IP_Address[16];
} Qcst_LRGI0300_t;

 /******************************************************************/
 /* Recovery Domain Entries - LRGI0300 Section                     */
 /******************************************************************/

 typedef _Packed struct Qcst_Rcvy_Domain_LRGI0300{
     int  Length_Rcvy_Domain_Entry;
     char Node_ID[8];
     int  Current_Node_Role;
     int  Membership_Status;
     int  Preferred_Node_Role;
     char Site_Name[8];
     int  Offset_Data_Port_IP_Address;
     int  Number_Data_Port_IP_Address;
   /*char Data_Port_IP_Address[][16]; */
} Qcst_Rcvy_Domain_LRGI0300_t;

enum QcstCrgActionCode {
     QcstCrgAcInitialize        = 1,
     QcstCrgAcStart             = 2,
     QcstCrgAcRestart           = 3,
     QcstCrgAcEnd               = 4,
     QcstCrgAcVerificationPhase = 5,
     QcstCrgAcDelete            = 7,
     QcstCrgAcReJoin            = 8,
     QcstCrgAcFailover          = 9,
     QcstCrgAcSwitchover        = 10,
     QcstCrgAcAddNode           = 11,
     QcstCrgAcRemoveNode        = 12,
     QcstCrgAcChange            = 13,
     QcstCrgAcDeleteCommand     = 14,
     QcstCrgAcUndo              = 15,
     QcstCrgEndNode             = 16,
     QcstCrgAcAddDevEnt         = 17,
     QcstCrgAcRmvDevEnt         = 18,
     QcstCrgAcChgDevEnt         = 19,
     QcstCrgAcChgNodeStatus     = 20,
     QcstCrgAcCancelFailover    = 21,
     QcstCrgAcCancel            = 22
 };



 /******************************************************************/
 /* Node_Role_Type                                                */
 /******************************************************************/
 enum QcstNodeRoleType {
   QcstCurrentRcvyDmn   = 1,
   QcstPreferredRcvyDmn = 2
 };


 /******************************************************************/
 /* Action_Code_Dependent_Data                                     */
 /******************************************************************/
 enum QcstDependentData {
   QcstNoDependentData = 0,

   /* For the QcstCrgAcReJoin action code */
   QcstMerge = 1,
   QcstJoin  = 2,

   /* For the QcstCrgAcFailover or QcstCrgAcEnd action code */
   QcstPartitionFailure = 3,

   /* For the QcstCrgAcFailover action code */
   QcstNodeFailure   = 4,

   /* For the QcstCrgAcFailover or QcstCrgEndNode action code */
   QcstMemberFailure = 5,

   /* For the QcstCrgAcFailover action code */
   QcstEndNode       = 6,
   QcstRemoveNode    = 7,
   QcstApplFailure   = 8,

   /* For the QcstCrgAcEnd action code */
   QcstResourceEnd = 9,

   /* For the QcstCrgAcDelete or QcstCrgAcDeleteCommand action code */
   QcstDltCluster = 10,

   /* For the QcstCrgAcRemoveNode action code */
   QcstRmvRcvyDmnNode = 11,

   /* For the QcstCrgVerificationPhase action code */
   QcstDltCrg = 12,

   /* For QcstCrgVerificationPhase and QcstCrgAcCancel */
   QcstFailOver = 13,

   /* For QcstCrgVerificationPhase, QcstCrgAcCancel, QcstCrgAcEnd */
   QcstSwitchOver = 14,

   /* For the QcstCrgAcRemoveNode and QcstCrgAcDelete action code */
   QcstRemovePassiveNode = 15

 };


 /******************************************************************/
 /* Success Indicator for Cluster Resource Group Exit Program      */
 /******************************************************************/
 enum QcstSuccessIndicator {
   QcstSuccessful         = 0,
   QcstFailWithOutRestart = 1,
   QcstFailWithRestart    = 2
 };


 /******************************************************************/
 /* Enummeration to determine how the CRG is changing when the     */
 /* exit program is called for the QcstChangeClusterResourceGroup  */
 /* API.  Use to test the Cluster_Resource_Group_Changes member in */
 /* the Qcst_EXTP0100_t structure.                                 */
 /******************************************************************/
 enum QcstCrgChangesMask {
   QcstRcvyDomainChange     = 1<<0,
   QcstTakeOverIpAddrChange = 1<<1
 };


 /******************************************************************/
 /* Enummeration describing various attributes about the           */
 /* Cluster Resource Group.  Use to test the                       */
 /* Cluster_Resource_Group_Attr member in the Qcst_EXTP0100_t      */
 /* structure.                                                     */
 /******************************************************************/
 enum QcstCrgAttributesMask {
   QcstTcpConfigByUsr = 1<<0   /* The user configures the TCP      */
                               /* takeover address                 */
 };

 /******************************************************************/
 /* Enummeration describing cluster version. Use to test in the    */
 /* Current_Cluster_Version in the Qcst_EXTP0100_t structure.      */
 /******************************************************************/
 enum QcstClusterVersion {
   QcstClusterModLevel0 = 0,
   QcstClusterVersion2 = 2,
   QcstClusterVersion3 = 3
#if (__OS400_TGTVRM__>=540)
   ,
   QcstClusterVersion4 = 4,
   QcstClusterVersion5 = 5
#endif

 };

 /******************************************************************/
 /* Constant used for the Changing_Node_ID field when the exit     */
 /* program is called with more than one changed node.  An example */
 /* of when this can occur is when more than one node fails as the */
 /* same time.                                                     */
 /******************************************************************/
#define QcstNodeChangeList "*LIST   "


 /******************************************************************/
 /* EXTP0100 Format  for Cluster Resource Group Exit Program       */
 /******************************************************************/

 typedef _Packed struct Qcst_EXTP0100{
     int  Length_Info_Returned;
     char Cluster_Name[10];
     char Cluster_Resource_Group_Name[10];
     int  Cluster_Resource_Group_Type;
     int  Cluster_Resource_Group_Status;
     char Request_Handle[16];
     int  Node_Role_Type;
     char This_Nodes_ID[8];
     char Changing_Node_ID[8];
     int  Changing_Node_Role;
     char Takeover_IP_Address[16];
     char Job_Name[10];
     char Reserved[2];
     int  Prior_Action_Code;
     long long Cluster_Resource_Group_Changes;
     int  Offset_Rcvy_Domain_Array;
     int  Number_Nodes_Rcvy_Domain;
     int  Original_Cluster_Res_Grp_Stat;
     int  Action_Code_Dependent_Data;
     int  Offset_Prior_Rcvy_Domain_Array;
     int  Number_Nodes_Prior_Rcvy_Domain;
     int  Offset_Config_Object_Array;
     int  Number_Config_Obj_Array_Ent;
     int  Length_Config_Obj_Array_Entry;
     long long Cluster_Resource_Group_Attr;
     char DI_Queue_Name[10];
     char DI_Queue_Library_Name[10];
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
     int  Cluster_Version;
     int  Cluster_Version_Mod_Level;
     char Req_User_Profile[10];
     char Reserved2;
#if (__OS400_TGTVRM__>=540)
     char Allow_Active_IP_Addr;
     char Application_Id[20];
     int  Length_Rcvy_Domain_Array_Entry;
     int  Length_Prior_Rcvy_Domain_Array_Entry;
     char Leader_Node_ID[8];
#else
    char Reserved1;
#endif
   /*Qcst_Rcvy_Domain_Array1_t Rcvy_Domain_Array[];               */
   /*Qcst_Rcvy_Domain_Array1_t Prior_Rcvy_Domain_Array[];         */
   /*Qcst_LRGI0300_t           Config_Object_Array[];             */

} Qcst_EXTP0100_t;


 /******************************************************************/
 /* Recovery Domain Array for Device CRG                           */
 /******************************************************************/

 typedef _Packed struct Qcst_Rcvy_Domain_Array4{
     int  Length_Rcvy_Domain_Entry;
     char Node_ID[8];
     int  Node_Role;
     int  Membership_Status;
     char Site_Name[8];
     int  Offset_Data_Port_IP_Address;
     int  Number_Data_Port_IP_Address;
   /*char Data_Port_IP_Address[][16]; */

} Qcst_Rcvy_Domain_Array4_t;

 /******************************************************************/
 /* EXTP0200 Format  for Cluster Resource Group Exit Program       */
 /******************************************************************/

 typedef _Packed struct Qcst_EXTP0200{
     int  Length_Info_Returned;
     char Cluster_Name[10];
     char Cluster_Resource_Group_Name[10];
     int  Cluster_Resource_Group_Type;
     int  Cluster_Resource_Group_Status;
     char Request_Handle[16];
     int  Node_Role_Type;
     char This_Nodes_ID[8];
     char Changing_Node_ID[8];
     int  Changing_Node_Role;
     char Takeover_IP_Address[16];
     char Job_Name[10];
     char Reserved[2];
     int  Prior_Action_Code;
     long long Cluster_Resource_Group_Changes;
     int  Offset_Rcvy_Domain_Array;
     int  Number_Nodes_Rcvy_Domain;
     int  Length_Rcvy_Domain_Array_Entry;
     int  Original_Cluster_Res_Grp_Stat;
     int  Action_Code_Dependent_Data;
     int  Offset_Prior_Rcvy_Domain_Array;
     int  Number_Nodes_Prior_Rcvy_Domain;
     int  Length_Prior_Rcvy_Domain_Array_Entry;
     int  Offset_Config_Object_Array;
     int  Number_Config_Obj_Array_Ent;
     int  Length_Config_Obj_Array_Entry;
     long long Cluster_Resource_Group_Attr;
     char DI_Queue_Name[10];
     char DI_Queue_Library_Name[10];
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
     int  Cluster_Version;
     int  Cluster_Version_Mod_Level;
     char Req_User_Profile[10];
     char Reserved1[2];
   /*Qcst_Rcvy_Domain_Array4_t Rcvy_Domain_Array[];               */
   /*Qcst_Rcvy_Domain_Array4_t Prior_Rcvy_Domain_Array[];         */
   /*Qcst_LRGI0300_t           Config_Object_Array[];             */

} Qcst_EXTP0200_t;

#if (__OS400_TGTVRM__>=510)                                 /*@A2A*/
    #pragma datamodel(pop)                                  /*@A2A*/
#endif                                                      /*@A2A*/

 #endif
