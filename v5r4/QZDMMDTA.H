#ifndef _QZDMMDTA_H
#define _QZDMMDTA_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QZDMMDTA                                      */
/*                                                                   */
/* Descriptive Name: OptiConnect APIs.                               */
/*                                                                   */
/* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Include header file containing the structure         */
/*              definitions and prototypes for the OptiConnect APIs  */
/*              for the QZDMMDTA service program.                    */
/*                                                                   */
/* Header Files Included:                                            */
/*                        H/POINTER                                  */
/*                        H/LIMITS                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                  Qzdm_CPTH0100_t                                  */
/*                  Qzdm_CSTR0100_t                                  */
/*                  Qzdm_OPRC0100_t                                  */
/*                  Qzdm_OPRQ0100_t                                  */
/*                  Qzdm_OSTR0100_t                                  */
/*                  Qzdm_RCRC0100_t                                  */
/*                  Qzdm_RCRQ0100_t                                  */
/*                  Qzdm_RQRC0100_t                                  */
/*                  Qzdm_RQRQ0100_t                                  */
/*                  Qzdm_RSRC0100_t                                  */
/*                  Qzdm_RSRQ0100_t                                  */
/*                  Qzdm_SRRC0100_t                                  */
/*                  Qzdm_SRRQ0100_t                                  */
/*                  Qzdm_SRSP0100_t                                  */
/*                  Qzdm_WMRC0100_t                                  */
/*                  Qzdm_WMRQ0100_t                                  */
/*                                                                   */
/* Function Prototype List:                                          */
/*                          QzdmClosePath                            */
/*                          QzdmCloseStream                          */
/*                          QzdmOpenPath                             */
/*                          QzdmOpenStream                           */
/*                          QzdmReceiveControl                       */
/*                          QzdmReceiveRequest                       */
/*                          QzdmReceiveResponse                      */
/*                          QzdmSendRequest                          */
/*                          QzdmSendResponse                         */
/*                          QzdmWaitMessage                          */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------   ------------------------ */
/* $00= D9452200     3D70  960403 VTT:      New Include for V3R7     */
/* $01= D???????     4D40  980831 VTT:      Fix extern               */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/


/*********************************************************************/
/* Header Files Included.                                            */
/*********************************************************************/

#include <pointer.h>
#include <limits.h>

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*********************************************************************/
/* Common Type Definitions                                           */
/*********************************************************************/

typedef long int Qzdm_Length_Rcv_Var_t;

typedef char Qzdm_Format_Rcv_Var_t[8];

typedef long int Qzdm_Length_Req_Var_t;

typedef char Qzdm_Format_Req_Var_t[8];

typedef char Qzdm_Stream_Id_t[16];

typedef char Qzdm_Path_Id_t[8];

typedef char Qzdm_Transaction_Id_t[8];

typedef long int Qzdm_Total_Req_Data_Len_t;

typedef long int Qzdm_Cur_Out_Data_Len_t;

typedef long int Qzdm_Max_Rsp_Data_Len_t;

typedef long int Qzdm_Timeout_Value_t;

typedef long int Qzdm_Off_Inp_Descriptor_t;

typedef long int Qzdm_Num_Inp_Descriptor_t;

typedef char Qzdm_Acknowledge_Data_t[4];

typedef long int Qzdm_Act_Rsp_Data_Len_t;

typedef long int Qzdm_Off_Out_Descriptor_t;

typedef long int Qzdm_Num_Out_Descriptor_t;


/*********************************************************************/
/* Type Definition for Input Descriptor.                             */
/*********************************************************************/

typedef _Packed struct Qzdm_Input_Descriptor
{
   _SPCPTR                   Data_Buffer_Ptr;
   long int                  Data_Buffer_Length;
   char                      Reserved[12];
} Qzdm_Input_Descriptor_t;


/*********************************************************************/
/* Type Definition for Output Descriptor.                            */
/*********************************************************************/

typedef _Packed struct Qzdm_Output_Descriptor
{
   _SPCPTR                   Data_Buffer_Ptr;
   long int                  Data_Buffer_Length;
   char                      Reserved[12];
} Qzdm_Output_Descriptor_t;


/*********************************************************************/
/* Type Definitions for Open Path (QzdmOpenPath) API.                */
/*********************************************************************/

typedef char Qzdm_Remote_Sys_Name_t[8];
typedef char Qzdm_Prog_Name_t[10];
typedef char Qzdm_Prog_Lib_Name_t[10];


