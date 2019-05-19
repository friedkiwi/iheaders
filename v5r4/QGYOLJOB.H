 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYOLJOB                                   */
 /*                                                                */
 /* Descriptive Name: Open list job API.                           */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 1994,2003                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List Job API opens a list of all or some */
 /*              of the jobs on the system.                        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_OLJB0100_t                                 */
 /*                 Qgy_OLJB_Receiver_Information_t                */
 /*                 Qgy_OLJB0200_t                                 */
 /*                 Qgy_OLJB0300_t                                 */
 /*                 Qgy_OLJB_List_Information_t                    */
 /*                 Qgy_OLJB_Sort_Data_t                           */
 /*                 Qgy_OLJB_Sort_Information_t                    */
 /*                 Qgy_OLJB_Job_Selection_t                       */
 /*                                                                */
 /* Function Prototype List: QGYOLJOB                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9486500     3P70  960930 MJD    :  New Include           */
 /* $A0= D95998       4D40  980630 ROCH   :  Server type           */
 /* $A2= D98031       5D10  991205 ROCH   :  Additional support    */
 /* $A3= P9934931     5D10  001105 ROCH   :  Teraspace support     */
 /* $A4= D98830       5D20  010615 ROCH   :  Search Mult job names */
 /* $A5= P9A21955     5D30  021209 ROCH   :  OLJB0300 change       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYOLJOB_h
 #define QGYOLJOB_h

 #if (__OS400_TGTVRM__>=510)                                /* @A3A*/
   #pragma datamodel(P128)                                  /* @A3A*/
 #endif                                                     /* @A3A*/

 /******************************************************************/
 /*  Prototype for QGYOLJOB API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYOLJOB,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QGYOLJOB(void *,           /* Receiver variable              */
              int  *,            /* Length of receiver variable    */
              char *,            /* Format name                    */
              void *,            /* Receiver variable definition   */
              int  *,            /* Length of receiver variable    */
                                 /* definition                     */
              void *,            /* List Information               */
              int  *,            /* Number of records to return    */
              void *,            /* Sort information               */
              void *,            /* Job selection information      */
              int  *,            /* Size of job selection          */
                                 /* information                    */
              int  *,            /* Number of fields to return     */
              void *,            /* Keys of fields to be returned  */
              void *,            /* Error Code                     */
	      ...);              /* Optional Parameters            */
       /*     char *               Optional parm - job selection
	                           format name                     */
       /*     char                 Optional parm - Reset status
	                           statistics                      */
       /*     char * 		   Optional parm - General return
				   data               		   */
       /*     int 		   Optional parm - Length of
				   general return data		   */

 /******************************************************************/
 /* Type Definition for the OLJB0100 and OLJB0200 input parameter  */
 /* section.                                                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 /******************************************************************/
 /* Type Definition for the OLJB0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qgy_OLJB0100
    {
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Internal_Job_Id[16];
       char Status[10];
       char Job_Type;
       char Job_Subtype;
       char Reserved[2];
    } Qgy_OLJB0100_t;

 /******************************************************************/
 /* Type Definition for the OLJB0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qgy_OLJB_Receiver_InfoData
    {
       int  Length_Field_Info_Rtnd;
       int  Key_Field;
       char Type_Of_Data;
       char Reserved[3];
       int  Length_Data;
       int  Offset_To_Data;
    } Qgy_OLJB_Receiver_InfoData_t;

 typedef _Packed struct Qgy_OLJB_Receiver_Information
    {
       int  Number_Fields_Rtnd;
     /*Qgy_OLJB_Receiver_InfoData_t  Receiver_Info[]; */ /* Varying
                                                            length  */
    } Qgy_OLJB_Receiver_Information_t;

 typedef _Packed struct Qgy_OLJB0200
    {
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Internal_Job_Id[16];
       char Status[10];
       char Job_Type;
       char Job_Subtype;
       char Reserved[2];
       char Job_Info_Status;
       char Reserved2[3];
     /*char Data_Returned[]; *//* Varying length          */
    } Qgy_OLJB0200_t;


 /******************************************************************/
 /* Type Definition for the OLJB0300 format.                       */
 /******************************************************************/

 typedef _Packed struct Qgy_OLJB0300
    {
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Active_Job_Status[4];
       char Job_Type;
       char Job_Subtype;
       int  Total_Lng_Data_Rtn;
       char Reserved[4];
     /*char Data_Returned[]; *//* Varying length          */
    } Qgy_OLJB0300_t;



 /******************************************************************/
 /* Type Definition for List Information                           */
 /******************************************************************/

 typedef _Packed struct Qgy_OLJB_List_Information
    {
       int  Total_Records;
       int  Records_Returned;
       char Request_Handle[4];
       int  Record_Length;
       char Information_Complete;
       char Date_Time_Created[13];
       char List_Status;
       char Reserved;
       int  Information_Length;
       int  First_Record_In_Buffer;
       char Reserved2[40];
    } Qgy_OLJB_List_Information_t;

 typedef _Packed struct Qgy_OLJB_Sort_Data
    {
       int  Starting_Position;
       int  Key_Length;
       short Data_Type;
       char Sort_Order;
       char Reserved;
    } Qgy_OLJB_Sort_Data_t;

 /******************************************************************/
 /* Type Definition for Sort Information                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qgy_OLJB_Sort_Information
    {
       int  Number_Sort_Keys;
     /*Qgy_OLJB_Sort_Data_t Sort_Keys[];*//* Varying length. */
    } Qgy_OLJB_Sort_Information_t;

 typedef _Packed struct Qgy_OLJB_Qual_Job_Name
    {
       char Qual_Job_Name[10];
       char Qual_User_Name[10];
       char Qual_Job_Number[6];
    } Qgy_OLJB_Qual_Job_Name_t;

 /******************************************************************/
 /* Type Definition for Job Selection Information.                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qgy_OLJB_Job_Selection
    {
       char Job_Name[10];
       char User_Name[10];
       char Job_Number[6];
       char Job_Type;
       char Reserved;
       int  Primary_Job_Status_Offset;
       int  Primary_Job_Status_Count;
       int  Active_Job_Status_Offset;
       int  Active_Job_Status_Count;
       int  JobQ_Job_Status_Offset;
       int  JobQ_Job_Status_Count;
       int  JobQ_Names_Offset;
       int  JobQ_Names_Count;
       int  Current_Users_Offset;
       int  Current_Users_Count;
       int  Server_Types_Offset;
       int  Server_Types_Count;
       int  Active_Sbs_Offset;
       int  Active_Sbs_Count;
       int  Memory_Pool_Offset;
       int  Memory_Pool_Count;
       int  Job_Type_Enhanced_Offset;
       int  Job_Type_Enhanced_Count;
       int  Reserved1;      /* Qualified Job Name Offset */
       int  Reserved2;      /* Qualified Job Name Count  */
     /*char Primary_Job_Status[][10];*//* Varying length. */
     /*char Active_Job_Status[][4];*//* Varying length. */
     /*char JobQ_Job_Status[][10];*//* Varying length. */
     /*char JobQ_Names[][20];*//* Varying length. */
     /*char Current_Users[][10];*//* Varying length. */
     /*char Server_Types[][30];*//* Varying length. */
     /*char Active_Sbs[][10];*//* Varying length. */
     /*char Memory_Pool[][4];*//* Varying length. */
     /*char Job_Type_Enhanced[][4];*//* Varying length. */
     /*Qgy_OLJB_Qual_Job_Name_t Qualified_Job_Name[];*/
                                     /* Varying length. */
    } Qgy_OLJB_Job_Selection_t;

 /******************************************************************/
 /* Type Definition for General return data                        */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qgy_General_Return_Data
    {
     int  Bytes_Returned;
     int  Bytes_Available;
     unsigned long long  Elapsed_Time;
     /* char Reserved[*]; *//* Varying length.   */
    } Qgy_General_Return_Data_t;

 #if (__OS400_TGTVRM__>=510)                                /* @A3A*/
   #pragma datamodel(pop)                                   /* @A3A*/
 #endif                                                     /* @A3A*/

 #endif
