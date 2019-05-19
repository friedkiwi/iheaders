/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QEZLSGNU                                  */
/*                                                               */
/* Descriptive Name: List Signed-On Users API.                   */
/*                                                               */
/* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,1994,2001     */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The List Signed-On Users API generates a list of */
/*              signed-on users and places the list in the       */
/*              specified user space.                            */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: Qez_LSGNU_Input_t                             */
/*                 Qez_SGNU0100_t                                */
/*                 Qez_SGNU0200_t                                */
/*                                                               */
/* Function Prototype List: QEZLSGNU                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940317 XZS0786:  New Include          */
/* $A1= D98212.2    v5r1m0 010300 gchaney: Teraspace stage 2     */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QEZLSGNU_h
#define QEZLSGNU_h

#if (__OS400_TGTVRM__>=510)                               /* @A1A*/
    #pragma datamodel(P128)                               /* @A1A*/
#endif                                                    /* @A1A*/

#ifdef __ILEC400__
    #pragma linkage (QEZLSGNU,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for calling Operational Assistant API QEZLSGNU     */
/*****************************************************************/
void QEZLSGNU (void *,           /* Qualified user space name    */
               char *,           /* Format name                  */
               char *,           /* User name                    */
               char *,           /* Display station name         */
               char *,           /* Include disconnected jobs and
                                    suspended group jobs         */
               char *,           /* Include signed-off users with
                                    output waiting to print      */
               void *);          /* Error code                   */

/*******************************************************************/
/* Structure for Input Parameter Section                           */
/*******************************************************************/
typedef _Packed struct Qez_LSGNU_Input
{
     char User_Space[10];
     char User_Space_Library[10];
     char Format_Name[8];
     char User_Name[10];
     char Display_Station[10];
     char Disconnect_Indic[10];
     char Signed_Off_Users[10];
} Qez_LSGNU_Input;

/*******************************************************************/
/* Structure for SGNU0100 format                                   */
/*******************************************************************/
typedef _Packed struct Qez_SGNU0100
{
     char Display_Station_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Activity[10];
     char Activity_Name[10];
     char Disconnect_Job[1];
     char Reserved[17];
} Qez_SGNU0100_t;

/*******************************************************************/
/* Structure for SGNU0200 format                                   */
/*******************************************************************/
typedef _Packed struct Qez_SGNU0200
{
     Qez_SGNU0100_t SGNU0100;
     char Display_Station_Description[50];
     char User_Description[50];
} Qez_SGNU0200_t;

#if (__OS400_TGTVRM__>=510)                               /* @A1A*/
    #pragma datamodel(pop)                                /* @A1A*/
#endif                                                    /* @A1A*/

#endif
