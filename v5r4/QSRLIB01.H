#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name:  QSRLIB01.h                                  */
/*                                                                */
/* Descriptive Name: Save/restore definitions for *SRVPGM         */
/*                   QSRLIB01.                                    */
/*                                                                */
/* WARNING:        This macro/include is a CUE.                   */
/*                 This macro/include provides an interface       */
/*                 that is externally documented to customers     */
/*                 or is function that any user could create.     */
/*                 Any changes to this part MUST be upward        */
/*                 compatible at compile and run time.            */
/*                 This interface may be generated as in-line     */
/*                 code in customer programs.                     */
/*                                                                */
/*                 CSTATUS:  OT                                   */
/*                                                                */
/*                                                                */
/* 5769-SS1, 5722-SS1                                             */
/* (C) Copyright IBM Corp. 1998,2003                              */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: This header file defines the functions in         */
/*              the service program QSRLIB01.                     */
/*                                                                */
/* Header Files Included: qsr.h                                   */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qsr_Key_Record_t                               */
/*                 Qsr_User_Space_Header_t                        */
/*                 Qsr_Change_Period_t                            */
/*                 Qsr_Force_Object_Conversion_t                  */
/*                 Qsr_Scan_Objects_t                             */
/*                                                                */
/* Function Prototype List: QsrSave                               */
/*                          QsrRestore                            */
/*                          QsrCreateMediaDefinition              */
/*                          QsrDeleteMediaDefinition              */
/*                          QsrRetrieveMediaDefinition            */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/* ---- ------------ ----- ------ -------- ---------------------- */
/* $A0= D9499200     4D30  970715 ROCH     New Include            */
/* $QF= D9563900     4D40  980422 ROCH     Media Definition APIs  */
/* $01= P3670098     4D40  980520 ROCH     Rename Qsr_Record_t &  */
/*                                         Qsr_User_Space_t       */
/* $T2= D98680.6     5D30  020804 ROCH     Add "Scan Objects" key */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef __qsrlib01_cleinc
#define __qsrlib01_cleinc

/******************************************************************/
/* Includes used                                                  */
/******************************************************************/
#include <qsr.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Type Definitions                                               */
/******************************************************************/

/******************************************************************/
/* Type Definition for the User Space Format.                     */
/****                                                         *****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef struct Qsr_Key_Record_t {
   int Key_Number;
   int Offset_To_Next_Record;
   char reserved[8];
} Qsr_Key_Record_t;                                        /* @01C*/

typedef struct Qsr_User_Space_Header_t {
   int Number_Records;
   int Offset_To_First_Record;
   char reserved[8];
} Qsr_User_Space_Header_t;                                 /* @01C*/

typedef struct Qsr_Change_Period_t {
   char Start_Date[10];
   char Start_Time[10];
   char End_Date[10];
   char End_Time[10];
} Qsr_Change_Period_t;

typedef struct Qsr_Force_Object_Conversion_t {
   char Force_Conversion;
   char Objects_to_Convert;
} Qsr_Force_Object_Conversion_t;

typedef struct Qsr_Scan_Objects_t {                        /* @T2A*/
   char Scan_During_Save;                                  /* @T2A*/
   char Save_Failed_Objects;                               /* @T2A*/
} Qsr_Scan_Objects_t;                                      /* @T2A*/


/******************************************************************/
/* function prototypes                                            */
/******************************************************************/
#ifdef __ILEC400__
  #pragma argument(QsrSave, OS, NOWIDEN)
  extern void QsrSave(void *, void *);

  #pragma argument(QsrRestore, OS, NOWIDEN)
  extern void QsrRestore(void *, void *);
#else
  extern "C" void QsrSave(void *, void *);
  extern "C" void QsrRestore(void *, void *);
#endif

/******************************************************************/
/* Prototypes for calling QsrCreateMediaDefinition API            */
/******************************************************************/
#ifdef __ILEC400__
  #pragma argument(QsrCreateMediaDefinition, NOWIDEN)
#else
  extern "C nowiden"
#endif
  void QsrCreateMediaDefinition(
                  void *,       /* Qualified Media Definition     */
                  void *,       /* Input Data                     */
                  int,          /* Length of Data                 */
                  char *,       /* Format name                    */
                  char *,       /* Public authority               */
                  char *,       /* Text description               */
                  char,         /* Replace existing *MEDDFN       */
                  void *);      /* Error code                 @QFA*/

/******************************************************************/
/* Prototypes for calling QsrRetrieveMediaDefinition API          */
/******************************************************************/
#ifdef __ILEC400__
  #pragma argument(QsrRetrieveMediaDefinition, NOWIDEN)
#else
  extern "C"
#endif
  void QsrRetrieveMediaDefinition(
                  void *,       /* Qualified Media Definition     */
                  void *,       /* Input Data                     */
                  int,          /* Length of Data                 */
                  char *,       /* Format name                    */
                  void *);      /* Error code                 @QFA*/

/******************************************************************/
/* Prototypes for calling QsrDeleteMediaDefinition API            */
/******************************************************************/
#ifdef __ILEC400__
  #pragma argument(QsrDeleteMediaDefinition, NOWIDEN)
#else
  extern "C"
#endif
  void QsrDeleteMediaDefinition(
                  void *,       /* Qualified Media Definition     */
                  void *);      /* Error code                 @QFA*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif  /* __qsrlib01_cleinc */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif

