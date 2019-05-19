 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPQCRTPM                                   */
 /*                                                                */
 /* Descriptive Name: Create PDF Map API                           */
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
 /* Description: The Create PDF Mapping object API creates a PDF   */
 /*              map.                                              */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QPQCRTPM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0=D99558        v5r3m0.xpf 021014 JKLAR:  New part           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QPQCRTPM_h
#define QPQCRTPM_h

#pragma datamodel(P128)

/*********************************************************************/
/* Prototype for calling QPQCRTPM                                    */
/* Create PDF Map Object API                                         */
/*********************************************************************/
#ifdef __ILEC400__
#pragma linkage (QPQCRTPM,OS,nowiden)
#else
   extern "OS"
#endif

     void QPQCRTPM(void *,     /* Qualified PDF Map object name */
		   char *,       /* Public authority              */
		   char *,       /* Text description              */
		   void *);       /* Error code                    */
#pragma datamodel(pop)

#endif
