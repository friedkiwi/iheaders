#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  gskssl.h                                       */
/*                                                                   */
/* Descriptive Name: Secure Toolkit Layer (GSKSSL) API Definition    */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* 5722-SS1                                                          */
/* (C) Copyright IBM Corp. 2001, 2004                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the GSK API.                  */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          GSKErrorMsgStr                                           */
/*          gsk_cert_data_elem_t                                     */
/*          data_buf_struct                                          */
/*          SIDCacheCallBack_struct                                  */
/*          gsk_list_t                                               */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          gsk_attribute_get_buffer                                 */
/*          gsk_attribute_get_buffer_ts64                            */
/*          gsk_attribute_get_cert_info                              */
/*          gsk_attribute_get_cert_info_ts64                         */
/*          gsk_attribute_get_enum_value                             */
/*          gsk_attribute_get_numeric_value                          */
/*          gsk_attribute_set_buffer                                 */
/*          gsk_attribute_set_callback                               */
/*          gsk_attribute_set_enum                                   */
/*          gsk_attribute_set_numeric_value                          */
/*          gsk_environment_close                                    */
/*          gsk_environment_init                                     */
/*          gsk_environment_open                                     */
/*          gsk_secure_soc_close                                     */
/*          gsk_secure_soc_init                                      */
/*          gsk_secure_soc_startInit                            @A1A */
/*          gsk_secure_soc_misc                                      */
/*          gsk_secure_soc_open                                      */
/*          gsk_secure_soc_read                                      */
/*          gsk_secure_soc_startRecv                                 */
/*          gsk_secure_soc_write                                     */
/*          gsk_secure_soc_startSend                                 */
/*          gsk_strerror                                             */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= DXXXXXXXX    5D10  991001  ROCH     New include.           */
/*   $A1= DXXXXXXXX    5D20  000421  ROCH     Add startInit          */
/*   $A2= DXXXXXXXX    5D30  020421  ROCH     GSKit 6B level         */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __gskssl_h
  #define __gskssl_h

#ifndef __QBFC_EXTERN
  #ifdef __ILEC400__
    #define QBFC_EXTERN extern
  #else
    #define QBFC_EXTERN extern "C"
  #endif

  #define __QBFC_EXTERN
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#define PGSK_LINKAGE
/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/
#include <qsoasync.h>                  /* asynchronous I/O           */
/*********************************************************************/
/* Macros for return codes from GSK routines                         */
/*********************************************************************/
/* The following may be returned by all functions: */
#define GSK_OK                         0
#define GSK_INVALID_HANDLE             1  /* except 'open' */
#define GSK_API_NOT_AVAILABLE          2
#define GSK_INTERNAL_ERROR             3
#define GSK_INSUFFICIENT_STORAGE       4
#define GSK_INVALID_STATE              5  /* except 'open' */
#define GSK_KEY_LABEL_NOT_FOUND        6
#define GSK_CERTIFICATE_NOT_AVAILABLE  7
#define GSK_ERROR_CERT_VALIDATION      8
#define GSK_ERROR_CRYPTO               9
#define GSK_ERROR_ASN                 10
#define GSK_ERROR_LDAP                11
#define GSK_ERROR_UNKNOWN_ERROR       12

/* The following may be returned by all _open functions */
#define GSK_OPEN_CIPHER_ERROR              101 /* environment only */
#define GSK_KEYFILE_IO_ERROR               102 /* environment only */
#define GSK_KEYFILE_INVALID_FORMAT         103 /* environment only */
#define GSK_KEYFILE_DUPLICATE_KEY          104 /* environment only */
#define GSK_KEYFILE_DUPLICATE_LABEL        105 /* environment only */
#define GSK_BAD_FORMAT_OR_INVALID_PASSWORD 106 /* environment only */
#define GSK_KEYFILE_CERT_EXPIRED           107 /* environment only */
#define GSK_ERROR_LOAD_GSKLIB              108 /* environment only */
#define GSK_PENDING_CLOSE_ERROR            109               /* @A2A */

/* The following may be returned by gsk_environment_init */
#define GSK_NO_KEYFILE_PASSWORD       201  /* neither password nor
                                            stash file */
#define GSK_KEYRING_OPEN_ERROR        202
#define GSK_RSA_TEMP_KEY_PAIR         203
#define GSK_ERROR_LDAP_NO_SUCH_OBJECT 204                    /* @A2A */
#define GSK_ERROR_LDAP_INVALID_CREDENTIALS 205               /* @A2A */
#define GSK_ERROR_BAD_INDEX           206                    /* @A2A */

/* The following may be returned by all _close functions */
#define GSK_CLOSE_FAILED              301  /*environment close */

/* The following may be returned by gsk_secure_soc_init */
#define GSK_ERROR_BAD_DATE                       401
#define GSK_ERROR_NO_CIPHERS                     402
#define GSK_ERROR_NO_CERTIFICATE                 403
#define GSK_ERROR_BAD_CERTIFICATE                404
#define GSK_ERROR_UNSUPPORTED_CERTIFICATE_TYPE   405
#define GSK_ERROR_IO                             406
#define GSK_ERROR_BAD_KEYFILE_LABEL              407
#define GSK_ERROR_BAD_KEYFILE_PASSWORD           408
#define GSK_ERROR_BAD_KEY_LEN_FOR_EXPORT         409
#define GSK_ERROR_BAD_MESSAGE                    410
#define GSK_ERROR_BAD_MAC                        411
#define GSK_ERROR_UNSUPPORTED                    412
#define GSK_ERROR_BAD_CERT_SIG                   413
#define GSK_ERROR_BAD_CERT                       414
#define GSK_ERROR_BAD_PEER                       415
#define GSK_ERROR_PERMISSION_DENIED              416
#define GSK_ERROR_SELF_SIGNED                    417
#define GSK_ERROR_NO_READ_FUNCTION               418
#define GSK_ERROR_NO_WRITE_FUNCTION              419
#define GSK_ERROR_SOCKET_CLOSED                  420
#define GSK_ERROR_BAD_V2_CIPHER                  421
#define GSK_ERROR_BAD_V3_CIPHER                  422
#define GSK_ERROR_BAD_SEC_TYPE                   423
#define GSK_ERROR_BAD_SEC_TYPE_COMBINATION       424
#define GSK_ERROR_HANDLE_CREATION_FAILED         425
#define GSK_ERROR_INITIALIZATION_FAILED          426
#define GSK_ERROR_LDAP_NOT_AVAILABLE             427
#define GSK_ERROR_NO_PRIVATE_KEY                 428
#define GSK_ERROR_PKCS11_LIBRARY_NOTLOADED       429         /* @A2A */
#define GSK_ERROR_PKCS11_TOKEN_LABELMISMATH      430         /* @A2A */
#define GSK_ERROR_PKCS11_TOKEN_NOTPRESENT        431         /* @A2A */
#define GSK_ERROR_PKCS11_TOKEN_BADPASSWORD       432         /* @A2A */
#define GSK_ERROR_INVALID_V2_HEADER              433         /* @A2A */
#define GSK_CSP_OPEN_ERROR                       434         /* @A2A */
#define GSK_CONFLICTING_ATTRIBUTE_SETTING        435         /* @A2A */
#define GSK_UNSUPPORTED_PLATFORM                 436         /* @A2A */

/* The following may be returned by read and write functions */
#define GSK_INVALID_BUFFER_SIZE                  501
#define GSK_WOULD_BLOCK                          502
/* The following may be returned be gsk_secure_soc_misc function */
#define GSK_ERROR_NOT_SSLV3                      601  /* V3 required */
#define GSK_MISC_INVALID_ID                      602

/* The following may be returned by gsk_attribute_set_ functions */
#define GSK_ATTRIBUTE_INVALID_ID                 701
#define GSK_ATTRIBUTE_INVALID_LENGTH             702
#define GSK_ATTRIBUTE_INVALID_ENUMERATION        703
#define GSK_ATTRIBUTE_INVALID_SID_CACHE          704
#define GSK_ATTRIBUTE_INVALID_NUMERIC_VALUE      705
#define GSK_CONFLICTING_VALIDATION_SETTING       706         /* @A2A */
#define GSK_AES_UNSUPPORTED                      707         /* @A2A */

/* The following must be returned by additional certificate          */
/* validation callback                                               */
#define GSK_VALIDATION_SUCCESSFUL 0                          /* @A2A */
#define GSK_UNKNOWN_CRIT_EXTNS    575019                     /* @A2A */
#define GSK_NO_CRLS_FOUND         575040                     /* @A2A */

/* The following may be returned by certificate prompt callback routines*/
#define GSK_SC_OK                         1501
#define GSK_SC_CANCEL                     1502

/* The following is return by gskit to pkcs11 callback routine when  */
/* the password user entered is incorrect                            */
#define GSK_NOT_FIRST_CALL                "0xFFFFFFFF"       /* @A2A */

/* The following is return by gsk_start_trace() and gsk_stop_trace() */
#define GSK_TRACE_STARTED                 1601               /* @A2A */
#define GSK_TRACE_STOPPED                 1602               /* @A2A */
#define GSK_TRACE_NOT_STARTED             1603               /* @A2A */
#define GSK_TRACE_ALREADY_STARTED         1604               /* @A2A */
#define GSK_TRACE_OPEN_FAILED             1605               /* @A2A */

/* The following is used by gsk_start_trace and gsk_stop_trace */
/* GSKTrace Global Options                                     */
#define GSKTRACENOOPTIONS        (0x00000000)                /* @A2A */
#define GSKTRACEALLOPTIONS       (0xffffffff)                /* @A2A */
#define GSKTRACEDEFAULTOPTIONS   (0x00000000)                /* @A2A */
#define GSKTRACENOBUFFERING      (0x00000001)                /* @A2A */

