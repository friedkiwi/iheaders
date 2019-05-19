/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QNMRGFN                                       */
/*                                                                   */
/* Descriptive Name: Register Filter                                 */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Register Filter Notifications API registers a    */
/*              filter to send notifications for a specific event    */
/*              to a data queue.                                     */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:  Qnm_Notification_Filter_t                        */
/*                  Qnm_RGFN_Alert_Filter_t                          */
/*                  Qnm_RGFN_Problem_Log_Filter_t                    */
/*                                                                   */
/* Function Prototype List: QNMRGFN.                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940327 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QNMRGFN_h
#define QNMRGFN_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QNMRGFN  API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QNMRGFN,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QNMRGFN  (void *,           /* Qualified Filter Name           */
                char *,           /* Filter Type                     */
                void *);          /* Error Code                      */

 /******************************************************************/
 /* Type Definition for the Qnm_Notification_Filter format.        */
 /*        NOTE:  The last variable in this record has a variable  */
 /*               length and is therefor not included here.        */
 /******************************************************************/
 typedef _Packed struct Qnm_Notification_Filter {
               char    Notification_Name[10];
               char    Function_Code[2];
               char    Format[8];
               char    Filter_Lib_Name[10];
               char    Filter_Name[10];
               char    Group_Name[10];
               char    Timestamp[8];
               char    Reserved[22];
             /*char    Notification_Data[];*/ /*Varying length data*/
 }Qnm_Notification_Filter_t;

 /******************************************************************/
 /* Format for the Qnm_RGFN_Alert_Filter.                          */
 /******************************************************************/
 typedef _Packed struct Qnm_RGFN_Alert_Filter {
               char    Alert_Major_Vector[512];
 } Qnm_RGFN_Alert_Filter_t;

 /******************************************************************/
 /* Format for the Qnm_RGFN_Problem_Log_Filter.                    */
 /******************************************************************/
 typedef _Packed struct Qnm_RGFN_Problem_Log_Filter {
               char    Problem_Id[30];
               char    Last_Event;
               char    Last_Event_Timestamp[8];
 } Qnm_RGFN_Problem_Log_Filter_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
