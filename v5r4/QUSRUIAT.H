 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRUIAT                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve User Index Attributes API           */
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
 /* Description: The Retrieve User Index Attributes API retrieves  */
 /*              information about the current attributes and the  */
 /*              current operational statistics of the user index. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qus_IDXA0100_t                                */
 /*                                                                */
 /* Function Prototype List: QUSRUIAT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSRUIAT_h
 #define QUSRUIAT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSRUIAT API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSRUIAT,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSRUIAT(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Qualified user index name      */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the IDXA0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_IDXA0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char User_Index_Name[10];
       char User_Index_Lib_Name[10];
       char Entry_Length_Attribute;
       char Immediate_Update;
       char Key_Insertion;
       char Optimized_Processing;
       char Reserved[4];
       int  Entry_Length;
       int  Max_Entry_Length;
       int  Key_Length;
       int  Number_Entries_Added;
       int  Number_Entries_Removed;
       int  Number_Retrieve_Operations;
    } Qus_IDXA0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
