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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCSTCRG1                                   */
 /*                                                                */
 /* Descriptive Name: Cluster Resource Group APIs.                 */
 /*                                                                */
 /* Description: APIs that are in the QCSTCRG1 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qcst                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qcst_RGDI0100_t                               */
 /*                  Qcst_Rcvy_Domain_Array_t                      */
 /*                  Qcst_RGDI0100_Added_Fields_t                  */
 /*                  Qcst_RGDI0200_t                               */
 /*                  Qcst_RGDI0200_Added_Fields_t                  */
 /*                  Qcst_RGDI0300_t                               */
 /*                  Qcst_RGDI0300_Added_Fields_t                  */
 /*                  Qcst_RGDC0100_t                               */
 /*                  Qcst_RGDC0110_t                               */
 /*                  Qcst_RGDC0200_t                               */
 /*                  Qcst_RGDC0200_Added_Fields_t                  */
 /*                  Qcst_RGDC0300_t                               */
 /*                  Qcst_RGDC0300_Added_Fields_t                  */
 /*                  Qcst_Config_Object_Array_t                    */
 /*                  Qcst_RGDA0100_t                               */
 /*                  Qcst_RGDR0100_t                               */
 /*                  Qcst_RGDH0100_t                               */
 /*                  Qcst_Rcvy_Domain_Array2_t                     */
 /*                  Qcst_Rcvy_Domain_Array3_t                     */
 /*                  Qcst_RGDI0400_t                               */
 /*                  Qcst_RGDC0400_t                               */
 /*                                                                */
 /* Function Prototype List: QcstCreateClusterResourceGroup        */
 /*                          QcstDeleteClusterResourceGroup        */
 /*                          QcstChangeClusterResourceGroup        */
 /*                          QcstAddNodeToRcvyDomain               */
 /*                          QcstRemoveNodeFromRcvyDomain          */
 /*                          QcstAddClusterResourceGroupDev        */
 /*                          QcstRmvClusterResourceGroupDev        */
 /*                          QcstChgClusterResourceGroupDev        */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9570800     4D40  971205 ROCH:     New Include           */
 /* $A1= D9717104     5D10  990712 ROCH:     Resilient devices     */
 /* $A2=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /* $A3= D9786908     5D10  000109 ROCH:     DistributeInfo flag   */
 /* $A4= D9786909     5D10  000317 ROCH:     DistributeInfo usrq   */
 /* $A5= D97869       5D10  000421 ROCH:     ConfigureTakeoverip   */
 /* $A6= D98462       5D20  010618 ROCH:     Failover msg queue    */
 /* $A7= D98416       5D20  010906 ROCH:     Server TakeOver IP@   */
 /* $A8= D99125       5D30  020709 ROCH:     Remote IASP Mirroring */
 /* $A9= D99844     v5r4m0  040317 ROCH:     Support Peer CRGs     */
 /* $AA= D99844.3   v5r4m0  040716 ROCH:     Minor var renames     */
 /* $AB= D99753       5D40  050118 ROCH:     Add Alw Act Ip Addr   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QCSTCRGM1_h
 #define QCSTCRGM1_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A2A*/
     #pragma datamodel(P128)                                 /*@A2A*/
 #endif                                                      /*@A2A*/
 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qus.h>
 #include <qcst.h>

 /******************************************************************/
 /* Prototype for calling Create Cluster Resource Group API.       */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstCreateClusterResourceGroup,OS,nowiden)
    void QcstCreateClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           int,      /* Cluster Resource Group Type*/
                           void *,   /* Cluster Resource Group
                                        Description Information    */
                           char *,   /* Format Name                */
                           void *,   /* Text Description           */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #else
    extern "C"
    void QcstCreateClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           int  *,   /* Cluster Resource Group Type*/
                           void *,   /* Cluster Resource Group
                                        Description Information    */
                           char *,   /* Format Name                */
                           void *,   /* Text Description           */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #endif


 /******************************************************************/
 /* Create Cluster Resource Group -- RGDI0100 (Data)               */
 /******************************************************************/

 typedef _Packed struct Qcst_Rcvy_Domain_Array {
     char Node_ID[8];
     int  Node_Role;
} Qcst_Rcvy_Domain_Array_t;

 typedef _Packed struct Qcst_RGDI0100_Added_Fields {
     char Distribute_Info_User_Queue[10];
     char Distribute_Info_User_Queue_Lib[10];
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
 } Qcst_RGDI0100_Added_Fields_t;

 typedef _Packed struct Qcst_RGDI0100 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Additional_Fields_Used;
     char Reserved;
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     int  Offset_Additional_Fields;
     int  Length_Additional_Fields;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
   /*Qcst_RGDI0100_Added_Fields_t Added_Fields; */
} Qcst_RGDI0100_t;


 /******************************************************************/
 /* Create Cluster Resource Group -- RGDI0200 (Application)        */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDI0200_Added_Fields {
     char Distribute_Info_User_Queue[10];
     char Distribute_Info_User_Queue_Lib[10];
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
 #if (__OS400_TGTVRM__>=540)                                 /*@ABA*/
     char Allow_Active_IP_Addr;
 #endif
 } Qcst_RGDI0200_Added_Fields_t;

 typedef _Packed struct Qcst_RGDI0200 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Additional_Fields_Used;
     char Reserved;
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     char TakeOver_IP_Address[16];
     char Job_Name[10];
     char Configure_Takeover_IP_Address;
     char Reserved1;
     int  Allow_Application_Restart;
     int  Number_Restarts;
     int  Offset_Additional_Fields;
     int  Length_Additional_Fields;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
   /*Qcst_RGDI0200_Added_Fields_t Added_Fields; */
} Qcst_RGDI0200_t;

/******************************************************************/
/* Allow application restarts Values                              */
/******************************************************************/
enum QcstAppRestart {
     QcstNoAppRestart = 0,
     QcstAllowAppRestart = 1
 };

/******************************************************************/
/* Configure Takeover IP Address Values                           */
/******************************************************************/
#define QcstCRSCfgsTakeoverIpAddr  0x00
#define QcstUserCfgsTakeoverIpAddr 0x01

/******************************************************************/
/* Additional_Fields_Used values                                  */
/******************************************************************/
#define QcstDoNotUseAdditionalFields  0x00
#define QcstUseAdditionalFields       0x01


 /******************************************************************/
 /* Create Cluster Resource Group -- RGDI0300 (Device)             */
 /******************************************************************/

 typedef _Packed struct Qcst_Rcvy_Domain_Array2 {
     int  Length_Rcvy_Domain_Entry;
     char Node_ID[8];
     int  Node_Role;
     char Site_Name[8];
     int  Offset_Data_Port_IP_Address;
     int  Number_Data_Port_IP_Address;
   /*char Data_Port_IP_Address[][16]; */
} Qcst_Rcvy_Domain_Array2_t;

 typedef _Packed struct Qcst_Config_Object_Array {
     Qcst_Config_Object_t Config_Object_Name;
     char Reserved[2];
     int  Config_Object_Type;
     int  Config_Object_Online;
     char Server_TakeOver_IP_Address[16];
} Qcst_Config_Object_Array_t;

 typedef _Packed struct Qcst_RGDI0300_Added_Fields {
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
 } Qcst_RGDI0300_Added_Fields_t;

 typedef _Packed struct Qcst_RGDI0300 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Reserved[2];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     int  Length_Rcvy_Domain_Array_Entry;
     int  Offset_Config_Object_Array;
     int  Number_Config_Object_Entries;
     int  Length_Config_Obj_Array_Entry;
     int  Offset_To_Additional_Fields;
     int  Length_Of_Additional_Fields;
     char Distribute_Info_User_Queue[10];
     char Distribute_Info_User_Queue_Lib[10];
   /*Qcst_Rcvy_Domain_Array_t  Rcvy_Domain_Array[]; OR
     Qcst_Rcvy_Domain_Array2_t Rcvy_Domain_Array[];*/
   /*Qcst_Config_Object_Array_t Config_Object_Array[]; */
   /*Qcst_RGDI0300_Added_Fields_t Added_Fields; */
} Qcst_RGDI0300_t;