/* GSKTrace Components                                               */
#define GSKTRACENOCOMPONENTS     (0x00000000)                /* @A2A */
#define GSKTRACEALLCOMPONENTS    (0xffffffff)                /* @A2A */
#define GSKTRACECOMMON           (0x00000001)                /* @A2A */
#define GSKTRACEASN              (0x00000002)                /* @A2A */
#define GSKTRACEKRY              (0x00000004)                /* @A2A */
#define GSKTRACEDB               (0x00000008)                /* @A2A */
#define GSKTRACEVAL              (0x00000010)                /* @A2A */
#define GSKTRACECMS              (0x00000020)                /* @A2A */
#define GSKTRACESSL              (0x00000040)                /* @A2A */
#define GSKTRACEIKM              (0x00000080)                /* @A2A */
#define GSKTRACEDIR              (0x00000100)                /* @A2A */
#define GSKTRACEPKCS11           (0x00000200)                /* @A2A */
#define GSKTRACEACME             (0x00000400)                /* @A2A */

/* GSKTrace Reserved Events */
#define GSKTRACE_NOEVENTS         (0x00000000)               /* @A2A */
#define GSKTRACE_ALLEVENTS        (0xffffffff)               /* @A2A */
#define GSKTRACE_ENTRY            (0x80000000)               /* @A2A */
#define GSKTRACE_EXIT             (0x40000000)               /* @A2A */

/* GSKTrace Events */
#define GSKTRACE_MESSAGE          (0x00000001)               /* @A2A */
#define GSKTRACE_EXCEPTION        (0x00000002)               /* @A2A */
#define GSKTRACE_KRYALGORITHM     (0x00000004)               /* @A2A */
#define GSKTRACE_VALCHAIN         (0x00000008)               /* @A2A */

/* Algorithm OID string constants */
#define algRSA                       "1.2.840.113549.1.1.1";       /* @A2A */
#define algDSA                       "1.3.14.3.2.12";              /* @A2A */
#define algMD2WithRSAencryption      "1.2.840.113549.1.1.2";       /* @A2A */
#define algMD5WithRSAencryption      "1.2.840.113549.1.1.4";       /* @A2A */
#define algSHA1WithRSAencryption     "1.2.840.113549.1.1.5";       /* @A2A */
#define algSHA1WithDSAencryption     "1.2.840.10040.4.3";          /* @A2A */
#define algPBEWithMD2AndDESCBC       "1.2.840.113549.1.5.1";       /* @A2A */
#define algPBEWithMD5AndDESCBC       "1.2.840.113549.1.5.3";       /* @A2A */
#define algPBEWithSHA1AndDESCBC      "1.2.840.113549.1.5.10";      /* @A2A */
#define algPBEWithSHA1And40BitRC2    "1.2.840.113549.1.12.5.1.5";  /* @A2A */
#define algPBEWithSHA1And128BitRC2   "1.2.840.113549.1.12.5.1.4";  /* @A2A */
#define algPBEWithSHA1And40BitRC4    "1.2.840.113549.1.12.5.1.2";  /* @A2A */
#define algPBEWithSHA1And128BitRC4   "1.2.840.113549.1.12.5.1.1";  /* @A2A */
#define algPBEWithSHA1And3DESCBC     "1.2.840.113549.1.12.5.1.3";  /* @A2A */
#define algMD5DigestAlgorithm        "1.2.840.113549.2.5";         /* @A2A */
#define algSHA1DigestAlgorithm       "1.3.14.3.2.26";              /* @A2A */

/* Key Usage */
#define digitalSignature             0x0001;                 /* @A2A */
#define nonRepudiation               0x0002;                 /* @A2A */
#define KeyEncipherment              0x0004;                 /* @A2A */
#define dataEncipherment             0x0008;                 /* @A2A */
#define KeyAgreement                 0x0010;                 /* @A2A */
#define KeyCertSign                  0x0020;                 /* @A2A */
#define cRlSign                      0x0040;                 /* @A2A */
#define encipherOnly                 0x0080;                 /* @A2A */
#define decipherOnly                 0x0100;                 /* @A2A */

/* Reserve a range specific to OS/400 for return values and    */
/*  enumerated types.                                          */
#define GSK_OS400_BASE         6000                          /* @A1C */
#define GSK_OS400_BASE_END     6999                          /* @A1C */

/* Reserve a range specific to OS/390 for return values and    */
/*  enumerated types.                                          */
#define GSK_OS390_BASE         7000
#define GSK_OS390_BASE_END     7999

#define GSK_OS400_ERROR_NOT_TRUSTED_ROOT           6000      /* @A1A */
#define GSK_OS400_ERROR_PASSWORD_EXPIRED           6001      /* @A1A */
#define GSK_OS400_ERROR_NOT_REGISTERED             6002      /* @A1A */
#define GSK_OS400_ERROR_NO_ACCESS                  6003      /* @A1A */
#define GSK_OS400_ERROR_CLOSED                     6004      /* @A1A */
#define GSK_OS400_ERROR_NO_CERTIFICATE_AUTHORITIES 6005      /* @A1A */
#define GSK_OS400_ERROR_NO_INITIALIZE              6007      /* @A1A */
#define GSK_OS400_ERROR_ALREADY_SECURE             6008      /* @A1A */
#define GSK_OS400_ERROR_NOT_TCP                    6009      /* @A1A */
#define GSK_OS400_ERROR_INVALID_POINTER            6010      /* @A1A */
#define GSK_OS400_ERROR_TIMED_OUT                  6011      /* @A1A */
#define GSK_OS400_ASYNCHRONOUS_RECV                6012      /* @A1A */
#define GSK_OS400_ASYNCHRONOUS_SEND                6013      /* @A1A */
#define GSK_OS400_ERROR_INVALID_OVERLAPPEDIO_T     6014      /* @A1A */
#define GSK_OS400_ERROR_INVALID_IOCOMPLETIONPORT   6015      /* @A1A */
#define GSK_OS400_ERROR_BAD_SOCKET_DESCRIPTOR      6016      /* @A1A */
#define GSK_OS400_ERROR_CERTIFICATE_REVOKED        6017
#define GSK_OS400_ERROR_CRL_INVALID                6018
#define GSK_OS400_ASYNCHRONOUS_SOC_INIT            6019      /* @A1A */

