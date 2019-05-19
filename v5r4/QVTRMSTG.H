/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QVTRMSTG                                      */
/*                                                                   */
/* Descriptive Name: Retreive Main Storage                           */
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
/* Description: The Retrieve Main Storage (QVTRMSTG) API retrieves   */
/*              information from main storage from either the        */
/*              current system, or the space where main storage was  */
/*              dumped from a previous initial program load (IPL).   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:     Qvt_Rmstg_STGI0100_t                          */
/*                     Qvt_Rmstg_STGI0200_t                          */
/*                                                                   */
/* Function Prototype List: QVTRMSTG.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940412 JRU      :New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QVTRMSTG_h
 #define QVTRMSTG_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


 /******************************************************************/
 /*  Prototype for QVTRMSTG API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QVTRMSTG,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QVTRMSTG (void *,        /* Receiver variable                */
                int,           /* Length of receiver variable      */
                char *,        /* Format name                      */
                void *,        /* Main storage address             */
                char *,        /* Main storage image selector      */
                void *);       /* Error code                       */

 /******************************************************************/
 /*  Type Definition for the STGI0100 format.                      */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qvt_Rmstg_STRI0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
     /*char Main_Storage_Returned[];*/  /* Varying Length         */
    } Qvt_Rmstg_STGI0100_t;

 /******************************************************************/
 /*  Type Definition for the STGI0200 format.                      */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qvt_Rmstg_STGI0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Main_Storage_Length;
       int  Tag_Length;
     /*char Main_Storage_Returned[];*/      /* Varying Length      */
     /*char Tag_Information_Returned[];*/   /* Varying Length      */
    } Qvt_Rmstg_STGI0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
