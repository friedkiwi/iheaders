/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2002, 2005                                */
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


#ifndef EIM_h
#define EIM_h
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  eim.h                                          */
/*                                                                   */
/* Descriptive Name: Enterprise Identity Mapping (EIM) APIs          */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the EIM APIs.                 */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON      LEVEL  DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ----------- ------ ------- -------- ---------------------- */
/*   $A0= D9860600    5D20   020202  ROCH     New include.           */
/*   $A1= P9A04903    5D20   020330  ROCH     Fix AIX registry type. */
/*   $01= D9121900    V5R3MO 021215  ROCH     Add policy support.    */
/*                                            Add message catalog    */
/*                                            Id numbers.            */
/*   $02= D9121908    V5R3MO 021215  ROCH     Add new config.        */
/*                                            Add assoc type to      */
/*                                            EimIdentifier struct   */
/*   $03= D9121910    V5R3MO 030216  ROCH     Reorganize structures. */
/*   $04= P9A26515    V5R3MO 030330  ROCH     Add linux registry type*/
/*   $05= P9A28411    V5R3MO 030518  ROCH     Add Tivoli Access      */
/*                                            Manager type, duplicate*/
/*                                            of Policy Director     */
/*   $06= P9A28415    V5R3MO 030720  ROCH     Add Domino reg types.  */
/*   $07= P9A35259    V5R3MO 030803  ROCH     Add new Windows reg    */
/*                                            type defines.          */
/*   $08= P9A36692    V5R3MO 030831  ROCH     Add eimGetVersion      */
/*   $09= P9A78104    V5R3MO 041001  ROCH     Add credential and     */
/*                                            registry group support.*/
/*** END HEADER FILE SPECIFICATIONS **********************************/


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include "gssapi.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma enum(4)
/*--------------------------------------------------------------------*/
/*    Message Catalog Message IDs                                     */
/*--------------------------------------------------------------------*/
#define EIMERR_ACCESS 1
#define EIMERR_ACCESS_TYPE_INVAL 2
#define EIMERR_ACCESS_USERTYPE_INVAL 3
#define EIMERR_ASSOC_TYPE_INVAL 4
#define EIMERR_ATTR_INVAL 5
#define EIMERR_ATTR_NOTSUPP 6
#define EIMERR_AUTH_ERR 7
#define EIMERR_CCSID_INVAL 8
#define EIMERR_CHGTYPE_INVAL 9
#define EIMERR_CONFIG_SIZE 10
#define EIMERR_CONN 11
#define EIMERR_CONN_NOTSUPP 12
#define EIMERR_DATA_CONVERSION 13
#define EIMERR_DOMAIN_EXISTS 14
#define EIMERR_DOMAIN_NOTEMPTY 15
#define EIMERR_EIMLIST_SIZE 16
#define EIMERR_HANDLE_INVAL 17
#define EIMERR_IDACTION_INVAL 18
#define EIMERR_IDENTIFIER_EXISTS 19
#define EIMERR_IDNAME_AMBIGUOUS 20
#define EIMERR_CHAR_INVAL 21
#define EIMERR_PROTECT_INVAL 22
#define EIMERR_LDAP_ERR 23
#define EIMERR_NODOMAIN 24
#define EIMERR_NOIDENTIFIER 25
#define EIMERR_NOLOCK 26
#define EIMERR_NOMEM 27
#define EIMERR_NOREG 28
#define EIMERR_NOREGUSER 29
#define EIMERR_NOTCONFIG 30
#define EIMERR_NOT_CONN 31
#define EIMERR_NOT_SECURE 32
#define EIMERR_NO_SYSREG 33
#define EIMERR_PARM_REQ 34
#define EIMERR_PTR_INVAL 35
#define EIMERR_READ_ONLY 36
#define EIMERR_REGISTRY_EXISTS 37
#define EIMERR_REGKIND_INVAL 38
#define EIMERR_REGNAME_SIZE 39
#define EIMERR_REG_NOTEMPTY 40
#define EIMERR_SPACE 41
#define EIMERR_SSL_REQ 42
#define EIMERR_UNIQUE_SIZE 43
#define EIMERR_UNKNOWN 44
#define EIMERR_URL_NODN 45
#define EIMERR_URL_NODOMAIN 46
#define EIMERR_URL_NOHOST 47
#define EIMERR_URL_NOPORT 48
#define EIMERR_URL_NOTLDAP 49
#define EIMERR_URL_READ_ONLY 50
#define EIMERR_URL_SIZE 51
#define EIMERR_IDNAME_TYPE_INVAL 52
#define EIMERR_ATTRIB_SIZE 53
#define EIMERR_CONN_INVAL 54
#define EIMERR_REG_MUST_BE_NULL 55
#define EIMERR_UNEXP_OBJ_VIOLATION 56
#define EIMERR_RESERVE_INVAL 57
#define EIMERR_CREDS_MUST_BE_NULL 58
#define EIMERR_DOMAIN_UNUSABLE 59
#define EIMERR_POLICY_FILTER_TYPE_INVAL 60
#define EIMERR_NOPOLICYFILTER 61
#define EIMERR_REGTYPE_INVAL 62
#define EIMERR_USER_IDENTITY_TYPE_INVAL 63
#define EIMERR_USER_IDENTITY_SIZE 64
#define EIMERR_USER_IDENTITY_FORMAT_TYPE_INVAL 65
#define EIMERR_INVALID_DN 66
#define EIMERR_CERTIFICATE_INVAL 67
#define EIMERR_CONFIG_FORMAT_INVAL  68
#define EIMERR_TYPE_INVAL  69
#define EIMERR_FUNCTION_NOT_SUPPORTED  70
#define EIMERR_LDAP_SCHEMA_NOT_FOUND  71

/*--------------------------------------------------------------------*/
/*    Constants                                                       */
/*--------------------------------------------------------------------*/

#define EIM_HANDLE_SIZE       16 /* EIM Handle size                   */

#define EIM_LIST_MIN_SIZE     20 /* Minimal size for EimList
                                    structure                         */
#define EIM_RC_MIN_SIZE       48 /* Minimal size for EimRc
                                    structure                         */
#define EIM_CONFIG_MIN_SIZE   36 /* Minimal size for EimConfig
                                    structure                         */
#define EIM_ATTRIBUTE_MIN_SIZE 16 /* Minimal size for EimAttribute
                                    structure                         */


#define EIM_LDAP_URL_MAX    1000 /* Maximum size for LDAP URL         */
#define EIM_LOCREG_MAX       256 /* Maximum size for local registry   */
#define EIM_KRBREG_MAX       256 /* Maximum size for kerberos registry*/
#define EIM_X509REG_MAX      256 /* Maximum size for X.509 reg    @01A*/

#define EIM_UNIQUE_ADD_SIZE   20 /* Minimal additional size required for
                                    identifier unique name            */

/*--------------------------------------------------------------------*/
/*    Configuration constants                                         */
/*--------------------------------------------------------------------*/
#define EIM_CONFIG_NONE "*NONE"

/*--------------------------------------------------------------------*/
/*    Normalization methods                                           */
/*--------------------------------------------------------------------*/
#define EIM_NORM_CASE_IGNORE	"-caseIgnore"
#define EIM_NORM_CASE_EXACT 	"-caseExact"

/*--------------------------------------------------------------------*/
/*    Registry types                                                  */
/*--------------------------------------------------------------------*/
#define EIM_REGTYPE_RACF	"1.3.18.0.2.33.1-caseIgnore"
#define EIM_REGTYPE_OS400	"1.3.18.0.2.33.2-caseIgnore"
#define EIM_REGTYPE_KERBEROS_EX	"1.3.18.0.2.33.3-caseExact"
#define EIM_REGTYPE_KERBEROS_IG	"1.3.18.0.2.33.4-caseIgnore"
#define EIM_REGTYPE_WIN_DOMAIN_KERB_IG "1.3.18.0.2.33.4-caseIgnore"
                                                               /* @07A*/
#define EIM_REGTYPE_AIX     	"1.3.18.0.2.33.5-caseExact"
#define EIM_REGTYPE_NDS     	"1.3.18.0.2.33.6-caseIgnore"
#define EIM_REGTYPE_LDAP    	"1.3.18.0.2.33.7-caseIgnore"
#define EIM_REGTYPE_LDAP_SHORT  "1.3.18.0.2.33.14-caseIgnore"  /* @09A*/
#define EIM_REGTYPE_POLICY_DIRECTOR  	"1.3.18.0.2.33.8-caseIgnore"
#define EIM_REGTYPE_TIVOLI_ACCESS_MANAGER "1.3.18.0.2.33.8-caseIgnore"
                                                               /* @05A*/
#define EIM_REGTYPE_WIN2K   	"1.3.18.0.2.33.9-caseIgnore"
#define EIM_REGTYPE_WINDOWS_LOCAL_WS "1.3.18.0.2.33.9-caseIgnore"
                                                               /* @07A*/
#define EIM_REGTYPE_X509        "1.3.18.0.2.33.10-caseIgnore"  /* @02C*/
#define EIM_REGTYPE_LINUX       "1.3.18.0.2.33.11-caseIgnore"  /* @04A*/
#define EIM_REGTYPE_DOMINO_LONG  "1.3.18.0.2.33.12-caseIgnore" /* @06A*/
#define EIM_REGTYPE_DOMINO_SHORT "1.3.18.0.2.33.13-caseIgnore" /* @06A*/
#define EIM_REGTYPE_GROUP_REGISTRY_IG "1.3.18.0.2.33.17-caseIgnore"
                                                               /* @09A*/
#define EIM_REGTYPE_GROUP_REGISTRY_EX "1.3.18.0.2.33.18-caseExact"
                                                               /* @09A*/
#define EIM_REGTYPE_OTHER_IG "1.3.18.0.2.33.15-caseIgnore"     /* @09A*/
#define EIM_REGTYPE_OTHER_EX "1.3.18.0.2.33.16-caseExact"      /* @09A*/


/*--------------------------------------------------------------------*/
/*    Registry alias types                                            */
/*--------------------------------------------------------------------*/
#define EIM_ALIASTYPE_DNS       "DNSHostName"
#define EIM_ALIASTYPE_KERBEROS  "KerberosRealm"
#define EIM_ALIASTYPE_ISSUER    "IssuerDN"
#define EIM_ALIASTYPE_ROOT      "RootDN"
#define EIM_ALIASTYPE_TCPIP     "TCPIPAddress"
#define EIM_ALIASTYPE_LDAPDNSHOSTNAME  "LdapDnsHostName"
#define EIM_ALIASTYPE_OTHER     "Other"                        /* @01A*/

/*--------------------------------------------------------------------*/
/*    EimHandle Attributes                                            */
/*--------------------------------------------------------------------*/
enum EimHandleAttr {
    EIM_HANDLE_CCSID,
    EIM_HANDLE_DOMAIN,              /* Retrieved but not changed      */
    EIM_HANDLE_HOST,                /* Retrieved but not changed      */
    EIM_HANDLE_PORT,                /* Retrieved but not changed      */
    EIM_HANDLE_SECPORT,             /* Retrieved but not changed      */
    EIM_HANDLE_MASTER_HOST,         /* Retrieved but not changed      */
    EIM_HANDLE_MASTER_PORT,         /* Retrieved but not changed      */
    EIM_HANDLE_MASTER_SECPORT       /* Retrieved but not changed      */
};

/*--------------------------------------------------------------------*/
/*    Attributes to change, add, remove, enable, or disable           */
/*--------------------------------------------------------------------*/
enum EimChangeType {
    EIM_CHG,
    EIM_ADD,
    EIM_RMV,
    EIM_ENABLE,                                               /* @01A*/
    EIM_DISABLE                                               /* @01A*/
};

enum EimDomainAttr
{                                   /* Change type:                  */
    EIM_DOMAIN_DESCRIPTION,         /*     Change                    */
    EIM_DOMAIN_POLICY_ASSOCIATIONS  /*     Enable/Disable        @01A*/
};


enum EimRegistryAttr
{                                   /* Change type:                  */
    EIM_REGISTRY_DESCRIPTION,       /*     Change                    */
    EIM_REGISTRY_LABELEDURI,        /*     Change                    */
    EIM_REGISTRY_MAPPING_LOOKUP,    /*     Enable/Disable        @01A*/
    EIM_REGISTRY_POLICY_ASSOCIATIONS,/*    Enable/Disable        @01A*/
    EIM_REGISTRY_MEMBER              /*    Add/Remove            @09A*/
};

enum EimRegistryUserAttr
{                                   /* Change type:                  */
    EIM_REGISTRYUSER_DESCRIPTION,   /*     Change                    */
    EIM_REGISTRYUSER_ADDL_INFO,     /*     Add or remove             */
    EIM_REGUSER_PASSWORD_CRED,      /*     Change/Remove         @09A*/
    EIM_REGUSER_PWD_CRED_STATUS,    /*     Enable/Disable        @09A*/
    EIM_REGUSER_IDCTX_CRED          /*     Change/Remove         @09A*/
};

