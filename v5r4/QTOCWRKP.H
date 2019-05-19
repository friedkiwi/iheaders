 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTOCWRKP                                   */
 /*                                                                */
 /* Descriptive Name: Start/End TCP/IP Point-to-Point IBM Global   */
 /*                   Network *DIAL profile.                       */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The IBM Global Network Dialer API can be used to  */
 /*              start or end a TCP/IP Point-to-Point connection   */
 /*              profile created for use with the IBM Global       */
 /*              Network.                                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTOCWRKP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P9906265     4D50  990929 ROCH:     New Include.          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTOCWRKP_h
 #define QTOCWRKP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Constants                                                      */
 /******************************************************************/

 #ifndef _QTOC_FUNCTION_START
 #define _QTOC_FUNCTION_START    "*START    "
 #endif

 #ifndef _QTOC_FUNCTION_END
 #define _QTOC_FUNCTION_END      "*END      "
 #endif

 /******************************************************************/
 /* Prototype for calling IGN Dialer API QTOCWRKP                  */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QTOCWRKP,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QTOCWRKP (char *,          /* Connection profile             */
                char *,          /* Function                       */
                void *);         /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
