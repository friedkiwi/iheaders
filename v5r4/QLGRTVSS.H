/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGRTVSS                                   */
/*                                                                */
/* Descriptive Name: QLGRTVSS API.                                */
/*                                                                */
/* 5716-SS1  (C) Copyright IBM Corp. 1994,1998                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve Sort Sequence API returns a          */
/*              sort sequence table based on the required input   */
/*              parameters.                                       */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qlg_RSST0100_t                                 */
/*                                                                */
/* Function Prototype List: QLGRTVSS                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940414 BRINKER   New Include           */
/* $A1= P3651850     4D20  970711 PLG       Add type RSST0200     */
/*                                                                */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGRTVSS_h
#define QLGRTVSS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGRTVSS API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGRTVSS,OS,nowiden)
#else
      extern "OS"
#endif
void QLGRTVSS (void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               void *,           /* Qualified table name          */
               char *,           /* Language identifier requested */
               int,              /* CCSID of returned table       */
               char *,           /* Format name                   */
               void *);          /* Error code                    */

/******************************************************************/
/* Type Definition for the RTVSS0100 format.                      */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef _Packed struct Qlg_RSST0100
{
  int  Bytes_Available;
  int  Bytes_Returned;
  int  Job_CCSID;
  int  CCSID_Of_Table;
  char Substitutions;
  char Weight;
  char Table_Name[10];
  char Table_Library[10];
  char Job_Table_Name[10];
  char Job_Table_Library[10];
  char Job_Language_Id[3];
  char Job_Country_Id[2];         /* Job country or region ID     */
  char Returned_Table[256];
} Qlg_RSST0100_t;

/******************************************************************/
/* Type Definition for the RTVSS0200 format.                      */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef _Packed struct Qlg_RSST0200
{
  int  Bytes_Available;
  int  Bytes_Returned;
  int  Job_CCSID;
  int  CCSID_Of_Table;
  char Substitutions;
  char Weight;
  char Table_Name[10];
  char Table_Library[10];
  char Job_Table_Name[10];
  char Job_Table_Library[10];
  char Job_Language_Id[3];
  char Job_Country_Id[2];            /* Job country or region ID */
  char Table_type;
  int  Table_returned_offset;
  int  Size_of_returned_table;
  /*char Returned_Table[];*/           /* Variable length field */
} Qlg_RSST0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
