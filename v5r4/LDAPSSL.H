/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:  ldapssl.h                                     */
/*                                                                   */
/*  Descriptive Name:  LDAP SSL header file                          */
/*                                                                   */
/*  Description:  Return code defines for SSL processing.            */
/*                                                                   */
/* 5769-SS1,5722-SS1 (C) COPYRIGHT IBM CORP. 1997,2001               */
/* ALL RIGHTS RESERVED.                                              */
/* US GOVERNMENT USERS RESTRICTED RIGHTS -                           */
/* USE, DUPLICATION OR DISCLOSURE RESTRICTED                         */
/* BY GSA ADP SCHEDULE CONTRACT WITH IBM CORP.                       */
/*                                                                   */
/* LICENSED MATERIALS-PROPERTY OF IBM                                */
/*                                                                   */
/* Copyright (c) 1990 Regents of the University of Michigan.         */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms are permitted   */
/* provided that this notice is preserved and that due credit is     */
/* given to the University of Michigan at Ann Arbor. The name of the */
/* University may not be used to endorse or promote products         */
/* derived from this software without specific prior written         */
/* permission.  This software is provided ``as is'' without express  */
/* or implied warranty.                                              */
/*                                                                   */
/*  Header Files Included : None                                     */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List :                                                       */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D9543.1      4D30  091797  ROCH      New Include            */
/*  $A1=              4D40  081098  CAR       dcm support            */
/*                    4D50  100199  WWD       defined -1009          */
/*  $A2= D98212.2    v5r1m0 010300 gchaney:   Teraspace stage 2      */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _LDAPSSL_H
#define _LDAPSSL_H

#if (__OS400_TGTVRM__>=510)                                  /* @A2A*/
    #pragma datamodel(P128)                                  /* @A2A*/
#endif                                                       /* @A2A*/

/* ldap_ssl_start() and ldap_app_ssl_start_np() return values    @A1A*/

#define LDAP_SSL_INITIALIZE_OK                          0

#define LDAP_SSL_ERROR_NO_CIPHERS                       -1
#define LDAP_SSL_ERROR_NO_CERTIFICATE                   -2
#define LDAP_SSL_ERROR_BAD_CERTIFICATE                  -4
#define LDAP_SSL_ERROR_UNSUPPORTED_CERTIFICATE_TYPE     -6
#define LDAP_SSL_ERROR_IO                               -10
#define LDAP_SSL_ERROR_BAD_MESSAGE                      -11
#define LDAP_SSL_ERROR_BAD_MAC                          -12
#define LDAP_SSL_ERROR_UNSUPPORTED                      -13
#define LDAP_SSL_ERROR_BAD_CERT_SIG                     -14
#define LDAP_SSL_ERROR_BAD_CERT                         -15
#define LDAP_SSL_ERROR_BAD_PEER                         -16
#define LDAP_SSL_ERROR_PERMISSION_DENIED                -17
#define LDAP_SSL_ERROR_SELF_SIGNED                      -18
#define LDAP_SSL_ERROR_BAD_MALLOC                       -20
#define LDAP_SSL_ERROR_BAD_STATE                        -21
#define LDAP_SSL_ERROR_SOCKET_CLOSED                    -22
#define LDAP_SSL_ERROR_LDAP_SSL_INITIALIZATION_FAILED   -23
#define LDAP_SSL_ERROR_HANDLE_CREATION_FAILED           -24
#define LDAP_SSL_ERROR_BAD_DATE                         -25
#define LDAP_SSL_ERROR_BAD_KEY_LEN_FOR_EXPORT           -26
#define LDAP_SSL_ERROR_NO_PRIVATE_KEY                   -27
#define LDAP_SSL_BAD_PARAMETER                          -28
#define LDAP_SSL_ERROR_INTERNAL                         -29
#define LDAP_SSL_ERROR_WOULD_BLOCK                      -30

