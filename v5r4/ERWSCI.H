 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/ERWSCI                                     */
 /*                                                                */
 /* Descriptive Name: SQL Client Integration Exit Program          */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: This include contains the input and output        */
 /*              format definitions for SQL Client Integration.    */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List:                                                */
 /*    Qrw_Arcn0100_t  Connect                                     */
 /*    Qrw_Ardi0100_t  Disconnect                                  */
 /*    Qrw_Arbb0100_t  Begin Bind                                  */
 /*    Qrw_Arbs0100_t  Bind Statement                              */
 /*    Qrw_Areb0100_t  End Bind                                    */
 /*    Qrw_Arps0100_t  Prepare Statement (use for ARPD0010 also)   */
 /*    Qrw_Arxb0100_t  Execute Bound Statement (for ARXD0100 also) */
 /*    Qrw_Arxp0100_t  Execute Prepared Statement                  */
 /*    Qrw_Arxi0100_t  Execute Immediate                           */
 /*    Qrw_Aroc0100_t  Open Cursor                                 */
 /*    Qrw_Arfc0100_t  Fetch Cursor                                */
 /*    Qrw_Arcc0100_t  Close Cursor                                */
 /*    Qrw_Ards0100_t  Describe Statement                          */
 /*    Qrw_Ardt0100_t  Describe Table (Object)                     */
 /*                                                                */
 /*    Qrw_Connect_Ofmt_t   Connect output format                  */
 /*    Qrw_Execute_Ofmt_t   Execute output format                  */
 /*    Qrw_Open_Ofmt_t      Open Cursor output format              */
 /*    Qrw_Fetch_Ofmt_t     Fetch Cursor output format             */
 /*                                                                */
 /* Function Prototype List: None                                  */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   DEPT/PGMR CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3961391     3D10  940725 524 JMB:  New Include           */
 /* $A1= P3981961     3D60  950214 524 SRR:  Fix prolog list       */
 /* $A2= D98212.4    v5r1m0 010400 gchaney:  Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef ERWSCI_h
#define ERWSCI_h

#if (__OS400_TGTVRM__>=510)                                 /* @A2A*/
    #pragma datamodel(P128)                                 /* @A2A*/
#endif                                                      /* @A2A*/


/* ***********************************************/
/* Input format for CONNECT                      */
/* ***********************************************/

typedef _Packed struct Qrw_Arcn0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Device_Name[10];
                   char Mode_Name[8];
                   char Remote_Loc_Name[8];
                   char Local_Loc_Name[8];
                   char Remote_Net_Id[8];
                   char Tpn_Name[8];
                   char User_Id[10];
                   char Password[10];
                   char Product_Id[8];
} Qrw_Arcn0100_t;

/* ***********************************************/
/* Input format for DISCONNECT                   */
/* ***********************************************/

typedef _Packed struct Qrw_Ardi0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Reserved[2];
                   long int Disconnect_Type;
} Qrw_Ardi0100_t;

/* ***********************************************/
/* Input format for Begin Package Bind           */
/* ***********************************************/

typedef _Packed struct Qrw_Arbb0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Ccsid;
                   char Existence_Reqd;
                   char Errors_Allowed;
                   char Replace_Allowed;
                   char String_Delimiter;
                   char Decimal_Delimiter;
                   char Blocking_Type;
                   char Date_Format[10];
                   char Time_Format[10];
                   char Isolation_Level[10];
                   char Default_Collection[18];
                   char Text[50];
} Qrw_Arbb0100_t;

/* ***********************************************/
/* Input format for End Package Bind             */
/* ***********************************************/

typedef _Packed struct Qrw_Areb0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Max_Section_Number;
 } Qrw_Areb0100_t;

/* ***********************************************/
/* Input format for Bind Statement               */
/* ***********************************************/

typedef _Packed struct Qrw_Arbs0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   long int Sqlda_Offset;
                   long int Sqlda_Length;
                   long int Stmt_Offset;
                   long int Stmt_Length;
} Qrw_Arbs0100_t;

/* ***********************************************/
/* Input format for Prepare Statement            */
/* ***********************************************/

typedef _Packed struct Qrw_Arps0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char String_Delimiter;
                   char Decimal_Delimiter;
                   char Date_Format[10];
                   char Time_Format[10];
                   char Isolation_Level[10];
                   long int Stmt_Offset;
                   long int Stmt_Length;
                   char Stmt_Name[18];
} Qrw_Arps0100_t;

/* ***********************************************/
/* Input format for Execute Bound Statement      */
/* ***********************************************/

typedef _Packed struct Qrw_Arxb0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char String_Delimiter;
                   char Decimal_Delimiter;
                   char Date_Format[10];
                   char Time_Format[10];
                   char Isolation_Level[10];
                   char Default_Collection[18];
                   char Reserved_2[2];
                   long int Sqlda_Offset;
                   long int Sqlda_Length;
                   long int Stmt_Offset;
                   long int Stmt_Length;
                   long int Dcl_Proc_Offset;
                   long int Dcl_Proc_Length;
                   long int Proc_Name_Offset;
                   long int Proc_Name_Length;
} Qrw_Arxb0100_t;

