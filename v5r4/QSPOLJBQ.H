 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPOLJBQ                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Job Queues                      */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QSPOLJBQ API generates a list of job queues   */
 /*              on the system.  The list can include all          */
 /*              job queues, all job queues currently allocated    */
 /*		 to active subsystems, the job queues that are	   */
 /*              both allocated and defined for a specific active  */
 /*              subsystem.                                        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qsp_Oljbq_UserInfo_t                          */
 /*                  Qsp_Oljbq_FilterInfo_t                        */
 /*                  Qsp_Oljbq_SData_t                             */
 /*                  Qsp_Oljbq_SortInfo_t                          */
 /*                  Qsp_Oljbq_RecVar_0100_t                       */
 /*                  Qsp_Oljbq_ListInfo_t                          */
 /*                                                                */
 /* Function Prototype List: QSPOLJBQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97895       5D10  991102 AAM       New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSPOLJBQ_h
 #define QSPOLJBQ_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Prototype for call to QSPOLJBQ API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QSPOLJBQ,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QSPOLJBQ (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
             	   char *,     /* Format of the generated list      */
                   void *,     /* List Information                  */
                   void *,     /* Filter information                */
                   void *,     /* Sort Information                  */
                   int   ,     /* Number of records to return       */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definitions for the Filter Information Format              */
 /*******************************************************************/

 typedef _Packed struct Qsp_Oljbq_FilterInfo
 {
    int Length_Filter_info;
    char JobQ_Name[10];
    char JobQ_Lib_Name[10];
    char ActiveSubsystem[10];
 } Qsp_Oljbq_FilterInfo_t;

 /******************************************************************/
 /* Type Definitions for the Sort Information Format               */
 /*   NOTE:  This definition only defines fixed portions of the    */
 /*          format.  Any varying length field must be specified   */
 /*          by the user.                                          */
 /******************************************************************/
 typedef _Packed struct Qsp_Oljbq_SData
 {
    int   Start_Pos;
    int   Field_Length;
    short Data_Type;
    char  Sort_Order;
    char  Reserved;
 } Qsp_Oljbq_SData_t;

 typedef _Packed struct Qsp_Oljbq_SortInfo
 {
    int                 Num_Keys;
  /*Qgy_Olspl_SData_t   SData[];*/       /*VARYING LENGTH*/
 } Qsp_Oljbq_SortInfo_t;


 /******************************************************************/
 /* Type Definitions for the Receiver Variable Formats             */
 /******************************************************************/
 typedef _Packed struct Qsp_Oljbq_RecVar_0100
 {
    char  JobQ_Name[10];
    char  JobQ_Library_Name[10];
    char  JobQ_Status[1];
    char  Subsystem_Name[10];
    char  Subsystem_Library_Name[10];
    char  Reserved[3];
    int   Number_of_Jobs_on_Queue;
    int   Sequence_Number;
    int   Maximum_Active;
    int   Current_Active;
    char  Description[50];
 } Qsp_Oljbq_RecVar_0100_t;

 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qsp_Oljbq_ListInfo
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
 } Qsp_Oljbq_ListInfo_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

 #endif
