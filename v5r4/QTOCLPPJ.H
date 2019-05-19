/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTOCLPPJ                                   */
 /*                                                                */
 /* Descriptive Name: List TCP/IP Point-to-Point Jobs              */
 /*                                                                */
 /* Description: The QTOCLPPJ API returns information about each   */
 /*              point-to-point job connecton job currently        */
 /*              associated with the specified point-to-point      */
 /*              connection profile.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qtoc_LPPJ_Input_t                              */
 /*                 Qtoc_LPPJ_Header_t                             */
 /*                 Qtoc_PPPJ0100_t                                */
 /*                                                                */
 /* Function Prototype List: QTOCLPPJ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97138       4D40  981002 MBULLOCK: New Include           */
 /* $B0= D99895.1     5D40  040721 BOBC    : Add thread id         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTOCLPPJ_h
 #define QTOCLPPJ_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling List PtP Jobs APIQTOCLPPJ OPM            */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTOCLPPJ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QTOCLPPJ (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* Point-to-Point profile name    */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the Input Parameter Section.               */
 /******************************************************************/
 typedef _Packed struct Qtoc_LPPJ_Input
    {
       char User_Space_Specified[10];
       char User_Space_Lib_Specified[10];
       char Format_Name[8];
       char Cnn_Profile_Specified[10];
    } Qtoc_LPPJ_Input_t;

 /******************************************************************/
 /* Type Definition for the Header Section.                        */
 /******************************************************************/
 typedef _Packed struct Qtoc_LPPJ_Header
    {
       char User_Space_Used[10];
       char User_Space_Lib_Used[10];
       char Cnn_Profile_Name[10];
    } Qtoc_LPPJ_Header_t;

 /******************************************************************/
 /* Type Definition for the PPPJ0100 Format.                       */
 /******************************************************************/
 typedef _Packed struct Qtoc_PPPJ0100
    {
       char PPPJ_Job_Name[10];
       char PPPJ_Job_User[10];
       char PPPJ_Job_Number[6];
       char PPPJ_Job_Internal[16];
       char PPPJ_Line_Name[10];
       int  PPPJ_Cnn_Status;
       char PPPJ_LocalIP_Addr[15];
       char PPPJ_RemoteIP_Addr[15];
       char PPPJ_Cnn_User_Name[48];
       char PPPJ_Thread_ID[8];                              /* @B0A*/
    } Qtoc_PPPJ0100_t;


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif

