/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QNMRRGF                                       */
/*                                                                   */
/* Descriptive Name: Retrieve Registered Filters                     */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Retrieve Registered Filters API returns all      */
/*              filters registered for a filter type.                */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qnm_RGFN0100_t                                    */
/*                 Qnm_RGFN0100_Entry_t                              */
/*                                                                   */
/* Function Prototype List: QNMRRGF.                                 */
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

#ifndef QNMRRGF_h
 #define QNMRRGF_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QNMRRGF API                                       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QNMRRGF,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QNMRRGF (void *,            /* Receiver Variable               */
               int   ,            /* Length of Receiver Variable     */
               char *,            /* Filter Type                     */
               char *,            /* Format                          */
               void *);           /* Error Code                      */

 /********************************************************************/
 /* Type definition for Qnm_RGFN0100_Entry.                          */
 /********************************************************************/
 typedef _Packed struct Qnm_RGFN0100_Entry {
              char  Filter_Name[10];
              char  Filter_Library[10];
              char  Filter_Type[10];
 } Qnm_RGFN0100_Entry_t;

 /********************************************************************/
 /* Type definition for Qnm_RGFN0100.                                */
 /********************************************************************/
 typedef _Packed struct Qnm_RGFN0100 {
              int   Bytes_Returned;
              int   Bytes_Available;
              int   Returned_Register_Filters;
              int   Total_Register_Filters;
              int   Element_Length;
            /*Qnm_RGFN0100_Entry_t Array[Returned_Register_Filters]; */
                                             /* varying length field */
 } Qnm_RGFN0100_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