#define LDAP_SSL_SOC_BAD_V2_CIPHER                      -40
#define LDAP_SSL_SOC_BAD_V3_CIPHER                      -41
#define LDAP_SSL_SOC_BAD_SEC_TYPE                       -42
#define LDAP_SSL_SOC_NO_READ_FUNCTION                   -43
#define LDAP_SSL_SOC_NO_WRITE_FUNCTION                  -44

#define LDAP_SSL_ERROR_NOT_SERVER                       -50
#define LDAP_SSL_ERROR_NOT_SSLV3                        -51
#define LDAP_SSL_ERROR_NOT_SSLV3_CLIENT                 -52

#define LDAP_SSL_ERROR_UNKNOWN_ERROR                    -99
#define LDAP_SSL_ERROR_BAD_BUFFER_SIZE                  -100
#define LDAP_SSL_ERROR_BAD_SSL_HANDLE                   -101
#define LDAP_SSL_SOC_BAD_SEC_TYPE_COMBINATION           -102
#define LDAP_SSL_ERROR_TIMEOUT                          -102

#define LDAP_SSL_KEYFILE_IO_ERROR                       -501
#define LDAP_SSL_KEYFILE_OPEN_FAILED                    -502
#define LDAP_SSL_KEYFILE_BAD_FORMAT                     -503
#define LDAP_SSL_KEYFILE_BAD_PASSWORD                   -504
#define LDAP_SSL_KEYFILE_BAD_MALLOC                     -505
#define LDAP_SSL_KEYFILE_NOTHING_TO_WRITE               -506
#define LDAP_SSL_KEYFILE_WRITE_FAILED                   -507
#define LDAP_SSL_KEYFILE_NOT_FOUND                      -508
#define LDAP_SSL_KEYFILE_BAD_DNAME                      -509
#define LDAP_SSL_KEYFILE_BAD_KEY                        -510
#define LDAP_SSL_KEYFILE_KEY_EXISTS                     -511
#define LDAP_SSL_KEYFILE_BAD_LABEL                      -512
#define LDAP_SSL_KEYFILE_DUPLICATE_NAME                 -513
#define LDAP_SSL_KEYFILE_DUPLICATE_KEY                  -514
#define LDAP_SSL_KEYFILE_DUPLICATE_LABEL                -515
#define LDAP_SSL_BAD_FORMAT_OR_INVALID_PW               -516
#define LDAP_SSL_STASH_PASSWORD_FILE_OPEN_FAILED        -517
#define LDAP_SSL_STASH_PASSWORD_FILE_NOT_FOUND          -518
#define LDAP_SSL_WARNING_INVALID_SERVER_CERT            -598
#define LDAP_SSL_WARNING_INVALID_SERVER_PRIV_KEY        -599
#define LDAP_SSL_ERR_INIT_PARM_NOT_VALID                -600
#define LDAP_SSL_INIT_SEC_TYPE_NOT_VALID                -602
#define LDAP_SSL_INIT_V2_TIMEOUT_NOT_VALID              -603
#define LDAP_SSL_INIT_V3_TIMEOUT_NOT_VALID              -604
#define LDAP_SSL_KEYFILE_CERT_EXPIRED                   -605

#define LDAP_SSL_ERROR_CRYPTO_NOT_INSTALLED             -1000
#define LDAP_SSL_ERROR_NO_ACCESS                        -1001
#define LDAP_SSL_ERROR_PASSWORD_EXPIRED                 -1002
#define LDAP_SSL_ERROR_NOT_TRUSTED_ROOT                 -1003
#define LDAP_SSL_ERROR_NO_KEYRING                       -1004
#define LDAP_SSL_ERROR_BAD_CIPHER_SUITE                 -1005
#define LDAP_SSL_ERROR_NO_INITIALIZE                    -1006
#define LDAP_SSL_ERROR_NOT_ENABLED                      -1007
#define LDAP_SSL_ERROR_CLOSED                           -1008
#define LDAP_SSL_ERROR_NOT_REGISTERED                   -1009


#if (__OS400_TGTVRM__>=510)                               /* @A2A*/
    #pragma datamodel(pop)                                /* @A2A*/
#endif                                                    /* @A2A*/

#endif /* _LDAPSSL_H */
