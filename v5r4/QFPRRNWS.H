/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
/***   START OF SPECIFICATIONS   *************************************/
/*                                                                   */
/* Header File Name:  qfprrnws                                       */
/*                                                                   */
/* Descriptive Name: Retrieve NWS Configuration                      */
/*                                                                   */
/* Description: The Retrieve NWS Configuration (QFPRRNWS) API        */
/*              retrieves information about a network server         */
/*              configuration.                                       */
/*                                                                   */
/*********************************************************************/
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qfpr_FPRC0100_t          (Basic info)             */
/*                 Qfpr_FPRC0200_t          (*CNNSEC)                */
/*                 Qfpr_FPRC0300_t          (*RMTSYS)                */
/*                 Qfpr_FPRC0400_t          (*SRVPRC)                */
/*                                                                   */
/*********************************************************************/
/* Change Activity:                                                  */
/* CFD List:                                                         */
/* FLAG REASON   VERS DATE   PGMR     COMMENTS                       */
/* ____ ________ ____ ______ ________ _______________________________*/
/* $A0= D93227   5w40 050324 ROCH:    New include                    */
/* End CFD List.                                                     */
/* End Change Activity.                                              */
/***   END OF SPECIFICATIONS   ***************************************/
#ifndef _QFPRRNWS_H
#define _QFPRRNWS_H

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

/*********************************************************************/
/* Prototype for calling Retrieve NWS Configuration API (QFPRRNWS)   */
/*********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPRRNWS,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QFPRRNWS (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* NWS configuration name         */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the IP security rule                       */
 /******************************************************************/

typedef _Packed struct Qfpr_IpSecRule
    {
       int   IP_Sec_PSKey_Length;
       char  IP_Sec_PSKey[64];
    } Qfpr_IpSecRule_t;

 /******************************************************************/
 /* Type Definition for the Remote interface                       */
 /******************************************************************/

typedef _Packed struct Qfpr_RmtIfc
    {
       char  SCSI_Adapter_Address[12];
       int   SCSI_Address_Version;
       char  SCSI_Internet_Address[15];
       char  reserve1;
       char  SCSI_Subnet_Mask[15];
       char  reserve2;
       char  SCSI_Gateway_Address[15];
       char  reserve3;
       int   SCSI_IQN_Length;
       char  SCSI_IQN[255];
       char  reserve4;
       char  LAN_Adapter_Address[12];
       int   LAN_Address_Version;
       char  LAN_Internet_Address[15];
       char  reserve5;
       char  LAN_Subnet_Mask[15];
       char  reserve6;
       char  LAN_Gateway_Address[15];
       char  reserve7[20];
    } Qfpr_RmtIfc_t;

 /******************************************************************/
 /* Type Definition for the FPRC0100 format - Basic NWS Config     */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfpr_FPRC0100
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       int   Offset_to_Higher_Level_Fmt;
       char  Date_Info_Retrieved[7];
       char  Time_Info_Retrieved[6];
       char  Network_Server_Config_Name[10];
       char  Network_Server_Config_Library[10];
       char  Validation_List_Name[10];
       char  Validation_List_Library[10];
       char  Text_Desc[50];
       char  reserved;
       int   Configuration_Type;
    } Qfpr_FPRC0100_t;

 /******************************************************************/
 /* Type Definition for the FPRC0200 format - *CNNSEC Info         */
 /******************************************************************/

 typedef _Packed struct Qfpr_FPRC0200
    {
     /*Qfpr_FPRC0100_t FPRC0100;*/
       int   Offset_IP_Sec_Rule;
       int   Nbr_of_IP_Sec_Rule;
       int   Length_IP_Sec_Rule;
     /*Qfpr_IpSecRule_t[];*//*Varying*/
    } Qfpr_FPRC0200_t;

 /******************************************************************/
 /* Type Definition for the FPRC0300 format - *RMTSYS Info         */
 /******************************************************************/

 typedef _Packed struct Qfpr_FPRC0300
    {
     /*Qfpr_FPRC0100_t FPRC0100;*/
       char  SP_NWS_Config_Name[10];
       char  SP_NWS_Config_Library[10];
       char  RmtSys_Serial_Number[12];
       char  RmtSys_Type_Model[24];
       int   Delivery_Method;
       char  Chap_Name[16];
       char  Chap_Secret[24];
       int   Boot_Device_Bus;
       int   Boot_Device_Device;
       int   Boot_Device_Function;
       char  Vendor_ID[8];
       char  Client_ID[8];
       int   Offset_Remote_IFC;
       int   Nbr_of_Remote_IFC;
       int   Length_Remote_IFC;
     /*Qfpr_RmtIfc_t[];*//*Varying*/
    } Qfpr_FPRC0300_t;

 /******************************************************************/
 /* Type Definition for the FPRC0400 format - *SRVPRC Info         */
 /******************************************************************/

 typedef _Packed struct Qfpr_FPRC0400
    {
     /*Qfpr_FPRC0100_t FPRC0100;*/
       int   Init_SP;
       int   Enable_Unicast;
       int   SP_Name_Length;
       char  SP_Name[255];
       char  reserved1;
       int   SP_Address_Version;
       char  SP_Address[15];
       char  SP_User_Name[15];
       char  SP_Password[15];
       char  reserved2[3];
       int   SP_Cert_Component;
       int   SP_Cert_Compare_Length;
       char  SP_Cert_Compare_Value[255];
       char  reserved3;
       char  Enclosure_Serial_Number[12];
       char  Enclosure_Type_Model[24];
    } Qfpr_FPRC0400_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

#endif /* _QFPRRNWS_H */

