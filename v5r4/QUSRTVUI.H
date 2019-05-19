 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRTVUI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve User index Entries API              */
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
 /* Description: The Retrieve User Index Entries API retrieves user*/
 /*              index entries that match the criteria specified   */
 /*              on the search criteria parameter.                 */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QUSRTVUI                              */
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

 #ifndef QUSRTVUI_h
 #define QUSRTVUI_h

 #include <qus.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSRTVUI API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSRTVUI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSRTVUI(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               void *,           /* Entry lengths and offsets      */
               int,              /* Len entry lengths and offsets  */
               int *,            /* Number entries returned        */
               char *,           /* Returned library name          */
               void *,           /* Qualified user index name      */
               char *,           /* Format                         */
               int,              /* Maximum number of entries      */
               int,              /* Search type                    */
               void *,           /* Search criteria                */
               int,              /* Length search criteria         */
               int,              /* Search criteria offset         */
               void *);          /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
