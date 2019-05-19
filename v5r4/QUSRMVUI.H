 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRMVUI                                   */
 /*                                                                */
 /* Descriptive Name: Remove User index Entries API                */
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
 /* Description: The Remove User Index Entries API removes one or  */
 /*              more user index entries that match the values     */
 /*              specified on the remove criteria parameter.       */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QUSRMVUI                              */
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

 #ifndef QUSRMVUI_h
 #define QUSRMVUI_h

 #include <qus.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSRMVUI API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSRMVUI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSRMVUI(int *,            /* Number of entries removed      */
               void *,           /* Entries removed                */
               int,              /* Length of entries removed      */
               void *,           /* Entry lengths and entry offsets*/
               int,              /* Len entry lengths and offsets  */
               char *,           /* Returned library name          */
               void *,           /* Qualified user index name      */
               char *,           /* Format                         */
               int,              /* Maximum number of entries      */
               int,              /* Remove type                    */
               void *,           /* Remove criteria                */
               int,              /* Length remove criteria         */
               int,              /* Remove criteria offset         */
               void *);          /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
