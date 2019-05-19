/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGRTVCD                                   */
/*                                                                */
/* Descriptive Name: QLGRTVCD API.                                */
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
/* Description: The Retrieve CCSID Data API retrieves             */
/*              a list of one or more CCSIDs depending upon the   */
/*              caller-supplied request type & encoding scheme.   */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGRTVCD                              */
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

#ifndef QLGRTVCD_h
#define QLGRTVCD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGRTVCD API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGRTVCD,OS,nowiden)
#else
      extern "OS"
#endif
void QLGRTVCD (void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               int,              /* Request Type                  */
               int,              /* Encoding Scheme               */
               void *);          /* Error code                    */

/******************************************************************/
/* Type Definition for data returned by Retrieve CCSID Data API   */
/******************************************************************/
typedef _Packed struct Qlg_CCSIDBF
{
  int  Bytes_Returned;
  int  Bytes_Available;
/*int array[1];*/                       /* Varying length         */
} Qlg_CCSIDBF_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