/*********************************************************************/
/* Type Definitions for Receive Control (QzdmReceiveControl) API.    */
/*********************************************************************/

typedef char Qzdm_Control_Msg_Type_t;
typedef char Qzdm_Control_Msg_Data_t[8];


/*********************************************************************/
/* Type Definitions for Wait Message (QzdmWaitMessage) API.          */
/*********************************************************************/

typedef char Qzdm_Message_Type_t;


/*********************************************************************/
/* Valid Format Names for Close Path (QzdmClosePath) API.            */
/*********************************************************************/

#define  QZDM_CLOSE_PATH_0100               "CPTH0100"


/*********************************************************************/
/* Valid Format Names for Close Stream (QzdmCloseStream) API.        */
/*********************************************************************/

#define  QZDM_CLOSE_STREAM_0100             "CSTR0100"


/*********************************************************************/
/* Valid Format Names for Open Path (QzdmOpenPath) API.              */
/*********************************************************************/

#define  QZDM_OPEN_PATH_RCV_0100            "OPRC0100"
#define  QZDM_OPEN_PATH_REQ_0100            "OPRQ0100"


/*********************************************************************/
/* Valid Format Names for Open Stream (QzdmOpenStream) API.          */
/*********************************************************************/

#define  QZDM_OPEN_STREAM_0100              "OSTR0100"


/*********************************************************************/
/* Valid Format Names for Receive Control (QzdmReceiveControl) API.  */
/*********************************************************************/

#define  QZDM_RECEIVE_CONTROL_RCV_0100      "RCRC0100"
#define  QZDM_RECEIVE_CONTROL_REQ_0100      "RCRQ0100"


/*********************************************************************/
/* Valid Format Names for Receive Request (QzdmReceiveRequest) API.  */
/*********************************************************************/

#define  QZDM_RECEIVE_REQUEST_RCV_0100      "RQRC0100"
#define  QZDM_RECEIVE_REQUEST_REQ_0100      "RQRQ0100"


/*********************************************************************/
/* Valid Format Names for Receive Response (QzdmReceiveResponse) API.*/
/*********************************************************************/

#define  QZDM_RECEIVE_RESPONSE_RCV_0100     "RSRC0100"
#define  QZDM_RECEIVE_RESPONSE_REQ_0100     "RSRQ0100"


/*********************************************************************/
/* Valid Format Names for Send Request (QzdmSendRequest) API.        */
/*********************************************************************/

#define  QZDM_SEND_REQUEST_RCV_0100         "SRRC0100"
#define  QZDM_SEND_REQUEST_REQ_0100         "SRRQ0100"


/*********************************************************************/
/* Valid Format Names for Send Response (QzdmSendResponse) API.      */
/*********************************************************************/

#define  QZDM_SEND_RESPONSE_0100            "SRSP0100"


/*********************************************************************/
/* Valid Format Names for Wait Message (QzdmWaitMessage) API.        */
/*********************************************************************/

#define  QZDM_WAIT_MESSAGE_RCV_0100         "WMRC0100"
#define  QZDM_WAIT_MESSAGE_REQ_0100         "WMRQ0100"


/*********************************************************************/
/* Valid values for Control Message Type.                            */
/*********************************************************************/

#define  QZDM_CONTROL_MSG_TYPE_1            "1"


/*********************************************************************/
/* Valid values for Message Type.                                    */
/*********************************************************************/

#define  QZDM_MESSAGE_TYPE_1                "1"
#define  QZDM_MESSAGE_TYPE_2                "2"
#define  QZDM_MESSAGE_TYPE_3                "3"


/*********************************************************************/
/*  Type Definition for the CPTH0100 Format, for the Close Path      */
/*   (QzdmClosePath) API request variable.                           */
/*********************************************************************/

typedef _Packed struct Qzdm_CPTH0100
{
   Qzdm_Stream_Id_t          Stream_Id;
   Qzdm_Path_Id_t            Path_Id;
} Qzdm_CPTH0100_t;


/*********************************************************************/
/*  Type Definition for the CSTR0100 Format, for the Close Stream    */
/*   (QzdmCloseStream) API request variable.                         */
/*********************************************************************/

typedef _Packed struct Qzdm_CSTR0100
{
   Qzdm_Stream_Id_t          Stream_Id;
} Qzdm_CSTR0100_t;


