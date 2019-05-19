/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*     5761-SS1                                                      */
/*     5770-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1999, 2009                                */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  krb5.h                                         */
/*                                                                   */
/* Descriptive Name: Kerberos API definition                         */
/*                                                                   */
/*                                                                   */
/* 5722-SS1                                                          */
/* (C) Copyright IBM Corp. 1999, 2002                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/*  Licensed Materials - Property of IBM                             */
/*                                                                   */
/* Copyright 1989,1995 by the Massachusetts Institute of Technology. */
/* All Rights Reserved.                                              */
/*                                                                   */
/* Export of this software from the United States of America may     */
/*   require a specific license from the United States Government.   */
/*   It is the responsibility of any person or organization          */
/*   contemplating export to obtain such a license before exporting. */
/*                                                                   */
/* WITHIN THAT CONSTRAINT, permission to use, copy, modify, and      */
/* distribute this software and its documentation for any purpose    */
/* and without fee is hereby granted, provided that the above        */
/* copyright notice appear in all copies and that both that copyright*/
/* notice and this permission notice appear in supporting            */
/* documentation, and that the name of M.I.T. not be used in         */
/* advertising or publicity pertaining to distribution of the        */
/* software without specific, written prior permission.              */
/* M.I.T. makes no representations about the suitability of          */
/* this software for any purpose.  It is provided "as is" without    */
/* express or implied warranty.                                      */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the Kerberos API.             */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          stdlib.h                                                 */
/*          sys/types.h                                              */
/*          stdarg.h                                                 */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          SKRB_API                                                 */
/*          SKRB_CALL                                                */
/*          SIZEOF_INT                                               */
/*          SIZEOF_LONG                                              */
/*          SIZEOF_SHORT                                             */
/*          VALID_INT_BITS                                           */
/*          VALID_UINT_BITS                                          */
/*          KRB5_INT32_MAX                                           */
/*          KRB5_INT32_MIN                                           */
/*          KRB5_INT16_MAX                                           */
/*          KRB5_INT16_MIN                                           */
/*          krb5_const                                               */
/*          KRB5_PROTOTYPE                                           */
/*          KRB5_STDARG_P                                            */
/*          KRB5_NPROTOTYPE                                          */
/*          FALSE                                                    */
/*          TRUE                                                     */
/*          KRB5_NT_UNKNOWN                                          */
/*          KRB5_NT_PRINCIPAL                                        */
/*          KRB5_NT_SRV_INST                                         */
/*          KRB5_NT_SRV_HST                                          */
/*          KRB5_NT_SRV_XHST                                         */
/*          KRB5_NT_UID                                              */
/*          krb5_princ_realm                                         */
/*          krb5_princ_set_realm                                     */
/*          krb5_princ_set_realm_length                              */
/*          krb5_princ_set_realm_data                                */
/*          krb5_princ_size                                          */
/*          krb5_princ_name                                          */
/*          krb5_princ_component                                     */
/*          ADDRTYPE_UNSPECIFIED                                     */
/*          ADDRTYPE_INET                                            */
/*          ADDRTYPE_CHAOS                                           */
/*          ADDRTYPE_XNS                                             */
/*          ADDRTYPE_ISO                                             */
/*          ADDRTYPE_DDP                                             */
/*          ADDRTYPE_ADDRPORT                                        */
/*          ADDRTYPE_IPPORT                                          */
/*          ADDRTYPE_USERID                                          */
/*          ADDRTYPE_IS_LOCAL                                        */
/*          KRB5_AUTH_CONTEXT_GENERATE_LOCAL_ADDR                    */
/*          KRB5_AUTH_CONTEXT_GENERATE_REMOTE_ADDR                   */
/*          KRB5_AUTH_CONTEXT_GENERATE_LOCAL_FULL_ADDR               */
/*          KRB5_AUTH-CONTEXT_GENERATE_REMOTE_FULL_ADDR              */
/*          ENCTYPE_NULL                                             */
/*          ENCTYPE_DES_CBC_CRC                                      */
/*          ENCTYPE_DES_CBC_MD4                                      */
/*          ENCTYPE_DES_CBC_MD5                                      */
/*          ENCTYPE_DES_CBC_RAW                                      */
/*          ENCTYPE_AES128_CTS_HMAC_SHA1_96                          */
/*          ENCTYPE_AES256_CTS_HMAC_SHA1_96                          */
/*          ENCTYPE_UNKNOWN                                          */
/*          CKSUMTYPE_NULL                                           */
/*          CKSUMTYPE_CRC32                                          */
/*          CKSUMTYPE_RSA_MD4                                        */
/*          CKSUMTYPE_RSA_MD4_DES                                    */
/*          CKSUMTYPE_DESCBC                                         */
/*          CKSUMTYPE_RSA_MD5                                        */
/*          CKSUMTYPE_RSA_MD5_DES                                    */
/*          CKSUMTYPE_HMAC_SHA1_96_AES128                            */
/*          CKSUMTYPE_HMAC_SHA1_96_AES256                            */
/*          krb5_roundup                                             */
/*          KDC_OPT_RESERVED                                         */
/*          KDC_OPT_FORWARDABLE                                      */
/*          KDC_OPT_FORWARDED                                        */
/*          KDC_OPT_PROXIABLE                                        */
/*          KDC_OPT_PROXY                                            */
/*          KDC_OPT_ALLOW_POSTDATE                                   */
/*          KDC_OPT_POSTDATED                                        */
/*          KDC_OPT_RENEWABLE                                        */
/*          KDC_OPT_DISABLE_TRANSITED_CHECK                          */
/*          KDC_OPT_RENEWABLE_OK                                     */
/*          KDC_OPT_ENC_TKT_IN_SKEY                                  */
/*          KDC_OPT_RENEW                                            */
/*          KDC_OPT_VALIDATE                                         */
/*          KDC_TKT_COMMON_MASK                                      */
/*          AP_OPTS_RESERVED                                         */
/*          AP_OPTS_USE_SESSION_KEY                                  */
/*          AP_OPTS_MUTUAL_REQUIRED                                  */
/*          AP_OPTS_USE_SUBKEY                                       */
/*          AP_OPTS_WIRE_MASK                                        */
/*          AD_TYPE_RESERVED                                         */
/*          AD_TYPE_EXTERNAL                                         */
/*          AD_TYPE_REGISTERED                                       */
/*          AD_TYPE_FIELD_TYPE_MASK                                  */
/*          AD_TYPE_INTERNAL_MASK                                    */
/*          TKT_FLG_RESERVED                                         */
/*          TKT_FLG_FORWARDABLE                                      */
/*          TKT_FLG_FORWARDED                                        */
/*          TKT_FLG_PROXIABLE                                        */
/*          TKT_FLG_PROXY                                            */
/*          TKT_FLG_MAY_POSTDATE                                     */
/*          TKT_FLG_POSTDATED                                        */
/*          TKT_FLG_INVALID                                          */
/*          TKT_FLG_RENEWABLE                                        */
/*          TKT_FLG_INITIAL                                          */
/*          TKT_FLG_PRE_AUTH                                         */
/*          TKT_FLG_HW_AUTH                                          */
/*          TKT_FLG_TRANSITED_PATH_CHECKED                           */
/*          TKT_FLG_OK_AS_DELEGATE                                   */
/*          TKT_FLG_ANONYMOUS                                        */
/*          LR_TYPE_THIS_SERVER_ONLY                                 */
/*          LR_TYPE_INTREPRETATION_MASK                              */
/*          MSEC_DIRBIT                                              */
/*          MSEC_VAL_MASK                                            */
/*          KRB5_PVNO                                                */
/*          KRB5_AS_REQ                                              */
/*          KRB5_AS_REP                                              */
/*          KRB5_TGS_REQ                                             */
/*          KRB5_TGS_REP                                             */
/*          KRB5_AP_REQ                                              */
/*          KRB5_AP_REP                                              */
/*          KRB5_SAFE                                                */
/*          KRB5_PRIV                                                */
/*          KRB5_CRED                                                */
/*          KRB5_ERROR                                               */
/*          KRB5_LRQ_NONE                                            */
/*          KRB5_LRQ_ALL_LAST_TGT                                    */
/*          KRB5_LRQ_ONE_LAST_TGT                                    */
/*          KRB5_LRQ_ALL_LAST_INITIAL                                */
/*          KRB5_LRQ_ONE_LAST_INITIAL                                */
/*          KRB5_LRQ_ALL_LAST_TGT_ISSUED                             */
/*          KRB5_LRQ_ONE_LAST_TGT_ISSUED                             */
/*          KRB5_LRQ_ALL_LAST_RENEWAL                                */
/*          KRB5_LRQ_ONE_LAST_RENEWAL                                */
/*          KRB5_LRQ_ALL_LAST_REQ                                    */
/*          KRB5_LRQ_ONE_LAST_REQ                                    */
/*          KRB5_PADATA_NONE                                         */
/*          KRB5_PADATA_AP_REQ                                       */
/*          KRB5_PADATA_TGS_REQ                                      */
/*          KRB5_PADATA_ENC_TIMESTAMP                                */
/*          KRB5_PADATA_PW_SALT                                      */
/*          KRB5_PADATA_ENC_UNIX_TIME                                */
/*          KRB5_PADATA_ENC_SANDIA_SECURID                           */
/*          KRB5_PADATA_SESAME                                       */
/*          KRB5_PADATA_OSF_DCE                                      */
/*          KRB5_PADATA_CYBERSAFE_SECUREID                           */
/*          KRB5_PADATA_AFS3_SALT                                    */
/*          KRB5_PADATA_ETYPE_INFO                                   */
/*          KRB5_PADATA_SAM_CHALLENGE                                */
/*          KRB5_PADATA_SAM_RESPONSE                                 */
/*          KRB5_PADATA_ETYPE_INFO2                                  */
/*          KRB5_DOMAIN_X500_COMPRESS                                */
/*          KRB5_ALTAUTH_ATT_CHALLENGE_RESPONSE                      */
/*          KRB5_AUTHDATA_OSF_DCE                                    */
/*          KRB5_AUTHDATA_SESAME                                     */
/*          KRB5_REALM_BRANCH_CHAR                                   */
/*          KRB5_TGS_NAME                                            */
/*          KRB5_TGS_NAME_SIZE                                       */
/*          KRB5_AUTH_CONTEXT_DO_TIME                                */
/*          KRB5_AUTH_CONTEXT_RET_TIME                               */
/*          KRB5_AUTH_CONTEXT_DO_SEQUENCE                            */
/*          KRB5_AUTH_CONTEXT_RET_SEQUENCE                           */
/*          KRB5_TC_MATCH_TIMES                                      */
/*          KRB5_TC_MATCH_IS_KEY                                     */
/*          KRB5_TC_MATCH_FLAGS                                      */
/*          KRB5_TC_MATCH_TIMES_EXACT                                */
/*          KRB5_TC_MATCH_FLAGS_EXACT                                */
/*          KRB5_TC_MATCH_AUTHDATA                                   */
/*          KRB5_TC_MATCH_SRV_NAMEONLY                               */
/*          KRB5_TC_MATCH_2ND_TKT                                    */
/*          KRB5_TC_MATCH_KTYPE                                      */
/*          KRB5_TC_SUPPORTED_KTYPES                                 */
/*          KRB5_TC_OPENCLOSE                                        */
/*          MAX_CACHE_NAME_LENGTH                                    */
/*          krb5_rc_resolve_full                                     */
/*          MAX_KEYTAB_NAME_LENGTH                                   */
/*          KRB5_GC_USER_USER                                        */
/*          KRB5_GC_CACHED                                           */
/*          KDC_ERR_NONE                                             */
/*          KDC_ERR_NAME_EXP                                         */
/*          KDC_ERR_SERVICE_EXP                                      */
/*          KDC_ERR_BAD_PVNO                                         */
/*          KDC_ERR_C_OLD_MAST_KVNO                                  */
/*          KDC_ERR_S_OLD_MAST_KVNO                                  */
/*          KDC_ERR_C_PRINCIPAL_UNKNOWN                              */
/*          KDC_ERR_S_PRINCIPAL_UNKNOWN                              */
/*          KDC_ERR_PRINCIPAL_NOT_UNIQUE                             */
/*          KDC_ERR_NULL_KEY                                         */
/*          KDC_ERR_CANNOT_POSTDATE                                  */
/*          KDC_ERR_NEVER_VALID                                      */
/*          KDC_ERR_POLICY                                           */
/*          KDC_ERR_BADOPTION                                        */
/*          KDC_ERR_ENCTYPE_NOSUPP                                   */
/*          KDC_ERR_SUMTYPE_NOSUPP                                   */
/*          KDC_ERR_PADATA_TYPE_NOSUPP                               */
/*          KDC_ERR_TRTYPE_NOSUPP                                    */
/*          KDC_ERR_CLIENT_REVOKED                                   */
/*          KDC_ERR_SERVICE_REVOKED                                  */
/*          KDC_ERR_TGT_REVOKED                                      */
/*          KDC_ERR_CLIENT_NOTYET                                    */
/*          KDC_ERR_SERVICE_NOTYET                                   */
/*          KDC_ERR_KEY_EXP                                          */
/*          KDC_ERR_PREAUTH_FAILED                                   */
/*          KDC_ERR_PREAUTH_REQUIRED                                 */
/*          KDC_ERR_SERVER_NOMATCH                                   */
/*          KDC_ERR_MUST_USE_USER2USER                               */
/*          KDC_ERR_PATH_NOT_ACCEPTED                                */
/*          KDC_ERR_SVC_UNAVAILABLE                                  */
/*          KRB_AP_ERR_BAD_INTEGRITY                                 */
/*          KRB_AP_ERR_TKT_EXPIRED                                   */
/*          KRB_AP_ERR_TKT_NYV                                       */
/*          KRB_AP_ERR_REPEAT                                        */
/*          KRB_AP_ERR_NOT_US                                        */
/*          KRB_AP_ERR_BADMATCH                                      */
/*          KRB_AP_ERR_SKEW                                          */
/*          KRB_AP_ERR_BADADDR                                       */
/*          KRB_AP_ERR_BADVERSION                                    */
/*          KRB_AP_ERR_MSG_TYPE                                      */
/*          KRB_AP_ERR_MODIFIED                                      */
/*          KRB_AP_ERR_BADORDER                                      */
/*          KRB_AP_ERR_BADKEYVER                                     */
/*          KRB_AP_ERR_NOKEY                                         */
/*          KRB_AP_ERR_MUT_FAIL                                      */
/*          KRB_AP_ERR_BADDIRECTION                                  */
/*          KRB_AP_ERR_METHOD                                        */
/*          KRB_AP_ERR_BADSEQ                                        */
/*          KRB_AP_ERR_INAPP_CKSUM                                   */
/*          KRB_AP_ERR_PATH_NOT_ACCEPTED                             */
/*          KRB_AP_ERR_ERR_RESPONSE-TOO_BIG                          */
/*          KRB_ERR_GENERIC                                          */
/*          KRB_ERR_FIELD_TOOLONG                                    */
/*          KRB5KDC_ERR_BASE                                         */
/*          KRB5KDC_ERR_NAME_EXP                                     */
/*          KRB5KDC_ERR_SERVICE_EXP                                  */
/*          KRB5KDC_ERR_BAD_PVNO                                     */
/*          KRB5KDC_ERR_C_OLD_MAST_KVNO                              */
/*          KRB5KDC_ERR_S_OLD_MAST_KVNO                              */
/*          KRB5KDC_ERR_C_PRINCIPAL_UNKNOWN                          */
/*          KRB5KDC_ERR_S_PRINCIPAL_UNKNOWN                          */
/*          KRB5KDC_ERR_PRINCIPAL_NOT_UNIQUE                         */
/*          KRB5KDC_ERR_NULL_KEY                                     */
/*          KRB5KDC_ERR_CANNOT_POSTDATE                              */
/*          KRB5KDC_ERR_NEVER_VALID                                  */
/*          KRB5KDC_ERR_POLICY                                       */
/*          KRB5KDC_ERR_BADOPTION                                    */
/*          KRB5KDC_ERR_ETYPE_NOSUPP                                 */
/*          KRB5KDC_ERR_SUMTYPE_NOSUPP                               */
/*          KRB5KDC_ERR_PADATA_TYPE_NOSUPP                           */
/*          KRB5KDC_ERR_TRTYPE_NOSUPP                                */
/*          KRB5KDC_ERR_CLIENT_REVOKED                               */
/*          KRB5KDC_ERR_SERVICE_REVOKED                              */
/*          KRB5KDC_ERR_TGT_REVOKED                                  */
/*          KRB5KDC_ERR_CLIENT_NOTYET                                */
/*          KRB5KDC_ERR_SERVICE_NOTYET                               */
/*          KRB5KDC_ERR_KEY_EXP                                      */
/*          KRB5KDC_ERR_PREAUTH_FAILED                               */
/*          KRB5KDC_ERR_PREAUTH_REQUIRED                             */
/*          KRB5KDC_ERR_SERVER_NOMATCH                               */
/*          KRB5KDC_ERR_MUST_USE_USER2USER                           */
/*          KRB5KDC_ERR_PATH_NOT_ACCEPTABLE                          */
/*          KRB5KDC_ERR_SVC_UNAVAILABLE                              */
/*          KRB5KRB_AP_ERR_BAD_INTEGRITY                             */
/*          KRB5KRB_AP_ERR_TKT_EXPIRED                               */
/*          KRB5KRB_AP_ERR_TKT_NYV                                   */
/*          KRB5KRB_AP_ERR_REPEAT                                    */
/*          KRB5KRB_AP_ERR_NOT_US                                    */
/*          KRB5KRB_AP_ERR_BADMATCH                                  */
/*          KRB5KRB_AP_ERR_SKEW                                      */
/*          KRB5KRB_AP_ERR_BADDADDR                                  */
/*          KRB5KRB_AP_ERR_BADVERSION                                */
/*          KRB5KRB_AP_ERR_MSG_TYPE                                  */
/*          KRB5KRB_AP_ERR_MODIFIED                                  */
/*          KRB5KRB_AP_ERR_BADORDER                                  */
/*          KRB5KRB_AP_ERR_ILL_CR_TKT                                */
/*          KRB5KRB_AP_ERR_BADKEYVER                                 */
/*          KRB5KRB_AP_ERR_NOKEY                                     */
/*          KRB5KRB_AP_ERR_MUT_FAIL                                  */
/*          KRB5KRB_AP_ERR_BADDIRECTION                              */
/*          KRB5KRB_AP_ERR_METHOD                                    */
/*          KRB5KRB_AP_ERR_BADSEQ                                    */
/*          KRB5KRB_AP_ERR_INAPP_CKSUM                               */
/*          KRB5KRB_AP_PATH_NOT_ACCEPTED                             */
/*          KRB5KRB_AP_ERR_RESPONSE_TOO_BIG                          */
/*          KRB5KRB_AP_ERR_GENERIC                                   */
/*          KRB5KRB_AP_ERR_FIELD_TOOLONG                             */
/*          KRB5_LIBOS_BADLOCKFLAG                                   */
/*          KRB5_LIBOS_CANTREADPWD                                   */
/*          KRB5_LIBOS_BADPWDMATCH                                   */
/*          KRB5_LIBOS_PWDINTR                                       */
/*          KRB5_PARSE_ILLCHAR                                       */
/*          KRB5_PARSE_MALFORMED                                     */
/*          KRB5_CONFIG_CANTOPEN                                     */
/*          KRB5_CONFIG_BADFORMAT                                    */
/*          KRB5_CONFIG_NOTENUFSPACE                                 */
/*          KRB5_BADMSGTYPE                                          */
/*          KRB5_CC_BADNAME                                          */
/*          KRB5_CC_UNKNOWN_TYPE                                     */
/*          KRB5_CC_NOTFOUND                                         */
/*          KRB5_CC_END                                              */
/*          KRB5_NO_TKT_SUPPLIED                                     */
/*          KRB5KRB_AP_WRONG_PRINC                                   */
/*          KRB5KRB_AP_ERR_TKT_INVALID                               */
/*          KRB5_PRINC_NOMATCH                                       */
/*          KRB5_KDCREP_MODIFIED                                     */
/*          KRB5_KDCREP_SKEW                                         */
/*          KRB5_IN_TKT_REALM_MISMATCH                               */
/*          KRB5_PROG_ETYPE_NOSUPP                                   */
/*          KRB5_PROG_KEYTYPE_NOSUPP                                 */
/*          KRB5_WRONG_ETYPE                                         */
/*          KRB5_PROG_SUMTYPE_NOSUPP                                 */
/*          KRB5_REALM_UNKNOWN                                       */
/*          KRB5_SERVICE_UNKNOWN                                     */
/*          KRB5_KDC_UNREACH                                         */
/*          KRB5_NO_LOCALNAME                                        */
/*          KRB5_MUTUAL_FAILED                                       */
/*          KRB5_RC_TYPE_EXISTS                                      */
/*          KRB5_RC_MALLOC                                           */
/*          KRB5_RC_TYPE_NOTFOUND                                    */
/*          KRB5_RC_UNKNOWN                                          */
/*          KRB5_RC_REPLAY                                           */
/*          KRB5_RC_IO                                               */
/*          KRB5_RC_IO_EOF                                           */
/*          KRB5_RC_IO_MALLOC                                        */
/*          KRB5_RC_IO_PERM                                          */
/*          KRB5_RC_IO_IO                                            */
/*          KRB5_RC_IO_UNKNOWN                                       */
/*          KRB5_RC_IO_SPACE                                         */
/*          KRB5_CRYPTO_INTERNAL                                     */
/*          KRB5_KT_BADNAME                                          */
/*          KRB5_KT_UNKNOWN_TYPE                                     */
/*          KRB5_KT_NOTFOUND                                         */
/*          KRB5_KT_END                                              */
/*          KRB5_KT_NOWRITE                                          */
/*          KRB5_KT_IOERR                                            */
/*          KRB5_NO_TKT_IN_RLM                                       */
/*          KRB5DES_BAD_KEYPAR                                       */
/*          KRB5DES_WEAK_KEY                                         */
/*          KRB5_BAD_ENCTYPE                                         */
/*          KRB5_BAD_KEYSIZE                                         */
/*          KRB5_BAD_MSIZE                                           */
/*          KRB5_CC_TYPE_EXISTS                                      */
/*          KRB5_KT_TYPE_EXISTS                                      */
/*          KRB5_CC_IO                                               */
/*          KRB5_FCC_PERM                                            */
/*          KRB5_FCC_NOFILE                                          */
/*          KRB5_FCC_INTERNAL                                        */
/*          KRB5_CC_WRITE                                            */
/*          KRB5_CC_NOMEM                                            */
/*          KRB5_CC_FORMAT                                           */
/*          KRB5_INVALID_FLAGS                                       */
/*          KRB5_NO_2ND_TKT                                          */
/*          KRB5_NOCREDS_SUPPLIED                                    */
/*          KRB5_PREAUTH_BAD_TYPE                                    */
/*          KRB5_REAUTH_FAILED                                       */
/*          KRB5_RCACHE_BADVNO                                       */
/*          KRB5_CCACHE_BADVNO                                       */
/*          KRB5_KEYTAB_BADVNO                                       */
/*          KRB5_PROG_ATYPE_NOSUPP                                   */
/*          KRB5_RC_REQUIRED                                         */
/*          KRB5_ERR_BAD_HOSTNAME                                    */
/*          KRB5_ERR_HOST_REALM_UNKNOWN                              */
/*          KRB5_SNAME_UNSUPP_NAMETYPE                               */
/*          KRB5KRB_AP_ERR_V4_REPLY                                  */
/*          KRB5_REALM_CANT_RESOLVE                                  */
/*          KRB5_TKT_NOT_FORWARDABLE                                 */
/*          KRB5_FWD_BAD_PRINCIPAL                                   */
/*          KRB5_GET_IN_TKT_LOOP                                     */
/*          KRB5_CONFIG_NODEFREALM                                   */
/*          KRB5_KT_NAME_TOOLONG                                     */
/*          KRB5KRB_ERR_LOAD_CODEPAGE                                */
/*          KRB5KRB_ERR_CODEPAGE_CONVERT                             */
/*          KRB5_NOMEM                                               */
/*          KRB5_TIMEOFDAY_UNKNOWN                                   */
/*          KRB5_KT_PERM                                             */
/*          KRB5_KT_INTERNAL                                         */
/*          KRB5_SOCKET_FAIL                                         */
/*          KRB5_SOCKET_IOCTL_FAIL                                   */
/*          KRB5_BAD_MAGIC                                           */
/*          KRB5_INVALID_PARAM                                       */
/*          KRB5_OP_NOT_SUPPORTED                                    */
/*          KRB5_RC_NOFILE                                           */
/*          KRB5_CC_NO_ACCESS                                        */
/*          KRB5_RC_NO_ACCESS                                        */
/*          KRB5_KT_NO_ACCESS                                        */
/*          KRB5_NO_CONF                                             */
/*          KRB5_SVC_MSG_NOT_FOUND                                   */
/*          KRB5_SERVER_UNREACH                                      */
/*          KRB5_KT_BAD_KVNO                                         */
/*          KRB5_CRYPTO_NOT_INSTALLED                                */
/*          KRB5_MECHANISM_FAILURE                                   */
/*          KRB5_PROF_INTERNAL                                       */
/*          ASN1_BAD_TIMEFORMAT                                      */
/*          ASN1_MISSING_FIELD                                       */
/*          ASN1_MISPLACED_FIELD                                     */
/*          ASN1_TYPE_MISMATCH                                       */
/*          ASN1_OVERFLOW                                            */
/*          ASN1_OVERRUN                                             */
/*          ASN1_BAD_ID                                              */
/*          ASN1_BAD_LENGTH                                          */
/*          ASN1_BAD_FORMAT                                          */
/*          ASN1_PARSE_ERROR                                         */
/*          PROF_NO_SECTION                                          */
/*          PROF_NO_RELATION                                         */
/*          PROF_ADD_NOT_SECTION                                     */
/*          PROF_SECTION_WITH_VALUE                                  */
/*          PROF_SECTION_NOTOP                                       */
/*          PROF_SECTION_SYNTAX                                      */
/*          PROF_RELATION_SYNTAX                                     */
/*          PROF_EXTRA_CBRACE                                        */
/*          PROF_MISSING_OBRACE                                      */
/*          PROF_BAD_NAMESET                                         */
/*          PROF_NO_PROFILE                                          */
/*          G_BAD_SERVICE_NAME                                       */
/*          G_BAD_STRING_UID                                         */
/*          G_NOUSER                                                 */
/*          G_VALIDATE_FAILED                                        */
/*          G_BUFFER_ALLOC                                           */
/*          G_BAD_MSG_CTX                                            */
/*          G_WRONG_SIZE                                             */
/*          G_BAD_USAGE                                              */
/*          G_UNKNOWN_QOP                                            */
/*          G_NO_HOSTNAME                                            */
/*          G_WRONG_MECH                                             */
/*          G_BAD_TOK_HEADER                                         */
/*          G_BAD_DIRECTION                                          */
/*          G_MESSAGE_OUT_OF_ORDER                                   */
/*          G_MESSAGE_OMITTED                                        */
/*          G_MESSAGE_ALREADY_SEEN                                   */
/*          G_MESSAGE_LATE                                           */
/*          G_BAD_SIGNATURE                                          */
/*          G_DUPLICATE_MECH                                         */
/*          G_CONTEXT_EXPIRED                                        */
/*          G_UNEXPECTED_TOKEN                                       */
/*          G_CRED_EXPIRED                                           */
/*          G_PARAM_REQUIRED                                         */
/*          G_BAD_INTERNAL_NAME                                      */
/*          G_NAME_REQUIRED                                          */
/*          G_MECH_REQUIRED                                          */
/*          G_UNSUPPORTED_NAME_TYPE                                  */
/*          G_BAD_NAME                                               */
/*          G_UNSUPPORTED_MECHANISM                                  */
/*          G_BAD_STATUS_TYPE                                        */
/*          G_BAD_STATUS_VALUE                                       */
/*          G_BAD_OID_ENCODING                                       */
/*          KG_CCACHE_NOMATCH                                        */
/*          KG_KEYTAB_NOMATCH                                        */
/*          KG_TGT_MISSING                                           */
/*          KG_CONTEXT_ESTABLISHED                                   */
/*          KG_BAD_SIGN_TYPE                                         */
/*          KG_BAD_LENGTH                                            */
/*          KG_CTX_INCOMPLETE                                        */
/*          KG_CONTEXT                                               */
/*          KG_CRED                                                  */
/*          KG_BAD_SEQ                                               */
/*          KG_BAD_PADDING                                           */
/*          KG_NO_CONF                                               */
/*          KG_BAD_SEAL_TYPE                                         */
/*          KG_SHORT_TOKEN                                           */
/*          KG_ETYPE_UNKNOWN                                         */
/*          KG_NULL_KEY                                              */
/*          KG_BINDINGS_MISMATCH                                     */
/*          KG_BAD_CKSUM                                             */
/*          KG_INVALID_CONTEXT_STATE                                 */
/*          KG_LOCKING_ERROR                                         */
/*          KG_MECH_CRED_NOT_AVAILABLE                               */
/*          KG_NO_MECHANISM_NAME                                     */
/*          KV5M_NONE                                                */
/*          KV5M_PRINCIPAL                                           */
/*          KV5M_DATA                                                */
/*          KV5M_KEYBLOCK                                            */
/*          KV5M_CHECKSUM                                            */
/*          KV5M_ENCRYPT_BLOCK                                       */
/*          KV5M_ENC_DATA                                            */
/*          KV5M_CRYPTOSYSTEM_ENTRY                                  */
/*          KV5M_CS_TABLE_ENTRY                                      */
/*          KV5M_CHECKSUM_ENTRY                                      */
/*          KV5M_AUTHDATA                                            */
/*          KV5M_TRANSITED                                           */
/*          KV5M_ENC_TKT_PART                                        */
/*          KV5M_TICKET                                              */
/*          KV5M_AUTHENTICATOR                                       */
/*          KV5M_TKT_AUTHENT                                         */
/*          KV5M_CREDS                                               */
/*          KV5M_LAST_REQ_ENTRY                                      */
/*          KV5M_PA_DATA                                             */
/*          KV5M_KDC_REQ                                             */
/*          KV5M_ENC_KDC_REP_PART                                    */
/*          KV5M_KDC_REP                                             */
/*          KV5M_ERROR                                               */
/*          KV5M_AP_REQ                                              */
/*          KV5M_AP_REP                                              */
/*          KV5M_AP_REP_ENC_PART                                     */
/*          KV5M_RESPONSE                                            */
/*          KV5M_SAFE                                                */
/*          KV5M_PRIV                                                */
/*          KV5M_PRIV_ENC_PART                                       */
/*          KV5M_CRED                                                */
/*          KV5M_CRED_INFO                                           */
/*          KV5M_CRED_ENC_PART                                       */
/*          KV5M_PWD_DATA                                            */
/*          KV5M_ADDRESS                                             */
/*          KV5M_KEYTAB_ENTRY                                        */
/*          KV5M_CONTEXT                                             */
/*          KV5M_OS_CONTEXT                                          */
/*          KV5M_ALT_METHOD                                          */
/*          KV5M_ETYPE_INFO_ENTRY                                    */
/*          KV5M_DB_CONTEXT                                          */
/*          KV5M_AUTH_CONTEXT                                        */
/*          KV5M_KEYTAB                                              */
/*          KV5M_RCACHE                                              */
/*          KV5M_CCACHE                                              */
/*          KV5M_PREAUTH_OPS                                         */
/*          KV5M_SAM_CHALLENGE                                       */
/*          KV5M_SAM_KEY                                             */
/*          KV5M_ENC_SAM_RESPONSE_ENC                                */
/*          KV5M_SAM_RESPONSE                                        */
/*          KV5M_PREDICTED_SAM_RESPONSE                              */
/*          KV5M_PASSWD_PHRASE_ELEMENT                               */
/*          KV5M_CC_OPS                                              */
/*          KV5M_KT_OPS                                              */
/*          KV5M_RC_OPS                                              */
/*          KV5M_REPLAY                                              */
/*          KV5M_FULLADDR                                            */
/*          KV5M_PROF_NODE                                           */
/*          KV5M_PROFILE                                             */
/*          KV5M_PROF_FILE                                           */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          krb5_data                                                */
/*          krb5_principal_data                                      */
/*          krb5_address                                             */
/*          krb5_fulladdr                                            */
/*          _krb5_context                                            */
/*          _krb5_auth_context                                       */
/*          krb5_keyblock                                            */
/*          krb5_checksum                                            */
/*          krb45_enc_data                                           */
/*          krb5_ticket_times                                        */
/*          krb5_authdata                                            */
/*          krb5_transited                                           */
/*          krb5_enc_tkt_part                                        */
/*          krb5_ticket                                              */
/*          krb5_authenticator                                       */
/*          krb5_tkt_authent                                         */
/*          krb5_creds                                               */
/*          krb5_cred_info                                           */
/*          krb5_cred_enc_part                                       */
/*          krb5_cred                                                */
/*          krb5_last_req_entry                                      */
/*          krb5_pa_data                                             */
/*          krb5_kdc_req                                             */
/*          krb5_enc_kdc_rep_part                                    */
/*          krb5_kdc_rep                                             */
/*          krb5_error                                               */
/*          krb5_ap_req                                              */
/*          krb5_ap_rep                                              */
/*          krb5_ap_rep_enc_part                                     */
/*          krb5_respose                                             */
/*          krb5_safe                                                */
/*          krb5_priv                                                */
/*          krb5_replay_data                                         */
/*          _krb5_ccache                                             */
/*          krb5_cc_ops                                              */
/*          krb5_rc_st                                               */
/*          krb5_donot_replay                                        */
/*          krb5_rc_ops                                              */
/*          _krb5_kt                                                 */
/*          krb5_keytab_entry                                        */
/*          krb5_kt_ops                                              */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          krb5_cc_default                                          */
/*          krb5_cc_default_name                                     */
/*          krb5_cc_generate_new                                     */
/*          krb5_cc_register                                         */
/*          krb5_cc_resolve                                          */
/*          krb5_cc_initialize                                       */
/*          krb5_cc_destroy                                          */
/*          krb5_cc_close                                            */
/*          krb5_cc_store_cred                                       */
/*          krb5_cc_retrieve_cred                                    */
/*          krb5_cc_get_principal                                    */
/*          krb5_cc_start_seq_get                                    */
/*          krb5_cc_next_cred                                        */
/*          krb5_cc_end_seq_get                                      */
/*          krb5_cc_remove_cred                                      */
/*          krb5_cc_set_flags                                        */
/*          krb5_cc_get_name                                         */
/*          krb5_cc_get_type                                         */
/*          krb5_auth_to_rep                                         */
/*          krb5_rc_default                                          */
/*          krb5_rc_default_name                                     */
/*          krb5_rc_free_entry_contents                              */
/*          krb5_rc_get_type                                         */
/*          krb5_rc_register_type                                    */
/*          krb5_rc_resolve                                          */
/*          krb5_rc_close                                            */
/*          krb5_rc_destroy                                          */
/*          krb5_rc_expunge                                          */
/*          krb5_rc_get_lifespan                                     */
/*          krb5_rc_get_name                                         */
/*          krb5_rc_initialize                                       */
/*          krb5_rc_recover                                          */
/*          krb5_rc_store                                            */
/*          krb5_kt_default                                          */
/*          krb5_kt_default_name                                     */
/*          krb5_kt_free_entry                                       */
/*          krb5_kt_read_service_key                                 */
/*          krb5_kt_register                                         */
/*          krb5_kt_resolve                                          */
/*          krb5_kt_add_entry                                        */
/*          krb5_kt_close                                            */
/*          krb5_kt_end_seq_get                                      */
/*          krb5_kt_get_entry                                        */
/*          krb5_kt_get_name                                         */
/*          krb5_kt_get_type                                         */
/*          krb5_kt_next_entry                                       */
/*          krb5_kt_remove_entry                                     */
/*          krb5_kt_start_seq_get                                    */
/*          krb5_address_compare                                     */
/*          krb5_address_search                                      */
/*          krb5_auth_con_free                                       */
/*          krb5_auth_con_genaddrs                                   */
/*          krb5_auth_con_getaddrs                                   */
/*          krb5_auth_con_getauthenticator                           */
/*          krb5_auth_con_getflags                                   */
/*          krb5_auth_con_getivector                                 */
/*          krb5_auth_con_getkey                                     */
/*          krb5_auth_con_getlocalseqnumber                          */
/*          krb5_auth_con_getlocalsubkey                             */
/*          krb5_auth_gon_getports                                   */
/*          krb5_auth_con_getrcache                                  */
/*          krb5_auth_con_getremoteseqnumber                         */
/*          krb5_auth_con_getremotesubkey                            */
/*          krb5_auth_con_init                                       */
/*          krb5_auth_con_initvector                                 */
/*          krb5_auth_con_set_req_cksumtype                          */
/*          krb5_auth_con_setaddrs                                   */
/*          krb5_auth_con_setflags                                   */
/*          krb5_auth_con_setivector                                 */
/*          krb5_auth_con_setports                                   */
/*          krb5_build_principal_ext                                 */
/*          krb5_build_principal_ext_va                              */
/*          krb5_build_principal                                     */
/*          krb5_build_principal_va                                  */
/*          krb5_copy_address                                        */
/*          krb5_copy_addresses                                      */
/*          krb5_copy_authdata                                       */
/*          krb5_copy_authenticator                                  */
/*          krb5_copy_checksum                                       */
/*          krb5_copy_creds                                          */
/*          krb5_copy_data                                           */
/*          krb5_copy_keyblock                                       */
/*          krb5_copy_keyblock_contents                              */
/*          krb5_copy_principal                                      */
/*          krb5_copy_ticket                                         */
/*          krb5_free_address                                        */
/*          krb5_free_addresses                                      */
/*          krb5_free_ap_rep_enc_part                                */
/*          krb5_free_authdata                                       */
/*          krb5_free_authenticator                                  */
/*          krb5_free_authenticator_contents                         */
/*          krb5_free_checksum                                       */
/*          krb5_free_context                                        */
/*          krb5_free_cred_contents                                  */
/*          krb5_free_creds                                          */
/*          krb5_free_data                                           */
/*          krb5_free_data_contents                                  */
/*          krb5_free_enc_tkt_part                                   */
/*          krb5_free_enctypes                                       */
/*          krb5_free_error                                          */
/*          krb5_free_host_realm                                     */
/*          krb5_free_kdc_rep                                        */
/*          krb5_free_keyblock                                       */
/*          krb5_free_keyblock_contents                              */
/*          krb5_free_krbhst                                         */
/*          krb5_free_principal                                      */
/*          krb5_free_string                                         */
/*          krb5_free_tgt_creds                                      */
/*          krb5_free_ticket                                         */
/*          krb5_free_tickets                                        */
/*          krb5_gen_replay_name                                     */
/*          krb5_generate_seq_number                                 */
/*          krb5_generate_subkey                                     */
/*          krb5_get_cred_from_kdc                                   */
/*          krb5_get-cred_from_kdc_renew                             */
/*          krb5_get_cred_from_kdc_validate                          */
/*          krb5_get_cred_via_tkt                                    */
/*          krb5_get_credentials                                     */
/*          krb5_get_credentials_renew                               */
/*          krb5_get_credentials_validate                            */
/*          krb5_get_default_in_tkt_ktypes                           */
/*          krb5_get_default_realm                                   */
/*          krb5_get_default_tgs_ktypes                              */
/*          krb5_get_host_realm                                      */
/*          krb5_get_in_tkt_with_keytab                              */
/*          krb5_get_in_tkt_with_password                            */
/*          krb5_get_in_tkt_with_skey                                */
/*          krb5_get_krbhst                                          */
/*          krb5_get_server_rcache                                   */
/*          krb5_init_context                                        */
/*          krb5_mk_error                                            */
/*          krb5_mk_priv                                             */
/*          krb5_mk_rep                                              */
/*          krb5_mk_req                                              */
/*          krb5_mk_req_extended                                     */
/*          krb5_mk_safe                                             */
/*          krb5_os_hostaddr                                         */
/*          krb5_os_localaddr                                        */
/*          krb5_parse_name                                          */
/*          krb5_principal_compare                                   */
/*          krb5_rd_error                                            */
/*          krb5_rd_priv                                             */
/*          krb5_rd_rep                                              */
/*          krb5_rd_req                                              */
/*          krb5_rd_safe                                             */
/*          krb5_realm_compare                                       */
/*          krb5_set_config_files                                    */
/*          krb5_set_default_realm                                   */
/*          krb5_set_default_tgs_ktypes                              */
/*          krb5_sname_to_principal                                  */
/*          krb5_timeofday                                           */
/*          krb5_us_timeofday                                        */
/*          krb5_unparse_name                                        */
/*          krb5_unparse_name_ext                                    */
/*          krb5_md5_crypto_compat_ctl                               */
/*          krb5_random_confounder                                   */
/*          krb5_svc_get_msg                                         */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D9802600     5D10  991020  ROCH     New include.           */
/*   $A0= D9870902     5D20  010807  ROCH     Add new API prototypes.*/
/*   $A0= D9121901     5D30  021231  ROCH     Add new API prototypes.*/
/*   $A1= RFW517766    V7R2  110218  ROCH     AES Support, other     */
/*   $A2= RFW565263    V7R2  110316  ROCH     Arcfour Support, other */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _KRB5_GENERAL_
#define _KRB5_GENERAL_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <sys/types.h>
#include <stdarg.h>


