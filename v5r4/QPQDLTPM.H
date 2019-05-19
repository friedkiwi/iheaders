 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPQDLTPM                                   */
 /*                                                                */
 /* Descriptive Name: Remove PDF Map Entry API                     */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002, 2003                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Delete PDF Mapping object API deletes a PDF   */
 /*              map entry.                                        */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QPQDLTPM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0=D99558   v5r3m0.xpf 021014 JKLAR:  New part                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QPQDLTPM_h
#define QPQDLTPM_h

#pragma datamodel(P128)

/*********************************************************************/
/* Prototype for calling QPQDLTPM                                    */
/* Remove PDF Map Entry API                                          */
/*********************************************************************/
#ifdef __ILEC400__
#pragma linkage (QPQDLTPM,OS,nowiden)
#else
   extern "OS"
#endif
     void QPQDLTPM(void *,        /* Qualified PDF Map object name */
		   void *);         /* Error code                    */

#pragma datamodel(pop)

#endif
