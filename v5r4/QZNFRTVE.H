 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZNFRTVE                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve NFS Export Information.             */
 /*                                                                */
 /* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1997,2000          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Network File System (NFS)            */
 /*              Export Information API provides information       */
 /*              about objects that are currently exported to      */
 /*              NFS Clients.                                      */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qznf_EXPE0100_T                                */
 /*                 Qznf_EXPE_Feedback_Info_T                      */
 /*                                                                */
 /* Function Prototype List: QZNFRTVE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9576300     4D30  971019 ROCH:     New Include           */
 /* $A1= D9576300     5D10  990709 ROCH:     Change code page to   */
 /*                                          CCSID                 */
/*  $A2= D98212.05    5D10  000104 ROCH:     Datamodel changes     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QZNFRTVE_h
 #define QZNFRTVE_h

#if (__OS400_TGTVRM__>=510)                                 /* @A2A*/
#pragma datamodel(P128)                                     /* @A2A*/
#endif                                                      /* @A2A*/

 #define QZNF_EXPE0100_FORMAT   "EXPE0100"
 #define QZNF_EXPE0200_FORMAT   "EXPE0200"

 /******************************************************************/
 /* Record structure for EXPE0100 format                           */
 /******************************************************************/
 /*   The Disp_... fields indicate displacement from the           */
 /*   top of the structure.                                        */
 /******************************************************************/
 typedef _Packed struct Qznf_EXPE0100
    {
       unsigned int   Entry_Length;
       unsigned int   Disp_to_Object_Path_Name;
       unsigned int   Length_of_Object_Path_Name;
       unsigned int   CCSID_of_Object_Path_Name;
       unsigned int   Read_Only_Flag;
       unsigned int   NOSUID_Flag;
       unsigned int   Disp_to_Read_Write_Hosts;
       unsigned int   Number_of_Read_Write_Hosts;
       unsigned int   Disp_to_Root_Hosts;
       unsigned int   Number_of_Root_Hosts;
       unsigned int   Disp_to_Access_Hosts;
       unsigned int   Number_of_Access_Hosts;
       unsigned int   Disp_to_Host_Options;
       unsigned int   Number_of_Host_Options;
       unsigned int   Anonymous_UID;
       char           Anonymous_User_Profile[10];
       char           Data[1];    /* Varying Length Data */
 /******************************************************************/
 /* "Data" is formatted as follows:                                */
 /*                                                                */
 /*      char            Object_Path_Name[1];  (varying length)    */
 /*                                                                */
 /*  (The following repeats for each Host Name                     */
 /*   in the Read-Write list):                                     */
 /*                                                                */
 /*      unsigned int    Length_of_Host_Name_Entry;                */
 /*      unsigned int    Length_of_Host_Name;                      */
 /*      char            Host_Name[1];  (varying length);          */
 /*                                                                */
 /*  (The following repeats for each Host Name                     */
 /*   in the Root list):                                           */
 /*                                                                */
 /*      unsigned int    Length_of_Host_Name_Entry;                */
 /*      unsigned int    Length_of_Host_Name;                      */
 /*      char            Host_Name[1];  (varying length);          */
 /*                                                                */
 /*  (The following repeats for each Host Name                     */
 /*   in the Access List):                                         */
 /*                                                                */
 /*      unsigned int    Length_of_Host_Name_Entry;                */
 /*      unsigned int    Length_of_Host_Name;                      */
 /*      char            Host_Name[1];  (varying length);          */
 /*                                                                */
 /*  (The following repeats for each Host Name                     */
 /*   in the Host Options List):                                   */
 /*                                                                */
 /*      unsigned int    Length_of_Host_Name_Entry;                */
 /*      unsigned int    Network_Data_File_CCSID;           @A1C   */
 /*      unsigned int    Network_Path_Name_CCSID;           @A1C   */
 /*      unsigned int    Write_Mode_Flag;                          */
 /*      unsigned int    Length_of_Host_Name;                      */
 /*      char            Host_Name[1];  (varying length);          */
 /*                                                                */
 /*  (Note: Each of these repeated Host structures begin on a 4    */
 /*         byte boundary.  The Length_of_Host_Name_Entry field is */
 /*         the size in bytes for convenience in finding the next  */
 /*         entry.)                                                */
 /******************************************************************/
    } Qznf_EXPE0100_T;


 /******************************************************************/
 /* Record structure for Return Records Feedback Information       */
 /******************************************************************/
 typedef _Packed struct Qznf_EXPE_Feedback_Info
    {
       unsigned int   Bytes_Returned;
       unsigned int   Bytes_Available;
       unsigned int   Number_of_NFS_Export_Entries;
       unsigned int   Handle;
    } Qznf_EXPE_Feedback_Info_T;



 /******************************************************************/
 /* Prototype for calling API QZNFRTVE                             */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QZNFRTVE,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QZNFRTVE (void *,          /* Receiver variable              */
                unsigned int,    /* Length of Receiver variable    */
                void *,          /* Feedback information - ptr to  */
                                 /*   Qznf_EXPE_Feedback_Info_T    */
                char *,          /* Format Name                    */
                char *,          /* Object Path Name               */
                unsigned int,    /* Length of Object Path Name     */
                unsigned int,    /* CCSID of Object Path Name      */
                unsigned int,    /* Desired CCSID of the Object    */
                                 /* Path names that are returned.  */
                unsigned int,    /* Handle                         */
                void *);         /* Error Code                     */

#if (__OS400_TGTVRM__>=510)                                 /* @A2A*/
#pragma datamodel(pop)                                      /* @A2A*/
#endif                                                      /* @A2A*/
#endif

