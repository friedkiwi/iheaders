 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsydigid.H                                   */
 /*                                                                */
 /* Descriptive Name: Digital Certificate ID interface             */
 /*                                                                */
 /* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1997,2003          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Digital Certificate ID include provides       */
 /*              the definitions for working with certificates     */
 /*              for user profiles and validation lists.           */
 /*                                                                */
 /* Header Files Included: sys/types.h                             */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Cert0100_T                                 */
 /*                 Qsy_Cert0200_T                                 */
 /*                 Qsy_Cert0210_T                                 */
 /*                 Qsy_Sel_Ctrl_T                                 */
 /*                 Qsy_Sel_Ctrl_Pair_T                            */
 /*                 Qsy_inputParmSection_T                         */
 /*                 Qsy_inputParmSectionV_T                        */
 /*                 Qsy_Digid_EIMId_T                              */
 /*                 Qsy_SDCI0100_T                                 */
 /*                 Qsy_RDCI0100_T                                 */
 /*                                                                */
 /* Function Prototype List: QsyAddUserCertificate                 */
 /*                          QsyRemoveUserCertificate              */
 /*                          QsyListUserCertificates               */
 /*                          QsyFindCertificateUser                */
 /*                          QsyParseCertificate                   */
 /*                          QsyAddVldlCertificate                 */
 /*                          QsyRemoveVldlCertificate              */
 /*                          QsyListVldlCertificates               */
 /*                          QsyCheckVldlCertificate               */
 /*                          QsySetDigitalIDConfig                 */
 /*                          QsyRetrieveDigitalIDConfig            */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS   DATE   PGMR  COMMENTS                  */
 /*    ---- -------- ------ ------ ----  ------------------------- */
 /*    $A0= D9524900 4D20   970723 ROCH: New.                      */
 /*    $A1= P3653249 4D30   981026 ROCH: Add QSY_CERT0210 define.  */
 /*    $A2= P3666281 4D30   980304 ROCH: Add QSY_BASE64_FULL_CERT. */
 /*    $A3= D97880   5D10   000501 ROCH: Add email and CERT210     */
 /*    $A4= D9412003 V5R3M0 021201 ROCH: Add config APIs and       */
 /*                                      expiration support.       */
 /*    $A5= P9A21457 V5R3M0 021202 ROCH: Fix prototype.            */
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QSYDIGID_H
 #define _QSYDIGID_H

 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <sys/types.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Defined constants                                                */
 /********************************************************************/

 #define QSY_CERT0100           "CERT0100"     /* ASN.1 format       */
 #define QSY_CERT0200           "CERT0200"     /* text format        */
 #define QSY_CERT0210           "CERT0210"     /* text no xlate  @A1A*/
 #define QSY_SDCI0100           "SDCI0100"     /* set config     @A4A*/
 #define QSY_RDCI0100           "RDCI0100"     /* retrieve config@A4A*/
 #define QSY_EIMID_VAL          "*EIMID  "                    /* @A4A*/

 /* The following are for names used in Selection control pairs      */
 #define QSY_SELCTRL_NAME_LEN   20             /* name field length  */
 #define QSY_MAX_SEL_NAMES      9              /* max pairs      @A4C*/
 #define QSY_COMMONNAME         "COMMONNAME          "
 #define QSY_COUNTRY            "COUNTRY             "
 #define QSY_LOCALITY           "LOCALITY            "
 #define QSY_STATEORPROVINCE    "STATEORPROVINCE     "
 #define QSY_ORGANIZATION       "ORGANIZATION        "
 #define QSY_ORGANIZATIONALUNIT "ORGANIZATIONALUNIT  "
 #define QSY_PUBLICKEY          "PUBLICKEY           "
 #define QSY_EXPIRATIONDAYS     "EXPIRATIONDAYS      "        /* @A4A*/
 #define QSY_CERTIFICATEHANDLE  "CERTIFICATEHANDLE   "        /* @A4A*/

 #define QSY_CERT_HANDLE_LEN    40       /* *** obsolete ***         */
 #define QSY_FULL_CERT          1        /* type is full certificate */
 #define QSY_CERT_HANDLE        2        /* type is certif handle    */
 #define QSY_BASE64_FULL_CERT   3        /* base64 full X.509 certif */

 /********************************************************************/
 /* Data type definition for CERT0100 format.                        */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef struct Qsy_Cert0100
 {
   int            Returned_Len;          /* returned length          */
   int            Available_Len;         /* available length         */
   int            Certif_Handle_Ofs;     /* offset to certif handle  */
   int            Certif_Handle_Len;     /* length of certif handle  */
   int            Certif_Ofs;            /* offset to certificate    */
   int            Certif_Len;            /* length of certificate    */
   int            EIM_Identifier_Ofs;    /* offset to EIM ident  @A4A*/
   int            EIM_Identifier_Len;    /* length of EIM ident  @A4A*/
   int            EIM_Local_Registry_Ofs;/* offset EIM local reg @A4A*/
   int            EIM_Local_Registry_Len;/* length EIM local reg @A4A*/
   int            User_Name_Ofs;         /* offset to user name  @A4A*/
   int            User_Name_Len;         /* length of user name  @A4A*/
 /*char           fields[];*/            /* array of char for fields */
 } Qsy_Cert0100_T;

 /********************************************************************/
 /* Data type definition for CERT0200 format.                        */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef struct Qsy_Cert0200
 {
   int            Returned_Len;          /* returned length          */
   int            Available_Len;         /* available length         */
   int            Certif_Handle_Ofs;     /* offset to certif hndl    */
   int            Certif_Handle_Len;     /* length of certif hndl    */
   int            Version_Ofs;           /* offset to version        */
   int            Version_Len;           /* length of version        */
   int            Ser_No_Ofs;            /* offset to Serial Number  */
   int            Ser_No_Len;            /* length of Serial Number  */
   int            Iss_Cmn_Nam_Ofs;       /* offset to Issuer Cmn Name*/
   int            Iss_Cmn_Nam_Len;       /* length of Iss Cmn Name   */
   int            Iss_Country_Ofs;       /* offset to Iss Country    */
   int            Iss_Country_Len;       /* length of Iss Country    */
   int            Iss_State_Ofs;         /* offset to State          */
   int            Iss_State_Len;         /* length of State          */
   int            Iss_Locality_Ofs;      /* offset to Locality       */
   int            Iss_Locality_Len;      /* length of Locality       */
   int            Iss_Org_Ofs;           /* offset to Organization   */
   int            Iss_Org_Len;           /* length of Organization   */
   int            Iss_OrgUnit_Ofs;       /* offset to OrgUnit        */
   int            Iss_OrgUnit_Len;       /* length of OrgUnit        */
   int            Iss_Postal_Code_Ofs;   /* offset to Postal Code    */
   int            Iss_Postal_Code_Len;   /* length of Postal Code    */
   int            Valid_Period_Str_Ofs;  /* offset to valid per begin*/
   int            Valid_Period_Str_Len;  /* length of valid per begin*/
   int            Valid_Period_End_Ofs;  /* offset to valid per end  */
   int            Valid_Period_End_Len;  /* length of valid per end  */
   int            Subj_Cmn_Nam_Ofs;      /* offset to Subj Cmn Name  */
   int            Subj_Cmn_Nam_Len;      /* length of Subj Cmn Name  */
   int            Subj_Country_Ofs;      /* offset to Subj Country   */
   int            Subj_Country_Len;      /* length of Subj Country   */
   int            Subj_State_Ofs;        /* offset to Subj State     */
   int            Subj_State_Len;        /* length of Subj State     */
   int            Subj_Locality_Ofs;     /* offset to Subj Locality  */
   int            Subj_Locality_Len;     /* length of Subj Locality  */
   int            Subj_Org_Ofs;          /* offset to Subj Org       */
   int            Subj_Org_Len;          /* length of Subj Org       */
   int            Subj_OrgUnit_Ofs;      /* offset to Subj OrgUnit   */
   int            Subj_OrgUnit_Len;      /* length of Subj OrgUnit   */
   int            Subj_Postal_Code_Ofs;  /* offset to Postal Code    */
   int            Subj_Postal_Code_Len;  /* length of Postal Code    */
   int            Subj_PKAlg_Ofs;        /* offset to Subj PubKey alg*/
   int            Subj_PKAlg_Len;        /* length of Subj PubKey alg*/
   int            Iss_Unique_ID_Ofs;     /* offset to Iss Unique ID  */
   int            Iss_Unique_ID_Len;     /* length of Iss Unique ID  */
   int            Subj_Unique_ID_Ofs;    /* offset to Subj Unique ID */
   int            Subj_Unique_ID_Len;    /* length of Subj Unique ID */
   int            Iss_email_Ofs;         /* offset to Iss email      */
   int            Iss_email_Len;         /* length of Iss email      */
   int            Subj_email_Ofs;        /* offset to Subj email     */
   int            Subj_email_Len;        /* length of Subj email     */
   int            EIM_Identifier_Ofs;    /* offset to EIM ident  @A4A*/
   int            EIM_Identifier_Len;    /* length of EIM ident  @A4A*/
   int            EIM_Local_Registry_Ofs;/* offset EIM local reg @A4A*/
   int            EIM_Local_Registry_Len;/* length EIM local reg @A4A*/
   int            User_Name_Ofs;         /* offset to user name  @A4A*/
   int            User_Name_Len;         /* length of user name  @A4A*/
 /*char           fields[];*/            /* array of char for fields */
 } Qsy_Cert0200_T;

 /******************************************************************/
 /* Record structure for Cert0210 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field must    */
 /*        be defined by the user.                                 */
 /******************************************************************/

 typedef struct Qsy_Cert0210
 {
   int            Returned_Len;          /* returned length          */
   int            Available_Len;         /* available length         */
   int            Certif_Handle_Ofs;     /* offset to certif hndl    */
   int            Certif_Handle_Len;     /* length of certif hndl    */
   int            Version_Ofs;           /* offset to version        */
   int            Version_Len;           /* length of version        */
   int            Ser_No_Ofs;            /* offset to Serial Number  */
   int            Ser_No_Len;            /* length of Serial Number  */
   int            Iss_Cmn_Nam_Ofs;       /* offset to Issuer Cmn Name*/
   int            Iss_Cmn_Nam_Len;       /* length of Iss Cmn Name   */
   int            Iss_Country_Ofs;       /* offset to Iss Country    */
   int            Iss_Country_Len;       /* length of Iss Country    */
   int            Iss_State_Ofs;         /* offset to State          */
   int            Iss_State_Len;         /* length of State          */
   int            Iss_Locality_Ofs;      /* offset to Locality       */
   int            Iss_Locality_Len;      /* length of Locality       */
   int            Iss_Org_Ofs;           /* offset to Organization   */
   int            Iss_Org_Len;           /* length of Organization   */
   int            Iss_OrgUnit_Ofs;       /* offset to OrgUnit        */
   int            Iss_OrgUnit_Len;       /* length of OrgUnit        */
   int            Iss_Postal_Code_Ofs;   /* offset to Postal Code    */
   int            Iss_Postal_Code_Len;   /* length of Postal Code    */
   int            Valid_Period_Str_Ofs;  /* offset to valid per begin*/
   int            Valid_Period_Str_Len;  /* length of valid per begin*/
   int            Valid_Period_End_Ofs;  /* offset to valid per end  */
   int            Valid_Period_End_Len;  /* length of valid per end  */
   int            Subj_Cmn_Nam_Ofs;      /* offset to Subj Cmn Name  */
   int            Subj_Cmn_Nam_Len;      /* length of Subj Cmn Name  */
   int            Subj_Country_Ofs;      /* offset to Subj Country   */
   int            Subj_Country_Len;      /* length of Subj Country   */
   int            Subj_State_Ofs;        /* offset to Subj State     */
   int            Subj_State_Len;        /* length of Subj State     */
   int            Subj_Locality_Ofs;     /* offset to Subj Locality  */
   int            Subj_Locality_Len;     /* length of Subj Locality  */
   int            Subj_Org_Ofs;          /* offset to Subj Org       */
   int            Subj_Org_Len;          /* length of Subj Org       */
   int            Subj_OrgUnit_Ofs;      /* offset to Subj OrgUnit   */
   int            Subj_OrgUnit_Len;      /* length of Subj OrgUnit   */
   int            Subj_Postal_Code_Ofs;  /* offset to Postal Code    */
   int            Subj_Postal_Code_Len;  /* length of Postal Code    */
   int            Subj_PKAlg_Ofs;        /* offset to Subj PubKey alg*/
   int            Subj_PKAlg_Len;        /* length of Subj PubKey alg*/
   int            Iss_Unique_ID_Ofs;     /* offset to Iss Unique ID  */
   int            Iss_Unique_ID_Len;     /* length of Iss Unique ID  */
   int            Subj_Unique_ID_Ofs;    /* offset to Subj Unique ID */
   int            Subj_Unique_ID_Len;    /* length of Subj Unique ID */
   int            Iss_email_Ofs;         /* offset to Iss email      */
   int            Iss_email_Len;         /* length of Iss email      */
   int            Subj_email_Ofs;        /* offset to Subj email     */
   int            Subj_email_Len;        /* length of Subj email     */
   int            Iss_DN_DER_Ofs;        /* offset to Iss DN_DER     */
   int            Iss_DN_DER_Len;        /* length of Iss DN_DER     */
   int            Subj_DN_DER_Ofs;       /* offset to Subj DN_DER    */
   int            Subj_DN_DER_Len;       /* length of Subj DN_DER    */
   int            Public_key_Ofs;        /* offset to Public key @A4A*/
   int            Public_key_Len;        /* length of Public key @A4A*/
 /*char           fields[];*/            /* array of char for fields */
 } Qsy_Cert0210_T;

 /********************************************************************/
 /* Type definition for Selection Control format.                    */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef struct Qsy_Sel_Ctrl
 {
   int            Sel_ctrl_Len;          /* Length of selection cntrl*/
   int            Pairs;                 /* number of sel.ctrl pairs */
 /*int            Pair_Disp[];*/         /* Varying length  array of */
                                         /* displacements to pairs   */
 } Qsy_Sel_Ctrl_T;

 /********************************************************************/
 /* Type definition for a Selection Pair of the Selection Control    */
 /* format.                                                          */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef _Packed struct Qsy_Sel_Ctrl_Pair
 {
   int        Sel_ctrl_Pair_Len;         /* Length of sel.ctrl pair  */
   char       Name[QSY_SELCTRL_NAME_LEN];/* selection name           */
 /*char       Value[];*/                 /* Varying length  array of */
                                         /* chars for selection value*/
 } Qsy_Sel_Ctrl_Pair_T;

 /********************************************************************/
 /* Type definition for an Input parm section for User profile       */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef _Packed struct Qsy_inputParmSection
 {
   char           User_space_name[10];   /* user space name          */
   char           User_space_lib_name[10];/* user space library name */
   char           User_name[10];         /* user name                */
   char           Format_name[8];        /* format name              */
   char           Res[2];                /* reserved                 */
   int            Sel_ctl_ofs;           /* offset to sel control    */
   int            EIMId_ofs;             /* offset to EIM id.    @A4A*/
   int            EIMId_len;             /* length of EIM id.    @A4A*/
 /*Qsy_Sel_Ctrl_T Sel_ctl; */            /* selection control main   */
 /*Qsy_Sel_Ctrl_Pair_T Pairs; */         /* pairs if they exist      */
 /*char           EIMId[]; */            /* EIM identifier.      @A4A*/
 } Qsy_inputParmSection_T;

 /********************************************************************/
 /* Type definition for an Input parm section for Validation list    */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef _Packed struct Qsy_inputParmSectionV
 {
   char           User_space_name[10];   /* user space name          */
   char           User_space_lib_name[10];/* user space library name */
   int            Vldl_pn_ofs;           /* offset to vldl pathname  */
   int            Vldl_pn_len;           /* length of vldl pathname  */
   char           Format_name[8];        /* format name              */
   int            Sel_ctl_ofs;           /* offset to sel control    */
 /*char           Vldl_pathname[];*/     /* vldl pathname            */
 /*Qsy_Sel_Ctrl_T Sel_ctl; */            /* selection control main   */
 /*Qsy_Sel_Ctrl_Pair_T Pairs; */         /* pairs if they exist      */
 } Qsy_inputParmSectionV_T;

 /********************************************************************/
 /* Type definition for specifying an EIM identifier.                */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef _Packed struct Qsy_Digid_EIMId
 {
   char       EIMId_value[8];            /* Special value of *EIMID  */
   int        EIMId_len;                 /* Length of EIM identifier.*/
 /*char       EIMId[]; */                /* EIM identifier.          */
 } Qsy_Digid_EIMId_T;                                         /* @A4A*/

 /********************************************************************/
 /* Data type definition for SDCI0100 format.                        */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef struct Qsy_SDCI0100
 {
   char           Enabled_Ind;           /* Enabled indicator        */
   char           Use_SSL_Ind;           /* Use SSL indicator        */
   char           Reserved[2];           /* Reserved - hex 0's       */
   int            Port_Number;           /* LDAP port number         */
   int            Server_Name_Ofs;       /* Offset to server name    */
   int            Server_Name_Len;       /* Length of server name    */
   int            Directory_DN_Ofs;      /* Offset to directory DN   */
   int            Directory_DN_Len;      /* Length of directory DN   */
   int            Bind_DN_Ofs;           /* Offset to bind DN        */
   int            Bind_DN_Len;           /* Length of bind DN        */
   int            Bind_Password_Ofs;     /* Offset to bind password  */
   int            Bind_Password_Len;     /* Length of bind password  */
 /*char           Server_Name[];*/       /* Server name              */
 /*char           Directory_DN[];*/      /* Directory DN             */
 /*char           Bind_DN[];*/           /* Bind DN                  */
 /*char           Bind_Password[];*/     /* Bind password            */
 } Qsy_SDCI0100_T;                                            /* @A4A*/

 /********************************************************************/
 /* Data type definition for RDCI0100 format.                        */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef struct Qsy_RDCI0100
 {
   int            Bytes_Returned;        /* Bytes of data returned   */
   int            Bytes_Available;       /* Bytes of data available  */
   char           Enabled_Ind;           /* Enabled indicator        */
   char           Use_SSL_Ind;           /* Use SSL indicator        */
   char           Reserved[2];           /* Reserved                 */
   int            Port_Number;           /* LDAP port number         */
   int            Server_Name_Ofs;       /* Offset to server name    */
   int            Server_Name_Len;       /* Length of server name    */
   int            Directory_DN_Ofs;      /* Offset to directory DN   */
   int            Directory_DN_Len;      /* Length of directory DN   */
   int            Bind_DN_Ofs;           /* Offset to bind DN        */
   int            Bind_DN_Len;           /* Length of bind DN        */
   int            Bind_Password_Ofs;     /* Offset to bind password  */
   int            Bind_Password_Len;     /* Length of bind password  */
 /*char           Server_Name[];*/       /* Server name              */
 /*char           Directory_DN[];*/      /* Directory DN             */
 /*char           Bind_DN[];*/           /* Bind DN                  */
 /*char           Bind_Password[];*/     /* Bind password            */
 } Qsy_RDCI0100_T;                                            /* @A4A*/

 /********************************************************************/
 /* Prototype definitions                                            */
 /********************************************************************/
 QBFC_EXTERN void QsyAddUserCertificate(
                    char    *User_profile,
                    char    *Certificate,
                    int      Type,
                    int      Length_of_certificate,
                    void    *Error_code);

 QBFC_EXTERN void QsyRemoveUserCertificate(
                    void    *User_profile,
                    char    *Certificate,
                    int      Type,
                    int      Length_of_certificate,
                    void    *Error_code);

 QBFC_EXTERN void QsyListUserCertificates(
                    char    *User_space_name,
                    void    *User_profile,
                    char    *Format_name,
                    char    *Selection_control, /* Qsy_Sel_Ctrl_T*  */
                    void    *Error_code);

 QBFC_EXTERN void QsyFindCertificateUser(
                    char    *Certificate,
                    int      Type,
                    int      Length_of_certificate,
                    char    *User,
                    void    *Error_code);

 QBFC_EXTERN void QsyParseCertificate(
                    char    *Certificate,
                    int      Type,
                    int      Length_of_certificate,
                    char    *Format_name,
                    char    *Receiver_variable,
                    int      Length_of_receiver,
                    void    *Error_code);

 QBFC_EXTERN void QsyAddVldlCertificate(
                    char    *Vldl_pathname,
                    int      Length_of_path,
                    char    *Certificate,
                    int      Type,
                    int      Length_of_certificate,
                    void    *Error_code);

 QBFC_EXTERN void QsyRemoveVldlCertificate(
                    char    *Vldl_pathname,
                    int      Length_of_path,
                    char    *Certificate,
                    int      Type,
                    int      Length_of_certificate,
                    void    *Error_code);

 QBFC_EXTERN void QsyListVldlCertificates(
                    char    *User_space_name,
                    char    *Vldl_pathname,
                    int      Length_of_path,
                    char    *Format_name,
                    char    *Selection_control, /* Qsy_Sel_Ctrl_T*  */
                    void    *Error_code);

 QBFC_EXTERN void QsyCheckVldlCertificate(
                    char    *Vldl_pathname,
                    int      Length_of_path,
                    char    *Certificate,
                    int      Type,
                    int      Length_of_certificate,
                    int     *Return_code,
                    void    *Error_code);                     /* @A5C*/

 QBFC_EXTERN void QsySetDigitalIDConfig(
                    char    *Config_info,
                    int      Length_of_config_info,
                    char    *Format_name,
                    void    *Error_code);                     /* @A4A*/

 QBFC_EXTERN void QsyRetrieveDigitalIDConfig(
                    void    *Receiver_var,
                    int      Length_of_receiver_var,
                    char    *Format_name,
                    void    *Error_code);                     /* @A4A*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif /* _QSYDIGID_H */
