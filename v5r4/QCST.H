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

#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

#ifndef __qcst_h
  #define __qcst_h 1

#if (__OS400_TGTVRM__>=510)                                     /*@03A*/
    #pragma datamodel(P128)                                     /*@03A*/
#endif                                                          /*@03A*/


/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name: H/QCST                                           */
/*                                                                    */
/* Description: Common information amongst Cluster APIs.              */
/*                                                                    */
/* Description:  Cluster Common Functions                             */
/*                                                                    */
/* Header Files Included:   None                                      */
/*                                                                    */
/* Macros List:             None                                      */
/*                                                                    */
/* Structure List:  Qcst_Results_Info_UsrQ_Entry_t                    */
/*                  Qcst_Results_Info_UsrQ_t                          */
/*                                                                    */
/* Function Prototype List: None                                      */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ------------------------- */
/* $00= D95708.10    4D40  980317 ROCH    : New include               */
/* $01= D97869.3     5D10  990917 ROCH    : Added Device Domain type  */
/* $02= D97171.4     5D10  990712 ROCH    : Resilient device support  */
/* $03= D98212.1   v5r1m0  991107 ROCH    : Teraspace stage 2         */
/* $04= D97869.5   v5r1m0  991205 ROCH    : Add Config Tuning Level   */
/* $05= D98416     v5r2m0  010326 ROCH    : Primary/Secondary IASPs   */
/* $06= D98462     v5r2m0  010620 ROCH    : Failover MsgQ support     */
/* $07= D99125     v5r3m0  020709 ROCH    : Remote IASP Mirroring     */
/* $08= D99124.10  v5r3m0  030401 ROCH    : Change value of           */
/*                                          CurrentMessageVersionID   */
/*                                          to be value currently set */
/* $09= D99488     v5r4m0  040317 ROCH    : Support Peer CRGs         */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

/**********************************************************************/
/* Includes                                                           */
/**********************************************************************/

/******************************************************************/
/* Defines for special values                                     */
/******************************************************************/
#define QcstJobd "*JOBD     "
#define QcstNone "*NONE     "
#define QcstSame "*SAME     "
#define QcstPrimaryNodeRole 0
#define QcstReplicateNodeRole -1
#define QcstPeerNodeRole -4
#define QcstSameNodeRole -2
#define QcstMaxClusterNodes 128
#define QcstMaxCrgDevices 256
#define QcstMaxDataPortIpAddresses 4

/******************************************************************/
/* Cluster Resource Group Status Values                           */
/******************************************************************/
enum QcstCrgStatus {
     QcstCrgActive               = 10,
     QcstCrgInactive             = 20,
     QcstCrgIndoubt              = 30,
     QcstCrgRestored             = 40,
     QcstCrgAddnodePending       = 500,
     QcstCrgDeletePending        = 510,
     QcstCrgChangePending        = 520,
     QcstCrgEndCrgPending        = 530,
     QcstCrgInitializePending    = 540,
     QcstCrgRemovenodePending    = 550,
     QcstCrgStartCrgPending      = 560,
     QcstCrgSwitchOverPending    = 570,
     QcstCrgDeleteCmdPending     = 580,
     QcstCrgAddDevEntPending     = 590,
     QcstCrgRmvDevEntPending     = 600,
     QcstCrgChgDevEntPending     = 610,
     QcstCrgChgNodeStatusPending = 620
 };

/******************************************************************/
/* Cluster Node Status                                            */
/******************************************************************/
 enum QcstClusterNodeStatus {
     QcstNew = 1,
     QcstActive,
     QcstRemovePending,
     QcstActivePending,
     QcstInactivePending,
     QcstInactive,
     QcstFailed,
     QcstPartition
 };

/**********************************************************************/
/* Type definitions                                                   */
/**********************************************************************/

typedef char Qcst_Cluster_Name_t[10];

typedef char Qcst_Node_Id_t[8];

typedef char Qcst_Format_Name_t[8];

typedef char Qcst_Request_Handle_t[16];

typedef char Qcst_Device_Domain_Name_t[10];

typedef char Qcst_Crg_Name_t[10];

typedef char Qcst_Config_Object_t[10];

typedef char Qcst_Text_Description_t[50];

typedef int  Qcst_Crg_Type_t;

typedef char  Qcst_Crg_Exit_Program_Data_t[256];

typedef char  Qcst_TakeOver_IP_Address_t[16];

typedef char Qcst_Site_Name_t[8];

