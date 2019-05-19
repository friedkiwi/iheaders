 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZCRTPL                                   */
 /*                                                                */
 /* Descriptive Name: Create Product Load.                         */
 /*                                                                */
 /* 5763-SS1, 5716-SS1, 5769-SS1                                   */
 /* (C) Copyright IBM Corp. 1994,1998                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Create Product Load API creates a product     */
 /*              load object.                                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsz_Lod_Inf_t                                  */
 /*                 Qsz_Add_Lib_t                                  */
 /*                 Qsz_Pre_Ext_t                                  */
 /*                 Qsz_Flr_Lst_t                                  */
 /*                 Qsz_DIRI0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QSZCRTPL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /* $B1= D95262.1     4D20  970603 ROCH      Directory parms       */
 /* $C1= D98751.3     v5r2m0.xpf 010916 ROCH Add software          */
 /*                                          agreements support.   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSZCRTPL_h
#define QSZCRTPL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QSZCRTPL             */
/********************************************************************/
#ifdef __ILEC400__
   #pragma linkage (QSZCRTPL, OS, nowiden)
#else
   extern "OS"
#endif
void QSZCRTPL (char *,            /* Product load name              */
               void *,            /* Product load information       */
               char *,            /* Secondary language lib name    */
               void *,            /* Principle library information  */
               void *,            /* Additional library list        */
               int,               /* Number of additional libraries */
               void *,            /* Preoperation exit programs     */
               int,               /* Number of preoccupation exit
                                     programs                       */
               void *,            /* Folder list                    */
               int,               /* Number of folders              */
               void *,            /* Text description               */
               char *,            /* Public authority               */
               void *,            /* Error code                     */
               ...);              /* Optional parameters        @B1C*/
                                  /* Qsz_DIRI0100                   */
                                  /* Number of directories (int)    */
                                  /* Format of directories (char 8) */

/********************************************************************/
/*  Structure for the Product Load Information Format               */
/********************************************************************/
typedef _Packed struct Qsz_Lod_Inf {
         char PID[7];
         char Rls_Lvl[6];
         char Opt[4];
         char Lod_Type[10];
         char Lod_ID[8];
         char Reg_ID_Type[10];
         char Reg_ID_Val[14];
         char Min_Tgt_Rls[10];
         char Reserved[14];
} Qsz_Lod_Inf_t;

/********************************************************************/
/*  Structure for the Principal Library Information Format          */
/********************************************************************/
typedef _Packed struct Qsz_Lib_Inf {
         char Dev_Lib[10];
         char Prim_Lib[10];
         char Post_Exit_Pgm[10];
} Qsz_Lib_Inf_t;

/********************************************************************/
/*  Structure for the Additional Library List Format                */
/********************************************************************/
typedef _Packed struct Qsz_Add_Lib {
         char Add_Dev_Lib[10];
         char Add_Prim_Lib[10];
         char Add_Post_Exit_Pgm[10];
} Qsz_Add_Lib_t;

/********************************************************************/
/*  Structure for the Preoperation Exit Programs Format             */
/********************************************************************/
typedef _Packed struct Qsz_Pre_Ext {
         char Pre_Ext_Pgm[10];
         char Dev_Lib[10];
} Qsz_Pre_Ext_t;

/********************************************************************/
/*  Structure for the Folder List Format                            */
/********************************************************************/
typedef _Packed struct Qsz_Flr_Lst {
         char Dev_Flr[63];
         char Prim_Flr[63];
} Qsz_Flr_Lst_t;

/********************************************************************/
/*  Structure for the Directory List Format (DIRI0100)              */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will      */
/*       have to be defined by the user.                            */
/********************************************************************/
typedef _Packed struct Qsz_DIRI0100 {
         int  Len_Full_Dir;
         int  Len_Home_Dir;
    /*   char Full_Dir_Path[]; */   /* Varying length               */
} Qsz_DIRI0100_t;                                            /* @B1A*/
/********************************************************************/
/*  Structure for the software agreements passed to QSZCRTPL        */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will      */
/*       have to be defined by the user.                            */
/********************************************************************/
typedef _Packed struct Qsz_Sft_Agr {
         int  Len_Soft_Agr;
    /*   char Software_Agr[]; */    /* Varying length               */
} Qsz_Sft_Agr_t;                                             /* @C1A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
