 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZRTVPR                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Product Information.                */
 /*                                                                */
 /* 5763-SS1, 5716-SS1, 5769-SS1, 5722-SS1                         */
 /* (C) Copyright IBM Corp. 1994,2003                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve Product Information API returns      */
 /*              information about a software product.             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsz_Product_Info_Rec_t                         */
 /*                 Qsz_PRDR0100_t                                 */
 /*                 Qsz_Lib_Rec_t                                  */
 /*                 Qsz_Addn_Info_200_t                            */
 /*                 Qsz_PRDR0200_t                                 */
 /*                 Qsz_Folder_Rec_t                               */
 /*                 Qsz_Addn_Info_300_t                            */
 /*                 Qsz_PRDR0300_t                                 */
 /*                 Qsz_Object_Record_t                            */
 /*                 Qsz_Addn_Info_400_t                            */
 /*                 Qsz_PRDR0400_t                                 */
 /*                 Qsz_Option_Rec_t                               */
 /*                 Qsz_Addn_Info_500_t                            */
 /*                 Qsz_PRDR0500_t                                 */
 /*                 Qsz_Load_Rec_t                                 */
 /*                 Qsz_Addn_Info_600_t                            */
 /*                 Qsz_PRDR0600_t                                 */
 /*                 Qsz_Rls_Rec_t                                  */
 /*                 Qsz_PRDR0700_t                                 */
 /*                 Qsz_Pub_Obj_Aut_t                              */
 /*                 Qsz_Prd_Dir_t                                  */
 /*                 Qsz_Directory_Rec_t                            */
 /*                 Qsz_Addn_Info_800_t                            */
 /*                 Qsz_PRDR0800_t                                 */
 /*                 Qsz_Addn_Info_900_t                            */
 /*                 Qsz_PRDR0900_t                                 */
 /*                                                                */
 /* Function Prototype List: QSZRTVPR                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH:     New Include           */
 /* $B1= D91743       3D60  941113 RAR:      Directory support     */
 /* $C1= D94912       4D10  970205 ROCH:     Mixed release and     */
 /*                                          release date century  */
 /*                                          support               */
 /* $D1= D95243.1     4D20  970510 ROCH:     Level support         */
 /* $E0= D99297       5D30  020929 ROCH:     Software Agreement    */
 /*                                          document support.     */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSZRTVPR_h
#define QSZRTVPR_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QSZRTVPR             */
/********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSZRTVPR,OS,nowiden)
  #else
       extern "OS"
  #endif
void QSZRTVPR(void *,             /* Receiver variable              */
              int,                /* Length of receiver variable    */
              char *,             /* Format name for rec variable   */
              void *,             /* Product information            */
              void *,             /* Error code                     */
              ...);               /* Optional Parameter Group:
                                       char * Format name for
                                              product information   */

/********************************************************************/
/* Structure for the Product Information Format - PRDI0100          */
/********************************************************************/
typedef _Packed struct Qsz_Product_Info_Rec {
              char  Product_Id[7];
              char  Release_Level[6];
              char  Product_Option[4];
              char  Load_Id[10];
} Qsz_Product_Info_Rec_t;

/********************************************************************/
/* Structure for the Product Information Format - PRDI0200          */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qsz_Product_Info_Rec0200 {
              char  Product_Id[7];
              char  Release_Level[6];
              char  Product_Option[4];
              char  Load_Id[10];
              char  Reserved_1;
              int   Product_Info_Length;
              int   Returned_Dir_CCSID;
             /*char Reserved_0[];*/ /*          Varying length field*/
} Qsz_Product_Info_Rec0200_t;

/********************************************************************/
/*  Structure for PRDR0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qsz_PRDR0100 {
               int  Bytes_Returned;
               int  Bytes_Available;
               int  Reserved_1;
               char Product_Id[7];
               char Release_Level[6];
               char Product_Option[4];
               char Load_Id[4];
               char Load_Type[10];
               char Symbolic_Load_State[10];
               char Load_Error_Indicator[10];
               char Load_State[2];
               char Supported_Flag;
               char Registration_Type[2];
               char Registration_Value[14];
               char Reserved_2[2];
               int  Ofst_Addn_Info;
               char Prim_Lng_Lod[4];
               char Min_Tgt_Rls[6];
               char Min_VRM_Base_Req[6];
               char Base_Opt_VRM_Reqs_Met;
               char Level[3];
             /*char Reserved_3[];*/           /*Varying length field*/
} Qsz_PRDR0100_t;

/********************************************************************/
/*  Structure for PRDR0200 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
 typedef _Packed struct Qsz_Lib_Rec {
                 int  Ofst_Nxt_Lib_Rec;
                 char Prim_Lib_Name[10];
                 char Inst_Lib_Name[10];
                 char Lib_Type[10];
                 char Lib_Aut[10];
                 char Lib_Crt_Aut[10];
                 char Postop_Ext_Prg_Name[10];
                 int  Nbr_Preop_Ext_Prg_Names;
               /*char Preop_Ext_Prg_Names[10][];*//* Varying length */
               /*char Reserved[];*//* Varying length                */
 }Qsz_Lib_Rec_t;

typedef _Packed struct Qsz_Addn_Info_200
   {
               char Sec_Lang_Lib_Name[10];
               char Reserved_4[2];
               int  Number_Prim_Lib;
               int  Ofst_Lib_Records;
             /*char Reserved_5[];*//* Varying length                */
             /*Qsz_Lib_Rec_t Array[];*//*Varying length             */
 }Qsz_Addn_Info_200_t;

typedef _Packed struct Qsz_PRDR0200
   {
               Qsz_PRDR0100_t PRDR0100;
             /*Qsz_Addn_Info_200_t Addn_Info;*//* Varying length    */
             /*Qsz_Lib_Rec_t Array[];*//*Varying length             */
 }Qsz_PRDR0200_t;

/********************************************************************/
/*  Structure for PRDR0300 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qsz_Folder_Rec {
               char  Primary_Folder[63];
               char  Installed_Folder[63];
             /*char  Reserved[];*//* Varying length                 */
} Qsz_Folder_Rec_t;

typedef _Packed struct Qsz_Addn_Info_300 {
               int  Number_Prim_Fldrs;
               int  Length_Fldr;
               int  Ofst_Fldr_Rec;
             /*char Reserved_4[];*//* Varying length                */
             /*Qsz_Folder_Rec_t Array[];*//* Varying length         */
}Qsz_Addn_Info_300_t;

typedef _Packed struct Qsz_PRDR0300 {
               Qsz_PRDR0100_t PRDR0100;
             /*Qsz_Addn_Info_300_t Addn_Info;*//* Varying length    */
             /*Qsz_Folder_Rec_t Array[];*//*Varying length          */
}Qsz_PRDR0300_t;

/********************************************************************/
/*  Structure for PRDR0400 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qsz_Object_Record {
                 char Obj_Name[10];
                 char Inst_Lib_Name[10];
                 char Obj_Type[10];
               /*char Reserved[];*//* Varying length                */
} Qsz_Object_Record_t;

typedef _Packed struct Qsz_Addn_Info_400 {
               int  Number_Objects;
               int  Length_Obj;
               int  Ofst_Obj_Recs;
             /*char Reserved_4[];*//* Varying length                */
             /*Qsz_Object_Record_t Array[];*//* Varying length      */
} Qsz_Addn_Info_400_t;

typedef _Packed struct Qsz_PRDR0400 {
               Qsz_PRDR0100_t PRDR0100;
             /*Qsz_Addn_Info_400_t Addn_Info;*//* Varying length    */
             /*Qsz_Object_Record_t Array[];*//* Varying length      */
} Qsz_PRDR0400_t;

/********************************************************************/
/*  Structure for PRDR0500 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qsz_Option_Rec {
                 char Prod_Opt[4];
                 char Alw_Dyn_Naming;
                 char Prod_Opt_Msg_ID[7];
                 char Min_VRM_Opt_Req[6];
               /*char Reserved[];*//* Varying length               */
} Qsz_Option_Rec_t;

typedef _Packed struct Qsz_Addn_Info_500 {
               char Allow_Mltpl_Rel;
               char Release_Date_Century;
               char Release_Date[6];
               char Cpyrt_First_Yr[4];
               char Cpyrt_Cur_Yr[4];
               char Msgf_Obj_Name[10];
               char Msgf_Lib_Name[10];
               int  Nbr_Opt_Recs;
               int  Length_Opt_Recs;
               int  Ofst_Opt_Rec;
               char Allow_Mixed_Rel;
             /*char Reserved_5[];*//* Varying length                */
             /*Qsz_Option_Rec_t Array[];*//* Varying length         */
} Qsz_Addn_Info_500_t;

typedef _Packed struct Qsz_PRDR0500   {
               Qsz_PRDR0100_t PRDR0100;
             /*Qsz_Addn_Info_500_t Addn_Info;*//* Varying length    */
             /*Qsz_Option_Rec_t Array[];*//* Varying length         */
} Qsz_PRDR0500_t;

/********************************************************************/
/*  Structure for PRDR0600 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qsz_Load_Rec {
               char Prod_Opt[4];
               char Load_ID[4];
             /*char Reserved[];*//* Varying length                  */
} Qsz_Load_Rec_t;

typedef _Packed struct Qsz_Addn_Info_600 {
               int  Number_Load_Rec;
               int  Length_Load_Rec;
               int  Ofst_Load_Rec;
             /*char Reserved;*/  /* Varying length                  */
             /*Qsz_Load_Rec_t Array[];*//* Varying length           */
} Qsz_Addn_Info_600_t;

typedef _Packed struct Qsz_PRDR0600 {
               Qsz_PRDR0100_t PRDR0100;
             /*Qsz_Addn_Info_600_t Addn_Info;*//* Varying length    */
             /*Qsz_Load_Rec_t Array[];*//* Varying length           */
} Qsz_PRDR0600_t;

/********************************************************************/
/*  Structure for PRDR0700 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qsz_Rls_Rec {
               char Release_Level[6];
} Qsz_Rls_Rec_t;

typedef _Packed struct Qsz_PRDR0700 {
                 int  Bytes_Returned;
                 int  Bytes_Available;
                 int  Number_Rel_Ret;
                 char Reserved[4];
               /*Qsz_Rls_Rec_t Rls_Lvl[];*/  /*Variable Length Field*/
} Qsz_PRDR0700_t;

/********************************************************************/
/*  Structure for PRDR0800 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qsz_Pub_Obj_Aut {
               char  Pub_Obj_Aut[10];
} Qsz_Pub_Obj_Aut_t;


typedef _Packed struct Qsz_Directory_Rec {
               int   Len_Prim_Full_Path;
               int   Off_Prim_Full_Path;
               int   Len_Prim_Prd_Home_Dir;
               int   Off_Prim_Prd_dir;
               int   Len_Inst_Full_Path;
               int   Off_Inst_Full_Path;
               int   Len_Inst_Prd_Home_Dir;
               int   Off_Inst_Prd_dir;
               int   Nbr_Pub_Obj_Aut;
               int   Off_Pub_Obj_Aut_Array;
               char  Pub_Dta_Aut[10];
             /*char Reserved;*/  /* Varying length                  */
} Qsz_Directory_Rec_t;

typedef _Packed struct Qsz_Addn_Info_800 {
               int  Number_Full_Dir;
               int  Len_Full_Dir_Entry;
               int  Off_Full_Dir_Array;
               int  Rtnd_Dir_CCSID;
               char CCSID_Error;
             /*char Reserved_3[];*//* Varying length                */
}Qsz_Addn_Info_800_t;

typedef _Packed struct Qsz_PRDR0800 {
               Qsz_PRDR0100_t PRDR0100;
             /*Qsz_Addn_Info_800_t Addn_Info;*//* Varying length    */
             /*Qsz_Directory_Rec_t Qsz_Directory_Rec[];*/
                                               /* Varying length    */
             /*char Prim_Full_Path_Name[];*/   /* Varying length    */
             /*char Inst_Full_Path_Name[];*/   /* Varying length    */
             /*Qsz_Pub_Obj_Aut_t Array[]; */   /* Varying length    */
}Qsz_PRDR0800_t;

/********************************************************************/
/*  Structure for PRDR0900 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qsz_Sfw_Agr_Doc_Name_Rec {
               int   Len_Sfw_Agr_Doc_Name;
             /*char  Sfw_Agr_Doc_Name[]; *//* Varying length        */
} Qsz_Sfw_Agr_Doc_Name_Rec_t;

typedef _Packed struct Qsz_Addn_Info_900 {
               int  Nbr_Sfw_Agr_Docs_Available;
               int  Nbr_Sfw_Agr_Docs_Returned;
               int  Length_Sfw_Agr_Doc_Name_Rec;
               int  Off_Sfw_Agr_Doc_Name_Array;
               int  Rtnd_Sfw_Agr_Doc_Name_CCSID;
               char CCSID_Error;
             /*char Reserved_9[];        *//* Varying length        */
}Qsz_Addn_Info_900_t;

typedef _Packed struct Qsz_PRDR0900 {
               Qsz_PRDR0100_t PRDR0100;
             /*Qsz_Addn_Info_900_t Addn_Info;*//* Varying length    */
             /*Qsz_Sfw_Agr_Doc_Name_Rec_t Qsz_Sfw_Agr_Doc_Name_Array[]; */
                                               /* Varying length    */
}Qsz_PRDR0900_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
