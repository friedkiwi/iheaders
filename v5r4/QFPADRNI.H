 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFPADRNI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Network Server Information          */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000,2002                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Network Server Information (QFPADRNI)*/
 /*              API retrieves information about a network server. */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This macro/include is a CUE.                 */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qfp_DRNI0100_t   (Windows server version info) */
 /*                 Qfp_DRNI0200_t   (Windows server status info)  */
 /*                 Qfp_AS400_Integ_Service_Pack_t (Serv pack info)*/
 /*                 Qfp_DRNI0100_Hot_Fix_t          (Hot fix info) */
 /*                 Qfp_Multi_Proc_Usage_t   (Mult processor info) */
 /*                                                                */
 /* Function Prototype List: QFPADRNI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D97488     4D50  990331 MEADEN  :   New Include           */
 /* $A1= D98212.2  v5r1m0 010300 gchaney : Teraspace stage 2       */
 /* $B1= D98202     5D10  991108 NLK     :   N-Way changes         */
 /* $A2= P9946829   5D20  052201 MEADEN  :   V5R2 changes          */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFPADRNI_h
 #define QFPADRNI_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/


 /******************************************************************/
 /* Prototype for calling Retrieve Network Server Info (QFPADRNI)  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPADRNI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QFPADRNI (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* NWSD server name               */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the AS/400 Integration Service Pack Entries*/
 /******************************************************************/

 typedef _Packed struct Qfp_AS400_Integ_Service_Pack
    {
       char AS400_Integ_Service_Pack[7];
       char Reserved1[1];
    } Qfp_AS400_Integ_Service_Pack_t;

 /******************************************************************/
 /* Type Definition for the DRNI0100 format - Hot Fix information  */
 /******************************************************************/

 typedef _Packed struct Qfp_DRNI0100_Hot_Fix                /* @A2A*/
    {                                                       /* @A2A*/
       char Hot_Fix[7];                                     /* @A2A*/
       char Reserved2[1];                                   /* @A2A*/
    } Qfp_DRNI0100_Hot_Fix_t;                               /* @A2A*/

 /******************************************************************/
 /* Type Definition for Multiple Processor Usage Entries       @B1A*/
 /******************************************************************/

 typedef _Packed struct Qfp_Multi_Proc_Usage
    {
       int Multi_Proc_Usage;                                 /*@B1A*/
    } Qfp_Multi_Proc_Usage_t;                                /*@B1A*/


 /******************************************************************/
 /* Type Definition for the DRNI0100 format                        */
 /*   - Windows server version information                         */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DRNI0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Windows_Version[10];
       char Windows_Build_Number[10];
       char Windows_Service_Pack_Level[128];
       char AS400_Integration_Version[6];
       char Reserved1[38];
       int  Off_List_AS400_Int_Servpacks;
       int  Len_AS400_Int_Servpack_Entry;
       int  Num_AS400_Int_Servpack_Entry;
       int  Offset_to_Hot_Fix_List;                         /* @A2A*/
       int  Length_of_Hot_Fix_List_Entries;                 /* @A2A*/
       int  Number_of_Hot_Fix_List_Entries;                 /* @A2A*/
     /*Qfp_AS400_Integ_Service_Pack_t Servpack_List[];*/ /*Vary len*/
     /*Qfp_DRNI0100_Hot_Fix_t Hot_Fix_List[];*/ /* Varying len @A2A*/
    } Qfp_DRNI0100_t;

 /******************************************************************/
 /* Type Definition for the DRNI0200 format                        */
 /*   - Windows server status information                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DRNI0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Connected_Users;
       int  Processor_Utilization;
       int  Paging_File_Utilization;
       int  Registry_Quota_Utilization;
       int  Off_List_Multi_Proc_Usage;                       /*@B1A*/
       int  Len_Multi_Proc_Usage_Entry;                      /*@B1A*/
       int  Num_Multi_Proc_Usage_Entry;                      /*@B1A*/
     /*Qfp_Multi_Proc_Usage_t Proc_List[];*/     /*@B1A Vary length*/
    } Qfp_DRNI0200_t;

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

 #endif
