/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2005                                */
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
/* Header File Name: H/EWLMPOLS                                      */
/*                                                                   */
/* Description: This file contains declarations of macros and        */
/*              and data structures, related to EWLM policy.         */
/*              These declatations apply to EWLM version 1.0.        */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/*      D99691.6     5D30  040105 AP:       New File                 */
/*      P9A83505     5D30  050413 AP:       Policy update            */
/* End CFD List.                                                     */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef  _ewlmpols_h
  #define  _ewlmpols_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include <ewlmplat.h>  /* EWLM platform enablement declarations */

#ifdef __OS400__
   #pragma pack(1)
   #pragma enum(int)
#endif

/*
 * Version numbers
 */
#define WLMPOL_VER_EWLM_10      1
#define WLMPOL_VER_CURR         WLMPOL_VER_EWLM_10


/*
 *
 * Eyecatcher type definition. Every structure begins with an eye
 * catcher, that is a maximum 8 Bytes long and contains an eye
 * catcher as a (non-0-terminated) string padded with blanks.
 */
typedef char WlmpolEyecatcher[ 8];

/*
 * UUID type definition.
 */
typedef char WlmpolUUID[16];

/*
 * Type definition template for a 'String' structure.
 *
 * It consists of an int field which is the offset
 * from the beginning the WlmpolString structure
 * to the encoded string. The actual encoded strings
 * are located as follows:
 *
 *   WlmpolHeader--->+---------------+
 *                   | EWLM Policy   |
 *                   | Header        |
 *                   - ------------- -
 *                   | EWLM policy   |
 *                   | structures    |
 *                   |               |
 *   strings area -->- ------------- -
 *                   | EWLM policy   |
 *                   | strings       |
 *                   |               |
 *                   +---------------+
 *
 * Each encoding starts with a two-byte length field that holds
 * the length of the following encoding in bytes.
 * All encodings associated with a Application Environment and Process
 * Class will automatically inherit the fixed encoding from them.
 * All other structures (i.e. WlmpolPolicy, WlmpolWorkload,
 * WlmpolServiceClass) will have a UTF-8 encoding.
 *
 * To access the encodings from C/C++ use the following functions
 * (implemented as C-macros):
 *
 * const char * const getEncodedString(const WlmpolString * const)
 *
 * To access the length of the encodings from C/C++ use the C-macros
 *
 * short getWlmpolStringLen(const WlmpolString * const,offset)
 */

typedef enum {
    WLMPOL_ENC_UTF16  = 1,  /* encoding values                        */
    WLMPOL_ENC_ASCII  = 2,
    WLMPOL_ENC_NATIVE = 3,
    WLMPOL_ENC_UTF8   = 4
} WlmpolEncoding ;

typedef enum {
    WLMPOL_WILDCARD_CHAR  = 1,
    WLMPOL_WILDCARD_STR  = 2
} WlmpolWildcardType ;


typedef struct {
   int offsetEncoding;  /* Offset to encoded string,                         */
                        /* 0 if this encoding does not exist or has a numeric*/
                        /* representation.                                   */
   ewlmpol_int_t numericValue[3];
                        /* 1st Numeric value of the string if offsetEncoding */
                        /* is set to 0.  numericValue[0] is set to 0 if this */
                        /* is a string representation (offsetEncoding>0)     */

                        /* 2nd Numeric value of the string if offsetEncoding */
                        /* is set to 0.  numericValue[1] is set to 0 if this */
                        /* is a string representation (offsetEncoding>0)     */

                        /* 3rd Numeric value of the string if offsetEncoding */
                        /* is set to 0.  numericValue[2] is set to 0 if this */
                        /* is a string representation (offsetEncoding>0)     */
  int encodedType  ;    /* type of encoding (see encoding enumeration)       */

} WlmpolString;

/*
 * Enumeration type definition for a 'Goal Type'.
 */
typedef enum {
   GOAL_NONE = 0,            /* No goal                                      */
   GOAL_PER  = 1,            /* PercentileResponseTime goal                  */
   GOAL_AVG  = 2,            /* AverageResponseTime goal                     */
   GOAL_VEL  = 3,            /* Velocity goal                                */
   GOAL_DSC  = 4             /* Discretionary goal                           */
} WlmpolGoaltype;

/*
 * Enumeration type definition for a 'Goal Importance'.
 */
typedef enum {
   IMP_NONE    = 0,          /* No importance                                */
   IMP_HIGHEST = 1,          /* Highest                                      */
   IMP_HIGH    = 2,          /* High                                         */
   IMP_MEDIUM  = 3,          /* Medium                                       */
   IMP_LOW     = 4,          /* Low                                          */
   IMP_LOWEST  = 5           /* Lowest                                       */
} WlmpolGoalimp;

/*
 * Enumeration type definition for velocity goal levels.
 */
typedef enum {
   VEL_NONE    = 0,          /* No velocity                                  */
   VEL_FASTEST = 1,          /* Fastest                                      */
   VEL_FAST    = 2,          /* Fast                                         */
   VEL_MODERATE= 3,          /* Moderate                                     */
   VEL_SLOW    = 4,          /* Slow                                         */
   VEL_SLOWEST = 5           /* Slowest                                      */
   } WlmpolVelLevel;

/*
 * Enumeration type definition for filter operations.
 */
typedef enum {
   FILTEROP_NONE                  =  0, /* No valid operation                */
   FILTEROP_STRING_MATCH          =  1, /* string match                      */
   FILTEROP_RESERVE2              =  2, /*                                   */
   FILTEROP_STRING_NOT_MATCH      =  3, /* not match                         */
   FILTEROP_RESERVE4              =  4, /*                                   */
   FILTEROP_RESERVE5              =  5, /*                                   */
   FILTEROP_RESERVE6              =  6, /*                                   */
   FILTEROP_RESERVE7              =  7, /*                                   */
   FILTEROP_RESERVE8              =  8, /*                                   */
   FILTEROP_RESERVE9              =  9, /*                                   */
   FILTEROP_RESERVE10             = 10  /*                                   */
} WlmpolFilterop;


typedef enum {
 FILTER_TRANSACTION=1,
  FILTER_PROCESS = 2
} WlmpolFilterclass;

 /*
 * Enumeration type definition for 'Process Class Filters'.
 */
typedef enum {
   FILPCTYPE_EX_PATH        = 0,          /* Executable Path                 */
   FILPCTYPE_USER_NAME      = 1,          /* User Name                       */
   FILPCTYPE_GRP_NAME       = 2,          /* Group Name                      */
   FILPCTYPE_WLM_TAG        = 3,          /* WLM Tag                         */
   FILPCTYPE_JOB_NAME       = 4,          /* Job Name                        */
   FILPCTYPE_EFF_USR_PROF   = 5,          /* Effective User Profile          */
   FILPCTYPE_EFF_GRP_PROF   = 6,          /* Effective Group Profile         */
   FILPCTYPE_JOB_USR_NAME   = 7,          /* Job User Name                   */
   FILPCTYPE_CMD_BASENAME   = 8,          /* Command Basename                */
   FILPCTYPE_JOB_ACCT_CODE  = 9,          /* Job Accounting code             */
   FILPCTYPE_JOB_DESCR      = 10,         /* Job Description                 */
   FILPCTYPE_COMMAND        = 11,         /* Command Line Argument           */
   FILPCTYPE_SUBSYSTEM      = 12,         /* Subsystem Name                  */
   FILPCTYPE_INVALID        = 13          /* INVALID TYPE                    */
} WlmpolPCFilterType;

/*
 * Enumeration type definition for 'Transaction Class Filters'.
 */
typedef enum {
   FILTCTYPE_APP_INST       = 1,          /* Application Instance            */
   FILTCTYPE_TRANS_NAME     = 2,          /* Transaction Name                */
   FILTCTYPE_USER_ID        = 3,          /* User ID                         */
   FILTCTYPE_USER_NAME      = 4,          /* User Name                       */
   FILTCTYPE_URI            = 5,          /* URI                             */
   FILTCTYPE_PROPERTY       = 6,          /* Property Name                   */
   FILTCTYPE_INVALID        = 13          /* INVALID TYPE                    */
} WlmpolTCFilterType;

/*
 * Wildcards are specified as special strings both in
 * the XML document and the native structures
 */

#define WLMPOL_WILDCARD_ONECHAR              "(\\?)"
#define WLMPOL_WILDCARD_ARBITRARY_STRING     "(\\*)"
#define WLMPOL_WILDCARD_ARBITRARY_NAT_STRING "(\\*)"
#define WLMPOL_WILDCARD_ARBITRARY_ASC_STRING "\x28\x5C\x2A\x29"
/* wildcard one character      (\?) */
#define WLMPOL_WILDONEC_UTF8               "\x28\x5C\x3F\x29"
#define WLMPOL_WILDONEC_UTF16_BE           "\x00\x28\x00\x5C\x00\x3F\x00\x29"
#define WLMPOL_WILDONEC_UTF16_LE           "\x28\x00\x5C\x00\x3F\x00\x29\x00"
#define WLMPOL_WILDONEC_SINGLE_UTF8        "\xFE"
#define WLMPOL_WILDONEC_SINGLE_UTF16_BE    "\xFF\xFE"
#define WLMPOL_WILDONEC_SINGLE_UTF16_LE    "\xFE\xFF"
/* wildcard arbitrary string   (\*) */
#define WLMPOL_WILDARBITRARY_UTF8          "\x28\x5C\x2A\x29"
#define WLMPOL_WILDARBITRARY_UTF16_BE      "\x00\x28\x00\x5C\x00\x2A\x00\x29"
#define WLMPOL_WILDARBITRARY_UTF16_LE      "\x28\x00\x5C\x00\x2A\x00\x29\x00"
#define WLMPOL_WILDARBITRARY_SINGLE_UTF8   "\xFF"
/* 2 Definitions of WILDARBITRARY_SINGLE for BE and LE is not */
/* neccesary since FFFF is the same for BE and LE */
#define WLMPOL_WILDARBITRARY_SINGLE_UTF16  "\xFF\xFF"

/*
 * Type definition for a short time value in the EWLM Policy.
 * Since the maximum range is 99 hours 59 min 59 sec 999 mSec,
 * we can live with a int value that holds the time in milliseconds
 */
typedef int WlmpolTime;     /* Time in a policy (milliseconds)               */

/*
 * Type definition for service class or report class key. Note
 * that the key is not necessarily in Network Byte Order (NBO).
 * On little endian platforms (Windows/Intel, Linux/86) an application
 * must reverse the order of the two bytes before storing the
 * key into a correlator which expects the key in NBO.
 */
typedef ewlm_int16_t   WlmpolClassKey; /* Key of a service,transaction or    */
                                       /* process class                      */
#define WLMPOL_INVALID_KEY -1

/*
 * Type definition for a Structure descriptor area (SDA). This area
 * contains the offset (from the beginning of the header), the number
 * and the actual length of the section(s)
 */
typedef struct
{
   int sOffset;                         /* Offset to first section           */
   int sNumber;                         /* Number of sections                */
   int sLength;                         /* Length of one section             */
} WlmpolSDA;

/*
 * Type definition for the common beginning of every structure
 */
typedef struct {
   WlmpolEyecatcher eyeCatcher;        /* Eye catcher                        */
   int              offsetHeader;      /* Offset to header                   */
}  WlmpolCommon;

/*
 * Type definition for the policy header. The header contains
 * an Eyecatcher, the version of the structures and the structure
 * descriptor areas for all structures following the header.
 */
#define WLMPOL_EYEHEADER "WLM_Hdr."

typedef struct
{
   WlmpolEyecatcher eyeCatcher;        /* Header eye catcher                 */
   int              offsetHeader;      /* Offset to header (unused)          */
                                       /*                                    */
   int              versionStructures; /* Version of structures              */
   int              headerLength;      /* Length of this header              */
   int              totalLength;       /* Length of native policy            */
   int              __reserved1;       /* Reserved                           */
   int              __reserved2;       /* Reserved                           */
   int              __reserved3;       /* Reserved                           */
   int              __reserved4;       /* Reserved                           */
   int              __reserved5;       /* Reserved                           */
                                       /*                                    */
   WlmpolSDA        policySDA;         /* Policy                             */
   WlmpolSDA        workloadSDA;       /* Workloads                          */
   WlmpolSDA        srvclassSDA;       /* Service classes                    */
   WlmpolSDA        goalSDA;           /* Goals (periods)                    */
   WlmpolSDA        application1SDA;   /* Application UTF16                  */
   WlmpolSDA        application2SDA;   /* Application ASCII                  */
   WlmpolSDA        application3SDA;   /* Application NAT                    */
   WlmpolSDA        serverSDA;         /* Server platform                    */
   WlmpolSDA        transclassSDA;     /* Transaction class                  */
   WlmpolSDA        procclassSDA;      /* Process class                      */
   WlmpolSDA        filterTCSDA;       /* Transaction class Filters          */
   WlmpolSDA        filterPCSDA;       /* Process class Filters              */
   WlmpolSDA        filterValueSDA;    /* Filter values(TC and PC)           */
   WlmpolSDA        embeddedWCSDA;     /* Embedded wildcard array            */
   WlmpolSDA        __reserved19;      /* Reserved                           */
} WlmpolHeader;

/*
 * Type definition for the policy itself.
 *
 * To access the WlmpolPolicy structure within the native policy
 * storage area, use the
 *
 * const WlmpolPolicy * const getPolicy(const WlmpolHeader *)
 *
 * function. For better performance this function has been
 * implemented as a C-macro.
 */
#define WLMPOL_EYEPOLICY  "WLM_Pol."

typedef struct
{
   WlmpolEyecatcher eyeCatcher;        /* Policy Eye catcher                 */
   int              offsetHeader;      /* Offset to header                   */
                                       /*                                    */
   ewlm_int32_t     padding;           /* 4 byte padding                     */
   ewlm_int64_t     userData;          /* To be used for platforms           */
   WlmpolString     name;              /* Service Policy name                */
   WlmpolString     description;       /* Service Policy description         */
   WlmpolString     version;           /* Version of policy XML              */
   WlmpolUUID       policyUUID;        /* UUID of policy                     */
   WlmpolUUID       mgmtServerUUID;    /* UUID of management server          */
   int              policySequenceNo;  /* Internal sequence number           */
   ewlm_int16_t     policyID;          /* ID of policy                       */
   ewlm_int16_t     serverID;          /* ID of server                       */
} WlmpolPolicy;

/*
 * This structure contains all information about an
 * EWLM Workload definition. Fields which are not applicable for
 * this workload will be set to -1, if they are of type "int"
 * or an enumerated type.
 * To access a specific WlmpolWorkload structure within the
 * native policy storage area, use the
 *
 * const WlmpolWorkload * const
 *    getWorkload(const WlmpolHeader const *, int index)
 *
 * function (for better performance this function has been
 * implemented as a C-macro).
 * The index can be in the range 0..n, where
 *
 * int n=getNumberOfWorkloads(const WlmpolHeader const *)
 */
#define WLMPOL_EYEWKLD    "WLM_Wkld"

typedef struct
{
   WlmpolEyecatcher eyeCatcher;        /* Workload Eye catcher               */
   int              offsetHeader;      /* Offset to header                   */
                                       /*                                    */
   ewlm_int32_t     padding;           /* 4 byte padding                     */
   ewlm_int64_t     userData;          /* To be used for platforms           */
   WlmpolString     name;              /* Workload name                      */
   WlmpolString     description;       /* Worklaod description               */
} WlmpolWorkload;

/*
 * This structure contains all information about an EWLM Service
 * Class definition. Fields which are not applicable for
 * this service class will be set to -1, if they are of type "int"
 * or an enumerated type.
 * To access a specific WlmpolServiceClass structure within the
 * native policy storage area by its index, use the
 *
 * const WlmpolServiceClass * const
 *    getServiceClass(const WlmpolHeader const *, int index)
 *
 * function (for better performance this function has been
 * implemented as a C-macro). Returns NULL, if index is out of range.
 * The index can be in the range 0..n, where:
 *
 * int n=getNumberOfServiceClasses(const WlmpolHeader const *)
 */
#define WLMPOL_EYESC      "WLM_SCls"

typedef struct
{
   WlmpolEyecatcher eyeCatcher;        /* Service class Eye catcher          */
   int              offsetHeader;      /* Offset to header                   */
   ewlm_int32_t     padding;           /* 4 byte padding                     */
   ewlm_int64_t     userData;          /* To be used for platforms           */
   WlmpolString     name;              /* Service class name                 */
   WlmpolString     description;       /* Service class description          */
   int              firstGoal;         /* Index to 1st goal                  */
   int              numGoal;           /* Number of goals                    */
   int              indexWorkload;     /* Points to workload                 */
   WlmpolClassKey   classKey;          /* Key of this service class          */
} WlmpolServiceClass;

/*
 * This structure contains all information about an EWLM Service
 * Class goal (period) definition. Fields which are not applicable
 * for this type of goal will be set to -1, if they are of type
 * "int" or an enumerated type (Examples: responseTime
 * will be -1 in the case of a velocity goal period, importance will
 * be -1 in the case of a discretionary goal period ...)
 *
 * To access a specific WlmpolGoal structure within the
 * native policy storage area, use the
 *
 * const WlmpolGoal * const
 *    getGoal(const WlmpolHeader const *, int index)
 *
 * function (for better performance this function has been
 * implemented as a C-macro). Returns NULL, if index is out of range.
 * The index can be in the range 0..n, where:
 *
 * int n=getNumberOfGoals(const WlmpolHeader const *)
 */
#define WLMPOL_EYEGOAL    "WLM_Goal"
typedef struct
{
   WlmpolEyecatcher eyeCatcher;     /* Goal Eye catcher                      */
   int              offsetHeader;   /* Offset to header                      */
   ewlm_int32_t     padding;        /* 4 byte padding                        */
   ewlm_int64_t     userData;       /* To be used for platforms              */
   WlmpolGoaltype   type;           /* Goal Type                             */
   WlmpolGoalimp    importance;     /* Importance, -1 if DSC                 */
   WlmpolTime       responseTime;   /* RespTime for AVG & PER, else -1       */
   WlmpolTime       timeout;        /* Timeout value for VEL, else -1        */
   WlmpolVelLevel   level;          /* Velocity level for VEL, else -1       */
   int              percentile;     /* Percentile (PER only), else -1        */
   int              indexSrvclass;  /* Points to service class               */
} WlmpolGoal;


/*
 * This structure contains all information about a Transaction
 * class definition.  Fields which are not applicable for
 * this type of transaction class will be set to -1, if they are of
 * type "int" or an enumerated type (Examples: benchmark will be
 * -1, if no ??ResponseTimeBenchmark?? was specified in the policy)
 * <br>To access a specific WlmpolTransactionClass structure within the
 * native policy storage area by their index(position), use
 * the functions (implemented as C-macros):
 *
 * const WlmpolTransactionClass * const
 *    getTransactionClass(const WlmpolHeader const *, int index)
 *
 * The functions return NULL, if the index is out of range 0..n where:
 *
 * int n=getNumberOfTransactionClasses(const WlmpolHeader const *)
 */
#define WLMPOL_EYETC       "WLM_TCls"

typedef struct
{
   WlmpolEyecatcher eyeCatcher;        /* Transaction class eye catcher      */
   int              offsetHeader;      /* Offset to header                   */
   ewlm_int32_t     padding;           /* 4 byte padding                     */
   ewlm_int64_t     userData;          /* To be used for platforms           */
   WlmpolString     name;              /* Transaction class name             */
   WlmpolString     description;       /* Transaction class description      */
   WlmpolString     application;       /* Application name                   */
   WlmpolString     group;             /* Group name, if any                 */
   int              indexServClass;    /* Index for service class            */
   int              firstFilter;       /* 1st filter index                   */
   int              numFilter;         /* Number of filters                  */
   WlmpolClassKey   serviceClassKey;   /* Service class key                  */
   WlmpolClassKey   classKey;          /* Key of this transaction class      */
} WlmpolTransactionClass;

/*
 * This structure contains all information about an Process
 * class definition in platform native encoding.  Fields which are not
 * applicable for this type of process class will be set to -1, if they are of
 * type "int" or an enumerated type.
 * To access a specific WlmpolProcessClass structure within the
 * native policy storage area by their index(position), use
 * the functions (implemented as C-macros):
 *
 * const WlmpolProcessClass * const
 *    getProcessClass(const WlmpolHeader const *, int index)
 *
 * The functions return NULL, if the index is out of range 0..n where:
 *
 * int n=getNumberOfProcessClasses(const WlmpolHeader const *)
 */
#define WLMPOL_EYEPC       "WLM_PCLS"

typedef struct
{
   WlmpolEyecatcher eyeCatcher;        /* Process class eye catcher          */
   int              offsetHeader;      /* Offset to header                   */
   ewlm_int32_t     padding;           /* 4 byte padding                     */
   ewlm_int64_t     userData;          /* To be used for platforms           */
   WlmpolString     name;              /* Process class name                 */
   WlmpolString     description;       /* Process class description          */
   int              indexSrvrPlatform; /* Index to Server Platform           */
   int              firstFilter;       /* Index of 1st process filter        */
   int              numFilter;         /* Number of process filters          */
   WlmpolClassKey   keyServiceClass;   /* Service class key                  */
   WlmpolClassKey   classKey;          /* Key of this process class          */
} WlmpolProcessClass;


/*
 * This structure contains all information about an
 * EWLM Server Platform definition. Fields which are not applicable for
 * this server platform will be set to -1, if they are of type "int"
 * or an enumerated type.
 * To access a specific WlmpolServer structure within the
 * native policy storage area, use the
 *
 * const WlmpolServer * const
 *    getServerPlatform(const WlmpolHeader const *, int index)
 *
 * function (for maximum performance this function has been
 * implemented as a C-macro).
 * The index can be in the range 0..1, where
 *
 * int n=getNumberOfServerPlatforms(const WlmpolHeader const *)
 */
#define WLMPOL_EYESRVR    "WLM_Srvr"

typedef struct
{
   WlmpolEyecatcher eyeCatcher;        /* Server Platform Eye catcher        */
   int              offsetHeader;      /* Offset to header                   */
                                       /*                                    */
   ewlm_int32_t     padding;           /* 4 byte padding                     */
   ewlm_int64_t     userData;          /* To be used for platforms           */
   WlmpolString     name;              /* Server Platform name               */
   WlmpolString     description;       /* Server Platform description        */
   int              firstProcessClass; /* Index to 1st process class         */
   int              numProcessClass;   /* Number of process classes          */
} WlmpolServerPlatform;


/*
 * This structure contains all information about an EWLM
 * Application Environment in the platforms native encoding.
 * Fields which are not applicable for
 * this type of AEne will be set to -1, if they are of
 * type "int" or an enumerated type (Examples: firstTransClass will be
 * -1, if no transaction classes are defined for this Appl)
 *
 * To access a specific WlmpolApplication structure within
 * the native policy storage area, use the
 *
 * const WlmpolApplication * const
 *    getApplicationAt(const WlmpolHeader * const, int index)
 *
 * function (for better performance this function has been
 * implemented as a C-macro). Returns NULL, if index is out of range.
 * The index can be in the range 0..n, where:
 *
 * int n=getNumberOfApplications(const WlmpolHeader* const)

 * The WlmpolApplicationDefault enumeration is used to identify that the
 * entry has special meaning in its name/groupname strings.
 */

