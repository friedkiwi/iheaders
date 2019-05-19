 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCADJTM                                   */
 /*                                                                */
 /* Descriptive Name: Adjust Time API.                             */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2003                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Adjust Time API will adjust the time-of-day   */
 /*              clock to increase or decrease the current time by */
 /*              a maximum value of two hours.                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_ADJT0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QWCADJTM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE   PGMR  CHANGE DESCRIPTION       */
 /* ---- ------------ -----  ------ ----- -------------------------*/
 /* $A0= D9914515     v5r3m0 030117 ROCH: New Include              */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* Additional notes about the Change Activity                     */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCADJTM_h
 #define QWCADJTM_h

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Type Definition for the ADJT0100 format for the adjustment var.*/
 /******************************************************************/
 typedef _Packed struct Qwc_ADJT0100
 {
     unsigned long long Time_Adjustment_Interval;
     char Time_Adjustment_Direction;
 } Qwc_ADJT0100_t;


 /******************************************************************/
 /*  Prototype for QWCADJTM API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCADJTM,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QWCADJTM(void *,           /* Time adjustment variable       */
               int  *,           /* Length of time adjustment var  */
               char *,           /* Time adjustment format name    */
               void *);          /* Error Code                     */

 /******************************************************************/
 /* End include                                                    */
 /******************************************************************/
 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif

 #endif
