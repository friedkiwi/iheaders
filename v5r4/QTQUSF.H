/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTQUSF                                        */
/*                                                                   */
/* Descriptive Name: This header contains all of the prototypes,     */
/*                   constants, etc. need to interface to any API    */
/*                   functions contained in the QTQUSF *SRVPGM.      */
/*                   This service program contains those functions   */
/*                   which need to run as *INHERIT state and *USER   */
/*                   domain.                                         */
/*                                                                   */
/* 5716-SS1  (C) Copyright IBM Corp. 1996,1999                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description:      This file supports the following functions:     */
/*                                                                   */
/*               --> QtqValidateCCSID                                */
/*                                                                   */
/*                      ( Validate CCSID                        )    */
/*                      function accepts a CCSID value and attempts  */
/*                      to determine whether it is a CCSID supported */
/*                      on the AS/400.                               */
/*                                                                   */
/* Header Files Included:       None.                                */
/*                                                                   */
/* Macros List:                 None.                                */
/*                                                                   */
/* Structure List:              None.                                */
/*                                                                   */
/* Function Prototype List:     QtqValidateCCSID                     */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= P3609982     3D70  960207 STUCKLEP  New Include              */
/* $A1= P3696709     4D50  990603 V2CIB153  Update appearance        */
/* $A2= P9927609     5D10  000822 V2CIB100  Enhance documentaion and */
/*                                          remove qtqcvt.H include. */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QTQUSF_h
#define QTQUSF_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*********************************************************************/
/*                                                                   */
/*                      Prototype for Calling                        */
/*                          Validate CCSID                           */
/*                                                                   */
/*                         QtqValidateCCSID                          */
/*                                                                   */
/*  Inputs:                                                          */
/*          int      -> CCSID to validate and obtain encoding scheme.*/
/*                                                                   */
/*  Returns:                                                         */
/*     Success:      -> Encoding scheme of the CCSID.                */
/*                                                                   */
/*     Error:        -> -2   CCSID is out of range (1 - 65535)       */
/*                      -1   CCSID not supported                     */
/*                       0   CCSID is a Special-purpose CCSID        */
/*                                                                   */
/*********************************************************************/

#ifndef __ILEC400__
   extern "C"
#endif

   int QtqValidateCCSID( int );      /* Note: Pass in CCSID by VALUE */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* #ifndef QTQUSF_h */
