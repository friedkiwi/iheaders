/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1997, 2005                                */
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
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:  ldap.h                                        */
/*                                                                   */
/*  Descriptive Name:  ldap header file                              */
/*                                                                   */
/*  Description:  Defines variables, structures, and function        */
/*                prototypes for ldap.                               */
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
/*  Header Files Included :  lber.h, sys/time.h                      */
/*                                                                   */
/*  Function Prototype List:                                         */
/*                                                                   */
/*    - ldap_abandon            : cancel uncompleted ldap operation  */
/*    - ldap_add                : ldap add entry                     */
/*    - ldap_add_s              : ldap add entry (synchronously)     */
/*    - ldap_bind               : initiate ldap bind operation       */
/*    - ldap_bind_s             : initiate ldap bind (synchronously) */
/*    - ldap_compare            : compare entry attribute value      */
/*    - ldap_compare_s          : compare entry attribute value      */
/*    - ldap_count_attributes   : return # of attributes of an entry */
/*    - ldap_count_entries      : Count # of entries in ldap result  */
/*    - ldap_count_values       : # returned by ldap_get_values      */
/*    - ldap_count_values_len   : # returned by ldap_get_values_len  */
/*    - ldap_app_ssl_start_np   : start using dig cert mgr       @A1A*/
/*    - ldap_delete             : delete entry                       */
/*    - ldap_delete_s           : delete entry (sync)                */
/*    - ldap_err2string         : retrieve error message string      */
/*    - ldap_explode_dn         : Breaks up a distinguished name     */
/*    - ldap_first_attribute    : Returns first attribute of an entry*/
/*    - ldap_first_entry        : Get first entry in a result chain  */
/*    - ldap_free_urldesc       : frees url description structure    */
/*    - ldap_get_dn             : Get distinguised name of an entry  */
/*    - ldap_get_errno          : retrieve ldap error information    */
/*    - ldap_get_option         : Get current ldap session option    */
/*    - ldap_get_values         : get set of attribute values        */
/*    - ldap_get_values_len     : retrieve set of binary attributes  */
/*    - ldap_init               : initialize ldap session            */
/*    - ldap_is_ldap_url        : checks string for ldap url         */
/*    - ldap_memfree            : free ldap API function memory      */
/*    - ldap_modify             : modify an entry                    */
/*    - ldap_modify_s           : modify an entry (synchronously)    */
/*    - ldap_modrdn             : change the name of an entry        */
/*    - ldap_modrdn_s           : change name of an entry (sync)     */
/*    - ldap_mods_free          : free array of modify structures    */
/*    - ldap_msgfree            : free ldap result message           */
/*    - ldap_next_attribute     : return next attribute of an entry  */
/*    - ldap_next_entry         : Get next entry in a result chain   */
/*    - ldap_open               : initialize ldap session            */
/*    - ldap_perror             : print error message                */
/*    - ldap_result             : retrieve result of an asynchronous */
/*                                ldap operation                     */
/*    - ldap_result2error       : retrieve error code                */
/*    - ldap_search             : initiate ldap search               */
/*    - ldap_search_s           : initiate synchronous ldap search   */
/*    - ldap_search_st          : initiate a timed ldap search       */
/*    - ldap_set_option         : Set current ldap session option    */
/*    - ldap_set_rebind_proc    : set client rebind procedure        */
/*    - ldap_simple_bind        : initiate ldap bind operation       */
/*    - ldap_simple_bind_s      : initiate ldap bind (synchronously) */
/*    - ldap_ssl_start          : start secure connection to server  */
/*    - ldap_unbind             : close an ldap session              */
/*    - ldap_unbind_s           : close an ldap session              */
/*    - ldap_url_parse          : parses an ldap url                 */
/*    - ldap_url_search         : search ldap directory based on     */
/*                                contents of ldap url               */
/*    - ldap_url_search_s       : synchronous ldap search            */
/*    - ldap_url_search_st      : timed synchronous ldap search      */
/*    - ldap_value_free         : frees ldap_get_values memory       */
/*    - ldap_value_free_len     : frees ldap_get_values_len memory   */
/*                                                                   */
/*    LDAP V3 APIs                                                   */
/*                                                                   */
/*    - ldap_abandon_ext        : cancel uncompleted ldap operation  */
/*                                with controls                      */
/*    - ldap_add_ext            : ldap add entry with controls       */
/*    - ldap_add_ext_s          : ldap add entry (synchronously)     */
/*                                with controls                      */
/*    - ldap_app_ssl_client_init_np : Init client using app id       */
/*                                    @A6A                           */
/*    - ldap_app_ssl_init_np   : Init client with NULL parms for ssl */
/*                               @A6A                                */
/*    - ldap_ber_free           : free storage allocated for         */
/*                                BerElement                         */
/*    - ldap_compare_ext        : compare entry attribute value      */
/*                                with controls                      */
/*    - ldap_compare_ext_s      : compare entry attribute value      */
/*                                (synchronously) with controls      */
/*    - ldap_control_free       : Free a single LDAPControl structure*/
/*    - ldap_controls_free      : Free an array of LDAPControl struc.*/
/*    - ldap_count_messages     : Return number of messages in result*/
/*    - ldap_count_references   : Return number of continuation ref. */
/*    - ldap_default_dn_get     : Retrieve the User's Default DN     */
/*    - ldap_default_dn_set     : Store the User's Default DN        */
/*    - ldap_delete_ext         : delete entry with controls         */
/*    - ldap_delete_ext_s       : delete entry (synchronously)       */
/*                              : with controls                      */
/*    - ldap_dn2ufn            : Change DN to user friendly format.  */
/*                               @A6A                                */
/*    - ldap_enetwork_domain_get : Retrieve the User's Default       */
/*                                 eNetwork Domain Name              */
/*    - ldap_enetwork_domain_set : Store the User's Default eNetwork */
/*                                 Domain Name                       */
/*    - ldap_extended_operation  : Extended Operations               */
/*                                 @A6A                              */
/*    - ldap_extended_operation_s : Extended Operations Sync         */
/*                                  @A6A                             */
/*    - ldap_explode_dns       : Break up the DN from a DNS server   */
/*                               @A6A                                */
/*    - ldap_explode_rdn        : Convert a RDN into its component   */
/*    - ldap_first_message      : Return first message in a result   */
/*    - ldap_first_reference    : Return first continuation reference*/
/*    - ldap_get_entry_controls_np : Extr. server controls from entry*/
/*    - ldap_get_lderrno         : Get errno from the ld             */
/*                                 @A6A                              */
/*    - ldap_get_exterror        : Get any errors returned by SKIT   */
/*                                 @A6A                              */
/*    - ldap_get_iconv_local_codepage : Get the Active LDAP Code Page*/
/*    - ldap_get_locale         : Get Active LDAP Locale             */
/*    - ldap_modify_ext         : modify an entry with controls      */
/*    - ldap_modify_ext_s       : modify an entry (synchronously)    */
/*                                with controls                      */
/*    - ldap_msgid              : Returns the message ID             */
/*    - ldap_msgtype            : Returns the type of an LDAP message*/
/*    - ldap_next_message       : Return the next message in a result*/
/*    - ldap_next_reference     : Return the next continuation ref.  */
/*    - ldap_parse_extended_result : Parse Extended Op Result        */
/*                                    @A6A                           */
/*    - ldap_parse_reference_np : Extr. information from a reference */
/*    - ldap_parse_result       : Extract information from results   */
/*    - ldap_parse_sasl_bind_result : Extract server credentials     */
/*                                    from SASL bind results         */
/*    - ldap_rename             : rename an entry                    */
/*    - ldap_rename_s           : rename an entry (synchronously)    */
/*    - ldap_sasl_bind          : bind using SASL (asynchronously)   */
/*    - ldap_sasl_bind_s        : bind using SASL (synchronously)    */
/*    - ldap_search_ext         : search the directory using controls*/
/*    - ldap_search_ext_s       : search using controls (sync.)      */
/*    - ldap_server_conf_save   : Store Server Information           */
/*    - ldap_server_free_list   : Free the List of LDAP Servers      */
/*    - ldap_server_locate      : Locate Suitable LDAP Servers       */
/*    - ldap_set_iconv_local_charset : Set Active LDAP Character Set */
/*    - ldap_set_iconv_local_codepage : Set Active LDAP Codepage Set */
/*    - ldap_set_lderrno        : Set errno in the ld                */
/*                                @A6A                               */
/*    - ldap_set_locale         : Change the Locale Used by LDAP     */
/*    - ldap_ssl_client_init    : Initializes the SSL library        */
/*    - ldap_ssl_init           : Initializes an SSL connection      */
/*    - ldap_version            : Get LDAP version & SSL cipher info.*/
/*    - ldap_xlate_local_to_unicode : Convert String local CP to UCS2*/
/*    - ldap_xlate_local_to_utf8 : Convert String local CP to UTF8   */
/*    - ldap_xlate_unicode_to_local : Convert String UCS2 to local CP*/
/*    - ldap_xlate_utf8_to_local : Convert String UTF8 to local CP   */
/*    - ldap_explode_dn_utf8   : UTF8 String input/output explode_dn */
/*    - ldap_explode_rdn_utf8  : UTF8 String input/output explode_rdn*/
/*    - ldap_url_parse_utf8    : UTF8 String input/output url_parse  */
/*    - ldap_unbind_ext        : Unbind ldap with controls           */
/*                                @A6A                               */
/*                                @A8A                               */
/*    - ldap_pwdpolicy_err2string : retrieve pwd policy error        */
/*                                  message string                   */
/*    - ldap_create_sort_keylist : Create keylist for sort control   */
/*    - ldap_free_sort_keylist   : Free keylist for sort control     */
/*    - ldap_create_sort_control : Create control for sorted results */
/*    - ldap_parse_sort_control  : Parse result of sort              */
/*    - ldap_create_page_control : Create control for paged results  */
/*    - ldap_parse_page_control  : Parse result of paging            */
/*                                @A8A                               */
/*    - ldap_ssl_environment_init: Initialize SSL env.          @A9A */
/*    - ldap_start_tls_s_np      : Start TLS session.           @A9A */
/*    - ldap_stop_tls_s_np       : Stop TLS session.            @A9A */
/*    - ldap_start_tls_app_np    : Start TLS using app id.      @A9A */
/*    - ldap_get_bind_controls   : Get bind controls                 */
/*    - ldap_create_proxyauth_control : Create proxyauth control     */
/*    - ldap_is_ldap_url_utf8    : checks UTF8 string for ldap url   */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List :                                                       */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D9543.1      4D30  070997  ROCH      New Include            */
/*  $A1=              4D40  081098  CAR       dcm support            */
/*  $A2= P3690175     4P40  012799  CAR       add additional error   */
/*                                            codes                  */
/*  $A3= P3693594     4P50  050599  ROCH      v3 apis and defines    */
/*  $A4= P9907223     4P50  101299  ROCH      dn/rdn/url _utf8 apis  */
/*  $A5= D98212.2    v5r1m0 010300 gchaney:   Teraspace stage 2      */
/*  $A6= D98328.3    v5r1m0 052200  ROCH      New LDAP support       */
/*  $A7= D98606      v5r2m0 123101  ROCH      New LDAP support       */
/*  $A8= D99285      v5r3m0 101202  ROCH      New LDAP support       */
/*  $A9= D99827.5    v5r4m0 083004  ROCH      TLS support            */
/*  $B0= P9A90694    v5r4m0 052405  ROCH      AES-256 cipher support */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _LDAP_H
#define _LDAP_H

