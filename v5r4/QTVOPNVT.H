/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : QTVOPNVT                                 */
/*                                                                   */
/* Descriptive Name       : Open Virtual Terminal Path.              */
/*                                                                   */
/*                                                                   */
/* program-number  (C) Copyright IBM Corp. 1994, 2000.               */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Open Virtual Terminal Path (QTVOPNVT) API opens  */
/*              a path to a virtual terminal, allowing a server      */
/*              program to interact with an AS/400 application.      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:     Qtv_Opnvt_Sess_Init_t                         */
/*                     Qtv_Opnvt_Record_t                            */
/*                                                                   */
/* Function Prototype List: QTVOPNVT                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -----------------------  */
/* $A0= D2862000     3D10  940424 LUPA    : New Header               */
/* $B1= D98212.3     5D10  000103 JSTEVENS  TERASPACE HEADER         */
/*                                          FILES - STAGE 3          */
/* $B2= D98311       5D10  000608 JSTEVENS  Optional Parm Group 3    */
/*                                          added, new feedback      */
/*                                          structure added.         */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the change activity                       */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QTVOPNVT_h
 #define QTVOPNVT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for calling Virtual Terminal API QTVOPNVT             */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage(QTVOPNVT,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QTVOPNVT (void *,           /* Virtual terminal handle         */
                char *,           /* Keyboard language type          */
                int,              /* Character set                   */
                int,              /* Code page                       */
                int,              /* Work station type               */
                void *,           /* Data queue name and library     */
                void *,           /* Key value                       */
                int,              /* Key value length                */
                void *,           /* Error code                      */
                ...);             /* Optional group 1: (void *)
                                     Open operation information.
                                     Optional group 2: (void *)
                                     Session initiation information
                                     Optional group 3: (void *) @B2A
                                     Open Feedback information.      */

 /********************************************************************/
 /*  Type definition for session initiation information.             */
 /*                                                                  */
 /*  NOTE: The following type definitions only define the fixed      */
 /*        length portion of the structures.  Variable-length fields */
 /*        are commented out and are to be supplied by the user.     */
 /*                                                                  */
 /********************************************************************/
 typedef _Packed struct Qtv_Opnvt_Sess_Init
   {
     int Record_Count;
   /*char Record_List[];   */   /* Varying Length                    */
   } Qtv_Opnvt_Sess_Init_t;

 typedef _Packed struct Qtv_Opnvt_Record
   {
     int Record_Key;
     int Record_Len;
   /*char Record_Data[];   */   /* Varying Length                    */
   } Qtv_Opnvt_Record_t;

  typedef _Packed struct Qtv_Opnvt_Feedback
   {
     int   Bytes_Returned;
     int   Bytes_Available;
     int   Reason_Code;
     char  Device_Name[10];
     char  Reserved[4];
   } Qtv_Opnvt_Feedback_t;   /* @B2A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
