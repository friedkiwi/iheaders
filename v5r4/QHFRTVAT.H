 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFRTVAT                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Directory Entry Attributes API      */
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
 /* Description: The Retrieve Directory Entry Attributes API       */
 /*              retrieves attribute information from a specified  */
 /*              directory entry for a directory or file.          */
 /*                                                                */
 /* Header Files Included: H/QHF                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.(Formats stored in QHF Include)           */
 /*                                                                */
 /* Function Prototype List: QHFRTVAT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QHFRTVAT_h
 #define QHFRTVAT_h

 /******************************************************************/
 /* Includes for structures used by API                            */
 /******************************************************************/
 #include <qhf.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QHFRTVAT API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFRTVAT,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFRTVAT(void *,           /* Path name                      */
               int,              /* Path name length               */
               void *,           /* Attribute selection table      */
               int,              /* Length of attr selection table */
               void *,           /* Attribute information table    */
               int,              /* Length of attribute info table */
               int *,            /* Length of data returned        */
               void *);          /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