/* Define AS400 constants for upward compatibility   */
/* with V5R1 - DO NOT USE                            */
#define GSK_AS400_ERROR_NOT_TRUSTED_ROOT           6000
#define GSK_AS400_ERROR_PASSWORD_EXPIRED           6001
#define GSK_AS400_ERROR_NOT_REGISTERED             6002
#define GSK_AS400_ERROR_NO_ACCESS                  6003
#define GSK_AS400_ERROR_CLOSED                     6004
#define GSK_AS400_ERROR_NO_CERTIFICATE_AUTHORITIES 6005
#define GSK_AS400_ERROR_NO_INITIALIZE              6007
#define GSK_AS400_ERROR_ALREADY_SECURE             6008
#define GSK_AS400_ERROR_NOT_TCP                    6009
#define GSK_AS400_ERROR_INVALID_POINTER            6010
#define GSK_AS400_ERROR_TIMED_OUT                  6011
#define GSK_AS400_ASYNCHRONOUS_RECV                6012
#define GSK_AS400_ASYNCHRONOUS_SEND                6013
#define GSK_AS400_ERROR_INVALID_OVERLAPPEDIO_T     6014
#define GSK_AS400_ERROR_INVALID_IOCOMPLETIONPORT   6015
#define GSK_AS400_ERROR_BAD_SOCKET_DESCRIPTOR      6016

#define GSK_OS400_4BYTE_VALUE                     70000      /* @A1C */

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/

typedef void *gsk_handle;

typedef enum GSK_MISC_ID_T
{
  GSK_RESET_CIPHER = 100,  /* Rerun handshake */
  GSK_RESET_SESSION = 101, /* Reset SID entry */
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_MISC_FINAL = GSK_OS400_4BYTE_VALUE               /* @A1C */

} GSK_MISC_ID;

typedef enum GSK_BUF_ID_T
{
  GSK_USER_DATA = 200,
  GSK_KEYRING_FILE = 201,
  GSK_KEYRING_PW = 202,
  GSK_KEYRING_LABEL = 203,
  GSK_KEYRING_STASH_FILE = 204,
  GSK_V2_CIPHER_SPECS = 205,
  GSK_V3_CIPHER_SPECS = 206,
  GSK_CONNECT_CIPHER_SPEC = 207,
  GSK_CONNECT_SEC_TYPE = 208,
  GSK_LDAP_SERVER = 209,
  GSK_LDAP_USER = 210,
  GSK_LDAP_USER_PW = 211,
  GSK_SID_VALUE = 212,
  GSK_PKCS11_DRIVER_PATH = 213,
  GSK_PKCS11_TOKEN_LABEL = 214,                              /* @A2A */
  GSK_PKCS11_TOKEN_PWD = 215,                                /* @A2A */
  GSK_CSP_NAME = 216,                                        /* @A2A */
  GSK_OS400_APPLICATION_ID = 6999,
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_BUF_FINAL = GSK_OS400_4BYTE_VALUE                /* @A1C */

} GSK_BUF_ID;

typedef enum GSK_NUM_ID_T
{
  GSK_FD = 300,
  GSK_V2_SESSION_TIMEOUT = 301,
  GSK_V3_SESSION_TIMEOUT = 302,
  GSK_LDAP_SERVER_PORT = 303,
  GSK_V2_SIDCACHE_SIZE = 304,
  GSK_V3_SIDCACHE_SIZE = 305,
  GSK_LDAP_SERVER_INDEX = 306,      /* must be >= 1 */       /* @A2A */
  GSK_LDAP_FAILOVER_RECONNECTION_PERIOD = 307,               /* @A2A */
  GSK_CRL_CACHE_ENTRY_LIFETIME = 308,                        /* @A2A */
  GSK_CRL_CACHE_SIZE = 309,                                  /* @A2A */
  GSK_OS400_READ_TIMEOUT = 6993,                             /* @A2A */
  GSK_CERTIFICATE_VALIDATION_CODE = 6996,
  GSK_HANDSHAKE_TIMEOUT = 6998,
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_NUM_FINAL = GSK_OS400_4BYTE_VALUE                /* @A1C */

} GSK_NUM_ID;

