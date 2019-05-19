 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHCHGEM                                   */
 /*                                                                */
 /* Descriptive Name: Change Exception Message API                 */
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
 /* Description: The Change Exception Message API changes an       */
 /*              exception message on a call message queue.        */
 /*                                                                */
 /* Header Files Included: H/QMHCHGEM                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHCHGEM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHCHGEM_h
 #define QMHCHGEM_h

 #ifndef  __pointer_h
       #include <pointer.h>
 #endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHCHGEM             */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage(QMHCHGEM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHCHGEM (_INVPTR *,      /* Invocation pointer              */
                int,            /* Call stack counter              */
                void *,         /* Message key                     */
                char *,         /* Modification option             */
                char *,         /* Reply text                      */
                int,            /* Reply text length               */
                void *);        /* Error code                      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
