 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZSPTPR                                   */
 /*                                                                */
 /* Descriptive Name: Add/Remove Product Support.                  */
 /*                                                                */
 /* 5769-SS1                                                       */
 /* (C) Copyright IBM Corp. 1998                                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Add/Remove Product Support API add or         */
 /*              removes support to a list of product options.     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsz_Prd_Spt_Info_Ent_t                         */
 /*                                                                */
 /* Function Prototype List: QSZSPTPR                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97005       4D40  980708 ROCH:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSZSPTPR_h
#define QSZSPTPR_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QSZSPTPR             */
/********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSZSPTPR,OS,nowiden)
  #else
       extern "OS"
  #endif
void QSZSPTPR(void *,             /* Product information list       */
              int,                /* Length of product information  */
              void *,             /* Product information format name*/
              int,                /* Requested action               */
              void *);            /* Error code                     */

/********************************************************************/
/*  Structure for one entry in the product information parameter    */
/********************************************************************/

typedef /*_Packed*/ struct Qsz_Prd_Spt_Info_Ent {
               char Product_Id[7];
               char Release[6];
               char Product_Option[4];
               char Load_Id[10];
               char Library[10];
               char Registration_Type[2];
               char Registration_Value[14];
} Qsz_Prd_Spt_Info_Ent_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
