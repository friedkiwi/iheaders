 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QC3PRNG                                    */
 /*                                                                */
 /* Descriptive Name: Pseudo-Random Number Generator APIs.         */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001, 2001                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* CSTATUS: OT                                                    */
 /*                                                                */
 /* WARNING: This include is a CUE.  This include provides an      */
 /*          interface that is externally documented to customers, */
 /*          or is function that any user could create.  Any       */
 /*          changes to this part MUST be upwardly compatible at   */
 /*          compile and run-time.  This interface may be          */
 /*          generated as in-line code in customer programs.       */
 /*                                                                */
 /* Description: APIs that are in the QC3PRNG service program.     */
 /*                                                                */
 /* Header Files Included: none                                    */
 /*                                                                */
 /* Macros List:           none                                    */
 /*                                                                */
 /* Structure List:        none                                    */
 /*                                                                */
 /* Function Prototype List: Qc3AddPRNGSeed                        */
 /*                          Qc3GenPRNs                            */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL  DATE   PGMR      CHANGE DESCRIPTION       */
 /* ---- -------- -----  ------ --------- -------------------------*/
 /* $A0= D97845   5D10   990601 ROCH      New Include              */
 /* $A1= P9921428 v5r1m0 000322 ROCH      Support terraspace       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef _QC3PRNG_h
 #define _QC3PRNG_h

#if (_OS400_TGTVRM_>=510)                                   /* @A1A*/
 #pragma datamodel(P128)                                    /* @A1A*/
#endif                                                      /* @A1A*/

 /******************************************************************/
 /* Prototype for calling Add Seed for PRNG API.                   */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (Qc3AddPRNGSeed,OS,nowiden)
    void Qc3AddPRNGSeed
                    (char *        , /* Seed data                  */
                     unsigned int  , /* Seed length                */
                     void *       ); /* Error Code                 */
 #else
    extern "C"
    void Qc3AddPRNGSeed
                    (char *        , /* Seed data                  */
                     unsigned int *, /* Seed length                */
                     void *       ); /* Error Code                 */
 #endif
 /******************************************************************/
 /* Prototype for calling Generate PRNs API.                       */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (Qc3GenPRNs,OS,nowiden)
    void Qc3GenPRNs
                    (char *        , /* PRN data                   */
                     unsigned int  , /* PRN length                 */
                     char          , /* PRN type                   */
                     char          , /* PRN parity                 */
                     void *       ); /* Error Code                 */
 #else
    extern "C"
    void Qc3GenPRNs
                    (char *        , /* PRN data                   */
                     unsigned int *, /* PRN length                 */
                     char *        , /* PRN type                   */
                     char *        , /* PRN parity                 */
                     void *       ); /* Error Code                 */
 #endif

 /******************************************************************/
 /* Valid Values for PRN type                                      */
 /******************************************************************/

 #define Qc3PRN_TYPE_NORMAL    '0'   /* Real PRNs                  */
 #define Qc3PRN_TYPE_TEST      '1'   /* Test PRNs                  */

 /******************************************************************/
 /* Valid Values for PRN parity                                    */
 /******************************************************************/

 #define Qc3PRN_NO_PARITY      '0'   /* No parity                  */
 #define Qc3PRN_ODD_PARITY     '1'   /* Odd parity                 */
 #define Qc3PRN_EVEN_PARITY    '2'   /* Even parity                */


#if (_OS400_TGTVRM_>=510)                                   /* @A1A*/
 #pragma datamodel(pop)                                     /* @A1A*/
#endif                                                      /* @A1A*/

#endif                                               /* _QC3PRNG_h */

