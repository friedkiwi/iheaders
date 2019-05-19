 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSCRTUQ                                   */
 /*                                                                */
 /* Descriptive Name: Create User Queue                            */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Create User Queue API creates a user queue in */
 /*              either user domain or the system domain.          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  None.                                         */
 /*                                                                */
 /* Function Prototype List: QUSCRTUQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSCRTUQ_h
 #define QUSCRTUQ_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSCRTUQ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSCRTUQ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSCRTUQ(void *,           /* Qualified user queue name      */
               char *,           /* Extended attribute             */
               char *,           /* Queue type                     */
               int,              /* Key length                     */
               int,              /* Maximum message size           */
               int,              /* Initial number of messages     */
               int,              /* Additional number of messages  */
               char *,           /* Public authority               */
               void *,           /* Text description               */
               ...);             /* Optional Parameter Group 1:
                                      char *   Replace
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Domain
                                      char *   Pointers
                                    Optional Parameter Group 3:
                                      int      Number of extensions
                                      char *   Reclaim storage     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
