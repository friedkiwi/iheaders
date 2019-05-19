 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBRTVSN.h                                 */
 /*                                                                */
 /* Descriptive Name: Retrieve long file to short file name.       */
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
 /* Description: The Retrieve Long FIle to Short File (QDBRTVSN)   */
 /*              API allows the user to get the 10 character       */
 /*              file name from the long file name.                */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List: Qdb_SMN_Input_Parms_t                          */
 /*                                                                */
 /* Function Prototype List: QDBRTVSN                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   DEPT/PGMR CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3605580     3D20  940102 45H MWT:  New Include           */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QDBRTVSN_h
   #define QDBRTVSN_h

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(P128)                                    /*@A1A*/
#endif                                                         /*@A1A*/

/*********************************************************************/
/* Prototypes for calling Retrieve LF to SF API QDBRTVSN             */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBRTVSN,OS,nowiden)
#else
     extern "OS"
#endif

void QDBRTVSN(void *,               /* Receiver name                 */
              char *,               /* Long file name                */
              long,                 /* Length of long file name      */
              void *,               /* Library name                  */
              void *);              /* Error code                    */

/*******************************************************************/
/* Input structure for QDBRTVSN API header section                 */
/*******************************************************************/
typedef _Packed struct
                Qdb_Snm_Input_Parms
              {
                  char Receiver_Name[20];
                  char Long_File_Name[128];
                  long Length_Of_Long_File_Name;
                  char Library_Name[10];
              } Qdb_Snm_Input_Parms_t;

#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(pop)                                    /*@A1A*/
#endif                                                        /*@A1A*/

#endif
