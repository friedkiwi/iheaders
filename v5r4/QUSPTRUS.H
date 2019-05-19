/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSPTRUS                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Pointer to User Space API.             */
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
/* Description: The Retrieve Pointer to User Space API retrieves a   */
/*              pointer to the contents of a user-domain user space. */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUSPTRUS.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL  DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ -----  ------ --------- ----------------------- */
/* $A0=              3D10   940119 ROCH:     New Include             */
/* $B1=              v5r1m0 991209 ROCH:     Teraspace data model    */
/* $B2=              v5r2m0 010604 ROCH:     Change for 8-byte       */
/*                                           teraspace pointers.     */
/* $B3=              v5r2m0 010708 ROCH:     Old compiler fix.       */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUSPTRUS_h
 #define QUSPTRUS_h
#if (__OS400_TGTVRM__>=510)                                   /* @B1A*/
#pragma datamodel(P128)                                       /* @B1A*/
#endif                                                        /* @B1A*/

 /********************************************************************/
 /*  Prototype for QUSPTRUS API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSPTRUS,OS,nowiden)
    void QUSPTRUS (void *,        /* Qualified User Space Name   @B2A*/
  #if (__OS400_TGTVRM__>=510)                                 /* @B3A*/
                   void **,       /* Pointer to User Space       @B2A*/
  #else                                                       /* @B3A*/
                   void *,        /* Pointer to User Space       @B3A*/
  #endif                                                      /* @B3A*/
                   ...);          /* Optional Parameter:
                                       Error code                @B2A*/
 #else
    extern "OS"
    void QUSPTRUS (void *,        /* Qualified User Space Name   @B2M*/
                   void *,        /* Pointer to User Space       @B2M*/
                   ...);          /* Optional Parameter:
                                       Error code                @B2M*/
 #endif

#if (__OS400_TGTVRM__>=510)                                   /* @B1A*/
#pragma datamodel(pop)                                        /* @B1A*/
#endif                                                        /* @B1A*/
#endif
