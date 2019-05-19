 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCMDEXC                                    */
 /*                                                                */
 /* Descriptive Name: Command Execution API                        */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: QCMDEXC API runs a single CL command or can be    */
 /*              used to run a command from within a high-level    */
 /*              language or CL program.                           */
 /*                                                                */
 /* Header Files Included: h/decimal                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QCMDEXC                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940410 MOREY:    New Include           */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QCMDEXC_h
 #define QCMDEXC_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/

 #include <decimal.h>

 /******************************************************************/
 /* Prototype for calling Command Execution API QCMDEXC OPM        */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QCMDEXC,OS,nowiden)
 #else
    extern "OS"
 #endif
    void QCMDEXC (void *,        /* Command string                 */
                  _Decimal(15, 5),/* Length of command string      */
                  ...);          /* Optional Parameter:
                                      IGC process control          */

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

 #endif
