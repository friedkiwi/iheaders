 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* File Name: QOKSCHD                                             */
 /*                                                                */
 /* Descriptive Name: Search System Directory API.                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Search System Directory API searches the      */
 /*              system distribution directory and returns user    */
 /*              that match the criteria input.                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: FmtSREQ0100                                       */
 /*              FmtSREQ0101                                       */
 /*              FmtSREQ0102                                       */
 /*              FmtSREQ0103                                       */
 /*              FmtSREQ0200                                       */
 /*              FmtSRCV0100                                       */
 /*              FmtSRCV0101                                       */
 /*              FmtSRCV0111                                       */
 /*              FmtSRCV0112                                       */
 /*              FmtSRCV0120                                       */
 /*              FmtSRCV0200                                       */
 /*              FmtSRCV0200A                                      */
 /*                                                                */
 /* Structure List:                                                */
 /*                 Qok_SREQ0100_t                                 */
 /*                 Qok_SREQ0101_t                                 */
 /*                 Qok_SREQ0102_t                                 */
 /*                 Qok_SREQ0103_t                                 */
 /*                 Qok_SREQ0200_t                                 */
 /*                                                                */
 /*                 Qok_SRCV0100_t                                 */
 /*                 Qok_SRCV0101_t                                 */
 /*                 Qok_SRCV0111_t                                 */
 /*                 Qok_SRCV0112_t                                 */
 /*                 Qok_SRCV0120_t                                 */
 /*                 Qok_SRCV0200_t                                 */
 /*                 Qok_SRCV0200A-T                                */
 /*                                                                */
 /* Function Prototype List: QOKSCHD                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3948378     3D10  940401 ROCH:     New Include.          */
 /* $A1= P3977700     3D60  122294 MARLA     Added fields to       */
 /*            SREQ0100 format to have option to return fields     */
 /*            in the order specified.  Fields added are:          */
 /*              Return_In_Order_Requested                         */
 /*              Reserved_4 [                                   */
 /* $A2= P3988092     3D60  040695 MW        Used reserved space   */
 /*            in SREQ0101, Reserved_2, added variable RequestCase.*/
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOKSCHD_h
 #define QOKSCHD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling search API QOKSCHD OPM                   */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QOKSCHD,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QOKSCHD (void *,           /* Receiver variable              */
               long int,         /* Length of receiver variable    */
               char *,           /* Format name                    */
               char *,           /* Function                       */
               char *,           /* Resource indicator             */
               void *,           /* Request variable               */
               long int,         /* Length of request variable     */
               char *,           /* Request variable format        */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Constants for API formats                                      */
 /******************************************************************/
 #define FmtSREQ0100  "SREQ0100"
 #define FmtSREQ0101  "SREQ0101"
 #define FmtSREQ0102  "SREQ0102"
 #define FmtSREQ0103  "SREQ0103"
 #define FmtSREQ0200  "SREQ0200"

 #define FmtSRCV0100  "SRCV0100"
 #define FmtSRCV0101  "SRCV0101"
 #define FmtSRCV0111  "SRCV0111"
 #define FmtSRCV0112  "SRCV0112"
 #define FmtSRCV0120  "SRCV0120"
 #define FmtSRCV0200  "SRCV0200"
 #define FmtSRCV0200A "SRCV0200A"

 /******************************************************************/
 /* Type Definition for the SREQ0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef struct Qok_SREQ0100 {
     long int  Data_Input_CCSID;
     long int  Data_Input_CS;
     long int  Data_Input_CP;
     char      Wildcard[4];
     char      Convert_Receiver_Indicator[1];
     char      Data_To_Search[1];
     char      Verification_Indicator[1];
     char      Request_Continue_Handle[1];
     char      Request_Resource_Handle[16];
     char      Request_Array_Format[8];
     long int  Request_Array_Offset;
     long int  Request_Array_Elements;
     char      Flds_To_Return_Array_Format[8];
     long int  Fields_To_Return_Array_Offset;
     long int  Fields_To_Return_Array_Elements;
     char      Users_To_Return_Array_Format[8];
     long int  Users_To_Return_Array_Elements;
     char      Fields_Returned_Array_Format[8];
     char      Order_Of_Flds_Returned_Format[8];
     char      Return_In_Order_Requested[1];
     char      Reserved_4[3];
   /*char      Search_Request_Array[];*/   /* Varying length field */
   /*char      Array_Fields_To_Return[];*/ /* Varying length field */
 } Qok_SREQ0100_t;

 /******************************************************************/
 /* Type Definition for the SREQ0101 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields for each    */
 /*       message returned are each varying length and immediately */
 /*       follow what is defined here.                             */
 /******************************************************************/
 typedef struct Qok_SREQ0101 {
     long int  Current_Entry_Length;
     char      Compare_Value[1];
     char      Request_Field_Name[10];
     char      Request_Product_ID[7];
     char      Request_Case[1];
     char      Reserved_1[1];
     long int  Request_Field_Length;
   /*char      Request_Field_Value[ ];*/   /* Varying length field */
 } Qok_SREQ0101_t;

 /******************************************************************/
 /* Type Definition for the SREQ0102 format.                       */
 /******************************************************************/
 typedef struct Qok_SREQ0102 {
     char      Field_To_Return_Field_Name[10];
     char      Field_To_Return_Product_ID[7];
 } Qok_SREQ0102_t;

 /******************************************************************/
 /* Type Definition for the SREQ0103 format.                       */
 /******************************************************************/
 typedef struct Qok_SREQ0103 {
     char      Request_Special_Value[10];
 } Qok_SREQ0103_t;

 /******************************************************************/
 /* Type Definition for the SREQ0200 format.                       */
 /******************************************************************/
 typedef struct Qok_SREQ0200 {
     char      Field_Types_To_Return[1];
     char      SREQ0200_Continue_handle[17];
 } Qok_SREQ0200_t;

 /******************************************************************/
 /* Type Definition for the SRCV0100 format.                       */
 /******************************************************************/
 typedef struct Qok_SRCV0100 {
     long int  Bytes_Returned;
     long int  Order_Array_Offset;
     long int  User_Array_Offset;
     long int  Entries_Returned;
     char      Receiver_Continue_Handle[1];
     char      Receiver_Resource_Handle[16];
  } Qok_SRCV0100_t;
 /******************************************************************/
 /* Type Definition for the SRCV0101 format.                       */
 /******************************************************************/
 typedef struct Qok_SRCV0101 {
     long int Length_This_User;
     long int User_Fields_Returned;
 } Qok_SRCV0101_t;

 /******************************************************************/
 /* Type Definition for the SRCV0111 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields for each    */
 /*       message returned are each varying length and immediately */
 /*       follow what is defined here.                             */
 /******************************************************************/
 typedef struct Qok_SRCV0111  {
     char      Returned_Field_Name[10];
     char      Returned_Product_ID[7];
     char      Reserved_1[3];
     long int  Returned_Field_CS;
     long int  Returned_Field_CP;
     long int  ReturnedFieldLength;
   /*char      Returned_Field_Value[ ];*/  /* Varying length field */
 } Qok_SRCV0111_t;

 /******************************************************************/
 /* Type Definition for the SRCV0112 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields for each    */
 /*       message returned are each varying length and immediately */
 /*       follow what is defined here.                             */
 /******************************************************************/
 typedef struct Qok_SRCV0112  {
     long int  SRCV0112_Field_CS;
     long int  SRCV0112_Field_CP;
     long int  SRCV0112_Field_Length;
   /*char      SRCV0112_Field_Value[ ];*/  /* Varying length field */
 } Qok_SRCV0112_t;

 /******************************************************************/
 /* Type Definition for the SRCV0120 format.                       */
 /******************************************************************/
 typedef struct Qok_SRCV0120  {
     char      SRCV0120_Field_Name[10];
     char      SRCV0120_ProductID[7];
 } Qok_SRCV0120_t;

 /******************************************************************/
 /* Type Definition for the SRCV0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields for each    */
 /*       message returned are each varying length and immediately */
 /*       follow what is defined here.                             */
 /******************************************************************/
 typedef struct Qok_SRCV0200A {
     char      Name_Array_Field_Name[10];
     char      Name_Array_Product_ID[7];
     char      Name_Array_Field_Type[10];
     char      Reserved_3[1];
     long int  Name_Array_Max_Field_Length;
 } Qok_SRCV0200A_t;

 typedef struct Qok_SRCV0200  {
     long int  Field_Names_Returned;
     long int  Field_Names_Available;
     long int  Field_Name_Array_Offset;
     char      Field_Name_Continue_Handle[17];
   /*Qok_SRCV0200A_t Directory_Field_Names[];*//*Varying length    */
 } Qok_SRCV0200;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
