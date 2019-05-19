/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2006                                */
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
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QSQPRCED                                     */
/*                                                                  */
/* Descriptive Name: Process Extended Dynamic SQL                   */
/*                                                                  */
/*                                                                  */
/* Description: The Process Extended Dynamic SQL API provides       */
/*              functions to process extended dynamic SQL statements*/
/*              in an SQL package object.                           */
/*                                                                  */
/* Header Files Included:    sys/types.h                            */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qsq_sqlca_t                                      */
/*                 Qsq_sqlda_t                                      */
/*                 Qsq_SQLP0100_t                                   */
/*                 Qsq_SQLP0110_t                               @B3A*/
/*                 Qsq_SQLP0200_t                                   */
/*                 Qsq_SQLP0210_t                               @B3A*/
/*                 Qsq_SQLP0300_t                               @A2A*/
/*                 Qsq_SQLP0310_t                               @B3A*/
/*                 Qsq_SQLP0400_t                               @A5A*/
/*                 Qsq_SQLP0410_t                               @B3A*/
/*                 Qsq_SQLP0500_t                               @B2A*/
/*                                                                  */
/* Function Prototype List: QSQPRCED                                */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------- -------------------------*/
/* $A0= D2862000     3D10  940316 ROCH    :New Include              */
/* $A1= P3978934     3D60  950316 ROCH    :Fixed the statement len  */
/* $A2= D9185300     3D60  950322 ROCH    :New format SQLP0300 to   */
/*                                         support new options.     */
/*                                          - Direct map   : Y|N    */
/*                                          - Reuse SQLDA  : Y|N    */
/*                                          - Name check   : Y|N    */
/*                                          - Use pointers : Y|N    */
/*                                          - With hold    : Y|N    */
/*                                          - User Defined Field    */
/*                                         Added for R/3 port.      */
/* $A3= D94510       3D70  960509 ROCH    :Reopen option and        */
/*                                         fields for function B.   */
/* $A4= D94960       4D10  961108 ROCH    :Add CCSID option         */
/* $A5= Pxxxxxxx     4D40  980706 ROCH    :New format SQLP0400 to   */
/*                                         support new options.     */
/*                                         - Use performance areaY|N*/
/*                                         - Revalidate         Y|N */
/*                                         - sort seqence table     */
/*                                         - sort sequence library  */
/*                                         - language id            */
/*                                         - allow copy of data Y|N */
/*                                         - allow blocking     Y|N */
/*                                                                  */
/* $A6= PSA79188     4P40  990301 ROCH    :Remove nested declares   */
/*                                         top stop C++ compiler    */
/*                                         problem                  */
/* $A7= P9902424     4D50  990727 ROCH    :Add pointer types        */
/* $A8= P9910518     4D50  991209 ROCH    Add SQLVAR2 structure and */
/*                                        make sure pointer.h has   */
/*                                        not already been included */
/* $B1= D99257.2     5D30  030305 ROCH    Add Larger Decimal support*/
/* $B2= D99228.12 v5r3m0.xpf 030304 ROCH: SQL Diagnostic Area       */
/* $B3= P9A30274     5D30  030509 ROCH    Create new formats:       */
/*                                        SQLP0110, SQLP0210        */
/*                                        SQLP0310 and SQLP0410     */
/* $B4= P9A38996     5D30  030905 ROCH    Remove erroneous          */
/*                                        Qsq_Error_t structure     */
/* $B5= P9A45765     5D30  031111 ROCH    Comment out statement     */
/*                                        text fields               */
/* $B6= P9A45765     5D30  031111 ROCH    PASE support              */
/* $C1= D99956.7     5D40  041019 ROCH    Support 2MB SQL stmts     */
/* $C2= P9B04077     5D40  050727 ROCH    Add Extended User-defined */
/* $C3= P9B19653     5P30  060109 ROCH    Add Connection Handle     */
/*                                        field                     */
/* $C4= P9B20386     5P30  060302 ROCH    Add Autocommit            */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/* Additional notes about the Change Activity                       */
/* End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS *********************************/

#ifndef QSQPRCED_h
#define QSQPRCED_h

/********************************************************************/
/* Includes                                                         */
/********************************************************************/

#ifdef __OS400__
#ifndef __pointer_h                                          /* @A8A*/
#include <pointer.h>                                         /* @A7A*/
#endif                                                       /* @A8A*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
#else
#include <as400_types.h>     /* for OS/400 PASE */
typedef ILEpointer _SYSPTR;
#endif /* __OS400__ */

#ifdef __64BIT__
typedef int             sqlint32;
typedef unsigned int    sqluint32;
#else
typedef long            sqlint32;
typedef unsigned long   sqluint32;
#endif

/********************************************************************/
/* Prototype for calling API QSQPRCED                               */
/********************************************************************/

#ifdef __OS400__
#ifdef __ILEC400__
#pragma linkage(QSQPRCED,OS,nowiden)
#else
extern "OS"
#endif
void QSQPRCED( void *,      /* SQL communications area              */
                 void *,      /* SQL descriptor area                  */
                 char *,      /* format name                          */
                 void *,      /* function template                    */
                 void *,      /* error code                           */
                 ...);        /* Optional Parameter Group 1:
                             SQL diagnostic information receiver,
                             length of SQL diagnostic
                             information receiver
                             Length of fixed function template  @B3A*/
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQL Description Area.                    */
/********************************************************************/
typedef struct Qsq_sqlca
{
    unsigned char   sqldaid[8];
    sqlint32   sqlcabc;
    sqlint32   sqlcode;
    short  sqlerrml;
    unsigned char   sqlerrmc[70];
    unsigned char   sqlerrp[8];
    sqlint32   sqlerrd[6];
    unsigned char   sqlwarn[11];
    unsigned char   sqlstate[5];
}Qsq_sqlca_t;

struct sqlname
{        short length;
unsigned char data[30];
};                                 /* Took declare out of Qsq_sqlda      @A6A*/
struct sqlvar
{
    short  sqltype;
    short  sqllen;
#if (defined(__OS400__) || defined (__64BIT__))
    unsigned char   sqlres[sizeof(void*) - (2 * sizeof(short))];
#endif
    unsigned char   *sqldata;
    short  *sqlind;
    struct sqlname sqlname;
};                                /* Took declare out of Qsq_sqlda      @A6A*/

struct sqlvar2
{ struct {
    sqlint32 sqllonglen;
    char reserve1[(2 * sizeof(void*)) - sizeof(sqlint32)];
} len;
char *sqldatalen;
struct sqldistinct_type {
    short length;
    unsigned char data[30];
}  sqldatatype_name;
};                                                            /* @A8A*/

typedef struct Qsq_sqlda
{
    unsigned char   sqldaid[8];
    sqlint32   sqldabc;
    short  sqln;
    short  sqld;
    struct sqlvar sqlvar[1];
}Qsq_sqlda_t;
                         /* Took nested declares out            @A6A*/

/********************************************************************/
/* Type Definition for the SQLP0100 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0100
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short Blocking_Factor;
    short Statement_Length;
    /*char Statement_Text[];*//* Varying length                 */
}Qsq_SQLP0100_t;
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for any format that uses Statement Text in       */
/* an extension.  By using the Statement_Offset, the Statement Text */
/* would not be required to immediately follow the fixed portion of */
/* the format.                                                  @B3A*/
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_statement_data
{
    short Statement_Length;
    /*char Statement_Text[];*/    /* Varying length                 */
} Qsq_statement_data_t;           /*                            @B3A*/
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0110 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0110
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short Blocking_Factor;
    int  Statement_Offset;
    char Hex_Literal_Option;
    char Statement_Length_Type;                               /* @C1A*/
    char Reserved_Space[12];                                  /* @C1C*/
    /*Qsq_statement_data_t Text;*//* Varying length              @B5C*/
}Qsq_SQLP0110_t;
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0200 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0200
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short Blocking_Factor;
    short Scrollable_Option;
    short Position_Option;
    int  Relative_Record;
    int  Rows_To_Insert;
    short Statement_Length;
    /*char Statement_Text[];*//* Varying length                  */
}Qsq_SQLP0200_t;
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0210 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0210
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short  Blocking_Factor;
    short  Scrollable_Option;
    short  Position_Option;
    int  Relative_Record;
    int  Rows_To_Insert;
    int  Statement_Offset;
    char Hex_Literal_Option;
    char Statement_Length_Type;                               /* @C1A*/
    char Reserved_Space[16];                                  /* @C1C*/
    /*Qsq_statement_data_t Text;*//* Varying length              @B5C*/
}Qsq_SQLP0210_t;
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0300 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                             @A2A*/
/*       Add close file name, close library name, and reopen.   @A3A*/
/*       Add CCSID.                                             @A4A*/
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0300
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short  Blocking_Factor;
    short  Scrollable_Option;
    short  Position_Option;
    int  Relative_Record;
    int  Rows_To_Insert;
    char Direct_Map;
    char Reuse_DA;
    char Name_Check;
    char Use_Ptrs;
    char With_Hold;
    char User_Defined_Field[18];
    char Close_File_Name[10];
    char Close_Library_Name[10];
    char Reopen;
    char Use_Perf;                                       /*@A5A*/
    char Reval;                                          /*@A5A*/
    unsigned short int Max_Scale;                        /*@B1A*/
    char Max_Precision;                                  /*@B1A*/
    char Min_Divide_Scale;                               /*@B1A*/
    int  Statement_Text_CCSID;
    _SYSPTR package_syp;
    _SYSPTR main_program_syp;
    short Statement_Length;
    /*char Statement_Text[];*//* Varying length                  */
}Qsq_SQLP0300_t;
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0310 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0310
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short  Blocking_Factor;
    short  Scrollable_Option;
    short  Position_Option;
    int  Relative_Record;
    int  Rows_To_Insert;
    char Direct_Map;
    char Reuse_DA;
    char Name_Check;
    char Use_Ptrs;
    char With_Hold;
    char User_Defined_Field[18];
    char Close_File_Name[10];
    char Close_Library_Name[10];
    char Reopen;
    char Use_Perf;                                       /*@A5A*/
    char Reval;                                          /*@A5A*/
    unsigned short int Max_Scale;                        /*@B1A*/
    char Max_Precision;                                  /*@B1A*/
    char Min_Divide_Scale;                               /*@B1A*/
    int  Statement_Text_CCSID;
    _SYSPTR package_syp;
    _SYSPTR main_program_syp;
    int  Statement_Offset;
    char Hex_Literal_Option;
    char Statement_Length_Type;                               /* @C1A*/
    unsigned short int Ext_User_Defined_Field_Length;         /* @C2A*/
    int Ext_User_Defined_Field_Offset;                        /* @C2A*/
    int  Length_Of_Additional_Fields;                    /* @C4A*/
    int  Connection_Handle;                              /* @C4A*/
    char Auto_Commit;                                    /* @C4A*/
    /*Qsq_statement_data_t Text;*//* Varying length              @B5C*/
}Qsq_SQLP0310_t;
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0400 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/*       Add close file name, close library name, and reopen.       */
/*       Add CCSID.                                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0400
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short  Blocking_Factor;
    short  Scrollable_Option;
    short  Position_Option;
    int  Relative_Record;
    int  Rows_To_Insert;
    char Direct_Map;
    char Reuse_DA;
    char Name_Check;
    char Use_Ptrs;
    char With_Hold;
    char User_Defined_Field[18];
    char Close_File_Name[10];
    char Close_Library_Name[10];
    char Reopen;
    char Use_Perf;
    char Reval;
    unsigned short int Max_Scale;                        /*@B1A*/
    char Max_Precision;                                  /*@B1A*/
    char Min_Divide_Scale;                               /*@B1A*/
    int  Statement_Text_CCSID;
    _SYSPTR package_syp;
    _SYSPTR main_program_syp;
    char Sort_Sequence_Table[10];
    char Sort_Sequence_Library[10];
    char Language_ID[10];
    char Allow_Copy_Data;
    char Allow_Blocking;
    short Statement_Length;
    /*char Statement_Text[];*//* Varying length                  */
}Qsq_SQLP0400_t;              /*                             @A5A*/
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0410 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0410
{
    char Function;
    char SQL_Package_Name[10];
    char Library_Name[10];
    char Main_Pgm[10];
    char Main_Lib[10];
    char Statement_Name[18];
    char Cursor_Name[18];
    char Open_Options;
    char Clause_For_Describe;
    char Commitment_Control;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    short  Blocking_Factor;
    short  Scrollable_Option;
    short  Position_Option;
    int  Relative_Record;
    int  Rows_To_Insert;
    char Direct_Map;
    char Reuse_DA;
    char Name_Check;
    char Use_Ptrs;
    char With_Hold;
    char User_Defined_Field[18];
    char Close_File_Name[10];
    char Close_Library_Name[10];
    char Reopen;
    char Use_Perf;
    char Reval;
    unsigned short int Max_Scale;                        /*@B1A*/
    char Max_Precision;                                  /*@B1A*/
    char Min_Divide_Scale;                               /*@B1A*/
    int  Statement_Text_CCSID;
    _SYSPTR package_syp;
    _SYSPTR main_program_syp;
    char Sort_Sequence_Table[10];
    char Sort_Sequence_Library[10];
    char Language_ID[10];
    char Allow_Copy_Data;
    char Allow_Blocking;
    int  Statement_Offset;
    char Hex_Literal_Option;
    char Statement_Length_Type;                               /* @C1A*/
    unsigned short int Ext_User_Defined_Field_Length;         /* @C2A*/
    int Ext_User_Defined_Field_Offset;                        /* @C2A*/
    int  Length_Of_Additional_Fields;                    /* @C4A*/
    int  Connection_Handle;                              /* @C4A*/
    char Auto_Commit;                                    /* @C4A*/
    /*Qsq_statement_data_t Text;*//* Varying length              @B5C*/
}Qsq_SQLP0410_t;
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the SQLP0500 format of the QSQPRCED API.     */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_SQLP0500
{
    char Function;
    char Date_Format[3];
    char Date_Separator;
    char Time_Format[3];
    char Time_Separator;
    char Naming_Option[3];
    char Decimal_Point;
    char Reserved_Space[3];
    int  Diag_Info_CCSID;
    int  Diag_Info_CondNum;
    char Reserved_Space2[4];
    int  Types_List_Offset;
    int  Info_Items_Number;
    /*int  Info_Types_List[]; *//* Varying length             */
}Qsq_SQLP0500_t;           /*                             @B2A*/
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

