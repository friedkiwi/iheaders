 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTQSMXC                                    */
 /*                                                                */
 /* Descriptive Name: Get Encoding Scheme.                         */
 /*                                                                */
 /* 5713-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Get CCSID with Maximal CS from Code page      */
 /*              API returns a CCSID and an Encoding scheme when   */
 /*              given a code page as input.  You can also         */
 /*              specify an input encoding scheme if you want.     */
 /*                                                                */
 /* Header Files Included: H/QTQSMXC                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTQSMXC                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91780       3D60  941010 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTQSMXC_h
 #define QTQSMXC_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 #ifdef __ILEC400__
      #pragma linkage (QTQSMXC,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QTQSMXC API.                             */
 /******************************************************************/
 void QTQSMXC (int *,            /* Code page in                   */
               int *,            /* Encoding Scheme in             */
               int *,            /* CCSID value out                */
               int *,            /* Encoding Scheme out            */
               void *);          /* FB                             */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
