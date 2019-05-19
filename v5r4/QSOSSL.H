#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  qsossl.h                                       */
/*                                                                   */
/* Descriptive Name: Secure Sockets Layer (SSL) API Definition       */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* 5769-SS1, 5722-SS1                                                */
/* (C) Copyright IBM Corp. 1997, 2004                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Copyright (c) 1995.  Netscape Communications Corporation.  All    */
/* rights reserved.  This use of this Secure Sockets Layer Reference */
/* Implementation (the "Software") is governed by the terms of the   */
/* SSL Reference Implementation License Agreement.  Please read the  */
/* accompanying "License" file for a description of the rights       */
/* granted.  Any other third party materials you use with this       */
/* Software may be subject to additional license restrictions from   */
/* the licensors of such third party software and/or additional      */
/* export restrictions.  The SSL Implementation License Agreement    */
/* grants you no rights to any such third party material.            */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the SSL API                   */
/*                                                                   */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          qlg.h                                                 A1A*/
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          QlgSSLInit                                            A1A*/
/*          SSLHandleStr                                             */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          SSL_Create                                               */
/*          SSL_Destroy                                              */
/*          SSL_Handshake                                            */
/*          SSL_Init                                                 */
/*          SSL_Read                                                 */
/*          SSL_Write                                                */
/*          SSL_Init_Application                                     */
/*          SSL_Strerror                                          A2A*/
/*          SSL_Perror                                            A2A*/
/*                                                                   */
/*          QlgSSL_Init                                           A1A*/
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= Dxxxxxxx     4D40  960828  ROCH     New include.           */
/*   $A1= Dxxxxxxx     5D10  990525  ROCH     Added QlgSSLInit and   */
/*                                            QlgSSL_Init prototype  */
/*   $A2= Dxxxxxxx     5D10  990712  ROCH     Added SSL_Strerror and */
/*                                            SSL_Perror.            */
/*   $A3= Dxxxxxxx     4D50  991229  ROCH     Added TLS versions and */
/*                                            TLS cipher suites and  */
/*                                            sessionType            */
/*   $A4= Dxxxxxxx     5D10  000816  ROCH     Support protocol and   */
/*                                            timeout parameters on  */
/*                                            SSL_Init_Application   */
/*   $A5= Dxxxxxxx     5D10  010221  ROCH     Add AES cipher suite   */
/*   $A6= Dxxxxxxx     5D30  020604  ROCH     moved to qsossl        */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __qsossl_h                                           /* @A6C */
  #define __qsossl_h                                         /* @A6C */

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/

#include <qlg.h>                      /* Qlg_Path_Name           @A1A*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*********************************************************************/
/* Macros to set flags parameter of SSL_Create()                     */
/*********************************************************************/

#define SSL_ENCRYPT_MASK  (1<<0)      /* Encrypt the connection mask */
#define SSL_ENCRYPT       (1<<0)      /* Encrypt the connection      */
#define SSL_DONT_ENCRYPT  (0)         /* Don't encrypt the connection*/

/*********************************************************************/
/* Macros to set how parameter of SSL_Handshake()                    */
/*********************************************************************/

#define SSL_HANDSHAKE_AS_CLIENT                               0
#define SSL_HANDSHAKE_AS_SERVER                               1
#define SSL_HANDSHAKE_AS_SERVER_WITH_CLIENT_AUTH              2
#define SSL_HANDSHAKE_AS_SERVER_WITH_OPTIONAL_CLIENT_AUTH     3

/*********************************************************************/
/* Macros for output value of member sessionType                 @A3A*/
/*********************************************************************/

#define SSL_REGISTERED_AS_CLIENT                           0   /*@A3A*/
#define SSL_REGISTERED_AS_SERVER                           1   /*@A3A*/
#define SSL_REGISTERED_AS_SERVER_WITH_CLIENT_AUTH          2   /*@A3A*/
#define SSL_REGISTERED_AS_SERVER_WITH_OPTIONAL_CLIENT_AUTH 3   /*@A3A*/
#define SSL_REGISTERED_AS_NOT_SPECIFIED                    99  /*@A3A*/

/*********************************************************************/
/* Macros for protocol field in SSLHandle and SSLInitAppStr          */
/*********************************************************************/

#define SSL_VERSION_CURRENT 0 /* TLS w/V3.0 & V2.0 compatibility @A3C*/
#define SSL_VERSION_2 2       /* SSL Version 2.0 only                */
#define SSL_VERSION_3 3       /* SSL Version 3.0 only                */
#define TLS_VERSION_1 4       /* TLS Version 1 only              @A3A*/

/*********************************************************************/
/* Macros for protocol field in  SSLInitAppStr                       */
/*********************************************************************/
#define TLSV1_SSLV3 5         /* TLS_V1 or SSL_V3                @A4A*/

/*********************************************************************/
/* Macros for timeout field in SSLInitAppStr (affects SSL V3 and     */
/* TLS V1 cache timeouts only)                                       */
/*********************************************************************/

#define SSL_TIMEOUT_DISABLE 0xffffffff /* Do not cache session parms
                                 for abbreviated handshakes      @A4A*/
#define SSL_TIMEOUT_DEFAULT 0 /* Use default timeout (24 hours)  @A4A*/
#define SSL_TIMEOUT_MAX 86400 /* Max timeout (24 hours)          @A4A*/

/*********************************************************************/
/* Macros for return code from SSL functions                         */
/*********************************************************************/

#define SSL_ERROR_NO_CIPHERS                    -1
#define SSL_ERROR_NO_CERTIFICATE                -2
#define SSL_ERROR_BAD_CERTIFICATE               -4
#define SSL_ERROR_UNSUPPORTED_CERTIFICATE_TYPE  -6
#define SSL_ERROR_IO                            -10
#define SSL_ERROR_BAD_MESSAGE                   -11
#define SSL_ERROR_BAD_MAC                       -12
#define SSL_ERROR_UNSUPPORTED                   -13
#define SSL_ERROR_BAD_CERT_SIG                  -14
#define SSL_ERROR_BAD_CERT                      -15
#define SSL_ERROR_BAD_PEER                      -16
#define SSL_ERROR_PERMISSION_DENIED             -17
#define SSL_ERROR_SELF_SIGNED                   -18
#define SSL_ERROR_BAD_MALLOC                    -20
#define SSL_ERROR_BAD_STATE                     -21
#define SSL_ERROR_SOCKET_CLOSED                 -22
#define SSL_ERROR_NOT_TRUSTED_ROOT              -23
#define SSL_ERROR_CERT_EXPIRED                  -24
#define SSL_ERROR_BAD_DATE                      -25
#define SSL_ERROR_BAD_KEY_LEN_FOR_EXPORT        -26
#define SSL_ERROR_NOT_KEYRING                   -90
#define SSL_ERROR_KEYPASSWORD_EXPIRED           -91
#define SSL_ERROR_CERTIFICATE_REJECTED          -92
#define SSL_ERROR_SSL_NOT_AVAILABLE             -93
#define SSL_ERROR_NO_INIT                       -94
#define SSL_ERROR_NO_KEYRING                    -95
#define SSL_ERROR_NOT_ENABLED                   -96
#define SSL_ERROR_BAD_CIPHER_SUITE              -97
#define SSL_ERROR_CLOSED                        -98
#define SSL_ERROR_UNKNOWN                       -99
#define SSL_ERROR_NOT_REGISTERED                -1009
#define SSL_ERROR_NO_CERTIFICATE_AUTHORITIES    -1011

/*********************************************************************/
/* Macros for cipherKind                                             */
/*********************************************************************/

#define SSL_CK_RC4_128_WITH_MD5                0x01,0x00,0x80
#define SSL_CK_RC4_128_EXPORT40_WITH_MD5       0x02,0x00,0x80
#define SSL_CK_RC2_128_CBC_WITH_MD5            0x03,0x00,0x80
#define SSL_CK_RC2_128_CBC_EXPORT40_WITH_MD5   0x04,0x00,0x80
#define SSL_CK_DES_64_CBC_WITH_MD5             0x06,0x00,0x40
#define SSL_CK_DES192_EDE3_CBC_WITH_MD5        0x07,0x00,0xC0

/*********************************************************************/
/* Macros for cipherSuiteList                                        */
/*********************************************************************/
/* All of these ciphersuites will work when interoperating from      */
/* AS/400 to AS/400 SSL implementation.                              */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/* The following cipher suites will work when using version 3.0 to   */
/* version 3.0 SSL implementations                                   */
/*********************************************************************/
#define              SSL_RSA_WITH_NULL_MD5              0x0001
#define              SSL_RSA_WITH_NULL_SHA              0x0002
#define              SSL_RSA_WITH_RC4_128_SHA           0x0005
#define              SSL_RSA_WITH_DES_CBC_SHA           0x0009
#define              SSL_RSA_WITH_3DES_EDE_CBC_SHA      0x000A

/*********************************************************************/
/* The following cipher suites will work when using version 2.0 to   */
/* version 2.0 SSL implementations as well as version 3.0 to version */
/* 3.0 SSL implementations                                           */
/*********************************************************************/
#define              SSL_RSA_EXPORT_WITH_RC4_40_MD5     0x0003
#define              SSL_RSA_WITH_RC4_128_MD5           0x0004
#define              SSL_RSA_EXPORT_WITH_RC2_CBC_40_MD5 0x0006

/*********************************************************************/
/* The following cipher suites will work when using version 2.0 to   */
/* version 2.0 SSL implementations.                                  */
/*********************************************************************/
#define              SSL_RSA_WITH_RC2_CBC_128_MD5       0xFF01
#define              SSL_RSA_WITH_DES_CBC_MD5           0xFF02
#define              SSL_RSA_WITH_3DES_EDE_CBC_MD5      0xFF03

/*********************************************************************/
/* Macros for TLS cipher suites                                      */
/*********************************************************************/
#define              TLS_RSA_WITH_NULL_MD5              0x0001 /*@A3A*/
#define              TLS_RSA_WITH_NULL_SHA              0x0002 /*@A3A*/
#define              TLS_RSA_WITH_RC4_128_SHA           0x0005 /*@A3A*/
#define              TLS_RSA_WITH_DES_CBC_SHA           0x0009 /*@A3A*/
#define              TLS_RSA_WITH_3DES_EDE_CBC_SHA      0x000A /*@A3A*/

#define              TLS_RSA_EXPORT_WITH_RC4_40_MD5     0x0003 /*@A3A*/
#define              TLS_RSA_WITH_RC4_128_MD5           0x0004 /*@A3A*/
#define              TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 0x0006 /*@A3A*/

#define              TLS_RSA_WITH_RC2_CBC_128_MD5       0xFF01 /*@A3A*/
#define              TLS_RSA_WITH_DES_CBC_MD5           0xFF02 /*@A3A*/
#define              TLS_RSA_WITH_3DES_EDE_CBC_MD5      0xFF03 /*@A3A*/

#define              TLS_RSA_WITH_AES_128_CBC_SHA       0x002F /*@A5A*/
#define              TLS_RSA_WITH_AES_256_CBC_SHA       0x0035 /*@A6A*/

/*********************************************************************/
/* The following cipher suite is not supported by the AS/400         */
/* implementation                                                    */
/*********************************************************************/
#define              TLS_NULL_WITH_NULL_NULL            0x0000 /*@A3A*/
#define              SSL_NULL_WITH_NULL_NULL            0x0000 /*@A3M*/
#define              SSL_RSA_EXPORT_WITH_DES40_CBC_SHA  0x0008

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/

struct SSLInitStr {                   /* SSLInitStr                  */

   char*          keyringFileName;    /* Keyring file name           */
   char*          keyringPassword;    /* Keyring file password       */
   unsigned short int* cipherSuiteList; /* List of cipher suites     */
   unsigned int        cipherSuiteListLen; /* # of entries in the
                                         cipher suites list          */
};

