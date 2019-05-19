/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2004, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QC3CCI                                        */
/*                                                                   */
/* Descriptive Name: Common include for the cryptographic APIs       */
/*                                                                   */
/* Description: This include provides structures and costants for    */
/*              use with the cryptographic APIs.                     */
/*                                                                   */
/* Header Files Included:   pointer.h                                */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          Qc3_Format_ALGD0100_T                    */
/*                          Qc3_Format_ALGD0200_T                    */
/*                          Qc3_Format_ALGD0300_T                    */
/*                          Qc3_Format_ALGD0400_T                    */
/*                          Qc3_Format_ALGD0500_T                    */
/*                          Qc3_Format_DATA0100_T                    */
/*                          Qc3_Format_DATA0200_T                    */
/*                          Qc3_Format_KEYD0100_T                    */
/*                          Qc3_Format_KEYD0200_T                    */
/*                          Qc3_Format_KEYD0400_T                    */
/*                          Qc3_Format_KEYD0500_T                    */
/*                          Qc3_Format_KEYD0600_T                    */
/*                          Qc3_Format_KEYD0700_T                    */
/*                          Qc3_Format_KEYD0800_T                    */
/*                          Qc3_Format_KEYD0900_T                    */
/*                          Qc3_Format_FileList_T                    */
/*                          Qc3_Master_Key_T                         */
/*                                                                   */
/* Function Prototype List: None                                     */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON   LEVEL  DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- -----  ------ --------- ----------------------------*/
/* $A0= D99296   v5r3m0 020709 ROCH      New Include                 */
/* $A1= P9A38205 v5r3m0 038259 ROCH      Key format - char(1)        */
/* $A2= D93083   v5r4m0 040720 ROCH      New PKA block format        */
/* $A3= D93081   v5r4m0 041013 ROCH      Key management              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef QC3CCI_h
 #define QC3CCI_h

 #pragma datamodel(P128)

 #include <pointer.h>                /* pointer definitions          */

 /********************************************************************/
 /* Data definitions                                                 */
 /********************************************************************/

 /* ALGD0100 algorithm description structure                         */
 typedef struct Qc3_Format_ALGD0100
 {
    char           Alg_Context_Token[8];
    char           Final_Op_Flag;
 } Qc3_Format_ALGD0100_T;

 /* ALGD0200 algorithm description structure                         */
 typedef struct Qc3_Format_ALGD0200
 {
    int            Block_Cipher_Alg;
    int            Block_Length;
    char           Mode;
    char           Pad_Option;
    char           Pad_Character;
    char           Reserved;
    int            MAC_Length;
    int            Effective_Key_Size;
    char           Init_Vector[32];
 } Qc3_Format_ALGD0200_T;

 /* ALGD0300 algorithm description structure                         */
 typedef struct Qc3_Format_ALGD0300
 {
    int            Stream_Cipher_Alg;
 } Qc3_Format_ALGD0300_T;

 /* ALGD0400 algorithm description structure                         */
 typedef struct Qc3_Format_ALGD0400
 {
    int            Public_Key_Alg;
    char           PKA_Block_Format;
    char           Reserved[3];
    int            Signing_Hash_Alg;
 } Qc3_Format_ALGD0400_T;

 /* ALGD0500 algorithm description structure                         */
 typedef struct Qc3_Format_ALGD0500
 {
    int            Hash_Alg;
 } Qc3_Format_ALGD0500_T;


 /* DATA0200 array data format structure                             */
 typedef struct Qc3_Format_DATA0200
 {
    _SPCPTR        Data_Ptr;
    int            Data_Len;
    char           Reserved[12];
 } Qc3_Format_DATA0200_T;

 /* KEYD0100 key description format structure                        */
 typedef struct Qc3_Format_KEYD0100
 {
    char           Key_Context_Token[8];
 } Qc3_Format_KEYD0100_T;

 /* KEYD0200 key description format structure                        */
 typedef struct Qc3_Format_KEYD0200
 {
    int            Key_Type;
    int            Key_String_Len;                            /* @A1M*/
    char           Key_Format;                                /* @A1C*/
    char           Reserved[3];                               /* @A1A*/
 /*char            Key_String[]; */ /* variable length               */
 } Qc3_Format_KEYD0200_T;

 /* KEYD0400 key description format structure                        */
 typedef struct Qc3_Format_KEYD0400                           /* @A3A*/
 {
    char           Key_Store[20];                             /* @A3A*/
    char           Record_Label[32];                          /* @A3A*/
    int                           : 32;                       /* @A3A*/
 } Qc3_Format_KEYD0400_T;                                     /* @A3A*/

 /* KEYD0500 key description format structure                        */
 typedef struct Qc3_Format_KEYD0500                           /* @A3A*/
 {
    int            Key_Type;                                  /* @A3A*/
    int            Key_Len;                                   /* @A3A*/
    int            Iteration_Count;                           /* @A3A*/
    int            Salt_Len;                                  /* @A3A*/
    char           Salt[16];                                  /* @A3A*/
    int            Passphrase_CCSID;                          /* @A3A*/
    int            Passphrase_Len;                            /* @A3A*/
  /*char           Passphrase[]; */ /* variable length           @A3A*/
 }  Qc3_Format_KEYD0500_T;                                    /* @A3A*/

 /* KEYD0600 key description format structure                        */
 typedef struct Qc3_Format_KEYD0600                           /* @A3A*/
 {
    int            PEM_Cert_Len;                              /* @A3A*/
    int                           : 32;                       /* @A3A*/
  /*char           PEM_Cert[]; */   /* variable length           @A3A*/
 } Qc3_Format_KEYD0600_T;                                     /* @A3A*/

 /* KEYD0700 key description format structure                        */
 typedef struct Qc3_Format_KEYD0700                           /* @A3A*/
 {
    int            Cert_Label_Len;                            /* @A3A*/
    int                           : 32;                       /* @A3A*/
  /*char           Cert_Label[]; */ /* variable length           @A3A*/
 } Qc3_Format_KEYD0700_T;                                     /* @A3A*/

 /* KEYD0800 key description format structure                        */
 typedef struct Qc3_Format_KEYD0800                           /* @A3A*/
 {
    int            DN_Len;                                    /* @A3A*/
    int                           : 32;                       /* @A3A*/
  /*char           DN[]; */         /* variable length           @A3A*/
 } Qc3_Format_KEYD0800_T;                                     /* @A3A*/

 /* KEYD0900 key description format structure                        */
 typedef struct Qc3_Format_KEYD0900                           /* @A3A*/
 {
    int            AppID_Len;                                 /* @A3A*/
    int                           : 32;                       /* @A3A*/
  /*char           AppID[]; */      /* variable length           @A3A*/
 } Qc3_Format_KEYD0900_T;                                     /* @A3A*/

 /* Key store file list structure                                    */
 typedef struct Qc3_Format_FileList                           /* @A3A*/
 {
    int            Num_Files;                                 /* @A3A*/
    char           File_Name[20];                             /* @A3A*/
 } Qc3_Format_FileList_T;                                     /* @A3A*/

 /* Master key structure                                             */
 typedef struct Qc3_Master_Key                                /* @A3A*/
 {
    int            Master_Key_ID;                             /* @A3A*/
    int                           : 32;                       /* @A3A*/
    int            Disallowed_Function;                       /* @A3A*/
    char           Master_Key_KVV[20];                        /* @A3A*/
 } Qc3_Master_Key_T;                                          /* @A3A*/

 /********************************************************************/
 /* Constants                                                        */
 /********************************************************************/

 /* Algorithm description format name values                         */
 #define     Qc3_Alg_Token                "ALGD0100"
 #define     Qc3_Alg_Block_Cipher         "ALGD0200"
 #define     Qc3_Alg_Stream_Cipher        "ALGD0300"
 #define     Qc3_Alg_Public_Key           "ALGD0400"
 #define     Qc3_Alg_Hash                 "ALGD0500"

 /* Clear data format name values                                    */
 #define     Qc3_Data                     "DATA0100"
 #define     Qc3_Array                    "DATA0200"

 /* Key description format name values                               */
 #define     Qc3_Key_Token                "KEYD0100"
 #define     Qc3_Key_Parms                "KEYD0200"
 #define     Qc3_Key_KSLabel              "KEYD0400"          /* @A3A*/
 #define     Qc3_Key_PKCS5                "KEYD0500"          /* @A3A*/
 #define     Qc3_Key_PEMCert              "KEYD0600"          /* @A3A*/
 #define     Qc3_Key_CSLabel              "KEYD0700"          /* @A3A*/
 #define     Qc3_Key_CSDN                 "KEYD0800"          /* @A3A*/
 #define     Qc3_Key_AppID                "KEYD0900"          /* @A3A*/

 /* Hash algorithm and key type values                               */
 #define     Qc3_MD5                      1
 #define     Qc3_SHA1                     2
 #define     Qc3_SHA256                   3
 #define     Qc3_SHA384                   4
 #define     Qc3_SHA512                   5

 /* Block cipher algorithm and key type values                       */
 #define     Qc3_DES                      20
 #define     Qc3_TDES                     21
 #define     Qc3_AES                      22
 #define     Qc3_RC2                      23

 /* Stream cipher algorithm and key type values                      */
 #define     Qc3_RC4                      30

 /* PKA algorithm values                                             */
 #define     Qc3_RSA                      50
 #define     Qc3_DH                       52

 /* PKA key type values                                              */
 #define     Qc3_RSA_Public               50
 #define     Qc3_RSA_Private              51

 /* Mode values                                                      */
 #define     Qc3_ECB                      '0'
 #define     Qc3_CBC                      '1'
 #define     Qc3_OFB                      '2'
 #define     Qc3_CFB1Bit                  '3'
 #define     Qc3_CFB8Bit                  '4'
 #define     Qc3_CFB64Bit                 '5'

 /* Pad option values                                                */
 #define     Qc3_No_Pad                   '0'
 #define     Qc3_Pad_Char                 '1'
 #define     Qc3_Pad_Counter              '2'

 /* PKA block format values                                          */
 #define     Qc3_PKCS1_00                 '0'
 #define     Qc3_PKCS1_01                 '1'
 #define     Qc3_PKCS1_02                 '2'
 #define     Qc3_ISO9796                  '3'
 #define     Qc3_Zero_Pad                 '4'
 #define     Qc3_ANSI_X931                '5'
 #define     Qc3_OAEP                     '6'                 /* @A2A*/

 /* Key format values                                                */
 #define     Qc3_Bin_String               '0'                 /* @A1C*/
 #define     Qc3_BER_String               '1'                 /* @A1C*/
 #define     Qc3_MK_Struct                '3'                 /* @A3A*/
 #define     Qc3_KSLabel_Struct           '4'                 /* @A3A*/
 #define     Qc3_PKCS5_Struct             '5'                 /* @A3A*/
 #define     Qc3_PEMCert_String           '6'                 /* @A3A*/
 #define     Qc3_CSLabel_String           '7'                 /* @A3A*/
 #define     Qc3_CSDN_String              '8'                 /* @A3A*/

 /* Key form values                                                  */
 #define     Qc3_Clear                    '0'
 #define     Qc3_Encrypted                '1'
 #define     Qc3_MK_Encrypted             '2'

 /* Cryptographic service provider values                            */
 #define     Qc3_Any_CSP                  '0'
 #define     Qc3_Sfw_CSP                  '1'
 #define     Qc3_Hdw_CSP                  '2'

 /* Final operation flag values                                      */
 #define     Qc3_Continue                 '0'
 #define     Qc3_Final                    '1'

 /* Master key IDs                                                   */
 #define     Qc3_Master_Key_1              1                  /* @A3A*/
 #define     Qc3_Master_Key_2              2                  /* @A3A*/
 #define     Qc3_Master_Key_3              3                  /* @A3A*/
 #define     Qc3_Master_Key_4              4                  /* @A3A*/
 #define     Qc3_Master_Key_5              5                  /* @A3A*/
 #define     Qc3_Master_Key_6              6                  /* @A3A*/
 #define     Qc3_Master_Key_7              7                  /* @A3A*/
 #define     Qc3_Master_Key_8              8                  /* @A3A*/

 /* Master key versions                                              */
 #define     Qc3_MK_New                   '0'                 /* @A3A*/
 #define     Qc3_MK_Current               '1'                 /* @A3A*/
 #define     Qc3_MK_Old                   '2'                 /* @A3A*/

 #pragma datamodel(pop)

#endif                                                  /* _QC3CCI_h */

