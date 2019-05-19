 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYOLMSG                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Messages                        */
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
 /* Description: The QGYOLMSG API provides information on messages */
 /*              for the current user, a specific user, or one     */
 /*              specific nonprogram message queue.                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qgy_Olmsg_IDFieldInfo_t                       */
 /*                  Qgy_Olmsg_RecVar_t                            */
 /*                  Qgy_Olmsg_ListInfo_t                          */
 /*                  Qgy_Olmsg_MsgSelInfo_t                        */
 /*                                                                */
 /* Function Prototype List: QGYOLMSG                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960603 DPW       New Include           */
 /* $A1= D98871     v5r2m0  010902 LIGGETT:  Add microseconds      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYOLMSG_h
 #define QGYOLMSG_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for call to QGYOLMSG API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYOLMSG,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYOLMSG  (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   char *,     /* Sort Information                  */
                   void *,     /* Message selection information     */
                   int   ,     /* Size of message selection info    */
                   void *,     /* User or queue information         */
                   void *,     /* Message queues used               */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definition for the Identifier Field Information            */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qgy_Olmsg_IDFieldInfo
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
 } Qgy_Olmsg_IDFieldInfo_t;

 /******************************************************************/
 /* Type Definition for the Receiver Variable, Format LSTM0100     */
 /*   NOTE:  This type definition only defines fixed portions of   */
 /*          the format.  Any varying length fields must be        */
 /*          specified by the user.                                */
 /******************************************************************/
 typedef _Packed struct Qgy_Olmsg_RecVar
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
    char  Msg_Q[10];
    char  Msg_Q_Lib_Used[10];
    char  Date_Sent[7];
    char  Time_Sent[6];
    char  Time_Sent_Microseconds[6];                        /* @A1A*/
  /*char  Reserved[];*/                          /* VARYING LENGTH */
  /*Qgy_Olmsg_IDFieldInfo_t  FieldInfo[];*/      /* VARYING LENGTH */
 } Qgy_Olmsg_RecVar_t;

 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qgy_Olmsg_ListInfo
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
 } Qgy_Olmsg_ListInfo_t;

 /*****************************************************************/
 /* Type Definition for the Starting Message Keys                 */
 /*****************************************************************/
  typedef char Msg_Key_t[4];


 /*****************************************************************/
 /* Type Definition for the Selection Criteria                    */
 /*****************************************************************/
  typedef char Sel_Cri_t[10];


 /******************************************************************/
 /* Type Definition for the Message Selection Information Format   */
 /*   NOTE:  This type definition only defines fixed portions of   */
 /*          the format.  Any varying length fields must be        */
 /*          specified by the user.                                */
 /******************************************************************/
 typedef _Packed struct Qgy_Olmsg_MsgSelInfo
 {
    char  List_Direction[10];
    char  Reserved[2];
    int   Severity_Criteria;
    int   Max_Msg_Length;
    int   Max_Help_Length;
    int   Sel_Criteria_Offset;
    int   Num_Sel_Criteria;
    int   Start_Msg_Keys_Offset;
    int   Retd_Fields_IDs_Offset;
    int   Num_Fields;
  /*Sel_Cri_t   Sel_Cri[];*/       /* VARYING LENGTH */
  /*Msg_Key_t   Msg_Key[];*/       /* VARYING LENGTH */
  /*int   FieldID[];*/             /* VARYING LENGTH */
 } Qgy_Olmsg_MsgSelInfo_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/


 #endif

