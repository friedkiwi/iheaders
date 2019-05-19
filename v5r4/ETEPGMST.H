/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/ETEPGMST                                      */
/*                                                                   */
/* Descriptive Name: Program Stop Exit Program Header.               */
/*                                                                   */
/* 5763-SS1,5722-SS1 (C) Copyright IBM Corp. 1994,2001               */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: This is the CLE header for the ETEPGMST Exit Program */
/*                                                                   */
/* Header Files Included: none.                                      */
/*                                                                   */
/* Macros List: none.                                                */
/*                                                                   */
/* Structure List: none.                                             */
/*                                                                   */
/* Function Prototype List: ETEPGMST.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940522 LUPA      New Include              */
/* $A1= D9421104     3D70  960306 ROCH    : Add Watch typedefs   @A1A*/
/* $B1= D9480301     4D20  961218 ROCH    : Add Thread Support   @B1A*/
/* $C1= D9750500     4D50  990509 ROCH    : Java Watch Support   @C1A*/
/* $D1= P9934931    v5r1m0 001010 ROCH    : Teraspace stage 2    @D1A*/
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef ETEPGMST_h
 #define ETEPGMST_h

#include <qtes.h>                   /* Common names include          */

#if (__OS400_TGTVRM__>=510)                                   /* @D1A*/
  #pragma datamodel(P128)                                     /* @D1A*/
#endif                                                        /* @D1A*/

 /********************************************************************/
 /*  Structure for Format of Message Data                            */
 /********************************************************************/
 typedef _Packed struct Qte_Msg_Data {
       int      Length_Msg_Data;
       char     Msg_Id[7];
       char     Msg_File[20];
       char     Reserved_1;
       char     Msg_Data[512];
 } Qte_Msg_Data_t;

 /********************************************************************/
 /*  Typedefs for Watch Stop Reasons                                 */
 /********************************************************************/
 typedef _Packed struct Qte_Watch_Receiver {
       long int WatchNumber;
       long int OffsetToStoppedPgmInfo;
       long int OffsetToWatchIntInfo;
 } Qte_Watch_Receiver;

 typedef _Packed struct Qte_Stopped_PgmInfo {
       long int OffsetToStopProcName;
       long int LengthOfStopProcName;
       long int OffsetToStopLocs;
       long int NumberOfStopLocs;
       char     StoppedLocFlag;
       char     Reserved[3];
       _TE_THREADID_T ThreadID;
 } Qte_Stopped_PgmInfo;

 typedef _Packed struct Qte_Watch_Int_Info {
       char         QualIntJobName[26];
       _TE_OBJLIB_T QualIntPgmName;
       _TE_NAME_T   IntPgmType;
       _TE_NAME_T   IntModuleName;
       char         IntLocFlag;
       char         Reserved;
       long int     OffsetToIntProcName;
       long int     LengthOfIntProcName;
       long int     OffsetToIntLocs;
       long int     NumberOfIntLocs;
       _TE_THREADID_T ThreadID;
       long int     OffsetToIntClassName;
       long int     LengthOfIntClassName;
 } Qte_Watch_Int_Info;

#if (__OS400_TGTVRM__>=510)                                   /* @D1A*/
  #pragma datamodel(pop)                                      /* @D1A*/
#endif                                                        /* @D1A*/

#endif
