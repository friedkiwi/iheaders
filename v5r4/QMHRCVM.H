/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2003                                */
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
 /* Header File Name: H/QMHRCVM                                    */
 /*                                                                */
 /* Descriptive Name: Receive Nonprogram Message.                  */
 /*                                                                */
 /* Description: The Receive Nonprogram Message API receives a     */
 /*              message from a nonprogram message queue.          */
 /*                                                                */
 /* Header Files Included:                                         */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rcvm_RCVM0100_t                            */
 /*                 Qmh_Rcvm_RCVM0200_t                            */
 /*                                                                */
 /* Function Prototype List: QMHRCVM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL  DATE   PGMR      CHANGE DESCRIPTION       */
 /* ---- -------- ------ ------ --------- ------------------------ */
 /* $A0= D2862000 v3r1m0 940424 ROCH:     New Include              */
 /* $A1= D98871   v5r2m0 010902 ROCH:     Add microseconds         */
 /* $A2= D99526   v5r3m0 030131 ROCH:     Add user name            */
 /* $B2= D9931502 v5r3m0 030430 ROCH:     Document optional parm   */
 /*                                       added in V5R2M0          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRCVM_h
 #define QMHRCVM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRCVM              */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QMHRCVM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHRCVM (void *,           /* Message information            */
               int,              /* Length of message information  */
               char *,           /* Format name                    */
               void *,           /* Qualified message queue name   */
               char *,           /* Message type                   */
               void *,           /* Message key                    */
               int,              /* Wait time                      */
               char *,           /* Message action                 */
               void *,           /* Error code                     */
               ...   );          /* Optional parameter group 1:
                                       Coded Character Set Id.
                                    Optional parameter group 2:
                                       Allow default reply rejection.
                                                               @B2A*/

 /******************************************************************/
 /* Type Definition for the RCVM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvm_RCVM0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Reserved[7];
       int  CCSID_Convert_Status;
       int  CCSID_Returned;
       int  Data_Returned;
       int  Data_Available;
     /*char Message_Data[];*/    /* Varying length                 */
    } Qmh_Rcvm_RCVM0100_t;

 /******************************************************************/
 /* Type Definition for the RCVM0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvm_RCVM0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Message_File_Name[10];
       char Message_File_Library[10];
       char Message_Library_Used[10];
       char Send_Job[10];
       char Send_User_Profile[10];     /* User name from qualified
                                          job name.            @A2C*/
       char Send_Job_Number[6];
       char Send_Program_Name[12];
       char Reserved1[4];
       char Send_Date[7];
       char Send_Time[6];
       char Send_Time_Microseconds[6];                      /* @A1A*/
       char Send_User_Name[10];       /* Actual sending user.  @A2A*/
       char Reserved2[1];                                   /* @A2C*/
       int  Text_CCSID_Convert_Status;
       int  Data_CCSID_Convert_Status;
       char Alert_Option[9];
       int  Text_CCSID_Returned;
       int  Data_CCSID_Returned;
       int  Length_Data_Returned;
       int  Length_Data_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
     /*char Message_Text[];*/    /* Varying length                 */
     /*char Message[];*/         /* Varying length                 */
     /*char Message_Help[];*/    /* Varying length                 */
    } Qmh_Rcvm_RCVM0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
