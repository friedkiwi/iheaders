 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRGAP1                                   */
 /*                                                                */
 /* Descriptive Name: Application Registration API's.              */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QSYRGAP1 service program.    */
 /*                                                                */
 /* Header Files Included: h/qsy                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Formats stored in QSY include)         */
 /*                                                                */
 /* Function Prototype List: QsyRegisterAppForCertUse              */
 /*                          QsyDeregisterAppForCertUse            */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9714500     4D40  980819 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSYRGAP1_h
 #define QSYRGAP1_h

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qsy.h>

 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Register Application For Cert Use API.   */
 /******************************************************************/

 QBFC_EXTERN  void QsyRegisterAppForCertUse
           (char *,                  /* Application ID             */
            int  *,                  /* Application ID Len         */
            Qsy_App_Controls_T *,    /* Application Controls       */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Deregister Application For Cert Use API. */
 /******************************************************************/

 QBFC_EXTERN  void QsyDeregisterAppForCertUse
           (char *,                  /* Application ID             */
            int  *,                  /* Application ID Len         */
            void *);                 /* Error Code                 */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