#ifdef __cplusplus
extern "C" {
#endif

#include <lber.h>
#include <sys/time.h>					/* @A6A*/

#if (__OS400_TGTVRM__>=510)				/* @A5A*/
    #pragma datamodel(P128)				/* @A5A*/
#endif							/* @A5A*/

#define LDAP_URL_PREFIX			"ldap://"	/* @A6A*/
#define LDAPS_URL_PREFIX		"ldaps://"	/* @A6A*/

#define LDAP_FALSE   0
#define LDAP_TRUE    1

/* change flag @A3 */
#define  LDAPHOME                "undefined"
#define  LDAP_LIBEXT             "srvpgm"
#define  LDAP_DEFAULT_LOCPATH    "undefined"
#define  LDAP_CONFIG_DIR         "undefined"

#define LDAP_VERSION2	2
#define LDAP_VERSION3     3

/* change flag @A3 */
#ifdef LDAPV3
  #define LDAP_VERSION    LDAP_VERSION3
#else
  #define LDAP_VERSION    LDAP_VERSION2
#endif

/* For compatibility with Netscape & Novel */
/* to retrieve Information at compile Time */
#define LDAP_SPEC_VERSION	4			/* @A6A*/
#define LDAP_API_VERSION	2000+LDAP_SPEC_VERSION   /* RFC compliance */
#define LDAP_VERSION_MIN	2			/* @A6A*/
#define LDAP_VERSION_MAX	3			/* @A6A*/
#define LDAP_VENDOR_NAME	"International Business Machines Corp."	
#define LDAP_VENDOR_VERSION	510	/* LDAP V 5.1  @A6A @A7C @A8C */

#define LDAP_API_INFO_VERSION		1		/* @A6A*/
#define LDAP_FEATURE_INFO_VERSION	1		/* @A6A*/

/* For search attrs */
#define LDAP_ROOT_DSE           ""			/* @A6A*/
#define LDAP_NO_ATTRS           "1.1"			/* @A6A*/
#define LDAP_ALL_USER_ATTRS     "*"			/* @A6A*/

#define LDAP_PORT	389
#define LDAPS_PORT	636

/* Define the Ports for the Admin Daemon */
/* as registered with IANA @A8A */
#define ADMIN_PORT   3538
#define ADMINS_PORT  3539

#define LDAP_NOTICE_OF_DISCONNECTION	"1.3.6.1.4.1.1466.20036" /* @A6A*/
#define LDAP_MAX_ATTR_LEN	100

/* change flag @A3 */
#define LDAP_CODESET_UTF8            "UTF-8"
#define LDAP_CODESET_UNICODE         "UCS-2"

/* possible result types a server can return */
#define LDAP_RES_BIND			0x61L	/* application + constructed */
#define LDAP_RES_SEARCH_ENTRY		0x64L	/* application + constructed */
#define LDAP_RES_SEARCH_RESULT		0x65L	/* application + constructed */
#define LDAP_RES_MODIFY 		0x67L	/* application + constructed */
#define LDAP_RES_ADD			0x69L	/* application + constructed */
#define LDAP_RES_DELETE 		0x6bL	/* application + constructed */
#define LDAP_RES_MODRDN 		0x6dL	/* application + constructed */
#define LDAP_RES_COMPARE		0x6fL	/* application + constructed */
#define LDAP_RES_SEARCH_REFERENCE	0X73L	/* application + constructed */
#define LDAP_RES_EXTENDED		0X78L	/* application + constructed */
#define LDAP_EXTENDED_RES_NAME		0X8aL	/* context specific+primitive*/
#define LDAP_EXTENDED_RES_VALUE		0X8bL	/* context specific+primitive*/
#define LDAP_RES_REFERRAL		0Xa3L /* context specific+constructed*/
#define LDAP_RES_ANY			(-1L)

/* authentication methods available */
#define LDAP_AUTH_NONE 		0x00L			/* @A6A*/
#define LDAP_AUTH_SIMPLE	0x80L		/* context specific+primitive*/
#define LDAP_AUTH_KRBV41	0x81L			/* @A6A*/
#define LDAP_AUTH_KRBV42	0x82L			/* @A6A*/
#define LDAP_AUTH_KRBV4		0xffL			/* @A6A*/
#define LDAP_AUTH_SASL		0xa3L		/* for alliance support @A6A*/
#define LDAP_AUTH_SASL_30	0xa3L			/* @A6A*/
#define LDAP_SASL_SIMPLE	""			/* @A6A*/
#define LDAP_SASL_CRAM_MD5	"CRAM-MD5"		/* @A6A*/
#define LDAP_SASL_EXTERNAL	"EXTERNAL"		/* @A6A*/
#define LDAP_SASL_OS400_PRFTKN	"OS400-PRFTKN"		/* @A8A*/

/* password policy warning/error results @A8A */
#define LDAP_PWDPOLICY_WARNING	0x80L
#define LDAP_PWDPOLICY_ERROR	0x81L
#define LDAP_PWDPOLICY_TIME_WARNING 0x80L
#define LDAP_PWDPOLICY_GRACE_WARNING 0x81L

/* search scopes */
#define LDAP_SCOPE_BASE 	0x00
#define LDAP_SCOPE_ONELEVEL	0x01
#define LDAP_SCOPE_SUBTREE	0x02

/* ldap_result() all parameter */

#define LDAP_MSG_ONE	 	0x00			/* @A6A*/
#define LDAP_MSG_ALL		0x01			/* @A6A*/
#define LDAP_MSG_RECEIVED	0x02			/* @A6A*/

/* bind constants */
#define LDAP_MECHANISM_EXTERNAL           "EXTERNAL"	/* @A6A*/
#define LDAP_MECHANISM_CRAM_MD5		  "CRAM-MD5"	/* @A6A*/
#define LDAP_MECHANISM_GSSAPI		  "GSSAPI"	/* @A6A*/
#define LDAP_MECHANISM_OS400_PRFTKN	  "OS400-PRFTKN"	/* @A8A*/
#define LDAP_MECHANISM_DIGEST_MD5         "DIGEST-MD5"

/* for modifications */
typedef struct ldapmod {
	int		mod_op;
#define LDAP_MOD_ADD		0x00
#define LDAP_MOD_DELETE 	0x01
#define LDAP_MOD_REPLACE	0x02
#define LDAP_MOD_BVALUES	0x80
	char		*mod_type;
	union mod_vals_u {				/*@A6C*/
		char		**modv_strvals;
		struct berval	**modv_bvals;
	} mod_vals;
#define mod_values	mod_vals.modv_strvals
#define mod_bvalues	mod_vals.modv_bvals
	struct ldapmod	*mod_next;
} LDAPMod;

/*
 * options that can be set/gotten
 */
#define LDAP_OPT_SIZELIMIT	0x00
#define LDAP_OPT_TIMELIMIT	0x01
#define LDAP_OPT_REFERRALS	0x00000002
#define LDAP_OPT_DEREF		0x03
#define LDAP_OPT_RESTART	0x00000004
#define LDAP_OPT_REFHOPLIMIT	0x05
#define LDAP_OPT_DEBUG              0x06
#define LDAP_OPT_SSL_CIPHER	0x07
#define LDAP_OPT_SSL_TIMEOUT	0x08

/* change flag @A3 */
#define LDAP_OPT_REBIND_FN          0x09
#define LDAP_OPT_SSL                0x0A
#define LDAP_OPT_TLS                0x0B		/* @A9A*/
#define LDAP_OPT_PROTOCOL_VERSION   0x11
#define LDAP_OPT_SERVER_CONTROLS    0x12
#define LDAP_OPT_CLIENT_CONTROLS    0x13
#define LDAP_OPT_API_INFO	    0x14		/* @A6A*/
#define LDAP_OPT_API_FEATURE_INFO   0x15		/* @A6A*/
#define LDAP_OPT_HOST_NAME          0x30
#define LDAP_OPT_ERROR_NUMBER       0x31
#define LDAP_OPT_ERROR_STRING       0x32
#define LDAP_OPT_EXT_ERROR          0x33
#define LDAP_OPT_SUPPRESS_CLIENT_AUTH	0x34		/* @A6A*/
#define LDAP_OPT_REFERRAL_HOP_LIMIT	0x35	/* for alliance support */
#define LDAP_OPT_DELEGATION		0x36		/* @A6A*/
#define LDAP_OPT_EXT_GSS_ERR    0x37
#define LDAP_OPT_CERTIFICATE_COMMON_NAME    0x39
#define LDAP_OPT_SECURE  0x45

#define LDAP_OPT_UTF8_IO            0xE0
#define LDAP_OPT_UTF8_XLATE         0xE1
#define LDAP_OPT_LOCALE             0xE2
/* option value for no size limit or no time limit on searches */
#define LDAP_OPT_LCS                0x0F

/* option value for no size limit or no time limit on searches */
#define LDAP_NO_LIMIT               0

/* option values for binary options */
#define LDAP_OPT_ON		0x01
#define LDAP_OPT_OFF		0x00

/* option values for utf8 xlates */
#define LDAP_UTF8_XLATE_OFF     0x01
#define LDAP_UTF8_XLATE_ON      0x00

/* option values for dereferencing aliases */
#define LDAP_DEREF_NEVER 	0
#define LDAP_DEREF_SEARCHING	1
#define LDAP_DEREF_FINDING 	2
#define LDAP_DEREF_ALWAYS	3

/* default limit on nesting of referrals */
#define LDAP_DEFAULT_REFHOPLIMIT   10

/* options for SSL ciphers */
#define LDAP_SSL_RC4_MD5_EX	"03"
#define LDAP_SSL_RC2_MD5_EX	"06"
#define LDAP_SSL_RC4_SHA_US	"05"
#define LDAP_SSL_RC4_MD5_US	"04"
#define LDAP_SSL_DES_SHA_US	"09"
#define LDAP_SSL_3DES_SHA_US	"0A"
#define LDAP_SSL_AES_SHA_US     "2F"		/* @A7A*/
#define LDAP_SSL_AES_128_SHA_US     "2F"	/* @B0A*/
#define LDAP_SSL_AES_256_SHA_US     "35"	/* @B0A*/

/* options for debug levels */				/* @A7A*/
#define LDAP_DEBUG_OFF			0x0000		/* @A7A*/
#define LDAP_DEBUG_TRACE		0x0001		/* @A7A*/
#define LDAP_DEBUG_PACKETS		0x0002		/* @A7A*/
#define LDAP_DEBUG_ARGS 		0x0004		/* @A7A*/
#define LDAP_DEBUG_CONNS		0x0008		/* @A7A*/
#define LDAP_DEBUG_BER			0x0010		/* @A7A*/
#define LDAP_DEBUG_XLATE		0x0010		/* @A7A*/
#define LDAP_DEBUG_FILTER		0x0020		/* @A7A*/
#define LDAP_DEBUG_MESSAGE		0x0040		/* @A7A*/
#define LDAP_DEBUG_ACL			0x0080		/* @A7A*/
#define LDAP_DEBUG_STATS		0x0100		/* @A7A*/
#define LDAP_DEBUG_THREAD		0x0200		/* @A7A*/
#define LDAP_DEBUG_REPL			0x0400		/* @A7A*/
#define LDAP_DEBUG_PARSE		0x0800		/* @A7A*/
#define LDAP_DEBUG_PERFORMANCE		0x1000		/* @A7A*/
#define LDAP_DEBUG_RDBM			0x2000		/* @A7A*/
#define LDAP_DEBUG_REFERRAL		0x4000		/* @A7A*/
#define LDAP_DEBUG_ERROR		0x8000		/* @A7A*/
#define LDAP_DEBUG_ANY			0xffff		/* @A7A*/

/* Server Request Search Source Types - @A3 */
#define LDAP_LSI_CONF_DNS        0 /* Config first, then DNS (def) */
#define LDAP_LSI_CONF_ONLY       1 /* Ccnfiguration file only      */
#define LDAP_LSI_DNS_ONLY        2 /* DNS only                     */

/* Server Request Connection Types - @A3 */
#define LDAP_LSI_UDP_TCP         0 /* UDP first, then TCP */
#define LDAP_LSI_UDP             1 /* Use UDP only */
#define LDAP_LSI_TCP             2 /* Use TCP only */

/* LDAP Server Types  - @A3 */
#define LDAP_LSI_MASTER          1 /* LDAP Master */
#define LDAP_LSI_REPLICA         2 /* LDAP Replica */

/* LDAP Server Security Types - @A3 */
#define LDAP_LSI_NOSSL           1 /* Non-SSL */
#define LDAP_LSI_SSL             2 /* Secure Server */

/*
 * possible error codes we can return
 */

#define LDAP_SUCCESS			0x00
#define LDAP_OPERATIONS_ERROR		0x01
#define LDAP_PROTOCOL_ERROR		0x02
#define LDAP_TIMELIMIT_EXCEEDED 	0x03
#define LDAP_SIZELIMIT_EXCEEDED 	0x04
#define LDAP_COMPARE_FALSE		0x05
#define LDAP_COMPARE_TRUE		0x06
#define LDAP_STRONG_AUTH_NOT_SUPPORTED	0x07
#define LDAP_STRONG_AUTH_REQUIRED	0x08
#define LDAP_PARTIAL_RESULTS		0x09

#define LDAP_REFERRAL			0X0a
#define LDAP_ADMIN_LIMIT_EXCEEDED	0X0b
#define LDAP_UNAVAILABLE_CRITICAL_EXTENSION  0X0c

/* change flag @A3 */
#define LDAP_CONFIDENTIALITY_REQUIRED   0x0d
#define LDAP_SASLBIND_IN_PROGRESS       0x0e

#define LDAP_NO_SUCH_ATTRIBUTE		0x10
#define LDAP_UNDEFINED_TYPE		0x11
#define LDAP_INAPPROPRIATE_MATCHING	0x12
#define LDAP_CONSTRAINT_VIOLATION	0x13
#define LDAP_TYPE_OR_VALUE_EXISTS	0x14
#define LDAP_INVALID_SYNTAX		0x15

#define LDAP_NO_SUCH_OBJECT		0x20
#define LDAP_ALIAS_PROBLEM		0x21
#define LDAP_INVALID_DN_SYNTAX		0x22
#define LDAP_IS_LEAF			0x23
#define LDAP_ALIAS_DEREF_PROBLEM	0x24

#define LDAP_INAPPROPRIATE_AUTH 	0x30
#define LDAP_INVALID_CREDENTIALS	0x31
#define LDAP_INSUFFICIENT_ACCESS	0x32
#define LDAP_BUSY			0x33
#define LDAP_UNAVAILABLE		0x34
#define LDAP_UNWILLING_TO_PERFORM	0x35
#define LDAP_LOOP_DETECT		0x36

#define LDAP_NAMING_VIOLATION		0x40
#define LDAP_OBJECT_CLASS_VIOLATION	0x41
#define LDAP_NOT_ALLOWED_ON_NONLEAF	0x42
#define LDAP_NOT_ALLOWED_ON_RDN 	0x43
#define LDAP_ALREADY_EXISTS		0x44
#define LDAP_NO_OBJECT_CLASS_MODS	0x45
#define LDAP_RESULTS_TOO_LARGE		0x46

#define LDAP_AFFECTS_MULTIPLE_DSAS	0X47

#define LDAP_OTHER			0x50
#define LDAP_SERVER_DOWN		0x51
#define LDAP_LOCAL_ERROR		0x52
#define LDAP_ENCODING_ERROR		0x53
#define LDAP_DECODING_ERROR		0x54
#define LDAP_TIMEOUT			0x55
#define LDAP_AUTH_UNKNOWN		0x56
#define LDAP_FILTER_ERROR		0x57
#define LDAP_USER_CANCELLED		0x58
#define LDAP_PARAM_ERROR		0x59
#define LDAP_NO_MEMORY			0x5a

/* begin error codes added under change flag @A2            */

#define LDAP_CONNECT_ERROR  0x5b
#define LDAP_NOT_SUPPORTED  0x5c
#define LDAP_CONTROL_NOT_FOUND  0x5d
#define LDAP_NO_RESULTS_RETURNED 0x5e
#define LDAP_MORE_RESULTS_TO_RETURN 0x5f

/* end error codes added under change flag @A2              */

#define LDAP_URL_ERR_NOTLDAP		0x60
#define LDAP_URL_ERR_NODN		0x61
#define LDAP_URL_ERR_BADSCOPE		0x62
#define LDAP_URL_ERR_MEM		0x63

/* begin error codes added under change flag @A2            */

#define LDAP_CLIENT_LOOP  0x64
#define LDAP_REFERRAL_LIMIT_EXCEEDED 0x65

#define LDAP_SSL_ALREADY_INITIALIZED    0x70
#define LDAP_SSL_INITIALIZE_FAILED      0x71
#define LDAP_SSL_CLIENT_INIT_NOT_CALLED 0x72
#define LDAP_SSL_PARAM_ERROR            0x73
#define LDAP_SSL_HANDSHAKE_FAILED       0x74
#define LDAP_SSL_GET_CIPHER_FAILED      0x75
#define LDAP_SSL_NOT_AVAILABLE          0x76

/* end error codes added under change flag @A2              */

/* begin error codes added under change flag @A3            */

#define LDAP_SSL_KEYRING_NOT_FOUND      0x77
#define LDAP_SSL_PASSWORD_NOT_SPECIFIED 0x78

#define LDAP_NO_EXPLICIT_OWNER          0x80
#define LDAP_NO_LOCK                    0x81

/* DNS related error codes */
#define LDAP_DNS_NO_SERVERS     0x85 /* No LDAP servers found */
#define LDAP_DNS_TRUNCATED      0x86 /* Warning truncated DNS results */
#define LDAP_DNS_INVALID_DATA   0x87 /* Invalid DNS Data */
#define LDAP_DNS_RESOLVE_ERROR  0x88 /* Can't resolve system domain or \
nameserver */
#define LDAP_DNS_CONF_FILE_ERROR 0x89 /* DNS Configuration file error */

/* UTF8 related error codes */
#define LDAP_XLATE_E2BIG       0xA0 /* Output buffer overflow */
#define LDAP_XLATE_EINVAL      0xA1 /* Input buffer truncated */
#define LDAP_XLATE_EILSEQ      0xA2 /* Unusable input character */
#define LDAP_XLATE_NO_ENTRY    0xA3    /* No codeset point to map to */

#define LDAP_REG_FILE_NOT_FOUND  0xB0 /* NT Registry - file not found */
#define LDAP_REG_CANNOT_OPEN     0xB1 /* NT Registry - can not open */
#define LDAP_REG_ENTRY_NOT_FOUND 0xB2 /* NT Registry entry not found */

#define LDAP_CONF_FILE_NOT_OPENED         0xC0 /* Plugin configuration \
file not opened */
#define LDAP_PLUGIN_NOT_LOADED            0xC1 /* Plugin library not \
loaded */
#define LDAP_PLUGIN_FUNCTION_NOT_RESOLVED 0xC2 /* Plugin function not \
resolved */
#define LDAP_PLUGIN_NOT_INITIALIZED       0xC3 /* Plugin library not \
initialized */
#define LDAP_PLUGIN_COULD_NOT_BIND        0xC4 /* Plugin function \
could not bind */
/* end error codes added under change flag @A3              */

   /* Start of Changes @A9A: TLS version of the error codes */
#define LDAP_TLS_ALREADY_INITIALIZED    LDAP_SSL_ALREADY_INITIALIZED
#define LDAP_TLS_INITIALIZE_FAILED      LDAP_SSL_INITIALIZE_FAILED
#define LDAP_TLS_CLIENT_INIT_NOT_CALLED LDAP_SSL_CLIENT_INIT_NOT_CALLED
#define LDAP_TLS_PARAM_ERROR            LDAP_SSL_PARAM_ERROR
#define LDAP_TLS_HANDSHAKE_FAILED       LDAP_SSL_HANDSHAKE_FAILED
#define LDAP_TLS_GET_CIPHER_FAILED      LDAP_SSL_GET_CIPHER_FAILED
#define LDAP_TLS_NOT_AVAILABLE          LDAP_SSL_NOT_AVAILABLE
#define LDAP_TLS_KEYRING_NOT_FOUND      LDAP_SSL_KEYRING_NOT_FOUND
#define LDAP_TLS_PASSWORD_NOT_SPECIFIED LDAP_SSL_PASSWORD_NOT_SPECIFIED
   /* end error codes added under change flag @A9           */

/* Start of Changes @A6A */
#define LDAP_SASL_GSS_NO_SEC_CONTEXT 0xD0 /* gss_init_sec_context \
failed */

/* @A8A */
#define LDAP_PWD_ERROR_START 0x03
#define LDAP_TIME_BEFORE_EXPIRE  0x01
#define LDAP_GRACE_LOGINS   0x02
#define LDAP_PASSWORD_EXPIRED  0x03
#define LDAP_ACCOUNT_LOCKED   0x04
#define LDAP_CHANGE_AFTER_RESET  0x05
#define LDAP_PASSWORD_NO_MOD  0x06
#define LDAP_NEED_OLD_PASSWORD  0x07
#define LDAP_INVALID_PASS_SYNTAX 0x08
#define LDAP_PASSWORD_TOO_SHORT  0x09
#define LDAP_PASSWORD_TOO_YOUNG  0x0A
#define LDAP_PASSWORD_IN_HISTORY 0x0B

/* oid for ManageDsaIt oid to stop referral */
#define LDAP_MANAGEDSAIT_OID "2.16.840.1.113730.3.4.2"

/* oids related to transaction support */
#define LDAP_START_TRANSACTION_OID    "1.3.18.0.2.12.5"
#define LDAP_END_TRANSACTION_OID      "1.3.18.0.2.12.6"
#define LDAP_TRANSACTION_CONTROL_OID "1.3.18.0.2.10.5"

/* oids for event notification support */
#define LDAP_EVENT_REGISTER_OID "1.3.18.0.2.12.1"
#define LDAP_EVENT_UNREGISTER_OID "1.3.18.0.2.12.3"
/* end oids added under change flag @A6             */

/* oids for ldap_delete_ext and ldap_delete_ext_s when   */
/* deleting a projected user (DLTUSRPF) on OS/400.   @A7A*/
#define LDAP_OS400_OWNOBJOPT_CONTROL_OID "1.3.18.0.2.10.8"
#define LDAP_OS400_PGPOPT_CONTROL_OID "1.3.18.0.2.10.9"

/* oid for sorted search and paged results oid.  @A8A*/
#define LDAP_SORTED_SEARCH_REQ_OID "1.2.840.113556.1.4.473"	
#define LDAP_SORTED_SEARCH_RES_OID "1.2.840.113556.1.4.474"	
#define LDAP_PAGED_RESULTS_OID "1.2.840.113556.1.4.319"		

/* oid for starting and stopping the server through the */
/* admin daemon @A8A*/
#define LDAP_ADMIN_SLAPD   "1.3.18.0.2.12.26"
#define LDAP_ADMIN_SLAPD_RESP "1.3.18.0.2.12.27"

/* oid for startTLS operation @A9A */
#define LDAP_STARTTLS_OID   "1.3.6.1.4.1.1466.20037"

/* oids for log access support @A8A*/
#define LDAP_LOG_NUMLINES_REQ_OID "1.3.18.0.2.12.24"
#define LDAP_LOG_NUMLINES_RES_OID "1.3.18.0.2.12.25"
#define LDAP_LOG_GETLINES_REQ_OID "1.3.18.0.2.12.22"
#define LDAP_LOG_GETLINES_RES_OID "1.3.18.0.2.12.23"
#define LDAP_LOG_CLEAR_REQ_OID "1.3.18.0.2.12.20"
#define LDAP_LOG_CLEAR_RES_OID "1.3.18.0.2.12.21"

/* oids for replication extended operations @A8A*/
#define LDAP_REPL_CASC_CONTROL_REQ_OID "1.3.18.0.2.12.15"
#define LDAP_REPL_CONTROL_REPL_REQ_OID "1.3.18.0.2.12.16"
#define LDAP_REPL_CONTROL_QUEUE_REQ_OID "1.3.18.0.2.12.17"
#define LDAP_REPL_QUIESCE_REQ_OID "1.3.18.0.2.12.19"

/* oid for password policy @A8A*/
#define LDAP_PWDPOLICY_CONTROL_OID "1.3.6.1.4.1.42.2.27.8.5.1"

/* oid for server administration control @A8A*/
#define LDAP_SERVER_ADMIN_CONTROL_OID "1.3.18.0.2.10.15"

/* oid for proxied authorization support  - d77919 */
#define  LDAP_PROXY_CONTROL_OID "2.16.840.1.113730.3.4.18"

/* oids for update Config support @A8A*/
#define LDAP_CONFIG_UPDATE_REQ_OID "1.3.18.0.2.12.28"
#define LDAP_CONFIG_UPDATE_RES_OID "1.3.18.0.2.12.29"
#define LDAP_LOG_ACCESS_UPDATE_OID "1.3.18.0.2.12.32"
#define LDAP_EVENT_UPDATE_OID "1.3.18.0.2.12.31"

/*oid for DN Normalize plugin @A8A*/
#define LDAP_DN_NORMALIZE_OID "1.3.18.0.2.12.30"

/* oid for unbind of a bound DN/IP @A9A */
#define LDAP_DN_UNBIND_REQ_OID "1.3.18.0.2.12.35"
#define LDAP_DN_UNBIND_RES_OID "1.3.18.0.2.12.36"

/* oid for delete subtree oid @A8A*/
#define LDAP_DELETE_SUBTREE_CONTROL_OID "1.2.840.113556.1.4.805"
/* symbol as defined by Microsoft in winldap.h @A8A*/
#define LDAP_SERVER_TREE_DELETE_OID "1.2.840.113556.1.4.805"

/* OIDs for capabilities @A8A*/
#define LDAP_ENHANCED_REPLICATION_OID "1.3.18.0.2.32.1"
#define LDAP_ENTRY_CHECKSUM_OID       "1.3.18.0.2.32.2"
#define LDAP_IBM_ENTRYUUID_OID        "1.3.18.0.2.32.3"
#define LDAP_FILTER_ACL_OID           "1.3.18.0.2.32.4"
#define LDAP_PASSWORD_POLICY_OID      "1.3.18.0.2.32.5"
#define LDAP_SORT_BY_DN_OID           "1.3.18.0.2.32.6"

/* OIDs aded under change flag @A9A */
#define LDAP_ADMIN_GROUP_DEL_OID      "1.3.18.0.2.32.8"
#define LDAP_DOS_PREVENTION_OID       "1.3.18.0.2.32.9"
#define LDAP_ENHANCED_DYN_UPDATE_OID  "1.3.18.0.2.32.15"
#define LDAP_DEREF_ALIASES_OID        "1.3.18.0.2.32.10"
#define LDAP_ATTRIBUTE_CACHE_OID      "1.3.18.0.2.32.13"
#define LDAP_UNIQUE_ATTRIBUTES_OID    "1.3.18.0.2.32.16"
#define LDAP_GROUP_SEARCH_LIMITS_OID  "1.3.18.0.2.32.17"
#define LDAP_IBM_POLICIES_OID         "1.3.18.0.2.32.18"
#define LDAP_CHANGE_LOG_MAX_AGE_OID   "1.3.18.0.2.32.19"
#define LDAP_NULL_BASED_SUB_SEARCH_OID "1.3.18.0.2.32.26"
#define LDAP_PROXY_AUTHORIZATION_OID  "1.3.18.0.2.32.27"
#define LDAP_TLS_SUPPORT_OID          "1.3.18.0.2.32.28"
#define LDAP_KERBEROS_SUPPORT_OID     "1.3.18.0.2.32.30"
#define LDAP_DYNAMIC_GROUPS_OID       "1.3.18.0.2.32.31"
/* end of OIDs added under change flag @A9A */
#define LDAP_LANGUAGE_TAG_OID         "1.3.6.1.4.1.4203.1.5.4"

/* OIDS for all of the different ACL models we support */
#define LDAP_IBM_ACL_OID               "1.3.18.0.2.26.2"
#define LDAP_FILTERED_ACL_OID          "1.3.18.0.2.26.3"
#define LDAP_SYSTEM_RESTRICTED_ACL_OID "1.3.18.0.2.26.4"

/* OIDS for Monitor */
#define LDAP_MONITOR_OPERATION_COUNTS  "1.3.18.0.2.32.24"
#define LDAP_MONITOR_LOGGING_COUNTS    "1.3.18.0.2.32.20"
#define LDAP_MONITOR_CONN_TYPE_COUNTS  "1.3.18.0.2.32.22"
#define LDAP_MONITOR_ACTIVE_WORKERS    "1.3.18.0.2.32.21"
#define LDAP_MONITOR_CONNECTIONS_IP    "1.3.18.0.2.32.23"
#define LDAP_MONITOR_TRACING           "1.3.18.0.2.32.25"

/* OIDS for the Unique Attributes Extended Operation plugin */
#define LDAP_UNIQUE_ATTR_REQ_OID "1.3.18.0.2.12.44"
#define LDAP_UNIQUE_ATTR_RES_OID "1.3.18.0.2.12.45"


   /* OIDs for DIGEST-MD5 SASL bind mechanism */
#define IBM_CLIENT_DIGEST_REALM_NAME_OID "1.3.18.0.2.10.12"
#define IBM_CLIENT_MD5_REALM_NAME_OID IBM_CLIENT_DIGEST_REALM_NAME_OID
#define IBM_CLIENT_DIGEST_USER_NAME_OID "1.3.18.0.2.10.13"
#define IBM_CLIENT_MD5_USER_NAME_OID IBM_CLIENT_DIGEST_USER_NAME_OID

/* OIDS for the User Type Extended Operation plugin */
#define LDAP_ATTR_TYPE_REQ_OID "1.3.18.0.2.12.46"
#define LDAP_ATTR_TYPE_RES_OID "1.3.18.0.2.12.47"

   /* Enumeration that specifies the request integers
      that can be sent through for the attribute type
      requests on the attribute type extended operation.*/
   typedef enum AttrTypeEnum {
      OPERATIONAL = 0,
      LANGUAGE_TAG = 1,
      ATTRIBUTE_CACHE = 2,
      UNIQUE_ATTR = 3,
      CONFIGURATION = 4
   } AttrTypeEnum;

/* OIDS for the User Type Extended Operation plugin */
#define LDAP_USER_TYPE_REQ_OID "1.3.18.0.2.12.37"
#define LDAP_USER_TYPE_RES_OID "1.3.18.0.2.12.38"

/* The user types that can be returned from the user type
   extended operation */
#define ROOT_ADMIN_USERTYPE "root_administrator"
#define ADMIN_GROUP_MEMBER_USERTYPE "admin_group_member"
#define LOCAL_OS_USERTYPE "local_os_user"
#define LDAP_USER_USERTYPE "ldap_user_type"

/* The user roles that can be returned from the user type
   extended operation */
#define SERVER_CONFIG_ADMIN_USERROLE "server_config_administrator"
#define SERVER_CONFIG_GROUP_MEMBER_USERROLE "server_config_group_member"
#define SERVER_CONFIG_GROUP_READONLY_USERROLE "server_config_read_only"
#define DIRECTORY_ADMIN_USERROLE "directory_administrator"
#define LDAP_USER_USERROLE "ldap_user_role"

   /* Enumeration that specifies the request integers
      that can be sent through the dynamic configuration
      extended operation.*/
   typedef enum dynamicConfigEnum {
      ALL = 0,
      ATTRIBUTE = 1,
      ENTRY = 2,
      SUBTREE = 3
   } dynamicConfigEnum;

/* @A8A*/
typedef enum adminEnum {
   START = 0,
   STOP = 1,
   RESTART = 2,
   STATUS = 3
} adminEnum;

/* @A8A*/
typedef enum serverStat {
   STARTED = 0,
   STARTING = 1,
   STOPPED = 2
} serverStat;

/* @A8A*/
typedef enum _logType {
    SlapdErrors = 1,
    CLIErrors	= 2,
    AuditLog	= 4,
    BulkloadLog = 8,
    AdminErrors = 16} logType;

/*
 * These options are used with the LDAP_REPL_CASC_CONTROL_REQ_OID
 * extended operation.
 * @A8A
 */
#define LDAP_REPL_CASCADE_QUIESCE                     0
#define LDAP_REPL_CASCADE_UNQUIESCE                   1
#define LDAP_REPL_CASCADE_REPLICATE_NOW               2
#define LDAP_REPL_CASCADE_WAIT_FOR_REPLICATION        3

/*
 * These options are used with the
 * LDAP_REPL_CONTROL_REPL_REQ_OID extended operation.
 * @A8A
 */
#define LDAP_REPL_CONTROL_REPL_ACTION_SUSPEND         0
#define LDAP_REPL_CONTROL_REPL_ACTION_RESUME          1
#define LDAP_REPL_CONTROL_REPL_ACTION_REPLICATENOW    2
#define LDAP_REPL_CONTROL_REPL_SCOPE_SINGLE_AGREEMENT 0
#define LDAP_REPL_CONTROL_REPL_SCOPE_ALL_AGREEMENTS   1

/*
 * These options are used with the
 * LDAP_REPL_CONTROL_QUEUE_REQ_OID extended operation.
 * @A8A
 */
#define LDAP_REPL_QUEUE_SKIPALL                       0
#define LDAP_REPL_QUEUE_SKIPSINGLE                    1

/*
 * Result codes unique to the LDAP_REPL_QUIESCE_REQ_OID
 * extended operation.
 * @A8A
 */
#define LDAP_REPL_QUIESCE_BAD_STATE                   0x101

/*
 * This structure represents both ldap messages and ldap responses.
 * These are really the same, except in the case of search responses,
 * where a response has multiple messages.
 */

typedef struct ldapmsg LDAPMessage;
#define NULLMSG ((LDAPMessage *) NULL)

/*
 * structure representing an ldap connection
 */
typedef struct ldap  LDAP;

/*
 * type for ldap_set_rebind_proc()
 */
typedef int (*LDAPRebindProc)( struct ldap *ld, char **dnp,
			char **passwdp, int *authmethodp, int freeit );

/*
 * structure for retrieving information during execution
 */
/* Start of Changes @A6A */
typedef struct ldapapiinfo {
	int	ldapai_info_version;
	int 	ldapai_api_version;
	int	ldapai_protocol_version;
	char	**ldapai_extensions;
	char	*ldapai_vendor_name;
	int	ldapai_vendor_version;
} LDAPAPIInfo;

typedef struct ldap_apifeature_info {
	int	ldapaif_info_version;
	char	*ldapaif_name;
	int	ldapaif_version;
} LDAPAPIFeatureInfo;

/* End of @A6A Changes    */

/*
 * types for ldap URL handling
 */
typedef struct ldap_url_desc {
    char	*lud_host;
    int 	lud_port;
    char	*lud_dn;
    char	**lud_attrs;
    int 	lud_scope;
    char	*lud_filter;
    char	*lud_string;	/* for internal use only */
} LDAPURLDesc;
#define NULLLDAPURLDESC ((LDAPURLDesc *)NULL)

/* start change flag @A3 */

typedef struct _LDAPVersion {
    int  sdk_version;
    int  protocol_version;
    int  SSL_version;
    int  security_level;
    char  ssl_max_cipher[ 65 ] ;
    char  *sdk_vendor;
    char  *sdk_build_level;
    char  reserved[ 57 ] ;
} LDAPVersion;

typedef struct _LDAPControl {
    char	*ldctl_oid;
    struct	berval ldctl_value;
    int		ldctl_iscritical;
} LDAPControl;

/* LDAP Server Request Structure */
typedef struct LDAP_Server_Request {
      int search_source;		/* Search DNS, Cache or both */
      char *conf_filename;		/* Configuratin file */
      int reserved;			/* Reserved, set to 0 */
      char *service_key;		/* Service identifier */
      char *enetwork_domain;		/* eNetwork domain name */
      char **name_servers;		/* Array of name servers */
      char **dns_domains;		/* Array of DNS domains */
      int connection_type;		/* Use UDP, TCP or both */
      int connection_timeout;		/* Connection timeout in seconds */
      char *DN_filter;			/* DN suffix filter */
      char *proto_key;			/* Symbolic protocol name @A6A*/
      unsigned char reserved2[60];	/* Reserved, set to 0 @A6M*/
} LDAPServerRequest;

/* LDAP Server Information Structure */
typedef struct LDAP_Server_Info {
      char *lsi_host;                /* LDAP server's hostname */
      unsigned short lsi_port;       /* LDAP port  */
      char *lsi_suffix;              /* server suffix */
      char *lsi_query_key;           /* service_key[.enetwork_domain] */
      char *lsi_dns_domain;          /* publishing DNS domain */
      int lsi_replica_type;          /* master or replica */
      int lsi_sec_type;              /* SSL or non-SSL */
      unsigned short lsi_priority;   /* server priority */
      unsigned short lsi_weight;     /* load balancing weight */
      char *lsi_vendor_info;         /* vendor information    */
      char *lsi_info;                /* LDAP info string */
      struct LDAP_Server_Info *prev; /* linked list previous pointer */
      struct LDAP_Server_Info *next; /* linked lsit next pointer */
} LDAPServerInfo;

/* end change flag @A3 */

/* start change flag @A8 */

/* LDAP sorted search extension */
typedef struct _LDAPsortkey {	
    char *attr_type;		/* name of attribute */
    char *match_rule_oid;	/* OID of matching rule */
    int   reverse_order;	/* specifies if attribute sorted reverse */
} LDAPsortkey;

/* end change flag @A8 */


/* Function prototypes */
/*********************************************************************/
/*  @A6A                                                             */
/*  In following the ldap standard changes for V5R1M0 many of the    */
/*  Directory Services Client APIs were changed to use "const char *"*/
/*  instead of "char *" parameters. However, to assist application   */
/*  developers to easily transition current applications to the new  */
/*  prototypes, _QGLDNOCONST is introduced so the old prototypes can */
/*  still be available. Define _QGLDNOCONST to use the old           */
/*  prototypes otherwise the default will be for the "const char *"  */
/*  prototypes to be defined.                                        */
/*                                                                   */
/*  Warning: _QGLDNOCONST and the availability of the old "char *"   */
/*  apis will be withdrawn in some future release.                   */
/*********************************************************************/

#ifdef _QGLDNOCONST					/* @A6A */
int ldap_abandon ( LDAP *ld, int msgid );
int ldap_add ( LDAP *ld, char *dn, LDAPMod **attrs );
int ldap_add_s ( LDAP *ld, char *dn, LDAPMod **attrs );
int ldap_bind ( LDAP *ld, char *who, char *passwd,
 int authmethod );
int ldap_bind_s ( LDAP *ld, char *who, char *cred, int method );
int ldap_simple_bind ( LDAP *ld, char *who, char *passwd );
int ldap_simple_bind_s ( LDAP *ld, char *who, char *passwd );
void ldap_set_rebind_proc ( LDAP *ld,
 LDAPRebindProc rebindproc );
int ldap_compare ( LDAP *ld, char *dn, char *attr,
 char *value );
int ldap_compare_s ( LDAP *ld, char *dn, char *attr,
 char *value );
int ldap_delete ( LDAP *ld, char *dn );
int ldap_delete_s ( LDAP *ld, char *dn );
int ldap_result2error ( LDAP *ld, LDAPMessage *r, int freeit );
char *ldap_err2string ( int err );
void ldap_perror ( LDAP *ld, char *s );
int ldap_get_errno ( LDAP *ld );
int ldap_modify ( LDAP *ld, char *dn, LDAPMod **mods );
int ldap_modify_s ( LDAP *ld, char *dn, LDAPMod **mods );
int ldap_modrdn ( LDAP *ld, char *dn, char *newrdn,
 int deleteoldrdn );
int ldap_modrdn_s ( LDAP *ld, char *dn, char *newrdn,
 int deleteoldrdn );
LDAP *ldap_open ( char *host, int port );
LDAP *ldap_init ( char *defhost, int defport );
int ldap_set_option ( LDAP *ld, int optionToSet,
    void *optionValue );
int ldap_get_option ( LDAP *ld, int optionToGet,
    void *optionValue );
LDAPMessage *ldap_first_entry ( LDAP *ld, LDAPMessage *chain );
LDAPMessage *ldap_next_entry ( LDAP *ld, LDAPMessage *entry );
int ldap_count_entries ( LDAP *ld, LDAPMessage *chain );
char *ldap_get_dn ( LDAP *ld, LDAPMessage *entry );
char **ldap_explode_dn ( char *dn, int notypes );
char *ldap_first_attribute ( LDAP *ld, LDAPMessage *entry,
    BerElement **ber );
char *ldap_next_attribute ( LDAP *ld, LDAPMessage *entry,
    BerElement *ber );
int ldap_count_attributes ( LDAP *ld, LDAPMessage *entry );
char **ldap_get_values ( LDAP *ld, LDAPMessage *entry,
    char *target );
struct berval **ldap_get_values_len ( LDAP *ld,
    LDAPMessage *entry, char *target );
int ldap_count_values ( char **vals );
int ldap_count_values_len ( struct berval **vals );
void ldap_value_free ( char **vals );
void ldap_value_free_len ( struct berval **vals );
int ldap_result ( LDAP *ld, int msgid, int all,
    struct timeval *timeout, LDAPMessage **result );
int ldap_msgfree ( LDAPMessage *lm );
int ldap_search ( LDAP *ld, char *base, int scope, char *filter,
    char **attrs, int attrsonly );
int ldap_search_s ( LDAP *ld, char *base, int scope,
	char *filter, char **attrs, int attrsonly,
    LDAPMessage **res );
int ldap_search_st ( LDAP *ld, char *base, int scope,
	char *filter, char **attrs, int attrsonly,
    struct timeval *timeout, LDAPMessage **res );
int ldap_unbind ( LDAP *ld );
int ldap_unbind_s ( LDAP *ld );
void ldap_mods_free ( LDAPMod **mods, int freemods );
void ldap_memfree ( char *mem );
int ldap_is_ldap_url ( char *url );
int ldap_url_parse ( char *url, LDAPURLDesc **ludpp );
void ldap_free_urldesc ( LDAPURLDesc *ludp );
int ldap_url_search ( LDAP *ld, char *url, int attrsonly );
int ldap_url_search_s ( LDAP *ld, char *url, int attrsonly,
    LDAPMessage **res );
int ldap_url_search_st ( LDAP *ld, char *url, int attrsonly,
    struct timeval *timeout, LDAPMessage **res );
int ldap_ssl_start ( LDAP *ld, char *keyfile, char *keyfile_pw,
    char *keyfile_dn );
int ldap_app_ssl_start_np ( LDAP *ld, char *dcm_identifier );
/* @A1A */

/* start V3 api prototypes added under change flag @A3           */

int ldap_abandon_ext ( LDAP *ld, int msgid,
    LDAPControl **serverctrls, LDAPControl **clientctrls );
int ldap_add_ext ( LDAP *ld, char *dn, LDAPMod **attrs,
    LDAPControl **serverctrls, LDAPControl **clientctrls,
    int *msgidp );
int ldap_add_ext_s ( LDAP *ld, char *dn, LDAPMod **attrs,
    LDAPControl **serverctrls, LDAPControl **clientctrls );
void ldap_ber_free ( BerElement *mem );
int ldap_compare_ext ( LDAP *ld, char *dn, char *attr,
    struct berval *bvalue, LDAPControl **serverctrls,
    LDAPControl **clientctrls, int *msgidp );
int ldap_compare_ext_s ( LDAP *ld, char *dn, char *attr,
    struct berval *bvalue, LDAPControl **serverctrls,
    LDAPControl **clientctrls );
void ldap_control_free ( LDAPControl *ctrl );
void ldap_controls_free ( LDAPControl **ctrls );
int ldap_count_messages ( LDAP *ld, LDAPMessage *chain );
int ldap_count_references ( LDAP *ld, LDAPMessage *result );
int ldap_default_dn_get ( char  **dn, char *filename );
int ldap_default_dn_set ( char *default_dn, char *filename );
int ldap_delete_ext ( LDAP *ld, char *dn,
    LDAPControl **serverctrls, LDAPControl **clientctrls,
    int *msgidp );
int ldap_delete_ext_s ( LDAP * ld, char *dn,
    LDAPControl **serverctrls, LDAPControl **clientctrls );
char *ldap_dn2ufn (char *dn);
int ldap_enetwork_domain_get ( char **name, char *filename );
int ldap_enetwork_domain_set ( char *name, char *filename );
char **ldap_explode_rdn ( char *rdn, int notypes );
LDAPMessage *ldap_first_message ( LDAP *ld,
    LDAPMessage *chain );
LDAPMessage *ldap_first_reference ( LDAP *ld,
    LDAPMessage *res );
int ldap_get_entry_controls_np ( LDAP *ld, LDAPMessage *entry,
    LDAPControl ***serverctrlsp );
char *ldap_get_iconv_local_codepage ( void );
char *ldap_get_locale ( void );
int ldap_modify_ext ( LDAP *ld, char *dn, LDAPMod **mods,
    LDAPControl **serverctrls, LDAPControl **clientctrls,
    int *msgidp );
int ldap_modify_ext_s ( LDAP *ld, char *dn, LDAPMod **mods,
    LDAPControl **serverctrls,  LDAPControl **clientctrls );
int ldap_msgid ( LDAPMessage *res );
int ldap_msgtype ( LDAPMessage *res );
LDAPMessage *ldap_next_message ( LDAP *ld,
    LDAPMessage *chain );
LDAPMessage *ldap_next_reference ( LDAP *ld,
    LDAPMessage *res );
int ldap_parse_reference_np ( LDAP* ld, LDAPMessage *reference,
    char ***referralsp, LDAPControl ***serverctrlsp, int freeit );
int ldap_parse_result ( LDAP* ld, LDAPMessage *result,
    int *errcodep, char **matcheddnp, char **errmsgp,
    char ***referralsp,  LDAPControl ***serverctrlsp, int freeint );
int ldap_parse_sasl_bind_result ( LDAP* ld,
    LDAPMessage *result, struct berval **servercredp, int freeit );
int ldap_rename ( LDAP* ld, char *dn, char *newdn,
    char *newparent, int deleteoldrdn, LDAPControl **serverctrls,
    LDAPControl **clientctrls, int *msgidp );
int ldap_rename_s ( LDAP* ld,char *dn, char *newdn,
    char *newparent, int deleteoldrdn, LDAPControl **serverctrls,
    LDAPControl **clientctrls );
int ldap_sasl_bind ( LDAP *ld, char* dn, char *mechanism,
    struct berval *credentials, LDAPControl **serverctrls,
    LDAPControl **clientctrls, int *msgidp );
int ldap_sasl_bind_s ( LDAP *ld, char* dn, char *mechanism,
    struct berval *credentials, LDAPControl **serverctrls,
    LDAPControl **clientctrls, struct berval **servercredp );
int ldap_get_bind_controls( LDAP *ld, LDAPControl ***bind_controls);
int ldap_search_ext ( LDAP *ld, char *base, int scope,
    char *filter, char **attrs, int attrsonly,
    LDAPControl **serverctrls, LDAPControl **clientctrls,
    struct timeval *timeoutp, int sizelimit, int *msgidp );
int ldap_search_ext_s ( LDAP *ld, char *base, int scope,
    char *filter, char **attrs, int attrsonly,
    LDAPControl **serverctrls, LDAPControl **clientctrls,
    struct timeval *timeoutp, int sizelimit, LDAPMessage **res );
int ldap_server_conf_save ( char *basename, unsigned long ttl,
    LDAPServerInfo *server_info_listp );
int ldap_create_proxyauth_control(LDAP *ld, char *proxyDN,
    int isCritical, LDAPControl **control);
int ldap_server_free_list ( LDAPServerInfo *server_info_listp );
int ldap_server_locate ( LDAPServerRequest *server_request,
    LDAPServerInfo **server_info_listpp );
int ldap_set_iconv_local_charset ( char *charset );
int ldap_set_iconv_local_codepage ( char *codepage );
int ldap_set_locale ( char *locale );
int ldap_ssl_client_init ( char *keyfile, char *keyfile_pw,
    int sslTimeout, int *pSSLReasonCode );
LDAP *ldap_ssl_init ( char *host, int port, char *keyfile_dn );
int	ldap_version ( LDAPVersion *version );

/* Start of update @A6A */
#else
/* api set following new standards with const char * prototypes (default) */

/* LDAP Abandon functions */
int ldap_abandon ( LDAP *ld, int msgid );
int ldap_abandon_ext ( LDAP *ld, int msgid,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls);		

/* LDAP Add functions */
int ldap_add ( LDAP *ld, const char *dn, LDAPMod **attrs );
int ldap_add_s ( LDAP *ld, const char *dn, LDAPMod **attrs );
int ldap_add_ext (LDAP *ld, const char *dn, LDAPMod **attrs,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls,
	int *msgidp);
int ldap_add_ext_s (LDAP *ld, const char *dn, LDAPMod **attrs,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls);

/* LDAP Bind functions */
int ldap_bind (LDAP *ld, const char *who, const char *passwd,
	int authmethod );
int ldap_bind_s (LDAP *ld, const char *who, const char *cred,
	int method );
int ldap_simple_bind (LDAP *ld, const char *who,
	const char *passwd );
int ldap_simple_bind_s (LDAP *ld, const char *who,
	const char *passwd );
void ldap_set_rebind_proc (LDAP *ld,
	LDAPRebindProc rebindproc );

/* LDAP Compare functions */
int ldap_compare (LDAP *ld, const char *dn, const char *attr,
	const char *value );
int ldap_compare_s (LDAP *ld, const char *dn, const char *attr,
	const char *value );
int ldap_compare_ext (LDAP *ld, const char *dn, const char *attr,
	const struct berval *bvalue,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls,
	int *msgidp);
int ldap_compare_ext_s (LDAP *ld, const char *dn, const char *attr,
	const struct berval *bvalue,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls);

/* LDAP Delete functions */
int ldap_delete (LDAP *ld, const char *dn );
int ldap_delete_s (LDAP *ld, const char *dn );
int ldap_delete_ext  (LDAP *ld, const char *dn,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls,
	int *msgidp);
int ldap_delete_ext_s (LDAP * ld, const char *dn,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls);

/* LDAP Error functions */
int ldap_result2error (LDAP *ld, LDAPMessage *r, int freeit);
char *ldap_err2string (int err);
void ldap_perror (LDAP *ld, const char *s);
int ldap_get_errno (LDAP *ld);

/* LDAP Modify functions */
int ldap_modify (LDAP *ld, const char *dn, LDAPMod **mods);
int ldap_modify_s (LDAP *ld, const char *dn, LDAPMod **mods);
int ldap_modify_ext (LDAP *ld, const char *dn, LDAPMod **mods,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls,
	int *msgidp);
int ldap_modify_ext_s (LDAP *ld, const char *dn, LDAPMod **mods,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls);

/* LDAP Modrdn functions */
int ldap_modrdn (LDAP *ld, const char *dn, const char *newrdn,
	int deleteoldrdn);
int ldap_modrdn_s (LDAP *ld, const char *dn, const char *newrdn,
	int deleteoldrdn);

/* LDAP Init & Open functions */
LDAP *ldap_open (char *host, int port);
LDAP *ldap_init (char *defhost, int defport);

/* LDAP Option functions */
int ldap_set_option (LDAP *ld, int optionToSet,
	const void *optionValue);
int ldap_get_option (LDAP *ld, int optionToGet,
	void *optionValue);
int ldap_version (LDAPVersion *version);

/* LDAP Entry functions */
LDAPMessage *ldap_first_entry (LDAP *ld, LDAPMessage *chain);
LDAPMessage *ldap_next_entry (LDAP *ld, LDAPMessage *entry);
int ldap_count_entries (LDAP *ld, LDAPMessage *chain);

/* LDAP Message functions */
LDAPMessage *ldap_first_message (LDAP *ld, LDAPMessage *chain);
LDAPMessage *ldap_next_message  (LDAP *ld, LDAPMessage *chain);
int ldap_count_messages (LDAP *ld, LDAPMessage *chain);

/* LDAP Referrence functions */
LDAPMessage *ldap_first_reference (LDAP *ld, LDAPMessage *res);
LDAPMessage *ldap_next_reference (LDAP *ld, LDAPMessage *res);
int ldap_count_references (LDAP *ld, LDAPMessage *result);

/* LDAP DN functions */
char *ldap_get_dn (LDAP *ld, LDAPMessage *entry);
char **ldap_explode_dn (const char *dn, int notypes);
char **ldap_explode_rdn (const char *rdn, int notypes);
char *ldap_dn2ufn (const char *dn);

/* LDAP Attribute functions */
char *ldap_first_attribute (LDAP *ld, LDAPMessage *entry,
	BerElement **ber);
char *ldap_next_attribute (LDAP *ld, LDAPMessage *entry,
	BerElement *ber);
int ldap_count_attributes (LDAP *ld, LDAPMessage *entry);

/* LDAP Value functions */
char **ldap_get_values (LDAP *ld, LDAPMessage *entry,
	const char *target);
struct berval **ldap_get_values_len (LDAP *ld,
	LDAPMessage *entry, const char *target);
int ldap_count_values (char **vals);
int ldap_count_values_len (struct berval **vals);
void ldap_value_free (char **vals);
void ldap_value_free_len (struct berval **vals);

/* LDAP Result functions */
int ldap_result (LDAP *ld, int msgid, int all,
	struct timeval *timeout, LDAPMessage **result);
int ldap_msgfree (LDAPMessage *lm);
int ldap_msgid (LDAPMessage *res);
int ldap_msgtype (LDAPMessage *res);

/* LDAP Search functions */
int ldap_search (LDAP *ld, const char *base, int scope,
	const char *filter, char **attrs, int attrsonly);
int ldap_search_s (LDAP *ld, const char *base, int scope,
	const char *filter, char **attrs, int attrsonly,
	LDAPMessage **res);
int ldap_search_st (LDAP *ld, const char *base, int scope,
	const char *filter, char **attrs, int attrsonly,
	struct timeval *timeout, LDAPMessage **res);
int ldap_search_ext (LDAP *ld, const char *base, int scope,
	const char *filter, char **attrs, int attrsonly,
	LDAPControl **serverctrls, LDAPControl **clientctrls,
	struct timeval *timeoutp, int sizelimit, int *msgidp);
int ldap_search_ext_s (LDAP *ld, const char *base, int scope,
	const char *filter, char **attrs, int attrsonly,
	LDAPControl **serverctrls, LDAPControl **clientctrls,
	struct timeval *timeoutp, int sizelimit, LDAPMessage **res);

/* LDAP Unbind functions */
int ldap_unbind (LDAP *ld);
int ldap_unbind_s (LDAP *ld);

/* LDAP Free functions */
void ldap_mods_free (LDAPMod **mods, int freemods);
void ldap_control_free (LDAPControl *ctrl);
void ldap_controls_free (LDAPControl **ctrls);
void ldap_memfree (char *mem );
void ldap_ber_free (BerElement *mem);

/* LDAP URL functions */
int ldap_is_ldap_url (char *url);
int ldap_url_parse (char *url, LDAPURLDesc **ludpp);
void ldap_free_urldesc (LDAPURLDesc *ludp);
int ldap_url_search (LDAP *ld, char *url, int attrsonly);
int ldap_url_search_s (LDAP *ld, char *url, int attrsonly,
	LDAPMessage **res);
int ldap_url_search_st (LDAP *ld, char *url, int attrsonly,
	struct timeval *timeout, LDAPMessage **res);

/* LDAP SSL functions */

int ldap_ssl_start (LDAP *ld, char *keyfile, char *keyfile_pw,
	char *keyfile_dn);

int ldap_app_ssl_start_np (LDAP *ld, char *cert_identifier);

int ldap_ssl_client_init (char *keyfile,
				 char *keyfile_pw,
				 int sslTimeout,
				 int *pSSLReasonCode) ;
LDAP *ldap_ssl_init (char *host,
			    int   port,
			    char *keyfile_dn) ;

int ldap_sasl_bind (LDAP *ld, const char *dn,
	const char *mechanism, const struct berval *credentials,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls,
	int* msgidp);
int ldap_sasl_bind_s (LDAP *ld, const char* dn,
	const char *mechanism,
	const struct berval *credentials,
	LDAPControl **serverctrls,
	LDAPControl **clientctrls,
	struct berval  **servercredp);
int ldap_get_bind_controls( LDAP *ld,
        LDAPControl ***bind_controls);

/* LDAP Rename function */
int ldap_rename (LDAP* ld, const char *dn, const char *newdn,
	const char *newparent,
	int deleteoldrdn,
	LDAPControl **serverctrls, LDAPControl **clientctrls,
	int *msgidp);
int ldap_rename_s (LDAP* ld, const char *dn, const char *newdn,
	const char *newparent,
	int deleteoldrdn,
	LDAPControl **serverctrls, LDAPControl **clientctrls);

/* LDAP Parse functions */
int ldap_parse_result (LDAP* ld, LDAPMessage *result, int *errcodep,
	char **matcheddnp, char **errmsgp,
	char ***referralsp, LDAPControl ***serverctrlsp,
	int freeint) ;
int ldap_parse_reference_np (LDAP* ld, LDAPMessage *reference,
				    char *** referralsp,
			            LDAPControl*** serverctrlsp,
				    int freeit);

/* LDAP Control functions */
int ldap_get_entry_controls_np (LDAP *ld, LDAPMessage *entry,
                                LDAPControl ***serverctrlsp);

int ldap_parse_sasl_bind_result (LDAP* ld, LDAPMessage *result,
   	struct berval **servercredp,
	int freeit);

int ldap_server_locate (LDAPServerRequest *server_request,
	LDAPServerInfo **server_info_listpp);
int  ldap_server_free_list (LDAPServerInfo *server_info_listp);
int ldap_server_conf_save (char *basename, unsigned long ttl,
	LDAPServerInfo *server_info_listp);
int ldap_create_proxyauth_control(LDAP *ld, char *proxyDN,
        int isCritical, LDAPControl **control);
int ldap_default_dn_set (char *default_dn, char *filename);
int ldap_default_dn_get (char  **dn, char *filename);
int ldap_enetwork_domain_set (char *name, char *filename);
int ldap_enetwork_domain_get (char **name, char *filename);

int 	ldap_set_locale (char *locale);
char * 	ldap_get_locale (void);
int     ldap_set_iconv_local_codepage (char *codepage);
char *  ldap_get_iconv_local_codepage (void);
int     ldap_set_iconv_local_charset (char *charset);

#endif /* End of _QGLDNOCONST */


/* V5R1M0 Function prototypes  */

/* New LDAP SSL functions */
int ldap_app_ssl_client_init_np (char *dcm_identifier, int *pSSLReasonCode);
LDAP *ldap_app_ssl_init_np (char *host, int port);

/* Function prototypes added under @A9A */
int ldap_ssl_environment_init (const char *keyfile,
                                      const char *keyfile_pw,
                                      int sslTimeout,
                                      int *pSSLReasonCode ) ;

/* LDAP TLS functions */
int ldap_start_tls_app_np ( LDAP *ld, const char *applicationID );
int ldap_start_tls_s_np ( LDAP *ld, const char *certificateName );
int ldap_stop_tls_s_np ( LDAP *ld );
/* end of function prototypes added under @A9A */
/* New LDAP DN functions */
char **ldap_explode_dns (const char *dn);

/* New LDAP Error functions */
int ldap_set_lderrno (LDAP *ld, int e, const char *m, const char *s);/* @A7A*/
int ldap_get_lderrno (LDAP *ld, char **m, char **s);

/* New LDAP Unbind functions */
int ldap_unbind_ext (LDAP *ld, LDAPControl **serverctrls,
	LDAPControl **clientcontrls);

/* New Extended Operations functions */
int 	ldap_parse_extended_result (
	LDAP            	*ld,
	LDAPMessage     	*res,
	char            	**resultoidp,
	struct berval   	**resultdata,
	int             	freeit
);

int	ldap_extended_operation (
	LDAP 			*ld,
	const char		*exoid,
	const struct berval	*exdata,
	LDAPControl 		**serverctrls,
	LDAPControl		**clientctrls,
	int			*msgidp
);

int	ldap_extended_operation_s (
	LDAP 			*ld,
	const char		*exoid,
	const struct berval	*exdata,
	LDAPControl 		**serverctrls,
	LDAPControl		**clientctrls,
	char			**retoidp,
	struct berval		**retdatap
);
/* end api prototypes added under change flag @A6           */

/*
	For small, "one shot" translations, use an output buffer size that is
	3 times larger than the input buffer size, when going from local code
        page to UTF8.
*/
int ldap_xlate_local_to_utf8 ( char *inbufp,
				unsigned long *inlenp,
				char *outbufp,
				unsigned long *outlenp );
int ldap_xlate_utf8_to_local ( char *inbufp,
				unsigned long *inlenp,
				char *outbufp,
				unsigned long *outlenp );
int ldap_xlate_local_to_unicode ( char *inbufp,
				   unsigned long *inlenp,
				   char *outbufp,
				   unsigned long *outlenp );
int ldap_xlate_unicode_to_local ( char *inbufp,
				   unsigned long *inlenp,
				   char *outbufp,
				   unsigned long *outlenp );

/* end V3 api prototypes added under change flag @A3           */

/* @A4 */
char **ldap_explode_dn_utf8 ( char *dn, int notypes );
char **ldap_explode_rdn_utf8 ( char *rdn, int notypes );
int ldap_url_parse_utf8 ( char *url, LDAPURLDesc **ludpp );
int ldap_is_ldap_url_utf8 ( char *url );

/* V5R3M0 Function prototypes  */

/* start api prototypes added under change flag @A8         */

/* LDAP error functions */
int     ldap_get_exterror (
        LDAP                    *ld
);

/* LDAP password policy functions */
int     ldap_parse_pwdpolicy_response (
        LDAPControl             **serverControls,
        int                     *controlerr,
        int                     *controlwarn,
        int                     *controlres
);

char *  ldap_pwdpolicy_err2string (
        int                     err
);

/* LDAP control manipulation functions */
int     ldap_insert_control (
        LDAPControl             *newControl,
        LDAPControl             ***ctrlList
);

int     ldap_add_control (
        char                    *oid,
        ber_len_t               len,
        char                    *value,
        int                     isCritical,
        LDAPControl             ***ctrlList
);

int     ldap_remove_control (
        LDAPControl             *delControl,
        LDAPControl             ***ctrlList,
        int                     freeit
);

int     ldap_copy_controls (
        LDAPControl             ***to_here,
        LDAPControl             **from
);

/* LDAP sorted search extension */
int     ldap_create_sort_keylist (
        LDAPsortkey             ***sortKeyList,
        const char              *sortString
);

void    ldap_free_sort_keylist (
        LDAPsortkey             **sortKeyList
);

int     ldap_create_sort_control (
        LDAP                    *ld,
        LDAPsortkey             **sortKeyList,
        const char              isCritical,
        LDAPControl             **control
);

int     ldap_parse_sort_control (
        LDAP                    *ld,
        LDAPControl             **serverControls,
        unsigned long           *sortRC,
        char                    **attribute
);

/* LDAP simple paged results extension */
int     ldap_create_page_control (
        LDAP                    *ld,
        unsigned long           pageSize,
        struct berval           *cookie,
        const char              isCritical,
        LDAPControl             **control
);

int     ldap_parse_page_control (
        LDAP                    *ld,
        LDAPControl             **serverControls,
        unsigned long           *totalCount,
        struct berval           **cookie
);

/* end api prototypes added under change flag @A8           */


#ifdef __cplusplus
}
#endif

#if (__OS400_TGTVRM__>=510)                               /* @A5A*/
    #pragma datamodel(pop)                                /* @A5A*/
#endif                                                    /* @A5A*/

#endif /* _LDAP_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
