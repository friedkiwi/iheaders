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
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRTVTZ                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Time Zone Description API           */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Time Zone Description API retrieves  */
 /*              information about one or more time zone           */
 /*              descriptions.                                     */
 /*                                                                */
 /* Header Files Included:  None                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_RTMZ_Time_Zone_Info_t                     */
 /*                  Qwc_RTMZ_TZ_String_t                          */
 /*                  Qwc_RTMZ0100_t                                */
 /*                  Qwc_RTMZ0200_t                                */
 /*                                                                */
 /* Function Prototype List: QWCRTVTZ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL    DATE   PGMR  CHANGE DESCRIPTION         */
 /* ---- -------- ------ -------- ----  -------------------------- */
 /* $A0= D9914507 v5r3m0 20030202 ROCH: New Include                */
 /* $01= P9A27255 v5r3m0 20030413 ROCH: Return message file and    */
 /*                                     library as separate fields */
 /* $02= D9977300 v5r3m0 20031007 ROCH: RTMZ0200 support           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRTVTZ_h
 #define QWCRTVTZ_h

 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(P128)
 #endif

 /********************************************************************/
 /*  Prototype for QWCRTVTZ API                                      */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRTVTZ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCRTVTZ(void *,         /* Receiver variable                */
	         int  *,         /* Length of receiver variable      */
	         char *,         /* Format name                      */
	         char *,         /* Time zone description            */
	         void *);        /* Error code                       */

 /********************************************************************/
 /* Type Definition for the RTMZ0100 format.                         */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/

 typedef _Packed struct Qwc_RTMZ_Time_Zone_Info {
      char Time_Zone_Object[10];
      char Local_System_Time_Indicator;
      char Daylight_Saving_Time_Indicator;
      int  Offset_From_UTC;
      char Standard_Abbreviated_Name[10];
      char Standard_Full_Name[50];
      char DST_Abbreviated_Name[10];
      char DST_Full_Name[50];
      char Standard_Message[7];
      char DST_Message[7];
      char Message_File[10];
      char Message_File_Library[10];
      char DST_Start_Month[2];
      char DST_Start_Day;
      char DST_Start_Relative_Day;
      char DST_Start_Time[6];
      char DST_End_Month[2];
      char DST_End_Day;
      char DST_End_Relative_Day;
      char DST_End_Time[6];
      char Text_Description[50];
    /*char Reserved_01[]; */        /* Varying length                */
  } Qwc_RTMZ_Time_Zone_Info_t;

 typedef _Packed struct Qwc_RTMZ0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Time_Zone_Available;
       int  Time_Zone_Offset;
       int  Time_Zone_Returned;
       int  Time_Zone_Length;
     /*char Reserved[]; *//* Varying length */
     /*Qwc_RTMZ_Time_Zone_Info_t Time_Zone[]; *//* Varying length */
    } Qwc_RTMZ0100_t;

 /********************************************************************/
 /* Type Definition for the RTMZ0200 format.                         */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/

 typedef _Packed struct Qwc_RTMZ_TZ_String {
      int  Entry_Length;
      int  Disp_To_String;
      int  String_Length;
      char Time_Zone_Object[10];
    /*char Reserved[]; *//* Varying length */
    /*char TZ_String[]; *//* Varying length null-terminated string */
  } Qwc_RTMZ_TZ_String_t;

 typedef _Packed struct Qwc_RTMZ0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Time_Zone_Available;
       int  Time_Zone_Offset;
       int  Time_Zone_Returned;
     /*char Reserved[]; *//* Varying length */
     /*Qwc_RTMZ_TZ_String Time_Zone[]; *//* Varying length */
    } Qwc_RTMZ0200_t;

 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
 #endif

 #endif