/*
 *  Define exported API definitions
 */
#ifndef SKRB_API
#define SKRB_API
#endif

#ifndef SKRB_CALL
#define SKRB_CALL
#endif

/*
 *  Machine architecture definitions
 */
#ifndef SIZEOF_INT
#define SIZEOF_INT   4
#define SIZEOF_LONG  4
#define SIZEOF_SHORT 2
#endif

typedef unsigned char   krb5_octet;
typedef unsigned char   krb5_ui_1;
typedef short           krb5_int16;
typedef unsigned short  krb5_ui_2;
typedef long            krb5_int32;
typedef unsigned long   krb5_ui_4;
typedef unsigned int    krb5_size;                              /*@A1A*/

#define VALID_INT_BITS  0x7fffffff
#define VALID_UINT_BITS 0xffffffff
#define KRB5_INT32_MAX  2147483647
#define KRB5_INT32_MIN  (-KRB5_INT32_MAX-1)
#define KRB5_INT16_MAX  65535
#define KRB5_INT16_MIN  (-KRB5_INT16_MAX-1)
#define krb5_const      const

#define KRB5_PROTOTYPE(x)  x
#define KRB5_STDARG_P(x)   x
#define KRB5_NPROTOTYPE(x) x

        /*  Basic definitions for Kerberos V5 library  */

