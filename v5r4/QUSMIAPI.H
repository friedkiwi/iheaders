 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSMIAPI                                   */
 /*                                                                */
 /* Descriptive Name: MI APIs.                                     */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QUSMIAPI service program.    */
 /*              QusMaterializeContext - Materialize Context       */
 /*              QusMaterializeJournalPortAttr - Materialize       */
 /*                 Journal Port Attributes                        */
 /*              QusMaterializeJournalSpaceAttr - Materialize      */
 /*                 Journal Space Attributes                       */
 /*              The structures for these includes can be found in */
 /*              QSYSINC/MIH in members MATCTX, MATJPAT, MATJSAT.  */
 /*                                                                */
 /* Header Files Included: <milib.h>                               */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List: Qus_MATCTX_Ctx_t                               */
 /*                 Qus_MATCTX_Opt_t                               */
 /*                 Qus_MATCTX_GenObjID_t                          */
 /*                 Qus_Materialize_Template_t                     */
 /*                                                                */
 /* Function Prototype List:  QusMaterializeContext                */
 /*                           QusMaterializeJournalPortAttr        */
 /*                           QusMaterializeJournalSpaceAttr       */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9187900     3D60  941111 MBAILEY:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QUSMIAPI_h
 #define QUSMIAPI_h

 #include <milib.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Materialize Context API in QUSMIAPI      */
 /* service program.                                               */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QusMaterializeContext,OS,nowiden)
 #else
    extern "C"
 #endif
    void QusMaterializeContext(_SPCPTR,     /* Receiver            */
                               _SYSPTR,     /* Context             */
                               void *);     /* Materialize Options */

 /******************************************************************/
 /* Prototype for calling Materialize Journal Port Attribute API   */
 /* in QUSMIAPI service program.                                   */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QusMaterializeJournalPortAttr,OS,nowiden)
 #else
    extern "C"
 #endif
    void QusMaterializeJournalPortAttr(_SPCPTR,     /* Receiver    */
                                       _OPENPTR);   /* Journal Port*/

 /******************************************************************/
 /* Prototype for calling Materialize Journal Space Attribute API  */
 /* in QUSMIAPI service program.                                   */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QusMaterializeJournalSpaceAttr,OS,nowiden)
 #else
    extern "C"
 #endif
    void QusMaterializeJournalSpaceAttr(_SPCPTR,    /* Receiver   */
                                        _SYSPTR);   /* Journal Spc*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