enum EimIdentifierAttr
{                                   /* Change type:                  */
    EIM_IDENTIFIER_DESCRIPTION,     /*     Change                    */
    EIM_IDENTIFIER_NAME,            /*     Add or remove             */
    EIM_IDENTIFIER_ADDL_INFO        /*     Add or remove             */
};


/*--------------------------------------------------------------------*/
/*    EimAssociationType                                              */
/*--------------------------------------------------------------------*/
enum EimAssociationType {
    EIM_ALL_ASSOC,
    EIM_TARGET,
    EIM_SOURCE,
    EIM_SOURCE_AND_TARGET,
    EIM_ADMIN,
    EIM_ALL_POLICY_ASSOC,                                      /* @01A*/
    EIM_CERT_FILTER_POLICY,                                    /* @01A*/
    EIM_DEFAULT_REG_POLICY,                                    /* @01A*/
    EIM_DEFAULT_DOMAIN_POLICY                                  /* @01A*/
};

/*--------------------------------------------------------------------*/
/*    EimCredentialType                                               */
/*--------------------------------------------------------------------*/
enum EimCredentialType {
    EIM_PASSWORD_CRED,             /* Password credential.            */
    EIM_IDCTX_CRED                 /* Identity context credential     */
};                                                             /* @09A*/

/*--------------------------------------------------------------------*/
/*    EimRegistryKind                                                 */
/*--------------------------------------------------------------------*/
enum EimRegistryKind {
    EIM_ALL_REGISTRIES,            /* System, application, and group  */
    EIM_SYSTEM_REGISTRY,
    EIM_APPLICATION_REGISTRY,
    EIM_GROUP_REGISTRY                                         /* @09A*/
};

/*--------------------------------------------------------------------*/
/*    EIMHandle                                                       */
/*--------------------------------------------------------------------*/
typedef struct EIMHandle
{
   char        handle[EIM_HANDLE_SIZE];
}  EimHandle;

/*--------------------------------------------------------------------*/
/*    EimBinaryData                                                   */
/*--------------------------------------------------------------------*/
typedef struct EimBinaryData
{
   int              length;
   unsigned char  * data;
}  EimBinaryData;                                              /* @09A*/

/*--------------------------------------------------------------------*/
/*    Eim Connect Information                                         */
/*--------------------------------------------------------------------*/
enum EimPasswordProtect {
    EIM_PROTECT_NO,
    EIM_PROTECT_CRAM_MD5,
    EIM_PROTECT_CRAM_MD5_OPTIONAL
};
enum EimConnectType {
    EIM_SIMPLE,
    EIM_KERBEROS,
    EIM_CLIENT_AUTHENTICATION
};

typedef struct EimSimpleConnectInfo
{
     enum EimPasswordProtect protect;
     char * bindDn;
     char * bindPw;
} EimSimpleConnectInfo;

typedef struct EimSSLInfo
{
     char * keyring;
     char * keyring_pw;
     char * certificateLabel;
} EimSSLInfo;

/* NOTE:  for compatability, do not add any information to the union  */
/*        in this structure that will increase the size of the union. */
typedef struct EimConnectInfo
{
     enum EimConnectType type;
     union {
         gss_cred_id_t * kerberos;
         EimSimpleConnectInfo simpleCreds;
     } creds;
     EimSSLInfo * ssl;
} EimConnectInfo;
/*--------------------------------------------------------------------*/
/*    EimIdAction                                                     */
/*--------------------------------------------------------------------*/
enum EimIdAction {
    EIM_FAIL,
    EIM_GEN_UNIQUE
};
/*--------------------------------------------------------------------*/
/*    EimIdentifierInfo                                               */
/*--------------------------------------------------------------------*/
enum EimIdType {
    EIM_UNIQUE_NAME,
    EIM_ENTRY_UUID,
    EIM_NAME
};

/* NOTE:  for compatability, do not add any information to the union  */
/*        in this structure that will increase the size of the union. */
typedef struct EimIdentifierInfo
{
    union {
        char       * uniqueName;
        char       * entryUUID;
        char       * name;
    } id;
    enum EimIdType        idtype;
} EimIdentifierInfo;

/*--------------------------------------------------------------------*/
/*    EimStatus                                                       */
/*--------------------------------------------------------------------*/
enum EimStatus {
    EIM_STATUS_NOT_ENABLED,
    EIM_STATUS_ENABLED
};                                                             /* @01A*/

/*--------------------------------------------------------------------*/
/*    Eim Policy Information                                          */
/*--------------------------------------------------------------------*/
enum EimPolicyFilterType {
    EIM_ALL_FILTERS,
    EIM_CERTIFICATE_FILTER
};                                                             /* @01A*/
typedef struct EimCertificatePolicyFilter
{
     char * sourceRegistry;
     char * filterValue;
}  EimCertificatePolicyFilter;                                 /* @01A*/

typedef struct EimPolicyFilterInfo
{
     enum EimPolicyFilterType type;
     union {
         EimCertificatePolicyFilter   certFilter;
     } filter;
}  EimPolicyFilterInfo;                                        /* @03C*/

typedef struct EimCertPolicyFilterSubsetInfo
{
     char * subjectFilter;
     char * issuerFilter;
}  EimCertPolicyFilterSubsetInfo;                              /* @01A*/

typedef struct EimPolicyFilterSubsetInfo
{
     union {
         EimCertPolicyFilterSubsetInfo   certFilter;
     } subset;
}  EimPolicyFilterSubsetInfo;                                  /* @01A*/

typedef struct EimCertificateFilterPolicyAssociation
{
     char * sourceRegistry;
     char * filterValue;
     char * targetRegistry;
     char * targetRegistryUserName;
}  EimCertificateFilterPolicyAssociation;                      /* @01A*/

typedef struct EimDefaultRegistryPolicyAssociation
{
     char * sourceRegistry;
     char * targetRegistry;
     char * targetRegistryUserName;
}  EimDefaultRegistryPolicyAssociation;                        /* @01A*/

typedef struct EimDefaultDomainPolicyAssociation
{
     char * targetRegistry;
     char * targetRegistryUserName;
}  EimDefaultDomainPolicyAssociation;                          /* @01A*/

typedef struct EimPolicyAssociationInfo
{
     enum EimAssociationType type;
     union {
         EimCertificateFilterPolicyAssociation   certFilter;
         EimDefaultRegistryPolicyAssociation     defaultRegistry;
         EimDefaultDomainPolicyAssociation       defaultDomain;
     } policyAssociation;
}  EimPolicyAssociationInfo;                                   /* @03C*/

/*--------------------------------------------------------------------*/
/*    Eim User Identity Information                                   */
/*--------------------------------------------------------------------*/
enum EimUserIdentityType {
    EIM_DER_CERT,
    EIM_BASE64_CERT,
    EIM_CERT_INFO
};                                                             /* @01A*/

