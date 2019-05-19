
#ifndef QSYPHANDLE_H
 #define QSYPHANDLE_H
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYPHANDLE                                 */
 /*                                                                */
 /* Descriptive Name: Profile Handle API's.                        */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QSYPHANDLE service program.  */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QsyGetProfileHandle                   */
 /*                          QsySetToProfileHandle                 */
 /*                          QsyGetProfileHandleNoPwd              */
 /*                          QsyReleaseProfileHandle               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9833100     5D10  000510 ROCH:     New Include           */
 /* $A1= D9831100     5D10  000604 ROCH:     add CCSID and length  */
 /* $A2= D9936600     5D30  020604 ROCH:  QsyGetProfileHandleNoPwd */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/

 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /******************************************************************/
 /* Prototype for calling Get Profile Handle API                   */
 /******************************************************************/

 QBFC_EXTERN  void QsyGetProfileHandle
           (unsigned char *,         /* Profile Handle             */
            char *,                  /* User profile name          */
	    char *,                  /* User profile password      */
	    int ,                    /* Length of password         */
	    unsigned int ,           /* CCSID of password          */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Get Profile Handle No Password API       */
 /******************************************************************/

 QBFC_EXTERN  void QsyGetProfileHandleNoPwd
           (unsigned char *,         /* Profile Handle             */
            char *,                  /* User profile name          */
	    char *,                  /* Password special value     */
            void *);                 /* Error Code             @A2A*/


 /******************************************************************/
 /* Prototype for calling Set To Profile Handle API.               */
 /******************************************************************/

 QBFC_EXTERN  void QsySetToProfileHandle
           (unsigned char *,         /* Profile handle             */
            void *);                 /* Error Code                 */


 /******************************************************************/
 /* Prototype for calling Release Profile Handle API.              */
 /******************************************************************/

 QBFC_EXTERN  void QsyReleaseProfileHandle
           (unsigned char *,         /* Profile handle             */
            void *);                 /* Error Code                 */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
