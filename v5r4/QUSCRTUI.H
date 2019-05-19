 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSCRTUI                                   */
 /*                                                                */
 /* Descriptive Name: Create User Index API                        */
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
 /* Description: The Create User Index API creates a user index    */
 /*              in either the user domain or the system domain.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QUSCRTUI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSCRTUI_h
 #define QUSCRTUI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSCRTUI API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSCRTUI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSCRTUI(void *,           /* Qualified user index name      */
               char *,           /* Extended atrribute             */
               char *,           /* Entry length attribute         */
               int,              /* Entry length                   */
               char *,           /* Key insertion                  */
               int,              /* Key length                     */
               char *,           /* Immediate update               */
               char *,           /* Optimization                   */
               char *,           /* Public authority               */
               void *,           /* Text description               */
               ...);             /* Optional Parameter Group 1:
                                      char *   Replace
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Domain
                                    Optional Parameter Group 3:
                                      char *   Usage tracking      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