#ifndef FALSE
#define FALSE   0
#endif

#ifndef TRUE
#define TRUE    1
#endif

typedef unsigned int        krb5_boolean;
typedef unsigned int        krb5_msgtype;
typedef unsigned int        krb5_kvno;
typedef unsigned int        krb5_addrtype;
typedef unsigned int        krb5_enctype;
typedef krb5_int32          krb5_keyusage;
typedef unsigned int        krb5_cksumtype;
typedef unsigned int        krb5_authdatatype;
typedef krb5_int32          krb5_preauthtype;
typedef krb5_int32          krb5_flags;
typedef krb5_int32          krb5_timestamp;
typedef krb5_int32          krb5_error_code;
typedef krb5_int32          krb5_deltat;
typedef krb5_error_code     krb5_magic;
typedef void *              krb5_pointer;
typedef void krb5_const *   krb5_const_pointer;

typedef struct _krb5_data {
    krb5_magic          magic;
    int                 length;
    char *              data;
} krb5_data;

typedef struct krb5_principal_data {
    krb5_magic          magic;
    krb5_data           realm;
    krb5_data *         data;
    krb5_int32          length;
    krb5_int32          type;
} krb5_principal_data, *krb5_principal;

    /* Name type not known */
#define KRB5_NT_UNKNOWN         0
    /* Just the name of the principal or for users */
#define KRB5_NT_PRINCIPAL       1
    /* Service and other unique instance (krbtgt) */
#define KRB5_NT_SRV_INST        2
    /* Service with host name as instance (telnet, rcommands) */
#define KRB5_NT_SRV_HST         3
    /* Service with host as remaining components */
#define KRB5_NT_SRV_XHST        4
    /* Unique ID */
#define KRB5_NT_UID             5

typedef krb5_const krb5_principal_data *krb5_const_principal;

#define krb5_princ_realm(context, princ) (&(princ)->realm)
#define krb5_princ_set_realm(context, princ, value) \
        ((princ)->realm = *(value))
#define krb5_princ_set_realm_length(context, princ, value) \
        (princ)->realm.length = (value)
#define krb5_princ_set_realm_data(context, princ, value) \
        (princ)->realm.data = (value)
#define krb5_princ_size(context, princ) (princ)->length
#define krb5_princ_type(context, princ) (princ)->type
#define krb5_princ_name(context, princ) (princ)->data
#define krb5_princ_component(context, princ, i) ((princ)->data + i)

    /* structure for address */
typedef struct _krb5_address {
    krb5_magic          magic;
    krb5_addrtype       addrtype;
    int                 length;
    krb5_octet *        contents;
} krb5_address;

typedef struct _krb5_fulladdr {
    krb5_magic          magic;
    krb5_address *      address;
    krb5_ui_4           port;
} krb5_fulladdr;

    /*  addrtype values */
#define ADDRTYPE_UNSPECIFIED    0x0000
#define ADDRTYPE_INET           0x0002
#define ADDRTYPE_CHAOS          0x0005
#define ADDRTYPE_XNS            0x0006
#define ADDRTYPE_ISO            0x0007
#define ADDRTYPE_DDP            0x0010
#define ADDRTYPE_INET6          0x0018
#define ADDRTYPE_ADDRPORT       0x0100
#define ADDRTYPE_IPPORT         0x0101
#define ADDRTYPE_USERID         0x8001

/* macro to determine if a type is a local type */
#define ADDRTYPE_IS_LOCAL(addrtype) (addrtype & 0x8000)

    /* flags for krb5_auth_con_genaddrs() */
#define KRB5_AUTH_CONTEXT_GENERATE_LOCAL_ADDR           0x00000001
#define KRB5_AUTH_CONTEXT_GENERATE_REMOTE_ADDR          0x00000002
#define KRB5_AUTH_CONTEXT_GENERATE_LOCAL_FULL_ADDR      0x00000004
#define KRB5_AUTH_CONTEXT_GENERATE_REMOTE_FULL_ADDR     0x00000008

struct _krb5_context;
typedef struct _krb5_context * krb5_context;

struct _krb5_auth_context;
typedef struct _krb5_auth_context * krb5_auth_context;

typedef struct _krb5_keyblock {
    krb5_magic          magic;
    krb5_enctype        enctype;
    int                 length;
    krb5_octet *        contents;
} krb5_keyblock;

typedef struct _krb5_checksum {
    krb5_magic          magic;
    krb5_cksumtype      checksum_type;
    int                 length;
    krb5_octet *        contents;
} krb5_checksum;

typedef struct _krb5_enc_data {
    krb5_magic          magic;
    krb5_enctype        enctype;
    krb5_kvno           kvno;
    krb5_data           ciphertext;
} krb5_enc_data;

    /* per Kerberos v5 protocol spec */
#define ENCTYPE_NULL                        0x0000
#define ENCTYPE_DES_CBC_CRC                 0x0001
#define ENCTYPE_DES_CBC_MD4                 0x0002
#define ENCTYPE_DES_CBC_MD5                 0x0003
#define ENCTYPE_DES_CBC_RAW                 0x0004
#define ENCTYPE_DES3_CBC_RAW                0x0006
#define ENCTYPE_DES_HMAC_SHA1               0x0008
#define ENCTYPE_DES3_CBC_SHA1               0x0010
#define ENCTYPE_AES128_CTS_HMAC_SHA1_96     0x0011              /*@A1A*/
#define ENCTYPE_AES256_CTS_HMAC_SHA1_96     0x0012              /*@A1A*/
#define ENCTYPE_ARCFOUR_HMAC                0x0017              /*@A2A*/
#define ENCTYPE_ARCFOUR_HMAC_EXP            0x0018              /*@A2A*/
#define ENCTYPE_UNKNOWN                     0x01ff

#define CKSUMTYPE_NULL                      0x0000
#define CKSUMTYPE_CRC32                     0x0001
#define CKSUMTYPE_RSA_MD4                   0x0002
#define CKSUMTYPE_RSA_MD4_DES               0x0003
#define CKSUMTYPE_DESCBC                    0x0004
#define CKSUMTYPE_RSA_MD5                   0x0007
#define CKSUMTYPE_RSA_MD5_DES               0x0008
#define CKSUMTYPE_NIST_SHA                  0x0009
#define CKSUMTYPE_HMAC_SHA1_DES3            0x000c
#define CKSUMTYPE_HMAC_SHA1_96_AES128       0x000f              /*@A1A*/
#define CKSUMTYPE_HMAC_SHA1_96_AES256       0x0010              /*@A1A*/
#define CKSUMTYPE_HMAC_MD5_ARCFOUR            -138              /*@A2A*/

    /* Key types */
#define KEYTYPE_DES             ENCTYPE_DES_CBC_CRC
#define KEYTYPE_DK_DES          ENCTYPE_DES_HMAC_SHA1
#define KEYTYPE_DK_DES3         ENCTYPE_DES3_CBC_SHA1
#define KEYTYPE_DK_ARCFOUR      ENCTYPE_ARCFOUR_HMAC            /*@A2A*/
#define KEYTYPE_DK_AES2         ENCTYPE_AES128_CTS_HMAC_SHA1_96 /*@A1A*/
#define KEYTYPE_DK_AES4         ENCTYPE_AES256_CTS_HMAC_SHA1_96 /*@A1A*/

    /* Key usage definitions */
