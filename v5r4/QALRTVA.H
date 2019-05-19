/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QALRTVA                                       */
/*                                                                   */
/* Descriptive Name: Retrieve Alert                                  */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Retrieve Alert API, an alert API, retrieves an   */
/*              alert from the alert database.                       */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qal_ALRT0100_t                                    */
/*                 Qal_ALRT0200_t                                    */
/*                                                                   */
/* Function Prototype List: QALRTVA.                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940227 ROCH:     New Include              */
/* $A1=D98212.1      v5r1m0 991107 gchaney: Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QALRTVA_h
#define QALRTVA_h

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(P128)                                    /*@A1A*/
#endif                                                         /*@A1A*/

/*********************************************************************/
/* Prototype for API.                                                */
/*********************************************************************/
#ifdef __ILEC400__
   #pragma linkage (QALRTVA,OS,nowiden)
#else
   extern "OS"
#endif
void QALRTVA ( void *,              /* Receiver Variable             */
               int   ,              /* Length of Receiver Variable   */
               char *,              /* Format                        */
               char *,              /* Alert Log Identifier          */
               void *);             /* Error Code                    */

/*********************************************************************/
/* Type Definition for the Qal_ALRT0100 format.                      */
/*********************************************************************/
typedef _Packed struct Qal_ALRT0100 {
               int    Bytes_Available;
               int    Bytes_Returned;
               char   Timestamp[8];
               char   User_Assigned[10];
               char   Group_Assigned[10];
               char   Filter_U[20];
               char   Alert_Id[4];
               char   Problem_Id[10];
               char   Origin_System_Of_Problem[20];
               char   Alert_Holding_Flag;
               char   Local_Or_Received_Alert_Flag;
               char   Alert_Held_Flag;
               char   Delayed_Alert_Flag;
               char   Op_Generated_Alert_Flag;
               char   Analysis_Available_Flag;
               char   Alert_Type_Code_Point[2];
               char   Alert_Desc_Code_Point[4];
               char   First_Prob_Cause_Code_Point[4];
               char   Resource_Name[10];
               char   Resource_Type[3];
} Qal_ALRT0100_t;

/*********************************************************************/
/* Type Definition for the Qal_ALRT0200 format.                      */
/*********************************************************************/
typedef _Packed struct Qal_ALRT0200 {
               int    Bytes_Available;
               int    Bytes_Returned;
               char   Timestamp[8];
               char   User_Assigned[10];
               char   Group_Assigned[10];
               char   Filter_U[20];
               char   Alert_Major_Vector[512];
} Qal_ALRT0200_t;

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                         /*@A1A*/

#endif
