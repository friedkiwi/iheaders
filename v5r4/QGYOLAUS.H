 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYOLAUS                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Authorized Users.               */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999                         */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List of Authorized Users API provides    */
 /*              information about the authorized users of the     */
 /*              system.                                           */
 /*                                                                */
 /* Header Files Included: H/QGY                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: QSYRAUTU CLEINC contains the structures for    */
 /*                 the returned formats.                          */
 /*                                                                */
 /* Function Prototype List: QGYOLAUS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3692966     4D50  990331 ROCH:     New Include           */
 /* $A1= D9797800     5D10  990930 ROCH:     Add optional parameter*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYOLAUS_h
 #define QGYOLAUS_h


  #include <qgy.h>

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling API QGYOLAUS                             */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QGYOLAUS,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QGYOLAUS (void *,          /* Receiver variable              */
               int *,            /* Receiver variable length       */
               Qgy_List_Info_T *,/* List information               */
               int *,            /* Number of records to return    */
               char *,           /* Format name                    */
               char *,           /* Selection criteria             */
               char *,           /* Group profile name             */
               void *,           /* Error code                     */
               ...);             /* Optional Parameter:            */
                                 /*   char *   Profile name        */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
