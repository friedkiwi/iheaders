 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFPADPNU                                   */
 /*                                                                */
 /* Descriptive Name: Process Network Server User                  */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000,2000                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Process Network Server User                   */
 /*              (QFPADPNU) API performs an operation on a user    */
 /*              or group that is enrolled to a server.            */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QFPADPNU                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D97705     5D10  990915 MEADEN  :   New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFPADPNU_h
 #define QFPADPNU_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Process Network Server User              */
 /* (QFPADPNU) API                                                 */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPADPNU,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QFPADPNU (char *,          /* Option                         */
                char *,          /* Profile type                   */
                char *,          /* AS/400 profile                 */
                char *,          /* Windows domain name            */
                int,             /* Length of Windows domain name  */
                char *,          /* Windows server name            */
                int,             /* Length of Windows server name  */
                void *);         /* Error code                     */

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif
