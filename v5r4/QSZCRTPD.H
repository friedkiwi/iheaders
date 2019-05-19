 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZCRTPD                                   */
 /*                                                                */
 /* Descriptive Name: Create Product Definition.                   */
 /*                                                                */
 /* 5763-SS1, 5716-SS1, 5769-SS1                                   */
 /* (C) Copyright IBM Corp. 1994,1997                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Create Product Definition API creates a       */
 /*              product definition object.                        */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     Qsz_Prd_Inf_t                                              */
 /*     Qsz_Prd_Opt_t                                              */
 /*     Qsz_Lng_Lod_t                                              */
 /*                                                                */
 /* Function Prototype List: QSZCRTPD                              */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH:     New Include           */
 /* $B0= D94912.5     4D10  970205 ROCH:     Release date century  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSZCRTPD_h
#define QSZCRTPD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QSZCRTPD             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QSZCRTPD, OS, nowiden)
#else
  extern "OS"
#endif
void QSZCRTPD (void *,            /* Qualified product definition
                                     name                           */
               void *,            /* Product definition information */
               void *,            /* Product option list            */
               int,               /* Number of product options      */
               void *,            /* Language load list             */
               int,               /* Number of language loads       */
               void *,            /* Text description               */
               char *,            /* Public authority               */
               void *);           /* Error code                     */


/********************************************************************/
/*  Structure for the Product Information Format                    */
/********************************************************************/
typedef _Packed struct Qsz_Prd_Inf {
         char PID[7];
         char Rls_Lvl[6];
         char Msg_File[10];
         char Fst_Cpyrt[10];
         char Cur_Cpyrt[10];
         char Rls_Date[6];
         char Alw_Mult_Rls[4];
         char Reg_ID_Type[10];
         char Reg_ID_Val[14];
         char Rls_Date_Century;
         char Reserved[28];
} Qsz_Prd_Inf_t;

/********************************************************************/
/*  Structure for the Product Option List                           */
/********************************************************************/
typedef _Packed struct Qsz_Prd_Opt {
         char Opt[4];
         char Msg_ID[7];
         char Alw_Dyn_Nam[10];
         char Cod_Lod[4];
         char Reserved[16];
} Qsz_Prd_Opt_t;

/********************************************************************/
/*  Structure for the Language Load List                            */
/********************************************************************/
typedef _Packed struct Qsz_Lng_Lod {
         char Lng_Lod[8];
         char Opt[4];
         char Reserved[8];
} Qsz_Lng_Lod_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
