 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZAREQ                                    */
 /*                                                                */
 /* Descriptive Name: Request License                              */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Request License API requests the use of a     */
 /*              product that has been packaged for licensed use.  */
 /*                                                                */
 /* Header Files Included: H/QLZA                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None. (Structures included in QLZA)            */
 /*                                                                */
 /* Function Prototype List: QLZAREQ                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /* $A1= P3985168     3D60  950316 KPS       Change include linkage*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLZAREQ_h
#define QLZAREQ_h

/********************************************************************/
/*  Header Included                                                 */
/********************************************************************/
#include <qlza.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QLZAREQ              */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QLZAREQ, OS, nowiden)
#else
  extern "OS"
#endif
void QLZAREQ (void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License user                   */
              char *,             /* License user format name       */
              void *);            /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