enum EimUserIdentityFormatType {
    EIM_REGISTRY_USER_NAME
};                                                             /* @01A*/

typedef struct EimCertificateInfo
{
     char          * issuerDN;
     char          * subjectDN;
     unsigned char * publicKey;
     unsigned int    publicKeyLen;
}  EimCertificateInfo;                                         /* @01A*/

typedef struct EimCertificate
{
     char         * certData;
     unsigned int   certLength;
}  EimCertificate;                                             /* @01A*/

typedef struct EimUserIdentityInfo
{
     enum EimUserIdentityType type;
     union {
         EimCertificateInfo   certInfo;
         EimCertificate       cert;
     } userIdentityInfo;
}  EimUserIdentityInfo;                                        /* @03C*/

/*--------------------------------------------------------------------*/
/*    Eim Configuration Information                                   */
/*--------------------------------------------------------------------*/
enum EimConfigFormat {
    EIM_CONFIG_FORMAT_0
};                                                             /* @02A*/

typedef struct EimConfigFormat0
{
     char * ldapURL;
     char * localRegistry;
     char * kerberosRegistry;
     char * x509Registry;
}  EimConfigFormat0;                                           /* @02A*/

typedef struct EimConfigInfo
{
     enum EimConfigFormat format;
     int                  enable;
     int                  ccsid;
     union {
         EimConfigFormat0   format0;
     } config;
}  EimConfigInfo;                                              /* @03C*/

/*--------------------------------------------------------------------*/
/*    Eim Version                                                     */
/*--------------------------------------------------------------------*/
enum EimVersion {
    EIM_VERSION_0,   /* EIM is not supported on the specified host.
		                                                  @08A*/
    EIM_VERSION_1,   /* EIM version 1 is supported by the local EIM
                      APIs for the specified host.  This host
                      supports EIM functionality provided with
                      the first version of the EIM APIs.          @08A*/
    EIM_VERSION_2,   /* EIM version 2 is supported by the local EIM
                      APIs for the specified host.  This host
                      supports EIM functionality provided with
                      the second version of the EIM APIs, which
                      includes policy association support.        @08A*/
    EIM_VERSION_3    /* EIM version 3 is supported by the local EIM
                      APIs for the specified host.  This host
                      supports EIM functionality provided with
                      the third version of the EIM APIs, which
                      includes credentials and group registries.  @09A*/
};

/*--------------------------------------------------------------------*/
/*    Eim Host information for version                                */
/*--------------------------------------------------------------------*/
enum EimHostInfoType {
    EIM_HANDLE,
    EIM_LDAP_URL
};                                                             /* @08A*/

typedef struct EimHostInfo
{
    enum EimHostInfoType  hostType;
    union {
        EimHandle       * eim;
        char            * ldapURL;
    } hostInfo;
} EimHostInfo;                                                 /* @08A*/

/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Return code structure                                           */
/*                                                                    */
/*--------------------------------------------------------------------*/
typedef struct EimRC {
    unsigned int memoryProvidedByCaller; /* Input: Size of the entire RC
                                     structure. This is filled in by
                                     the caller. This is used to tell
                                     the API how much space was provided
                                     for substitution text            */
    unsigned int  memoryRequiredToReturnData;/* Output: Filled in by API
                                     to tell caller how much data could
                                     have been returned. Caller can then
                                     determine if the caller provided
                                     enough space (i.e. if the entire
                                     substitution string was able to be
                                     copied to this structure.        */
    int  returnCode;                /* Same as the errno returned as the
                                     rc for the API                   */
    int messageCatalogSetNbr;       /* Message catalog set number     */
    int messageCatalogMessageID;    /* Message catalog message id     */
    int ldapError;                  /* ldap error, if available       */
    int sslError;                   /* SLL error, if available        */
    char     reserved[16];          /* Reserved for future use        */
    unsigned int substitutionTextLength; /* Length of substitution text
                                     excluding a null-terminator which
                                     may or may not be present        */
    char substitutionText[1];       /* further info describing the
                                     error.                           */
} EimRC;

/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Access structures                                               */
/*                                                                    */
/*--------------------------------------------------------------------*/
enum EimAccessUserType {
    EIM_ACCESS_DN,
    EIM_ACCESS_KERBEROS,
    EIM_ACCESS_LOCAL_USER
};

typedef struct EimAccessUser
{
    union {
        char * dn;
        char * kerberosPrincipal;
        char * localUser;
    } user;
    enum EimAccessUserType userType;
} EimAccessUser;


enum EimAccessType {
    EIM_ACCESS_ADMIN,
    EIM_ACCESS_REG_ADMIN,
    EIM_ACCESS_REGISTRY,
    EIM_ACCESS_IDENTIFIER_ADMIN,
    EIM_ACCESS_MAPPING_LOOKUP,
    EIM_ACCESS_CREDENTIAL_DATA                                 /* @09A*/
};
enum EimAccessIndicator {
    EIM_ACCESS_NO,
    EIM_ACCESS_YES
};
/*--------------------------------------------------------------------*/
/*                                                                    */
/*    EimListData  - this is used to access the data elements.        */
/*    EimSubList   - this is used to access sub lists within the      */
/*              list information returned.                            */
/*--------------------------------------------------------------------*/
typedef struct EimListData
{
    unsigned int length;            /* Length of data                 */
    unsigned int disp;              /* Displacement to data.  This byte
                                     offset is relative to the start of
                                     the parent structure i.e.  the
                                     structure containing this
                                     structure                        */
} EimListData;

