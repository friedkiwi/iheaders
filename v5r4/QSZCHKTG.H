 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZCHKTG                                   */
 /*                                                                */
 /* Descriptive Name: Check Target Release (TGTRLS) Value          */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Check Target Release (TGTRLS) Value API       */
 /*              checks that a valid TGTRLS value was specified.   */
 /*              If the TGTRLS value is a known OS/400 release,    */
 /*              this API will return the validated TGTRLS value.  */
 /*              If *CURRENT or *PRV was specified for the TGTRLS  */
 /*              value, this API will return the equivalent        */
 /*              release value.  This API will also determine from */
 /*              the list of supported OS/400 releases passed in   */
 /*              (parameter #2) which supported release is the     */
 /*              most recent release which is less than or equal   */
 /*              to the returned/validated TGTRLS value.           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSZCHKTG                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9473200     3D70  960417 VIG:      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSZCHKTG_h
 #define QSZCHKTG_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QSZCHKTG API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QSZCHKTG,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QSZCHKTG(char *,          /* Target release (TGTRLS) value   */
               void *,          /* List of supported OS releases   */
               int,             /* Number of releases in list      */
               char *,          /* Validated TGTRLS value          */
               char *,          /* Equivalent supported OS release */
               void *);         /* Error code                      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