typedef struct SSLInitStr SSLInit;    /* SSLInit                     */

struct QlgSSLInitStr {                /* QlgSSLInitStr           @A1A*/

   Qlg_Path_Name_T* keyringFileName;  /* Keyring file name       @A1A*/
   char*          keyringPassword;    /* Keyring file password   @A1A*/
   unsigned short int* cipherSuiteList; /* List of cipher suites @A1A*/
   unsigned int        cipherSuiteListLen; /* # of entries in the
                                         cipher suites list      @A1A*/
};                                    /*                         @A1A*/

typedef struct QlgSSLInitStr QlgSSLInit;/* QlgSSLInit            @A1A*/

struct SSLHandleStr {                 /* SSLHandleStr                */

   int            fd;                 /* Socket descriptor           */
   int            createFlags;        /* SSL_Create flags value      */
   unsigned       protocol;           /* SSL protocol version        */
   unsigned       timeout;            /* Timeout value in seconds    */
   unsigned char  cipherKind[3];      /* Current 2.0 cipher suite    */
   unsigned short int cipherSuite;    /* Current 3.0 cipher suite    */
   unsigned short int* cipherSuiteList; /* List of cipher suites     */
   unsigned int        cipherSuiteListLen; /* # of entries in the
                                         cipher suites list          */
   unsigned char* peerCert;           /* Peer certificate            */
   unsigned       peerCertLen;        /* Peer certificate length     */
   int            peerCertValidateRc; /* return code from            */
                                      /* validate of certficate      */
   int            (*exitPgm)(struct SSLHandleStr* sslh);
                                      /* Authentication exit
                                         program called when a
                                         certificate is received
                                         during SSL handshake        */

};

typedef struct SSLHandleStr SSLHandle; /* SSLHandle                  */

struct SSLInitAppStr {                /* SSLInitAppStr               */

   char*          applicationID;      /* application id value        */
   unsigned int   applicationIDLen;   /* length of application id    */
   char*          localCertificate;   /* local certificate           */
   unsigned int   localCertificateLen;/* length of local certificate */
   unsigned short int* cipherSuiteList; /* List of cipher suites     */
   unsigned int   cipherSuiteListLen; /* number of entries in
                                         the cipher suites list      */
   unsigned int   sessionType;        /* the type of application as
           registered              @A3A*/
   unsigned int   reserved1;          /* reserved - must be 0    @A4A*/
   unsigned int   protocol;           /* SSL protocol version    @A4A*/
   unsigned int   timeout;            /* cache timeout (seconds) @A4A*/
   char           reserved[12];       /* reserved - must be NULL (0s)
                                         @A4C*/
};

typedef struct SSLInitAppStr SSLInitApp; /* SSLInitApp               */

struct SSLErrorMsgStr {               /* SSLErrorMsgStr          @A2A*/

   char           messageID[7];       /* Message identifier          */
   char     messageFile[20];    /* Qualified message file name */
};

typedef struct SSLErrorMsgStr SSLErrorMsg; /* SSLErrorMsg        @A2A*/

/*********************************************************************/
/* Function prototypes                                               */
/*********************************************************************/

QBFC_EXTERN SSLHandle* SSL_Create(int, int);
QBFC_EXTERN int        SSL_Destroy(SSLHandle*);
QBFC_EXTERN int        SSL_Handshake(SSLHandle*, int);
QBFC_EXTERN int        QlgSSL_Init(QlgSSLInit*);              /* @A1A*/
QBFC_EXTERN int        SSL_Init(SSLInit*);
QBFC_EXTERN int        SSL_Read(SSLHandle*, void*, int);
QBFC_EXTERN int        SSL_Write(SSLHandle*, void*, int);
QBFC_EXTERN int        SSL_Init_Application(SSLInitApp*);
QBFC_EXTERN char *     SSL_Strerror(int, SSLErrorMsg*);       /* @A2A*/
QBFC_EXTERN void       SSL_Perror(int, const char *);          /* @A2A*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /* #ifndef __qsossl_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
