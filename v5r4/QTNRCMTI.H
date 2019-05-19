/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTNRCMTI                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Commitment Information                 */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Retrieve Commitment Information API allows you   */
/*              to determine if commitment control is active within  */
/*              the activiation group for the program performing the */
/*              retrieve request.                                    */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qtn_CMTI0100_t.                                   */
/*                                                                   */
/* Function Prototype List: QTNRCMTI.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940410 LUPA:     New Include              */
/* $A1= D9410101     3D70  951017 BAC:      Add LA permitted, OKLO,  */
/*                                          and Accept vote rel.     */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QTNRCMTI_h
 #define QTNRCMTI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QTNRCMTI API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QTNRCMTI,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTNRCMTI (void *,           /* Receiver Variable               */
                int   ,           /* Receiver Variable length        */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Typedef for CMTI0100 Format                                      */
 /********************************************************************/
 typedef _Packed struct Qtn_CMTI0100 {
       int   Bytes_Returned;
       int   Bytes_Available;
       char  Status;
       char  Default_Lock_Lvl[10];
       char  Scope;
       char  Activation_Group_Status;
       char  Wait;
       char  Action;
       char  Vote_Read_Only;
       char  Action_If_ENDJOB;
       char  Def_Journal_Name[10];
       char  Def_Journal_Lib[10];
       char  Work_Unit_Id[39];
       char  Last_Agt_Permitted;
       char  Ok_to_Leave_Out;
       char  Accept_Vote_Reliable;
 } Qtn_CMTI0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
