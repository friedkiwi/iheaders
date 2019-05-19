 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZADDLI                                   */
 /*                                                                */
 /* Descriptive Name: Add Product License Information              */
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
 /* Description: The Add Product License Information API adds      */
 /*              license information to a product or a feature     */
 /*              of a product.                                     */
 /*                                                                */
 /* Header Files Included: H/QLZA                                  */
 /*                                                                */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     Qlza_LICI0100_t                                            */
 /*                                                                */
 /* Function Prototype List: QLZADDLI                              */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /* $A1= P3985168     3D60  950316 KPS       Change include linkage*/
 /* $A2= P3606491     3D60  951206 KPS       Fix warning message   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLZADDLI_h
#define QLZADDLI_h

/********************************************************************/
/*  Header Included                                                 */
/********************************************************************/
#include <qlza.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QLZADDLI             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QLZADDLI,OS,nowiden)
#else
  extern "OS"
#endif
void QLZADDLI(void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License information            */
              char *,             /* License info format name       */
              void *,             /* Error code                     */
              ...);               /* Optional Parameters:           */
                                  /*    void *   Product license    */
                                  /*             information handle */

/********************************************************************/
/*  Structure for LICI0100 format                                   */
/********************************************************************/

typedef _Packed struct Qlza_LICI0100
   {
                 char Usg_Type[2];
                 char Compliance[2];
                 int  Dft_Usg_Lmt;
                 char Lic_Trm;
                 char Alw_Lic_Rel;
                 char Vnd_Passwd[10];
                 int  Grc_Prd;
                 char Alw_Dft;
    }Qlza_LICI0100_t;

/********************************************************************/
/*  Structure for product license information handle                */
/********************************************************************/

typedef _Packed struct Qlza_Prod_Handle
   {
                 char Prod_Handle[16];
    }Qlza_Prod_Handle_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif

