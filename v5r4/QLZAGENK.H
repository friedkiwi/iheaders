 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZAGENK                                   */
 /*                                                                */
 /* Descriptive Name: Generate License Key                         */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Generate License Key API generates a license  */
 /*              key to enable users to access a product or a      */
 /*              feature of a product.                             */
 /*                                                                */
 /* Header Files Included: H/QLZA                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     Qlza_LICC0100_t                                            */
 /*     Qlza_LICK0100_t                                            */
 /*                                                                */
 /* Function Prototype List: QLZAGENK                              */
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

#ifndef QLZAGENK_h
#define QLZAGENK_h

/********************************************************************/
/*  Common Includes Used by API                                     */
/********************************************************************/
#include <qlza.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QLZAGENK             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QLZAGENK, OS, NOWIDEN)
#else
  extern "OS"
#endif
void QLZAGENK(void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License key input              */
              char *,             /* License key input format name  */
              void *,             /* License key output             */
              int,                /* Length of license key output   */
              char *,             /* License key output format name */
              void *);            /* Error code                     */

/********************************************************************/
/*  Structure for LICC0100 format                                   */
/********************************************************************/

typedef _Packed struct Qlza_LICC0100
   {
                 int  Struct_Size;
                 int  Usg_Limit;
                 char Expiration_Date[7];
                 char Vnd_Passwd[10];
                 char Serial_Number[8];
                 char Processor_Group[4];
                 char Vnd_Data[8];
    }Qlza_LICC0100_t;

/********************************************************************/
/*  Structure for LICK0100 format                                   */
/********************************************************************/

typedef _Packed struct Qlza_LICK0100
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 char License_Key[18];
                 char Gen_Date_Time[13];
    }Qlza_LICK0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