typedef enum GSK_ENUM_ID_T
{
  GSK_CLIENT_AUTH_TYPE = 401,
  GSK_SESSION_TYPE = 402,
  GSK_PROTOCOL_SSLV2 = 403,
  GSK_PROTOCOL_SSLV3 = 404,
  GSK_PROTOCOL_USED = 405,
  GSK_SID_FIRST = 406,
  GSK_PROTOCOL_TLSV1 = 407,
  GSK_ACCELERATOR_RAINBOW_CS = 408,                          /* @A2A */
  GSK_ACCELERATOR_NCIPHER_NF = 409,                          /* @A2A */
  GSK_SERVER_AUTH_TYPE = 410,                                /* @A2A */
  GSK_ENVIRONMENT_CLOSE_OPTIONS = 411,                       /* @A2A */
  GSK_LDAP_REQUIRED_AT_INIT = 412,                           /* @A2A */
  GSK_AES_SUPPORT = 413,                                     /* @A2A */
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_ENUM_FINAL = GSK_OS400_4BYTE_VALUE               /* @A1C */

} GSK_ENUM_ID ;

typedef enum GSK_ENUM_VALUE_T
{
  GSK_NULL = 500,                         /* Use for initial value   */
  GSK_CLIENT_AUTH_FULL = 503,             /* GSK_CLIENT_AUTH_TYPE    */
  GSK_CLIENT_AUTH_PASSTHRU = 505,         /* GSK_CLIENT_AUTH_TYPE    */
  GSK_CLIENT_SESSION = 507,               /* GSK_SESSION_TYPE        */
  GSK_SERVER_SESSION = 508,               /* GSK_SESSION_TYPE        */
  GSK_SERVER_SESSION_WITH_CL_AUTH = 509,  /* GSK_SESSION_TYPE        */
  GSK_PROTOCOL_SSLV2_ON = 510,            /* GSK_PROTOCOL_SSLV2      */
  GSK_PROTOCOL_SSLV2_OFF = 511,           /* GSK_PROTOCOL_SSLV2      */
  GSK_PROTOCOL_SSLV3_ON = 512,            /* GSK_PROTOCOL_SSLV3      */
  GSK_PROTOCOL_SSLV3_OFF = 513,           /* GSK_PROTOCOL_SSLV3      */
  GSK_PROTOCOL_USED_SSLV2 = 514,          /* GSK_PROTOCOL_USED       */
  GSK_PROTOCOL_USED_SSLV3 = 515,          /* GSK_PROTOCOL_USED       */
  GSK_SID_IS_FIRST = 516,                 /* GSK_SID_FIRST           */
  GSK_SID_NOT_FIRST = 517,                /* GSK_SID_FIRST           */
  GSK_PROTOCOL_TLSV1_ON = 518,            /* GSK_PROTOCOL_TLSV1      */
  GSK_PROTOCOL_TLSV1_OFF = 519,           /* GSK_PROTOCOL_TLSV1      */
  GSK_PROTOCOL_USED_TLSV1 = 520,          /* GSK_PROTOCOL_USED (get) */
  GSK_ACCELERATOR_RAINBOW_CS_ON = 530,                       /* @A2A */
  GSK_ACCELERATOR_RAINBOW_CS_OFF = 531,                      /* @A2A */
  GSK_ACCELERATOR_NCIPHER_NF_ON = 532,                       /* @A2A */
  GSK_ACCELERATOR_NCIPHER_NF_OFF = 533,                      /* @A2A */
  GSK_SERVER_AUTH_FULL = 534,       /* GSK_SERVER_AUTH_FULL     @A2A */
  GSK_SERVER_AUTH_PASSTHRU = 535,   /* GSK_SERVER_AUTH_PASSTHRU @A2A */
  GSK_DELAYED_ENVIRONMENT_CLOSE = 536,                       /* @A2A */
  GSK_NORMAL_ENVIRONMENT_CLOSE = 537,                        /* @A2A */
  GSK_INIT_CRL_LDAP_REQUIRED_ON = 538,                       /* @A2A */
  GSK_INIT_CRL_LDAP_REQUIRED_OFF = 539,                      /* @A2A */
  GSK_AES_SUPPORT_ON = 540,                                  /* @A2A */
  GSK_AES_SUPPORT_OFF = 541,                                 /* @A2A */
  GSK_OS400_SERVER_AUTH_REQUIRED = 6994, /* GSK_SERVER_AUTH_TYPE @A2A*/
  GSK_OS400_CLIENT_AUTH_REQUIRED = 6995,  /* GSK_CLIENT_AUTH_TYPE    */
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_ENUM_VALUE_FINAL = GSK_OS400_4BYTE_VALUE         /* @A1C */

} GSK_ENUM_VALUE ;

/* The following enumerated type is the identifier for the data type
   of the elements of the array of information in the gsk_cert_data
   structure. Note that depending on the specific certificate, some
   data types may not be present. */
