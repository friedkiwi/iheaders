/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2001, 2003                                */
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
/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QYPESVPG                                     */
/*                                                                  */
/* Descriptive Name: header file for APIs available in QYPESVPG     */
/*                   service program                                */
/*                                                                  */
/* 5722-SS1  (C) Copyright IBM Corp. 2001                           */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: This file contains declarations and definitions     */
/*              used by callers of APIs, available in QYPESVPG      */
/*              service program:                                    */
/*              Declarations for these APIs included:               */
/*              - start user-defined transaction                    */
/*                (qypeStartTransaction) API                        */
/*              - end user-defined transaction                      */
/*                (qypeEndTransaction) API                          */
/*              - log user-defined transaction                      */
/*                (qypeLogTransaction) API                          */
/*              - add trace point                                   */
/*                (qypeAddTracePoint) API                           */
/*              - retrieve PEX Information API                      */
/*                (qypeRetrievePexInfo)                             */
/*                                                                  */
/* Function Prototype List: qypeStartTransaction                    */
/*                          qypeEndTransaction                      */
/*                          qypeLogTransaction                      */
/*                          qypeAddTracePoint                       */
/*                          qypeRetrievePexInfo                     */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ --------- ----------------------  */
/*      D98668.8     5D20  010905 AP:       New file                */
/*      P9A01004     5D20  020131 denney:   Update data lengths.    */
/* $A1  D99317.14    5D30  030528 dfl:      Add qypeRetrievePexInfo */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*  Additional notes about the Change Activity                      */
/* End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS *********************************/


#ifndef  __QYPESVPG_H
  #define  __QYPESVPG_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include <qyperpex.h> /* Dfns used by Retrieve Pex Info API @A1A    */

/********************************************************************/
/*  Function prototypes for ILE APIs from QYPESVPG service program  */
/********************************************************************/

#ifdef __ILEC400__

     #pragma argument (qypeStartTransaction,OS,nowiden)
     #pragma argument (qypeEndTransaction,OS,nowiden)
     #pragma argument (qypeLogTransaction,OS,nowiden)
     #pragma argument (qypeAddTracePoint,OS,nowiden)
     #pragma argument (qypeRetrievePexInfo,OS,nowiden)  /*@A1A*/

#else
  extern "C" {
#endif


/********************************************************************/
/*  Start User-defined Transaction                                  */
/********************************************************************/

void qypeStartTransaction
          ( char          *,     /* application ID/transaction type */
                                 /*   (20 chars)                    */
            unsigned int  *,     /* unique transaction ID           */
            void          *,     /* trace data (upto 3976 bytes)    */
            unsigned int  *,     /* length of trace data            */
            char          *,     /* TOD time of transaction start   */
                                 /*   (8 chars - set by API)        */
            void          *      /* Error code                      */
          );


/********************************************************************/
/*  End User-defined Transaction                                    */
/********************************************************************/

void qypeEndTransaction
          ( char          *,     /* application ID/transaction type */
                                 /*   (20 chars)                    */
            unsigned int  *,     /* unique transaction ID           */
            void          *,     /* trace data (upto 3976 bytes)    */
            unsigned int  *,     /* length of trace data            */
            char          *,     /* TOD time of transaction start   */
                                 /*   (8 chars - set by             */
                                 /*    qypeStartTransaction API)    */
            unsigned long        /* Collection Services user data   */
                     long *,     /*   (0 to 16 8-byte counters)     */
            unsigned int  *,     /* Length of Collection Services   */
                                 /*   user data (in bytes)          */
            void          *      /* Error code                      */
          );


/********************************************************************/
/*  log user-defined transaction                                    */
/********************************************************************/

void qypeLogTransaction
          ( char          *,     /* application ID (20 chars)       */
            unsigned int  *,     /* unique transaction ID           */
            void          *,     /* trace data (upto 3976 bytes)    */
            unsigned int  *,     /* length of trace data            */
            void          *      /* Error code                      */
          );


/********************************************************************/
/*  Add Trace point                                                 */
/********************************************************************/

void qypeAddTracePoint
          ( char          *,     /* application ID                  */
            void          *,     /* OS event subtype                */
            void          *,     /* trace data (upto 3986 bytes)    */
            unsigned int  *,     /* length of trace data            */
            void          *      /* Error code                      */
          );

/*@A1A  Add Retrieve Pex Info */
/********************************************************************/
/*  Retrieve Pex Information                                        */
/********************************************************************/

void qypeRetrievePexInfo
          ( void          *,     /* Receiver variable               */
            unsigned int  *,     /* Length of receiver variable     */
            char          *,     /* Format name                     */
            char          *,     /* PEX session name                */
            void          *      /* Error code                      */
          );

#ifndef __ILEC400__
             }
#endif


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
