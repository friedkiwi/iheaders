 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYPSCSCA                                   */
 /*                                                                */
 /* Descriptive Name: Change System Collector Attributes API       */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Describe your function here.                      */
 /*                                                                */
 /* Header Files Included: H/OPM-API-name or Service-pgm-name      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QYPSCSCA.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D            4D40  980901 ROCH:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QYPSCSCA_h
#define  QYPSCSCA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*******************************************************************/
/*  Prototype for calling Change System Collecotr Attributes API   */
/*  (QYPSCSCA).                                                    */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QYPSCSCA,OS,nowiden)
#elif  __AIXxiCC__
     #pragma linkage (QYPSCSCA,OS,nowiden)
     extern "OS"
#else
     extern "OS"
#endif

void QYPSCSCA(char *,            /* Collector name                 */
              int,               /* Default collection interval    */
              char *,            /* Library                        */
              int,               /* Retention period               */
              int,               /* Cycle time                     */
              int,               /* Cycle interval                 */
              int,               /* Companion user job             */
              char *,            /* Default collector definition   */
              void *);           /* Error code                     */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
