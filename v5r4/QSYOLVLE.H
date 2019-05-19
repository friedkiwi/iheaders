 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYOLVLE                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Validation List Entries.        */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List of Validation List Entries API      */
 /*              puts a list of validation list entries from a     */
 /*              validation list into a receiver variable.         */
 /*                                                                */
 /* Header Files Included: qgy.h                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_OLVLE_VLDE0100_T                           */
 /*                                                                */
 /* Function Prototype List: QSYOLVLE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9540100     4D20  970421 ROCH   :  New Include.          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYOLVLE_h
 #define QSYOLVLE_h

  #include <qgy.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #ifdef __ILEC400__
       #pragma linkage (QSYOLVLE,OS,nowiden)
  #else
       extern "OS"
  #endif

 /******************************************************************/
 /* Prototype for calling API QSYOLVLE                             */
 /******************************************************************/
 void QSYOLVLE (void *,          /* Receiver variable              */
                int   ,          /* Receiver variable length       */
                void *,          /* List information - ptr to      */
                                 /* Qgy_List_Info_T                */
                int   ,          /* Number of records to return    */
                void *,          /* Format name                    */
                void *,          /* Qualified validation list name */
                                 /* ptr to Qgy_Qual_Name_T         */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Record structure for VLDE0100 format                           */
 /******************************************************************/
 typedef struct Qsy_OLVLE_VLDE0100
    {
       int     Entry_Length;
       int     Displacement_to_EntryID;
       int     EntryID_Length;
       int     EntryID_CCSID;
       int     Displacement_to_Encr_Data;
       int     Encr_Data_Length;
       int     Encr_Data_CCSID;
       int     Displacement_to_Entry_Data;
       int     Entry_Data_Length;
       int     Entry_Data_CCSID;
     /*char    EntryID[];*/             /* Varying length         */
     /*char    Encr_Data[];*/           /* Varying length         */
     /*char    Entry_Data[];*/          /* Varying length         */
    } Qsy_OLVLE_VLDE0100_T;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
