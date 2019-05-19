/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
#ifndef _QSXSRVPL__h
#define _QSXSRVPL__h

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header file name: qsxsrvpl.h                                      */
/*                                                                   */
/* Descriptive name: Problem Log APIs                                */
/*                                                                   */
/* Description: Include header file for the problem log APIs.        */
/*                                                                   */
/* Macros used: None.                                                */
/*                                                                   */
/* Structure list:                                                   */
/*   See include body.                                               */
/*                                                                   */
/* Function prototype list:                                          */
/*    QsxStartProblemLogServices                                     */
/*    QsxEndProblemLogServices                                       */
/*    QsxAddProblemLogEntry                                          */
/*    QsxCreateProblemLogEntry                                       */
/*    QsxChangeProblemLogEntry                                       */
/*    QsxDeleteProblemLogEntry                                       */
/*    QsxRetrieveProblemLogEntry                                     */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON  LEVEL DATE    PGMR        DESCRIPTION                */
/* ---- ------- ----- ------  ---------   -------------------------- */
/* $A0=D28854   3D10  930706  GBS:        New include                */
/* $A1=P3622471 3D70  960610  MARQUEZ    :Do not use "qusec.h"       */
/*                                          instead just use         */
/*                                          <qusec.h>                */
/* $B1=D95243   4D20  970623  DIANAG     :Add Operating System Delta */
/*                                          Level                    */
/* $B2=P3649900 4D20  970806  DIANAG     :Undo changes to support    */
/*                                          Delta Level              */
/* $C1=P3676512 4D40  981021  BAUTISTA   :Add new struct for         */
/*                                        QsxRetrieveProblemLogEntry */
/* $D1=D97599   4D50  990510  BAUTISTA   :Add the new Qsx_LPAR_ID_T  */
/*                                        struct to                  */
/*                                        QsxRetrieveProblemLogEntry */
/* $E0=P9922079 5D10  000402  GUSTAVOT   :Force ENUM size to 4 bytes */
/* $F0=P9A12183 v5r3  020910  CRISTISM   :Replace enumsize to enum   */
/* $F1=P9A83642 v5r3m0f 041110 MISAEL    :Fix key8000 enum           */
/* $F2=P9B00880 v5r4m0fpga 050801 CRISTISM :Add PMR branch & country */
/*                                        number on Key 8            */
/*                                       :Add field to key 7002      */
/*                                       :Add fields to key 5001     */
/*                                       :Changes on key 1011        */
/*                                       :Add fields to key 7001     */
/* $F3=P9B00880 v5r4m0fpga  050803 GABYP: Add changes for Delta Lvl  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#include <qusec.h>
#pragma enum(4)              /* @E0A @F0C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
/*#pragma enum(small)           @E0A @F0C @F1D*/


/*********************************************************************
 *                        GENERAL DECLARATIONS
 *********************************************************************/
typedef int Qsx_Field_Length_T;

/* Type used for newtork ID and control point name                   */
typedef struct { char Name[8]; } Qsx_Appn_Name_T;
const Qsx_Appn_Name_T
        QSX_NETID_IBM  = {' ',' ',' ',' ',' ',' ',' ',' '};
const Qsx_Appn_Name_T
        QSX_CPNAME_IBM = {'*','I','B','M','S','R','V',' '};

typedef struct
{
  Qsx_Appn_Name_T       Network_Id;
  Qsx_Appn_Name_T       Control_Point_Name;
  char                  Reserved[4];
} Qsx_Appn_T;

typedef struct
{
  char          Number[15];
  char          Reserved[5];
} Qsx_Internet_T;

typedef union
{
  Qsx_Appn_T            Appn;
  Qsx_Internet_T        Internet;
} Qsx_Net_Union_T;

/* Constants used for newtork types                                  */
typedef char Qsx_Networks_T;
const Qsx_Networks_T    QSX_APPN     = 'A';
const Qsx_Networks_T    QSX_INTERNET = 'I';
const Qsx_Networks_T    QSX_IBMSRV   = 'R';

typedef struct
{
  Qsx_Networks_T  Code;
  Qsx_Net_Union_T Net_Union;
} Qsx_Net_T;

/*********************************************************************
 * Declaration of the problem log ID
 *********************************************************************/
typedef struct { char ch[10]; } Qsx_Problem_Number_T;

const Qsx_Problem_Number_T
        QSX_LOCAL_PROBLEM = {'*','L','O','C','A','L',' ',' ',' ',' '};
const Qsx_Problem_Number_T
        QSX_BLANK_PROBLEM = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};


typedef struct
{
  Qsx_Problem_Number_T   Number;
  Qsx_Net_T          Net_Type;
} Qsx_Prob_Log_Id_T;

/*********************************************************************
 * Declaration to be used with a device or feature description
 *********************************************************************/

/* constants used for machine or device field lengths                */
const Qsx_Field_Length_T          QSX_MACHINE_FIELD       = 4;
const Qsx_Field_Length_T          QSX_MODEL_FIELD         = 3;
const Qsx_Field_Length_T          QSX_FEATURE_FIELD       = 4;
const Qsx_Field_Length_T          QSX_SERIAL_FIELD        = 8;

typedef struct
{
  Qsx_Field_Length_T    Machine_Lng;
  Qsx_Field_Length_T    Model_Lng;
  Qsx_Field_Length_T    Feature_Lng;
  Qsx_Field_Length_T    Serial_Lng;
  char                  Machine_Type[16];
  char                  Model[16];
  char                  Feature[16];
  char                  Serial[32];
} Qsx_Machine_T;

/*********************************************************************
 * Declaration to be used with a program or product description.
 *********************************************************************/

/* Constants used for program or product field lengths               */
const Qsx_Field_Length_T          QSX_PRODUCT_FIELD       = 7;
const Qsx_Field_Length_T          QSX_VERSION_FIELD       = 2;
const Qsx_Field_Length_T          QSX_RELEASE_FIELD       = 2;
const Qsx_Field_Length_T          QSX_MOD_FIELD           = 2;
/*const Qsx_Field_Length_T          QSX_DELTALVL_FIELD      = 2;   @B2D */

typedef struct
{
  Qsx_Field_Length_T    Product_Lng;
  Qsx_Field_Length_T    Version_Lng;
  Qsx_Field_Length_T    Release_Lng;
  Qsx_Field_Length_T    Modification_Lng;
/*  Qsx_Field_Length_T    DeltaLvl_Lng;                 @B1A @B2D  */
  char                  Product_Id[15];
  char                  Version[5];
  char                  Release[5];
  char                  Modification[5];
/*  char                  DeltaLvl[2];                  @B1A @B2D  */
  char                  Reserved[2];                     /* @B1D @B2A*/
} Qsx_Product_T;

/*********************************************************************
 * Declaration used for the postal adddress.
 *********************************************************************/
typedef struct
{
  char  Address_1[36];
  char  Address_2[36];
  char  Address_3[36];
  char  City_State[36];
  char  Country[20];
  char  Zip_Code[12];
  char  State_Prov[36];      /*@F2A*/
} Qsx_Address_T;

/*********************************************************************
 * Declaration used for date and time.
 *********************************************************************/
typedef char Qsx_Century_Code_T;

const Qsx_Century_Code_T        QSX_20TH_CENTURY = '0';
const Qsx_Century_Code_T        QSX_21ST_CENTURY = '1';

typedef struct
{
  Qsx_Century_Code_T    Century[1];
  char                  Year[2];
  char                  Month[2];
  char                  Day[2];
  char                  Hour[2];
  char                  Minute[2];
  char                  Second[2];
} Qsx_Date_Time_T;

/*********************************************************************
 * Valid key types                                          @C1C, @D1C
 *********************************************************************/

typedef enum
{
  Qsx_Problem_Id          = 1,
  Qsx_Type                = 2,
  Qsx_Status              = 3,
  Qsx_User_Asn            = 4,
  Qsx_Origin_Sys          = 5,
  Qsx_Oper_Data           = 6,
  Qsx_Filter              = 7,
  Qsx_Answer              = 8,
  Qsx_Severity            = 1001,
  Qsx_Description         = 1002,
  Qsx_Crt_Data            = 1003,
  Qsx_Rpt_Dev             = 1004,
  Qsx_Fail_Resc           = 1005,
  Qsx_Rpt_Product         = 1006,
  Qsx_Iso_Info            = 1007,
  Qsx_Vfy_Status          = 1008,
  Qsx_Rcv_Status          = 1009,
  Qsx_Symptom             = 1010,
  Qsx_Media               = 1011,
  Qsx_Problem_Category    = 1012,
  Qsx_Pc_Software_Data    = 1013,
  Qsx_Ffdc_Data           = 1014,
  Qsx_Query_Status        = 1015,
  Qsx_Hardware_Location   = 1016,
  Qsx_Fru_Class           = 2000,
  Qsx_Dev_Fru             = 2001,
  Qsx_Code_Fru            = 2002,
  Qsx_Media_Fru           = 2003,
  Qsx_User_Fru            = 2004,
  Qsx_Fru_Name            = 2005,
  Qsx_Att_Fru             = 2006,
  Qsx_Cfg_Fru             = 2007,
  Qsx_Gen_Fru             = 2008,
  Qsx_Chn_Fru             = 2009,
  Qsx_Text                = 3000,
  Qsx_Text_Rcd            = 3001,
  Qsx_Num_Supt_Rcd        = 4000,
  Qsx_Spooled_Data        = 4001,
  Qsx_File_Data           = 4002,
  Qsx_Contact_Data        = 5000,
  Qsx_Contact_Rcd         = 5001,
  Qsx_Hst_Data            = 6000,
  Qsx_Hst_Rcd             = 6001,
  Qsx_Ptf_Data            = 7000,
  Qsx_Ptf_Rcd             = 7001,
  Qsx_Ptf_Options         = 7002,
  Qsx_Err_Analized        = 8000,
  Qsx_LPAR_ID             = 9000,
  Qsx_Key_Force_Int       = 70000
} Qsx_Key_T;                                           /* @C1C, @D1C */

typedef struct
{
  Qsx_Key_T     Key;
  int           Size;
} Qsx_Unknown_Key_T;

/*********************************************************************
 * General problem log structures - Key group 0
 *********************************************************************/

/*-------------------------------------------------------------------
 * Problem log identifier       Key 1
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Prob_Log_Id_T     Problem_Id;
  char                  Reserved[1];
} Qsx_Problem_Id_T;

/*-------------------------------------------------------------------
 * Problem type                 Key 2
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Mach_Det                  = 1,
  Qsx_User_Det                  = 2,
  Qsx_Ptf_Order                 = 3,
  Qsx_User_Det_Rmt              = 4,
  Qsx_Appl_Det                  = 5,
  Qsx_Pc_Machine_Detected       = 6,
  Qsx_Pc_User_Detected          = 7,
  Qsx_User_Gen                  = 8,
  Qsx_2_Force_Int               = 70000
} Qsx_Prob_Type_Values_T;

typedef struct
{
  Qsx_Key_T               Key;
  int                     Size;
  Qsx_Prob_Type_Values_T  Problem_Type;
} Qsx_Type_T;

/*-------------------------------------------------------------------
 * Problem status               Key 3
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Open,
  Qsx_Ready,
  Qsx_Sent,
  Qsx_Answered,
  Qsx_Verified,
  Qsx_Prepared,
  Qsx_Closed,
  Qsx_3_Force_Int = 70000
} Qsx_Status_Values_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Status_Values_T   Status;
} Qsx_Status_T;

/*---------------------------------------------------------------------
 * User assigned                Key 4
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  char                  User_Assigned[10];
  char                  Reserved[2];
} Qsx_User_Asn_T;

/*---------------------------------------------------------------------
 * Problem origin system        Key 5
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Orig_Local  = 1,
  Qsx_Orig_Remote = 2,
  Qsx_5_Force_Int = 70000
} Qsx_Origin_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Origin_T          Create_Location;
  Qsx_Machine_T         Origin_System;
  Qsx_Product_T         Origin_Op_Sys;
  Qsx_Date_Time_T       Create_Time;
  char                  Delta_Level[2];       /* @F3C */
} Qsx_Origin_Sys_T;


/*-------------------------------------------------------------------
 * Operational data             Key 6
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Crt_Not_Defined = -1,
  Qsx_Crt_Alert,
  Qsx_Crt_Ffdc,
  Qsx_Crt_Fast,
  Qsx_Crt_Gen,
  Qsx_Pwsi,
  Qsx_6a_Force_Int = 70000
} Qsx_Creator_T;

typedef enum
{
  Qsx_Alert_Not,
  Qsx_Alert_Not_Pending,
  Qsx_Alert_Pending,
  Qsx_6b_Force_Int = 70000
} Qsx_Alert_T;

typedef enum
{
  Qsx_Par_Manual,
  Qsx_Par_Automatic,
  Qsx_6c_Force_Int = 70000
} Qsx_Par_T;

typedef enum
{
  Qsx_Notify_Manual,
  Qsx_Notify_Automatic,
  Qsx_6d_Force_Int = 70000
} Qsx_Notify_T;

typedef enum
{
  Qsx_Message_Mode,
  Qsx_SLIC_Mode,
  Qsx_1017_Force_Int = 70000
} Qsx_Analysis_T;


typedef enum
{
  Qsx_Use_Alert_Status   = 0x00000001,
  Qsx_Use_Apar_Lib       = 0x00000002,
  Qsx_Use_Auto_Par       = 0x00000004,
  Qsx_Use_Auto_Notify    = 0x00000008,
  Qsx_Use_From_System    = 0x00000010,
  Qsx_Use_To_System      = 0x00000020,
  Qsx_Use_Prepared_For   = 0x00000040,
  Qsx_Use_6_Force_Int    = 0x7fffffff
} Qsx_Oper_Data_KC_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Oper_Data_KC_T    Key_Control;
  Qsx_Creator_T         Creator;
  Qsx_Alert_T           Alert_Status;
  Qsx_Par_T             Auto_Par;
  Qsx_Notify_T          Auto_Notify;
  char                  Apar_Lib[10];
  Qsx_Net_T             From_System;
  Qsx_Net_T             To_System;
  Qsx_Net_T             Prepared_For;
  Qsx_Date_Time_T       When_Added;
  Qsx_Date_Time_T       When_Closed;
  char                  Reserved[1];
  Qsx_Analysis_T        Analysis_Mode;
} Qsx_Oper_Data_T;

/*-------------------------------------------------------------------
 * Filter control               Key 7
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Filter_No,
  Qsx_Filter_Yes,
  Qsx_7_Force_Int = 70000
} Qsx_Filter_Code_T;

typedef struct
{
  Qsx_Key_T          Key;
  int                Size;
  Qsx_Filter_Code_T  Filter_Event;
  char               Name[10];
  char               Library[10];
  char               Group[10];
  char               Reserved[2];
} Qsx_Filter_T;

/*-------------------------------------------------------------------
 * Answer codes                 Key 8
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Use_Code_Asn     = 0x00000001,
  Qsx_Use_Code_Rtn     = 0x00000002,
  Qsx_Use_Pmr_Num      = 0x00000004,
  Qsx_Use_Brnc_Num     = 0x00000008,                           /*@F2A*/
  Qsx_Use_Ctry_Num     = 0x00000010,                           /*@F2A*/
  Qsx_Use_8_Force_Int  = 0x7fffffff
} Qsx_Ans_Code_KC_T;

typedef enum
{
  Qsx_No_Ans_Code = -1,
  Qsx_Fix_Sent,
  Qsx_Fix_Mailed,
  Qsx_Fix_Later,
  Qsx_Cvr_Ltr_Only,
  Qsx_Fix_Not_Avail,
  Qsx_Fix_On_System,
  Qsx_Fix_Local,
  Qsx_Fix_Ordered,
  Qsx_All_Ordered,
  Qsx_Exceeds_MLimit,
  Qsx_Exceeds_TLimit,
  Qsx_Exceeds_CLimit,
  Qsx_Spt_Ctr,
  Qsx_Doc_Error,
  Qsx_Not_Ent_Prod,
  Qsx_Not_Ent_Sr,
  Qsx_Not_Ent_Rpt_Sys,
  Qsx_Record_Order,
  Qsx_8_Force_Int = 70000
} Qsx_Ans_Code_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Ans_Code_KC_T     Key_Control;
  Qsx_Ans_Code_T        Ans_Code_Asn;
  Qsx_Ans_Code_T        Ans_Code_Rtn;
  char                  Ibmsrv_Pmr_Num[5];
  char                  Ibmsrv_Brc_Num[3];                     /*@F2A*/
  char                  Ibmsrv_Ctr_Num[3];                     /*@F2A*/
  /* char                  Reserved[3];                          @F2D*/
} Qsx_Answer_T;

/*********************************************************************
 * Problem description structures       Key group 1000
 *********************************************************************/

/*-------------------------------------------------------------------
 * Reference code description data
 *-------------------------------------------------------------------*/
typedef struct
{
  char                  Code[2];
  char                  Rctt_Id[10];
  char                  Rctt_Lib[10];
} Qsx_Ref_Code_Data_T;


/*-------------------------------------------------------------------
 * Problem severity             Key 1001
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Sev_High  = 1,
  Qsx_Sev_Med,
  Qsx_Sev_Low,
  Qsx_Sev_None,
  Qsx_1001_Force_Int = 70000
} Qsx_Severity_Values_T;

typedef struct
{
  Qsx_Key_T              Key;
  int                    Size;
  Qsx_Severity_Values_T  Severity;
} Qsx_Severity_T;

/*-------------------------------------------------------------------
 * Problem description message  Key 1002
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  char                  Message_Id[7];
  char                  Message_Library[10];
  char                  Message_File[10];
  char                  Reserved[1];
} Qsx_Description_T;

/*-------------------------------------------------------------------
 * Problem creation data        Key 1003
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Ref_Code_Data_T   Err_Ref;
  char                  Ref_Code_Desc_Msg[7];
  char                  Ref_Code_Desc_File[10];
  char                  Ref_Code_Desc_Lib[10];
  char                  Error_Msg_Id[7];
} Qsx_Crt_Data_T;

/*-------------------------------------------------------------------
 * Reporting device             Key 1004
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Rpt_Dev_EC          = 0x00000001,
  Qsx_Use_1004_Force_Int  = 0x7fffffff
} Qsx_Rpt_Dev_KC_T;


typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Rpt_Dev_KC_T      Key_Control;
  Qsx_Machine_T         Reporting_Device;
  char                  Ec_Number[12];
} Qsx_Rpt_Dev_T;

/*-------------------------------------------------------------------
 * Failing Resource             Key 1005
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Fail_Resc_Type      = 0x00000001,
  Qsx_Fail_Resc_Device    = 0x00000002,
  Qsx_Fail_Resc_Product   = 0x00000004,
  Qsx_Fail_Resc_Inst      = 0x00000008,
  Qsx_Fail_Resc_Hier      = 0x00000010,
  Qsx_Fail_Resc_Name      = 0x00000020,
  Qsx_Fail_Resc_Log_Id    = 0x00000040,
  Qsx_Fail_Resc_Program   = 0x00000080,
  Qsx_Fail_Resc_Force_Int = 0x7fffffff
} Qsx_Resource_KC_T;

typedef enum
{
  Qsx_No_Device_Class,
  Qsx_Machine,
  Qsx_Feature,
  Qsx_1005_Force_Int = 70000
} Qsx_Device_Class_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Resource_KC_T     Key_Control;
  Qsx_Device_Class_T    Type;
  Qsx_Machine_T         Failing_Device;
  Qsx_Product_T         Failing_Product;
  char                  Instruction[4];
  char                  Hierarchy[20];
  char                  Resource[10];
  char                  Error_Log_Id[4];
  char                  Program[10];
} Qsx_Fail_Resc_T;

/*-------------------------------------------------------------------
 * Reporting code               Key 1006
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Rpt_Name      = 0x00000001,
  Qsx_Rpt_Program   = 0x00000002,
  Qsx_Rpt_Probe     = 0x00000004,
  Qsx_Rpt_Force_Int = 0x7fffffff
} Qsx_Rpt_Product_KC_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Rpt_Product_KC_T  Key_Control;
  Qsx_Product_T         Reporting_Product;
  char                  Program[10];
  char                  Probe[4];
  char                  Reserved[2];
} Qsx_Rpt_Product_T;

/*-------------------------------------------------------------------
 * Problem analysis data        Key 1007
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_No_Iso,
  Qsx_Iso_Ok,
  Qsx_Iso_No_Prob,
  Qsx_Iso_Not_Ok,
  Qsx_Iso_Not_End,
  Qsx_Iso_Partial,
  Qsx_1007_Force_Int = 70000
} Qsx_Iso_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  int                   Times_Analyzed;
  Qsx_Iso_T             Status;
  char                  Program[8];
  Qsx_Ref_Code_Data_T   Err_Ref;
  char                  Pdp_End_Pnt[2];
} Qsx_Iso_Info_T;

/*-------------------------------------------------------------------
 * Fix verification status      Key 1008
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Vfy_Na,
  Qsx_Vfy_Avail,
  Qsx_Vfy_Fix,
  Qsx_Vfy_Failed,
  Qsx_1008_Force_Int = 70000
} Qsx_Vfy_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Vfy_T             Status;
  char                  Pdp[8];
} Qsx_Vfy_Status_T;

/*-------------------------------------------------------------------
 * Recovery status              Key 1009
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Rcv_Na,
  Qsx_Rcv_Avail,
  Qsx_Rcv_Fix,
  Qsx_Rcv_Failed,
  Qsx_1009_Force_Int = 70000
} Qsx_Rcv_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Rcv_T             Status;
  char                  Pdp[8];
} Qsx_Rcv_Status_T;

/*-------------------------------------------------------------------
 * Symptom                      Key 1010
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  char                  Symptom[256];
} Qsx_Symptom_T;

/*-------------------------------------------------------------------
 * PTF media description        Key 1011
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Auto_Sel = 1,
  Qsx_CD_media = 2,  /*F2A*/
  /*Qsx_Reel_1600,
  Qsx_Reel_6250,
  Qsx_Half_Cart,
  Qsx_8mm,
  Qsx_Quarter_Cart,
  Qsx_Quarter_Mini_Cart,   @F2D*/
  Qsx_1011_Force_Int = 70000
} Qsx_Media_Type_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Field_Length_T    Machine_Lng;
  Qsx_Field_Length_T    Model_Lng;
  Qsx_Media_Type_T      Media;
  char                  Machine_Type[16];
  char                  Model[16];
} Qsx_Media_T;

/*-------------------------------------------------------------------
 * Problem category             Key 1012
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Category_Not_Set  = -1,
  Qsx_Category_Report,
  Qsx_Category_Critical,
  Qsx_Category_Log_Only,
  Qsx_1012_Force_Int = 70000
} Qsx_Category_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Category_T        Category;
} Qsx_Problem_Category_T;

/*-------------------------------------------------------------------
 * Client software information  Key 1013
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  int                   Path_Name_Length;
  int                   Product_Id_Length;
  int                   Version_Length;
  int                   Program_Length;
  int                   Function_Length;
  int                   Client_Id_Length;
  int                   Contact_Info_Length;
  char                  Path_Name[1024];
  char                  Product_Id[64];
  char                  Version[64];
  char                  Program[64];
  char                  Function[64];
  char                  Client_Id[256];
  char                  Contact_Info[256];
  Qsx_Internet_T        Address;
} Qsx_Pc_Software_Data_T;

/*-------------------------------------------------------------------
 * First failure data capture data      Key 1014
 *-------------------------------------------------------------------*/
const Qsx_Field_Length_T  QSX_OBJECT_LENGTH = 10;

typedef enum
{
  Qsx_Use_Ffdc_Count     = 0x00000001,
  Qsx_Use_Object_Data    = 0x00000002,
  Qsx_Use_1014_Force_Int = 0x7fffffff
} Qsx_Ffdc_KC_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Ffdc_KC_T         Key_Control;
  int                   Count;
  Qsx_Field_Length_T    Name_Length;
  char                  Object_Name[256];
  Qsx_Product_T         Detecting_Product;
} Qsx_Ffdc_Data_T;

/*-------------------------------------------------------------------
 * Query problem status         Key 1015
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Query_Not_Set,
  Qsx_Query_Service_Opened,
  Qsx_Query_Service_Dispatched,
  Qsx_Query_Closed,
  Qsx_Query_Closed_Dispatched,
  Qsx_1015_Force_Int = 70000
} Qsx_Query_Type_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Query_Type_T      Status;
} Qsx_Query_Status_T;

/*-------------------------------------------------------------------
 * Device location              Key 1016
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  char                  Frame_Id_Location[4];
  char                  Device_Location[5];
  char                  Card_Location[4];
} Qsx_Hardware_Location_T;
/*********************************************************************
 * FRU record structures        Key group 2000
 *********************************************************************/
typedef enum
{
  Qsx_All_Fru,
  Qsx_Pof_Fru,
  Qsx_Piso_Fru,
  Qsx_Iso_Fru,
  Qsx_Ver_Fru,
  Qsx_Rcv_Fru,
  Qsx_Ans_Fru,
  Qsx_2000_Force_Int = 70000
} Qsx_Fru_Class_Values_T;

typedef struct
{
  Qsx_Fru_Class_Values_T Class;
  int                    Probability;
  char                   Fru_Code[4];
  char                   Fru_Message[7];
  char                   Reserved[1];
} Qsx_Fru_Header_T;

/*-------------------------------------------------------------------
 * Select FRU to work with      Key 2000
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T                     Key;
  int                           Size;
  Qsx_Fru_Class_Values_T        Class;
  int                           Count;
} Qsx_Fru_Class_T;

/*-------------------------------------------------------------------
 * Device FRU type              Key 2001
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_RISC_System_Device,
  Qsx_Non_RISC_System_Device,
  Qsx_2001_Force_Int = 70000
} Qsx_Device_Type_T;

typedef struct
{
  int   Transport_Type;
  int   Bus_Number;
  int   Card_Number;
  int   Board_Number;
  int   Address_Type;
  int   Bus_Address;
  int   Dependent_Address_2;
  int   Dependent_Address_3;
  int   Dependent_Address_4;
  int   Dependent_Address_5;
} Qsx_Risc_Data_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  int                   Loc_Lng;
  int                   Ccsid;
  Qsx_Field_Length_T    Rack_Serial_Length;
  Qsx_Machine_T         Device;
  char                  Document_Message[7];
  char                  Loc[256];
  char                  Resource_Name[10];
  char                  Name[10];
  char                  Rack_Serial[32];
  char                  Card_Position[2];
  char                  Dsa_Bus_Number[2];
  char                  Unit_Address[4];
  char                  Port[2];
  char                  Reserved[3];
  Qsx_Device_Type_T     Device_Type;
  Qsx_Risc_Data_T       Device_Data;
} Qsx_Dev_Fru_T;

/*-------------------------------------------------------------------
 * Code FRU type                Key 2002
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  Qsx_Product_T         Code_Fru;
  char                  Primary_Function_Group[4];
  char                  Secondary_Function_Group[4];
  char                  Module_Name[10];
  char                  Document_Message[7];
  char                  Reserved[3];
} Qsx_Code_Fru_T;

/*-------------------------------------------------------------------
 * Media FRU type               Key 2003
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  Qsx_Machine_T         Med_Type;
  char                  Document_Message[7];
  char                  Resource[10];
  char                  Volume_Id[8];
  char                  Reserved[3];
} Qsx_Media_Fru_T;

/*-------------------------------------------------------------------
 * User FRU type                Key 2004
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  char                  Document_Message[7];
  char                  Reserved[1];
} Qsx_User_Fru_T;

/*-------------------------------------------------------------------
 * FRU name                     Key 2005
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  char                  Document_Message[7];
  char                  Part_Location[25];
  char                  Part_Number[6][12];
} Qsx_Fru_Name_T;

/*-------------------------------------------------------------------
 * Attached to FRU              Key 2006
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  char                  Document_Message[7];
  char                  Part_Location[25];
  char                  Part_Number[6][12];
} Qsx_Att_Fru_T;

/*-------------------------------------------------------------------
 * Configuration FRU            Key 2007
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  int                   Ccsid;
  int                   Text_Lng;
  char                  Screen_Id[8];
  char                  Text[30];
  char                  Reserved[2];
} Qsx_Cfg_Fru_T;

/*-------------------------------------------------------------------
 * General FRU                  Key 2008
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  int                   Ccsid;
  int                   Text_Lng;
  char                  Screen_Id[8];
  char                  Text[30];
  char                  Reserved[2];
} Qsx_Gen_Fru_T;

/*-------------------------------------------------------------------
 * Channel attached FRU         Key 2009
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Fru_Header_T      Header;
  char                  Document_Message[7];
  char                  Fru_Fault[4];
  char                  Fru_Sense_Bytes[32];
  char                  Reserved[1];
} Qsx_Chn_Fru_T;

/*********************************************************************
 * Text structures              Key group 3000
 *********************************************************************/
typedef enum
{
  Qsx_All_Text,
  Qsx_Title,
  Qsx_Prob_Desc,
  Qsx_Qry_Status,
  Qsx_Private,
  Qsx_General,
  Qsx_3000_Force_Int = 70000
} Qsx_Txt_Values_T;

/*-------------------------------------------------------------------
 * Text record                  Key 3000
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Txt_Values_T      Type;
  int                   Count;
} Qsx_Text_T;

/*-------------------------------------------------------------------
 * Text data                    Key 3001
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Txt_Values_T      Type;
  int                   Ccsid;
  int                   Text_Length;
  char                  Reserved[12];
  void                 *Text_Buffer;
} Qsx_Text_Rcd_T;

/*********************************************************************
 * Supporting data structures   Key group 4000
 *********************************************************************/

/*-------------------------------------------------------------------
 * Supporting record            Key 4000
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_All_Spt,
  Qsx_Spooled_File,
  Qsx_Data_File,
  Qsx_4000_Force_Int = 70000
} Qsx_Spt_Rcd_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Spt_Rcd_T         Type;
  int                   Count;
} Qsx_Num_Supt_Rcd_T;

/*-------------------------------------------------------------------
 * Spooled Fild Data            Key 4001
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  int                   File_Number;
  char                  Job_Name[10];
  char                  User[10];
  char                  Job_Number[6];
  char                  File_Name[10];
} Qsx_Spooled_Data_T;

/*-------------------------------------------------------------------
 * Data Base File Data          Key 4002
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  char                  File_Name[10];
  char                  Library[10];
  char                  Member[10];
  char                  Reserved[2];
} Qsx_File_Data_T;

/*********************************************************************
 * Contact information structures Key group 5000
 *********************************************************************/

/*-------------------------------------------------------------------
 * Contact information record   Key 5000
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Contact_All,
  Qsx_Contact_Local,
  Qsx_Contact_Remote,
  Qsx_5000_Force_Int = 70000
} Qsx_Contact_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Contact_T         Type;
  int                   Count;
} Qsx_Contact_Data_T;

/*-------------------------------------------------------------------
 * Contact data                 Key 5001
 *-------------------------------------------------------------------*/
/* National language version for cover letter                        */
typedef struct { char ch[4]; } Qsx_Nlv_T;

const Qsx_Nlv_T         QSX_ARABIC              =  {'2','9','5','4'};
const Qsx_Nlv_T         QSX_BELGIUM_DUTCH       =  {'2','9','6','3'};
const Qsx_Nlv_T         QSX_BELGIUM_FRENCH      =  {'2','9','6','6'};
const Qsx_Nlv_T         QSX_BRAZIL_PORTUGUESE   =  {'2','9','8','0'};
const Qsx_Nlv_T         QSX_CANADIAN_FRENCH     =  {'2','9','8','1'};
const Qsx_Nlv_T         QSX_CHINESE_TRADITIONAL =  {'2','9','8','7'};
const Qsx_Nlv_T         QSX_CHINESE_SIMPLIFIED  =  {'2','9','8','9'};
const Qsx_Nlv_T         QSX_CROATION            =  {'2','9','1','2'};
const Qsx_Nlv_T         QSX_CZECH               =  {'2','9','7','5'};
const Qsx_Nlv_T         QSX_DANISH              =  {'2','9','2','6'};
const Qsx_Nlv_T         QSX_DUTCH               =  {'2','9','2','3'};
const Qsx_Nlv_T         QSX_ENGLISH             =  {'2','9','2','4'};
const Qsx_Nlv_T         QSX_ENGLISH_UC          =  {'2','9','5','0'};
const Qsx_Nlv_T         QSX_ENGLISH_UC_DBCS     =  {'2','9','3','8'};
const Qsx_Nlv_T         QSX_ENGLISH_ULC_DBCS    =  {'2','9','8','4'};
const Qsx_Nlv_T         QSX_FARSI               =  {'2','9','9','8'};
const Qsx_Nlv_T         QSX_FINNISH             =  {'2','9','2','5'};
const Qsx_Nlv_T         QSX_FRENCH              =  {'2','9','2','8'};
const Qsx_Nlv_T         QSX_FRENCH_MNCS         =  {'2','9','4','0'};
const Qsx_Nlv_T         QSX_GERMAN              =  {'2','9','2','9'};
const Qsx_Nlv_T         QSX_GERMAN_MNCS         =  {'2','9','3','9'};
const Qsx_Nlv_T         QSX_GREEK               =  {'2','9','5','7'};
const Qsx_Nlv_T         QSX_HEBREW              =  {'2','9','6','1'};
const Qsx_Nlv_T         QSX_HUNGARIAN           =  {'2','9','7','6'};
const Qsx_Nlv_T         QSX_ICELANDIC           =  {'2','9','5','8'};
const Qsx_Nlv_T         QSX_HANGEUL             =  {'2','9','8','6'};
const Qsx_Nlv_T         QSX_ITALIAN             =  {'2','9','3','2'};
const Qsx_Nlv_T         QSX_ITALIAN_MNCS        =  {'2','9','4','2'};
const Qsx_Nlv_T         QSX_JAPANESE            =  {'2','9','6','2'};
const Qsx_Nlv_T         QSX_NORWEGIAN           =  {'2','9','3','3'};
const Qsx_Nlv_T         QSX_POLISH              =  {'2','9','7','8'};
const Qsx_Nlv_T         QSX_PORTUGUESE          =  {'2','9','2','2'};
const Qsx_Nlv_T         QSX_PORTUGUESE_MNCS     =  {'2','9','9','6'};
const Qsx_Nlv_T         QSX_RUSSIAN             =  {'2','9','7','9'};
const Qsx_Nlv_T         QSX_SLOVAKIAN           =  {'2','9','9','4'};
const Qsx_Nlv_T         QSX_SLOVENIAN           =  {'2','9','1','1'};
const Qsx_Nlv_T         QSX_SPANISH             =  {'2','9','3','1'};
const Qsx_Nlv_T         QSX_SWEDISH             =  {'2','9','3','7'};
const Qsx_Nlv_T         QSX_TAHI                =  {'2','9','7','2'};
const Qsx_Nlv_T         QSX_TURKISH             =  {'2','9','5','6'};

typedef enum
{
  Qsx_Cdb_Nlv            = 0x00000001,
  Qsx_Cdb_Corp_Name      = 0x00000002,
  Qsx_Cdb_Contact        = 0x00000004,
  Qsx_Cdb_Pri_Phone      = 0x00000008,
  Qsx_Cdb_Sec_Phone      = 0x00000010,
  Qsx_Cdb_Address        = 0x00000020,
  Qsx_Cdb_Ccsid          = 0x00000040,
  Qsx_Cdb_Pri_Fax_Phone  = 0x00000080,
  Qsx_Cdb_Sec_Fax_Phone  = 0x00000100,
  Qsx_Cdb_Pri_Email      = 0x00000200,           /*@F2A*/
  Qsx_Cdb_Sec_Email      = 0x00000400,           /*@F2A*/
  Qsx_Cdb_Force_Int      = 0x7fffffff
} Qsx_Contact_Ctl_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Contact_Ctl_T     Key_Control;
  Qsx_Contact_T         Type;
  int                   Ccsid;
  Qsx_Nlv_T             Nlv;
  char                  Corp_Name[36];
  char                  Contact[36];
  char                  Pri_Phone[30];
  char                  Sec_Phone[30];
  char                  Pri_Fax_Phone[30];
  char                  Sec_Fax_Phone[30];
  Qsx_Address_T         Corp_Address;
  char                  Pri_Email[256];         /*@F2A*/
  char                  Sec_Email[256];         /*@F2A*/
}Qsx_Contact_Rcd_T;

/*********************************************************************
 * Problem history structures   Key group 6000
 *********************************************************************/

/*-------------------------------------------------------------------
 * History record               Key 6000
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Hst_All,
  Qsx_Hst_Last,
  Qsx_6000_Force_Int = 70000
} Qsx_Hst_Read_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Hst_Read_T        Type;
  int                   Count;
} Qsx_Hst_Data_T;

/*-------------------------------------------------------------------
 * History data                 Key 6001
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Hst_Type_Closed,
  Qsx_Hst_Type_Opened,
  Qsx_Hst_Type_Request_Received,
  Qsx_Hst_Type_Alert_Opened,
  Qsx_Hst_Type_Analyzed,
  Qsx_Hst_Type_Verify_Test,
  Qsx_Hst_Type_Recovery_Test,
  Qsx_Hst_Type_Prepared,
  Qsx_Hst_Type_Sent,
  Qsx_Hst_Type_Answered,
  Qsx_Hst_Type_Response_Sent,
  Qsx_Hst_Type_Voice,
  Qsx_Hst_Type_Fixes_Sent,
  Qsx_Hst_Type_Change_Request,
  Qsx_Hst_Type_Change_Request_Ended,
  Qsx_Hst_Type_Fix_Verified,
  Qsx_Hst_Type_Remote_Analysis,
  Qsx_Hst_Type_Remote_Verify_Test,
  Qsx_Hst_Type_Remote_Recovery_Test,
  Qsx_Hst_Type_Alert_Created,
  Qsx_Hst_Type_Apar_Created,
  Qsx_Hst_Type_Apar_Data_Collected,
  Qsx_Hst_Type_Apar_Data_Restored,
  Qsx_Hst_Type_Apar_Data_Deleted,
  Qsx_Hst_Type_Problem_Changed,
  Qsx_Hst_Type_Problem_Deleted,
  Qsx_Hst_Type_Recurring_Problem,
  Qsx_Hst_Type_Status_Changed,
  Qsx_Hst_Type_Query_Sent,
  Qsx_Hst_Type_Par_Complete,
  Qsx_Hst_Type_Par_Not_Comp_Src,
  Qsx_Hst_Type_Par_Not_Comp_Sbmjob,
  Qsx_Hst_Type_Par_Failed,
  Qsx_Hst_Type_Notify_Complete,
  Qsx_Hst_Type_Notify_Not_Comp_Src,
  Qsx_Hst_Type_Notify_Not_Comp_Sbmjob,
  Qsx_Hst_Type_Notify_Failed,
  Qsx_Hst_Type_Problem_Analysis_Failed,
  Qsx_6001_Force_Int = 70000
} Qsx_Hst_Types_T;

typedef enum
{
  Qsx_No_Change_Data      = 0x00000000,
  Qsx_Use_Change_Data     = 0x00000001,
  Qsx_Use_6001_Force_Int  = 0x7fffffff
} Qsx_Hst_Ctl_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Hst_Ctl_T         Key_Control;
  Qsx_Hst_Types_T       Type;
  Qsx_Date_Time_T       Time;
  char                  User[10];
  char                  Change_Request[10];
  char                  Change_Number[6];
  char                  Reserved[1];
} Qsx_Hst_Rcd_T;

/*********************************************************************
 * PTF record structures        Key group 7000
 *********************************************************************/

