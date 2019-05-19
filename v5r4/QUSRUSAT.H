/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSRUSAT                                      */
/*                                                                   */
/* Descriptive Name: Retrieve User Space Attributes API.             */
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
/* Description: The Retrieve User Space Attributes API retrieves     */
/*              information about the current attributes and the     */
/*              current operational statistics of the user space.    */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qus_SPCA_0100_t                                   */
/*                                                                   */
/* Function Prototype List: QUSRUSAT.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940119 LUPA:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUSRUSAT_h
 #define QUSRUSAT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QUSRUSAT API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSRUSAT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUSRUSAT (void *,           /* Reciever Variable               */
                int,              /* Length of Reciever Variable     */
                char *,           /* Format Name                     */
                void *,           /* Qualified User Space Name       */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type Definition for the format.                                  */
 /********************************************************************/
 typedef _Packed struct Qus_SPCA_0100 {
      int    Bytes_Returned;
      int    Bytes_Available;
      int    Space_Size;
      char   Automatic_Extendability;
      char   Initial_Value;
      char   Library_Name[10];
 } Qus_SPCA_0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
