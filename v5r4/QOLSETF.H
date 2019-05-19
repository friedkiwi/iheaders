 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOLSETF                                    */
 /*                                                                */
 /* Descriptive Name: Set Filter                                   */
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
 /* Description: The Set Filter API activates and/or deactivates   */
 /*              one or more filters for a link that is currently  */
 /*              enabled in the job in which the application       */
 /*              program is running.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qol_Filter_Header_t                            */
 /*                 Qol_X25_Filter_t                               */
 /*                 Qol_LAN_Filter_t                               */
 /*                                                                */
 /* Function Prototype List: QOLSETF                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 VINING:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOLSETF_h
 #define QOLSETF_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Set Filter API QOLSETF                   */
 /******************************************************************/

 #ifdef __ILEC400__
      #pragma linkage (QOLSETF,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QOLSETF (int  *,           /* Return Code                    */
               int  *,           /* Reason Code                    */
               int  *,           /* Offset to Error                */
               char *);          /* Communications Handle          */

 /******************************************************************/
 /* Type Definition for the Filter header                          */
 /******************************************************************/

 typedef _Packed struct Qol_Filter_Header
    {
       char  Function;
       char  Filter_Type;
       short Number_Of_Filters;
       short Length_Of_Filter;
    } Qol_Filter_Header_t;

 /******************************************************************/
 /* Type Definition for X.25 Filters                               */
 /******************************************************************/
 typedef _Packed struct Qol_X25_Filter
    {
       char  Length_Of_PID;
       char  PID;
       char  Length_Of_Calling_DTE_Addr;
       char  Calling_DTE_Addr[12];
       char  Additional_Routing_Data;
    } Qol_X25_Filter;

 /******************************************************************/
 /* Type Definition for LAN Filters                                */
 /******************************************************************/

 typedef _Packed struct Qol_LAN_Filter
    {
       char  Length_Of_DSAP_Addr;
       char  DSAP_Addr;
       char  Length_Of_SSAP_Addr;
       char  SSAP_Addr;
       char  Length_Of_Frame_Type;
       char  Frame_Type[2];
       char  Length_Of_Sending_Adapter_Addr;
       char  Sending_Adapter_Addr[6];
    } Qol_LAN_Filter_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
