 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTVCLOVT                                   */
 /*                                                                */
 /* Descriptive Name: Close Virtual Terminal Path.                 */
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
 /* Description: The Close Virtual Terminal Path (QTVCLOVT) API    */
 /*              closes one or all open virtual terminal paths.    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTVCLOVT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 LUPA:     New Include           */
 /* $B1= D98212.3     5D10  000103 JSTEVENS  TERASPACE HEADER      */
 /*                                          FILES - STAGE 3       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QTVCLOVT_h
 #define QTVCLOVT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for calling Virtual Terminal API QTVCLOVT           */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QTVCLOVT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTVCLOVT (void *,           /* Virtual terminal handle       */
                void *);          /* Error code                    */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
