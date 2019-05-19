 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSADDUI                                   */
 /*                                                                */
 /* Descriptive Name: Add User Index Entries API                   */
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
 /* Description: The Add User Index Entries API inserts one or more*/
 /*              entries into the user index by the insert type.   */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qus_Addui_Entry_t                             */
 /*                                                                */
 /* Function Prototype List: QUSADDUI                              */
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

 #ifndef QUSADDUI_h
 #define QUSADDUI_h

 #include <qus.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSADDUI API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSADDUI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSADDUI(char *,           /* Returned library name          */
               int *,            /* Number of entries added        */
               void *,           /* Qualified user index name      */
               int,              /* Insert type                    */
               void *,           /* Index entries                  */
               int,              /* Length of index entries        */
               void *,           /* Entry lengths and offsets      */
               int,              /* Number of entries              */
               void *);          /* Error code                     */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
