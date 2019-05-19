/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
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
 /* Header File Name: ETATAPMG                                     */
 /*                                                                */
 /* Descriptive Name: Tape Management Exit Program.                */
 /*                                                                */
 /* Description: The Tape Mangement exit program allows a tape     */
 /*              management system to monitor and control the use  */
 /*              of volumes and devices used by the operating      */
 /*              system for most tape operations.                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: QTA_SOF_EXIT                                      */
 /*              QTA_ACTIVE_FILE_MSGS                              */
 /*              QTA_CHAR_CODE_CNV                                 */
 /*              QTA_EOS_EXIT                                      */
 /*              QTA_EOF_EXIT                                      */
 /*              QTA_IGNORE_RESPONSE                               */
 /*              QTA_MOUNT_NEXT_MSGS                               */
 /*              QTA_NO_LOG_BLK_ID                                 */
 /*              QTA_PERM_EXP_DATA                                 */
 /*              QTA_SOV_EXIT                                      */
 /*              QTA_SOS_EXIT                                      */
 /*              QTA_SUPPRESS_IGNORE_RESPONSE                      */
 /*              QTA_SUPPRESS_ACTIVE_FILE_MSGS                     */
 /*              QTA_SUPPRESS_CHAR_CODE_CNV                        */
 /*              QTA_SUPPRESS_MOUNT_NEXT_MSGS                      */
 /*              QTA_ACCEPT_MOUNTED_VOL                            */
 /*              QTA_NOT_ACCEPTED_TERMINATE                        */
 /*              QTA_REJECT_IN_FAVOR_OF                            */
 /*              QTA_MESSAGE_NOT_RECOVERABLE                       */
 /*              QTA_MESSAGE_RECOVERABLE                           */
 /*              QTA_NOT_OUTPUT_EXTEND                             */
 /*              QTA_OUTPUT_EXTEND                                 */
 /*              QTA_SKIP_FILE                                     */
 /*              QTA_DUPLICATE_FILE                                */
 /*                                                                */
 /* Structure List: Qta_Exit_Description_Struct_t                  */
 /*                 Qta_Label_Info_Struct_t                        */
 /*                 Qta_Operational_Info_Struct_t                  */
 /*                 Qta_Control_Value_Info_Struct_t                */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3954178     3D10  940518 MOREY     New Include           */
 /* $A1= Pxxxxxxx     4D10  961126 HOOVEY    Update for V3R6,V3R7  */
 /*                                          and V4R1              */
 /* $A2= P9934931     5D10  001105 ROCH      Teraspace stage 2     */
 /* $SX= D98498.1     5D20  010204 ROCH      EXPDATE for DUPTAP    */
 /* $TX= D99307.1     5D30  020707 ROCH    : TMS Enhancements      */
 /* $YE= D99880.1     5D40  040502 ROCH    : Add WORM support      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ETATAPMG_h
 #define ETATAPMG_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A2A*/
     #pragma datamodel(P128)                                 /*@A2A*/
 #endif                                                      /*@A2A*/


 /******************************************************************/
 /* Type Definition for the Exit Description Information           */
 /******************************************************************/

 typedef _Packed struct Qta_Exit_Description_Struct
    {
       int  Length_Exit_Desc;
       char Tape_Position_Exit_Type;
       char Tape_Lib_Device_Exit_Type;
    } Qta_Exit_Description_Struct_t;

 /******************************************************************/
 /* Type Definition for the Label Information                      */
 /******************************************************************/

 typedef _Packed struct Qta_Label_Info_Struct
    {
       int  Length_Label_Info;
       char Current_Volumn_Label[80];
       char Last_HDR1_Or_TRL1_Label[80];
       char Last_HDR2_Or_TRL2_Label[80];
    } Qta_Label_Info_Struct_t;

 /******************************************************************/
 /* Type Definition for the Operational Information                */
 /******************************************************************/

 typedef _Packed struct Qta_Operation_Info_Struct
    {
       int  Length_Operational_Info;
       int  Length_Control_Value_Info;
       char Tape_Operation;
       char Data_File_Label[17];
       char Tape_Device_File_Name[10];
       char Tape_Device_File_Lib_Name[10];
       char Current_Device_Name[10];
       char Current_Volume_ID[6];
       char Next_Device_Name[10];
       char Next_Volume_ID[6];
       char Current_Device_Type[4];
       char Current_Tape_Density[10];
       char Data_Check_On_Write;
       char Next_Tape_Density[10];
       char Tape_Drive_Ready_Status;
       char Tape_Volume_Init_Status;
       char Init_New_Volume_Label;
       char Logical_Block_ID[32];
       char Cartridge_ID[6];
       char Category_Name[10];
       char Category_System_Name[8];
       char Mismatch_Status;
       char Library_Device_Name[10];
       char Library_Device_Status;
       char Library_Device_Mode;
       char Restricted_State_Status;
       char Write_Protection_Status;
       char Message_Identifier[7];
       char Message_Type[10];
       char Message_Queue_Or_Pgm_Name[10];
       char Message_Queue_Or_Pgm_Lib[10];
       char Message_Destination[4];
       char Volume_List_Status;
       int  Offset_To_Replacement_Text;
       int  Length_Of_Replacement_Text;
       char Generate_Ctgid_Status;
       char Seqnbr_Change_Allowed;
       char End_Position;
       char File_Seqnbr[10];
       char Aggregate_Seqnbr[10];
       char MLB_Tape_Resource_Name[10];
       char MLB_Tape_Resource_Type[4];                       /*@SXC*/
       char MLB_Tape_Resource_Model[4];                      /*@SXC*/
       char Generated_Ctgid;
       char Session_Identifier[10];
       char Cartridge_Densities[150];
       char Qualified_Job_Name[26];
       char Reserved1[4];
       char Type_Of_Close;
       char Command_Name[10];
       char Message_Recoverable;                             /*@SXA*/
       char Output_Extend;                                   /*@SXA*/
       char User_Sequence_Number[10];                        /*@TXA*/
       char User_Expiration_Date[6];                         /*@TXA*/
       char Virtual_Device;                                  /*@YEA*/
       char Worm_Cartridge;                                  /*@YEA*/
    } Qta_Operational_Info_Struct_t;

 /******************************************************************/
 /* Type Definition for the Control Value Information              */
 /******************************************************************/

 typedef _Packed struct Qta_Control_Value_Info_Struct
    {
       char Volume_Acceptance;
       char Volume_To_Be_Used[6];
       char File_Expiration_Date[6];
       char Character_Code_Conversion;
       char Allow_Ignore_Response;
       char Issue_Active_File_Messages;
       char Issue_Mount_Next_Messages;
       char Logical_Block_ID[32];
       char Allow_Category_Change;
       char Allow_Removal;
       char Mismatch_Acceptance;
       char Auto_ADDTAPCTG;
       char Message_Response;
       char Allow_Mount_Cgy;
       char Allow_Demount_Cgy;
       char Seqnbr[6];
       char Category_Name[10];
       char Category_System[8];
       char Large_Seqnbr[10];
       char Allow_Log_Blk_ID;
       char Allow_Cartridge_Search;
       char Change_End_position;
       char Density_Or_Format[10];
       char Use_Optimum_Block;
       char Duplicate_File;                                   /*@SXA*/
       char ImageCatalogName[10];                             /*@YEA*/
    } Qta_Control_Value_Info_Struct_t;

#define QTA_NO_EXIT                   '0'
#define QTA_SOF_EXIT                  '1'
#define QTA_SOV_EXIT                  '2'
#define QTA_SOS_EXIT                  '3'
#define QTA_EOS_EXIT                  '4'
#define QTA_EOF_EXIT                  '5'
#define QTA_MSG_EXIT                  '6'
#define QTA_END_EXIT                  '7'
#define QTA_CMD_EXIT                  '8'

#define QTA_MLB_NO_EXIT               '0'
#define QTA_MLB_ADD_EXIT              '1'
#define QTA_MLB_RMV_EXIT              '2'
#define QTA_MLB_CGY_EXIT              '3'
#define QTA_MLB_MIS_EXIT              '4'
#define QTA_MLB_MF_EXIT               '5'
#define QTA_MLB_UNL_EXIT              '6'
#define QTA_MLB_MNT_EXIT              '7'
#define QTA_MLB_DMT_EXIT              '8'
#define QTA_MLB_INV_EXIT              '9'

#define QTA_IGNORE_RESPONSE           '0'
#define QTA_SUPPRESS_IGNORE_RESPONSE  '1'

#define QTA_PERM_EXP_DATA             '*PERM '

#define QTA_NO_LOG_BLK_ID             '                '

#define QTA_ACTIVE_FILE_MSGS          '0'
#define QTA_SUPPRESS_ACTIVE_FILE_MSGS '1'

#define QTA_CHAR_CODE_CNV             '0'
#define QTA_SUPPRESS_CHAR_CODE_CNV    '1'

#define QTA_MOUNT_NEXT_MSGS           '0'
#define QTA_SUPPRESS_MOUNT_NEXT_MSGS  '1'

#define QTA_ACCEPT_MOUNTED_VOL        '1'
#define QTA_NOT_ACCEPTED_TERMINATE    '2'
#define QTA_REJECT_IN_FAVOR_OF        '3'

#define QTA_REWIND                    '0'
#define QTA_UNLOAD                    '1'
#define QTA_LEAVE                     '2'

#define QTA_INQUIRY                   'INQ '
#define QTA_ESCAPE                    'ESCP'

#define QTA_MLB_BAR_CODE              '0'
#define QTA_CTGID_VOLID               '1'
#define QTA_CTGID_SYSGEN              '2'

#define QTA_NO_CHG_SEQNBR_ALLOWED     '0'
#define QTA_SEQNBR_1_OR_END           '1'
#define QTA_SEQNBR_CHANGE_ALLOWED     '2'

#define QTA_NOT_RESTRICTED_STATE      '0'
#define QTA_RESTRICTED_STATE          '1'

#define QTA_TEMPORARY_CLOSE           '0'
#define QTA_PERMANENT_CLOSE           '1'
#define QTA_NORMAL_TERM_CLOSE         '2'
#define QTA_ABNORMAL_CLOSE            '3'

#define QTA_NOT_WRITE_PROTECTED       '0'
#define QTA_WRITE_PROTECTED           '1'

#define QTA_MESSAGE_NOT_RECOVERABLE   '0'
#define QTA_MESSAGE_RECOVERABLE       '1'

#define QTA_NOT_OUTPUT_EXTEND         '0'
#define QTA_OUTPUT_EXTEND             '1'

#define QTA_SKIP_FILE                 '0'
#define QTA_DUPLICATE_FILE            '1'

 #if (__OS400_TGTVRM__>=510)                                /*@A2A*/
     #pragma datamodel(pop)                                 /*@A2A*/
 #endif                                                     /*@A2A*/

#endif