typedef enum {
    WLMPOL_NOTDEFAULT = 0, /* application entry is NOT a DEFAULT             */
    WLMPOL_APPDEFAULT = 1, /* application entry is application default       */
    WLMPOL_SYSDEFAULT = 2  /* application entry is SYSTEM default            */
} WlmpolApplicationDefault ;

#define WLMPOL_EYEAPPLNE "WLM_AEne"  /* Specific Encoding                    */
#define WLMPOL_EYEAPPLUA "WLM_AEua"  /* US-ASCII                             */
#define WLMPOL_EYEAPPL16 "WLM_AE16"  /* UTF16                                */

typedef struct
{
   WlmpolEyecatcher eyeCatcher;       /* Eye catcher                         */
   int              offsetHeader;     /* Offset to header                    */
   ewlm_int32_t     padding;          /* 4 byte padding                      */
   ewlm_int64_t     userData;         /* To be used for platforms            */
   WlmpolString     description;      /* Description                         */
   WlmpolString     application;      /* Application name                    */
   WlmpolString     group;            /* Group name, if any                  */
   int              indexDefSrvclass; /* Default service class index         */
   int              indexDefTranclass;/* Default transaction class index     */
   int              firstTransClass;  /* Index of 1st transaction class      */
   int              numTransClass;    /* Number of transaction class         */
   int              defIndicator;     /* default indicator see enumeration   */
   WlmpolClassKey   keyDefSrvclass;   /* Default service class key           */
   WlmpolClassKey   keyDefTransclass; /* Default transaction class key       */
} WlmpolApplication;

/*
 * This structure contains all information about an Transaction
 * or Process Class EWLM classification filter definition.
 * Fields which are not applicable for an instance of a
 * classification filter will be set to -1, if they are of
 * type "int" or an enumerated type (Example: filterType will be -1,
 * if classification group was specified (indexClassificationGroup>=0)
 * and vice versa.
 *
 * To access a specific WlmpolFilter structure within the
 * native policy storage area, use the
 *
 * const WlmpolFilter * const
 *    getTransactionFilter(const WlmpolHeader const *,
 *                         const WlmpolTransactionClass const *)
 * const WlmpolFilter * const
 *    getProcessFilter(const WlmpolHeader const *,
 *                     const WlmpolProcessClass const *)
 *
 * functions (for better performance these function have been
 * implemented as C-macros). Return NULL, if index is out of range.
 * The index can be in the range 0..n, where:
 *
 * int n=getNumberOfTCFilters(const WlmpolHeader const *)
 * int n=getNumberOfPCFilters(const WlmpolHeader const *)
 */
#define WLMPOL_EYEFILTER_TRANS "WLM_TFil"
#define WLMPOL_EYEFILTER_PROC "WLM_PFil"

typedef struct
{
   WlmpolEyecatcher eyeCatcher;             /* Eye catcher                   */
   int              offsetHeader;           /* Offset to header              */
   ewlm_int32_t     padding;                /* 4 byte padding                */
   ewlm_int64_t     userData;               /* To be used for platforms      */
   ewlm_int16_t     filterClass;            /* 1=transaction class ,         */
                                            /* 2=process class               */
   ewlm_int16_t     pad;                    /* padding to align structure    */
   WlmpolString     description;            /* Filter Description            */
   WlmpolString     filterType;             /* Filter type                   */
   int              filterTypeNum;          /* Filter Type numeric value     */
   WlmpolFilterop   filterOperation;        /* Filter operation              */
   int              indexFilterValue;       /* Filter value                  */
   int              indexTransactionClass;  /* Transaction class index       */
   int              indexProcessClass;      /* Process class index           */
   int              firstChildFilter;       /* Index to 1st child filter     */
   int              numNestedFilter;        /* Number of inner filters       */
   int              firstSiblingFilter;     /* Index to 1st sibling filter   */
   int              indexToBackTrackSibling;/* Index to BT Sibling filter    */
   int              matchesAlways;          /* Already evaluated to TRUE     */
   int              matchesNever;           /* Already evaluated to FALSE    */
   WlmpolClassKey   keyServiceClass;        /* Service class key             */
   WlmpolClassKey   keyTransactionClass;    /* Transaction class key         */
   WlmpolClassKey   keyProcessClass;        /* Process class key             */
} WlmpolFilter;

/*
 * This structure contains all information about an EWLM
 * Filter value.
 *
 * To access a specific WlmpolFilterValue structure within
 * the native policy storage area, use the
 *
 * const WlmpolFilterValue * const
 *    getFilterValue(const WlmpolHeader const *, int index)
 *
 * function (for better performance this function has been
 * implemented as a C-macro). Returns NULL, if index is out of range.
 * The index can be in the range 0..n, where:
 *
 * int n=getNumberOfFilterValues(const WlmpolHeader* const)
 */
#define WLMPOL_EYEFILVALUE     "WLM_FVal"

