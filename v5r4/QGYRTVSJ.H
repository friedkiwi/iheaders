 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYRTVSJ                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Server Job Information              */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1996,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYRTVSJ API returns information about        */
 /*              auxiliary server jobs started for the current     */
 /*              job on the AS/400.                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_SJBI0100_t                                 */
 /*                 Qgy_Rtvsj_JobInfo_t                            */
 /*                                                                */
 /* Function Prototype List: QGYRTVSJ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960531 DPW       New Include           */
 /* $A1= D98212.5    v5r1m0 010300 gchaney : Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYRTVSJ_h
 #define QGYRTVSJ_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for call to QGYRTVSJ API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYRTVSJ,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYRTVSJ  (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Format name                       */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definition for the Job Information fields                  */
 /*******************************************************************/
 typedef _Packed struct Qgy_Rtvsj_JobInfo
 {
   char Job_Name[26];
   char Job_ID[10];
 }  Qgy_Rtvsj_JobInfo_t;


 /*******************************************************************/
 /* Type Definition for the SJBI0100 Format                         */
 /*   NOTE:  This type definition only defines the fixed length     */
 /*          portions of the format.   Any varying length field     */
 /*          must be defined by the user.                           */
 /*******************************************************************/
 typedef _Packed struct Qgy_SJBI0100
 {
    int                   Bytes_Returned;
    int                   Bytes_Available;
    int                   Num_Active_Aux_SJobs;
    int                   Num_Aux_SJobs_Allowed;
    int                   Aux_SJob_Info_Offset;
    int                   Job_Info_Record_Size;
  /*Qgy_Rtvsj_JobInfo_t   JobInfo[]*/     /* VARYING LENGTH */
 } Qgy_SJBI0100_t;

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif

