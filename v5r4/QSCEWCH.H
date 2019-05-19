/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2004, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QSCEWCH                                    */
/*                                                                */
/* Descriptive Name: Include for End Watch API                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: End Watch (QSCEWCH) API ends the watch session    */
/*              that was started by a STRWCH (Start Watch) command*/
/*              or by the Start Watch (QSCSWCH) API.              */
/*                                                                */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List:                                                */
/*                                                                */
/* Function Prototype List: QSCEWCH                               */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D99930      v5r4m0 040802 STLOMELI  New part              */
/*                                                                */
/* End Change Activity.                                           */
/******************************************************************/

#ifndef QSCEWCH_h

#define QSCEWCH_h


#pragma datamodel(P128)

/******************************************************************/
/* Prototype for calling End Watch API QSCEWCH                    */
/******************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QSCEWCH,OS,nowiden)
#else
     extern "OS"
#endif

void QSCEWCH  (char *,          /* Session ID                     */
               void *);         /* Error code                     */


#pragma datamodel(pop)
#endif