typedef struct
{
   WlmpolEyecatcher eyeCatcher;           /* Eye catcher                     */
   int              offsetHeader;         /* Offset to header                */
   ewlm_int32_t     padding;              /* 4 byte padding                  */
   ewlm_int64_t     userData;             /* To be used for platforms        */
   WlmpolString     filterValue;          /* Filter value                    */
   int              filterValueAsInt;     /* Filter value for numeric        */
   int              hasCharWildcard;      /* Contains a (\?) wildcard        */
   int              hasStrWildcard;       /* Contains a (\*) wildcard        */
   int              firstWildcardIndex;   /* Index to 1st wildcard array     */
   int              numberOfWildcards;    /* Number of wildcards             */
} WlmpolFilterValue;


/*
 * This structure contains all information about an eWLM
 * Filter embedded wildcard triplet array.
 *
 * To access a specific WlmpolTripletArray structure within
 * the native policy storage area, use the
 *
 * const WlmpolTripletArray * const
 *    getEncodedStringArray(*str)
 *
 * function (for maximum performance this function has been
 * implemented as a C-macro). Returns NULL, if index is out of range.
 * The index can be in the range 0..n, where:
 *
 * int n=getNumberOfFilterValues(const WlmpolHeader* const)
 */
#define WLMPOL_EYEEMBWC     "WLM_EMWC"
typedef struct {
   WlmpolEyecatcher eyeCatcher;         /* Eye catcher                       */
   int              offsetHeader;       /* Offset to header                  */
   ewlm_int32_t     padding;            /* 4 byte padding                    */
   ewlm_int16_t     position;           /* Position of the substitution char */
   ewlm_int16_t     numOfConsChars;     /* Number of consecutive subsitution */
                                        /* characters                        */
   ewlm_int8_t type;                    /* Type of substitution char         */
} WlmpolTripletArray;

/*
 * Convenience functions to access structures in a policy.
 * All functions are now implemented as C macros to force the
 * compile to generate inline code for better performance
 */
#define getStructureGeneric(hdr,index,sda,type)                        \
        ( ((index) < (hdr)->sda.sNumber && (index)>=0 )                \
          ? (const type * const)                                       \
              ((char *) (hdr) + (unsigned int)((hdr)->sda.sOffset) +   \
              (unsigned int)((index) * (hdr)->sda.sLength))            \
          : NULL )

/*
 * Return the pointer to the EWLM policy structure
 */
#define getPolicy(hdr)                                                 \
        getStructureGeneric(hdr, 0, policySDA, WlmpolPolicy)

/*
 * Return pointer to an instance of an EWLM workload structure.
 */
#define getWorkload(hdr, index)                                        \
        getStructureGeneric(hdr, index, workloadSDA, WlmpolWorkload)

#define getNumberOfWorkloads(hdr)                                      \
        ((hdr)->workloadSDA.sNumber)

/*
 * Return pointer to instance of an EWLM service class structure.
 */
#define getServiceClass(hdr, index)                                    \
        getStructureGeneric(hdr,index,srvclassSDA,WlmpolServiceClass)

#define getNumberOfServiceClasses(hdr)                                 \
        ((hdr)->srvclassSDA.sNumber)

/*
 * Return pointer to an instance of an EWLM transaction class
 * structure.
 */
#define getTransactionClass(hdr, index)                                \
    getStructureGeneric(hdr,index,transclassSDA,WlmpolTransactionClass)

#define getNumberOfTransactionClasses(hdr)                             \
        ((hdr)->transclassSDA.sNumber)

/*
 * Return pointer to an instance of an EWLM process class
 * structure.
 */
#define getProcessClass(hdr, index)                                    \
        getStructureGeneric(hdr,index,procclassSDA,WlmpolProcessClass)

#define getNumberOfProcessClasses(hdr)                                 \
        ((hdr)->procclassSDA.sNumber)

/*
 * Return pointer to an instance of an EWLM goal (period).
 */
#define getGoal(hdr, index)                                            \
        getStructureGeneric(hdr,index,goalSDA,WlmpolGoal)

#define getNumberOfGoals(hdr)                                          \
        ((hdr)->goalSDA.sNumber)

/*
 * Return pointer to an instance of an EWLM Application based on encoding.
 * encoding value 1=utf16 - use application1SDA
 *                2=ascii  - use application2SDA
 *                3=native - use application3SDA
 * structure.
 */
#define getApplicationAt(hdr, index ,encoding)                         \
 (encoding == WLMPOL_ENC_UTF16)                                        \
 ? (getStructureGeneric(hdr,index,application1SDA,WlmpolApplication))  \
 : ((encoding == WLMPOL_ENC_ASCII)                                     \
  ? (getStructureGeneric(hdr,index,application2SDA,WlmpolApplication)) \
  : (getStructureGeneric(hdr,index,application3SDA,WlmpolApplication)))

#define getNumberOfApplications(hdr)                                   \
        ((hdr)->application2SDA.sNumber)

/*
 * Return pointer to an instance of an EWLM Filter value structure.
 * The returned filter value can belong to any
 * transaction class filter or a process class filter.
 */
#define getFilterValue(hdr, index)                                     \
        getStructureGeneric(hdr,index,filterValueSDA,WlmpolFilterValue)

#define getNumberOfFilterValues(hdr)                                   \
        ((hdr)->filterValueSDA.sNumber)

/*
 * Return pointer to an instance of an EWLM Filter structure.
 */
#define getTransactionFilter(hdr, tclass)                              \
  getStructureGeneric(hdr,tclass->firstFilter,filterTCSDA,WlmpolFilter)

#define getProcessFilter(hdr, pclass)                                  \
  getStructureGeneric(hdr,pclass->firstFilter,filterPCSDA,WlmpolFilter)

#define getChildFilter(hdr, fil)                                       \
       (fil->filterClass == FILTER_TRANSACTION)                        \
       ? (getStructureGeneric(hdr,fil->firstChildFilter,               \
                              filterTCSDA,WlmpolFilter))               \
       : (getStructureGeneric(hdr,fil->firstChildFilter,               \
                              filterPCSDA,WlmpolFilter))

#define getSiblingFilter(hdr, fil)                                     \
       (fil->filterClass == FILTER_TRANSACTION)                        \
       ? (getStructureGeneric(hdr,fil->firstSiblingFilter,             \
                              filterTCSDA,WlmpolFilter))               \
       : (getStructureGeneric(hdr,fil->firstSiblingFilter,             \
                              filterPCSDA,WlmpolFilter))

#define getBackTrackSiblingFilter(hdr, fil)                            \
       (fil->filterClass == FILTER_TRANSACTION)                        \
       ? (getStructureGeneric(hdr,fil->indexToBackTrackSibling,        \
                              filterTCSDA,WlmpolFilter))               \
       : (getStructureGeneric(hdr,fil->indexToBackTrackSibling,        \
                              filterPCSDA,WlmpolFilter))

#define getNumberOfTCFilters(hdr)                                      \
        ((hdr)->filterTCSDA.sNumber)

#define getNumberOfPCFilters(hdr)                                      \
        ((hdr)->filterPCSDA.sNumber)

/*
 * Access the string data of a policy. Any string is described by a
 * WlmpolString structure that contains offsets to the different
 * encodings. This function returns a pointer to the beginning of
 * such an encoding string.
 *
 * For easier access use the C-macro getEncodedString(str),
 *
 * The function returns an EMPTY string, if the offset is invalid
 */
#define WLMPOL_UNDEFINED_STRING ""

#define getWlmpolStringChars(str,offset)                               \
      (const char * const)(((offset) >= 0)                             \
      ? (((char *)(str)) + (unsigned int)((offset) + sizeof(short)) )  \
      : WLMPOL_UNDEFINED_STRING)

/*
 * Access the length of a string data encoding. Any string is
 * described by a WlmpolString structure that contains offsets
 * to a specific encoding specified in WlmpolString.encodedType.
 * This function returns the length of an encoding string.
 *
 * For easier access use the C-macro getEncodedStringLen
 *
 * The function returns 0, if the offset is invalid
 */
#define getWlmpolStringLen(str,offset)                                 \
        (((offset) >= 0)                                               \
        ? *((short *)(((char *)(str)) + (unsigned int)(offset)))       \
        : 0)

#define getEncodedString(str)                                          \
        getWlmpolStringChars(&(str), (str).offsetEncoding)

#define getFirstWildcardStructure(hdr, index)                          \
        getStructureGeneric(hdr,index,embeddedWCSDA,WlmpolTripletArray)

#define getNextWildcardStructure(hdr,currentWildcardPtr)               \
        (const WlmpolTripletArray *)                                   \
            (((char *) currentWildcardPtr) +                           \
                  (unsigned int) (hdr->embeddedWCSDA.sLength))

#define getEncodedStringLen(str)                                       \
        getWlmpolStringLen(&(str), (str).offsetEncoding)

#define getServerPlatform(hdr, index)                                  \
        getStructureGeneric(hdr,index,serverSDA,WlmpolServerPlatform)

#define getEncodedStringLenWZ(str)                                     \
        ((str).encodedType == WLMPOL_ENC_UTF16)                        \
         ?(getWlmpolStringLen(&(str), (str).offsetEncoding)+ 2)        \
         :(getWlmpolStringLen(&(str), (str).offsetEncoding) + 1)

#define getNativePolicyLength(hdr)                                     \
        ((hdr)->totalLength)


#ifdef __OS400__
   #pragma pack(reset)
   #pragma enum(reset)
#endif


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif


#endif

