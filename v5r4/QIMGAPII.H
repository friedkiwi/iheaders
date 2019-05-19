/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: QIMGAPII                                     */
/*                                                                */
/* Descriptive Name: Convert Image API common defines/structures  */
/*                                                                */
/* 5769-SS1,5722-SS1  (C) Copyright IBM Corp. 1997,2002           */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Convert Image API copies and optionally       */
/*              transforms an image or a printer datastream.      */
/*                                                                */
/* Header Files Included:                                         */
/*                                                                */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: None.                                 */
/*                                                                */
/* Change Activity:                                               */
/* CFD List:                                                      */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A1= P3649474     4D20  070797 BNK                             */
/* $A2= D97941.1     5D10  080499 BNK       Add exit pnt support  */
/* $A3= D98212.6    v5r1m0 010400 gchaney:  Teraspace stage 2     */
/* $A4= D97260.2     5D20  010109 ROCH:     Decouple Splf from Job*/
/*                                                                */
/* End CFD List.                                                  */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

/********************************************************************/
/*                         QIMGCVTI Include                         */
/********************************************************************/
#ifndef QIMGAPII_CLEINC
#define QIMGAPII_CLEINC

#include <decimal.h>

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/*********************************************************************/
/* Control #defines                                                  */
/*********************************************************************/
#define CONTROL_FMT_100 "IMGC0100"

/*********************************************************************/
/* Feedback #defines                                                 */
/*********************************************************************/
#define FEEDBACK_FMT_100 "IMGF0100"

/*********************************************************************/
/* Input #defines                                                    */
/*********************************************************************/
#define STREAM_FIL_IN "IMGI0100"
#define SPOOL_FILE_IN "IMGI0200"
#define MEMORY_BUF_IN "IMGI0300"

/*********************************************************************/
/* Output #defines                                                   */
/*********************************************************************/
#define STREAM_FIL_OUT "IMGO0100"
#define SPOOL_FILE_OUT "IMGO0200"
#define MEMORY_BUF_OUT "IMGO0300"

/*********************************************************************/
/* API Parameter Field Constants                                     */
/*********************************************************************/
enum QIMG_OPERATION { CALCULATE_IMAGE=0, IMMED_IMAGE=1, DELAY_IMAGE=2,
                      NONE_IMAGE=3,      FIRST_IMAGE=4, APPEND_IMAGE=5,
                      LAST_IMAGE=6,      END_IMAGE=7 };

enum QIMG_BOOLEAN { QIMG_NO=0, QIMG_YES=1 };

enum QIMG_REDUCE  { QIMG_SAME=0, QIMG_GRAY=1, QIMG_BLACKWHITE=2 };

enum QIMG_RESIZE  { QIMG_SCALEDOWN=0,  QIMG_KEEPSIZE=1,
                    QIMG_KEEPPIXELS=2, QIMG_FITPAGE=3, QIMG_SCALEUP=4 };

enum QIMG_SAVESPL { QIMG_SS_PRTF=0, QIMG_SS_NO=1, QIMG_SS_YES=2 };

enum QIMG_HJUST   { QIMG_HCENTER=0, QIMG_HLEFT=1, QIMG_HRIGHT=2 };

enum QIMG_VJUST   { QIMG_VCENTER=0, QIMG_VTOP=1, QIMG_VBOTTOM=2 };

/**********************************************************************/
/* If you make changes here, also make same changes in eimgeph.cleinc */
/**********************************************************************/
enum QIMG_DSFMT   { QIMG_DS_INOBJ=0,     QIMG_DS_DESTIMGCFG=0,
                    QIMG_DS_TIFF=1,      QIMG_DS_BMP=2,
                    QIMG_DS_GIF=6,       QIMG_DS_AFPDS=20,
                    QIMG_DS_PCL=22,      QIMG_DS_PS=23,
                    QIMG_DS_PDF=25,      QIMG_DS_UNKNOWN=99 };

enum QIMG_PHOTO   { QIMG_PH_INOBJ=0,     QIMG_PH_DESTIMGCFG=0,
                    QIMG_PH_MONOWHITE=1, QIMG_PH_MONOBLACK=2,
                    QIMG_PH_RGB=3};

enum QIMG_RESUNIT { QIMG_RU_INOBJ=0,      QIMG_RU_DESTIMGCFG=0,
                    QIMG_RU_NONE=1,       QIMG_RU_INCH=2,
                    QIMG_RU_CENTIMETER=3 };

enum QIMG_RES     { QIMG_RS_INOBJ=0,     QIMG_RS_DESTIMGCFG=0 };

/**********************************************************************/
/* If you make changes here, also make same changes in eimgeph.cleinc */
/**********************************************************************/
enum QIMG_CPRTYPE { QIMG_CT_DESTIMGCFG=0, QIMG_CT_NONE=1,
                    QIMG_CT_GRP3FAX=3,    QIMG_CT_GRP4FAX=4,
                    QIMG_CT_PACKBITS=7,   QIMG_CT_IBMMMR=8 };

enum QIMG_CPRQUAL { QIMG_CQ_DESTIMGCFG=0, QIMG_CQ_G3ONEDIM=1,
                    QIMG_CQ_G3TWODIM=2 };

enum QIMG_BITSMP  { QIMG_BS_DESTIMGCFG=0, QIMG_BS_ONEBIT=1,
                    QIMG_BS_EIGHTBIT=8};

enum QIMG_PPRSIZ  { QIMG_PS_USRPPRSZ=-1, QIMG_PS_DESTIMGCFG=0,
                    QIMG_PS_EXECUTIVE=1, QIMG_PS_LETTER=2,
                    QIMG_PS_LEGAL=3,     QIMG_PS_LEDGER=6,
                    QIMG_PS_A5=13,       QIMG_PS_A4=26,
                    QIMG_PS_A3=27,       QIMG_PS_B5=45,
                    QIMG_PS_B4=46,       QIMG_PS_CONT80=50,
                    QIMG_PS_CONT132=51,  QIMG_PS_MONARCH=80,
                    QIMG_PS_COMM10=81,   QIMG_PS_COMM9=89,
                    QIMG_PS_DL=90,       QIMG_PS_C5ENV=91,
                    QIMG_PS_B5ENV=100 };

enum QIMG_PPRORI  { QIMG_PO_DESTIMGCFG=-1,  QIMG_PO_BESTFIT=0,
                    QIMG_PO_PORTRAIT=1,    QIMG_PO_LANDSCAPE=2,
                    QIMG_PO_PORTRAIT180=3, QIMG_PO_LANDSCAPE180=4 };

enum QIMG_BORDER  { QIMG_BD_DESTIMGCFG=-1 };

enum QIMG_OBJ_TYP { QIMG_STR_OBJ_TYP=0 };

/*****************************************************************/
/* Structure for Control Structure                               */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGC0100
{
  int Struct_Len;
  char Struct_Fmt[8];
  int Operation;
  char Append_Handle[32];
  int Fb_Len;
  char Fb_Struct_Fmt[8];
  int Reverse;
  int Color_Reduce;
  int Resize;
  int Stretch;
  int H_Just;
  int V_Just;
  int Keep_Color;
  int Keep_Quality;
  int Cancel;
  int Sev_Level;
} Qimg_IMGC0100_t;

/*****************************************************************/
/* Structure for IMGI0100 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGI0100
{
  int Struct_Len;
  char Struct_Fmt[8];
  char Img_Cfg_Obj[10];       /* RESERVED must be set to 0x00    */
  char Img_Cfg_Obj_Lib[10];   /* RESERVED must be set to 0x00    */
  int Data_Strm_Fmt;
  int Photo_I;
  int Res_Unit;
  int H_Res;
  int V_Res;
  int Obj_Typ;
  int Obj_Nam_Ofs;
  int Obj_Nam_Len;
  int Reserved1;             /* RESERVED must be set to 0x00     */
/*char Obj_Nam[1];*/         /* Varying length                   */
} Qimg_IMGI0100_t;

/*****************************************************************/
/* Structure for IMGI0200 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGI0200
{
  int Struct_Len;
  char Struct_Fmt[8];
  char Img_Cfg_Obj[10];       /* RESERVED must be set to 0x00    */
  char Img_Cfg_Obj_Lib[10];   /* RESERVED must be set to 0x00    */
  int Data_Strm_Fmt;
  int Photo_I;
  int Res_Unit;
  int H_Res;
  int V_Res;
  char Qual_Job_Nam[26];
  char Int_Job_Id[16];
  char Int_Splf_Id[16];
  char Splf_Nam[10];
  int Splf_Num;
  char Job_System_Name[8];
  char Splf_Create_Date[7];
  char Reserved1;
  char Splf_Create_Time[6];
  char Reserved2[2];
} Qimg_IMGI0200_t;

