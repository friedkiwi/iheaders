 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTVRDVT                                    */
 /*                                                                */
 /* Descriptive Name: Read from Virtual Terminal.                  */
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
 /* Description: The Read from Virtual Terminal (QTVRDVT) API      */
 /*              reads data from the virtual terminal into the     */
 /*              server program's data buffer.                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTVRDVT                               */
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

#ifndef QTVRDVT_h
 #define QTVRDVT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for calling Virtual Terminal API QTVRDVT            */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage(QTVRDVT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTVRDVT (void *,            /* Virtual terminal handle       */
               char *,            /* Read information              */
               void *,            /* Data buffer                   */
               int,               /* Number of bytes to read       */
               int *,             /* Number of bytes received      */
               void *);           /* Error code                    */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
