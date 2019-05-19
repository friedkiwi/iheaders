 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRGFN1                                   */
 /*                                                                */
 /* Descriptive Name: Function Registration API's.                 */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This include is a CUE.                       */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers,  */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Description: APIs that are in the QSYRGFN1 service program.    */
 /*                                                                */
 /* Header Files Included: h/qsyreg                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Formats stored in QSYREG Include)      */
 /*                                                                */
 /* Function Prototype List: QsyRegisterFunction                   */
 /*                          QsyDeregisterFunction                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9567200     4D30  971119 ROCH:     New Include           */
 /* $01= P3668257     4P30  980323 ROCH:     Move QsyRetrieve_     */
 /*                                          FunctionInformation   */
 /*                                          to QSYFNUSG.          */
 /* $02= P3668176     4D40  980408 ROCH:     Make this a CUE       */
 /*                                          (prolog change only)  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSYRGFN1_h
 #define QSYRGFN1_h

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qsyreg.h>

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
 /* Prototype for calling Register Function API.                   */
 /******************************************************************/

 QBFC_EXTERN  void QsyRegisterFunction
           (char[30],                /* Function ID                */
            Qsy_Func_Controls_T *,   /* Function Controls          */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Deregister Function API.                 */
 /******************************************************************/

 QBFC_EXTERN  void QsyDeregisterFunction
           (char[30],                /* Function ID                */
            void *);                 /* Error Code                 */



#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
