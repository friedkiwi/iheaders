/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1997, 2005                                */
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
 /* Header File Name: H/QGYOLJBL                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Job Log Messages                */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYOLJBL API lists messages from a job log.   */
 /*              The returned messages are sorted by their sending */
 /*              date and time unless the message being listed is  */
 /*              a reply message to an inquiry, a sender's copy,   */
 /*              or a notify type message.                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qgy_Oljbl_IDFieldInfo_t                       */
 /*                  Qgy_Oljbl_RecVar_t                            */
 /*                  Qgy_Oljbl_ListInfo_t                          */
 /*                  Qgy_Oljbl_MsgSelInfo_t                        */
 /*                                                                */
 /* Function Prototype List: QGYOLJBL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960531 DPW       New Include           */
 /* $A1= D98871     v5r2m0  010902 LIGGETT:  Add microseconds      */
 /* $  = P9957093  v5r2m0  011112 LIGGETT:  Fix comment delimiters */
 /* $A2= D99895.1   v5r4m0  040801 LIGGETT:  Add thread ID         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYOLJBL_h
 #define QGYOLJBL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for call to QGYOLJBL API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYOLJBL,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYOLJBL  (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   void *,     /* Message selection information     */
                   int   ,     /* Size of message selection info    */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definition for the Identifier Field Information            */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qgy_Oljbl_IDFieldInfo
 {
    int   Next_Returned_Field_Offset;
    int   Field_Info_Length;
    int   Identifier_Field;
    char  Type_of_Data;
    char  Status_of_Data;
    char  Reserved1[14];
    int   Data_Length;
  /*char  Data[];*/              /* VARYING LENGTH */
  /*char  Reserved2[];*/         /* VARYING LENGTH */
 } Qgy_Oljbl_IDFieldInfo_t;

 /******************************************************************/
 /* Type Definition for the Receiver Variable, Format OLJL0100     */
 /*   NOTE:  This type definition only defines fixed portions of   */
 /*          the format.  Any varying length fields must be        */
 /*          specified by the user.                                */
 /******************************************************************/
 typedef _Packed struct Qgy_Oljbl_RecVar
 {
    int   Offset_to_Next;
    int   Offset_to_Fields_Retd;
    int   Num_Fields_Retd;
    int   Msg_Severity;
    char  Msg_ID[7];
    char  Msg_Type[2];
    char  Msg_Key[4];
    char  Msg_File_Name[10];
    char  Msg_Lib[10];
    char  Date_Sent[7];
    char  Time_Sent[6];
    char  Time_Sent_Microseconds[6];                        /* @A1A*/
    char  Thread_ID[8];                                     /* @A2A*/
  /*char  Reserved[];*/                          /* VARYING LENGTH */
  /*Qgy_Oljbl_IDFieldInfo_t  FieldInfo[];*/      /* VARYING LENGTH */
 } Qgy_Oljbl_RecVar_t;

 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qgy_Oljbl_ListInfo
 {
    int  Total_Records;
    int  Records_Retd;
    char Request_Handle[4];
    int  Record_Length;
    char Info_Complete;
    char Date_Time[13];
    char List_Status;
    char Reserved1;
    int  Info_Length;
    int  First_Record;
    char Reserved2[40];
 } Qgy_Oljbl_ListInfo_t;

 /******************************************************************/
 /* Type Definition for the Message Selection Information Format   */
 /*   NOTE:  This type definition only defines fixed portions of   */
 /*          the format.  Any varying length fields must be        */
 /*          specified by the user.                                */
 /******************************************************************/
 typedef _Packed struct Qgy_Oljbl_MsgSelInfo
 {
    char  List_Direction[10];
    char  Job_Name[26];
    char  Job_ID[16];
    char  Starting_Msg_Key[4];
    int   Max_Msg_Length;
    int   Max_Help_Length;
    int   ID_Offset;
    int   Num_Fields;
    int   Q_Offset;
    int   Msg_Q_Name_Size;
  /*int   Field_IDs[];*/           /* VARYING LENGTH */
  /*char  Call_Msg_Q_Name[];*/     /* VARYING LENGTH */
 } Qgy_Oljbl_MsgSelInfo_t;


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif

