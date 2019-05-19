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
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QESCPTFO                                   */
/*                                                                */
/* Descriptive Name: Include for Control PTF Order API            */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: Control PTF Order (QESCPTFO) API is used to       */
/*              download PTFs                                     */
/*                                                                */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qes_PTFEntry_Ordered_Fmt                       */
/*                 Qes_PTFO0100_Fmt                               */
/*                 Qes_PTFO0200_Fmt                               */
/*                 Qes_PTFO0300_Fmt                               */
/*                 Qes_CNTC0100_Fmt                               */
/*                 Qes_PTFEntry_Sent_Fmt                          */
/*                 Qes_PTFD0100_Fmt                               */
/*                 Qes_DtaQue_Fmt                                 */
/*                 Qes_DtaQue01_Fmt                               */
/*                 Qes_DtaQue02_Fmt                               */
/*                                                                */
/* Function Prototype List: QESCPTFO                              */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D93302      v5r4m0 050605 STLOMELI  New part              */
/*                                                                */
/* End Change Activity.                                           */
/******************************************************************/

#ifndef QESCPTFO_h

#define QESCPTFO_h


#pragma datamodel(P128)

/******************************************************************/
/* Prototype for calling Control PTF Order API QESCPTFO           */
/******************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QESCPTFO,OS,nowiden)
#else
     extern "OS"
#endif

void QESCPTFO (void *,          /* PTF Order Information          */
               int  *,          /* Length of PTF order information*/
               char *,          /* Format of PTF order information*/
               void *,          /* Contact Information            */
               int  *,          /* Length of contact information  */
               char *,          /* Format of contact information  */
               void *,          /* Receiver Variable              */
               int  *,          /* Length of Receiver Variable    */
               char *,          /* Format of Receiver Variable    */
               void *);         /* Error code                     */

/******************************************************************/
/* Format for PTF entries ordered information                     */
/******************************************************************/
typedef _Packed struct  Qes_PTFEntry_Ordered_Fmt{
     char   PTF_ID[10];
     char   Product[7];
     char   Release[6];
} Qes_PTFEntry_Ordered_Fmt_t;

/******************************************************************/
/* Format for PTF order information for processing a request      */
/******************************************************************/
typedef _Packed struct  Qes_PTFO0100_Fmt{
     int    Len_Fixed_Size_Ord_Info;
     int    Offset_PTFs_Ordered;
     int    Num_PTFs_Ordered;
     int    Len_PTF_Order_Entry;
     int    Max_Order_Size;
     char   PTF_Parts_Ordered[10];
     char   Delivery_Method[10];
     char   Delivery_Format[10];
     char   Requisites[10];
     char   Reorder[10];
     char   Check[10];
     int    Offset_Image_Dir;
     int    Len_Image_Dir;
     char   Image_Prefix[10];
     char   Name_Status_Data_Queue[10];
     char   Lib_Status_Data_Queue[10];
     char   Reserved1[2];
     int    Update_Interval;
     int    Wait_Time_Order_Comp;
     /*char   Image_Dir[1];      */     /* variable length data   */
     /*Qes_PTFEntry_Ordered_Fmt_t PTF_Entries[1]; */ /*var len dta*/
} Qes_PTFO0100_Fmt_t;

/******************************************************************/
/* Format for PTF order information for resuming a request        */
/******************************************************************/
typedef _Packed struct  Qes_PTFO0200_Fmt{
     char   Order_Identifier[31];
     char   Reserved1[1];
     int    Wait_Time_Order_Comp;
} Qes_PTFO0200_Fmt_t;

/******************************************************************/
/* Format for PTF order information for cancelling a request      */
/******************************************************************/
typedef _Packed struct  Qes_PTFO0300_Fmt{
     char   Order_Identifier[31];
} Qes_PTFO0300_Fmt_t;

/******************************************************************/
/* Type Definition for contact information (CNTC0100 format)      */
/******************************************************************/
typedef _Packed struct Qes_CNTC0100_Fmt{
    char Company_Name[36];
    char Contact_Name[36];
    char Primary_Telephone[20];
    char Helpdesk_Pagenumber[20];
    char Primary_Fax[20];
    char Alternative_Fax[20];
    char Street_Address_L1[36];
    char Street_Address_L2[36];
    char Street_Address_L3[36];
    char City_Locality[36];
    char State_Province[36];
    char Country_Region[20];
    char Postal_Code[12];
    int  Offset_Pri_Email_Address;
    int  Length_Pri_Email_Address;
    int  Offset_Alt_Email_Address;
    int  Length_Alt_Email_Address;
    int  Media_Mailing_PTF;
    char National_Language_Version[10];
    /*char Primary_Email_Address[1];*/      /* Varying length     */
    /*char Alternative_Email_Address[1];*/  /* Varying length     */
} Qes_CNTC0100_Fmt_t;

/******************************************************************/
/* Format for PTF entries sent information                        */
/******************************************************************/
typedef _Packed struct  Qes_PTFEntry_Sent_Fmt{
     char   PTF_ID[7];
     char   Product[7];
     char   Release[6];
} Qes_PTFEntry_Sent_Fmt_t;

/******************************************************************/
/* Format for Receiver Variable                                   */
/******************************************************************/
typedef _Packed struct  Qes_PTFD0100_Fmt{
     int    Bytes_Returned;
     int    Bytes_Available;
     char   Order_Identifier[31];
     char   Delivery_Mode[10];
     char   Reserved1[3];
     int    Offset_PTFs_Delivered;
     int    Num_PTFs_Delivered;
     int    Len_PTF_Delivered_Entry;
     int    Order_Prep_Time;
     char   Order_Status[8];
     /*Qes_PTFEntry_Sent_Fmt_t PTF_Entries[1]; */ /* var len data */
} Qes_PTFD0100_Fmt_t;

/******************************************************************/
/* Format for status data queue information                       */
/******************************************************************/
typedef _Packed struct  Qes_DtaQue_Fmt{
     char   Message_Identifier[10];
     char   Message_Format[2];
     /*char  Message_Status_Data[1]; */ /* variable length data   */
} Qes_DtaQue_Fmt_t;

/******************************************************************/
/* Format 01 for order to deliver message data in the data queue  */
/******************************************************************/
typedef _Packed struct  Qes_DtaQue01_Fmt{
     char   Receiver_Format[8];
     /*Qes_PTFD0100_Fmt_t Order_Data[1]; */ /* var length data    */
} Qes_DtaQue01_Fmt_t;

/******************************************************************/
/* Format 02 for download status message data in the data queue   */
/******************************************************************/
typedef _Packed struct  Qes_DtaQue02_Fmt{
     char   Order_Identifier[31];
     char   Reserved[1];
     int    Order_Size;
     int    Bytes_Downloaded;
} Qes_DtaQue02_Fmt_t;

#pragma datamodel(pop)
#endif
