/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QZCARMVC                                     */
/*                                                                  */
/* Descriptive Name: Update Client Info API                         */
/*                                                                  */
/* 5763-SS1, 5716-SS1, 5769-SS1                                     */
/* (C) Copyright IBM Corp. 1997,1998                                */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/* Description: The Remove Client API is used to delete a Client    */
/*              from this AS/400 system. All information            */
/*              (connection, contact, hardware, and software)       */
/*              associated with the client is also deleted.         */
/*                                                                  */
/*              The "New Program Model(NPM)" interface would be     */
/*              to use the QzcaRemoveClient  ILE C function         */
/*              in the QSYS/QZCACLT service program.                */
/*                                                                  */
/* Header Files Included: None.                                     */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: None.                                            */
/*                                                                  */
/* Function Prototype List: QZCARMVC                                */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ --------- ------------------------*/
/* $A0= P3653044     4D20  970818 ALDO      New Include             */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*  Additional notes about the Change Activity                      */
/* End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS *********************************/

#ifndef QZCARMVC_h
#define QZCARMVC_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Add Client API QZCARMVC                   */
/********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QZCARMVC,OS,nowiden)
  #else
       extern "OS"
  #endif
void QZCARMVC( void *,                 /* Client ID                 */
               void *,                 /* Refresh Choice            */
               int  *,                 /* Time out                  */
               void *  );              /* Error Code                */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif  /* QZCARMVC_h */