/*********************************************************************/
/*  Type Definition for the OPRC0100 Format, for the Open Path       */
/*   (QzdmOpenPath) API receiver variable.                           */
/*********************************************************************/

typedef _Packed struct Qzdm_OPRC0100
{
   Qzdm_Path_Id_t            Path_Id;
} Qzdm_OPRC0100_t;


/*********************************************************************/
/*  Type Definition for the OPRQ0100 Format, for the Open Path       */
/*   (QzdmOpenPath) API request variable.                            */
/*********************************************************************/

typedef _Packed struct Qzdm_OPRQ0100
{
   Qzdm_Stream_Id_t              Stream_Id;
   Qzdm_Remote_Sys_Name_t        Remote_Sys_Name;
   Qzdm_Prog_Name_t              Prog_Name;
   Qzdm_Prog_Lib_Name_t          Prog_Lib_Name;
} Qzdm_OPRQ0100_t;


/*********************************************************************/
/*  Type Definition for the OSTR0100 Format, for the Open Stream     */
/*   (QzdmOpenStream) API receiver variable.                         */
/*********************************************************************/

typedef _Packed struct Qzdm_OSTR0100
{
   Qzdm_Stream_Id_t          Stream_Id;
} Qzdm_OSTR0100_t;


/*********************************************************************/
/*  Type Definition for the RCRC0100 Format, for the Receive Control */
/*   (QzdmReceiveControl) API receiver variable.                     */
/*********************************************************************/

typedef _Packed struct Qzdm_RCRC0100
{
   Qzdm_Control_Msg_Type_t   Control_Msg_Type;
   Qzdm_Control_Msg_Data_t   Control_Msg_Data;
} Qzdm_RCRC0100_t;


/*********************************************************************/
/*  Type Definition for the RCRQ0100 Format, for the Receive Control */
/*   (QzdmReceiveControl) API request variable.                      */
/*********************************************************************/

typedef _Packed struct Qzdm_RCRQ0100
{
   Qzdm_Stream_Id_t          Stream_Id;
} Qzdm_RCRQ0100_t;


/*********************************************************************/
/*  Type Definition for the RQRC0100 Format, for the Receive Request */
/*   (QzdmReceiveRequest) API receiver variable.                     */
/*********************************************************************/

typedef _Packed struct Qzdm_RQRC0100
{
   Qzdm_Transaction_Id_t     Transaction_Id;
   Qzdm_Path_Id_t            Path_Id;
   Qzdm_Total_Req_Data_Len_t Total_Req_Data_Len;
   Qzdm_Cur_Out_Data_Len_t   Cur_Out_Data_Len;
   Qzdm_Max_Rsp_Data_Len_t   Max_Rsp_Data_Len;
} Qzdm_RQRC0100_t;


/*********************************************************************/
/*  Type Definition for the RQRQ0100 Format, for the Receive Request */
/*   (QzdmReceiveRequest) API request variable.                      */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzdm_RQRQ0100
{
   Qzdm_Stream_Id_t          Stream_Id;
   Qzdm_Timeout_Value_t      Timeout_Value;
   Qzdm_Off_Out_Descriptor_t Off_Out_Descriptor;
   Qzdm_Num_Out_Descriptor_t Num_Out_Descriptor;
   char                      Reserved[4];
 /*Qzdm_Output_Descriptor_t  Output_Descriptor[];*//* varying length */
} Qzdm_RQRQ0100_t;


/*********************************************************************/
/*  Type Definition for the RSRC0100 Format, for the Receive Response*/
/*   (QzdmReceiveResponse) API receiver variable.                    */
/*********************************************************************/

typedef _Packed struct Qzdm_RSRC0100
{
   Qzdm_Acknowledge_Data_t   Acknowledge_Data;
   Qzdm_Act_Rsp_Data_Len_t   Act_Rsp_Data_Len;
} Qzdm_RSRC0100_t;


/*********************************************************************/
/*  Type Definition for the RSRQ0100 Format, for the Receive Response*/
/*   (QzdmReceiveResponse) API request variable.                     */
/*********************************************************************/

typedef _Packed struct Qzdm_RSRQ0100
{
   Qzdm_Stream_Id_t          Stream_Id;
   Qzdm_Path_Id_t            Path_Id;
   Qzdm_Timeout_Value_t      Timeout_Value;
   Qzdm_Transaction_Id_t     Transaction_Id;
} Qzdm_RSRQ0100_t;