/*-------------------------------------------------------------------
 * PTF record - 7000
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  int                   Count;
} Qsx_Ptf_Data_T;

/*-------------------------------------------------------------------
 * PTF data                     Key 7001
 *-------------------------------------------------------------------*/
const Qsx_Field_Length_T          QSX_PTF_ID_LENGTH       = 7;
const char QSX_ONLY_PRODUCT[15] =
		{'*','O','N','L','Y','*','P','R','O','D','U','C','T','*','*'};
const char QSX_ONLY_VERSION[5] = {'*','O','N','L','Y'};

typedef enum
{
  Qsx_Ptf_Status_Not_Req,
  Qsx_Ptf_Status_Req,
  Qsx_7001a_Force_Int = 70000
} Qsx_Ptf_Req_Flag_T;

typedef enum
{
  Qsx_Ptf_Not_Sent,
  Qsx_Ptf_Sent_Req,
  Qsx_7001b_Force_Int = 70000
} Qsx_Ptf_Sent_Flag_T;

typedef enum
{
  Qsx_Use_Status         = 0x00000001,
  Qsx_Use_Sent           = 0x00000002,
  Qsx_Use_7001_Force_Int = 0x7fffffff
} Qsx_Ptf_Rcd_KC_T;

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  int                   Key_Control;
  Qsx_Ptf_Req_Flag_T    Ptf_Status;
  Qsx_Ptf_Sent_Flag_T   Ptf_Sent;
  Qsx_Field_Length_T    Ptf_Id_Lng;
  char                  Ptf_Id[20];
  Qsx_Product_T         Ptf_Product;
  char                  Ptf_minLevel[2];     /*@F2A */
  char                  Ptf_maxLevel[2];     /*@F2A */
  char                  Ptf_image;           /*@F2A */
} Qsx_Ptf_Rcd_T;

/*-------------------------------------------------------------------
 * PTF processing options       Key 7002
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Ptf_All,
  Qsx_Ptf_Cover_Letter_Only,
  Qsx_7002a_Force_Int = 70000
} Qsx_Ptf_Order_Type_T;

typedef enum
{
  Qsx_Ptf_Order_No_Requisites,
  Qsx_Ptf_Order_With_Requisites,
  Qsx_7002b_Force_Int  = 70000
} Qsx_Ptf_Order_Option_T;

typedef enum
{
  Qsx_Ptf_Reorder_No,
  Qsx_Ptf_Reorder_Yes,
  Qsx_7002c_Force_Int = 70000
} Qsx_Ptf_Reorder_Option_T;

typedef enum
{
  Qsx_Ptf_Any_Delivery_Mode,
  Qsx_Ptf_Data_Link_Only,
  Qsx_7002d_Force_Int = 70000
} Qsx_Ptf_Delivery_Option_T;

typedef enum
{
  Qsx_Ptf_CheckPTF_No,
  Qsx_Ptf_CheckPTF_Yes,
  Qsx_7002e_Force_Int = 70000
} Qsx_Ptf_CheckPTF_Option_T;                 /*@F2A*/

typedef enum
{
  Qsx_Ptf_Dlvyfmt_Savf,
  Qsx_Ptf_Dlvyfmt_Image,
  Qsx_7002f_Force_Int = 70000
} Qsx_Ptf_Dlvyfmt_Option_T;                  /*@F2A*/


typedef enum
{
  Qsx_Use_Order_Type      = 0x00000001,
  Qsx_Use_Order_Option    = 0x00000002,
  Qsx_Use_Reorder_Option  = 0x00000004,
  Qsx_Use_Delivery_Option = 0x00000008,
  Qsx_Use_CheckPtf_Option = 0x00000010,     /*@F2A*/
  Qsx_Use_Dlvyfmt_Option  = 0x00000020,     /*@F2A*/
  Qsx_Use_Imagedir_Option = 0x00000040,     /*@F2A*/
  Qsx_Use_Imagepfx_Option = 0x00000080,     /*@F2A*/
  Qsx_Use_7002_Force_Int  = 0x7fffffff
} Qsx_Ptf_Opt_KC_T;


typedef struct
{
  Qsx_Key_T                     Key;
  int                           Size;
  Qsx_Ptf_Opt_KC_T              Key_Control;
  Qsx_Ptf_Order_Type_T          Type;
  Qsx_Ptf_Order_Option_T        Option;
  Qsx_Ptf_Reorder_Option_T      Reorder;
  Qsx_Ptf_Delivery_Option_T     Delivery;
  Qsx_Ptf_CheckPTF_Option_T     Checkptf;     /*@F2A*/
  Qsx_Ptf_Dlvyfmt_Option_T      Dlvyfmt;      /*@F2A*/
  char                          Imagedir[64]; /*@F2A*/
  char                          Imagepfx[10]; /*@F2A*/
} Qsx_Ptf_Options_T;

/*-------------------------------------------------------------------
 * Error Analized Flag          Key 8000                  @C1A, @F1C
 *-------------------------------------------------------------------*/
typedef enum
{
  Qsx_Err_Anz_No = 0x00000000,                               /* @F1C */
  Qsx_Err_Anz_Yes = 0x00000001                               /* @F1C */
} Qsx_Err_Anz_T;                                             /* @C1A */

typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  Qsx_Err_Anz_T         EAFFlag;
} Qsx_Err_Analized_T;                                        /* @C1A */

/*-------------------------------------------------------------------
 * Local Partition ID           Key 9000                        @D1A
 *-------------------------------------------------------------------*/
typedef struct
{
  Qsx_Key_T             Key;
  int                   Size;
  char                  LPARID;
} Qsx_LPAR_ID_T;                                             /* @D1A */

/*********************************************************************
 * Key pointer union                                        @C1C, @D1C
 *********************************************************************/
