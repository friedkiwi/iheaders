/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSCUSAT                                      */
/*                                                                   */
/* Descriptive Name: Change User Space Attributes API.               */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Change User Space Attributes API changes the     */
/*              attributes of a user space object.                   */
/*                                                                   */
/* Header Files Included: h/qus                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qus_Vlen_Rec_3_t (pulled in from QUS include)     */
/*                                                                   */
/* Function Prototype List: QUSCUSAT.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940119 ROCH:     New Include              */
/* $A1= PSA60022     4D10  961204 ROCH:     Chg format name          */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUSCUSAT_h
 #define QUSCUSAT_h

 #include <qus.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QUSCRTUS API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSCUSAT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUSCUSAT (char *,           /* Returned Library name.          */
                void *,           /* Qualified User Space Name.      */
                void *,           /* Attributes to change.           */
                void *);          /* Error Code.                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
