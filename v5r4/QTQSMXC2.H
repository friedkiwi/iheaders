 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTQSMXC2                                   */
 /*                                                                */
 /* Descriptive Name: Get Encoding Scheme - Extended               */
 /*                                                                */
 /* 5713-SS1  (C) Copyright IBM Corp. 1997                         */
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
 /*              This API handles code pages in encoding scheme    */
 /*              2300 as well as those handled by the QTQSMXC API. */
 /*                                                                */
 /* Header Files Included: H/QTQSMXC2                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTQSMXC2                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3639172     4D10  970305 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTQSMXC2_h
 #define QTQSMXC2_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 #ifdef __ILEC400__
      #pragma linkage (QTQSMXC2,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QTQSMXC2 API.                            */
 /******************************************************************/
 void QTQSMXC2 (int *,           /* Code page in                   */
               int *,            /* Encoding Scheme in             */
               int *,            /* CCSID value out                */
               int *,            /* Encoding Scheme out            */
               void *);          /* FB                             */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
