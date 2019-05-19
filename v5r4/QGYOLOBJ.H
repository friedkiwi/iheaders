/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1996, 2005                                */
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
 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/QGYOLOBJ                                     */
 /*                                                                  */
 /* Descriptive Name: Open List of Objects                           */
 /*                                                                  */
 /* Description: The QGYOLOBJ API generates a list of object names   */
 /*              and descriptive information based on specified      */
 /*              selection parameters.                               */
 /*                                                                  */
 /* Header Files Included: <qwcattr.h>                               */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List: Qgy_Olobj_SortKeyInfo                            */
 /*                 Qgy_Olobj_SortInfo                               */
 /*                 Qgy_Olobj_AuthControl                            */
 /*                 Qgy_Olobj_ListInfo                               */
 /*                 Qgy_Olobj_SelControl                             */
 /*                 Qgy_Olobj_ASPControl                             */
 /*                 Qgy_Olobj_KeyData                                */
 /*                 Qgy_Olobj_RecVar                                 */
 /*                 Qgy_Olobj_Key0200                                */
 /*                 Qgy_Olobj_Key0300                                */
 /*                 Qgy_Olobj_Key0400                                */
 /*                 Qgy_Olobj_Key0500                                */
 /*                 Qgy_Olobj_Key0600                                */
 /*                 Qgy_Olobj_Key0700                                */
 /*                                                                  */
 /* Function Prototype List: QGYOLOBJ                                */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* Flag Reason   Level  Date   Pgmr      Change Description         */
 /* ---- -------- ------ ------ --------- -------------------------- */
 /* $A0= P3622493   3D70 960603 DPW     : New Include                */
 /* $A1= P3670166   4Q30 980508 RAH     : Fixes:                     */
 /*                                       1) l 155, change           */
 /*                                          comment delimeter       */
 /*                                       2) l 232, add ";"          */
 /* $A2= P9908481   4D50 991031 RAH     : Change Field_Data_Type     */
 /*                                       structure member in        */
 /*                                       Qgy_Olobj_SortKeyInfo_t    */
 /*                                       typedef from an int to     */
 /*                                       a short.                   */
 /* $A3= D97534   v5r1m0 000618 CEMAROLT: Add fields to support      */
 /*                                       journaling information     */
 /*                                       to structure               */
 /*                                       Qgy_Olobj_Key0500_t        */
 /* $A4= D97545   v5r1m0 000618 CEMAROLT: Add field to support       */
 /*                                       object digital             */
 /*                                       signatures to struct       */
 /*                                       Qgy_Olobj_Key0300_t        */
 /* $A5= D98031.7 v5r1m0 000618 CEMAROLT: Add field to struct        */
 /*                                       Qgy_Olobj_Key0200_t        */
 /* $A6= P9928176 v5r1m0 000723 CEMAROLT: Include header file        */
 /*                                       qwcattr.h.                 */
 /* $B0= D98416   v5r2m0 010430 LAW     : Add fields for auxiliary   */
 /*                                       storage pool device name   */
 /*                                       support.                   */
 /* $B1=D98416.60 v5r2m0 010916 v2cib467: Changes for IASP fields.   */
 /* $B2= D98649   v5r2m0 010916 v2cib467: Adding more signed fields. */
 /* $D1= D99834   v5r4m0 040606 LAW     : Add fields for             */
 /*                                          - Primary associated    */
 /*                                            space size            */
 /*                                          - Optimum space         */
 /*                                            alignment             */
 /*                                          - Object ASP group      */
 /*                                          - Library ASP group     */
 /*                                          - Starting journal      */
 /*                                            receiver for apply    */
 /*                                          - Starting journal      */
 /*                                            receiver library      */
 /*                                          - Starting journal      */
 /*                                            receiver library      */
 /*                                            ASP device name       */
 /*                                          - Starting journal      */
 /*                                            receiver library      */
 /*                                            ASP group             */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/

 #ifndef QGYOLOBJ_h
 #define QGYOLOBJ_h
