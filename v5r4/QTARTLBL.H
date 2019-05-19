 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTARTLBL                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Tape Labels                         */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2004                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Retrieve Tape Labels (QTARTLBL) API               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTARTLBL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D99239.2     5D30  020707 ROCH      Creation              */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QTARTLBL_h
 #define QTARTLBL_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Retrieve Tape Labels  (QTARTLBL)         */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARTLBL,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTARTLBL (char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                char *,            /* Device description             */
                char *,            /* Request qualifiers             */
                int,               /* Length of request qualifiers   */
                void *);           /* Error code                     */


 /******************************************************************/
 /* Type Definition for the request qualifiers                     */
 /******************************************************************/

 typedef _Packed struct Qta_request_qualifiers
    {
       char Requested_volumeid[6];
       char Requested_file_label[17];
       char Starting_sequence_nbr[10];
       char Ending_sequence_nbr[10];
       char End_option;
    } Qta_request_qualifiers_t;

 /******************************************************************/
 /* Type Definition for the RLBL0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_RLBL0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Device_name[10];
       char Cartridge_ID[6];
       char Volume_label[80];
       char Code;
       char Standard_label;
       char Leading_tape_mark;
       char Density[10];
       char Reserved[2];
       char Additional_labels;
       int  Offset_to_label_information;
       int  Number_of_label_info_entries;
       int  Length_of_label_info_entry;
    } Qta_RLBL0100_t;

 typedef _Packed struct Qta_label_info
    {
     char Label1[80];
     char Label2[80];
     char Logical_blockid[32];
     char Sequence_number[10];
     char Multi_volume_seq_number[10];
     char S36_file_type[8];
    } Qta_label_info_t;


 /******************************************************************/
 /* Constant for format name                                       */
 /******************************************************************/
 #define RLBL0100 "RLBL0100"

 #pragma datamodel(pop)
 #endif

