 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWDRSBSD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Subsystem Information API           */
 /*                                                                */
 /* 5763-SS1, 5722-SS1  (C) Copyright IBM Corp. 1994,2000          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Subsystem Information API retrieves  */
 /*              information about one or more specified           */
 /*              subsystems or all active subsystems.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwd_Rsbsd_Pool_t                              */
 /*                  Qwd_SBSI0100_t                                */
 /*                  Qwd_Rsbsd_Sbsd_t                              */
 /*                  Qwd_SBSI0200_t                                */
 /*                                                                */
 /* Function Prototype List: QWDRSBSD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $A1= D9789500     5D10  990601 V2CIB66:  Add format SBSI0200   */
 /*                                          to support *ACTIVE &  */
 /*                                          optional parameter    */
 /*                                          to support multiple   */
 /*                                          SBSs                  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWDRSBSD_h
 #define QWDRSBSD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWDRSBSD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWDRSBSD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWDRSBSD(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Subsystem and library name     */
               void *,           /* Error code                     */
               ...  );           /* Optional Parameter:
                                      int  Number of subsystem
                                           names                   */

 /******************************************************************/
 /* Type Definition for the SBSI0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwd_Rsbsd_Pool
    {
       int  Pool_Id;
       char Pool_Name[10];
       char Reserved[6];
       int  Pool_Size;
       int  Pool_Activity_Level;
    } Qwd_Rsbsd_Pool_t;

 typedef _Packed struct Qwd_SBSI0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Subsystem_Desc_Name[10];
       char Subsystem_Desc_Lib_Name[10];
       char Subsystem_Status[10];
       char Sign_On_Device_File_Name[10];
       char Sign_On_Device_File_Lib_Name[10];
       char Secondary_Lang_Lib[10];
       int  Maximum_Active_Jobs;
       int  Current_Active_Jobs;
       int  Number_Storage_Pools;
     /*Qwd_Rsbsd_Pool_t Pools[];*//* Varying length                */
    } Qwd_SBSI0100_t;

 /******************************************************************/
 /* Type Definition for the SBSI0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwd_Rsbsd_Sbsd
    {
       char Subsystem_Desc_Name[10];
       char Subsystem_Desc_Lib_Name[10];
       char Subsystem_Extended_Status[12];
       int  Maximum_Active_Jobs;
       int  Current_Active_Jobs;
       char Subsystem_Monitor_Job_Name[10];
       char Subsystem_Monitor_User_Name[10];
       char Subsystem_Monitor_Job_Number[6];
       char Subsystem_Desc_Text[50];
     /*char Reserved[]          *//* Varying length                */
    } Qwd_Rsbsd_Sbsd_t;

 typedef _Packed struct Qwd_SBSI0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_First_Sbsd;
       int  Number_Sbsds;
       int  Size_Sbsd_Entry;
     /*char Reserved[]          *//* Varying length                */
     /*Qwd_Rsbsd_Sbsd_t Sbsds[];*//* Varying length                */
    } Qwd_SBSI0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
