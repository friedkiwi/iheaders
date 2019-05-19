 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/qydortv1                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Digital Signatures API.             */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 1999,2000.                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: APIs that are in the qydortv1 service program.    */
 /*                                                                */
 /* Header Files Included: h/qusec                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97545       5D10  991012 ROCH:     New Include           */
 /* $01= P9921457     5D10  000410 ROCH:     Updates               */
 /* $02= P9926280     5D10  000606 ROCH:     Updates               */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef qydortv1_h
 #define qydortv1_h

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
#include "qusec.h"           /* Error code structure         */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /******************************************************************/
 /* Prototype for calling the Retrieve Digital Signatures API.     */
 /******************************************************************/

 QBFC_EXTERN
     void  QydoRetrieveDigitalSignatures(
                      char *,      /* path name to object             */
                      int  *,      /* length of path name             */
                      char *,      /* format name of object           */
                      char *,      /* Receiver variable               */
                      int  *,      /* Length of Receiver Certificates */
                      char *,      /* Format of Receiver              */
	              void *);     /* error code                      */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