/******************************************************************/
/* Create Cluster resource group  -- RGDI0400 (Peer)              */
/******************************************************************/
#if (__OS400_TGTVRM__>=540)
 typedef _Packed struct Qcst_RGDI0400 {
     int  Length_Fixed_Fields;
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     int  Length_Rcvy_Domain_Entry;
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Exit_Pgm_Data[256];
     char Distribute_Info_User_Queue[10];
     char Distribute_Info_User_Queue_Lib[10];
     char Application_Id[20];
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Node_Array[]; */
} Qcst_RGDI0400_t;
#endif

/******************************************************************/
/* IP Address Action                                              */
/******************************************************************/
enum QcstCrgIpAddressAction {
     QcstCrgNoChangeIpAddress = -1,
     QcstCrgRemoveIpAddress   = 0,
     QcstCrgAddIpAddress      = 1
 };

 /******************************************************************/
 /* Prototype for calling Delete Resilient Group Object API.       */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstDeleteClusterResourceGroup,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstDeleteClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Change Cluster Resource Group API.       */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstChangeClusterResourceGroup,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstChangeClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Cluster Resource Group
                                        Description Information    */
                           char *,   /* Format Name                */
                           void *,   /* Text Description           */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Change Cluster Resource Group -- RGDC0100 (Data)               */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDC0100 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Action_Rcvy_Domain_Array[10];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
} Qcst_RGDC0100_t;

 /******************************************************************/
 /* Change Cluster Resource Group -- RGDC0110 (Data)               */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDC0110 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Action_Rcvy_Domain_Array[10];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
     int  Offset_To_Additional_Fields;
     int  Length_Of_Additional_Fields;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
} Qcst_RGDC0110_t;

 /******************************************************************/
 /* Change Cluster Resource Group -- RGDC0200 (Application)        */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDC0200_Added_Fields {
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
 } Qcst_RGDC0200_Added_Fields_t;

 typedef _Packed struct Qcst_RGDC0200 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Action_Rcvy_Domain_Array[10];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     char Takeover_IP_Address[16];
     char Job_Name[10];
     char Additional_Fields_Used;
     char Reserved1;
     int  Allow_Application_Restart;
     int  Number_Restarts;
     int  Offset_To_Additional_Fields;
     int  Length_Of_Additional_Fields;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
   /*Qcst_RGDC0200_Added_Fields_t Added_Fields; */
} Qcst_RGDC0200_t;

 /******************************************************************/
 /* Change Cluster Resource Group -- RGDC0300 (Device)             */
 /******************************************************************/

 typedef _Packed struct Qcst_Rcvy_Domain_Array3 {
     int  Length_Rcvy_Domain_Entry;
     char Node_ID[8];
     int  Node_Role;
     char Site_Name[8];
     int  Offset_Data_Port_IP_Address;
     int  Number_Data_Port_IP_Address;
     int  Action_Data_Port_IP_Address;
   /*char Data_Port_IP_Address[][16]; */
} Qcst_Rcvy_Domain_Array3_t;

 typedef _Packed struct Qcst_RGDC0300_Added_Fields {
     int  Failover_Wait_Time;
     int  Failover_Default_Action;
     char Failover_Msg_Queue[10];
     char Failover_Msg_Queue_Lib[10];
 } Qcst_RGDC0300_Added_Fields_t;

 typedef _Packed struct Qcst_RGDC0300 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Action_Rcvy_Domain_Array[10];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     int  Length_Rcvy_Domain_Array_Entry;
     int  Offset_To_Additional_Fields;
     int  Length_Of_Additional_Fields;
   /*Qcst_Rcvy_Domain_Array3_t Rcvy_Domain_Array[]; */
   /*Qcst_RGDC0300_Added_Fields_t Added_Fields; */
} Qcst_RGDC0300_t;

