 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCLSCAN                                    */
 /*                                                                */
 /* Descriptive Name: Scan for String Pattern API                  */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: QCLSCAN API is used to scan a string of characters*/
 /*              to see if the string contains a pattern.          */
 /*                                                                */
 /* Header Files Included: h/decimal                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QCLSCAN                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940423 MOREY:    New Include           */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QCLSCAN_h
 #define QCLSCAN_h

 #include <decimal.h>

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/

 /******************************************************************/
 /* Prototype for calling Scan for String Pattern API QCLSCAN OPM  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QCLSCAN,OS,nowiden)
 #else
    extern "OS"
 #endif
    void QCLSCAN (void *,        /* Character string               */
                  _Decimal(3,0), /* Length of character string     */
                  _Decimal(3,0), /* Start position                 */
                  void *,        /* Character pattern              */
                  _Decimal(3,0), /* Length of character pattern    */
                  char *,        /* Translate                      */
                  char *,        /* Trim                           */
                  char *,        /* Wild card                      */
                  _Decimal(3,0) *); /* Character string result     */


 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

 #endif