typedef struct EimSubList
{
    unsigned int listNum;           /* Number of entries in the list  */
    unsigned int disp;              /* Displacement to sublist. This
                                     byte offset is relative to the
                                     start of the parent structure i.e.
                                     the structure containing this
                                     structure                        */
} EimSubList;
/*--------------------------------------------------------------------*/
/*                                                                    */
/*    EimConfig                                                       */
/*        Information returned from eimRetrieveConfiguration() API.   */
/*--------------------------------------------------------------------*/
typedef struct EimConfig
{
    unsigned int bytesReturned;     /* Number of bytes actually returned
                                     by the API                       */
    unsigned int bytesAvailable;    /* Number of bytes of available data
                                     that could have been returned by
                                     the API                          */
    int          enable;            /* Flag to indicate if enabled to
                                       participate in EIM domain
                                       0 = not enabled
                                       1 = enabled                    */
    EimListData  ldapURL;           /* ldap URL for domain controller */
    EimListData  localRegistry;     /* Local system registry          */
    EimListData  kerberosRegistry;  /* Kerberos registry              */
    EimListData  x509Registry;      /* X.509 registry             @01A*/
} EimConfig;
/*--------------------------------------------------------------------*/
/*                                                                    */
/*    EimAttribute                                                    */
/*        Information returned from eimGetAttribute() API.            */
/*--------------------------------------------------------------------*/
typedef struct EimAttribute
{
    unsigned int bytesReturned;     /* Number of bytes actually returned
                                     by the API                       */
    unsigned int bytesAvailable;    /* Number of bytes of available data
                                     that could have been returned by
                                     the API                          */
    EimListData  attribute;         /* handle attribute               */
} EimAttribute;
/*--------------------------------------------------------------------*/
/*                                                                    */
/*    EimList - this is used by all EIM APIs that return a list.      */
/*              It gives information on the amount of information     */
/*              returned and then gives access to the first list      */
/*              entry.                                                */
/*--------------------------------------------------------------------*/
typedef struct EimList
{
    unsigned int bytesReturned;     /* Number of bytes actually returned
                                     by the API                       */
    unsigned int bytesAvailable;    /* Number of bytes of available data
                                     that could have been returned by
                                     the API                          */
    unsigned int entriesReturned;   /* Number of entries actually
                                     returned by the API              */
    unsigned int entriesAvailable;  /* Number of entries available to be
                                     returned by the API              */
    unsigned int firstEntry;        /* Displacement to the first linked
                                     list entry. This byte offset is
                                     relative to the start of the
                                     EimList structure.               */
} EimList;

/*--------------------------------------------------------------------*/
/*    EimDomain                                                       */
/*       List information returned by the following APIs:             */
/*              eimListDomains                                        */
/*--------------------------------------------------------------------*/
typedef struct EimDomain
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData name;               /* Domain name                    */
    EimListData dn;                 /* Distinguished name for the domain
                                                                      */
    EimListData description;        /* Description                    */
    enum EimStatus  policyAssociations;  /* Policy associations
						attribute         @01A*/

} EimDomain;

/*--------------------------------------------------------------------*/
/*    EimRegistry                                                     */
/*       List information returned by the following APIs:             */
/*              eimListRegistries                                     */
/*--------------------------------------------------------------------*/
typedef struct EimRegistry
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    enum EimRegistryKind  kind;     /* Kind of registry               */
    EimListData name;               /* Registry name                  */
    EimListData type;               /* Registry type                  */
    EimListData description;        /* Description                    */
    EimListData entryUUID;          /* Entry UUID                     */
    EimListData URI;                /* URI                            */
    EimListData systemRegistryName; /* System registry name           */
    EimSubList  registryAlias;      /* EimRegistryAlias sublist       */
    enum EimStatus  mappingLookup;  /* Mapping lookup attribute  @01A*/
    enum EimStatus  policyAssociations; /* Policy associations
					       attribute          @01A*/
    EimSubList  registryMembers;    /* EimRegistryName sublist    @09A*/
    EimSubList  registryGroups;     /* EimRegistryName sublist    @09A*/
} EimRegistry;

/*--------------------------------------------------------------------*/
/*    EimIdentifier                                                   */
/*       List information returned by the following APIs:             */
/*              eimListIdentifiers                                    */
/*              eimGetAssociatedIdentifiers                           */
/*--------------------------------------------------------------------*/
typedef struct EimIdentifier
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData uniquename;         /* Unique name                    */
    EimListData description;        /* Description                    */
    EimListData entryUUID;          /* UUID                           */
    EimSubList  names;              /* EimIdentifierName sublist      */
    EimSubList  additionalInfo;     /* EimAddlInfo sublist            */
    enum EimAssociationType type;   /* Association type - only valid
			          for eimGetAssociatedIdentifiers @02A*/
    EimListData groupRegistry;      /* Group registry used to get the
                                       identifier - only valid for
                                       eimGetAssociatedIdentifiers@09A*/
} EimIdentifier;

/*--------------------------------------------------------------------*/
/*    EimAssociation                                                  */
/*       List information returned by the following APIs:             */
/*              eimListAssociations                                   */
/*--------------------------------------------------------------------*/
typedef struct EimAssociation
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    enum EimAssociationType associationType; /* Type of association   */
    EimListData registryType;       /* Registry type                  */
    EimListData registryName;       /* Registry name                  */
    EimListData registryUserName;   /* Registry user name             */
} EimAssociation;

/*--------------------------------------------------------------------*/
/*    EimRegistryAlias                                                */
/*       List information returned by the following APIs:             */
/*              eimGetRegistryAlias                                   */
/*       Supplemental list information for the following structs:     */
/*              EimRegistry                                           */
/*--------------------------------------------------------------------*/
typedef struct EimRegistryAlias
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData type;               /* Alias type                     */
    EimListData value;              /* Alias value                    */
} EimRegistryAlias;

/*--------------------------------------------------------------------*/
/*    EimRegistryUser                                                 */
/*       List information returned by the following APIs:             */
/*              eimListRegistryUsers                                  */
/*              eimListRegistryUsersCreds                             */
/*--------------------------------------------------------------------*/
typedef struct EimRegistryUser
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData registryUserName;   /* Name                           */
    EimListData description;        /* Description                    */
    EimSubList  additionalInfo;     /* EimAddlInfo sublist            */
    EimSubList  credentialInfo;     /* EimCredentialInfo sublist  @09A*/
} EimRegistryUser;

/*--------------------------------------------------------------------*/
/*  EimTargetIdentity                                                 */
/*     List information returned by the following APIs:               */
/*        eimGetTargetFromSource                                      */
/*        eimGetTargetFromIdentifier                                  */
/*        eimGetTargetCredsFromSource                                 */
/*        eimGetTgtCredsFromIdentifier                                */
/*--------------------------------------------------------------------*/
typedef struct EimTargetIdentity
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData userName;           /* User name                      */
    enum EimAssociationType type;   /* Association type           @01A*/
    EimListData sourceGroupRegistry;/* Source group registry name @09A*/
    EimListData targetGroupRegistry;/* Target group registry name @09A*/
    EimSubList  credentialInfo;     /* EimCredentialInfo sublist  @09A*/
} EimTargetIdentity;

/*--------------------------------------------------------------------*/
/*  EimIdentifierName                                                 */
/*     Supplemental list information for the following structs:       */
/*        EimIdentifier                                               */
/*--------------------------------------------------------------------*/
typedef struct EimIdentifierName
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData name;               /* Name                           */
} EimIdentifierName;
/*--------------------------------------------------------------------*/
/*  EimRegistryName                                                   */
/*     List information returned by the following APIs:               */
/*        eimGetRegistryNameFromAlias                                 */
/*--------------------------------------------------------------------*/
typedef struct EimRegistryName
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData name;               /* Name                           */
} EimRegistryName;

/*--------------------------------------------------------------------*/
/*  EimAddlInfo                                                       */
/*--------------------------------------------------------------------*/
/*     Supplemental list information for the following structs:       */
/*        EimRegistryUser                                             */
/*        EimIdentifier                                               */
/*--------------------------------------------------------------------*/
typedef struct EimAddlInfo
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData addlInfo;           /* Additional info                */
} EimAddlInfo;

/*--------------------------------------------------------------------*/
/*  EimCredentialInfo                                                 */
/*--------------------------------------------------------------------*/
/*     Supplemental list information for the following structs:       */
/*        EimRegistryUser                                             */
/*        EimTargetIdentity                                           */
/*--------------------------------------------------------------------*/
typedef struct EimCredentialInfo
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    enum EimCredentialType type;    /* Credential type                */
    enum EimStatus         status;  /* Credential status
                                       0 = not enabled
                                       1 = enabled                    */
    EimListData            data;    /* Credential data                */
} EimCredentialInfo;                                           /* @09A*/

/*--------------------------------------------------------------------*/
/*  EimPolicyFilter                                                   */
/*--------------------------------------------------------------------*/
/*     List information returned by the following APIs:               */
/*        eimListPolicyFilters                                        */
/*--------------------------------------------------------------------*/
typedef struct EimPolicyFilter
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    enum EimPolicyFilterType type;  /* Type of policy filter.         */
    EimListData sourceRegistry;     /* Source registry name the policy
                                     filter is defined for.           */
    EimListData filterValue;        /* Filter value.                  */
} EimPolicyFilter;                                             /* @01A*/

/*--------------------------------------------------------------------*/
/*  EimRegistryAssociation                                            */
/*--------------------------------------------------------------------*/
/*     List information returned by the following APIs:               */
/*        eimListRegistryAssociations                                 */
/*--------------------------------------------------------------------*/
typedef struct EimRegistryAssociation
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    enum EimAssociationType type;   /* Type of association.           */
    EimListData registryName;       /* Registry name the association
                                     is defined to.                   */
    EimListData registryUserName;   /* Registry user name the
                                     association is defined to.       */
    EimListData identifier;         /* Unique name for eim identifier */
    EimListData sourceRegistry;     /* Source registry name the
                                     association is defined for.      */
    EimListData filterValue;        /* Filter value                   */
    enum EimStatus domainPolicyAssocStatus;
                                    /* Policy association status for
                                     the domain:
                                     0 = not enabled
                                     1 = enabled                      */
    enum EimStatus sourceMappingLookupStatus;
                                    /* Mapping lookup status for the
                                     source registry:
                                     0 = not enabled
                                     1 = enabled                      */
    enum EimStatus targetMappingLookupStatus;
                                    /* Mapping lookup status for the
                                     target registry:
                                     0 = not enabled
                                     1 = enabled                      */
    enum EimStatus targetPolicyAssocStatus;
                                    /* Policy association status for
                                     the target registry:
                                     0 = not enabled
                                     1 = enabled                      */
} EimRegistryAssociation;                                      /* @01A*/

/*--------------------------------------------------------------------*/
/*  EimPolicyFilterValue                                              */
/*--------------------------------------------------------------------*/
/*     List information returned by the following APIs:               */
/*        eimFormatPolicyFilter                                       */
/*--------------------------------------------------------------------*/
typedef struct EimPolicyFilterValue
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData filterValue;        /* Generated policy filter value  */
} EimPolicyFilterValue;                                        /* @01A*/

/*--------------------------------------------------------------------*/
/*  EimUserIdentity                                                   */
/*--------------------------------------------------------------------*/
/*     Information returned by the following APIs:                    */
/*        eimFormatUserIdentity                                       */
/*--------------------------------------------------------------------*/
typedef struct EimUserIdentity
{
    unsigned int bytesReturned;     /* Number of bytes actually
                                    by the API.                       */
    unsigned int bytesAvailable;    /* Number of bytes of available
                                    data that could be returned by
                                     the API.                         */
    EimListData userIdentity;     /* User identity                    */
} EimUserIdentity;                                             /* @01A*/

/*--------------------------------------------------------------------*/
/*  EimAccess                                                         */
/*--------------------------------------------------------------------*/
/*     List information returned by the following APIs:               */
/*        eimListAccess                                               */
/*--------------------------------------------------------------------*/
typedef struct EimAccess
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
                                     start of this structure          */
    EimListData user;               /* User with access. This data will
                                       be in the format of the dn for
                                       for access id                  */
} EimAccess;

/*--------------------------------------------------------------------*/
/*  EimUserAccess                                                     */
/*--------------------------------------------------------------------*/
/*     List information returned by the following APIs:               */
/*        eimListUserAccess                                           */
/*--------------------------------------------------------------------*/
typedef struct EimUserAccess
{
    unsigned int nextEntry;         /* Displacement to next entry.  This
                                     byte offset is relative to the
				     start of this structure          */
    enum EimAccessIndicator eimAdmin;
    enum EimAccessIndicator eimRegAdmin;
    enum EimAccessIndicator eimIdenAdmin;
    enum EimAccessIndicator eimMappingLookup;
    EimSubList  registries;         /* EimRegistryName sublist        */
    enum EimAccessIndicator eimCredentialData;                 /* @09A*/
} EimUserAccess;

/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Domain                                                          */
/*                                                                    */
/*--------------------------------------------------------------------*/

int eimCreateDomain
   (
    char           * ldapURL,       /* Input:  ldap URL that indicates
                                      host, port, parent dn           */
    EimConnectInfo   connectInfo,   /* Input: Connection information  */
    char           * description,   /* Input: Domain description      */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimDeleteDomain
   (
    char           * ldapURL,       /* Input:  ldap URL that indicates
                                      host, port, parent dn           */
    EimConnectInfo   connectInfo,   /* Input: Connection information  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimChangeDomain
   (
    char           * ldapURL,       /* Input:  ldap URL that indicates
                                      host, port, parent dn           */
    EimConnectInfo   connectInfo,   /* Input: Connection information  */
    enum EimDomainAttr attrName,    /* Input: Attribute to change     */
    char           * attrValue,     /* Input: New attribute value     */
    enum EimChangeType changeType,  /* Input: Type of change          */
    EimRC          * eimrc          /* Input/Output: return code      */
    );


int eimListDomains
   (
    char           * ldapURL,       /* Input:  ldap URL that indicates
                                      host, port, parent dn           */
    EimConnectInfo   connectInfo,   /* Input: Connection information  */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimDomain element.       */
    EimRC          * eimrc          /* Input/Output: return code      */
    );
/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Configuration                                                   */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimSetConfiguration
   (
    int              enable,        /* Input:  indicate if enabled to
                                       participate in EIM domain
                                       0 = not enabled
                                       1 = enabled                    */
    char           * ldapURL,       /* Input: LDAP URL configuration
                                      information: host, port and
                                      domain dn                       */
    char           * localRegistry, /* Input: Local registry name     */
    char           * kerberosRegistry, /* Input:  Kerberos registry   */
    int              ccsid,         /* CCSID of the input data        */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimSetConfigurationExt
   (
    EimConfigInfo  * configInfo,    /* Input:  configuration info.    */
    EimRC          * eimrc          /* Input/Output: return code      */
    );                                                         /* @02A*/

int eimRetrieveConfiguration
   (
    unsigned int     lengthOfEimConfig, /* Input: size provided for
                                       configData                     */
    EimConfig      * configData,    /* Output: Configuration data
                                       returned.                      */
    int              ccsid,         /* CCSID the data will be returned
			               in                             */
    EimRC          * eimrc          /* Input/Output: return code      */
    );
/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Handles                                                         */
/*                                                                    */
/*--------------------------------------------------------------------*/

int eimCreateHandle
   (
    EimHandle      * eim,           /* Output: eimHandle              */
    char           * ldapURL,       /* Input:  ldap URL that indicates
                                      host, port, parent dn           */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimDestroyHandle
   (
    EimHandle      * eim,           /* Input: eimHandle               */
    EimRC          * eimrc          /* Input/Output: return code      */
   );

int eimGetAttribute
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimHandleAttr attrName,    /* Input: name of attribute to get
                                                                      */
    unsigned int lengthOfEimAttribute, /* Input: size provided for
                                       EimAttribute                   */
    EimAttribute  * attribute,      /* Output: Attribute data
                                       returned.                      */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimSetAttribute
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimHandleAttr attrName,    /* Input: name of attribute to set
                                                                      */
    void           * attrValue,     /* Input: Pointer to buffer to
                                     the new attribute value          */
    EimRC          * eimrc          /* Input/Output: return code      */
    );


int eimGetVersion
   (
    EimHostInfo    * hostInfo,      /* Input: Host information        */
    enum EimVersion * version,      /* Output:  version number        */
    EimRC          * eimrc          /* Input/Output: return code      */
    );                              /*                            @08A*/


/*--------------------------------------------------------------------*/
/*                                                                    */
/*   Connect                                                          */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimConnect
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimConnectInfo   connectInfo,   /* Input: Connection information  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );
int eimConnectToMaster
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimConnectInfo   connectInfo,   /* Input: Connection information  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );


/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Registries                                                      */
/*                                                                    */
/*--------------------------------------------------------------------*/

int eimAddSystemRegistry
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * registryType,  /* Input: Registry type           */
    char           * description,   /* Input: Description             */
    char           * URI,           /* Input: URI                     */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimAddApplicationRegistry
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * registryType,  /* Input: Registry type           */
    char           * description,   /* Input: Description             */
    char           * systemRegistryName, /* Input: Associated system
                                       registry                       */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimAddGroupRegistry
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * registryType,  /* Input: Registry type           */
    char           * description,   /* Input: Description             */
    EimRC          * eimrc          /* Input/Output: return code      */
    );                                                         /* @09A*/

int eimRemoveRegistry
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimChangeRegistry
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    enum EimRegistryAttr attrName,  /* Input: name of attribute to
                                     change.                          */
    char           * attrValue,     /* Input: new value for attribute */
    enum EimChangeType changeType,  /* Input: Type of change to make  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimListRegistries
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * registryType,  /* Input: Registry type           */
    enum EimRegistryKind registryKind,/* Input: Registry kind         */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimRegistry element      */
    EimRC          * eimrc          /* Input/Output: return code      */
    );


/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Identifier                                                      */
/*                                                                    */
/*--------------------------------------------------------------------*/

int eimAddIdentifier
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * name,          /* Input: Requested name for
                                       Identifier                     */
    enum EimIdAction nameInUseAction, /* Input: Action to take if the
                                     requested name is already in use */
    unsigned int * sizeOfUniqueName, /* Input/Output: size of
                                     uniqueName field                 */
    char           * uniqueName,    /* Output: Unique name            */
    char           * description,   /* Input: Description             */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimRemoveIdentifier
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimChangeIdentifier
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    enum EimIdentifierAttr attrName, /* Input: name of attribute to
                                     change.                          */
    char           * attrValue,     /* Input: new value for attribute */
    enum EimChangeType changeType,  /* Input: Type of change to make  */
    EimRC          * eimrc          /* Input/Output: return code      */

    );
int eimListIdentifiers
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimIdentifier element    */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimGetAssociatedIdentifiers
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimAssociationType associationType, /* Input: Type of
                                       association                    */
    char           * registryName,  /* Input: Registry name           */
    char           * registryUserName, /* Input: Registry user name   */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimIdentifier element    */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Association                                                     */
/*                                                                    */
/*--------------------------------------------------------------------*/

int eimAddAssociation
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimAssociationType associationType, /* Input: Type of
                                       association                    */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    char           * registryName,  /* Input: Registry name           */
    char           * registryUserName, /* Input: Registry user name   */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimRemoveAssociation
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimAssociationType associationType, /* Input: Type of
                                       association                    */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    char           * registryName,  /* Input: Registry name           */
    char           * registryUserName, /* Input: Registry user name   */
    EimRC          * eimrc          /* Input/Output: return code      */
    );


int eimListAssociations
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimAssociationType associationType, /* Input: Type of
                                       association                    */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimAssociation element   */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimListRegistryAssociations
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimAssociationType associationType,  /* Input: Type of policy
                                       association                    */
    char           * registryName,  /* Input: Registry name           */
    char           * registryUserName, /* Input: Registry user name   */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimRegistryAssociation
                                       element                        */
    EimRC          * eimrc          /* Input/Output: return code      */
   );                                                          /* @01A*/


/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Mappings                                                        */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimGetTargetFromSource
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * sourceRegistryName,/* Input: Source registry name
                                                                      */
    char           * sourceRegistryUserName,/* Input: Source registry
                                       user name                      */
    char           * targetRegistryName, /* Input: Target registry name
                                                                      */
    char           * additionalInformation, /* Input: Additional info */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimTargetIdentity element*/
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimGetTargetCredsFromSource
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * sourceRegistryName,/* Input: Source registry name
                                                                      */
    char           * sourceRegistryUserName,/* Input: Source registry
                                       user name                      */
    char           * targetRegistryName, /* Input: Target registry name
                                                                      */
    char           * additionalInformation, /* Input: Additional info */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimTargetIdentity element*/
    EimRC          * eimrc          /* Input/Output: return code      */
    );                                                         /* @09A*/

int eimGetTargetFromIdentifier
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    char           * targetRegistryName, /* Input: Target registry name
                                                                      */
    char           * additionalInformation, /* Input: Additional info */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimTargetIdentity element*/
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimGetTgtCredsFromIdentifier
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimIdentifierInfo * idName,     /* Input: Identifier info         */
    char           * targetRegistryName, /* Input: Target registry name
                                                                      */
    char           * additionalInformation, /* Input: Additional info */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimTargetIdentity element*/
    EimRC          * eimrc          /* Input/Output: return code      */
    );                                                         /* @09A*/


/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Registry User                                                   */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimChangeRegistryUser
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * registryUserName, /* Input: Registry user name   */
    enum EimRegistryUserAttr attrName, /* Input: name of attribute to
                                     change.                          */
    char           * attrValue,     /* Input: new value for attribute */
    enum EimChangeType changeType,  /* Input: Type of change to make  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimListRegistryUsers
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * registryUserName, /* Input: Registry user name   */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimRegistryUser element  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimListRegistryUsersCreds
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * registryUserName, /* Input: Registry user name   */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimRegistryUser element  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );                                                         /* @09A*/

/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Registry Alias                                                  */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimChangeRegistryAlias
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    char           * aliasType,     /* Input: Registry alias type     */
    char           * aliasValue,    /* Input: Registry alias value    */
    enum EimChangeType changeType,  /* Input: Type of change to make  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );


int eimListRegistryAliases
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * registryName,  /* Input: Registry name           */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimRegistryAlias element */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimGetRegistryNameFromAlias
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    char           * aliasType,     /* Input: Registry alias type     */
    char           * aliasValue,    /* Input: Registry alias value    */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimRegistryName element  */
    EimRC          * eimrc          /* Input/Output: return code      */
    );



/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Policies                                                        */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimFormatPolicyFilter
   (
    EimUserIdentityInfo * userIdentityInfo, /* Input: User identity
                                       information to format          */
    EimPolicyFilterSubsetInfo * subsetInfo, /* Input: Subset info     */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimPolicyFilterValue
                                       element                        */
    EimRC          * eimrc          /* Input/Output: return code      */
   );                                                          /* @01A*/

int eimAddPolicyFilter
   (
    EimHandle           * eim,      /* Input: Eim handle              */
    EimPolicyFilterInfo * filterInfo, /* Input: Policy filter info    */
    EimRC               * eimrc     /* Input/Output: return code      */
   );                                                          /* @01A*/

int eimRemovePolicyFilter
   (
    EimHandle           * eim,      /* Input: Eim handle              */
    EimPolicyFilterInfo * filterInfo, /* Input: Policy filter info    */
    EimRC               * eimrc     /* Input/Output: return code      */
   );                                                          /* @01A*/

int eimListPolicyFilters
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimPolicyFilterType filterType,  /* Input: Type of policy
                                       filter                         */
    char           * registryName,  /* Input: Registry name           */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimPolicyFilter element  */
    EimRC          * eimrc          /* Input/Output: return code      */
   );                                                          /* @01A*/

int eimAddPolicyAssociation
   (
    EimHandle           * eim,      /* Input: Eim handle              */
    EimPolicyAssociationInfo * policyAssoc, /* Input: Policy
                                       association info               */
    EimRC               * eimrc     /* Input/Output: return code      */
   );                                                          /* @01A*/

int eimRemovePolicyAssociation
   (
    EimHandle           * eim,      /* Input: Eim handle              */
    EimPolicyAssociationInfo * policyAssoc, /* Input: Policy
                                       association info               */
    EimRC               * eimrc     /* Input/Output: return code      */
   );                                                          /* @01A*/



/*--------------------------------------------------------------------*/
/*                                                                    */
/*    User Identities                                                 */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimFormatUserIdentity
   (
    enum EimUserIdentityFormatType formatType,  /* Input: Type of format
                                       to return                      */
    EimUserIdentityInfo * userIdentityInfo, /* Input: User identity
                                       information to format          */
    unsigned int      lengthOfUserIdentity, /* Input:  size provided for
                                       userIdentity                   */
    EimUserIdentity * userIdentity, /* Output:  formatted user
                                       identity                       */
    EimRC           * eimrc         /* Input/Output: return code      */
   );                                                          /* @01A*/



/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Access                                                          */
/*                                                                    */
/*--------------------------------------------------------------------*/
int eimAddAccess
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimAccessUser  * accessUser,    /* Input: User for access         */
    enum EimAccessType accessType,  /* Input: Type of access          */
    char           * registryName,  /* Input: Registry name           */
    EimRC          * eimrc          /* Input/Output: return code      */
    );

int eimRemoveAccess
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimAccessUser  * accessUser,    /* Input: User for access         */
    enum EimAccessType accessType,  /* Input: Type of access          */
    char           * registryName,  /* Input: Registry name           */
    EimRC          * eimrc          /* Input/Output: return code      */
    );
int eimListAccess
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    enum EimAccessType accessType,  /* Input: Type of access          */
    char           * registryName,  /* Input: Registry name           */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimAccess element        */
    EimRC          * eimrc          /* Input/Output: return code      */
    );
int eimListUserAccess
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimAccessUser  * accessUser,    /* Input: User for access         */
    unsigned int     lengthOfListData, /* Input:  size provided for
                                       listData                       */
    EimList        * listData,      /* Output:  In EimList the field
                                       firstEntry will get to the
                                       first EimUserAccess element    */
    EimRC          * eimrc          /* Input/Output: return code      */
    );
int eimQueryAccess
   (
    EimHandle      * eim,           /* Input: Eim handle              */
    EimAccessUser  * accessUser,    /* Input: User for access         */
    enum EimAccessType accessType,  /* Input: Type of access          */
    char           * registryName,  /* Input: Registry name           */
    unsigned int * accessIndicator, /* Output:  Indicates
                                       whether access found           */
    EimRC          * eimrc          /* Input/Output: return code      */
    );


/*--------------------------------------------------------------------*/
/*                                                                    */
/*    Error Message                                                   */
/*                                                                    */
/*--------------------------------------------------------------------*/
char * eimErr2String
   (
    EimRC          * eimrc          /* Input: return code             */
    );


#pragma enum(pop)

#ifdef __cplusplus
}
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* EIM_h */