typedef enum GSK_CERT_DATA_ID_T
{
  CERT_BODY_DER = 600,     /* complete certificate body, der format */
  CERT_BODY_BASE64 = 601,  /* complete certificate body, base 64    */
  CERT_SERIAL_NUMBER = 602,
  CERT_COMMON_NAME = 610,
  CERT_LOCALITY = 611,
  CERT_STATE_OR_PROVINCE = 612,
  CERT_COUNTRY = 613,
  CERT_ORG = 614,
  CERT_ORG_UNIT = 615,
  CERT_DN_PRINTABLE = 616,
  CERT_DN_DER = 617,
  CERT_POSTAL_CODE = 618,
  CERT_EMAIL = 619,
  CERT_ISSUER_COMMON_NAME = 650,
  CERT_ISSUER_LOCALITY = 651,
  CERT_ISSUER_STATE_OR_PROVINCE = 652,
  CERT_ISSUER_COUNTRY = 653,
  CERT_ISSUER_ORG = 654,
  CERT_ISSUER_ORG_UNIT = 655,
  CERT_ISSUER_DN_PRINTABLE = 656,
  CERT_ISSUER_DN_DER = 657,
  CERT_ISSUER_POSTAL_CODE = 658,
  CERT_ISSUER_EMAIL = 659,
  CERT_VERSION = 660,                                         /* @A2A */
  CERT_SIGNATURE_ALGORITHM = 661,                             /* @A2A */
  CERT_VALID_FROM = 662,                                      /* @A2A */
  CERT_VALID_TO = 663,                                        /* @A2A */
  CERT_PUBLIC_KEY_ALGORITHM = 664,                            /* @A2A */
  CERT_PUBLIC_KEY = 665,                                      /* @A2A */
  CERT_PUBLIC_KEY_SIZE = 666,                                 /* @A2A */
  CERT_FINGERPRINT_ALGORITHM = 667,                           /* @A2A */
  CERT_FINGERPRINT = 668,                                     /* @A2A */
  CERT_ISSUER_UNIQUEID = 669,                                 /* @A2A */
  CERT_SUBJECT_UNIQUEID = 670,                                /* @A2A */
  CERT_KEY_USAGE = 671,                                       /* @A2A */
  CERT_SUBJECT_ALTERNATIVE_NAME_RFC822NAME = 672,             /* @A2A */
  CERT_SUBJECT_ALTERNATIVE_NAME_DNSNAME = 673,                /* @A2A */
  CERT_SUBJECT_ALTERNATIVE_NAME_DIRECTORYNAME = 674,          /* @A2A */
  CERT_SUBJECT_ALTERNATIVE_NAME_URI = 675,                    /* @A2A */
  CERT_SUBJECT_ALTERNATIVE_NAME_IPADDRESS = 676,              /* @A2A */
  CERT_CERTIFICATE_POLICY_POLICYIDENTIFIER = 677,             /* @A2A */
  CERT_BASIC_CONSTRAINTS_CA = 678,                            /* @A2A */
  CERT_BASIC_CONSTRAINTS_PATH_LENGTH_CONSTRAINT = 679,        /* @A2A */
  CERT_CRL_DISTRIBUTION_POINTS_DISTRIBUTIONPOINTNAME = 680,   /* @A2A */
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_CERT_DATA_FINAL = GSK_OS400_4BYTE_VALUE          /* @A1C */


} GSK_CERT_DATA_ID;

/* To extract information about the certificate received from the partner,
   issue the
    gsk_attribute_get_cert_info(soc_handle,GSK_PARTNER_CERT_INFO,....)
   function call. To extract information about the certificate to extract the
   number of fields in the array that was sent to the partner, issue the
    gsk_attribute_get_cert_info(soc_handle,GSK_LOCAL_CERT_INFO,....)
   function call. In both cases the third parameter specifies the address
   in which to place a pointer to an array of the following structures.
   The fourth parameter specifies the address of an integer into which
   the number of elements in the array will be stored. This information
   is valid only after gsk_secure_soc_init.

   The following structure specifies the format of each element in this
   array of certificate data types.                                 */

typedef struct gsk_cert_data_elem_t
{
  GSK_CERT_DATA_ID cert_data_id;  /* identifer of each data type */
  char *cert_data_p;  /* pointer to data */
  int cert_data_l;  /* length of data (not including trailing null) */

} gsk_cert_data_elem;

typedef enum GSK_CERT_ID_T
{
  GSK_PARTNER_CERT_INFO = 700,
  GSK_LOCAL_CERT_INFO = 701,
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_CERT_FINAL = GSK_OS400_4BYTE_VALUE               /* @A1C */

} GSK_CERT_ID ;

/* The following enumerated type and function call is used to set
   pointers to 'callback' routines that override default routines. */
typedef enum GSK_CALLBACK_ID_T
{
  GSK_IO_CALLBACK = 800,
  GSK_SID_CACHE_CALLBACK = 801,
  GSK_CLIENT_CERT_CALLBACK = 802,
  GSK_PKCS11_CALLBACK = 803,        /* Smart card */
  GSK_ENVIRONMENT_CLOSE_CALLBACK = 804,                      /* @A2A */
  GSK_CERT_VALIDATION_CALLBACK = 805,                        /* @A2A */
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_CALLBACK_FINAL = GSK_OS400_4BYTE_VALUE           /* @A1C */

} GSK_CALLBACK_ID;