/* ***********************************************/
/* Input format for Execute Prepared Statement   */
/* ***********************************************/

typedef _Packed struct Qrw_Arxp0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char String_Delimiter;
                   char Decimal_Delimiter;
                   char Date_Format[10];
                   char Time_Format[10];
                   char Isolation_Level[10];
                   long int Sqlda_Offset;
                   long int Sqlda_Length;
                   long int Proc_Name_Offset;
                   long int Proc_Name_Length;
                   char Stmt_Name[18];
} Qrw_Arxp0100_t;

/* ***********************************************/
/* Input format for Execute Immediate Statement  */
/* ***********************************************/

typedef _Packed struct Qrw_Arxi0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char String_Delimiter;
                   char Decimal_Delimiter;
                   char Date_Format[10];
                   char Time_Format[10];
                   char Isolation_Level[10];
                   long int Stmt_Offset;
                   long int Stmt_Length;

} Qrw_Arxi0100_t;


/* ***********************************************/
/* Input format for Open Cursor                  */
/* ***********************************************/

typedef _Packed struct Qrw_Aroc0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char String_Delimiter;
                   char Decimal_Delimiter;
                   char Date_Format[10];
                   char Time_Format[10];
                   char Isolation_Level[10];
                   char Default_Collection[18];
                   char Blocking_Allowed;
                   char Reserved_2;
                   long int Sqlda_Offset;
                   long int Sqlda_Length;
                   long int Dcl_Cursor_Offset;
                   long int Dcl_Cursor_Length;
                   char Cursor_Name[18];
} Qrw_Aroc0100_t;


/* ***********************************************/
/* Input format for Fetch                        */
/* ***********************************************/

typedef _Packed struct Qrw_Arfc0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char String_Delimiter;
                   char Decimal_Delimiter;
                   char Date_Format[10];
                   char Time_Format[10];
                   char Isolation_Level[10];
                   char Cursor_Name[18];
} Qrw_Arfc0100_t;


/* ***********************************************/
/* Input format for Close Cursor                 */
/* ***********************************************/

typedef _Packed struct Qrw_Arcc0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char Cursor_Name[18];
} Qrw_Arcc0100_t;

/* ***********************************************/
/* Input format for Describe Statement           */
/* ***********************************************/

typedef _Packed struct Qrw_Ards0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Package_Collection[18];
                   char Package_Name[18];
                   char Package_Con_Token[8];
                   char Reserved[2];
                   long int Section_Number;
                   long int Ccsid;
                   char Stmt_Name[18];
} Qrw_Ards0100_t;

/* ***********************************************/
/* Input format for Describe Table (Object)      */
/* ***********************************************/

typedef _Packed struct Qrw_Ardt0100 {
                   long int Out_Fmt_Buf_Size;
                   long int Act_Grp_Number;
                   char Rdb_Name[18];
                   char Reserved[2];
                   long int Ccsid;
                   long int Obj_Name_Offset;
                   long int Obj_Name_Length;
 } Qrw_Ardt0100_t;

/* ==============================================*/
/* Output Formats                                */
/* ==============================================*/

/* ***********************************************/
/* Output format for CONNECT                     */
/* ***********************************************/

typedef _Packed struct Qrw_Connect_Ofmt {
                   char Server_product[3];
                   char Server_Version[2];
                   char Server_Release[2];
                   char Server_Level;
                   char User_Id[10];
                   char Include_Bound_Stmts;
                   char Protected_Conversation;
} Qrw_Connect_Ofmt_t;

/* ***********************************************/
/* Output format for EXECUTE                     */
/* ***********************************************/

typedef _Packed struct Qrw_Execute_Ofmt {
                   char Update_Performed;
                   char Reserved[3];
                   long int Sqlda_Offset;
                   long int Result_Set_Offset;
} Qrw_Execute_Ofmt_t;

/* ***********************************************/
/* Output format for OPEN                        */
/* ***********************************************/

typedef _Packed struct Qrw_Open_Ofmt {
                   char Block_Data;
                   char Cursor_Hold;
                   char Reserved[2];
                   long int Sqlda_Offset;
} Qrw_Open_Ofmt_t;

/* ***********************************************/
/* Output format for FETCH                       */
/* ***********************************************/

typedef _Packed struct Qrw_Fetch_Ofmt {
                   long int Result_Set_Offset;
                   char Cursor_Closed;
} Qrw_Fetch_Ofmt_t;

#if (__OS400_TGTVRM__>=510)                                 /* @A2A*/
    #pragma datamodel(pop)                                  /* @A2A*/
#endif                                                      /* @A2A*/

#endif