/********************************************************************/
/* Type Definition for the Diagnostic Information Data formats of   */
/* the QSQPRCED API.                                                */
/*                                                                  */
/* NOTE: The following type definitions only define the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_diaginfo_data
{
    int  Bytes_Returned;
    int  Bytes_Available;
    int  Diag_Items_Number;
    /*Qsq_Diag_Item_t Diag_Item[]; */
} Qsq_diaginfo_data_t;           /*                             @B2A*/
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

#pragma enum(int)                /*                             @B2A*/
enum diagitem_key
{
    /* Key Values and Data Types of
     Statement Diagnostic Information Items
     */
    COMMAND_FUNCTION                = 101,
    COMMAND_FUNCTION_CODE           = 102,
    DB2_RELATIVE_COST_ESTIMATE      = 103,
    DB2_DIAGNOSTIC_CONVERSION_ERROR = 104,
    DB2_GET_DIAGNOSTICS_DIAGNOSTICS = 105,
    DB2_LAST_ROW                    = 106,
    DB2_NUMBER_CONNECTIONS          = 107,
    DB2_NUMBER_PARAMETER_MARKERS    = 108,
    DB2_NUMBER_RESULT_SETS          = 109,
    DB2_NUMBER_ROWS                 = 110,
    DB2_NUMBER_SUCCESSFUL_SUBSTMTS  = 111,
    DB2_RETURN_STATUS               = 112,
    DB2_ROW_COUNT_SECONDARY         = 113,
    DB2_ROW_LENGTH                  = 114,
    DB2_SQL_ATTR_CONCURRENCY        = 115,
    DB2_SQL_ATTR_CURSOR_CAPABILITY  = 116,
    DB2_SQL_ATTR_CURSOR_HOLD        = 117,
    DB2_SQL_ATTR_CURSOR_ROWSET      = 118,
    DB2_SQL_ATTR_CURSOR_SCROLLABLE  = 119,
    DB2_SQL_ATTR_CURSOR_SENSITIVITY = 120,
    DB2_SQL_ATTR_CURSOR_TYPE        = 121,
    DYNAMIC_FUNCTION                = 122,
    DYNAMIC_FUNCTION_CODE           = 123,
    MORE                            = 124,
    NUMBER                          = 125,
    ROW_COUNT                       = 126,
    TRANSACTION_ACTIVE              = 127,
    TRANSACTIONS_COMMITTED          = 128,
    TRANSACTIONS_ROLLED_BACK        = 129,
    /* Key Values and Data Types of
     Condition Diagnostic Information Items
     */
    CATALOG_NAME                    = 201,
    CLASS_ORIGIN                    = 202,
    COLUMN_NAME                     = 203,
    CONDITION_IDENTIFIER            = 204,
    CONDITION_NUMBER                = 205,
    CONSTRAINT_CATALOG              = 206,
    CONSTRAINT_NAME                 = 207,
    CONSTRAINT_SCHEMA               = 208,
    CURSOR_NAME                     = 209,
    DB2_ERROR_CODE1                 = 210,
    DB2_ERROR_CODE2                 = 211,
    DB2_ERROR_CODE3                 = 212,
    DB2_ERROR_CODE4                 = 213,
    DB2_INTERNAL_ERROR_POINTER      = 214,
    DB2_LINE_NUMBER                 = 215,
    DB2_MESSAGE_ID                  = 216,
    DB2_MESSAGE_ID1                 = 217,
    DB2_MESSAGE_ID2                 = 218,
    DB2_MESSAGE_KEY                 = 219,
    DB2_MODULE_DETECTING_ERROR      = 220,
    DB2_NUMBER_FAILING_STATEMENTS   = 221,
    DB2_OFFSET                      = 222,
    DB2_ORDINAL_TOKEN_1             = 223,
    DB2_ORDINAL_TOKEN_2             = 224,
    DB2_ORDINAL_TOKEN_3             = 225,
    DB2_ORDINAL_TOKEN_4             = 226,
    DB2_ORDINAL_TOKEN_5             = 227,
    DB2_ORDINAL_TOKEN_6             = 228,
    DB2_ORDINAL_TOKEN_7             = 229,
    DB2_ORDINAL_TOKEN_8             = 230,
    DB2_ORDINAL_TOKEN_9             = 231,
    DB2_ORDINAL_TOKEN_10            = 232,
    DB2_ORDINAL_TOKEN_11            = 233,
    DB2_ORDINAL_TOKEN_12            = 234,
    DB2_ORDINAL_TOKEN_13            = 235,
    DB2_PARTITION_NUMBER            = 236,
    DB2_REASON_CODE                 = 237,
    DB2_RETURNED_SQLCODE            = 238,
    DB2_ROW_NUMBER                  = 239,
    DB2_SQLERRD_SET                 = 240,
    DB2_SQLERRD1                    = 241,
    DB2_SQLERRD2                    = 242,
    DB2_SQLERRD3                    = 243,
    DB2_SQLERRD4                    = 244,
    DB2_SQLERRD5                    = 245,
    DB2_SQLERRD6                    = 246,
    DB2_TOKEN_COUNT                 = 247,
    DB2_TOKEN_STRING                = 248,
    MESSAGE_LENGTH                  = 249,
    MESSAGE_OCTET_LENGTH            = 250,
    MESSAGE_TEXT                    = 251,
    PARAMETER_MODE                  = 252,
    PARAMETER_NAME                  = 253,
    PARAMETER_ORDINAL_POSITION      = 254,
    RETURNED_SQLSTATE               = 255,
    ROUTINE_CATALOG                 = 256,
    ROUTINE_NAME                    = 257,
    ROUTINE_SCHEMA                  = 258,
    SCHEMA_NAME                     = 259,
    SERVER_NAME                     = 260,
    SPECIFIC_NAME                   = 261,
    SUBCLASS_ORIGIN                 = 262,
    TABLE_NAME                      = 263,
    TRIGGER_CATALOG                 = 264,
    TRIGGER_NAME                    = 265,
    TRIGGER_SCHEMA                  = 266,
    /* Key Values and Data Types of
     Connection Diagnostic Information Items
     */
    CONNECTION_NAME                 = 301,
    DB2_AUTHENTICATION_TYPE         = 302,
    DB2_AUTHORIZATION_ID            = 303,
    DB2_CONNECTION_METHOD           = 304,
    DB2_CONNECTION_NUMBER           = 305,
    DB2_CONNECTION_STATE            = 306,
    DB2_CONNECTION_STATUS           = 307,
    DB2_CONNECTION_TYPE             = 308,
    DB2_DYN_QUERY_MGMT              = 309,
    DB2_ENCRYPTION_TYPE             = 310,
    DB2_PRODUCT_ID                  = 311,
    DB2_SERVER_CLASS_NAME           = 312,
    DB2_SERVER_NAME                 = 313
};                               /*                             @B2A*/

#pragma enum(pop)                /*                             @B2A*/

#ifdef __OS400__
#pragma pack(1)
#else
#pragma options align=packed
#endif /* __OS400__ */
typedef struct Qsq_diag_item
{
    int  length;
    enum diagitem_key key;
    char type[1];
    char Reserved_Space[3];
    int  datalen;
    /*char data[]; */
} Qsq_diag_item_t;               /*                             @B2A*/
#ifdef __OS400__
#pragma pack(pop)
#else
#pragma options align=reset
#endif /* __OS400__ */

#ifdef __OS400__
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* __OS400__ */
#endif
