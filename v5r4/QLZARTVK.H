 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZARTVK                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve License Key Information             */
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
 /* Description: Retrieve License Key Information (QLZARTVK) API   */
 /*                                                                */
 /* Header Files Included: H/QLZA                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     Qlza_LICV0100_t                                            */
 /*     Qlza_Lic_Key_Rec_t                                         */
 /*     Qlza_LICS0100_t                                            */
 /*                                                                */
 /* Function Prototype List: QLZARTVK                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940509 ROCH      New Include           */
 /* $A1= P3985168     3D60  950316 KPS       Change include linkage*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLZARTVK_h
#define QLZARTVK_h

/********************************************************************/
/*  Common Includes Used by API                                     */
/********************************************************************/
#include <qlza.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QLZARTV              */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QLZARTVK, OS, NOWIDEN)
#else
  extern "OS"
#endif
void QLZARTVK (void *,            /* Receiver variable              */
               int,               /* Length of receiver variable    */
               char *,            /* Format name for rec variable   */
               void *,            /* Product identification         */
               char *,            /* Produc id format name          */
               void *,            /* System                         */
               char *,            /* System format name             */
               void *);           /* Error code                     */

/********************************************************************/
/*  Structure for LICV0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qlza_Lic_Key_Rec
   {
                 char PID[7];
                 char License_Term[6];
                 char Feature[4];
                 char Serial_Number[8];
                 char Processor_Group[4];
                 char Reserved_1[3];
                 int  Usage_Limit;
                 char Expiration_Date[7];
                 char Vendor_Data[8];
                 char License_Key[18];
                 char Reserved_2[15];
               /*char Reserved_3[];*/   /* Varying length           */
    }Qlza_Lic_Key_Rec_t;

typedef _Packed struct Qlza_LICV0100
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 int  Offset_Lic_Key_Rec;
                 int  Nbr_Lic_Key_Rec;
                 int  Len_Lic_Key_Rec;
               /*char Reserved[];*/     /* Varying length           */
               /*Qlza_Lic_Key_Rec_t  Lic_Key_Records[];*/ /* Varying
                                                             length */
    }Qlza_LICV0100_t;

/********************************************************************/
/*  Structure for LICS0100 format                                   */
/********************************************************************/

typedef _Packed struct Qlza_LICS0100
   {
                 char Serial_Number[8];
    }Qlza_LICS0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
