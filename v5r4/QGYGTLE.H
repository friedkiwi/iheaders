 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYGTLE                                    */
 /*                                                                */
 /* Descriptive Name: Get List Entries                             */
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
 /* Description: The QGYGTLE API allows reqests to get entries     */
 /*              from previously opened lists on the AS/400.       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_Gtle_ListInfo_t                            */
 /*                                                                */
 /* Function Prototype List: QGYGTLE                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960531 DPW       New Include           */
 /* $A1= D98212.5    v5r1m0 010300 gchaney:  Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYGTLE_h
 #define QGYGTLE_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for call to QGYGTLE API                              */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYGTLE,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYGTLE   (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Request handle                    */
                   void *,     /* List information                  */
                   int   ,     /* Number of records to return       */
                   int   ,     /* Starting record                   */
                   void *      /* Error code                        */
                  );

 /******************************************************************/
 /* Type Definition for the List Information Parameter             */
 /******************************************************************/
 typedef _Packed struct Qgy_Gtle_ListInfo
 {
   int  Total_Records;
   int  Records_Returned;
   char Request_Handle[4];
   int  Record_Length;
   char Info_Complete;
   char Date_Time_Completed[13];
   char List_Status_Indicator;
   char Reserved_1;
   int  Returned_Info_Length;
   int  First_Buffer_Record;
   char Reserved_2[40];
 } Qgy_Gtle_ListInfo_t;

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif

