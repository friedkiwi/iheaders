/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGRLNGI                                   */
/*                                                                */
/* Descriptive Name: QLGRLNGI API.                                */
/*                                                                */
/* 5769-SS1  (C) Copyright IBM Corp. 1997,1997                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve Language Information API returns NLV */
/*              information based on product ID, product option,  */
/*              and known or calculated language ID.              */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qlg_LNGI0100_t                                 */
/*                 Qlg_LNGR0100_t                                 */
/*                 Qlg_LNGR0200_t                                 */
/*                                                                */
/* Function Prototype List: QLGRLNGI                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D9510301     4D10  961209 JRBeck    New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGRLNGI_h
#define QLGRLNGI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGRLNGI API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGRLNGI,OS,nowiden)
#else
      extern "OS"
#endif
void QLGRLNGI (void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               void *,           /* NLV selection information     */
               char *,           /* Format name                   */
               void *);          /* Error code                    */

/******************************************************************/
/* Type Definition for the LNGI0100 format.                       */
/******************************************************************/
typedef struct Qlg_LNGI0100
{
  char Product_ID[7];
  char Product_Option[4];
  char Language_ID[10];
} Qlg_LNGI0100_t;

/******************************************************************/
/* Type Definition for the LNGR0100 format.                       */
/******************************************************************/
typedef struct Qlg_LNGR0100
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Selected_NLV[4];
  char Primary_Language_NLV[4];
  char Language_Id[3];
} Qlg_LNGR0100_t;

/******************************************************************/
/* Type Definition for the LNGR0200 format.                       */
/******************************************************************/
typedef struct Qlg_LNGR0200
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Selected_NLV[4];
  char Primary_Language_NLV[4];
  int  AS400_EBCDIC_CCSID;
  int  PC_ASCII_CCSID;
  int  ISO_ASCII_CCSID;
  char Language_Id[3];
} Qlg_LNGR0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