/* The following structure defines the entry points to routines that
   replace the default read, write, and getpeetid routines.
*/
typedef enum GSK_SOCKET_OPTION_COMMANDS_T
{
  GSK_SET_SOCKET_STATE_FOR_HANDSHAKE = 900,
  GSK_SET_SOCKET_STATE_FOR_READ_WRITE = 901,
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_SOCKET_OPTION_FINAL = GSK_OS400_4BYTE_VALUE      /* @A1C */

} GSK_SOCKET_OPTION_COMMANDS;

typedef struct iocallback_struct {

int (* io_read)(int fd, void* data, int len, char * user_data);
int (* io_write)(int fd, void* data, int len, char * user_data);
unsigned long (* io_getpeerid)(int fd, char * user_data);
int (* io_setsocketoptions) (int fd, int cmd, char * future);
int (* io_rsvd2) (int fut2);  /*Future use - set to NULL*/
int (* io_rsvd1) (int fut1);  /*Future use - set to NULL*/

} iocallback;

/* The following section specifies the functions required to replace the
   internal SID (Session ID) cache routines. Each time an SSL connection
   is established with a new partner, a new Session ID (SID) is created and
   information about that session is saved in a cache. If a subsequent
   connection is started with that same partner, information from the cache
   can be used to save on overhead in establishing that conenction. */
typedef enum SSL_VERSION_T
{
  enum_SSLV2 = 20,
  enum_SSLV3 = 30,
               /* Force enum size to 4 bytes - do not use this value */
  GSK_OS400_SSL_VERSION_FINAL = GSK_OS400_4BYTE_VALUE        /* @A1C */

} SSL_VERSION ;

typedef struct data_buf_struct
{
  unsigned length;
  void *data;
} DataBuffer;

typedef struct SIDCacheCallBack_struct
{
  DataBuffer *(* Get)(const unsigned char *sessionID,
                      unsigned sessionIDLen,
                      int SSLVersion);

  DataBuffer *(* Put)(DataBuffer *sslSessionData,
                      const unsigned char *sessionID,
                      unsigned sessionIDLen,
                      int SSLVersion);

  void (* Delete)(const unsigned char *sessionID,
                  unsigned sessionIDLen,
                  int SSLVersion);

  void (* FreeDataBuffer)(DataBuffer *data);

} SIDCacheCallBack;

typedef struct gsk_list_t gsk_list;

struct gsk_list_t
{
  char *gsk_string;
  gsk_list *next;
};

typedef int (*ptgsk_read)
            (int fd, void* data, int len, char * user_data); /* @A2A */
typedef int (*ptgsk_write)
            (int fd, void* data, int len, char * user_data); /* @A2A */
typedef unsigned long (*ptgsk_getpeerid)
                               (int fd, char * user_data);   /* @A2A */
typedef int (*ptgsk_setsocketoptions)
                      (int fd, int cmd, char * user_data);   /* @A2A */

typedef int (*pgsk_cert_validation_callback)
                              ( const unsigned char *,int ); /* @A2A */

typedef int ( *pgsk_client_cert_callback)
                                    (gsk_handle ssl_handle); /* @A2A */
typedef void ( *pGSK_ENVIRONMENT_CLOSE_CALLBACK)
                                    (gsk_handle ssl_handle); /* @A2A */

typedef enum VALIDATE_REQUIRED_T                             /* @A2A */
{                                                            /* @A2A */
    GSK_NO_VALIDATION = 900,                                 /* @A2A */
    GSK_VALIDATION_REQUIRED,                                 /* @A2A */
    GSK_OS400_VALIDATE_REQUIRED_FINAL = GSK_OS400_4BYTE_VALUE/* @A2A */
} VALIDATE_REQUIRED;                                         /* @A2A */

typedef enum CERT_NEEDED_T                                   /* @A2A */
{                                                            /* @A2A */
    GSK_CERTIFICATE_CHAIN_SENT_VIA_SSL = 950,                /* @A2A */
    GSK_COMPLETED_CERTIFICATE_CHAIN,                         /* @A2A */
    GSK_END_ENTITY_CERTIFICATE,                              /* @A2A */
    GSK_OS400_CERT_NEEDE_FINAL = GSK_OS400_4BYTE_VALUE       /* @A2A */
} CERT_NEEDED;                                               /* @A2A */

typedef struct validationCallBack_struct                     /* @A2A */
{                                                            /* @A2A */
    int ( *validation_callback)                              /* @A2A */
                              ( const unsigned char *,int ); /* @A2A */
    VALIDATE_REQUIRED validateRequired;                      /* @A2A */
    CERT_NEEDED certificateNeeded;                           /* @A2A */
} validationCallBack;                                        /* @A2A */


typedef enum GSK_DATA_ID_T {                                 /* @A2A */
   GSK_DATA_ID_SUPPORTED_KEYS = 720,                         /* @A2A */
   GSK_DATA_ID_SERVER_ISSUERS = 721,                         /* @A2A */
   GSK_OS400_DATA_FINAL = GSK_OS400_4BYTE_VALUE              /* @A2A */
} GSK_DATA_ID;                                               /* @A2A */



/* This is the prototype for the callback routine that is invoked when
   a smart card needs to be inserted into a smartcard reader. Return values:
        GSK_SC_OK indicates that card is inserted by end user.
        GSK_SC_CANCEL indicates user does not want to use smart card.
   my_handle is the handle for the gsk_secure_soc_init that is
   causing the callback to be invoked.                            */


