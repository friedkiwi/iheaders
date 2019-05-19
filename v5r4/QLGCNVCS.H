 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLGCNVCS                                   */
 /*                                                                */
 /* Descriptive Name: Convert Case API                             */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Convert Case API provides a case conversion   */
 /*              function that can be directly called by any       */
 /*              application program.                              */
 /*                                                                */
 /* Macros List: qlg.h                                             */
 /*                                                                */
 /* Structure List: None. (See QLG include )                       */
 /*                                                                */
 /* Function Prototype List: QLGCNVCS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862007     3D10  940410 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef    QLGCNVCS_h
  #define  QLGCNVCS_h

#ifndef    QLG_h
  #include <qlg.h>
#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/* Prototype                                                        */
/********************************************************************/

#ifdef __ILEC400__
  #pragma linkage(QLGCNVCS,OS,nowiden)
#else
  extern "OS"
#endif

void QLGCNVCS(char *,                   /* Request control block    */
              char *,                   /* Input data               */
              char *,                   /* Output data              */
              long,                     /* Length of data           */
              char *);                  /* Error code               */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif      /* #ifndef QLGCNVCS_h */

