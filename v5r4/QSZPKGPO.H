 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZPKGPO                                   */
 /*                                                                */
 /* Descriptive Name: Package Product Option.                      */
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
 /* Description: The Package Product Option API packages one or    */
 /*              more product loads for a specified product option.*/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsz_Prd_Opt_Inf_t                              */
 /*                                                                */
 /* Function Prototype List: QSZPKGPO                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSZPKGPO_h
#define QSZPKGPO_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QSZPKGPO             */
/********************************************************************/
#ifdef __ILEC400__
   #pragma linkage (QSZPKGPO, OS, nowiden)
#else
   extern "OS"
#endif
void QSZPKGPO(void *,             /* Product option information     */
              char *,             /* Repackage                      */
              char *,             /* Allow object change            */
              void *);            /* Error code                     */

/********************************************************************/
/*  Structure for the Product Option Information Format             */
/********************************************************************/
typedef _Packed struct Qsz_Prd_Opt_Inf {
         char Opt[4];
         char PID[7];
         char Rls_Lvl[6];
         char Lod_ID[8];
         char Reserved[10];
} Qsz_Prd_Opt_Inf_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
