 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QANESERV                                   */
 /*                                                                */
 /* Descriptive Name: Save to Application API and Restore from     */
 /*                   Application API definitions for *SRVPGM      */
 /*                   QaneServ.                                    */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Prototypes for call API QaneSava and QaneRsta.    */
 /*                                                                */
 /* Header Files Included: QANE.H                                  */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype: QaneSava                                   */
 /*                     QaneRsta                                   */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3664597     4D30  980218 KLG       New Include           */
 /* $A1= D98212.1     v5r1m0 991107 gchaney: Teraspace stage 2     */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QANESERV_h
#define QANESERV_h

#if (__OS400_TGTVRM__>=510)                                   /*A1A*/
    #pragma datamodel(P128)                                   /*A1A*/
#endif                                                        /*A1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QANESERV             */
/********************************************************************/
#ifdef __cplusplus
  extern "C" {
  #pragma info(none)             /* Turn off diagnostic suboptions  */
#endif


/******************************************************************/
/*  Header Included.                                              */
/******************************************************************/
#ifndef QANE_h
 #include <h/qane.h>
#endif

#ifdef __cplusplus
void QaneSava(void *,             /* qualified user space name      */
              char *,             /* user space format name         */
              char *,             /* status format name             */
              void *,             /* status information             */
              int  *,             /* length of status information   */
              void *);            /* Error code                     */

void QaneRsta(void *,             /* qualified user space name      */
              char *,             /* user space format name         */
              char *,             /* status format name             */
              void *,             /* status information             */
              int  *,             /* length of status information   */
              void *);            /* Error code                     */
#else
  #pragma argument (QaneSava, OS, nowiden)
void QaneSava(void *,             /* qualified user space name      */
              char *,             /* user space format name         */
              char *,             /* status format name             */
              void *,             /* status information             */
              int  *,             /* length of status information   */
              void *);            /* Error code                     */

  #pragma argument (QaneRsta, OS, nowiden)
void QaneRsta(void *,             /* qualified user space name      */
              char *,             /* user space format name         */
              char *,             /* status format name             */
              void *,             /* status information             */
              int  *,             /* length of status information   */
              void *);            /* Error code                     */
#endif
#ifdef __cplusplus
  #pragma info(restore)        /* Turn on diagnostic suboptions     */
 }
#endif

#if (__OS400_TGTVRM__>=510)                                    /*A1A*/
    #pragma datamodel(pop)                                     /*A1A*/
#endif                                                         /*A1A*/

#endif                           /* #ifndef QANESERV_h             */