#define KRB5_KEYUSAGE_NONE                      0
#define KRB5_KEYUSAGE_AS_REQ_PA_ENC_TS          1
#define KRB5_KEYUSAGE_KDC_REP_TICKET            2
#define KRB5_KEYUSAGE_AS_REP_ENCPART            3
#define KRB5_KEYUSAGE_TGS_REQ_AD_SESSKEY        4
#define KRB5_KEYUSAGE_TGS_REQ_AD_SUBKEY         5
#define KRB5_KEYUSAGE_TGS_REQ_AUTH_CKSUM        6
#define KRB5_KEYUSAGE_TGS_REQ_AUTH              7
#define KRB5_KEYUSAGE_TGS_REP_ENCPART_SESSKEY   8
#define KRB5_KEYUSAGE_TGS_REP_ENCPART_SUBKEY    9
#define KRB5_KEYUSAGE_AP_REQ_AUTH_CKSUM         10
#define KRB5_KEYUSAGE_AP_REQ_AUTH               11
#define KRB5_KEYUSAGE_AP_REP_ENCPART            12
#define KRB5_KEYUSAGE_KRB_PRIV_ENCPART          13
#define KRB5_KEYUSAGE_KRB_CRED_ENCPART          14
#define KRB5_KEYUSAGE_KRB_SAFE_CKSUM            15
#define KRB5_KEYUSAGE_APP_DATA_ENCRYPT          16
#define KRB5_KEYUSAGE_APP_DATA_CKSUM            17
#define KRB5_KEYUSAGE_KRB_ERROR_CKSUM           18
#define KRB5_KEYUSAGE_AD_KDCISSUED_CKSUM        19
#define KRB5_KEYUSAGE_AD_MTE                    20
#define KRB5_KEYUSAGE_AD_ITE                    21
#define KRB5_KEYUSAGE_KG_SEAL                   22
#define KRB5_KEYUSAGE_KG_SIGN                   23
#define KRB5_KEYUSAGE_KG_SEQ                    24
#define KRB5_KEYUSAGE_KG_ACCEPTOR_SEAL          22              /*@A1A*/
#define KRB5_KEYUSAGE_KG_ACCEPTOR_SIGN          23              /*@A1A*/
#define KRB5_KEYUSAGE_KG_INITIATOR_SEAL         24              /*@A1A*/
#define KRB5_KEYUSAGE_KG_INITIATOR_SIGN         25              /*@A1A*/

    /* round x up to nearest multiple of y */
#ifndef krb5_roundup
#define krb5_roundup(x, y) ((((x) + (y) - 1)/(y))*(y))
#endif /* roundup */

    /* kdc_options for kdc_request */
#define KDC_OPT_RESERVED                0x80000000
#define KDC_OPT_FORWARDABLE             0x40000000
#define KDC_OPT_FORWARDED               0x20000000
#define KDC_OPT_PROXIABLE               0x10000000
#define KDC_OPT_PROXY                   0x08000000
#define KDC_OPT_ALLOW_POSTDATE          0x04000000
#define KDC_OPT_POSTDATED               0x02000000
#define KDC_OPT_RENEWABLE               0x00800000
#define KDC_OPT_DISABLE_TRANSITED_CHECK 0x00000020
#define KDC_OPT_RENEWABLE_OK            0x00000010
#define KDC_OPT_ENC_TKT_IN_SKEY         0x00000008
#define KDC_OPT_RENEW                   0x00000002
#define KDC_OPT_VALIDATE                0x00000001

/*
 * Mask of ticket flags in the TGT which should be converted into KDC
 * options when using the TGT to get derivitive tickets.
 *
 *  New mask = KDC_OPT_FORWARDABLE | KDC_OPT_PROXIABLE |
 *             KDC_OPT_ALLOW_POSTDATE | KDC_OPT_RENEWABLE
 */
#define KDC_TKT_COMMON_MASK             0x54800000

/* definitions for ap_options fields */
/* ap_options are 32 bits; each host is responsible to put the 4 bytes
   representing these bits into net order before transmission */
#define AP_OPTS_RESERVED                0x80000000
#define AP_OPTS_USE_SESSION_KEY         0x40000000
#define AP_OPTS_MUTUAL_REQUIRED         0x20000000
#define AP_OPTS_USE_SUBKEY              0x00000001

#define AP_OPTS_WIRE_MASK               0xfffffff0

/* definitions for ad_type fields. */
#define AD_TYPE_RESERVED                0x8000
#define AD_TYPE_EXTERNAL                0x4000
#define AD_TYPE_REGISTERED              0x2000
#define AD_TYPE_FIELD_TYPE_MASK         0x1fff
#define AD_TYPE_INTERNAL_MASK           0x3fff

/* Ticket flags */
#define TKT_FLG_RESERVED                0x80000000
#define TKT_FLG_FORWARDABLE             0x40000000
#define TKT_FLG_FORWARDED               0x20000000
#define TKT_FLG_PROXIABLE               0x10000000
#define TKT_FLG_PROXY                   0x08000000
#define TKT_FLG_MAY_POSTDATE            0x04000000
#define TKT_FLG_POSTDATED               0x02000000
#define TKT_FLG_INVALID                 0x01000000
#define TKT_FLG_RENEWABLE               0x00800000
#define TKT_FLG_INITIAL                 0x00400000
#define TKT_FLG_PRE_AUTH                0x00200000
#define TKT_FLG_HW_AUTH                 0x00100000
#define TKT_FLG_TRANSITED_PATH_CHECKED  0x00080000
#define TKT_FLG_OK_AS_DELEGATE          0x00040000
#define TKT_FLG_ANONYMOUS               0x00020000

/* definitions for lr_type fields. */
#define LR_TYPE_THIS_SERVER_ONLY        0x8000
#define LR_TYPE_INTERPRETATION_MASK     0x7fff

/* definitions for msec direction bit for KRB_SAFE, KRB_PRIV */
#define MSEC_DIRBIT                     0x8000
#define MSEC_VAL_MASK                   0x7fff

/* Protocol version number */
#define KRB5_PVNO       5

/* Message types */
#define KRB5_AS_REQ     ((krb5_msgtype)10)
#define KRB5_AS_REP     ((krb5_msgtype)11)
#define KRB5_TGS_REQ    ((krb5_msgtype)12)
#define KRB5_TGS_REP    ((krb5_msgtype)13)
#define KRB5_AP_REQ     ((krb5_msgtype)14)
#define KRB5_AP_REP     ((krb5_msgtype)15)
#define KRB5_SAFE       ((krb5_msgtype)20)
#define KRB5_PRIV       ((krb5_msgtype)21)
#define KRB5_CRED       ((krb5_msgtype)22)
#define KRB5_ERROR      ((krb5_msgtype)30)

/* LastReq types */
#define KRB5_LRQ_NONE                   0
#define KRB5_LRQ_ALL_LAST_TGT           1
#define KRB5_LRQ_ONE_LAST_TGT           (-1)
#define KRB5_LRQ_ALL_LAST_INITIAL       2
#define KRB5_LRQ_ONE_LAST_INITIAL       (-2)
#define KRB5_LRQ_ALL_LAST_TGT_ISSUED    3
#define KRB5_LRQ_ONE_LAST_TGT_ISSUED    (-3)
#define KRB5_LRQ_ALL_LAST_RENEWAL       4
#define KRB5_LRQ_ONE_LAST_RENEWAL       (-4)
#define KRB5_LRQ_ALL_LAST_REQ           5
#define KRB5_LRQ_ONE_LAST_REQ           (-5)

/* PADATA types */
#define KRB5_PADATA_NONE                0
#define KRB5_PADATA_AP_REQ              1
#define KRB5_PADATA_TGS_REQ             KRB5_PADATA_AP_REQ
#define KRB5_PADATA_ENC_TIMESTAMP       2
#define KRB5_PADATA_PW_SALT             3
#define KRB5_PADATA_ENC_UNIX_TIME       5
#define KRB5_PADATA_ENC_SANDIA_SECURID  6
#define KRB5_PADATA_SESAME              7
#define KRB5_PADATA_OSF_DCE             8
#define KRB5_CYBERSAFE_SECUREID         9
#define KRB5_PADATA_AFS3_SALT           10
#define KRB5_PADATA_ETYPE_INFO          11
#define KRB5_PADATA_SAM_CHALLENGE       12
#define KRB5_PADATA_SAM_RESPONSE        13
#define KRB5_PADATA_ETYPE_INFO2         19                      /*@A1A*/

/* Transited encoding types */
#define KRB5_DOMAIN_X500_COMPRESS       1

/* alternate authentication types */
#define KRB5_ALTAUTH_ATT_CHALLENGE_RESPONSE     64

/* authorization data types */
#define KRB5_AUTHDATA_OSF_DCE                   64
#define KRB5_AUTHDATA_SESAME                    65

#define KRB5_REALM_BRANCH_CHAR '.'

/* The name of the Kerberos ticket granting service... and its size */
#define KRB5_TGS_NAME           "krbtgt"
#define KRB5_TGS_NAME_SIZE      6

/* Time set */
typedef struct _krb5_ticket_times {
    krb5_timestamp      authtime;
    krb5_timestamp      starttime;
    krb5_timestamp      endtime;
    krb5_timestamp      renew_till;
} krb5_ticket_times;

typedef struct _krb5_authdata {
    krb5_magic          magic;
    krb5_authdatatype   ad_type;
    int                 length;
    krb5_octet *        contents;
} krb5_authdata;

typedef struct _krb5_transited {
    krb5_magic          magic;
    krb5_octet          tr_type;
    krb5_data           tr_contents;
} krb5_transited;

typedef struct _krb5_enc_tkt_part {
    krb5_magic          magic;
    krb5_flags          flags;
    krb5_keyblock *     session;
    krb5_principal      client;
    krb5_transited      transited;
    krb5_ticket_times   times;
    krb5_address **     caddrs;
    krb5_authdata **    authorization_data;
} krb5_enc_tkt_part;

typedef struct _krb5_ticket {
    krb5_magic          magic;
    krb5_principal      server;
    krb5_enc_data       enc_part;
    krb5_enc_tkt_part * enc_part2;
} krb5_ticket;

typedef struct _krb5_authenticator {
    krb5_magic          magic;
    krb5_principal      client;
    krb5_checksum *     checksum;
    krb5_int32          cusec;
    krb5_timestamp      ctime;
    krb5_keyblock *     subkey;
    krb5_int32          seq_number;
    krb5_authdata **    authorization_data;
} krb5_authenticator;

typedef struct _krb5_tkt_authent {
    krb5_magic          magic;
    krb5_ticket *       ticket;
    krb5_authenticator *authenticator;
    krb5_flags          ap_options;
} krb5_tkt_authent;

typedef struct _krb5_creds {
    krb5_magic          magic;
    krb5_principal      client;
    krb5_principal      server;
    krb5_keyblock       keyblock;
    krb5_ticket_times   times;
    krb5_boolean        is_skey;
    krb5_flags          ticket_flags;
    krb5_address **     addresses;
    krb5_data           ticket;
    krb5_data           second_ticket;
    krb5_authdata **    authdata;
} krb5_creds;

typedef struct _krb5_cred_info {
    krb5_magic          magic;
    krb5_keyblock *     session;
    krb5_principal      client;
    krb5_principal      server;
    krb5_flags          flags;
    krb5_ticket_times   times;
    krb5_address **     caddrs;
} krb5_cred_info;

typedef struct _krb5_cred_enc_part {
    krb5_magic          magic;
    krb5_int32          nonce;
    krb5_timestamp      timestamp;
    krb5_int32          usec;
    krb5_address *      s_address;
    krb5_address *      r_address;
    krb5_cred_info **   ticket_info;
} krb5_cred_enc_part;

typedef struct _krb5_cred {
    krb5_magic          magic;
    krb5_ticket **      tickets;
    krb5_enc_data       enc_part;
    krb5_cred_enc_part *enc_part2;
} krb5_cred;

typedef struct _krb5_last_req_entry {
    krb5_magic          magic;
    krb5_octet          lr_type;
    krb5_timestamp      value;
} krb5_last_req_entry;

typedef struct _krb5_pa_data {
    krb5_magic          magic;
    krb5_preauthtype    pa_type;
    int                 length;
    krb5_octet *        contents;
} krb5_pa_data;

typedef struct _krb5_kdc_req {
    krb5_magic          magic;
    krb5_msgtype        msg_type;
    krb5_pa_data **     padata;
    /* real body */
    krb5_flags          kdc_options;
    krb5_principal      client;
    krb5_principal      server;
    krb5_timestamp      from;
    krb5_timestamp      till;
    krb5_timestamp      rtime;
    krb5_int32          nonce;
    int                 nktypes;
    krb5_enctype *      ktype;
    krb5_address **     addresses;
    krb5_enc_data       authorization_data;
    krb5_authdata **    unenc_authdata;
    krb5_ticket **      second_ticket;
} krb5_kdc_req;

typedef struct _krb5_enc_kdc_rep_part {
    krb5_magic          magic;
    krb5_msgtype        msg_type;
    krb5_keyblock       *session;
    krb5_last_req_entry **last_req;
    krb5_int32          nonce;
    krb5_timestamp      key_exp;
    krb5_flags          flags;
    krb5_ticket_times   times;
    krb5_principal      server;
    krb5_address **     caddrs;
} krb5_enc_kdc_rep_part;

typedef struct _krb5_kdc_rep {
    krb5_magic          magic;
    krb5_msgtype        msg_type;
    krb5_pa_data **     padata;
    krb5_principal      client;
    krb5_ticket *       ticket;
    krb5_enc_data       enc_part;
    krb5_enc_kdc_rep_part *enc_part2;
} krb5_kdc_rep;

typedef struct _krb5_error {
    krb5_magic          magic;
    krb5_timestamp      ctime;
    krb5_int32          cusec;
    krb5_int32          susec;
    krb5_timestamp      stime;
    krb5_ui_4           error;
    krb5_principal      client;
    krb5_principal      server;
    krb5_data           text;
    krb5_data           e_data;
} krb5_error;

typedef struct _krb5_ap_req {
    krb5_magic          magic;
    krb5_flags          ap_options;
    krb5_ticket *       ticket;
    krb5_enc_data       authenticator;
} krb5_ap_req;

typedef struct _krb5_ap_rep {
    krb5_magic          magic;
    krb5_enc_data       enc_part;
} krb5_ap_rep;

typedef struct _krb5_ap_rep_enc_part {
    krb5_magic          magic;
    krb5_timestamp      ctime;
    krb5_int32          cusec;
    krb5_keyblock *     subkey;
    krb5_int32          seq_number;
} krb5_ap_rep_enc_part;

typedef struct _krb5_response {
    krb5_magic          magic;
    krb5_octet          message_type;
    krb5_data           response;
    krb5_int32          expected_nonce;
    krb5_timestamp      request_time;
} krb5_response;

typedef struct _krb5_safe {
    krb5_magic          magic;
    krb5_data           user_data;
    krb5_timestamp      timestamp;
    krb5_int32          usec;
    krb5_int32          seq_number;
    krb5_address *      s_address;
    krb5_address *      r_address;
    krb5_checksum *     checksum;
} krb5_safe;

typedef struct _krb5_priv {
    krb5_magic          magic;
    krb5_enc_data       enc_part;
} krb5_priv;

typedef struct _krb5_priv_enc_part {
    krb5_magic          magic;
    krb5_data           user_data;
    krb5_timestamp      timestamp;
    krb5_int32          usec;
    krb5_int32          seq_number;
    krb5_address *      s_address;
    krb5_address *      r_address;
} krb5_priv_enc_part;

#define KRB5_AUTH_CONTEXT_DO_TIME       0x00000001
#define KRB5_AUTH_CONTEXT_RET_TIME      0x00000002
#define KRB5_AUTH_CONTEXT_DO_SEQUENCE   0x00000004
#define KRB5_AUTH_CONTEXT_RET_SEQUENCE  0x00000008

typedef struct krb5_replay_data {
    krb5_timestamp      timestamp;
    krb5_int32          usec;
    krb5_int32          seq;
} krb5_replay_data;


/*
 *  Credentials cache support
 */
typedef krb5_pointer            krb5_cc_cursor;

struct _krb5_ccache {
    krb5_magic                  magic;
    struct _krb5_cc_ops *       ops;
    krb5_pointer                data;
};

typedef struct _krb5_ccache *   krb5_ccache;

typedef struct _krb5_cc_ops {
    krb5_magic                  magic;
    char *                      prefix;
    char *                      (*get_name) (
                                    krb5_context,
                                    krb5_ccache);
    krb5_error_code             (*resolve) (
                                    krb5_context,
                                    krb5_ccache *,
                                    char *);
    krb5_error_code             (*gen_new) (
                                    krb5_context,
                                    krb5_ccache *);
    krb5_error_code             (*init) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_principal);
    krb5_error_code             (*destroy) (
                                    krb5_context,
                                    krb5_ccache);
    krb5_error_code             (*close) (
                                    krb5_context,
                                    krb5_ccache);
    krb5_error_code             (*store) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_creds *);
    krb5_error_code             (*retrieve) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_flags,
                                    krb5_creds *,
                                    krb5_creds *);
    krb5_error_code             (*get_princ) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_principal *);
    krb5_error_code             (*get_first) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_cc_cursor *);
    krb5_error_code             (*get_next) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_cc_cursor *,
                                    krb5_creds *);
    krb5_error_code             (*end_get) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_cc_cursor *);
    krb5_error_code             (*remove_cred) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_flags,
                                    krb5_creds *);
    krb5_error_code             (*set_flags) (
                                    krb5_context,
                                    krb5_ccache,
                                    krb5_flags);
} krb5_cc_ops;

/* for krb5_cc_retrieve_cred */
#define KRB5_TC_MATCH_TIMES             0x00000001
#define KRB5_TC_MATCH_IS_SKEY           0x00000002
#define KRB5_TC_MATCH_FLAGS             0x00000004
#define KRB5_TC_MATCH_TIMES_EXACT       0x00000008
#define KRB5_TC_MATCH_FLAGS_EXACT       0x00000010
#define KRB5_TC_MATCH_AUTHDATA          0x00000020
#define KRB5_TC_MATCH_SRV_NAMEONLY      0x00000040
#define KRB5_TC_MATCH_2ND_TKT           0x00000080
#define KRB5_TC_MATCH_KTYPE             0x00000100
#define KRB5_TC_SUPPORTED_KTYPES        0x00000200

/* for krb5_cc_set_flags */
#define KRB5_TC_OPENCLOSE               0x00000001

/* maximum cache file name length (excluding null-delimiter) */
#define MAX_CACHE_NAME_LENGTH           256

/* function prototypes */
SKRB_API krb5_error_code SKRB_CALL krb5_cc_default (
    krb5_context                context,
    krb5_ccache *               ccache);

SKRB_API char * SKRB_CALL krb5_cc_default_name (
    krb5_context                context);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_generate_new (
    krb5_context                context,
    krb5_const char *           type,
    krb5_ccache *               ccache);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_register (
    krb5_context                context,
    krb5_cc_ops *               ops,
    krb5_boolean                override);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_resolve (
    krb5_context                context,
    char *                      name,
    krb5_ccache *               ccache);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_set_default_name (
    krb5_context                context,
    krb5_const char *           name);

/* macros to access credentials cache functions */
#ifdef AS400
SKRB_API krb5_error_code SKRB_CALL krb5_cc_initialize (
    krb5_context,
    krb5_ccache,
    krb5_principal);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_destroy (
    krb5_context,
    krb5_ccache);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_close (
    krb5_context,
    krb5_ccache);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_store_cred (
    krb5_context,
    krb5_ccache,
    krb5_creds *);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_retrieve_cred (
    krb5_context,
    krb5_ccache,
    krb5_flags,
    krb5_creds *,
    krb5_creds *);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_get_principal (
    krb5_context,
    krb5_ccache,
    krb5_principal *);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_start_seq_get (
    krb5_context,
    krb5_ccache,
    krb5_cc_cursor *);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_next_cred (
    krb5_context,
    krb5_ccache,
    krb5_cc_cursor *,
    krb5_creds *);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_end_seq_get (
    krb5_context,
    krb5_ccache,
    krb5_cc_cursor *);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_remove_cred (
    krb5_context,
    krb5_ccache,
    krb5_flags,
    krb5_creds *);

SKRB_API krb5_error_code SKRB_CALL krb5_cc_set_flags (
    krb5_context,
    krb5_ccache,
    krb5_flags);

SKRB_API char * SKRB_CALL krb5_cc_get_name (
    krb5_context,
    krb5_ccache);

SKRB_API char * SKRB_CALL krb5_cc_get_type (
    krb5_context,
    krb5_ccache);

/* Additional OS/400 APIs.       */
SKRB_API void SKRB_CALL qkrb_count_kt_entries(
    char      *,
    char      *,
    krb5_kvno,
    int *);

SKRB_API void SKRB_CALL qkrb_add_kt_entry(
    char      *,
    char      *,
    char      *,
    krb5_kvno);

SKRB_API void SKRB_CALL qkrb_remove_kt_entry(
    char      *,
    char      *,
    krb5_kvno);
#else
#define krb5_cc_initialize(context, cache, principal) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->init)(context, cache, principal) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_destroy(context, cache) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->destroy)(context, cache) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_close(context, cache) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->close)(context, cache) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_store_cred(context, cache, creds) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->store)(context, cache, creds) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_retrieve_cred(context, cache, flags, mcreds, creds) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->retrieve) \
            (context, cache, flags, mcreds, creds) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_get_principal(context, cache, principal) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->get_princ)(context, cache, principal) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_start_seq_get(context, cache, cursor) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->get_first)(context, cache, cursor) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_next_cred(context, cache, cursor, creds) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->get_next)(context, cache, cursor, creds) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_end_seq_get(context, cache, cursor) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->end_get)(context, cache, cursor) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_remove_cred(context, cache, flags, creds) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->remove_cred)(context, cache,flags, creds) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_set_flags(context, cache, flags) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->set_flags)(context, cache, flags) : \
        KRB5_BAD_MAGIC)

#define krb5_cc_get_name(context, cache) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        (*(cache)->ops->get_name)(context, cache) : \
        NULL)

#define krb5_cc_get_type(context, cache) \
    (((cache)!=NULL && (cache)->magic==KV5M_CCACHE) ? \
        ((cache)->ops->prefix) : \
         NULL)
#endif
/*
 *  Replay cache support
 */
struct krb5_rc_st {
    krb5_magic                  magic;
    struct _krb5_rc_ops *       ops;
    krb5_pointer                data;
};

typedef struct krb5_rc_st *     krb5_rcache;

typedef struct _krb5_donot_replay {
    krb5_magic                  magic;
    char *                      server;
    char *                      client;
    krb5_int32                  cusec;
    krb5_timestamp              ctime;
} krb5_donot_replay;

typedef struct _krb5_rc_ops {
    krb5_magic                  magic;
    char *                      type;
    krb5_error_code             (*init) (
                                    krb5_context,
                                    krb5_rcache,
                                    krb5_deltat);
    krb5_error_code             (*recover) (
                                    krb5_context,
                                    krb5_rcache);
    krb5_error_code             (*destroy) (
                                    krb5_context,
                                    krb5_rcache);
    krb5_error_code             (*close) (
                                    krb5_context,
                                    krb5_rcache);
    krb5_error_code             (*store) (
                                    krb5_context,
                                    krb5_rcache,
                                    krb5_donot_replay *);
    krb5_error_code             (*expunge) (
                                    krb5_context,
                                    krb5_rcache);
    krb5_error_code             (*get_span) (
                                    krb5_context,
                                    krb5_rcache,
                                    krb5_deltat *);
    char *                      (*get_name) (
                                    krb5_context, krb5_rcache);
    krb5_error_code             (*resolve) (
                                    krb5_context,
                                    krb5_rcache,
                                    char *);
} krb5_rc_ops;

SKRB_API krb5_error_code SKRB_CALL krb5_auth_to_rep (
    krb5_context                context,
    krb5_tkt_authent *          authent,
    krb5_donot_replay *         replay);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_default (
    krb5_context                context,
    krb5_rcache *               rcache);

SKRB_API char * SKRB_CALL krb5_rc_default_name (
    krb5_context                context);

SKRB_API void SKRB_CALL krb5_rc_free_entry_contents (
    krb5_context                context,
    krb5_donot_replay *         entry);

SKRB_API char * SKRB_CALL krb5_rc_get_type (
    krb5_context                context,
    krb5_rcache                 rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_register_type (
    krb5_context                context,
    krb5_rc_ops *               ops);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_resolve (
    krb5_context                context,
    krb5_rcache *               rcache,
    char *                      name);

#ifdef AS400
SKRB_API krb5_error_code SKRB_CALL krb5_rc_close (
    krb5_context,
    krb5_rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_destroy (
    krb5_context,
    krb5_rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_expunge (
    krb5_context,
    krb5_rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_get_lifespan (
    krb5_context,
    krb5_rcache,
    krb5_deltat *);

SKRB_API char * SKRB_CALL krb5_rc_get_name (
    krb5_context,
    krb5_rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_initialize (
    krb5_context,
    krb5_rcache,
    krb5_deltat);

SKRB_API krb5_error_code SKRB_CALL krb5_rc_recover (
    krb5_context,
    krb5_rcache);

#define krb5_rc_resolve_full(context, rcache, name) \
    krb5_rc_resolve(context, rcache, name)

SKRB_API krb5_error_code SKRB_CALL krb5_rc_store (
    krb5_context,
    krb5_rcache,
    krb5_donot_replay *);
#else
#define krb5_rc_resolve_full(context, rcache, name) \
        krb5_rc_resolve(context, rcache, name)

#define krb5_rc_close(context, id) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->close)(context, id) : \
        KRB5_BAD_MAGIC)

#define krb5_rc_destroy(context, id) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->destroy)(context, id) : \
        KRB5_BAD_MAGIC)

#define krb5_rc_expunge(context, id) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->expunge)(context, id) : \
        KRB5_BAD_MAGIC)

#define krb5_rc_get_lifespan(context, id, spanp) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->get_span)(context, id, spanp) : \
        KRB5_BAD_MAGIC)

#define krb5_rc_get_name(context, id) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->get_name)(context, id) : \
        NULL)

#define krb5_rc_initialize(context, id, span) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->init)(context, id, span) : \
        KRB5_BAD_MAGIC)

#define krb5_rc_recover(context, id) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->recover)(context, id) : \
        KRB5_BAD_MAGIC)

#define krb5_rc_store(context, id, dontreplay) \
    (((id)!=NULL && (id)->magic==KV5M_RCACHE) ? \
        (*(id)->ops->store)(context, id, dontreplay) : \
        KRB5_BAD_MAGIC)
#endif

/*
 *  Key table support
 */
#define MAX_KEYTAB_NAME_LENGTH  256

typedef krb5_pointer            krb5_kt_cursor;

struct _krb5_kt {
    krb5_magic                  magic;
    struct _krb5_kt_ops *       ops;
    krb5_pointer                data;
};

typedef struct _krb5_kt *       krb5_keytab;

typedef struct krb5_keytab_entry_st {
    krb5_magic                  magic;
    krb5_principal              principal;
    krb5_timestamp              timestamp;
    krb5_kvno                   vno;
    krb5_keyblock               key;
} krb5_keytab_entry;

typedef struct _krb5_kt_ops {
    krb5_magic                  magic;
    char *                      prefix;
    krb5_error_code             (*resolve) (
                                    krb5_context,
                                    krb5_const char *,
                                    krb5_keytab *);
    krb5_error_code             (*get_name) (
                                    krb5_context,
                                    krb5_keytab,
                                    char *,
                                    int);
    krb5_error_code             (*close) (
                                    krb5_context,
                                    krb5_keytab);
    krb5_error_code             (*get) (
                                    krb5_context,
                                    krb5_keytab,
                                    krb5_principal,
                                    krb5_kvno,
                                    krb5_enctype,
                                    krb5_keytab_entry *);
    krb5_error_code             (*start_seq_get) (
                                    krb5_context,
                                    krb5_keytab,
                                    krb5_kt_cursor *);
    krb5_error_code             (*get_next) (
                                    krb5_context,
                                    krb5_keytab,
                                    krb5_keytab_entry *,
                                    krb5_kt_cursor *);
    krb5_error_code             (*end_get) (
                                    krb5_context,
                                    krb5_keytab,
                                    krb5_kt_cursor *);
    krb5_error_code             (*add) (
                                    krb5_context,
                                    krb5_keytab,
                                    krb5_keytab_entry *);
    krb5_error_code             (*remove) (
                                    krb5_context,
                                    krb5_keytab,
                                    krb5_keytab_entry *);
} krb5_kt_ops;

SKRB_API krb5_error_code SKRB_CALL krb5_kt_default (
    krb5_context                context,
    krb5_keytab *               id);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_default_name (
    krb5_context                context,
    char *                      name,
    int                         namelen);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_free_entry (
    krb5_context                context,
    krb5_keytab_entry *         entry);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_read_service_key (
    krb5_context                context,
    krb5_pointer                keyprocarg,
    krb5_principal              principal,
    krb5_kvno                   vno,
    krb5_enctype                enctype,
    krb5_keyblock **            key);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_register (
    krb5_context                context,
    krb5_kt_ops *               ops);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_resolve (
    krb5_context                context,
    krb5_const char *           name,
    krb5_keytab *               id);

#ifdef AS400
SKRB_API krb5_error_code SKRB_CALL krb5_kt_add_entry (
    krb5_context,
    krb5_keytab,
    krb5_keytab_entry *);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_close (
    krb5_context,
    krb5_keytab);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_end_seq_get (
    krb5_context,
    krb5_keytab,
    krb5_kt_cursor *);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_get_entry (
    krb5_context,
    krb5_keytab,
    krb5_principal,
    krb5_kvno,
    krb5_enctype,
    krb5_keytab_entry *);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_get_name (
    krb5_context,
    krb5_keytab,
    char *,
    int);

SKRB_API char * SKRB_CALL krb5_kt_get_type (
    krb5_context,
    krb5_keytab);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_next_entry (
    krb5_context,
    krb5_keytab,
    krb5_keytab_entry *,
    krb5_kt_cursor *);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_remove_entry (
    krb5_context,
    krb5_keytab,
    krb5_keytab_entry *);

SKRB_API krb5_error_code SKRB_CALL krb5_kt_start_seq_get (
    krb5_context,
    krb5_keytab,
    krb5_kt_cursor *);
#else
#define krb5_kt_add_entry(context, keytab, entry) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->add)(context, keytab, entry) : \
        KRB5_BAD_MAGIC)

#define krb5_kt_close(context, keytab) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->close)(context, keytab) : \
        KRB5_BAD_MAGIC)

#define krb5_kt_end_seq_get(context, keytab, cursor) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->end_get)(context, keytab, cursor) : \
        KRB5_BAD_MAGIC)

#define krb5_kt_get_entry(context, keytab, principal, vno, \
            enctype, entry) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->get)(context, keytab, principal, vno, \
            enctype, entry) : \
        KRB5_BAD_MAGIC)

#define krb5_kt_get_name(context, keytab, name, namelen) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->get_name)(context, keytab, name, namelen) : \
        KRB5_BAD_MAGIC)

#define krb5_kt_get_type(context, keytab) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        ((keytab)->ops->prefix) : \
        NULL)

#define krb5_kt_next_entry(context, keytab, entry, cursor) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->get_next)(context, keytab, entry, cursor) : \
        KRB5_BAD_MAGIC)

#define krb5_kt_remove_entry(context, keytab, entry) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->remove)(context, keytab, entry) : \
        KRB5_BAD_MAGIC)

#define krb5_kt_start_seq_get(context, keytab, cursor) \
    (((keytab)!=NULL && (keytab)->magic==KV5M_KEYTAB) ? \
        (*(keytab)->ops->start_seq_get)(context, keytab, cursor) : \
        KRB5_BAD_MAGIC)
#endif

/*
 *  General Kerberos functions
 */
SKRB_API krb5_boolean SKRB_CALL krb5_address_compare (
    krb5_context                context,
    krb5_const krb5_address *   addr1,
    krb5_const krb5_address *   addr2);

SKRB_API krb5_boolean SKRB_CALL krb5_address_search (
    krb5_context                context,
    krb5_const krb5_address *   addr,
    krb5_address * krb5_const * addrlist);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_free (
    krb5_context                context,
    krb5_auth_context           auth_context);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_genaddrs (
    krb5_context                context,
    krb5_auth_context           auth_context,
    int                         fd,
    int                         flags);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getaddrs (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_address **             local_addr,
    krb5_address **             remote_addr);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getauthenticator (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_authenticator **       authenticator);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getflags (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_int32 *                flags);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getivector (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_pointer *              ivector);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getkey (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_keyblock **            keyblock);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getlocalseqnumber (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_int32 *                seqnumber);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getlocalsubkey (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_keyblock **            keyblock);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getports (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_address **             local_port,
    krb5_address **             remote_port);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getrcache (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_rcache *               rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getremoteseqnumber (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_int32 *                seqnumber);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_getremotesubkey (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_keyblock **            keyblock);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_init (
    krb5_context                context,
    krb5_auth_context *         auth_context);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_initivector (
    krb5_context                context,
    krb5_auth_context           auth_context);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_set_req_cksumtype (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_cksumtype              cksumtype);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_set_safe_cksumtype (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_cksumtype              cksumtype);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_setaddrs (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_address *              local_addr,
    krb5_address *              remote_addr);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_setflags (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_int32                  flags);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_setivector (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_pointer                ivector);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_setports (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_address *              local_port,
    krb5_address *              remote_port);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_setrcache (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_rcache                 rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_auth_con_setuseruserkey (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_keyblock *             keyblock);

SKRB_API krb5_error_code SKRB_CALL krb5_build_principal_ext (
    krb5_context                context,
    krb5_principal *            ret_princ,
    int                         rlen,
    krb5_const char *           realm,
    ...);

SKRB_API krb5_error_code SKRB_CALL krb5_build_principal_ext_va (
    krb5_context                context,
    krb5_principal *            ret_princ,
    int                         rlen,
    krb5_const char *           realm,
    va_list                     ap);

SKRB_API krb5_error_code SKRB_CALL krb5_build_principal (
    krb5_context                context,
    krb5_principal *            ret_princ,
    int                         rlen,
    krb5_const char *           realm,
    ...);

SKRB_API krb5_error_code SKRB_CALL krb5_build_principal_va (
    krb5_context                context,
    krb5_principal *            ret_princ,
    int                         rlen,
    krb5_const char *           realm,
    va_list                     ap);

SKRB_API krb5_error_code SKRB_CALL krb5_change_password (
    krb5_context                context,
    krb5_creds *                creds,
    const char *                newpw,
    int *                       result_code,
    krb5_data *                 result_code_string,
    krb5_data *                 result_string);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_address (
    krb5_context                context,
    krb5_const krb5_address *   inad,
    krb5_address **             outad);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_addresses (
    krb5_context                context,
    krb5_address * krb5_const * inaddr,
    krb5_address ***            outaddr);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_authdata (
    krb5_context                context,
    krb5_authdata * krb5_const *inauthdat,
    krb5_authdata ***           outauthdat);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_authenticator (
    krb5_context                context,
    krb5_const krb5_authenticator *authfrom,
    krb5_authenticator **       authto);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_checksum (
    krb5_context                context,
    krb5_const krb5_checksum *  ckfrom,
    krb5_checksum **            ckto);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_creds (
    krb5_context                context,
    krb5_const krb5_creds *     incred,
    krb5_creds **               outcred);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_data (
    krb5_context                context,
    krb5_const krb5_data *      indata,
    krb5_data **                outdata);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_keyblock (
    krb5_context                context,
    krb5_const krb5_keyblock *  from,
    krb5_keyblock **            to);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_keyblock_contents (
    krb5_context                context,
    krb5_const krb5_keyblock *  from,
    krb5_keyblock *             to);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_principal (
    krb5_context                context,
    krb5_const_principal        inprinc,
    krb5_principal *            outprinc);

SKRB_API krb5_error_code SKRB_CALL krb5_copy_ticket (
    krb5_context                context,
    krb5_const krb5_ticket *    from,
    krb5_ticket **              pto);

SKRB_API void SKRB_CALL krb5_free_address (
    krb5_context                ctx,
    krb5_address *              addr);

SKRB_API void SKRB_CALL krb5_free_addresses (
    krb5_context                context,
    krb5_address **             val);

SKRB_API void SKRB_CALL krb5_free_ap_rep_enc_part (
    krb5_context                ctx,
    krb5_ap_rep_enc_part *      enc_part);

SKRB_API void SKRB_CALL krb5_free_authdata (
    krb5_context                ctx,
    krb5_authdata **            authdata);

SKRB_API void SKRB_CALL krb5_free_authenticator (
    krb5_context                ctx,
    krb5_authenticator *        authent);

SKRB_API void SKRB_CALL krb5_free_authenticator_contents (
    krb5_context                ctx,
    krb5_authenticator *        authent);

SKRB_API void SKRB_CALL krb5_free_checksum (
    krb5_context                ctx,
    krb5_checksum *             cksum);

SKRB_API void SKRB_CALL krb5_free_checksum_contents (
    krb5_context                ctx,
    krb5_checksum *             cksum);

SKRB_API void SKRB_CALL krb5_free_cksumtypes (
    krb5_context                context,
    krb5_cksumtype *            cksumtypes);

SKRB_API void SKRB_CALL krb5_free_context (
    krb5_context                ctx);

SKRB_API void SKRB_CALL krb5_free_cred_contents (
    krb5_context                ctx,
    krb5_creds *                creds);

SKRB_API void SKRB_CALL krb5_free_creds (
    krb5_context                ctx,
    krb5_creds *                creds);

SKRB_API void SKRB_CALL krb5_free_data (
    krb5_context                ctx,
    krb5_data *                 data);

SKRB_API void SKRB_CALL krb5_free_data_contents (
    krb5_context                ctx,
    krb5_data *                 data);

SKRB_API void SKRB_CALL krb5_free_enc_tkt_part (
    krb5_context                ctx,
    krb5_enc_tkt_part *         tkt_part);

SKRB_API void SKRB_CALL krb5_free_enctypes (
    krb5_context                context,
    krb5_enctype *              enctypes);

SKRB_API void SKRB_CALL krb5_free_error (
    krb5_context                ctx,
    krb5_error *                err);

SKRB_API krb5_error_code SKRB_CALL krb5_free_host_realm (
    krb5_context                context,
    char * krb5_const *         realm_list);

SKRB_API void SKRB_CALL krb5_free_kdc_rep (
    krb5_context                ctx,
    krb5_kdc_rep *              rep);

SKRB_API void SKRB_CALL krb5_free_keyblock (
    krb5_context                ctx,
    krb5_keyblock *             key);

SKRB_API void SKRB_CALL krb5_free_keyblock_contents (
    krb5_context                ctx,
    krb5_keyblock *             key);

SKRB_API krb5_error_code SKRB_CALL krb5_free_krbhst (
    krb5_context                context,
    char * krb5_const *         hostlist);

SKRB_API void SKRB_CALL krb5_free_principal (
    krb5_context                ctx,
    krb5_principal              princ);

SKRB_API void SKRB_CALL krb5_free_string (
    krb5_context                ctx,
    char *                      string);

SKRB_API void SKRB_CALL krb5_free_tgt_creds (
    krb5_context                ctx,
    krb5_creds **               creds);

SKRB_API void SKRB_CALL krb5_free_ticket (
    krb5_context                ctx,
    krb5_ticket *               ticket);

SKRB_API void SKRB_CALL krb5_free_tickets (
    krb5_context                ctx,
    krb5_ticket **              tickets);

SKRB_API krb5_error_code SKRB_CALL krb5_gen_replay_name (
    krb5_context                context,
    krb5_const krb5_address *   inaddr,
    krb5_const char *           uniq,
    char **                     string);

SKRB_API krb5_error_code SKRB_CALL krb5_generate_seq_number (
    krb5_context                context,
    krb5_const krb5_keyblock *  key,
    krb5_int32 *                seqno);

SKRB_API krb5_error_code SKRB_CALL krb5_generate_subkey (
    krb5_context                context,
    krb5_const krb5_keyblock *  key,
    krb5_keyblock **            subkey);

SKRB_API krb5_error_code SKRB_CALL krb5_get_cred_from_kdc (
    krb5_context                context,
    krb5_ccache                 ccache,
    krb5_creds *                in_cred,
    krb5_creds **               out_cred,
    krb5_creds ***              tgts);

SKRB_API krb5_error_code SKRB_CALL krb5_get_cred_from_kdc_renew (
    krb5_context                context,
    krb5_ccache                 ccache,
    krb5_creds *                in_cred,
    krb5_creds **               out_cred,
    krb5_creds ***              tgts);

SKRB_API krb5_error_code SKRB_CALL krb5_get_cred_from_kdc_validate (
    krb5_context                context,
    krb5_ccache                 ccache,
    krb5_creds *                in_cred,
    krb5_creds **               out_cred,
    krb5_creds ***              tgts);

SKRB_API krb5_error_code SKRB_CALL krb5_get_cred_via_tkt (
    krb5_context                context,
    krb5_creds *                tkt,
    krb5_const krb5_flags       kdcoptions,
    krb5_address * krb5_const * address,
    krb5_creds *                in_cred,
    krb5_creds **               out_cred);

#define KRB5_GC_USER_USER       1       /* want user-user ticket */
#define KRB5_GC_CACHED          2       /* want cached ticket only */

SKRB_API krb5_error_code SKRB_CALL krb5_get_credentials (
    krb5_context                context,
    krb5_const krb5_flags       options,
    krb5_ccache                 ccache,
    krb5_creds *                in_cred,
    krb5_creds **               out_cred);

SKRB_API krb5_error_code SKRB_CALL krb5_get_credentials_renew (
    krb5_context                context,
    krb5_const krb5_flags       options,
    krb5_ccache                 ccache,
    krb5_creds *                in_cred,
    krb5_creds **               out_cred);

SKRB_API krb5_error_code SKRB_CALL krb5_get_credentials_validate (
    krb5_context                context,
    krb5_const krb5_flags       options,
    krb5_ccache                 ccache,
    krb5_creds *                in_cred,
    krb5_creds **               out_cred);

SKRB_API krb5_error_code SKRB_CALL krb5_get_default_in_tkt_ktypes (
    krb5_context                context,
    krb5_enctype **             ret_ktypes);

SKRB_API krb5_error_code SKRB_CALL krb5_get_default_realm (
    krb5_context                context,
    char **                     lrealm);

SKRB_API krb5_error_code SKRB_CALL krb5_get_default_tgs_ktypes (
    krb5_context                context,
    krb5_enctype **             ret_ktypes);

SKRB_API krb5_error_code SKRB_CALL krb5_get_host_realm (
    krb5_context                context,
    krb5_const char *           host,
    char ***                    realm_list);

SKRB_API krb5_error_code SKRB_CALL krb5_get_in_tkt_with_keytab (
    krb5_context                context,
    krb5_const krb5_flags       options,
    krb5_address * krb5_const * addrs,
    krb5_enctype *              ktypes,
    krb5_preauthtype *          pre_auth_types,
    krb5_const krb5_keytab      keytab,
    krb5_ccache                 ccache,
    krb5_creds *                creds,
    krb5_kdc_rep **             ret_as_reply);

SKRB_API krb5_error_code SKRB_CALL krb5_get_in_tkt_with_password (
    krb5_context                context,
    krb5_const krb5_flags       options,
    krb5_address * krb5_const * addrs,
    krb5_enctype *              ktypes,
    krb5_preauthtype *          pre_auth_types,
    krb5_const char *           password,
    krb5_ccache                 ccache,
    krb5_creds *                creds,
    krb5_kdc_rep **             ret_as_reply);

SKRB_API krb5_error_code SKRB_CALL krb5_get_in_tkt_with_skey (
    krb5_context                context,
    krb5_const krb5_flags       options,
    krb5_address * krb5_const * addrs,
    krb5_enctype *              ktypes,
    krb5_preauthtype *          pre_auth_types,
    krb5_const krb5_keyblock *  key,
    krb5_ccache                 ccache,
    krb5_creds *                creds,
    krb5_kdc_rep **             ret_as_reply);

SKRB_API krb5_error_code SKRB_CALL krb5_get_krbhst (
    krb5_context                context,
    krb5_const krb5_data *      realm,
    char ***                    hostlist_p);

SKRB_API krb5_error_code SKRB_CALL krb5_get_server_rcache (
    krb5_context                context,
    krb5_const krb5_data *      piece,
    krb5_rcache *               ret_rcache);

SKRB_API krb5_error_code SKRB_CALL krb5_init_context (
    krb5_context *              context);

SKRB_API krb5_error_code SKRB_CALL krb5_mk_error (
    krb5_context                context,
    krb5_const krb5_error *     dec_err,
    krb5_data *                 enc_err);

SKRB_API krb5_error_code SKRB_CALL krb5_mk_priv (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_const krb5_data *      userdata,
    krb5_data *                 outbuf,
    krb5_replay_data *          outdata);

SKRB_API krb5_error_code SKRB_CALL krb5_mk_rep (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_data *                 outbuf);

SKRB_API krb5_error_code SKRB_CALL krb5_mk_req (
    krb5_context                context,
    krb5_auth_context *         auth_context,
    krb5_const krb5_flags       ap_req_options,
    char *                      service,
    char *                      hostname,
    krb5_data *                 in_data,
    krb5_ccache                 ccache,
    krb5_data *                 outbuf);

SKRB_API krb5_error_code SKRB_CALL krb5_mk_req_extended (
    krb5_context                context,
    krb5_auth_context *         auth_context,
    krb5_const krb5_flags       ap_req_options,
    krb5_data *                 in_data,
    krb5_creds *                in_creds,
    krb5_data *                 outbuf);

SKRB_API krb5_error_code SKRB_CALL krb5_mk_safe (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_const krb5_data *      userdata,
    krb5_data *                 outbuf,
    krb5_replay_data *          outdata);

SKRB_API krb5_error_code SKRB_CALL krb5_os_hostaddr (
    krb5_context                context,
    krb5_const char *           name,
    krb5_address ***            ret_addrs);

SKRB_API krb5_error_code SKRB_CALL krb5_os_localaddr (
    krb5_context                context,
    krb5_address ***            ret_addrs);

SKRB_API krb5_error_code SKRB_CALL krb5_parse_name (
    krb5_context                context,
    krb5_const char *           name,
    krb5_principal *            nprincipal);

SKRB_API krb5_boolean SKRB_CALL krb5_principal_compare (
    krb5_context                context,
    krb5_const_principal        princ1,
    krb5_const_principal        princ2);

SKRB_API krb5_error_code SKRB_CALL krb5_rd_error (
    krb5_context                context,
    krb5_const krb5_data *      enc_err,
    krb5_error **               dec_err);

SKRB_API krb5_error_code SKRB_CALL krb5_rd_priv (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_const krb5_data *      inbuf,
    krb5_data *                 outbuf,
    krb5_replay_data *          outdata);

SKRB_API krb5_error_code SKRB_CALL krb5_rd_rep (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_const krb5_data *      inbuf,
    krb5_ap_rep_enc_part **     repl);

SKRB_API krb5_error_code SKRB_CALL krb5_rd_req (
    krb5_context                context,
    krb5_auth_context *         auth_context,
    krb5_const krb5_data *      inbuf,
    krb5_const_principal        server,
    krb5_keytab                 keytab,
    krb5_flags *                ap_req_options,
    krb5_ticket **              ticket);

SKRB_API krb5_error_code SKRB_CALL krb5_rd_req_verify (
    krb5_context                context,
    krb5_auth_context *         auth_context,
    krb5_const krb5_data *      inbuf,
    krb5_const krb5_data *      applbuf,
    krb5_const_principal        server,
    krb5_keytab                 keytab,
    krb5_flags *                ap_req_options,
    krb5_ticket **              ticket);

SKRB_API krb5_error_code SKRB_CALL krb5_rd_safe (
    krb5_context                context,
    krb5_auth_context           auth_context,
    krb5_const krb5_data *      inbuf,
    krb5_data *                 outbuf,
    krb5_replay_data *          outdata);

SKRB_API krb5_error_code SKRB_CALL krb5_read_password (
    krb5_context                context,
    krb5_const char *           prompt,
    krb5_const char *           prompt2,
    char *                      return_pwd,
    int *                       size_return);

SKRB_API krb5_boolean SKRB_CALL krb5_realm_compare (
    krb5_context                context,
    krb5_const_principal        princ1,
    krb5_const_principal        princ2);

SKRB_API krb5_error_code SKRB_CALL krb5_recvauth (
    krb5_context                context,
    krb5_auth_context *         auth_context,
    krb5_pointer                socket_descriptor,
    char *                      appl_version,
    krb5_principal              server,
    krb5_int32                  flags,
    krb5_keytab                 keytab,
    krb5_ticket **              ticket);

SKRB_API krb5_error_code SKRB_CALL krb5_sendauth (
    krb5_context                context,
    krb5_auth_context *         auth_context,
    krb5_pointer                socket_descriptor,
    char *                      appl_version,
    krb5_principal              client,
    krb5_principal              server,
    krb5_flags                  ap_req_options,
    krb5_data *                 appl_data,
    krb5_creds *                in_creds,
    krb5_ccache                 ccache,
    krb5_error **               error,
    krb5_ap_rep_enc_part **     rep_result,
    krb5_creds **               out_creds);

SKRB_API krb5_error_code SKRB_CALL krb5_set_config_files (
    krb5_context                ctx,
    krb5_const char **          filenames);

SKRB_API krb5_error_code SKRB_CALL krb5_set_default_in_tkt_ktypes (
    krb5_context                context,
    krb5_const krb5_enctype *   ktypes);

SKRB_API krb5_error_code SKRB_CALL krb5_set_default_realm (
    krb5_context                context,
    krb5_const char *           lrealm);

SKRB_API krb5_error_code SKRB_CALL krb5_set_default_tgs_ktypes (
    krb5_context                context,
    krb5_const krb5_enctype *   ktypes);

SKRB_API krb5_error_code SKRB_CALL krb5_sname_to_principal (
    krb5_context                context,
    krb5_const char *           hostname,
    krb5_const char *           sname,
    krb5_int32                  type,
    krb5_principal *            ret_princ);

SKRB_API krb5_error_code SKRB_CALL krb5_timeofday (
    krb5_context                context,
    krb5_timestamp *            timeret);

SKRB_API krb5_error_code SKRB_CALL krb5_us_timeofday (
    krb5_context                context,
    krb5_timestamp *            seconds,
    krb5_int32 *                microseconds);

SKRB_API krb5_error_code SKRB_CALL krb5_unparse_name (
    krb5_context                context,
    krb5_const_principal        principal,
    char **                     name);

SKRB_API krb5_error_code SKRB_CALL krb5_unparse_name_ext (
    krb5_context                context,
    krb5_const_principal        principal,
    char **                     name,
    int *                       size);


/*
 *  Cryptographic API
 */
SKRB_API krb5_error_code SKRB_CALL krb5_c_encrypt (
    krb5_context                context,
    const krb5_keyblock *       key,
    krb5_keyusage               usage,
    const krb5_data *           ivec,
    const krb5_data *           input,
    krb5_enc_data *             output);

SKRB_API krb5_error_code SKRB_CALL krb5_c_decrypt (
    krb5_context                context,
    const krb5_keyblock *       key,
    krb5_keyusage               usage,
    const krb5_data *           ivec,
    const krb5_enc_data *       input,
    krb5_data *                 output);

SKRB_API krb5_error_code SKRB_CALL krb5_c_encrypt_length (
    krb5_context                context,
    krb5_enctype                enctype,
    size_t                      inputlen,
    size_t *                    length);

SKRB_API krb5_error_code SKRB_CALL krb5_c_block_size (
    krb5_context                context,
    krb5_enctype                enctype,
    size_t *                    blocksize);

SKRB_API krb5_error_code SKRB_CALL krb5_c_make_random_key (
    krb5_context                context,
    krb5_enctype                enctype,
    krb5_keyblock *             random_key);

SKRB_API krb5_error_code SKRB_CALL krb5_c_random_make_octets (
    krb5_context                context,
    krb5_data *                 data);

SKRB_API krb5_error_code SKRB_CALL krb5_c_random_seed (
    krb5_context                context,
    krb5_data *                 data);

SKRB_API krb5_error_code SKRB_CALL krb5_c_string_to_key (
    krb5_context                context,
    krb5_enctype                enctype,
    const krb5_data *           string,
    const krb5_data *           salt,
    krb5_keyblock *             key);

SKRB_API krb5_error_code SKRB_CALL krb5_c_string_to_key_with_params (
    krb5_context                context,                        /*@A1A*/
    krb5_enctype                enctype,                        /*@A1A*/
    const krb5_data *           string,                         /*@A1A*/
    const krb5_data *           salt,                           /*@A1A*/
    const krb5_data *           s2kparams,                      /*@A1A*/
    krb5_keyblock *             key);                           /*@A1A*/

SKRB_API krb5_error_code SKRB_CALL krb5_c_enctype_compare (
    krb5_context                context,
    krb5_enctype                e1,
    krb5_enctype                e2,
    krb5_boolean *              similar);

SKRB_API krb5_error_code SKRB_CALL krb5_c_make_checksum (
    krb5_context                context,
    krb5_cksumtype              cksumtype,
    const krb5_keyblock *       key,
    krb5_keyusage               usage,
    const krb5_data *           input,
    krb5_checksum *             cksum);

SKRB_API krb5_error_code SKRB_CALL krb5_c_verify_checksum (
    krb5_context                context,
    const krb5_keyblock *       key,
    krb5_keyusage               usage,
    const krb5_data *           data,
    const krb5_checksum *       cksum,
    krb5_boolean *              valid);

SKRB_API krb5_error_code SKRB_CALL krb5_c_checksum_length (
    krb5_context                context,
    krb5_cksumtype              cksumtype,
    size_t *                    length);

SKRB_API krb5_error_code SKRB_CALL krb5_c_keyed_checksum_types (
    krb5_context                context,
    krb5_enctype                enctype,
    int *                       count,
    krb5_cksumtype **           cksumtypes);


/*
 *  Error codes
 */
/* KPASSWD protocol message errors */
#define KRB5_KPASSWD_SUCCESS        0   /* Password changed */
#define KRB5_KPASSWD_MALFORMED      1   /* Request is malformed */
#define KRB5_KPASSWD_HARDERROR      2   /* Server error */
#define KRB5_KPASSWD_AUTHERROR      3   /* Authentication error */
#define KRB5_KPASSWD_SOFTERROR      4   /* Password change rejected */

/* KDC protocol message errors */
#define KDC_ERR_NONE                 0  /* No error */
#define KDC_ERR_NAME_EXP             1  /* Client entry expired */
#define KDC_ERR_SERVICE_EXP          2  /* Server entry expired */
#define KDC_ERR_BAD_PVNO             3  /* pvno not supported */
#define KDC_ERR_C_OLD_MAST_KVNO      4  /* Client key encrypted in
                                           old master key */
#define KDC_ERR_S_OLD_MAST_KVNO      5  /* Server key encrypted in
                                           old master key */
#define KDC_ERR_C_PRINCIPAL_UNKNOWN  6  /* Client not found */
#define KDC_ERR_S_PRINCIPAL_UNKNOWN  7  /* Server not found */
#define KDC_ERR_PRINCIPAL_NOT_UNIQUE 8  /* Multiple entries */
#define KDC_ERR_NULL_KEY             9  /* Null key */
#define KDC_ERR_CANNOT_POSTDATE      10 /* Ticket ineligible for
                                           postdating */
#define KDC_ERR_NEVER_VALID          11  /* starttime > endtime */
#define KDC_ERR_POLICY               12  /* Rejected by KDC policy */
#define KDC_ERR_BADOPTION            13  /* Option not supported */
#define KDC_ERR_ENCTYPE_NOSUPP       14  /* Encryption type not
                                            supported */
#define KDC_ERR_SUMTYPE_NOSUPP       15  /* Checksum type not
                                            supported */
#define KDC_ERR_PADATA_TYPE_NOSUPP   16  /* PADATA type not
                                            supported */
#define KDC_ERR_TRTYPE_NOSUPP        17  /* Transited type not
                                            supported */
#define KDC_ERR_CLIENT_REVOKED       18  /* Client revoked */
#define KDC_ERR_SERVICE_REVOKED      19  /* Server revoked */
#define KDC_ERR_TGT_REVOKED          20  /* TGT revoked */
#define KDC_ERR_CLIENT_NOTYET        21  /* Client not valid yet */
#define KDC_ERR_SERVICE_NOTYET       22  /* Server not valid yet */
#define KDC_ERR_KEY_EXP              23  /* Password has expired */
#define KDC_ERR_PREAUTH_FAILED       24  /* Preauthentication
                                            failed */
#define KDC_ERR_PREAUTH_REQUIRED     25  /* Additional preauth
                                            required */
#define KDC_ERR_SERVER_NOMATCH       26  /* Requested server and
                                            ticket don't match */
#define KDC_ERR_MUST_USE_USER2USER   27  /* Server requres user-to-user
                                            TGS requests */
#define KDC_ERR_PATH_NOT_ACCEPTED    28  /* Transited path rejected */
#define KDC_ERR_SVC_UNAVAILABLE      29  /* Service not available */

/* Application errors */
#define KRB_AP_ERR_BAD_INTEGRITY     31  /* Decrypt integrity check
                                            failed */
#define KRB_AP_ERR_TKT_EXPIRED       32  /* Ticket expired */
#define KRB_AP_ERR_TKT_NYV           33  /* Ticket not yet valid */
#define KRB_AP_ERR_REPEAT            34  /* Request is a replay */
#define KRB_AP_ERR_NOT_US            35  /* The ticket isn't for us */
#define KRB_AP_ERR_BADMATCH          36  /* Ticket/authenticator don't
                                            match */
#define KRB_AP_ERR_SKEW              37  /* Clock skew too great */
#define KRB_AP_ERR_BADADDR           38  /* Incorrect net address */
#define KRB_AP_ERR_BADVERSION        39  /* Protocol version
                                            mismatch */
#define KRB_AP_ERR_MSG_TYPE          40  /* Invalid message type */
#define KRB_AP_ERR_MODIFIED          41  /* Message stream modified */
#define KRB_AP_ERR_BADORDER          42  /* Message out of order */
#define KRB_AP_ERR_ILL_CR_TKT        43  /* Illegal cross-realm tkt */
#define KRB_AP_ERR_BADKEYVER         44  /* Key version is not
                                            available */
#define KRB_AP_ERR_NOKEY             45  /* Service key not
                                            available */
#define KRB_AP_ERR_MUT_FAIL          46  /* Mutual authentication
                                            failed */
#define KRB_AP_ERR_BADDIRECTION      47  /* Incorrect message
                                            direction */
#define KRB_AP_ERR_METHOD            48  /* Alternative authentication
                                            method required */
#define KRB_AP_ERR_BADSEQ            49  /* Incorrect sequence numnber
                                            in message */
#define KRB_AP_ERR_INAPP_CKSUM       50  /* Inappropriate type of
                                            checksum in message */
#define KRB_AP_PATH_NOT_ACCEPTED     51  /* Transited path rejected */
#define KRB_ERR_RESPONSE_TOO_BIG     52  /* Response too big for UDP
                                            datagram */

/* Other errors */
#define KRB_ERR_GENERIC              60  /* Generic error */
#define KRB_ERR_FIELD_TOOLONG        61  /* Field is too long */


/*  KDC protocol errors  */
#define KRB5KDC_ERR_BASE                        0x96c73a00
#define KRB5KDC_ERR_NAME_EXP                    0x96c73a01
#define KRB5KDC_ERR_SERVICE_EXP                 0x96c73a02
#define KRB5KDC_ERR_BAD_PVNO                    0x96c73a03
#define KRB5KDC_ERR_C_OLD_MAST_KVNO             0x96c73a04
#define KRB5KDC_ERR_S_OLD_MAST_KVNO             0x96c73a05
#define KRB5KDC_ERR_C_PRINCIPAL_UNKNOWN         0x96c73a06
#define KRB5KDC_ERR_S_PRINCIPAL_UNKNOWN         0x96c73a07
#define KRB5KDC_ERR_PRINCIPAL_NOT_UNIQUE        0x96c73a08
#define KRB5KDC_ERR_NULL_KEY                    0x96c73a09
#define KRB5KDC_ERR_CANNOT_POSTDATE             0x96c73a0a
#define KRB5KDC_ERR_NEVER_VALID                 0x96c73a0b
#define KRB5KDC_ERR_POLICY                      0x96c73a0c
#define KRB5KDC_ERR_BADOPTION                   0x96c73a0d
#define KRB5KDC_ERR_ETYPE_NOSUPP                0x96c73a0e
#define KRB5KDC_ERR_SUMTYPE_NOSUPP              0x96c73a0f
#define KRB5KDC_ERR_PADATA_TYPE_NOSUPP          0x96c73a10
#define KRB5KDC_ERR_TRTYPE_NOSUPP               0x96c73a11
#define KRB5KDC_ERR_CLIENT_REVOKED              0x96c73a12
#define KRB5KDC_ERR_SERVICE_REVOKED             0x96c73a13
#define KRB5KDC_ERR_TGT_REVOKED                 0x96c73a14
#define KRB5KDC_ERR_CLIENT_NOTYET               0x96c73a15
#define KRB5KDC_ERR_SERVICE_NOTYET              0x96c73a16
#define KRB5KDC_ERR_KEY_EXP                     0x96c73a17
#define KRB5KDC_ERR_PREAUTH_FAILED              0x96c73a18
#define KRB5KDC_ERR_PREAUTH_REQUIRED            0x96c73a19
#define KRB5KDC_ERR_SERVER_NOMATCH              0x96c73a1a
#define KRB5KDC_ERR_MUST_USE_USER2USER          0x96c73a1b
#define KRB5KDC_ERR_PATH_NOT_ACCEPTED           0x96c73a1c
#define KRB5KDC_ERR_SVC_UNAVAILABLE             0x96c73a1d
#define KRB5KRB_AP_ERR_BAD_INTEGRITY            0x96c73a1f
#define KRB5KRB_AP_ERR_TKT_EXPIRED              0x96c73a20
#define KRB5KRB_AP_ERR_TKT_NYV                  0x96c73a21
#define KRB5KRB_AP_ERR_REPEAT                   0x96c73a22
#define KRB5KRB_AP_ERR_NOT_US                   0x96c73a23
#define KRB5KRB_AP_ERR_BADMATCH                 0x96c73a24
#define KRB5KRB_AP_ERR_SKEW                     0x96c73a25
#define KRB5KRB_AP_ERR_BADADDR                  0x96c73a26
#define KRB5KRB_AP_ERR_BADVERSION               0x96c73a27
#define KRB5KRB_AP_ERR_MSG_TYPE                 0x96c73a28
#define KRB5KRB_AP_ERR_MODIFIED                 0x96c73a29
#define KRB5KRB_AP_ERR_BADORDER                 0x96c73a2a
#define KRB5KRB_AP_ERR_ILL_CR_TKT               0x96c73a2b
#define KRB5KRB_AP_ERR_BADKEYVER                0x96c73a2c
#define KRB5KRB_AP_ERR_NOKEY                    0x96c73a2d
#define KRB5KRB_AP_ERR_MUT_FAIL                 0x96c73a2e
#define KRB5KRB_AP_ERR_BADDIRECTION             0x96c73a2f
#define KRB5KRB_AP_ERR_METHOD                   0x96c73a30
#define KRB5KRB_AP_ERR_BADSEQ                   0x96c73a31
#define KRB5KRB_AP_ERR_INAPP_CKSUM              0x96c73a32
#define KRB5KRB_AP_PATH_NOT_ACCEPTED            0x96c73a33
#define KRB5KRB_ERR_RESPONSE_TOO_BIG            0x96c73a34
#define KRB5KRB_ERR_GENERIC                     0x96c73a3c
#define KRB5KRB_ERR_FIELD_TOOLONG               0x96c73a3d

/*  Kerberos runtime errors  */
#define KRB5_LIBOS_BADLOCKFLAG                  0x96c73a81
#define KRB5_LIBOS_CANTREADPWD                  0x96c73a82
#define KRB5_LIBOS_BADPWDMATCH                  0x96c73a83
#define KRB5_LIBOS_PWDINTR                      0x96c73a84
#define KRB5_PARSE_ILLCHAR                      0x96c73a85
#define KRB5_PARSE_MALFORMED                    0x96c73a86
#define KRB5_CONFIG_CANTOPEN                    0x96c73a87
#define KRB5_CONFIG_BADFORMAT                   0x96c73a88
#define KRB5_CONFIG_NOTENUFSPACE                0x96c73a89
#define KRB5_BADMSGTYPE                         0x96c73a8a
#define KRB5_CC_BADNAME                         0x96c73a8b
#define KRB5_CC_UNKNOWN_TYPE                    0x96c73a8c
#define KRB5_CC_NOTFOUND                        0x96c73a8d
#define KRB5_CC_END                             0x96c73a8e
#define KRB5_NO_TKT_SUPPLIED                    0x96c73a8f
#define KRB5KRB_AP_WRONG_PRINC                  0x96c73a90
#define KRB5KRB_AP_ERR_TKT_INVALID              0x96c73a91
#define KRB5_PRINC_NOMATCH                      0x96c73a92
#define KRB5_KDCREP_MODIFIED                    0x96c73a93
#define KRB5_KDCREP_SKEW                        0x96c73a94
#define KRB5_IN_TKT_REALM_MISMATCH              0x96c73a95
#define KRB5_PROG_ETYPE_NOSUPP                  0x96c73a96
#define KRB5_PROG_KEYTYPE_NOSUPP                0x96c73a97
#define KRB5_WRONG_ETYPE                        0x96c73a98
#define KRB5_PROG_SUMTYPE_NOSUPP                0x96c73a99
#define KRB5_REALM_UNKNOWN                      0x96c73a9a
#define KRB5_SERVICE_UNKNOWN                    0x96c73a9b
#define KRB5_KDC_UNREACH                        0x96c73a9c
#define KRB5_NO_LOCALNAME                       0x96c73a9d
#define KRB5_MUTUAL_FAILED                      0x96c73a9e
#define KRB5_RC_TYPE_EXISTS                     0x96c73a9f
#define KRB5_RC_MALLOC                          0x96c73aa0
#define KRB5_RC_TYPE_NOTFOUND                   0x96c73aa1
#define KRB5_RC_UNKNOWN                         0x96c73aa2
#define KRB5_RC_REPLAY                          0x96c73aa3
#define KRB5_RC_IO                              0x96c73aa4
#define KRB5_RC_IO_EOF                          0x96c73aa7
#define KRB5_RC_IO_MALLOC                       0x96c73aa8
#define KRB5_RC_IO_PERM                         0x96c73aa9
#define KRB5_RC_IO_IO                           0x96c73aaa
#define KRB5_RC_IO_UNKNOWN                      0x96c73aab
#define KRB5_RC_IO_SPACE                        0x96c73aac
#define KRB5_CRYPTO_INTERNAL                    0x96c73ab2
#define KRB5_KT_BADNAME                         0x96c73ab3
#define KRB5_KT_UNKNOWN_TYPE                    0x96c73ab4
#define KRB5_KT_NOTFOUND                        0x96c73ab5
#define KRB5_KT_END                             0x96c73ab6
#define KRB5_KT_NOWRITE                         0x96c73ab7
#define KRB5_KT_IOERR                           0x96c73ab8
#define KRB5_NO_TKT_IN_RLM                      0x96c73ab9
#define KRB5DES_BAD_KEYPAR                      0x96c73aba
#define KRB5DES_WEAK_KEY                        0x96c73abb
#define KRB5_BAD_ENCTYPE                        0x96c73abc
#define KRB5_BAD_KEYSIZE                        0x96c73abd
#define KRB5_BAD_MSIZE                          0x96c73abe
#define KRB5_CC_TYPE_EXISTS                     0x96c73abf
#define KRB5_KT_TYPE_EXISTS                     0x96c73ac0
#define KRB5_CC_IO                              0x96c73ac1
#define KRB5_FCC_PERM                           0x96c73ac2
#define KRB5_FCC_NOFILE                         0x96c73ac3
#define KRB5_FCC_INTERNAL                       0x96c73ac4
#define KRB5_CC_WRITE                           0x96c73ac5
#define KRB5_CC_NOMEM                           0x96c73ac6
#define KRB5_CC_FORMAT                          0x96c73ac7
#define KRB5_CC_NOT_KTYPE                       0x96c73ac8      /*@A2A*/
#define KRB5_INVALID_FLAGS                      0x96c73ac8
#define KRB5_NO_2ND_TKT                         0x96c73ac9
#define KRB5_NOCREDS_SUPPLIED                   0x96c73aca
#define KRB5_SENDAUTH_BADAUTHVERS               0x96c73acb
#define KRB5_SENDAUTH_BADAPPLVERS               0x96c73acc
#define KRB5_SENDAUTH_BADRESPONSE               0x96c73acd
#define KRB5_SENDAUTH_REJECTED                  0x96c73ace
#define KRB5_PREAUTH_BAD_TYPE                   0x96c73acf
#define KRB5_PREAUTH_NO_KEY                     0x96c73ad0
#define KRB5_PREAUTH_FAILED                     0x96c73ad1
#define KRB5_RCACHE_BADVNO                      0x96c73ad2
#define KRB5_CCACHE_BADVNO                      0x96c73ad3
#define KRB5_KEYTAB_BADVNO                      0x96c73ad4
#define KRB5_PROG_ATYPE_NOSUPP                  0x96c73ad5
#define KRB5_RC_REQUIRED                        0x96c73ad6
#define KRB5_ERR_BAD_HOSTNAME                   0x96c73ad7
#define KRB5_ERR_HOST_REALM_UNKNOWN             0x96c73ad8
#define KRB5_SNAME_UNSUPP_NAMETYPE              0x96c73ad9
#define KRB5KRB_AP_ERR_V4_REPLY                 0x96c73ada
#define KRB5_REALM_CANT_RESOLVE                 0x96c73adb
#define KRB5_TKT_NOT_FORWARDABLE                0x96c73adc
#define KRB5_FWD_BAD_PRINCIPAL                  0x96c73add
#define KRB5_GET_IN_TKT_LOOP                    0x96c73ade
#define KRB5_CONFIG_NODEFREALM                  0x96c73adf
#define KRB5_KT_NAME_TOOLONG                    0x96c73ae1

#define KRB5_ERR_BAD_S2K_PARAMS                 0X96C73af4      /*@A2A*/

/*  Additional errors added for IBM Kerberos  */
#define KRB5KRB_ERR_LOAD_CODEPAGE               0x96c73c00
#define KRB5KRB_ERR_CODEPAGE_CONVERT            0x96c73c01
#define KRB5_NOMEM                              0x96c73c02
#define KRB5_TIMEOFDAY_UNKNOWN                  0x96c73c03
#define KRB5_KT_PERM                            0x96c73c04
#define KRB5_KT_INTERNAL                        0x96c73c05
#define KRB5_SOCKET_FAIL                        0x96c73c06
#define KRB5_SOCKET_IOCTL_FAIL                  0x96c73c07
#define KRB5_BAD_MAGIC                          0x96c73c08
#define KRB5_INVALID_PARAM                      0x96c73c09
#define KRB5_OP_NOT_SUPPORTED                   0x96c73c0a
#define KRB5_RC_NOFILE                          0x96c73c0b
#define KRB5_CC_NO_ACCESS                       0x96c73c0c
#define KRB5_RC_NO_ACCESS                       0x96c73c0d
#define KRB5_KT_NO_ACCESS                       0x96c73c0e
#define KRB5_NO_CONF                            0x96c73c0f
#define KRB5_SVC_MSG_NOT_FOUND                  0x96c73c10
#define KRB5_SERVER_UNREACH                     0x96c73c11
#define KRB5_KT_BAD_KVNO                        0x96c73c12
#define KRB5_SEND_ERROR                         0x96c73c13
#define KRB5_RECV_ERROR                         0x96c73c14
#define KRB5_CONNECT_CLOSED                     0x96c73c15
#define KRB5_BAD_PASSWORD                       0x96c73c16      /*@A1A*/
#define KRB5_RESPONSE_TOO_BIG                   0x96c73c17      /*@A1A*/
#define KRB5_S2KPARAMS_NOT_SUPPORTED            0x96c73c18      /*@A1A*/
#define KRB5_S2KPARAMS_OUT_OF_RANGE             0x96c73c19      /*@A1A*/
#define KRB5_AD_REJECT                          0x96c73c1A      /*@A1A*/

#define KRB5_CRYPTO_NOT_INSTALLED               0x96c73ce0
#define KRB5_MECHANISM_FAILURE                  0x96c73ce1
#define KRB5_PROF_INTERNAL                      0x96c73ce2


/* Error codes for ASN.1 encode/decode operations */
#define ASN1_BAD_TIMEFORMAT                     0x6eda3600
#define ASN1_MISSING_FIELD                      0x6eda3601
#define ASN1_MISPLACED_FIELD                    0x6eda3602
#define ASN1_TYPE_MISMATCH                      0x6eda3603
#define ASN1_OVERFLOW                           0x6eda3604
#define ASN1_OVERRUN                            0x6eda3605
#define ASN1_BAD_ID                             0x6eda3606
#define ASN1_BAD_LENGTH                         0x6eda3607
#define ASN1_BAD_FORMAT                         0x6eda3608
#define ASN1_PARSE_ERROR                        0x6eda3609
#define ASN1_SYSTEM_ERROR                       0x6eda3620      /*@A1A*/
#define ASN1_X509_NAME_ERROR                    0x6eda3621      /*@A1A*/
#define ASN1_X509_CERT_ERROR                    0x6eda3622      /*@A1A*/
#define ASN1_X509_CRL_ERROR                     0x6eda3623      /*@A1A*/

/* Error codes for profile operations */
#define PROF_NO_SECTION                         0xaaca6002
#define PROF_NO_RELATION                        0xaaca6003
#define PROF_ADD_NOT_SECTION                    0xaaca6004
#define PROF_SECTION_WITH_VALUE                 0xaaca6005
#define PROF_SECTION_NOTOP                      0xaaca6009
#define PROF_SECTION_SYNTAX                     0xaaca600a
#define PROF_RELATION_SYNTAX                    0xaaca600b
#define PROF_EXTRA_CBRACE                       0xaaca600c
#define PROF_MISSING_OBRACE                     0xaaca600d
#define PROF_BAD_NAMESET                        0xaaca6013
#define PROF_NO_PROFILE                         0xaaca6014

/*  GSS-API operations  */
#define G_BAD_SERVICE_NAME                      0x861b6d00
#define G_BAD_STRING_UID                        0x861b6d01
#define G_NOUSER                                0x861b6d02
#define G_VALIDATE_FAILED                       0x861b6d03
#define G_BUFFER_ALLOC                          0x861b6d04
#define G_BAD_MSG_CTX                           0x861b6d05
#define G_WRONG_SIZE                            0x861b6d06
#define G_BAD_USAGE                             0x861b6d07
#define G_UNKNOWN_QOP                           0x861b6d08
#define G_NO_HOSTNAME                           0x861b6d09
#define G_WRONG_MECH                            0x861b6d0a
#define G_BAD_TOK_HEADER                        0x861b6d0b
#define G_BAD_DIRECTION                         0x861b6d0c
#define G_BAD_CONTEXT_ID                        0x861b6d40      /*@A1A*/
#define G_BAD_CRED_ID                           0x861b6d41      /*@A1A*/
#define G_MECH_CRED_NOT_AVAILABLE               0x861b6d42      /*@A1A*/
#define G_NO_COMMON_NAME                        0x861b6d43      /*@A1A*/
#define G_NOT_MECH_NAME                         0x861b6d44      /*@A1A*/
#define G_NO_MECH_NAME                          0x861b6d45      /*@A1A*/
#define G_CONTEXT_ESTABLISHED                   0x861b6d46      /*@A1A*/
#define G_CONTEXT_BAD_USAGE                     0x861b6d47      /*@A1A*/
#define G_ANON_NAME_NOT_ALLOWED                 0x861b6d48      /*@A1A*/
#define G_WRONG_CONTEXT                         0x861b6d49      /*@A1A*/
#define G_CONTEXT_NOT_ESTABLISHED               0x861b6d4a      /*@A1A*/
#define G_NO_INTEG                              0x861b6d4b      /*@A1A*/
#define G_UNAVAILABLE_QOP                       0x861b6d4c      /*@A1A*/
#define G_MESSAGE_OUT_OF_ORDER                  0x861b6d51
#define G_MESSAGE_OMITTED                       0x861b6d52
#define G_MESSAGE_ALREADY_SEEN                  0x861b6d53
#define G_MESSAGE_LATE                          0x861b6d54
#define G_BAD_SIGNATURE                         0x861b6d55
#define G_DUPLICATE_MECH                        0x861b6d56
#define G_CONTEXT_EXPIRED                       0x861b6d57
#define G_UNEXPECTED_TOKEN                      0x861b6d58
#define G_CRED_EXPIRED                          0x861b6d59
#define G_PARAM_REQUIRED                        0x861b6d5a
#define G_BAD_INTERNAL_NAME                     0x861b6d5b
#define G_NAME_REQUIRED                         0x861b6d5c
#define G_MECH_REQUIRED                         0x861b6d5d
#define G_UNSUPPORTED_NAME_TYPE                 0x861b6d5e
#define G_BAD_NAME                              0x861b6d5f
#define G_UNSUPPORTED_MECHANISM                 0x861b6d60
#define G_BAD_STATUS_TYPE                       0x861b6d61
#define G_BAD_STATUS_VALUE                      0x861b6d62
#define G_BAD_OID_ENCODING                      0x861b6d63

/*  Kerberos mechanism  */
#define KG_CCACHE_NOMATCH                       0x025ea100
#define KG_KEYTAB_NOMATCH                       0x025ea101
#define KG_TGT_MISSING                          0x025ea102
#define KG_CONTEXT_ESTABLISHED                  0x025ea104
#define KG_BAD_SIGN_TYPE                        0x025ea105
#define KG_BAD_LENGTH                           0x025ea106
#define KG_CTX_INCOMPLETE                       0x025ea107
#define KG_CONTEXT                              0x025ea108
#define KG_CRED                                 0x025ea109
#define KG_BAD_SEQ                              0x025ea10b
#define KG_BAD_PADDING                          0x025ea140
#define KG_NO_CONF                              0x025ea141
#define KG_BAD_SEAL_TYPE                        0x025ea142
#define KG_SHORT_TOKEN                          0x025ea143
#define KG_ETYPE_UNKNOWN                        0x025ea144
#define KG_NULL_KEY                             0x025ea145
#define KG_BINDINGS_MISMATCH                    0x025ea146
#define KG_BAD_CKSUM                            0x025ea147
#define KG_INVALID_CONTEXT_STATE                0x025ea148
#define KG_LOCKING_ERROR                        0x025ea149
#define KG_MECH_CRED_NOT_AVAILABLE              0x025ea14a
#define KG_NO_MECHANISM_NAME                    0x025ea14b

/*
 *  Values for the 'magic' fields
 */
#define KV5M_NONE                               0x970ea700
#define KV5M_PRINCIPAL                          0x970ea701
#define KV5M_DATA                               0x970ea702
#define KV5M_KEYBLOCK                           0x970ea703
#define KV5M_CHECKSUM                           0x970ea704
#define KV5M_ENCRYPT_BLOCK                      0x970ea705
#define KV5M_ENC_DATA                           0x970ea706
#define KV5M_CRYPTOSYSTEM_ENTRY                 0x970ea707
#define KV5M_CS_TABLE_ENTRY                     0x970ea708
#define KV5M_CHECKSUM_ENTRY                     0x970ea709
#define KV5M_AUTHDATA                           0x970ea70a
#define KV5M_TRANSITED                          0x970ea70b
#define KV5M_ENC_TKT_PART                       0x970ea70c
#define KV5M_TICKET                             0x970ea70d
#define KV5M_AUTHENTICATOR                      0x970ea70e
#define KV5M_TKT_AUTHENT                        0x970ea70f
#define KV5M_CREDS                              0x970ea710
#define KV5M_LAST_REQ_ENTRY                     0x970ea711
#define KV5M_PA_DATA                            0x970ea712
#define KV5M_KDC_REQ                            0x970ea713
#define KV5M_ENC_KDC_REP_PART                   0x970ea714
#define KV5M_KDC_REP                            0x970ea715
#define KV5M_ERROR                              0x970ea716
#define KV5M_AP_REQ                             0x970ea717
#define KV5M_AP_REP                             0x970ea718
#define KV5M_AP_REP_ENC_PART                    0x970ea719
#define KV5M_RESPONSE                           0x970ea71a
#define KV5M_SAFE                               0x970ea71b
#define KV5M_PRIV                               0x970ea71c
#define KV5M_PRIV_ENC_PART                      0x970ea71d
#define KV5M_CRED                               0x970ea71e
#define KV5M_CRED_INFO                          0x970ea71f
#define KV5M_CRED_ENC_PART                      0x970ea720
#define KV5M_PWD_DATA                           0x970ea721
#define KV5M_ADDRESS                            0x970ea722
#define KV5M_KEYTAB_ENTRY                       0x970ea723
#define KV5M_CONTEXT                            0x970ea724
#define KV5M_OS_CONTEXT                         0x970ea725
#define KV5M_ALT_METHOD                         0x970ea726
#define KV5M_ETYPE_INFO_ENTRY                   0x970ea727
#define KV5M_DB_CONTEXT                         0x970ea728
#define KV5M_AUTH_CONTEXT                       0x970ea729
#define KV5M_KEYTAB                             0x970ea72a
#define KV5M_RCACHE                             0x970ea72b
#define KV5M_CCACHE                             0x970ea72c
#define KV5M_PREAUTH_OPS                        0x970ea72d
#define KV5M_SAM_CHALLENGE                      0x970ea72e
#define KV5M_SAM_KEY                            0x970ea72f
#define KV5M_ENC_SAM_RESPONSE_ENC               0x970ea730
#define KV5M_SAM_RESPONSE                       0x970ea731
#define KV5M_PREDICTED_SAM_RESPONSE             0x970ea732
#define KV5M_PASSWD_PHRASE_ELEMENT              0x970ea733

/*  Additional definitions for IBM Kerberos  */
#define KV5M_CC_OPS                             0x970ea800
#define KV5M_KT_OPS                             0x970ea801
#define KV5M_RC_OPS                             0x970ea802
#define KV5M_REPLAY                             0x970ea803
#define KV5M_FULLADDR                           0x970ea804
#define KV5M_PROF_NODE                          0x970ea805
#define KV5M_PROFILE                            0x970ea806
#define KV5M_PROF_FILE                          0x970ea807
#define KV5M_SEC_CONTEXT                        0x970ea808
#define KV5M_DB_ENTRY                           0x970ea809
#define KV5M_SEC_CRED                           0x970ea80a
#define KV5M_POLICY_DB_ENTRY                    0x970ea80b
#define KV5M_HISTORY_DB_ENTRY                   0x970ea80c
#define KV5M_REALM_POLICY                       0x970ea80d


/*
 *  Additional API functions added for IBM Kerberos
 */
SKRB_API void SKRB_CALL krb5_md4_crypto_compat_ctl (
    krb5_boolean                compat_mode);

SKRB_API void SKRB_CALL krb5_md5_crypto_compat_ctl (
    krb5_boolean                compat_mode);

SKRB_API krb5_error_code SKRB_CALL krb5_random_confounder (
    krb5_context                context,
    int                         size,
    krb5_pointer                fillin);

SKRB_API krb5_error_code SKRB_CALL krb5_svc_get_msg (
    krb5_const krb5_ui_4        msg_id,
    char **                     msg_text);

#if (defined(S390) || defined(MVS))
SKRB_API krb5_error_code SKRB_CALL krb5_get_in_tkt_system (
    krb5_context                context,
    krb5_const krb5_flags       options,
    krb5_address * krb5_const * addrs,
    krb5_enctype *              ktypes,
    krb5_ccache                 ccache,
    krb5_creds *                creds,
    krb5_kdc_rep **             ret_as_reply);
#endif

#ifdef __cplusplus
}
#endif

#endif
