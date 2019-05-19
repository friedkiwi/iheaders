 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCOLTHD                                   */
 /*                                                                */
 /* Descriptive Name: Open list of threads API.                    */
 /*                                                                */
 /*  5722-SS1                                                      */
 /* (C) Copyright IBM Corp. 2002                                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List of Threads API Returns a list of    */
 /*              all of the threads that are running under the     */
 /*              target job.                                       */
 /*                                                                */
 /* Header Files Included: H/QWCATTR                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_OLTH0100_t                                 */
 /*                 Qwc_OLTH_Receiver_InfoData_t                   */
 /*                 Qwc_OLTH_Receiver_Information_t                */
 /*                 Qwc_OLTH_List_Information_t                    */
 /*                 Qwc_OLTH_Sort_Data_t                           */
 /*                 Qwc_OLTH_Sort_Information_t                    */
 /*                 Qwc_General_Return_Data_t                      */
 /*                 Qwc_JIDF0100_t                                 */
 /*    *Note - Qwc_JIDF0100_t is defined in H/QWCATTR header file  */
 /*                                                                */
 /* Function Prototype List: QWCOLTHD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9575800     5D20  010201 ROCH   :  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCOLTHD_h
 #define QWCOLTHD_h

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /*  Prototype for QWCOLTHD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCOLTHD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCOLTHD(void *,         /* Receiver variable              */
                int  *,          /* Length of receiver variable    */
                char *,          /* Format name                    */
                void *,          /* Receiver variable definition   */
                int  *,          /* Length of receiver variable    */
                                 /* definition                     */
                void *,          /* Job identification information */
                char *,          /* Format of job identification   */
                void *,          /* List Information               */
                int  *,          /* Number of records to return    */
                void *,          /* Sort information               */
                int  *,          /* Number of fields to return     */
                void *,          /* Keys of fields to be returned  */
                char  ,          /* Reset status statistics        */
                void *,          /* General return data            */
                int  *,          /* Length of general return data  */
                void *);         /* Error Code                     */

 /******************************************************************/
 /* Type Definition for the OLTH0100  input parameter section.     */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 /******************************************************************/
 /* Type Definition for the OLTH0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_OLTH0100
    {
       char Thread_Identifier[8];
       unsigned int Thread_Handle;
       int  Total_Lng_Data_Rtn;
    } Qwc_OLTH0100_t;

 /******************************************************************/
 /* Type Definition for the OLTH0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwc_OLTH_Receiver_InfoData
    {
       int  Length_Field_Info_Rtnd;
       int  Key_Field;
       char Type_Of_Data;
       char Reserved[3];
       int  Length_Data;
       int  Displacement_To_Data;
    } Qwc_OLTH_Receiver_InfoData_t;

 typedef _Packed struct Qwc_OLTH_Receiver_Information
    {
       int  Number_Fields_Rtnd;
     /*Qwc_OLTH_Receiver_InfoData_t  Receiver_Info[]; */ /* Varying
							  length*/
    } Qwc_OLTH_Receiver_Information_t;



 /******************************************************************/
 /* Type Definition for List Information                           */
 /******************************************************************/

 typedef _Packed struct Qwc_OLTH_List_Information
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
    } Qwc_OLTH_List_Information_t;

 typedef _Packed struct Qwc_OLTH_Sort_Data
    {
       int  Starting_Position;
       int  Key_Length;
       short Data_Type;
       char Sort_Order;
       char Reserved;
    } Qwc_OLTH_Sort_Data_t;

 /******************************************************************/
 /* Type Definition for Sort Information                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwc_OLTH_Sort_Information
    {
       int  Number_Sort_Keys;
     /*Qwc_OLTH_Sort_Data_t Sort_Keys[];*//* Varying length. */
 } Qwc_OLTH_Sort_Information_t;


 /******************************************************************/
 /* Type Definition for General return data                        */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwc_General_Return_Data
    {
     int  Bytes_Returned;
     int  Bytes_Available;
     unsigned long long  Elapsed_Time;
     char Job_Name_Used[10];
     char User_Name_Used[10];
     char Job_Number_Used[6];
     char Internal_Job_Identifier[16];
     /* char Reserved[*]; *//* Varying length.   */
    } Qwc_General_Return_Data_t;

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif

 #endif
