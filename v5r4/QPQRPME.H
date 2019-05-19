 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPQRPME                                    */
 /*                                                                */
 /* Descriptive Name: Remove PDF Map Entry API                     */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002, 2003                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Remove PDF Map Entry API removes an entry     */
 /*              from the specified PDF map.                       */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpq_Entry_Offset_And_Length_t                  */
 /*                 Qpq_Entry_Lengths_and_Entry_Offsets_t          */
 /*                 Qpq_Remove_Criteria_Format_t                   */
 /*                                                                */
 /* Function Prototype List: QPQRMVPM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0=D99558   v5r3m0.xpf 021206 JKLAR:  New part                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QPQRPME_H
#define QPQRPME_H

#pragma datamodel(P128)

/*********************************************************************/
/* Prototypes for calling QPQRMVPM                                   */
/* Remove PDF Map Entry API                                          */
/*********************************************************************/
#ifdef __ILEC400__
#pragma linkage (QPQRMVPM,OS,nowiden)
#else
   extern "OS"
#endif

     void QPQRPME (int *,     /* Number of entries removed */
			  void *,      /* Entries removed  */
			  int,         /* Length of entries removed */
			  void *,      /* Entry lengths and entry offsets  */
			  int,         /* Length of entry lengths and offsets */
			  void *,      /* Qualified PDF Mapping object name */
			  int,         /* Maximum number of entries */
			  void *,      /* Remove criteria */
			  void *);     /* Error code                       */

/*******************************************************************/
/* Definitions for Format for Entry Lengths and Entry Offsets      */
/*******************************************************************/
   typedef _Packed struct Qpq_Entry_Offset_And_Length {
       int Entry_Offset;
       int Entry_Length;
   } Qpq_Entry_Offset_And_Length_t;

   typedef _Packed struct Qpq_Entry_Lengths_Offsets {
       int Bytes_Returned;
       int Bytes_Available;
       /*Qpq_Entry_Offset_And_Length_t Qpq_Entry_Offset_And_Lengths[];  */
   }Qpq_Entry_Lengths_Offsets_t;

/*******************************************************************/
/* Definition Remove Criteria Format                               */
/*******************************************************************/
   typedef _Packed struct Qpq_Remove_Criteria_Format {
       unsigned int  Sequence_Number;
       char Output_Queue_Name[10];
       char Output_Queue_Library_Name[10];
       char Spooled_File_Name[10];
       char Job_Name[10];
       char User_Name[10];
       char User_Data[10];
       char Form_Type[10];
       char Mail_Tag[250];
   }Qpq_Remove_Criteria_Format_t;

#pragma datamodel(pop)

#endif
