 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QDMLOPNF                                     */
 /*                                                                */
 /* Descriptive Name: List Open Files API                          */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Open Files API retrieves a list of open  */
 /*              file objects in the specified job or thread and   */
 /*              places the entries in the receiver variable in    */
 /*              the calling program.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qdm_LOPNF_Entry_t                             */
 /*                  Qdm_OPNF0100_t                                */
 /*                                                                */
 /* Function Prototype List: QDMLOPNF                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL      DATE   PGMR      CHANGE DESC      */
 /* ---- ------------ -----      ------ ----      ---------------- */
 /* $A0=D98031        v5r1m0.xpf 000430 BRATAGER: New Include      */
 /* $B1=D98212        v5r1m0.xpf 000707 BRATAGER: Teraspace        */
 /* $B2=D98416        v5r2m0.xpf        BRATAGER: Independent ASPs */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDMLOPNF_h
 #define QDMLOPNF_h
#if (__OS400_TGTVRM__>=510)  /*@B1A*/
#pragma datamodel(P128)      /*@B1A*/
#endif                       /*@B1A*/

 #ifndef Qus_Error_Code_h
  #include <qusec.h>
 #endif

 /******************************************************************/
 /*  Prototype for QDMLOPNF API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDMLOPNF,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QDMLOPNF(void *,         /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Job identification information */
               char *,           /* Format of job identification   */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the OPNF0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qdm_LOPNF_Entry
    {
       char File_Name[10];
       char File_Library[10];
       char Member_Device_Name[10];
       char File_Type[10];
       char Record_Format[10];
       char Activation_Group_Name[10];
       char Thread_Identifier[8];
       char Open_Option;
       char Reserved[3];
       long long Activation_Group_Number;
       long long Write_Count;
       long long Read_Count;
       long long Write_Read_Count;
       long long Other_I_O_Count;
       long long Relative_Record_Number;
       long long Number_Shared_Opens;
       int  Object_ASP_Number; /*@B2A*/
       int  Library_ASP_Number; /*@B2A*/
       char Object_ASP_Name[10]; /*@B2A*/
       char Library_ASP_Name[10]; /*@B2A*/

    } Qdm_LOPNF_Entry_t;

 typedef _Packed struct Qdm_OPNF0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Number_Open_Files_Available;
       int  Offset_To_List_Of_Open_Files;
       int  Number_Open_Files_Returned;
       int  Length_Open_File_Entry;
       char Job_Name_Used[10];
       char Job_User_Name_Used[10];
       char Job_Number_Used[6];
       char Thread_Identifier_Used[8];
   /*Qdm_LOPNF_Entry_t Entry[]; */  /* Varying length */
    } Qdm_OPNF0100_t;

#if (__OS400_TGTVRM__>=510)  /*@B1A*/
#pragma datamodel(pop)       /*@B1A*/
#endif                       /*@B1A*/
 #endif
