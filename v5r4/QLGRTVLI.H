/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGRTVLI                                   */
/*                                                                */
/* Descriptive Name: QLGRTVLI API.                                */
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
/* Description: The Retrieve Language Identifier API retrieves    */
/*              a list of language identifiers and their          */
/*              descriptions.                                     */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGRTVLI                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940413 BRINKER   New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGRTVLI_h
#define QLGRTVLI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGRTVLI API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGRTVLI,OS,nowiden)
#else
      extern "OS"
#endif
void QLGRTVLI (void *,           /* Reciever variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               void *);          /* Error code                    */


/******************************************************************/
/* Type Definition for the LangId Array format.                   */
/******************************************************************/
typedef _Packed struct Qlg_LangIdArray
{
  char Language_Id[3];
  char Text[40];
} Qlg_LangIdArray_t;

/******************************************************************/
/* Type Definition for the RTVL0100 format.                       */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef _Packed struct Qlg_RTVL0100
{
  int  Bytes_Available;
  int  Bytes_Returned;
  int  Number_Retrieved;
  int  CCSID_Of_Text;
  int  Offset;
/*char Reserved;*/                      /* Varying length         */
/*char Lang_Id_Buffer[];*/              /* Varying length         */
} Qlg_RTVL0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