/******************************************************************/
/* Change Cluster resource group  -- RGDC0400 (Peer)              */
/******************************************************************/
#if (__OS400_TGTVRM__>=540)
 typedef _Packed struct Qcst_RGDC0400 {
     int  Length_Fixed_Fields;
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     int  Length_Rcvy_Domain_Array_Entry;
     char Action_Rcvy_Domain_Array[10];
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Exit_Pgm_Data[256];
     char Application_Id[20];
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Node_Array[]; */
} Qcst_RGDC0400_t;
#endif

 /******************************************************************/
 /* Prototype for calling Add Node To Recovery Domain API.         */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstAddNodeToRcvyDomain,OS,nowiden)
    void QcstAddNodeToRcvyDomain
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Node ID                    */
                           int   ,   /* Node Role                  */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #else
    extern "C"
    void QcstAddNodeToRcvyDomain
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Node ID                    */
                           int  *,   /* Node Role                  */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #endif

 /******************************************************************/
 /* Prototype for calling Remove Node From Recovery Domain API.    */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstRemoveNodeFromRcvyDomain,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstRemoveNodeFromRcvyDomain
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Node ID                    */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Add Cluster Resource Group Device Entry  */
 /*   API.                                                         */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstAddClusterResourceGroupDev,OS,nowiden)
 #else
    extern "C"
#endif
    void QcstAddClusterResourceGroupDev
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Config Object Information  */
                           char *,   /* Format Name                */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Add Cluster Resource Group Device Entry -- RGDA0100            */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDA0100 {
     int Offset_Config_Object_Array;
     int Number_Config_Object_Entries;
     int Length_Config_Obj_Array_Entry;
     int Offset_To_Additional_Fields;
     int Length_Of_Additional_Fields;
   /*Qcst_Config_Object_Array_t Config_Object_Array[]; */
} Qcst_RGDA0100_t;

 /******************************************************************/
 /* Prototype for calling Remove Cluster Resource Group Device     */
 /*   Entry API.                                                   */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstRmvClusterResourceGroupDev,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstRmvClusterResourceGroupDev
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Config Object Information  */
                           char *,   /* Format Name                */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Remove Cluster Resource Group Device Entry -- RGDR0100         */
 /******************************************************************/

 typedef _Packed struct Qcst_Config_Object_Array2 {
     Qcst_Config_Object_t Config_Object_Name;
     char Reserved[2];
     int  Config_Object_Type;
} Qcst_Config_Object_Array2_t;

 typedef _Packed struct Qcst_RGDR0100 {
     int Offset_Config_Object_Array;
     int Number_Config_Object_Entries;
     int Length_Config_Obj_Array_Entry;
     int Offset_To_Additional_Fields;
     int Length_Of_Additional_Fields;
   /*Qcst_Config_Object_Array2_t Config_Object_Array[]; */
} Qcst_RGDR0100_t;

 /******************************************************************/
 /* Prototype for calling Change Cluster Resource Group Device     */
 /*   Entry API.                                                   */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstChgClusterResourceGroupDev,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstChgClusterResourceGroupDev
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Config Object Information  */
                           char *,   /* Format Name                */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Change Cluster Resource Group Device Entry -- RGDH0100         */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDH0100 {
     int Offset_Config_Object_Array;
     int Number_Config_Object_Entries;
     int Length_Config_Obj_Array_Entry;
     int Offset_To_Additional_Fields;
     int Length_Of_Additional_Fields;
   /*Qcst_Config_Object_Array_t Config_Object_Array[]; */
} Qcst_RGDH0100_t;

#if (__OS400_TGTVRM__>=510)                                    /*@A2A*/
    #pragma datamodel(pop)                                     /*@A2A*/
#endif                                                         /*@A2A*/
#endif /* _QCSTCRGM1_h */
