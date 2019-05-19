 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYRPRTL                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Printers                        */
 /*                                                                */
 /* 5716-SS1, 5722-SS1 (C) Copyright IBM Corp. 1996,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYRPRTL API generates a list of printers     */
 /*              on the system and information about the printers. */
 /*              The list can include all printers on the system,  */
 /*              a specific list of printers, or the printers for  */
 /*              a single output queue.  The list will be sorted   */
 /*              by printer name.                                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qgy_Rprtl_PrtInfo_t                           */
 /*                  Qgy_Rprtl_QInfo_t                             */
 /*                  Qgy_Rprtl_FilterInfo_t                        */
 /*                  Qgy_Rprtl_RecVar_0100_t                       */
 /*                  Qgy_Rprtl_RecVar_0200_t                       */
 /*                  Qgy_Rprtl_ListInfo_t                          */
 /*                                                                */
 /* Function Prototype List: QGYRPRTL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960604 DPW       New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /* $A2= D97314       5D10  000417 KJV:      Printer Publishing    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYRPRTL_h
 #define QGYRPRTL_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Prototype for call to QGYRPRTL API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYRPRTL,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYRPRTL  (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   void *,     /* Filter information                */
                   char *,     /* Format name                       */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definitions for the Filter Information Format              */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qgy_Rprtl_QInfo
 {
    char  Output_Q_Name[10];
    char  Output_Q_Lib_Name[10];
 } Qgy_Rprtl_Qinfo_t;

 typedef _Packed struct Qgy_Rprtl_PrtInfo
 {
    char  Printer_Name[10];
    char  Reserved[2];
 } Qgy_Rprtl_PrtInfo_t;

 typedef _Packed struct Qgy_Rprtl_FilterInfo
 {
    int   Num_Prtr_Names;
  /*Qgy_Rprtl_PrtInfo_t   PrtInfo[]; */     /*VARYING LENGTH*/
    int   Num_Out_Qs;
  /*Qgy_Rprtl_QInfo_t     QInfo[];   */     /*VARYING LENGTH*/
 } Qgy_Rprtl_FilterInfo_t;


 /******************************************************************/
 /* Type Definitions for the Receiver Variable Formats             */
 /******************************************************************/
 typedef _Packed struct Qgy_Rprtl_RecVar_0100
 {
    char  Dev_Name[10];
    char  Text_Description[50];
    int   Overall_Status;
 } Qgy_Rprtl_RecVar_0100_t;

 typedef _Packed struct Qgy_Rprtl_RecVar_0200
 {
    char  Dev_Name[10];
    char  Text_Description[50];
    int   Overall_Status;
    int   Dev_Status;
    char  Out_Q_Name[10];
    char  Out_Q_Lib[10];
    char  Out_Q_Status;
    char  Writer_Name[10];
    char  Writer_Status;
    char  Writer_Started;
    char  Form_Type[10];
    char  Cur_File_Name[10];
    char  Cur_File_User[10];
    char  Cur_File_USData[10];
    char  Publish_Status;
    char  Reserved1[2];
 } Qgy_Rprtl_RecVar_0200_t;


 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qgy_Rprtl_ListInfo
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
 } Qgy_Rprtl_ListInfo_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

 #endif

