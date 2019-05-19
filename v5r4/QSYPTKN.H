 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYPTKN                                    */
 /*                                                                */
 /* Descriptive Name: Profile Token API's.                         */
 /*                                                                */
 /* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1999, 2000.        */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QSYPTKN service program.     */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QsyChkPrfTknUser                      */
 /*			     QsyGenPrfTkn                          */
 /*			     QsyGenPrfTknE                         */
 /*                          QsyGenPrfTknFromPrfTkn                */
 /*                          QsyGetPrfTknTimeOut                   */
 /*                          QsyInvalidatePrfTkn                   */
 /*                          QsyRemoveAllPrfTkns                   */
 /*                          QsyRemoveAllPrfTknsForUser            */
 /*                          QsyRemovePrfTkn                       */
 /*                          QsySetToPrfTkn                        */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9759800     4D50  990310 ROCH:     New Include           */
 /* $A1= D9817000     5D10  991204 ROCH:     Add QsyChkPrfTknUser  */
 /* $A2= D9833100     5D10  000604 ROCH:     Add QsyGenPrfTknE     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSYPTKN_h
 #define QSYPTKN_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/

 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif
 /******************************************************************/
 /* Prototype for calling Check Profile Token User API.            */
 /******************************************************************/

 QBFC_EXTERN  void QsyChkPrfTknUser
           (int *,                   /* Result                     */
            unsigned char *,         /* Profile token              */
            void *);                 /* Error Code             @A1A*/

 /******************************************************************/
 /* Prototype for calling Generate Profile Token API.              */
 /******************************************************************/

 QBFC_EXTERN  void QsyGenPrfTkn
           (unsigned char *,         /* Profile Token              */
            char *,                  /* User profile name          */
            char *,                  /* User profile password      */
            int  *,                  /* Time out interval          */
            char *,                  /* Profile token type         */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Generate Profile Token Extended API.     */
 /******************************************************************/

 QBFC_EXTERN  void QsyGenPrfTknE
           (unsigned char *,         /* Profile Token              */
            char *,                  /* User profile name          */
            char *,                  /* User profile password      */
            int ,                    /* Length of password         */
            unsigned int ,           /* CCSID of password          */
            int ,                    /* Time out interval          */
            char ,                   /* Profile token type         */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Generate Profile Token From Profile Token*/
 /*                       API.                                     */
 /******************************************************************/

 QBFC_EXTERN  void QsyGenPrfTknFromPrfTkn
           (unsigned char *,         /* New profile token          */
            unsigned char *,         /* From profile token         */
            int  *,                  /* Time out interval          */
            char *,                  /* New profile token type     */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Get Profile Token Time Out API.          */
 /******************************************************************/

 QBFC_EXTERN  void QsyGetPrfTknTimeOut
           (int  *,                  /* Time out                   */
            unsigned char *,         /* Profile token              */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Invalidate Profile Token API.            */
 /******************************************************************/

 QBFC_EXTERN  void QsyInvalidatePrfTkn
           (unsigned char *,         /* Profile token              */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Remove All Profile Tokens API.           */
 /******************************************************************/

 QBFC_EXTERN  void QsyRemoveAllPrfTkns
           (void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Remove All Profile Tokens For User API.  */
 /******************************************************************/

 QBFC_EXTERN  void QsyRemoveAllPrfTknsForUser
           (char *,                  /* User Profile               */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Remove Profile Token API.                */
 /******************************************************************/

 QBFC_EXTERN  void QsyRemovePrfTkn
           (unsigned char *,         /* Profile token              */
            void *);                 /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Set To Profile Token API.                */
 /******************************************************************/

 QBFC_EXTERN  void QsySetToPrfTkn
           (unsigned char *,         /* Profile token              */
            void *);                 /* Error Code                 */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