typedef int ( *ptgsk_scinsert)(gsk_handle my_handle);        /* @A2A */

/* This is the prototype for the callback routine that is invoked when
   SSL requires the user to be signed on to the token and needs the
   associated password. Return values:
        GSK_SC_OK indicates that password has been entered.
        GSK_SC_CANCEL indicates user does not want to use smart card.
   my_handle is the handle for the gsk_secure_soc_init that is
   causing the callback to be invoked.                             */

typedef int (*ptgsk_scsignon)                                /* @A2A */
                    (char * sc_token, char * sc_password,    /* @A2A */
                       gsk_handle my_handle);                /* @A2A */

/* The following structure is passed as the third parameter to the
   gsk_attribute_set_callback function when the second parameter is
   GSK_PKCS11_CALLBACK. */

typedef struct pkcs11callback_struct {                       /* @A2A */
  int (*sc_insert)(gsk_handle my_handle);                    /* @A2A */
  int (*sc_signon)(char * sc_token, char * sc_password,      /* @A2A */
                 gsk_handle my_handle);                      /* @A2A */
  int (*sc_rsvd4) ();  /*Future use - set to NULL*/          /* @A2A */
  int (*sc_rsvd3) ();  /*Future use - set to NULL*/          /* @A2A */
  int (*sc_rsvd2) ();  /*Future use - set to NULL*/          /* @A2A */
  int (*sc_rsvd1) ();  /*Future use - set to NULL*/          /* @A2A */
} pkcs11callback;                                            /* @A2A */

/*********************************************************************/
/* Function prototypes                                               */
/*********************************************************************/

QBFC_EXTERN int gsk_attribute_get_enum(gsk_handle,
                                       GSK_ENUM_ID,
                                       GSK_ENUM_VALUE *);

QBFC_EXTERN int gsk_attribute_get_numeric_value(gsk_handle,
                                                GSK_NUM_ID,
                                                int *);

QBFC_EXTERN int gsk_attribute_get_buffer(gsk_handle,
                                         GSK_BUF_ID,
                                         const char **,
                                         int *);

QBFC_EXTERN int gsk_attribute_get_cert_info(gsk_handle,
                                            GSK_CERT_ID,
                                            const gsk_cert_data_elem **,
                                            int *);

QBFC_EXTERN int gsk_attribute_set_buffer(gsk_handle,
                                         GSK_BUF_ID,
                                         const char *,
                                         int);

QBFC_EXTERN int gsk_attribute_set_callback(gsk_handle,
                                           GSK_CALLBACK_ID,
                                           void *);

QBFC_EXTERN int gsk_attribute_set_enum(gsk_handle,
                                       GSK_ENUM_ID,
                                       GSK_ENUM_VALUE);

QBFC_EXTERN int gsk_attribute_set_numeric_value(gsk_handle,
                                                GSK_NUM_ID,
                                                int);

QBFC_EXTERN int gsk_environment_close(gsk_handle *);

QBFC_EXTERN int gsk_environment_init(gsk_handle);

QBFC_EXTERN int gsk_environment_open(gsk_handle *);

QBFC_EXTERN int gsk_secure_soc_close(gsk_handle *);

QBFC_EXTERN int gsk_secure_soc_init(gsk_handle);

QBFC_EXTERN int gsk_secure_soc_startInit(gsk_handle,
                                         int,
                                         Qso_OverlappedIO_t *); /* @A1A */

QBFC_EXTERN int gsk_secure_soc_misc(gsk_handle,
                                    GSK_MISC_ID);

QBFC_EXTERN int gsk_secure_soc_open(gsk_handle,
                                    gsk_handle*);

QBFC_EXTERN int gsk_secure_soc_read(gsk_handle,
                                    char *,
                                    int,
                                    int *);

QBFC_EXTERN int gsk_secure_soc_startRecv(gsk_handle,
                                         int,
                                         Qso_OverlappedIO_t *);

QBFC_EXTERN int gsk_secure_soc_write(gsk_handle,
                                     char *,
                                     int,
                                     int *);

QBFC_EXTERN int gsk_secure_soc_startSend(gsk_handle,
                                         int,
                                         Qso_OverlappedIO_t *);

QBFC_EXTERN const char *gsk_strerror(int);

/* Not supported on iSeries */
QBFC_EXTERN int gsk_validate_password(gsk_handle,
                                      const char *,
                                      const char *);         /* @A2A */

/* Not supported on iSeries */
QBFC_EXTERN int gsk_attribute_get_data(gsk_handle,
                                       GSK_DATA_ID,
                                       void **);             /* @A2A */

/* Not supported on iSeries */
QBFC_EXTERN int gsk_get_cert_by_label(gsk_handle,
                                      const char *,
                                      const gsk_cert_data_elem **,
                                      int *);                /* @A2A */
/* Not supported on iSeries */
QBFC_EXTERN int gsk_start_trace(const char *,
                                int,
                                int);                        /* @A2A */
/* Not supported on iSeries */
QBFC_EXTERN int gsk_stop_trace();                            /* @A2A */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif  /* #ifndef __gskssl_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
