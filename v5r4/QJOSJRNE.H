/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QJOSJRNE                                   */
 /*                                                                */
 /* Descriptive Name: Send Journal Entry.                          */
 /*                                                                */
 /* Description: The Send Journal Entry API writes a single journal*/
 /*              entry to a specific journal.                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QJOSJRNE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON: New Include           */
 /* $A1= D98212.6    v5r1m0 010400 gchaney : Teraspace stage 2     */
 /* $A2= D9977900    v5r4m0 040106 afogarty: Optl parms, new struct*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QJOSJRNE_h
 #define QJOSJRNE_h

 #if (__OS400_TGTVRM__>=510)                               /* @A1A*/
     #pragma datamodel(P128)                               /* @A1A*/
 #endif                                                    /* @A1A*/

 #ifdef __ILEC400__
      #pragma linkage (QJOSJRNE,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling the QJOSJRNE API.                        */
 /******************************************************************/
 void QJOSJRNE (void *,        /* Qualified Journal Name         */
                void *,          /* Journal Entry Information      */
                void *,          /* Entry Data                     */
                int,             /* Length of Entry Data           */
                void *,          /* Error Code                     */
                ...);            /* Optional parameters:
                                     Receiver variable
                                     Length of receiver variable
                                     Format of receiver variable
                                     Minimum length of entry data
                                          returned             @A2A*/

 /******************************************************************/
 /*  Typedef for SJNE0100 structure.                               */
 /******************************************************************/
 typedef _Packed struct Qjo_SJNE0100
 {
    long int    Bytes_Returned;                             /* @A2A*/
    long int    Bytes_Available;                            /* @A2A*/
    char        Seq_Number[20];                             /* @A2A*/
    char        Jrn_Rcv_Name[10];                           /* @A2A*/
    char        Jrn_Rcv_Lib_Name[10];                       /* @A2A*/
    char        Jrn_Rcv_ASP_Dev_Name[10];                   /* @A2A*/
 } Qjo_SJNE0100_t;

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif
