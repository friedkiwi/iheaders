 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZCRTFX                                   */
 /*                                                                */
 /* Descriptive Name: Create Program Temporary Fix                 */
 /*                                                                */
 /* 5763-SS1, 5769-SS1, 5722-SS1                                   */
 /* (C) Copyright IBM Corp. 1994,2000                              */
 /*                                                                */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Create Program Temporary Fix API creates a    */
 /*              PTF save file and optionally creates cover        */
 /*              letters in the general purpose library (QGPL).    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpz_PTF_Inf_t                                  */
 /*                 Qpz_Ext_Pgm_t                                  */
 /*                 Qpz_Cvr_Ltr_t                                  */
 /*                 Qpz_Dir_Obj_t                                  */
 /*                 Qpz_DIR_t                                      */
 /*                 Qpz_PTFC0100_t                                 */
 /*                 Qpz_Job_Precnd_t                               */
 /*                 Qpz_Obj_Precnd_t                               */
 /*                                                                */
 /* Function Prototype List: QPZCRTFX                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /* $A1= D91827       3D60  940919 ROCH      added new field       */
 /* $B1= D95243       4d20  970424 ROCH      added new field       */
 /* $C1= D97974       5D10  991221 ROCH      added addt'l info parm*/
 /* $C2= D98212       5D10  991229 ROCH      added datamodel pragma*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPZCRTFX_h
#define QPZCRTFX_h
#if (__OS400_TGTVRM__>=510)  /* @C2A*/
#pragma datamodel(P128)      /* @C2A*/
#endif                       /* @C2A*/
/********************************************************************/
/*  Prototype for calling Create Prog Temp Fix API QPZCRTFX         */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QPZCRTFX, OS, nowiden)
#else
  extern "OS"
#endif
void QPZCRTFX(void *,             /* PTF information                */
              char *,             /* Development library name       */
              void *,             /* Objects                        */
              int,                /* Number of objects              */
              void *,             /* Documents                      */
              int,                /* Number of documents            */
              void *,             /* Prerequisite PTFs              */
              int,                /* Number of prerequisite PTFs    */
              void *,             /* Exit programs                  */
              int,                /* Number of exit programs        */
              char *,             /* Problem IDs                    */
              int,                /* Number of problem IDs          */
              void *,             /* Cover letters                  */
              int,                /* Number of cover letters        */
              void *,             /* Error code                     */
              ...);               /* optional paramters             */
                                  /* Directory  information         */
                                  /* Number of directories          */
                                  /* Additional parameter       @C1A*/
                                  /* Additional parameter format@C1A*/


/********************************************************************/
/*  Structure for the PTF Information Format                        */
/********************************************************************/
typedef _Packed struct Qpz_PTF_Inf {
         char PTF_ID[7];
         char PID[7];
         char Rls_Lvl[6];
         char Opt[4];
         char Prim_Obj_Lib[10];
         char Lod_ID[4];
         char Tgt_Rls[6];
         char Reserved[6];
} Qpz_PTF_Inf_t;

/********************************************************************/
/*  Structure for the Exit Programs Format.                         */
/********************************************************************/
typedef _Packed struct Qpz_Ext_Pgm {
         char Ext_Pgm_Nam[10];
         char Ext_Pgm_Lib[10];
         char Run_Opt[7];
         char Ext_Pgm_Type[7];
         char Usr_Dta[50];
} Qpz_Ext_Pgm_t;

/********************************************************************/
/*  Structure for the Cover Letter Format.                          */
/********************************************************************/
typedef _Packed struct Qpz_Cvr_Ltr {
         char Cvr_Ltr_Fil[10];
         char Cvr_Ltr_Lib[10];
         char Cvr_Ltr_Mbr[10];
         char NLV[4];
         char Reserved[10];
} Qpz_Cvr_Ltr_t;

/********************************************************************/
/*  Structure for the Directory format                              */
/********************************************************************/
typedef _Packed struct Qpz_Dir_Obj {
        int  Length_Of_Dir_Object_name;
        int  Disp_Next_Dir_Object_Record;
      /*char Dir_object_name[];*/            /* Varying length      */
 } Qpz_Dir_Obj_t;

typedef _Packed struct Qpz_Dir_Obj_Format {
         int  Ofst_next_dir_record;
         int  Ofst_development_dir;
         int  Length_of_Development_dir;
         int  Ofst_primary_dir;
         int  Length_of_Primary_dir;
         int  Ofst_to_dir_object;
         int  Number_Directory_objects;
       /*char Development_Dir_Name[];*/      /* Varying length      */
       /*char Primary_Dir_Name[];*/          /* Varying length      */
       /*Qpz_Dir_Obj_t Dir_object[];*/       /* Varying length      */
} Qpz_DIR_t;

/********************************************************************/
/*  Structure for the Additional Parameter Information - PTFC0100   */
/********************************************************************/
typedef _Packed struct Qpz_PTFC0100 {
         int Ofst_Job_Precnd;
         int Num_Job_Precnd;
         int Len_Job_Precnd;
         int Ofst_Object_Precnd;
         int Num_Object_Precnd;
         int Len_Object_Precnd;
} Qpz_PTFC0100_t;

/********************************************************************/
/*  Structure for the Job Preconditions                             */
/********************************************************************/
typedef _Packed struct Qpz_Job_Precnd {
         char Job_Precnd_Type[1];
         char Job_Precnd_Name[10];
       /*char Reserved[];*/                  /* Varying length      */
} Qpz_Job_Precnd_t;


/********************************************************************/
/*  Structure for the Object Preconditions                          */
/********************************************************************/
typedef _Packed struct Qpz_Obj_Precnd {
         char Obj_Precnd_Name[10];
         char Obj_Precnd_Library[10];
         char Obj_Precnd_Type[10];
       /*char Reserved[];*/                  /* Varying length      */
} Qpz_Obj_Precnd_t;

#if (__OS400_TGTVRM__>=510)  /* @C2A*/
#pragma datamodel(pop)       /* @C2A*/
#endif                       /* @C2A*/

#endif
