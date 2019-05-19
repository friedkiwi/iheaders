/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
#ifndef _QTOCCVTI_H
#define _QTOCCVTI_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/**********************************************************************/
/*                                                                    */
/* Header File Name:  H/QTOCCVTI                                      */
/*                                                                    */
/* Descriptive Name: Convert Interface ID API                         */
/*                                                                    */
/* Description: The Convert Interface ID (QTOCCVTI) API               */
/*              allows programs to retrieve the alias name associated */
/*              with an IP address or retrieve the IP address         */
/*              associated with an alias name.                        */
/*                                                                    */
/* Header Files Included: None.                                       */
/*                                                                    */
/* Macros List: None.                                                 */
/*                                                                    */
/* Structure List: Qtoc_CVTI_NCII0100_t.                              */
/*                 Qtoc_CVTI_NCII0200_t.                              */
/*                 Qtoc_CVTI_NCII0300_t.                              */
/*                 Qtoc_CVTI_Ifc_Req_t.                               */
/*                                                                    */
/* Function Prototype List: QTOCCVTI.                                 */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ----------------------    */
/* $A0= P9A93300     5D40  050401 ROCH:     New include               */
/* $A1= P9A94489     5D40  050413 ROCH:     Update structure names    */
/*                                          and function linkage.     */
/*                                                                    */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/**********************************************************************/

/********************************************************************/
/* Type Definition for qtocvti API output format NCII0100.          */
/********************************************************************/
typedef _Packed struct Qtoc_CVTI_NCII0100
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  char          Interface_Address[45];
  char          Reserved_1[3];
  char          Line_Description[10];
  char          Reserved_2[6];
} Qtoc_CVTI_NCII0100_t;

/********************************************************************/
/* Type Definition for qtocvti API output format NCII0200.          */
/********************************************************************/
typedef _Packed struct Qtoc_CVTI_NCII0200
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  char          Alias_Name[50];
  char          Reserved[6];
  unsigned long Alias_Name_CCSID;
} Qtoc_CVTI_NCII0200_t;

/********************************************************************/
/* Type Definition for qtocvti API output format NCII0300.          */
/********************************************************************/
typedef _Packed struct Qtoc_CVTI_NCII0300
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  char          Alias_Name[50];
  char          Reserved[6];
  unsigned long Alias_Name_CCSID;
} Qtoc_CVTI_NCII0300_t;

/********************************************************************/
/* Type Definition for Input Parameter - Interface Request          */
/********************************************************************/
typedef _Packed struct Qtoc_CVTI_Ifc_Req
{
  char  Interface_Address[45];
  char  Reserved_1[3];
  char  Line_Description[10];
  char  Reserved_2[6];
} Qtoc_CVTI_Ifc_Req_t;

/********************************************************************/
/* External Functional Prototype                                    */
/********************************************************************/

/* qtoccvti                                                         */
/* 1st arg - OUTPUT - pointer to receiver variable space            */
/* 2nd arg - INPUT  - size of receiver variable                     */
/* 3rd arg - INPUT  - pointer to API output format name             */
/* 4th arg - INPUT  - pointer to Alias name or IP address           */
/* 5th arg - INPUT  - pointer to Alias name CCSID                   */
/* 6th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma linkage (QTOCCVTI,OS,nowiden)
#else
  extern "OS"
#endif

void QTOCCVTI( char *,              /* receiver variable            */
               unsigned long *,     /* receiver variable length     */
               char *,              /* format name                  */
               char *,              /* interface request            */
               unsigned long *,     /* interface request CCSID      */
               char *);             /* error code                   */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
