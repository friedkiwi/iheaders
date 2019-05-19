 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZRTVFX                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve PTF Information                     */
 /*                                                                */
 /* 5763-SS1, 5769-SS1, 5722-SS1                                   */
 /* (C) Copyright IBM Corp. 1994,2003                              */
 /*                                                                */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve PTF Information API returns          */
 /*              information about a specific PTF.                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*       Qpz_Rtv_PTF_Info_t                                       */
 /*       Qpz_PTFR0100_t                                           */
 /*       Qpz_NLV_Rec_t                                            */
 /*       Qpz_Addn_Info_0200_t                                     */
 /*       Qpz_PTFR0200_t                                           */
 /*       Qpz_Pre_Req_t                                            */
 /*       Qpz_Addn_Info_0300_t                                     */
 /*       Qpz_PTFR0300_t                                           */
 /*       Qpz_Addn_Info_0400_t                                     */
 /*       Qpz_PTF_Obj_t                                            */
 /*       Qpz_PTF_Sub_Obj_t                                        */
 /*       Qpz_PTFR0400_t                                           */
 /*       Qpz_Dependent_t                                          */
 /*       Qpz_Addn_Info_0500_t                                     */
 /*       Qpz_PTFR0500_t                                           */
 /*       Qpz_Apars_t                                              */
 /*       Qpz_Apar_Record_t                                        */
 /*       Qpz_PTFR0600_t                                           */
 /*       Qpz_Sym_Str_t                                            */
 /*       Qpz_Sym_Str_Record_t                                     */
 /*       Qpz_PTFR0700_t                                           */
 /*       Qpz_Exit_Record_t                                        */
 /*       Qpz_Ext_Pgm_Record_t                                     */
 /*       Qpz_PTFR0800_t                                           */
 /*       Qpz_Precnd_t                                             */
 /*       Qpz_Precnd_Record_t                                      */
 /*       Qpz_PTFR0900_t                                           */
 /*       Qpz_Superseded_t                                         */
 /*       Qpz_Superseded_Record_t                                  */
 /*       Qpz_PTFR1000_t                                           */
 /*                                                                */
 /* Function Prototype List: QPZRTVFX                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940327 ROCH      New Include           */
 /* $A1= D9182700     3D60  940711 ROCH      *PRV support,         */
 /*                                          PTFR0400 format       */
 /*                                          PTF object list       */
 /* $B1=D94963        4d10  961010 ROCH      added new fields      */
 /*                                              to base structure */
 /* $C1=D94923        4d20  970619 ROCH      added new fields      */
 /*                                              to PTFR0300       */
 /* $C2=D95243        4d20  970619 ROCH      added new fields      */
 /*                                              to base structure */
 /* $D1=D97005        4d40  980701 ROCH      added new fields      */
 /*                                              to base structure */
 /*                                              and added PTFR0500*/
 /* $E1=D97405        5D10  981202 ROCH      added PTFR0600        */
 /*                                                PTFR0700        */
 /*                                                PTFR0800        */
 /* $E2=D97974        5D10  990609 ROCH      added PTFR0900, added */
 /*                                              new fields to     */
 /*                                              PTFR0200          */
 /* $E3=D98212        5D10  991229 ROCH      added datamodel pragma*/
 /* $F1=D98720        5D20  010902 ROCH      added new field       */
 /*                                              to base structure */
 /*                                              and added PTFR1000*/
 /* $G1=D99535       v5r3m0 030224 ROCH      added new fields      */
 /*                                              to base structure */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPZRTVFX_h
#define QPZRTVFX_h
#if (__OS400_TGTVRM__>=510)  /* @E3A*/
#pragma datamodel(P128)      /* @E3A*/
#endif                       /* @E3A*/

/********************************************************************/
/*  Prototype for calling Software Product API QPZRTVFX             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QPZRTVFX, OS, nowiden)
#else
  extern "OS"
#endif
void QPZRTVFX(void *,             /* Receiver variable              */
              int,                /* Length of receiver variable    */
              void *,             /* PTF information (Format Below) */
              char *,             /* Format name                    */
              void *);            /* Error code                     */

/********************************************************************/
/*  Structure for PTF Information Format                            */
/********************************************************************/

typedef _Packed struct Qpz_Rtv_PTF_Info
   {
                 char PTF_ID[7];
                 char PID[7];
                 char Rls_Lvl[6];
                 int  CCSID;
                 char Close_Files;
                 char Reserved[25];
               } Qpz_Rtv_PTF_Info_t;

/********************************************************************/
/*  Structure for PTFR0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_PTFR0100
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 int  Ofst_Addn_Info;
                 char PID[7];
                 char PTF_ID[7];
                 char Rls_Lvl[6];
                 char Prd_Opt[4];
                 char Lod_ID[4];
                 char Loaded_Sts;
                 char Cvr_Ltr_Sts;
                 char On_Order_Sts;
                 char Savf_Sts;
                 char Fil_Nam[10];
                 char Fil_Lib_Nam[10];
                 char PTF_Type;
                 char IPL_Act;
                 char Act_Pnd;
                 char Act_Req;
                 char PTF_Rls;
                 char Tgt_Rls[6];
                 char Superseding_PTF[7];
                 char IPL_Side[1];
                 char Minimum_Level[2];
                 char Maximum_Level[2];
                 char Format_Info_Available;
                 char Status_date_time[13];
                 char Lic_Group[7];
                 char SupersededBy_PTF[7];
                 char Server_IPL_Source;
		 char Server_IPL_Rqd;
                 char Create_Date_Time[13];
               /*char Reserved[];*/          /* Varying length      */
               } Qpz_PTFR0100_t;

/********************************************************************/
/*  Structure for PTFR0200 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_NLV_Rec
   {
                 char Cvr_Ltr_NLV[4];
                 char Cvr_Ltr_Fil_Nam[10];
                 char Cvr_Ltr_Lib_Nam[10];
                 char Cvr_Ltr_Mbr_Nam[10];
                 char Cvr_Ltr_Pre_Inst[1];
                 char Cvr_Ltr_Post_Inst[1];
               /*char Reserved[];*/          /* Varying length      */
   }Qpz_NLV_Rec_t;

typedef _Packed struct Qpz_Addn_Info_0200
   {
                 int  Ofst_Cvr_Ltr_Rec;
                 int  Num_NLVs_Avail;
                 int  Length_Cvr_Ltr_Rec;
               /*char Reserved[]; */         /* Varying length      */
   }Qpz_Addn_Info_0200_t;

typedef _Packed struct Qpz_PTFR0200
   {
                 Qpz_PTFR0100_t PTFR0100;
               /*Qpz_Addn_Info_0200_t Addn_Info[];*//* Varying
                                                length              */
               /*Qpz_NLV_Rec_t NLV_Rec[];*/  /* Varying length      */
   }Qpz_PTFR0200_t;

/********************************************************************/
/*  Structure for PTFR0300 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Pre_Req
   {
                 char PID[7];
                 char PTF_ID[7];
                 char Rls[6];
                 char Req_Min_Level[2];
                 char Req_Max_Level[2];
                 char Req_Typ;
                 char Is_Cond;
                 char Is_Reqd;
                 char Req_Prd_Opt[4];
                 char Req_Lod_Id[4];
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Pre_Req_t;

typedef _Packed struct Qpz_Addn_Info_0300
   {
                 int  Ofst_Pre_Req_Rec;
                 int  Num_Pre_Reqs;
                 int  Len_Pre_Req_Rec;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Addn_Info_0300_t;

typedef _Packed struct Qpz_PTFR0300
   {
                 Qpz_PTFR0100_t PTFR0100;
               /*Qpz_Addn_Info_0300_t Addn_Info[];*//* Varying length*/
               /*Qpz_Pre_Req_t Pre_Req[];*/ /* Varying length       */
    }Qpz_PTFR0300_t;

/********************************************************************/
/*  Structure for PTFR0400 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_PTF_Obj
   {
                 int  Obj_Ofst_Sub_Obj_Rec;
                 int  Obj_Num_Sub_Obj_Rec;
                 int  Obj_Len_Sub_Obj_Rec;
                 char Obj_Nam[10];
                 char Obj_Lib_Nam[10];
                 char Obj_Alt_Nam[10];
                 char Obj_Typ[7];
               /*char Reserved[];*/          /* Varying length      */
   }Qpz_PTF_Obj_t;

typedef _Packed struct Qpz_PTF_Sub_Obj
   {
                 int  Sub_Obj_Nam_Ofst;
                 int  Sub_Obj_Nam_Len;
                 char Sub_Obj_Typ[7];
               /*char Reserved[];*/          /* Varying length      */
   }Qpz_PTF_Sub_Obj_t;

typedef _Packed struct Qpz_Addn_Info_0400
   {
                 int  Ofst_Object_Rec;
                 int  Num_Objects;
                 int  Len_Object_Rec;
                 int  Sub_Obj_CCSID;
                 char Sub_Obj_CCSID_Flag;
               /*char Reserved[]; */         /* Varying length      */
    }Qpz_Addn_Info_0400_t;

typedef _Packed struct Qpz_PTFR0400
   {
                 Qpz_PTFR0100_t PTFR0100;
               /*Qpz_Addn_Info_0400_t Addn_Info;*/  /* Varying length*/
               /*Qpz_PTF_Obj_t PTF_Obj[];*/         /* Varying length*/
               /*Qpz_PTF_Sub_Obj_t PTF_Sub_Obj[];*/ /* Varying length*/
               /*char PTF_Sub_Obj_Name[];  */       /* Varying length*/
    }Qpz_PTFR0400_t;

/********************************************************************/
/*  Structure for PTFR0500 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Dependent
   {
                 char PID[7];
                 char PTF_ID[7];
                 char Rls[6];
                 char Dep_Min_Level[2];
                 char Dep_Max_Level[2];
                 char Dep_Typ;
                 char Dep_Prd_Opt[4];
                 char Dep_Lod_Id[4];
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Dependent_t;

typedef _Packed struct Qpz_Addn_Info_0500
   {
                 int  Ofst_Dependent_Rec;
                 int  Num_Dependents;
                 int  Len_Dependent_Rec;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Addn_Info_0500_t;

typedef _Packed struct Qpz_PTFR0500
   {
                 Qpz_PTFR0100_t PTFR0100;
               /*Qpz_Addn_Info_0500_t Addn_Info[];*//* Varying length*/
               /*Qpz_Dependent_t Dependent[];*/    /* Varying length*/
    }Qpz_PTFR0500_t;


/********************************************************************/
/*  Structure for PTFR0600 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Apars
   {
                 int  Ofst_Apar_Record;
                 int  Num_Apar_Records;
                 int  Len_Apar_Record;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Apars_t;

typedef _Packed struct Qpz_Apar_Record
   {
                 char Apar_Nbr[7];
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Apar_Record_t;

typedef _Packed struct Qpz_PTFR0600
   {
        Qpz_PTFR0100_t PTFR0100;
      /*Qpz_Apars_t Addn_Info[];*/          /* Varying length       */
      /*Qpz_Apar_Record_t Apar_Rcds[];*/    /* Varying length       */
    }Qpz_PTFR0600_t;

/********************************************************************/
/*  Structure for PTFR0700 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/


typedef _Packed struct Qpz_Sym_Str
   {
                 int  Ofst_Sym_Str_Record;
                 int  Num_Sym_Str_Records;
                 int  Len_Sym_Str_Record;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Sym_Str_t;


typedef _Packed struct Qpz_Sym_Str_Record
   {
                 int  Ofst_Sym_Str_Data;
                 int  Len_Sym_Str_Data;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Sym_Str_Record_t;

typedef _Packed struct Qpz_PTFR0700
   {
        Qpz_PTFR0100_t PTFR0100;
      /*Qpz_Sym_Str_t  Sym_Str[];*/         /* Varying length       */
      /*Qpz_Sym_Str_Record_t  Sym_Str_Record[];*//* Varying length  */
      /*char Symptom_String_Data[];*/       /* Varying length       */
    }Qpz_PTFR0700_t;
/********************************************************************/
/*  Structure for PTFR0800 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Exit_Record
   {
                 int  Ofst_Exit_Program_Record;
                 int  Num_Exit_Program_Records;
                 int  Len_Exit_Program_Record;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Exit_Record_t;

typedef _Packed struct Qpz_Exit_Pgm_Record
   {
                 int  Ofst_Exit_Pgm_User_Data;
                 int  Len_Exit_Pgm_User_Data;
                 char Ext_Pgm_Name[10];
                 char Ext_Pgm_Library[10];
                 char Ext_Pgm_Run_Opt;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Ext_Pgm_Record_t;

typedef _Packed struct Qpz_PTFR0800
   {
       Qpz_PTFR0100_t PTFR0100;
     /*Qpz_Exit_Record_t  Exit_Record[];*/   /* Varying length      */
     /*Qpz_Exit_Pgm_Record_t  Exit_Pgm_Record[];*//* Varying length */
     /*char Exit_Pgm_User_Data[];*/          /* Varying length      */
   }Qpz_PTFR0800_t;

/********************************************************************/
/*  Structure for PTFR0900 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Precnd
   {
                 int  Ofst_Precnd_Record;
                 int  Num_Precnd_Records;
                 int  Len_Precnd_Record;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Precnd_t;

typedef _Packed struct Qpz_Precnd_Record
   {
                 char Precnd_Type[10];
                 char Precnd_Name[10];
                 char Precnd_Library[10];
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Precnd_Record_t;

typedef _Packed struct Qpz_PTFR0900
   {
        Qpz_PTFR0100_t PTFR0100;
      /*Qpz_Precnd_t Precnd[];*/            /* Varying length       */
      /*Qpz_Precnd_Record_t Precnd_Rcd[];*/ /* Varying length       */
    }Qpz_PTFR0900_t;

/********************************************************************/
/*  Structure for PTFR1000 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Superseded
   {
                 int  Ofst_Superseded_Record;
                 int  Num_Superseded_Records;
                 int  Len_Superseded_Record;
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Superseded_t;

typedef _Packed struct Qpz_Superseded_Record
   {
                 char Superseded_PTF[7];
               /*char Reserved[]; */        /* Varying length       */
    }Qpz_Superseded_Record_t;

typedef _Packed struct Qpz_PTFR1000
   {
        Qpz_PTFR0100_t PTFR0100;
      /*Qpz_Superseded_t Addn_Info[];*/          /* Varying length  */
      /*Qpz_Superseded_Record_t Superseded[];*/  /* Varying length  */
    }Qpz_PTFR1000_t;


#if (__OS400_TGTVRM__>=510)  /* @E3A*/
#pragma datamodel(pop)       /* @E3A*/
#endif                       /* @E3A*/

#endif