/*****************************************************************/
/* Structure for IMGI0300 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGI0300
{
  int Struct_Len;
  char Struct_Fmt[8];
  char Img_Cfg_Obj[10];       /* RESERVED must be set to 0x00    */
  char Img_Cfg_Obj_Lib[10];   /* RESERVED must be set to 0x00    */
  int Data_Strm_Fmt;
  int Photo_I;
  int Res_Unit;
  int H_Res;
  int V_Res;
  int Data_Strm_Len;
} Qimg_IMGI0300_t;

/*****************************************************************/
/* Structure for IMGO0100 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGO0100
{
  int Struct_Len;
  char Struct_Fmt[8];
  char Img_Cfg_Obj[10];
  char Img_Cfg_Obj_Lib[10];   /* RESERVED must be set to 0x00    */
  int Data_Strm_Fmt;
  int Photo_I;
  int Res_Unit;
  int H_Res;
  int V_Res;
  int Siz_Unit;
  decimal(15,5) H_Siz;
  decimal(15,5) V_Siz;
  int Cpr_Typ;
  int Cpr_Qual;
  int Bit_Smp;
  int Ppr_Siz;
  int Usr_Ppr_Siz_Unit;
  decimal(15,5) H_Usr_Ppr_Siz;
  decimal(15,5) V_Usr_Ppr_Siz;
  int Ppr_Ori;
  int Left_Border;
  int Right_Border;
  int Top_Border;
  int Bottom_Border;
  int Obj_Typ;
  int Obj_Nam_Ofs;
  int Obj_Nam_Len;
  int Reserved1;             /* RESERVED must be set to 0x00     */
/*char Obj_Nam[1];*/         /* Varying length                   */
} Qimg_IMGO0100_t;

/*****************************************************************/
/* Structure for IMGO0200 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGO0200
{
  int Struct_Len;
  char Struct_Fmt[8];
  char Img_Cfg_Obj[10];
  char Img_Cfg_Obj_Lib[10];   /* RESERVED must be set to 0x00    */
  int Data_Strm_Fmt;
  int Photo_I;
  int Res_Unit;
  int H_Res;
  int V_Res;
  int Siz_Unit;
  decimal(15,5) H_Siz;
  decimal(15,5) V_Siz;
  int Cpr_Typ;
  int Cpr_Qual;
  int Bit_Smp;
  int Ppr_Siz;
  int Usr_Ppr_Siz_Unit;
  decimal(15,5) H_Usr_Ppr_Siz;
  decimal(15,5) V_Usr_Ppr_Siz;
  int Ppr_Ori;
  int Left_Border;
  int Right_Border;
  int Top_Border;
  int Bottom_Border;
  char Out_Dev[10];
  char Outq_Name[10];
  char Outq_Lib[10];
  char Prtf_Name[10];
  char Prtf_Lib[10];
  char Usr_Dta[10];
  int Copies;
  int Save;
  int Req_Spl_Fdbk;
} Qimg_IMGO0200_t;

/*****************************************************************/
/* Structure for IMGO0300 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGO0300
{
  int Struct_Len;
  char Struct_Fmt[8];
  char Img_Cfg_Obj[10];
  char Img_Cfg_Obj_Lib[10];   /* RESERVED must be set to 0x00    */
  int Data_Strm_Fmt;
  int Photo_I;
  int Res_Unit;
  int H_Res;
  int V_Res;
  int Siz_Unit;
  decimal(15,5) H_Siz;
  decimal(15,5) V_Siz;
  int Cpr_Typ;
  int Cpr_Qual;
  int Bit_Smp;
  int Ppr_Siz;
  int Usr_Ppr_Siz_Unit;
  decimal(15,5) H_Usr_Ppr_Siz;
  decimal(15,5) V_Usr_Ppr_Siz;
  int Ppr_Ori;
  int Left_Border;
  int Right_Border;
  int Top_Border;
  int Bottom_Border;
  int Space_Prov;
} Qimg_IMGO0300_t;

/*****************************************************************/
/* Structure for IMGF0100 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qimg_IMGF0100
{
  char Append_Handle[32];
  char Splf_Nam[10];
  char Job_Nam[10];
  char Job_User_Nam[10];
  char Job_Number[6];
  int  Splf_Num;
  char Internal_Job_Id[16];
  char Internal_Splf_Id[16];
  int  Output_Data_Strm_Len;
  char Job_System_Name[8];
  char Splf_Create_Date[7];
  char Reserved1;
  char Splf_Create_Time[6];
  char Reserved2[2];
} Qimg_IMGF0100_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
