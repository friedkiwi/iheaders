/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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
 /* Header File Name: H/QYPERPEX                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Pex Information API                 */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2003,2003                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve PEX Information API provides         */
 /*              data about currently active PEX sessions.         */
 /*                                                                */
 /* Header Files Included:  mitime.h                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qype_RPEX_Header_t                             */
 /*                 Qype_RPEX_PEXI0100_t                           */
 /*                 Qype_RPEX_PEXI0200_t                           */
 /*                                                                */
 /* Function Prototype List: QYPERPEX                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D99317.14    5D30  030522 DFL       New include           */
 /* $A1=              5D30  030708 DFL       Fixed bug in int parm */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QYPERPEX_h
 #define QYPERPEX_h
 #if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
 #endif

 #include <mitime.h>

 /******************************************************************/
 /* Prototype for calling Performance Explorer API QYPERPEX        */
 /******************************************************************/
 #ifdef __ILEC400__
     #pragma linkage (QYPERPEX,OS,nowiden)
 #else
     extern "OS"
 #endif
 void QYPERPEX (void *,         /* Receiver variable              */
                unsigned int*,   /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* PEX session name               */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type definition for the header space format for the            */
 /* QYPERPEX API.                                                  */
 /******************************************************************/

 typedef _Packed struct Qype_RPEX_Header
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_To_First_Entry;
       int  Returned_Entry_Count;
       int  Entry_Size;
       int  Available_Entry_Count;
    } Qype_RPEX_Header_t;


 /******************************************************************/
 /* Type definition for the PEXI0100 repeating fields format in    */
 /* the QYPERPEX API.                                              */
 /******************************************************************/

 typedef _Packed struct Qype_RPEX_PEXI0100
    {
       char          Session_Name[10];
       char          Reserved1[2];
       unsigned int  Collection_Type;
       unsigned int  State;
       unsigned int  State_Qualifier;
       unsigned int  Event_Count;
       unsigned int  Filtered_Event_Count;
       _MI_Time      Start_Complete_Time;
       _MI_Time      Resume_Time;
       unsigned int  Storage_Used;
       char          Job_Name[10];
       char          User_Name[10];
       char          User_Number[6];
    } Qype_RPEX_PEXI0100_t;

 /******************************************************************/
 /* Type definition for the PEXI0200 repeating fields format in    */
 /* the QYPERPEX API.                                              */
 /******************************************************************/

 typedef _Packed struct Qype_RPEX_PEXI0200
    {
       char          Session_Name[10];
       char          Reserved1[2];
       unsigned int  Collection_Type;
       unsigned int  State;
       unsigned int  State_Qualifier;
       unsigned int  Event_Count;
       unsigned int  Filtered_Event_Count;
       _MI_Time      Start_Complete_Time;
       _MI_Time      Resume_Time;
       unsigned int  Storage_Used;
       char          Job_Name[10];
       char          User_Name[10];
       char          User_Number[6];
       char          Definition_Name[10];
       char          Filter_Name[10];
       char          Reserved2[2];
       unsigned int  Sampling_Interval;
    } Qype_RPEX_PEXI0200_t;

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif
#endif