typedef union
{
  Qsx_Unknown_Key_T             *Unknown_Key;
  Qsx_Problem_Id_T              *Problem_Id;          /* key 1       */
  Qsx_Type_T                    *Type;                /* key 2       */
  Qsx_Status_T                  *Status;              /* key 3       */
  Qsx_User_Asn_T                *User_Asn;            /* key 4       */
  Qsx_Origin_Sys_T              *Origin_Sys;          /* key 5       */
  Qsx_Oper_Data_T               *Oper_Data;           /* key 6       */
  Qsx_Filter_T                  *Filter;              /* key 7       */
  Qsx_Answer_T                  *Answer;              /* key 8       */
  Qsx_Severity_T                *Severity;            /* key 1001    */
  Qsx_Description_T             *Description;         /* key 1002    */
  Qsx_Crt_Data_T                *Crt_Data;            /* key 1003    */
  Qsx_Rpt_Dev_T                 *Rpt_Dev;             /* key 1004    */
  Qsx_Fail_Resc_T               *Fail_Resc;           /* key 1005    */
  Qsx_Rpt_Product_T             *Rpt_Product;         /* key 1006    */
  Qsx_Iso_Info_T                *Iso_Info;            /* key 1007    */
  Qsx_Vfy_Status_T              *Vfy_Status;          /* key 1008    */
  Qsx_Rcv_Status_T              *Rcv_Status;          /* key 1009    */
  Qsx_Symptom_T                 *Symptom;             /* key 1010    */
  Qsx_Media_T                   *Media;               /* key 1011    */
  Qsx_Problem_Category_T        *Category;            /* key 1012    */
  Qsx_Pc_Software_Data_T        *Pc_Software_Data;    /* key 1013    */
  Qsx_Ffdc_Data_T               *Ffdc_Data;           /* key 1014    */
  Qsx_Query_Status_T            *Query_Status;        /* key 1015    */
  Qsx_Hardware_Location_T       *Device_Location;     /* key 1016    */
  Qsx_Fru_Class_T               *Fru_Class;           /* key 2000    */
  Qsx_Dev_Fru_T                 *Dev_Fru;             /* key 2001    */
  Qsx_Code_Fru_T                *Code_Fru;            /* key 2002    */
  Qsx_Media_Fru_T               *Media_Fru;           /* key 2003    */
  Qsx_User_Fru_T                *User_Fru;            /* key 2004    */
  Qsx_Att_Fru_T                 *Att_Fru;             /* key 2005    */
  Qsx_Fru_Name_T                *Fru_Name;            /* key 2006    */
  Qsx_Cfg_Fru_T                 *Cfg_Fru;             /* key 2007    */
  Qsx_Gen_Fru_T                 *Gen_Fru;             /* key 2008    */
  Qsx_Chn_Fru_T                 *Chn_Fru;             /* key 2009    */
  Qsx_Text_T                    *Text;                /* key 3000    */
  Qsx_Text_Rcd_T                *Text_Rcd;            /* key 3001    */
  Qsx_Num_Supt_Rcd_T            *Num_Supt_Rcd;        /* key 4000    */
  Qsx_Spooled_Data_T            *Spooled_Data;        /* key 4001    */
  Qsx_File_Data_T               *File_Data;           /* key 4002    */
  Qsx_Contact_Data_T            *Contact_Data;        /* key 5000    */
  Qsx_Contact_Rcd_T             *Contact_Rcd;         /* key 5001    */
  Qsx_Hst_Data_T                *Hst_Data;            /* key 6000    */
  Qsx_Hst_Rcd_T                 *Hst_Rcd;             /* key 6001    */
  Qsx_Ptf_Data_T                *Ptf_Data;            /* key 7000    */
  Qsx_Ptf_Rcd_T                 *Ptf_Rcd;             /* key 7001    */
  Qsx_Ptf_Options_T             *Ptf_Options;         /* key 7002    */
  Qsx_Err_Analized_T            *Err_Analized;        /*key 8000 @C1C*/
  Qsx_LPAR_ID_T                 *LPAR_ID;             /*key 9000 @D1A*/
} Qsx_Key_Pointer_Union;                              /* @C1C, @D1C  */

typedef struct
{
  int   Bytes_Returned;
  int   Bytes_Available;
  int   Number_Of_Keys_Returned;
  int   Reserved;
} Qsx_Output_Data_Info_T;

const int QSX_AUTO_EXTEND_SPACE = -1;
/*********************************************************************
 *
 *                            API PROTOTYPES
 ********************************************************************/

#ifdef __ILEC400__
  #pragma argument (QsxStartProblemLogServices, OS, nowiden)
#else
  extern "C"
#endif
void
QsxStartProblemLogServices(int      *,
                           Qus_EC_t *);

#ifdef __ILEC400__
  #pragma argument (QsxEndProblemLogServices, OS, nowiden)
#else
  extern "C"
#endif
void
QsxEndProblemLogServices(const int *,
                         Qus_EC_t  *);

#ifdef __ILEC400__
  #pragma argument (QsxAddProblemLogEntry, OS, nowiden)
#else
  extern "C"
#endif
void
QsxAddProblemLogEntry (const int              *,
                       const Qsx_Key_Pointer_Union  [],
                       const int              *,
                       Qus_EC_t               *);

#ifdef __ILEC400__
  #pragma argument (QsxCreateProblemLogEntry, OS, nowiden)
#else
  extern "C"
#endif
void
QsxCreateProblemLogEntry(const int              *,
                         Qsx_Problem_Id_T       *,
                         const Qsx_Key_Pointer_Union  [],
                         const int              *,
                         Qus_EC_t               *);

#ifdef __ILEC400__
  #pragma argument (QsxChangeProblemLogEntry, OS, nowiden)
#else
  extern "C"
#endif
void
QsxChangeProblemLogEntry(const int              *,
                         const Qsx_Key_Pointer_Union  [],
                         const int              *,
                         Qus_EC_t               *);

#ifdef __ILEC400__
  #pragma argument (QsxDeleteProblemLogEntry, OS, nowiden)
#else
  extern "C"
#endif
void
QsxDeleteProblemLogEntry(const int              *,
                         const Qsx_Key_Pointer_Union  [],
                         const int              *,
                         Qus_EC_t               *);

#ifdef __ILEC400__
  #pragma argument (QsxRetrieveProblemLogEntry, OS, nowiden)
#else
  extern "C"
#endif
/* The name of the parameters were changed to declare new volatile */
/* variables with the previous parameter names, to avoid change all*/
/* their occurrences                                          @D1C */
void
QsxRetrieveProblemLogEntry(const int        *handle_parm,
               const Qsx_Key_Pointer_Union   input_key_array_parm[],
               const int                    *input_number_of_keys_parm,
               void                         *buffer_address_parm,
               const int                    *buffer_size_aprm,
               Qsx_Output_Data_Info_T       *output_data_info_parm,
               Qsx_Key_Pointer_Union       **output_key_array_parm,
               Qus_EC_t                     *error_code_parm );/*@D1C*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif  /* _QSXSRVPL_h */
