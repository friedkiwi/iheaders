 /***   Start of Specifications   ************************************/
 /*                                                                  */
 /* Header File: H/QZDRDFSO                                          */
 /*                                                                  */
 /* Descriptive Name: Defines the prototype for the QZDRDFSO         */
 /*                   (Read File Server Object) API.                 */
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
 /* Description: Contains the:   prototype for the QZDRDFSO module   */
 /*                                                                  */
 /* Header Files Included: None.                                     */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List: none.                                            */
 /*                                                                  */
 /* Function Prototype List:   QZDRDFSO                              */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* Flag Reason    Level  Date   Pgmr     Comments                   */
 /* ---- -------   ------ ------ -------- -------------------------- */
 /* $D0= D91823    3D60   941208 LAURIEW:  New include for V3R6.     */
 /* $P3= P3626490  3Q60   960927 XZS2025:  "Resume Position" missing */
 /* $P4= PSA71668  4P20   980220 XZS2025:  Make extern "C" be "OS".  */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*                                                                  */
 /***$$ End of Specifications   **************************************/

#ifndef _QZDRDFSO_H
#define _QZDRDFSO_H

#include <qzd.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifdef  __ILEC400__
   #pragma linkage(QZDRDFSO,OS,NOWIDEN)
#else
   extern "OS"                                            /*     @P4C*/
#endif

/*********************************************************************/
/* Prototype for calling SNADS File Server Read (QZDRDFSO) API       */
/*********************************************************************/

void QZDRDFSO(                                            /* @P2C@P3C*/
                       void     *,      /* File server object handle */
                       long int *,      /* Operation requested       */
                       long int *,      /* FSO data length           */
                       void     *,      /* File server name structure*/
                       long int *,      /* Resume position       @P3A*/
                       void     *,      /* Pointer to buffer area    */
                       long int *,      /* Bytes provided in buffer  */
                       long int *,      /* Bytes available in buffer */
                       void     *       /* API Returned Error        */
                     );

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif  /* _QZDRDFSO_H */
