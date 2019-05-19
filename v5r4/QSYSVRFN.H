 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYSVRFN                                   */
 /*                                                                */
 /* Descriptive Name: Server authentication entry API's.           */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1997,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: API prototypes for adding, changing, removing,    */
 /*              and retrieving server authentication entries      */
 /*              for a user profile.                               */
 /*                                                                */
 /* Header Files Included: QSYRTVSE.H                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QsyAddServerEntry                     */
 /*                          QsyChangeServerEntry                  */
 /*                          QsyRemoveServerEntry                  */
 /*                          QsyRetrieveServerEntries              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9533500     4D20  970326 BUDNIK:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYSVRFN_h
 #define QSYSVRFN_h

 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <sys/types.h>
 #include <qsyrtvse.h>

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototypes for calling Server Authentication Entry API's       */
 /******************************************************************/
 QBFC_EXTERN void QsyAddServerEntry(
                char [10],       /* User profile name              */
                char *,          /* Server name                    */
                int,             /* Length of server name          */
                char *,          /* User ID                        */
                int,             /* Length of user ID              */
                char *,          /* Password                       */
                int,             /* Length of password             */
                void *);         /* Error code                     */

 QBFC_EXTERN void QsyChangeServerEntry(
                char [10],       /* User profile name              */
                char *,          /* Server name                    */
                int,             /* Length of server name          */
                char *,          /* User ID                        */
                int,             /* Length of user ID              */
                char *,          /* Password                       */
                int,             /* Length of password             */
                void *);         /* Error code                     */

 QBFC_EXTERN void QsyRemoveServerEntry(
                char [10],       /* User profile name              */
                char *,          /* Server name                    */
                int,             /* Length of server name          */
                void *);         /* Error code                     */

 QBFC_EXTERN void QsyRetrieveServerEntries(
               void *,           /* Receiver variable              */
               int,              /* Receiver variable length       */
               Qsy_RSVRE_Feedback_Info_T *,
                                 /* Feedback information           */
               char *,           /* Format name                    */
               char *,           /* Starting server name           */
               int,              /* Starting server name length    */
               char,             /* Starting server option         */
               char [10],        /* User profile name              */
               void *);          /* Error code                     */




#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

 #endif
