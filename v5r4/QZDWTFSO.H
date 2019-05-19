 /***   Start of Specifications   ************************************/
 /*                                                                  */
 /* Header File: H/QZDWTFSO                                          */
 /*                                                                  */
 /* Descriptive Name: Defines the prototype for the QZDWTFSO         */
 /*                   (Write File Server Object) API.                */
 /*                                                                  */
 /*                                                                  */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                      */
 /* All rights reserved.                                             */
 /* US Government Users Restricted Rights -                          */
 /* Use, duplication or disclosure restricted                        */
 /* by GSA ADP Schedule Contract with IBM Corp.                      */
 /*                                                                  */
 /* Licensed Materials-Property of IBM                               */
 /*                                                                  */
 /*                                                                  */
 /* Description: Contains the:   prototype for the QZDWTFSO module   */
 /*                                                                  */
 /* Header Files Included: None.                                     */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List: none.                                            */
 /*                                                                  */
 /* Function Prototype List:   QZDWTFSO                              */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* Flag Reason    Level  Date   Pgmr     Comments                   */
 /* ---- -------   ------ ------ -------- -------------------------- */
 /* $D0= D91823    3D60   941208 LAURIEW:  New include for V3R6.     */
 /* $P1= P3979716  3D60   950315 LAURIEW:  Change #ifdef statement.  */
 /* $P2= P3996801  3D60   950721 HAN:      Fix double extern spec.   */
 /* $P3= PSA71668  4P20   980220 XZS2025:  Make extern "C" be "OS".  */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*                                                                  */
 /***$$ End of Specifications   **************************************/

#ifndef _QZDWTFSO_H
#define _QZDWTFSO_H

#include <qzd.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifdef  __ILEC400__
   #pragma linkage(QZDWTFSO,OS,NOWIDEN)
   extern                                                     /* @P2A*/
#else
   extern "OS"                                                /* @P3C*/
#endif

/*********************************************************************/
/* Prototype for calling SNADS File Server Write (QZDWTFSO) API      */
/*********************************************************************/

void QZDWTFSO(                                                /* @P2C*/
                       void     *,      /* File server object handle */
                       long int *,      /* Operation requested       */
                       long int *,      /* FSO data length           */
                       void     *,      /* File server name structure*/
                       long int *,      /* Resume position           */
                       void     *,      /* Pointer to buffer area    */
                       long int *,      /* Bytes provided in buffer  */
                       void     *       /* API Returned Error        */
                     );

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif  /* _QZDWTFSO_H */