/*********************************************************************/
/*  Type Definition for the SRRC0100 Format, for the Send Request    */
/*   (QzdmSendRequest) API receiver variable.                        */
/*********************************************************************/

typedef _Packed struct Qzdm_SRRC0100
{
   Qzdm_Transaction_Id_t     Transaction_Id;
} Qzdm_SRRC0100_t;


/*********************************************************************/
/*  Type Definition for the SRRQ0100 Format, for the Send Request    */
/*   (QzdmSendRequest) API request variable.                         */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzdm_SRRQ0100
{
   Qzdm_Stream_Id_t          Stream_Id;
   Qzdm_Path_Id_t            Path_Id;
   Qzdm_Max_Rsp_Data_Len_t   Max_Rsp_Data_Len;
   Qzdm_Off_Inp_Descriptor_t Off_Inp_Descriptor;
   Qzdm_Num_Inp_Descriptor_t Num_Inp_Descriptor;
   Qzdm_Off_Out_Descriptor_t Off_Out_Descriptor;
   Qzdm_Num_Out_Descriptor_t Num_Out_Descriptor;
   char                      Reserved[4];
 /*Qzdm_Input_Descriptor_t   Input_Descriptor[];*/  /* varying length*/
 /*Qzdm_Output_Descriptor_t  Output_Descriptor[];*//* varying length */
} Qzdm_SRRQ0100_t;


/*********************************************************************/
/*  Type Definition for the SRSP0100 Format, for the Send Response   */
/*   (QzdmSendResponse) API request variable.                        */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzdm_SRSP0100
{
   Qzdm_Stream_Id_t          Stream_Id;
   Qzdm_Transaction_Id_t     Transaction_Id;
   Qzdm_Act_Rsp_Data_Len_t   Act_Rsp_Data_Len;
   Qzdm_Acknowledge_Data_t   Acknowledge_Data;
   Qzdm_Off_Inp_Descriptor_t Off_Inp_Descriptor;
   Qzdm_Num_Inp_Descriptor_t Num_Inp_Descriptor;
   char                      Reserved[8];
 /*Qzdm_Input_Descriptor_t   Input_Descriptor[];*/  /* varying length*/
} Qzdm_SRSP0100_t;


/*********************************************************************/
/*  Type Definition for the WMRC0100 Format, for the Wait Message    */
/*   (QzdmWaitMessage) API receiver variable.                        */
/*********************************************************************/

typedef _Packed struct Qzdm_WMRC0100
{
   Qzdm_Message_Type_t       Message_Type;
} Qzdm_WMRC0100_t;


/*********************************************************************/
/*  Type Definition for the WMRQ0100 Format, for the Wait Message    */
/*   (QzdmWaitMessage) API request variable.                         */
/*********************************************************************/

typedef _Packed struct Qzdm_WMRQ0100
{
   Qzdm_Stream_Id_t          Stream_Id;
   Qzdm_Timeout_Value_t      Timeout_Value;
} Qzdm_WMRQ0100_t;


/*********************************************************************/
/* Prototype for calling Close Path (QzdmClosePath) API.             */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmClosePath, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmClosePath(
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Close Stream (QzdmCloseStream) API.         */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmCloseStream, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmCloseStream(
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Open Path (QzdmOpenPath) API.               */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmOpenPath, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmOpenPath(
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  receiver variable  */
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Open Stream (QzdmOpenStream) API.           */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmOpenStream, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmOpenStream(
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  receiver variable  */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Receive Control (QzdmReceiveControl) API.   */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmReceiveControl, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmReceiveControl(
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  receiver variable  */
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Receive Request (QzdmReceiveRequest) API.   */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmReceiveRequest, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmReceiveRequest(
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  receiver variable  */
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Receive Response (QzdmReceiveResponse) API. */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmReceiveResponse, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmReceiveResponse(
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  receiver variable  */
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Send Request (QzdmSendRequest) API.         */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmSendRequest, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmSendRequest(
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  receiver variable  */
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Send Response (QzdmSendResponse) API.       */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmSendResponse, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmSendResponse(
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


/*********************************************************************/
/* Prototype for calling Wait Message (QzdmWaitMessage) API.         */
/*********************************************************************/

#ifdef __ILEC400__
      #pragma argument(QzdmWaitMessage, OS, nowiden)
      extern
#else
      extern "C"
#endif

       void QzdmWaitMessage(
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  receiver variable  */
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                          );


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*_QZDMMDTA_H*/
