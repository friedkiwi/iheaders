 /*** START HEADER FILE SPECIFICATIONS *************************/
 /*                                                            */
 /* Header File Name: H/QSPRILSP                               */
 /*                                                            */
 /* Descriptive Name: Retrieve identity of last spooled file   */
 /*                   created.                                 */
 /*                                                            */
 /* 5722SS1                                                    */
 /* (C) Copyright IBM Corp. 2002                               */
 /* All rights reserved.                                       */
 /* US Government Users Restricted Rights -                    */
 /* Use, duplication or disclosure restricted                  */
 /* by GSA ADP Schedule Contract with IBM Corp.                */
 /*                                                            */
 /* Licensed Materials-Property of IBM                         */
 /*                                                            */
 /*                                                            */
 /* Description: The Retrieve identity of last spooled         */
 /*              file created returns information needed to    */
 /*              uniquely identify the specific spooled file   */
 /*              that was last created by the current          */
 /*              job/thread.                                   */
 /*                                                            */
 /* Header Files Included: None.                               */
 /*                                                            */
 /* Macros List: None.                                         */
 /*                                                            */
 /* Structure List: Qsp_SPRL0100_t                             */
 /*                                                            */
 /* Function Prototype List: QSPRILSP                          */
 /*                                                            */
 /* Change Activity:                                           */
 /*                                                            */
 /* CFD List:                                                  */
 /*                                                            */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION*/
 /* ---- ------------ ----- ------ --------- ------------------*/
 /* $A0= D9726000     5D20  010228 ROCH:     New Include       */
 /*                                                            */
 /* End CFD List.                                              */
 /*                                                            */
 /*  Additional notes about the Change Activity                */
 /* End Change Activity.                                       */
 /*** END HEADER FILE SPECIFICATIONS ***************************/

#ifndef QSPRILSP_h
 #define QSPRILSP_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif
 /*****************************************************************/
 /*  Prototype for calling Spooled File and Print API QSPRILSP    */
 /*****************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSPRILSP,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QSPRILSP(void *,           /* Receiver variable            */
               int,               /* Length of receiver variable  */
               char *,            /* Format name                  */
               void *);           /* Error Code                   */

/*****************************************************************/

/*****************************************************************/
/* Structure for SPRL0100 format                                 */
/*****************************************************************/
typedef _Packed struct Qsp_SPRL0100
{
     int  Bytes_Return;
     int  Bytes_Avail;
     char Splf_Name[10];
     char Job_Name[10];
     char Usr_Name[10];
     char Job_Number[6];
     int  Splf_Number;
     char Job_System_Name[8];
     char Date_File_Open[7];
     char Reserved;
     char Time_File_Open[6];
} Qsp_SPRL0100_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
