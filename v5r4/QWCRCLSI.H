 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRCLSI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve class information                   */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: This API will retrieve class information for      */
 /*              the specified class.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_ClassI_t                                   */
 /*                                                                */
 /* Function Prototype List: QWCRCLSI                              */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97098       4D30  980227 ROCH:     New Include           */
 /* $A1= D97233       4D40  980902 ROCH:     Temporary storage     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRCLSI_h
 #define QWCRCLSI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


 /******************************************************************/
 /* Type Definitions for retrieve information.                     */
 /*                                                                */
 /******************************************************************/

 typedef _Packed struct Qwc_ClassI
 {
     int  Bytes_Return;
     int  Bytes_Available;
     char Class_Name[10];
     char Class_Library[10];
     int  Run_Priority;
     int  Time_Slice;
     int  Purge;
     int  Default_Wait;
     int  Max_CPU_Time;
     int  Max_Temp_Storage;
     int  Max_Threads;
     char Text[50];
     char Reserved[2];
     int  Max_Temp_Storage_MB;
 } Qwc_ClassI_t;


 /******************************************************************/
 /*  Prototype for QWCRCLSI API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
 #pragma linkage(QWCRCLSI,OS,nowiden)
 #else
    extern "OS"
 #endif
     void QWCRCLSI(void *,        /* Receiver variable            */
                  int,            /* Length of receiver variable  */
                  void *,         /* Format name                  */
                  void *,         /* Qualified class name         */
                  void *);        /* Error code                   */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
