 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCRCFGS                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Configuration Status                */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QDCRCFGS API retrieves the current status of  */
 /*              a line, controller, device, network interface,    */
 /*              or network server description.                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_CFGS0100_t                                 */
 /*                 Qdc_Active_Conv_t                              */
 /*                 Qdc_Multiple_Job_t                         @A1A*/
 /*                                                                */
 /* Function Prototype List: QDCLCFGD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940319 MOREY:    New Include           */
 /* $A1= P3987959     3D60  950629 CMWOOD:   Add structure for     */
 /*                                          multiple job info     */
 /* $A2= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCRCFGS_h
 #define QDCRCFGS_h

 #if (__OS400_TGTVRM__>=510)                       /* @A2A */
     #pragma datamodel(P128)                       /* @A2A */
 #endif                                            /* @A2A */

 /******************************************************************/
 /* Prototype for calling Retrieve Configuration Status QDCRCFGS   */
 /* API                                                            */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCRCFGS,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QDCRCFGS (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Configuration description type */
                char *,          /* Configuration description name */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the Active Conversation.                   */
 /******************************************************************/

 typedef _Packed struct Qdc_Active_Conv
    {
       int  Conv_Status_Numeric;
       char Conv_Status_Text[20];
       char Conv_Mode_Name[10];
       char Conv_Job_Name[10];
       char Conv_User_Name[10];
       char Conv_Job_Number[6];
    } Qdc_Active_Conv_t;

 /******************************************************************/
 /* Type Definition for Multiple Job Information.                  */
 /******************************************************************/

 typedef _Packed struct Qdc_Multiple_Job                     /*@A1A*/
    {
       char Mult_Job_Name[10];                               /*@A1A*/
       char Mult_User_Name[10];                              /*@A1A*/
       char Mult_Job_Number[6];                              /*@A1A*/
    } Qdc_Multiple_Job_t;                                    /*@A1A*/

 /******************************************************************/
 /* Type Definition for the Receiver variable.                     */
 /******************************************************************/

 typedef _Packed struct Qdc_CFGS0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Current_Status_Numeric;
       char Date_Info_Retrieved[7];
       char Time_Info_Retrieved[6];
       char Current_Status_Text[20];
       char Job_Name[10];
       char User_Name[10];
       char Job_Number[6];
       char Pass_Thru_Device[10];
       char Reserved[3];
       int  Offset_List_Active_Conv;
       int  Number_Active_Conv;
       int  Length_Active_Conv;
       int  Offset_List_Multiple_Job;                        /*@A1A*/
       int  Number_Multiple_Job;                             /*@A1A*/
       int  Length_Multiple_job;                             /*@A1A*/
    /*Qdc_Active_Conv_t Array_Active_Conv[];*//* Varying Length    */
    /*Qdc_Multiple_Job_t Array_Multiple_Job[];*//* Varying Len @A1A*/
    } Qdc_CFGS0100_t;


 #if (__OS400_TGTVRM__>=510)                       /* @A2A */
     #pragma datamodel(pop)                        /* @A2A */
 #endif                                            /* @A2A */


 #endif
