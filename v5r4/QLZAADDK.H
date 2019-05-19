 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZAADDK                                   */
 /*                                                                */
 /* Descriptive Name: Add License Key Information                  */
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
 /* Description: Add License Key Information (QLZAADDK) API        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     Qlza_LICA0100_t                                            */
 /*     Qlza_Lic_Key_Info_t                                        */
 /*                                                                */
 /* Function Prototype List: QLZAADDK                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940509 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLZAADDK_h
#define QLZAADDK_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QLZAADDK             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QLZAADDK, OS, NOWIDEN)
#else
  extern "OS"
#endif
void QLZAADDK (void *,            /* License key information        */
               char *,            /* License key info format name   */
               int  *,            /* Number of license key records
                                     added                          */
               void *);           /* Error code                     */

/********************************************************************/
/*  Structure for LICA0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qlza_Lic_Key_Info
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
    }Qlza_Lic_Key_Info_t;

typedef _Packed struct Qlza_LICA0100
   {
                 int  Struct_Size;
                 int  Offset_Lic_Key_Rec;
                 int  Nbr_Lic_Key_Rec;
                 int  Size_Lic_Key_Rec;
                 int  Reserved;
               /*Qlza_Lic_Key_Info_t  Lic_Key_Records[];*/ /* Varying
                                                              length*/
    }Qlza_LICA0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
