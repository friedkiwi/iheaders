 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRTVTM                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve System Time Information API.        */
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
 /* Description: The Retrieve Time API will return the time-of-day */
 /*              clock as the Coordinated Universal Time (UTC) and */
 /*              will also return information on any current       */
 /*              time-of-day clock adjustments.                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_RTTM_Receiver_KeyInfoData_t                */
 /*                 Qec_RTTM0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QWCRTVTM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE   PGMR  CHANGE DESCRIPTION       */
 /* ---- ------------ ------ ------ ----- -------------------------*/
 /* $A0= D9914515     v5r3m0 030117 ROCH: New Include              */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRTVTM_h
 #define QWCRTVTM_h

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Type Definition for values in key value array as part of the   */
 /* receiver variable format for RTTM0100.                         */
 /******************************************************************/
 typedef _Packed struct Qwc_RTTM_Receiver_KeyInfoData
 {
       int  Length_Field_Info_Returned;
       int  Key_Field;
       char Type_Data;
       char Reserved[3];
       int  Length_Data;
       /*char Data[];*/          /* Varying length                 */
       /*char Reserved[];*/      /* Varying length                 */
 } Qwc_RTTM_Receiver_KeyInfoData_t;

 /******************************************************************/
 /* Type Definition for the RTTM0100 format for the receiver       */
 /* variable.                                                      */
 /******************************************************************/
 typedef _Packed struct Qwc_RTTM0100
 {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_Key_Fields;
       int  Number_Fields_Rtn;
       /*char Reserved_2[]; *//* Varying length */
       /*Qwc_RTTM_Receiver_KeyInfoData_t Entry[];*//* Varying length */
 } Qwc_RTTM0100_t;

 /******************************************************************/
 /*  Prototype for QWCRTVTM API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRTVTM,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QWCRTVTM(void *,           /* Receiver variable              */
               int  *,           /* Length of receiver variable    */
               char *,           /* Format name                    */
               int  *,           /* Number of fields to return     */
               void *,           /* Keys of fields to be returned  */
               void *);          /* Error Code                     */

 /******************************************************************/
 /* End include                                                    */
 /******************************************************************/
 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif

 #endif
