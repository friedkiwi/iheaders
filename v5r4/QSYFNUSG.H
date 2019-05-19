 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYFNUSG                                   */
 /*                                                                */
 /* Descriptive Name: Function Usage API's.                        */
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
 /* Description: APIs that are in the QSYFNUSG service program.    */
 /*                                                                */
 /* Header Files Included: h/qsyreg                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Formats stored in QSYREG Include)      */
 /*                                                                */
 /* Function Prototype List: QsyChangeFunctionUsageInfo            */
 /*                          QsyRetrieveFunctionUsageInfo          */
 /*                          QsyRetrieveUserFunctionInfo           */
 /*                          QsyCheckUserFunctionUsage             */
 /*                          QsyRetrieveFunctionInformation        */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9567200     4D30  971119 ROCH:     New Include           */
 /* $01= P3668257     4P30  980323 ROCH:     Add QsyRetrieve-      */
 /*                                          FunctionInformation.  */
 /* $02= P3668176     4D40  980408 ROCH:     Make this a CUE       */
 /*                                          (prolog change only)  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSYFNUSG_h
 #define QSYFNUSG_h

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
 /* Prototype for calling Change Function Usage Information API.   */
 /******************************************************************/

 QBFC_EXTERN void QsyChangeFunctionUsageInfo
           (char[30],                /* Function ID                */
            char[8],                 /* Format Name                */
            void *,                  /* Function Usage Information */
                                     /* - ptr to                   */
                                     /*   Qsy_CFUI0100_T           */
            int  *,                  /* Length of Function Usage   */
                                     /*   Information              */
            void *);                 /* Error Code                 */


 /******************************************************************/
 /* Prototype for calling Retrieve Function Usage Information API. */
 /******************************************************************/

 QBFC_EXTERN void QsyRetrieveFunctionUsageInfo
           (void *,                  /* Receiver Variable - ptr to */
                                     /*   Qsy_FNUI0100_T           */
            int  *,                  /* Receiver Variable Length   */
            char[8],                 /* Format Name                */
            char[30],                /* Function ID                */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Retrieve User Function Information API.  */
 /******************************************************************/

 QBFC_EXTERN void QsyRetrieveUserFunctionInfo
           (char[20],                /* Continuation Handle        */
            void *,                  /* Receiver Variable - ptr to */
                                     /*   Qsy_UFNI0100_T  or       */
                                     /*   Qsy_UFNI0200_T           */
            int  *,                  /* Receiver Variable Length   */
            char[8],                 /* Format Name                */
            char[10],                /* User Profile Name          */
            Qsy_Selcrtr_T *,         /* Selection criteria         */
            int  *,                  /* Desired CCSID              */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Check User Function Usage API.           */
 /******************************************************************/

 QBFC_EXTERN void QsyCheckUserFunctionUsage
           (char *,                  /* Usage indicator            */
            char[30],                /* Function ID                */
            char[10],                /* User Profile Name          */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Retrieve Function Information API.       */
 /******************************************************************/

 QBFC_EXTERN void QsyRetrieveFunctionInformation
           (char[20],                /* Continuation handle        */
            void *,                  /* Receiver Variable - ptr to */
                                     /*   Qsy_FCNI0100_T           */
            int  *,                  /* Receiver Variable Length   */
            char[8],                 /* Format Name                */
            Qsy_Selcrtr_T *,         /* Selection criteria         */
            int  *,                  /* Desired CCSID              */
            void *);                 /* Error Code                 */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
