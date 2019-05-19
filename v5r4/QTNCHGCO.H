/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTNCHGCO                                      */
/*                                                                   */
/* Descriptive Name: Change Commitment Options                       */
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
/* Description: The Change Commitment Options API changes the current*/
/*              commitment options.                                  */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qtn_CMTOPTS_t.                                    */
/*                                                                   */
/* Function Prototype List: QTNCHGCO.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940524 BAC:      New Include              */
/* $A1= D94101.01    3D70  951016 BAC:      Add options LA permitted,*/
/*                                          OK to leave out, and     */
/*                                          Accept vote reliable.    */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QTNCHGCO_h
 #define QTNCHGCO_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QTNCHGCO API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QTNCHGCO,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTNCHGCO (void *,           /* Commitment options              */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Typedef for commitment options                                   */
 /********************************************************************/
 typedef _Packed struct Qtn_CMTOPTS {
       int   Bytes_Provided;
       char  Wait_For_Outcome;
       char  Action_If_Problems;
       char  Vote_Read_Only;
       char  Action_If_ENDJOB;
       char  Last_Agt_Permitted;
       char  OK_to_Leave_Out;
       char  Accept_Vote_Rel;
 } Qtn_CMTOPTS_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