typedef char Qcst_Data_Port_IP_Address_t[16];

#if (__OS400_TGTVRM__>=540)
typedef char Qcst_Application_Id_t[20];
#endif

/******************************************************************/
/* Cluster Resource Group Type Values                             */
/******************************************************************/
enum QcstCrgType {
     QcstCrgDataResiliency = 1,
     QcstCrgApplResiliency = 2,
     QcstCrgDevResiliency  = 3
#if (__OS400_TGTVRM__>=540)
     ,
     QcstCrgPeerResiliency = 4
#endif
 };


/**********************************************************************/
/* Results Information User Queue Entry                               */
/**********************************************************************/
#define CurrentMessageVersionId  0; /* use this for Msg_Version_Id */

 typedef _Packed struct Qcst_Results_Info_UsrQ_Key {
     char Entry_Type[10];
     char Entry_ID[2];
     char Request_Handle[16];
} Qcst_Results_Info_UsrQ_Key_t;

 typedef _Packed struct Qcst_Results_Info_UsrQ_Entry {
     int  Msg_Version_Id;
     int  Msg_Type;
     char Api_Name[30];
     char Msg_Id[7];
     char Reserved1[35];
     char Failing_Node_Id[8];
     char External_Object_Name[10];
     char Reserved2[2];
     int  Offset_To_Msg_Data;
     int  Msg_Data_Len;
/*     char Msg_Data[];                                                */
} Qcst_Results_Info_UsrQ_Entry_t;

enum QcstRiqCompletionReasonCode {
  QcstApiSuccessful                  = 1,
  QcstApiSuccessfulWithFailure       = 2,
  QcstApiFailure                     = 3
};

enum QcstMessageType {
  QcstDiag     = 1,
  QcstInfo     = 2,
  QcstComp     = 3,
  QcstUserData = 4
};

/******************************************************************/
/* Resilient Device Vary Configuration Object Online              */
/******************************************************************/
enum QcstConfigObjectOnline {
     QcstVariedOff        = 0,
     QcstVariedOn         = 1,
     QcstSamAsPrimaryIASP = 2
 };

/******************************************************************/
/* Configuration Object Types                                     */
/******************************************************************/
enum QcstConfigObjectType {
     QcstDeviceDesc = 1
 };

/******************************************************************/
/* Device Types                                                   */
/******************************************************************/
enum QcstDeviceType {
     QcstAuxStoragePool = 1
 };

/******************************************************************/
/* Device Subtypes                                                */
/******************************************************************/
enum QcstDeviceSubtype {
     QcstDevSubtypeNotKnown = -1,
     QcstNoDevSubtype       =  0,
     QcstUDFSIASP           =  1,
     QcstSecondaryIASP      =  2,
     QcstPrimaryIASP        =  3
 };


/******************************************************************/
/* Cluster Configuration Tuning Level                             */
/******************************************************************/
enum QcstConfigTuningLevel {
     QcstLessSensitiveTuning = 1,
     QcstNormalTuning = 2,
     QcstMoreSensitiveTuning = 3
 };

/******************************************************************/
/* Failover Default Action                                        */
/******************************************************************/
enum QcstFailoverDefaultAction {
     QcstFailoverProceed = 0,
     QcstFailoverCancel = 1
 };

/******************************************************************/
/* Failover Wait Time                                             */
/******************************************************************/
enum QcstFailoverWaitTime {
     QcstFailoverWaitForever = -1,
     QcstFailoverNoWait = 0
 };

/**********************************************************************/
/* Request Information Parameter                                      */
/**********************************************************************/

 typedef _Packed struct Qcst_Results_Info_Parm {
     char User_Queue_Name[10];
     char User_Queue_Lib_Name[10];
     char Reserved[10];
} Qcst_Results_Info_Parm_t;

/******************************************************************/
/* Cluster Resource Group Membership Status                       */
/******************************************************************/
enum QcstCrgMembershipStatus {
     QcstCrgMemberActive     = 0,
     QcstCrgMemberInactive   = 1,
     QcstCrgMemberPartition  = 2,
     QcstCrgMemberIneligible = 3
 };

/**********************************************************************/
/* Macros                                                             */
/**********************************************************************/


/**********************************************************************/
/* Function Prototypes                                                */
/**********************************************************************/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#if (__OS400_TGTVRM__>=510)                                      /*@03A*/
    #pragma datamodel(pop)                                       /*@03A*/
#endif                                                           /*@03A*/

#endif /* __qcst_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