#if (__OS400_TGTVRM__>=510)         /*                           @A3A*/
#pragma datamodel(P128)             /*                           @A3A*/
#endif                              /*                           @A3A*/

 #include <qwcattr.h>               /*                           @A6A*/

 typedef char authority_t[10];      /*                               */
 typedef char status_t;             /*                               */

 /********************************************************************/
 /*                Prototype for call to QGYOLOBJ API                */
 /********************************************************************/
 #ifdef  __ILEC400__
   #pragma linkage(QGYOLOBJ,OS,nowiden)
 #else
   extern "OS"
 #endif


 void   QGYOLOBJ  (void *,          /* Receiver variable             */
                   int   ,          /* Length of receiver variable   */
                   void *,          /* List Information              */
                   int   ,          /* Number of records to return   */
                   void *,          /* Sort Information              */
                   void *,          /* Object and Library name       */
                   char *,          /* Object type                   */
                   void *,          /* Authority control             */
                   void *,          /* Selection control             */
                   int   ,          /* Number of fields to return    */
                   void *,          /* Key of fields to return       */
                   void *,          /* Error code                    */
                   ...);            /* Optional Parameter Group 1:
                                       void * Job identification info
                                       void * Fmt job ID info    @A5C
                                       Optional Parameter Group 2:
                                       void * Auxiliary storage
                                       pool (ASP) control        @B0A*/
 /********************************************************************/
 /*          Type Definition for Sort Key Field Information          */
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_SortKeyInfo
 {                                  /*                               */
    int   Field_Start_Pos;          /*                               */
    int   Field_Length;             /*                               */
    short Field_Data_Type;          /* Change from int to short  @A2C*/
    char  Sort_Order;               /*                               */
    char  Reserved;                 /*                               */
 } Qgy_Olobj_SortKeyInfo_t;


 /********************************************************************/
 /*          Type Definition for the Sort Information Format         */
 /*   NOTE:  This type definition only defines fixed portions of     */
 /*          the format.  Any varying length fields must be          */
 /*          specified by the user.                                  */
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_SortInfo
 {
    int   Num_Keys;
  /*Qgy_Olobj_SortKeyInfo_t   KeyInfo[];*/   /* Varying length       */
 } Qgy_Olobj_SortInfo_t;            /*                               */


 /********************************************************************/
 /*          Type Definition for the Authority Control Format        */
 /*   NOTE:  This type definition only defines fixed portions of     */
 /*          the format.  Any varying length fields must be          */
 /*          specified by the user.                                  */
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_AuthControl
 {
    int   Format_Length;            /*                               */
    int   Call_Level;               /*                               */
    int   Obj_Auth_Offset;          /*                               */
    int   Num_Obj_Auth;             /*                               */
    int   Lib_Auth_Offset;          /*                               */
    int   Num_Lib_Auth;             /*                               */
    int   Reserved;                 /*                               */
  /*authority_t   Obj_Auth[];*/     /* Varying length                */
  /*authority_t   Lib_Auth[];*/     /* Varying length                */
 } Qgy_Olobj_AuthControl_t;

 /********************************************************************/
 /*         Type Definition for the List Information Format          */
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_ListInfo
 {
    int  Total_Records;             /*                               */
    int  Records_Retd;              /*                               */
    char Request_Handle[4];         /*                               */
    int  Record_Length;             /*                               */
    char Info_Complete;             /*                               */
    char Date_Time[13];             /*                               */
    char List_Status;               /*                               */
    char Reserved1;                 /*                               */
    int  Info_Length;               /*                               */
    int  First_Record;              /*                               */
    char Reserved2[40];             /*                               */
 } Qgy_Olobj_ListInfo_t;            /*                               */

 /********************************************************************/
 /*          Type Definition for the Selection Control Format        */
 /*   NOTE:  This type definition only defines fixed portions        */
 /*          of the format.  Any varying length fields must be       */
 /*          specified by the user.                                  */
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_SelControl
 {
    int   Format_Length;            /*                               */
    int   Sel_or_Omit_Status;       /*                               */
    int   Status_Offset;            /*                               */
    int   Num_Status;               /*                               */
    int   Reserved;                 /*                               */
  /*status_t   Status[];*/          /* Varying length            @A1C*/
 } Qgy_Olobj_SelControl_t;

 /********************************************************************/
 /* Type Definition for the Auxiliary Storage Pool (ASP)             */
 /* Control Format                                               @B0A*/
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_ASPControl
 {
    int   Format_Length;            /*                               */
    char  ASP_Device_Name[10];      /*                               */
    char  ASP_Search_Type[10];      /*                               */
 } Qgy_Olobj_ASPControl_t;          /*                               */


 /********************************************************************/
 /*          Type Definition for the Received Data Information Format*/
 /*   NOTE:  This definition only defines fixed portions of the      */
 /*          format.  Any varying length field must be specified     */
 /*          by the user.                                            */
 /********************************************************************/
 typedef  _Packed struct Qgy_Olobj_KeyData
 {
    int   Field_Info_Length;        /*                               */
    int   Key_Field;                /*                               */
    char  Data_Type;                /*                               */
    char  Reserved1[3];             /*                               */
    int   Data_Length;              /*                               */
  /*Qgy_Olobj_Keyxxxx_t  Data;                                       */
  /* NOTE: If one key format is specified, the x's must be replaced  */
  /* by the appropriate key number.  Otherwise, a struct containing  */
  /* the desired fields must be defined separately (in the style of  */
  /* the key format structs below), and its type specified above.    */
  /*****                                                         *****/
  /*char  Reserved2[];*/            /* Varying length                */
 } Qgy_Olobj_KeyData_t;

 /********************************************************************/
 /*          Type Definition for the Receiver Variable               */
 /*   NOTE:  This definition only defines fixed portions of the      */
 /*          format.  Any varying length fields must be specified    */
 /*          by the user.                                            */
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_RecVar
 {
    char  Obj_Name[10];             /*                               */
    char  Obj_Lib[10];              /*                               */
    char  Obj_Type[10];             /*                               */
    char  Info_Status;              /*                               */
    char  Reserved;                 /*                               */
    int   Num_Fields_Retd;          /*                               */
  /*Qgy_Olobj_KeyData_t   KeyData[];*/ /* Varying length             */
  /*      On the above line, x is the number of keys                 */
 } Qgy_Olobj_RecVar_t;

 /********************************************************************/
 /*               Type Definitions for the Key Formats               */
 /********************************************************************/
 typedef _Packed struct Qgy_Olobj_Key0200
 {
    char  Info_Status;              /* Key 201                       */
    char  Ext_Obj_Attr[10];         /* Key 202                       */
    char  Text_Description[50];     /* Key 203                       */
    char  User_Def_Attr[10];        /* Key 204                       */
    int   Order_In_Library_List;    /* Key 205                   @A5C*/
    char  Reserved[5];              /*                           @A5C*/
 } Qgy_Olobj_Key0200_t;             /*                               */

 typedef _Packed struct Qgy_Olobj_Key0300
 {
    Qgy_Olobj_Key0200_t  Key0200;   /*                               */
    int   Aux_Storage_Pool;         /* Key 301 Object ASP number     */
    char  Obj_Owner[10];            /* Key 302                       */
    char  Obj_Domain[2];            /* Key 303                       */
    char  Creation_Date_Time[8];    /* Key 304                       */
    char  Change_Date_Time[8];      /* Key 305                       */
    char  Storage[10];              /* Key 306                       */
    char  Comp_Status;              /* Key 307                       */
    char  Allow_Change;             /* Key 308                       */
    char  Changed;                  /* Key 309                       */
    char  Audit_Value[10];          /* Key 310                       */
    char  Digitally_Signed;         /* Key 311                   @A4C*/
    char  Signer_Trusted;           /* Key 312                   @B2A*/
    char  Multiple_Signatures;      /* Key 313                   @B2A*/
    char  Reserved[2];              /*                           @B1C*/
    int   Lib_ASP_Number;           /* Key 314 Library ASP number@B0A*/
 } Qgy_Olobj_Key0300_t;             /*                               */

 typedef _Packed struct Qgy_Olobj_Key0400
 {
    Qgy_Olobj_Key0300_t   Key0300;  /*                               */
    char  SF_Name[10];              /* Key 401                       */
    char  SF_Lib_Name[10];          /* Key 402                       */
    char  SF_Mem_Name[10];          /* Key 403                   @A1C*/
    char  SF_Update_Date_Time[13];  /* Key 404                       */
    char  Creator_Usr_Prf[10];      /* Key 405                       */
    char  Creation_Sys[8];          /* Key 406                       */
    char  Sys_Level[9];             /* Key 407                       */
    char  Compiler[16];             /* Key 408                       */
    char  Obj_Level[8];             /* Key 409                       */
    char  Usr_Changed;              /* Key 410                       */
    char  Lic_Pgm[16];              /* Key 411                       */
    char  PTF[10];                  /* Key 412                       */
    char  APAR[10];                 /* Key 413                       */
    char  Primary_Group[10];        /* Key 414                       */
    char  Reserved[2];              /*                           @D1C*/
    char  Optimum_Space_Alignment;  /* Key 415                   @D1A*/
    int   Primary_Associated_Space_Size; /* Key 416              @D1A*/
    char  Reserved2[4];             /*                           @D1A*/
 } Qgy_Olobj_Key0400_t;             /*                               */

 typedef _Packed struct Qgy_Olobj_Key0500
 {
    Qgy_Olobj_Key0400_t  Key0400;   /*                               */
    char  Obj_S_Date_Time[8];       /* Key 501                       */
    char  Obj_R_Date_Time[8];       /* Key 502                       */
    int   S_Size;                   /* Key 503                       */
    int   S_Size_Mult;              /* Key 504                       */
    int   S_Seq_No;                 /* Key 505                       */
    char  S_Command[10];            /* Key 506                       */
    char  S_Vol_ID[71];             /* Key 507                       */
    char  S_Dev[10];                /* key 508                       */
    char  S_File_Name[10];          /* Key 509                       */
    char  S_File_Lib_Name[10];      /* Key 510                       */
    char  S_Label[17];              /* Key 511                       */
    char  S_Active_Date_Time[8];    /* Key 512                       */
    char  Journal_Status;           /* Key 513                   @A3A*/
    char  Journal_Name[10];         /* Key 514                   @A3A*/
    char  Journal_Library[10];      /* Key 515                   @A3A*/
    char  Journal_Images;           /* Key 516                   @A3A*/
    char  Journal_Entries_Omitted;  /* Key 517                   @A3A*/
    char  Journal_Start_Date_Time[8];/* Key 518                  @A3A*/
    char  Reserved[13];             /*                           @A3C*/
 } Qgy_Olobj_Key0500_t;             /*                               */

 typedef _Packed struct Qgy_Olobj_Key0600
 {
    Qgy_Olobj_Key0500_t  Key0500;   /*                               */
    char  Last_Date_Time[8];        /* Key 601                       */
    char  Reset_Date_Time[8];       /* Key 602                       */
    int   Days_Used_Count;          /* Key 603                       */
    char  Usage_Info_Updated;       /* Key 604                       */
    char  Obj_ASP_Device[10];       /* Key 605                   @B0A*/
    char  Lib_ASP_Device[10];       /* Key 606                   @B0A*/
    char  Reserved[3];              /*                           @B0C*/
 } Qgy_Olobj_Key0600_t;             /*                               */

 typedef _Packed struct Qgy_Olobj_Key0700
 {
    Qgy_Olobj_Key0600_t  Key0600;   /*                               */
    int   Obj_Size;                 /* Key 701                       */
    int   Obj_Size_Mult;            /* Key 702                       */
    char  Obj_Ovf_ASP;              /* Key 703                       */
    char  Object_ASP_Group[10];     /* Key 704                   @D1A*/
    char  Library_ASP_Group[10];    /* Key 705                   @D1A*/
    char  Starting_Jrn_Rcv_For_Apply[10]; /* Key 706             @D1A*/
    char  Starting_Jrn_Rcv_Lib[10]; /* Key 707                   @D1A*/
    char  Starting_Jrn_Rcv_Lib_ASP_Dev[10]; /* Key 708           @D1A*/
    char  Starting_Jrn_Rcv_Lib_ASP_Group[10]; /* Key 709         @D1A*/
    char  Reserved[3];              /* Reserved                  @D1C*/
 } Qgy_Olobj_Key0700_t;             /*                               */

#if (__OS400_TGTVRM__>=510)         /*                           @A3A*/
#pragma datamodel(pop)              /*                           @A3A*/
#endif                              /*                           @A3A*/

 #endif
