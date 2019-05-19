/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGRTVCI                                   */
/*                                                                */
/* Descriptive Name: QLGRTVCI API.                                */
/*                                                                */
/* 5769-SS1  (C) Copyright IBM Corp. 2000,2000                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve Country Identifier API retrieves     */
/*              a list of country or region identifiers and their */
/*              descriptions.                                     */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGRTVCI                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= P3696709     4D50  990601 V2CIB153  New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGRTVCI_h
#define QLGRTVCI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGRTVCI API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGRTVCI,OS,nowiden)
#else
      extern "OS"
#endif
void QLGRTVCI (void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               void *);          /* Error code                    */


/******************************************************************/
/* Type Definition for the Country or region ID array format.     */
/******************************************************************/
typedef _Packed struct Qlg_CtryIdArray
{
  char Country_Id[2];             /* Country or region ID         */
  char Text[40];
} Qlg_CtryIdArray_t;

/******************************************************************/
/* Type Definition for the RTVC0100 format.                       */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/* NOTE: The difference between field positions in the structures */
/*       for the Country or region ID and Language ID is          */
/*       intentional.                                             */
/******************************************************************/
typedef _Packed struct Qlg_RTVC0100
{
  int  Bytes_Returned;
  int  Bytes_Available;
  int  CCSID_Of_Text;
  int  Offset;
  int  Number_Retrieved;
/*char Reserved;*/                      /* Varying length         */
/*Qlg_CtryIdArray_t Ctry_Id_Buffer[];*/ /* Varying length         */
} Qlg_RTVC0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
