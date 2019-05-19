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
/* Header File Name: H/EWLMPLAT                                      */
/*                                                                   */
/* Description: This file contains declarations of functions         */
/*              and data structures, used by callers of              */
/*              the EWLM platform services APIs.                     */
/*              These declatations apply to EWLM version 1.0         */
/*              API specifications.                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/*      D99691.2     5D30  031007 AP:       New File                 */
/* $LU  D99941       5P30  041110 AP:       Updates to APIs          */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef  _ewlmplat_h
  #define  _ewlmplat_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


#include <inttypes.h>           /* standard integer types */
#include <arm4ext.h>            /* EWLM extension of ARM APIs */
#include <stddef.h>             /* offsetof() macro @LU*/

/* OS/400 is a big-endian platform                                           */
#ifndef EWLM_BIG_ENDIAN
   #define EWLM_BIG_ENDIAN
#endif

/* ------------------------------------------------------------------------- */
/* --------------------------- type definitions ---------------------------- */
/* ------------------------------------------------------------------------- */

/* Operating system dependent types */
typedef uint8_t           ewlm_process_id_t[16];
typedef uint8_t           ewlm_get_activedata_cursor_t[32];
typedef uint64_t          ewlm_connect_handle_t;

#define EWLM_INVALID_CONNECT_HANDLE     \
       ( (ewlm_connect_handle_t)0xFFffFFffFFffFFffull )

typedef uint64_t        ewlm_cpu_time_t;
typedef uint32_t        ewlm_num_samples_t;
typedef uint32_t        ewlm_state_sample_t;

/* Basic common types */
typedef char            ewlm_char_t;
typedef int8_t          ewlm_int8_t;
typedef uint8_t         ewlm_uint8_t;
typedef int16_t         ewlm_int16_t;
typedef uint16_t        ewlm_uint16_t;
typedef int32_t         ewlm_int32_t;
typedef uint32_t        ewlm_uint32_t;
typedef int64_t         ewlm_int64_t;
typedef uint64_t        ewlm_uint64_t;

typedef int32_t         ewlmpol_int_t;

/* ------------------------------------------------------------------------- */
/* ---------------------- Common type definitions -------------------------- */
/* ------------------------------------------------------------------------- */

typedef ewlm_int8_t     ewlm_period_t;
typedef ewlm_int64_t    ewlm_timestamp_t;    /* microseconds since
                                              * January 1 2000 using the
                                              * Gregorian calendar
                                              */
typedef ewlm_int32_t    ewlm_duration_t;     /* Millisecond unit elapsed
                                              * time.  Intentionally smaller
                                              * than timestamp to limit the
                                              * size of in-flight and
                                              * completion records.
                                              */

typedef ewlm_int16_t    ewlm_micro_duration_t; /* Microsecond unit elapsed
                                                * time. (remainder of
                                                * millisecond unit elapsed
                                                * time.)
                                                */

/* flags for in-flight records */
typedef ewlm_int16_t    ewlm_get_activedata_flags_t;


#define EWLM_GET_ACTIVEDATA_STALE_REPORTING_ID      (0x8000)
#define EWLM_GET_ACTIVEDATA_QUEUE_TIME_OVERFLOW     (0x4000)
#define EWLM_GET_ACTIVEDATA_NO_HOP_SAME_AE          (0x2000)
#define EWLM_GET_ACTIVEDATA_NO_HOP_SAME_AI          (0x1000)
#define EWLM_GET_ACTIVEDATA_TOPOLOGY_NOT_VALID      (0x0800)
#define EWLM_GET_ACTIVEDATA_REPORTING_GAP           (0x0400)
#define EWLM_GET_ACTIVEDATA_BLOCKED_TIME_OVERFLOW   (0x0200)

/* flags for completion records */
typedef ewlm_int16_t    ewlm_get_completions_flags_t;

#define EWLM_GET_COMPLETIONS_STALE_REPORTING_ID     (0x8000)
#define EWLM_GET_COMPLETIONS_QUEUE_TIME_OVERFLOW    (0x4000)
#define EWLM_GET_COMPLETIONS_NO_HOP_SAME_AE         (0x2000)
#define EWLM_GET_COMPLETIONS_NO_HOP_SAME_AI         (0x1000)
#define EWLM_GET_COMPLETIONS_TOPOLOGY_NOT_VALID     (0x0800)
#define EWLM_GET_COMPLETIONS_REPORTING_GAP          (0x0400)
#define EWLM_GET_COMPLETIONS_BLOCKED_TIME_OVERFLOW  (0x0200)

#define EWLM_GET_COMPLETIONS_ARTIFICIAL_COMPLETION  (0x0080)
#define EWLM_GET_COMPLETIONS_RESPONSE_TIME_OVERFLOW (0x0040)

/* ARM transaction completion status */
typedef ewlm_int16_t    ewlm_ARM_completion_status_t;

/* This is an EWLM-unique value for transaction status.
 * The other possible transaction status values can
 * be found in arm4.h. They are prefixed with:
 * ARM_STATUS
 */
#define EWLM_ARM_STATUS_ABANDONED       (-1)

typedef ewlm_int32_t    ewlm_policytype_t;
typedef ewlm_int32_t    ewlm_status_t;       /* API return code */
typedef ewlm_int64_t    ewlm_applenv_id_t;   /* assigned by ARM */
typedef ewlm_int64_t    ewlm_applinst_id_t;  /* assigned by ARM */

/* Local server ID (short form of server UUID) */
/* assigned by EWLM                            */
typedef ewlm_int16_t    ewlm_local_server_id_t;
typedef ewlm_int32_t    ewlm_bytelength_t;

/* Support level of a set of APIs, used by EWLM to know if    */
/* a given set of API signatures is supported by the platform */
typedef ewlm_int16_t    ewlm_APIlevel_t;
typedef ewlm_int16_t    ewlm_APIversion_t;   /* Version number,
                                              * specific to each API.
                                              */

/* descriptor for a string without encoding  */
typedef struct ewlm_unencodedbytestream
{
  ewlm_int32_t          offset;/* Offset from some documented point to the
                                * first byte.  If the place where this type
                                * is instantiated does not document the origin
                                * the default is the containing structure
                                */

  ewlm_int32_t          length; /* Length of value in bytes not characters
                                 * excluding any termination byte(s).
                                 */

/* If both the offset and length are zero the string is not provided.
 * A non-zero offset and zero length denote the null string (which might be
 * considered equivalent to not providing the string, depending upon the
 * the API where this is used).
 */
} ewlm_unencodedbytestream_t;

/* descriptor for a string with encoding        */
/* Used by APIs which find it more efficient to */
/* encapsulate the encoding with the string.    */
typedef struct ewlm_encodedbytestream
{
  ewlm_int32_t        offset;  /* Offset from some documented point to the
                                * first byte.  If the place where this type
                                * is instantiated does not document the origin
                                * the default is the containing structure
                                */

  ewlm_int32_t        length;  /* Length of value in bytes (not characters)
                                * excluding any termination byte(s).
                                */

  /* encoding values supported for OS/400:  */
  /*   1015    UTF-16BE, UTF-16             */
  ewlm_int16_t        value;

  ewlm_int16_t        flags;

  #define EWLM_NULL_TERMINATED      (0x0001)
  /* If EWLM_NULL_TERMINATED is on, UTF-16 requires double byte terminator */
} ewlm_encodedbytestream_t;


/* ------------------------------------------------------------------------- */
/* ---------- API declarations start here ---------------------------------- */
/* ------------------------------------------------------------------------- */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* ------------------------------------------------------------------------- */
/* ------ OS/400 EWLM platform services configuration APIs ----------------- */
/* ------------------------------------------------------------------------- */


typedef struct QpmwRtvState_input
{
  ewlm_APIversion_t     version;
  /* ------- end of data present in version 1        */
  #define QPMWRTVSTATE_IN_VERSION001    (1)
  #define QPMWRTVSTATE_INPUT_V001SIZE   ( sizeof(QpmwRtvState_input_t) )

} QpmwRtvState_input_t;


typedef struct QpmwRtvState_output
{
  ewlm_APIversion_t     version;
  ewlm_bytelength_t     sizeneeded;
  ewlm_int32_t          state;
  #define QPMW_STATE_DISABLED                           (0)
  #define QPMW_STATE_ENABLED                            (1)

  /* ------- end of data present in version 1        */
  #define QPMWRTVSTATE_OUTVERSION001            (1)
  #define QPMWRTVSTATE_OUTPUT_V001SIZE          \
          ( sizeof(QpmwRtvState_output_t) )
} QpmwRtvState_output_t;


/*
 *  Signature:
 *              Retrieve current state
 */

ewlm_status_t QpmwRtvState(
      /* [opt in] */   QpmwRtvState_input_t    *input_buffer,
      /* [in]     */   ewlm_bytelength_t        input_buffer_size,
      /* [out]    */   QpmwRtvState_output_t   *output_buffer,
      /* [in]     */   ewlm_bytelength_t        output_buffer_size
);


typedef struct QpmwChgState_input
{
  ewlm_APIversion_t     version;
  ewlm_int32_t          new_state;
  /* ------- end of data present in version 1        */
  #define QPMWCHGSTATE_IN_VERSION001    (1)
  #define QPMWCHGSTATE_INPUT_V001SIZE   ( sizeof(QpmwChgState_input_t) )
} QpmwChgState_input_t;


typedef struct QpmwChgState_output
{
  ewlm_APIversion_t     version;
  ewlm_bytelength_t     sizeneeded;
  /* ------- end of data present in version 1        */
  #define QPMWCHGSTATE_OUTVERSION001    (1)
  #define QPMWCHGSTATE_OUTPUT_V001SIZE  ( sizeof(QpmwChgState_output_t) )

} QpmwChgState_output_t;


/*
 *  Signature:
 *              Change current state
 */

ewlm_status_t QpmwChgState(
      /* [in]      */   QpmwChgState_input_t     *input_buffer,
      /* [in]      */   ewlm_bytelength_t         input_buffer_size,
      /* [opt out] */   QpmwChgState_output_t    *output_buffer,
      /* [in]      */   ewlm_bytelength_t         output_buffer_size
);


typedef struct QpmwRtvConfig_input
{
  ewlm_APIversion_t     version;
  /* ------- end of data present in version 1        */
  #define QPMWRTVCONFIG_IN_VERSION001      (1)
  #define QPMWRTVCONFIG_INPUT_V001SIZE     ( sizeof(QpmwRtvConfig_input_t) )
} QpmwRtvConfig_input_t;


typedef struct QpmwRtvConfig_output
{
  ewlm_APIversion_t     version;
  ewlm_bytelength_t     sizeneeded;

  /*  Values of configuration attributes */
  ewlm_int32_t          max_appls;
  ewlm_int32_t          max_appl_insts;
  ewlm_int32_t          max_tran_class;
  ewlm_int32_t          max_appl_trans;
  ewlm_int32_t          max_tran_blocks;
  ewlm_int32_t          max_active_trans;
  ewlm_int32_t          completion_buffer_size;
  /* ------- end of data present in version 1        */
  #define QPMWRTVCONFIG_OUTVERSION001    (1)
  #define QPMWRTVCONFIG_OUTPUT_V001SIZE  ( sizeof(QpmwRtvConfig_output_t) )
} QpmwRtvConfig_output_t;


/*
 *  Signature:
 *              Retrieve current configuration attributes
 */

ewlm_status_t QpmwRtvConfig(
      /* [opt in] */   QpmwRtvConfig_input_t    *input_buffer,
      /* [in]     */   ewlm_bytelength_t         input_buffer_size,
      /* [out]    */   QpmwRtvConfig_output_t   *output_buffer,
      /* [in]     */   ewlm_bytelength_t         output_buffer_size
);


typedef struct QpmwChgConfig_input
{
  ewlm_APIversion_t     version;
  /* New values of configurtion attributes          */
  /*   minus 1 means "no change"                    */
  /*   minus 2 means "reset to shipped default"     */
  ewlm_int32_t          max_appls;
  ewlm_int32_t          max_appl_insts;
  ewlm_int32_t          max_tran_class;
  ewlm_int32_t          max_appl_trans;
  ewlm_int32_t          max_tran_blocks;
  ewlm_int32_t          max_active_trans;
  ewlm_int32_t          completion_buffer_size;
  ewlm_uint8_t         _reserved[4];
  /* ------- end of data present in version 1        */
  #define QPMWCHGCONFIG_IN_VERSION001     (1)
  #define QPMWCHGCONFIG_INPUT_V001SIZE    ( sizeof(QpmwChgConfig_input_t) )
} QpmwChgConfig_input_t;


typedef struct QpmwChgConfig_output
{
  ewlm_APIversion_t     version;
  ewlm_bytelength_t     sizeneeded;
  /* ------- end of data present in version 1        */
  #define QPMWCHGCONFIG_OUTVERSION001    (1)
  #define QPMWCHGCONFIG_OUTPUT_V001SIZE  ( sizeof(QpmwChgConfig_output_t) )
} QpmwChgConfig_output_t;


/*
 *  Signature:
 *              Change configuration attributes
 */

ewlm_status_t QpmwChgConfig(
      /* [in]      */   QpmwChgConfig_input_t     *input_buffer,
      /* [in]      */   ewlm_bytelength_t          input_buffer_size,
      /* [opt out] */   QpmwChgConfig_output_t    *output_buffer,
      /* [in]      */   ewlm_bytelength_t          output_buffer_size
);




/* ------------------------------------------------------------------------- */
/* ----------------- Common EWLM platform services APIs -------------------- */
/* ------------------------------------------------------------------------- */



/* ------------------------------------------------------------------------- */
/* --------------------------- query services ------------------------------ */
/* ------------------------------------------------------------------------- */

/*
 *  Signature:
 *              EWLM query
 */
ewlm_status_t   ewlm_query(
    /* [in]  */ ewlm_char_t            *input_buffer,
    /* [in]  */ ewlm_bytelength_t       input_buffer_size,
    /* [out] */ ewlm_char_t            *output_buffer,
    /* [in]  */ ewlm_bytelength_t       output_buffer_size
);


typedef struct ewlm_query_server_configuration_input
{
  ewlm_APIversion_t             version;
  ewlm_int32_t                  request_type;
  #define EWLM_QUERY_SERVER_CONFIGURATION               (1)

  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1        */
  #define EWLM_QUERY_SERVER_CONFIGURATION_IN_VERSION001         (1)
  #define EWLM_QUERY_SERVER_CONFIGURATION_INPUT_V001SIZE        \
    ( sizeof(ewlm_query_server_configuration_input_t) )
} ewlm_query_server_configuration_input_t;


typedef struct ewlm_query_server_configuration_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;

  ewlm_int32_t                  platform_support_level1;
  #define EWLM_QUERY_PLATFORMAPI_EWLM12    (0x80000000) /* EWLM rel 1.2  @LU*/
  #define EWLM_QUERY_PLATFORMAPI_EWLM10    (0x40000000) /* EWLM rel 1.0     */

  /* added for future expansion */
  ewlm_int32_t                  platform_support_level2;

  ewlm_int32_t                  entitlement_support_level;
  #define EWLM_QUERY_ENTITLEMENTAPI_NONE   (0x40000000) /* No entitlement   */

  ewlm_int32_t                  network_support_level;
  #define EWLM_QUERY_NETWORKAPI_NONE       (0x40000000) /* No net_ APIs     */


  /* OS-suggested size for ewlm_get_completions() output buffer. */
  ewlm_bytelength_t             max_practical_get_completions_buffer_size;

  /* OS-suggested size for ewlm_get_activedata() output buffer. */
  ewlm_bytelength_t             recommended_get_activedata_buffer_size;

  ewlm_int32_t                  flags001;
  /* Hypervisors */
  #define EWLM_QUERY_SERVER_CONFIGURATION_OS_UNDER_ZVM          (0x40000000)
  #define EWLM_QUERY_SERVER_CONFIGURATION_OS_UNDER_LPAR         (0x20000000)
  #define EWLM_QUERY_SERVER_CONFIGURATION_OS_UNDER_VMWARE       (0x10000000)

  ewlm_encodedbytestream_t      hostname;        /* TCP/IP hostname     */
  ewlm_encodedbytestream_t      software_cluster_name;
  ewlm_encodedbytestream_t      hardware_cluster_name;
  ewlm_unencodedbytestream_t    hardware_cluster_name_binary;
  ewlm_encodedbytestream_t      os_platform;     /* OS/400, AUX, etc.   */
  ewlm_encodedbytestream_t      os_architecture; /* Intel, PowerPc etc. */
  ewlm_encodedbytestream_t      os_level_summary;/* v.r.j.n OS version  */
  ewlm_encodedbytestream_t      os_level_detail;
  ewlm_encodedbytestream_t      os_instance_name;

  /* ------- end of data present in version 1 */
  #define EWLM_QUERY_SERVER_CONFIGURATION_OUTVERSION001         (1)
  #define EWLM_QUERY_SERVER_CONFIGURATION_OUTPUT_V001SIZE       \
          offsetof( ewlm_query_server_configuration_output_t,   \
                    hypervisor_capability )
  /* New fields added                                               @LU */
  ewlm_int32_t                  hypervisor_capability;
  #define EWLM_QUERY_HYPERVISOR_NONE    0        /* None or unknown     */
                                                 /*   hypervisor        */
  #define EWLM_QUERY_HYPERVISOR_POWER5  1        /* IBM POWER5          */
  #define EWLM_QUERY_HYPERVISOR_PRSM    2        /* IBM PR/SM           */

  ewlm_int32_t                  os_dynamic_lpar_capability;
  /* system does not supports DLPAR management                          */
  #define EWLM_QUERY_DLPAR_NONE            (0x000000000)
  /* system supports DLPAR management of processing capacity            */
  #define EWLM_QUERY_DLPAR_CPU_CAPACITY    (0x00000001)
  /* system supports DLPAR management of variable capacity weight       */
  #define EWLM_QUERY_DLPAR_CPU_WEIGHT      (0x00000002)
  /* system supports DLPAR management of interactive capacity           */
  #define EWLM_QUERY_DLPAR_INT_CAPACITY    (0x00000004)
  /* system supports DLPAR management of virtual processors             */
  #define EWLM_QUERY_DLPAR_VIRTUAL_CPU     (0x00000008)
  /* system supports DLPAR management of partition memory               */
  #define EWLM_QUERY_DLPAR_MEMORY          (0x00000010)

  ewlm_encodedbytestream_t      hypervisor_group_id;
  ewlm_encodedbytestream_t      hw_manufacturer;
  ewlm_encodedbytestream_t      modelno_serialno;

  /* ------- end of data present in version 2 */
  #define EWLM_QUERY_SERVER_CONFIGURATION_OUTVERSION002         (2)
  #define EWLM_QUERY_SERVER_CONFIGURATION_OUTPUT_V002SIZE       \
          ( sizeof(ewlm_query_server_configuration_output_t) )

  /* In storage, this buffer should be immediately followed by the contents
   * of the data described by the ewlm_encodedbytestream_t components.
   * All offsets in these components are relative to the beginning of the
   * ewlm_query_server_configuration_output structure.
   */
} ewlm_query_server_configuration_output_t;


typedef struct ewlm_query_server_statistics_input
{
  ewlm_APIversion_t             version;
  ewlm_int32_t                  request_type;
  #define EWLM_QUERY_SERVER_STATISTICS                  (2)

  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1        */

  #define EWLM_QUERY_SERVER_STATISTICS_IN_VERSION001            (1)
  #define EWLM_QUERY_SERVER_STATISTICS_INPUT_V001SIZE           \
          ( sizeof(ewlm_query_server_statistics_input_t) )
} ewlm_query_server_statistics_input_t;


typedef struct ewlm_query_server_statistics_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  ewlm_int32_t                  online_cpus;
  ewlm_cpu_time_t               cpu_time;    /* Total microseconds of
                                              * CPU time used since IPL
                                              */

  ewlm_int64_t                  physical_memory_size; /* KBytes */
  ewlm_uint64_t                 paging_space_faults;  /* Total page faults
                                                       * since IPL
                                                       */
  /* ------- end of data present in version 1 */
  #define EWLM_QUERY_SERVER_STATISTICS_OUTVERSION001            (1)
  #define EWLM_QUERY_SERVER_STATISTICS_OUTPUT_V001SIZE          \
          ( sizeof(ewlm_query_server_statistics_output_t) )
} ewlm_query_server_statistics_output_t;


typedef struct ewlm_query_resource_metrics_collected_input
{
  ewlm_APIversion_t             version;
  ewlm_int32_t                  request_type;
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED         (3)

  ewlm_connect_handle_t         connect_handle;

  /* ------- end of data present in version 1 */
  #define EWLM_QUERY_RESOURCE_METRICS_IN_VERSION001             (1)
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_INPUT_V001SIZE  \
          ( sizeof(ewlm_query_resource_metrics_collected_input_t) )

} ewlm_query_resource_metrics_collected_input_t;


typedef struct ewlm_query_resource_metrics_collected_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  ewlm_int8_t                   cpu_time_mode;
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_TOTAL_MODE      (1)
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_DELTA_MODE      (2)

  ewlm_int8_t                   samples_mode;  /* total or delta mode */
  ewlm_int32_t                  samplescollectedflags;
  /* "Idle" and "Other" are required and not explicitly flagged here  */
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_CPU_USING       (0x40000000)
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_CPU_DELAY       (0x20000000)
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_PAGE_DELAY      (0x10000000)
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_IO_DELAY        (0x08000000)
  /* Some platforms which collect process delay samples may choose to
     not return records for processes which are idle (no sampled delay
     or using states observed between two invocations of get_activedata
     omitting CONTINUE requests).  The caller must then adjust the
     idle samples accordingly. */
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_IDLEPROCS_SKIPPED (0x04000000)

  /* ------- end of data present in version 1 */
  #define EWLM_QUERY_RESOURCE_METRICS_OUTVERSION001             (1)
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_OUTPUT_V001SIZE \
       offsetof( ewlm_query_resource_metrics_collected_output_t,\
                 os_sampling_1000sec_conversion_factor )

  ewlm_int32_t                  os_sampling_1000sec_conversion_factor;
  /* If the platform calculates its samples rather than directly sampling
     them, then this constant represents number of assumed samples
     per 1000 seconds. */

    /* ------- end of data present in version 2 */
  #define EWLM_QUERY_RESOURCE_METRICS_OUTVERSION002             (2)
  #define EWLM_QUERY_RESOURCE_METRICS_COLLECTED_OUTPUT_V002SIZE \
          ( sizeof(ewlm_query_resource_metrics_collected_output_t) )
} ewlm_query_resource_metrics_collected_output_t;


/* ------------------------------------------------------------------------- */
/* --------------------------- state services ------------------------------ */
/* ------------------------------------------------------------------------- */

typedef struct ewlm_connect_input
{
  ewlm_APIversion_t             version;
  /* ------- end of data present in version 1        */
  #define EWLM_CONNECT_IN_VERSION001    (1)
  #define EWLM_CONNECT_INPUT_V001SIZE   \
        ( offsetof(ewlm_connect_input_t, version) + sizeof(ewlm_APIversion_t) )

  /* Optional input, ignored for iSeries                                  @LU*/
  ewlm_int32_t                  sampling_timer;         /* milliseconds      */

  /* ------- end of data present in version 2 */
  #define EWLM_CONNECT_IN_VERSION002    (2)
  #define EWLM_CONNECT_INPUT_V002SIZE   \
          ( sizeof(ewlm_connect_input_t) )
} ewlm_connect_input_t;


typedef struct ewlm_connect_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1 */
  #define EWLM_CONNECT_OUTVERSION001    (1)
  #define EWLM_CONNECT_OUTPUT_V001SIZE  \
          ( sizeof(ewlm_connect_output_t) )
} ewlm_connect_output_t;


/*
 *  Signature:
 *              EWLM Connect
 */

ewlm_status_t ewlm_connect(
    /* [in]  */ ewlm_connect_input_t   *input_buffer,
    /* [in]  */ ewlm_bytelength_t       input_buffer_size,
    /* [out] */ ewlm_connect_output_t  *output_buffer,
    /* [in]  */ ewlm_bytelength_t       output_buffer_size
);


typedef struct ewlm_disconnect_input
{
  ewlm_APIversion_t             version;
  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1        */

  #define EWLM_DISCONNECT_IN_VERSION001         (1)
  #define EWLM_DISCONNECT_INPUT_V001SIZE        \
          ( sizeof(ewlm_disconnect_input_t) )
} ewlm_disconnect_input_t;


typedef struct ewlm_disconnect_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  /* ------- end of data present in version 1 */

  #define EWLM_DISCONNECT_OUTVERSION001         (1)
  #define EWLM_DISCONNECT_OUTPUT_V001SIZE       \
          ( sizeof(ewlm_disconnect_output_t) )
} ewlm_disconnect_output_t;


/*
 *  Signature:
 *              EWLM Disconnect
 */

ewlm_status_t ewlm_disconnect(
    /* [in]  */ ewlm_disconnect_input_t   *input_buffer,
    /* [in]  */ ewlm_bytelength_t          input_buffer_size,
    /* [out] */ ewlm_disconnect_output_t  *output_buffer,
    /* [in]  */ ewlm_bytelength_t          output_buffer_size
);


/* ------------------------------------------------------------------------- */
/* --------------------------- Data retrieval ------------------------------ */
/* ------------------------------------------------------------------------- */


typedef struct ewlm_collect_samples_collect_now_input
{
  ewlm_APIversion_t             version;
  ewlm_int32_t                  request_type;
  #define EWLM_COLLECT_SAMPLES_REQUEST_COLLECT_NOW      (1)

  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1        */
  #define EWLM_COLLECT_SAMPLES_COLLECT_NOW_IN_VERSION001        (1)
  #define EWLM_COLLECT_SAMPLES_COLLECT_NOW_INPUT_V001SIZE       \
          ( sizeof(ewlm_collect_samples_collect_now_input_t) )
} ewlm_collect_samples_collect_now_input_t;


typedef struct ewlm_collect_samples_collect_now_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  /* ------- end of data present in version 1 */
  #define EWLM_COLLECT_SAMPLES_COLLECT_NOW_OUTVERSION001        (1)
  #define EWLM_COLLECT_SAMPLES_COLLECT_NOW_OUTPUT_V001SIZE      \
          ( sizeof(ewlm_collect_samples_collect_now_output_t) )
} ewlm_collect_samples_collect_now_output_t;


/*
 *  Signature:
 *              EWLM collect sample data
 */

ewlm_status_t ewlm_collect_samples(
    /* [in]  */ ewlm_char_t               *input_buffer,
    /* [in]  */ ewlm_bytelength_t          input_buffer_size,
    /* [out] */ ewlm_char_t               *output_buffer,
    /* [in]  */ ewlm_bytelength_t          output_buffer_size
);


typedef struct ewlm_get_appldata_input
{
  ewlm_APIversion_t             version;
  ewlm_applinst_id_t            applInstanceId;
  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_APPLDATA_IN_VERSION001       (1)
  #define EWLM_GET_APPLDATA_INPUT_V001SIZE      \
          ( sizeof(ewlm_get_appldata_input_t) )
} ewlm_get_appldata_input_t;


typedef struct ewlm_get_appldata_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  ewlm_applenv_id_t             application_environment_id;
  ewlm_process_id_t             process_id;

  ewlm_encodedbytestream_t      process_name;
  ewlm_encodedbytestream_t      application_name;
  ewlm_encodedbytestream_t      application_group_name;
  ewlm_encodedbytestream_t      application_instance_name;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_APPLDATA_OUTVERSION001       (1)
  #define EWLM_GET_APPLDATA_OUTPUT_V001SIZE     \
          ( sizeof(ewlm_get_appldata_output_t) )

 /*
  * In storage, this buffer should be immediately followed by the contents
  * of the data described by the ewlm_encodedbytestream_t components.
  * All offsets in these components are relative to the beginning of the
  * ewlm_get_appldata_output_t structure.
  */
} ewlm_get_appldata_output_t;


/*
 *  Signature:
 *              EWLM get application data
 */

ewlm_status_t ewlm_get_appldata(
    /* [in]  */ ewlm_get_appldata_input_t     *input_buffer,
    /* [in]  */ ewlm_bytelength_t              input_buffer_size,
    /* [out] */ ewlm_get_appldata_output_t    *output_buffer,
    /* [in]  */ ewlm_bytelength_t              output_buffer_size
);


typedef struct ewlm_get_activedata_input
{
  ewlm_APIversion_t             version;
  ewlm_int32_t                  request_type;
  #define EWLM_GET_ACTIVEDATA_REQUEST_PROCESSES_AND_TRANSACTIONS_START    (1)
  #define EWLM_GET_ACTIVEDATA_REQUEST_PROCESSES_AND_TRANSACTIONS_CONTINUE (2)

  ewlm_connect_handle_t         connect_handle;
  ewlm_get_activedata_cursor_t  cursor;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_ACTIVEDATA_IN_VERSION001     (1)
  #define EWLM_GET_ACTIVEDATA_IN_V001SIZE       \
          ( sizeof(ewlm_get_activedata_input_t) )
} ewlm_get_activedata_input_t;


/*
 *  Signature:
 *              EWLM get data about active
 *              transactions and processes
 */

ewlm_status_t ewlm_get_activedata(
    /* [in]  */ ewlm_get_activedata_input_t    *input_buffer,
    /* [in]  */ ewlm_bytelength_t               input_buffer_size,
    /* [out] */ ewlm_char_t                    *output_buffer,
    /* [in]  */ ewlm_bytelength_t               output_buffer_size
);


typedef struct ewlm_generic_header
{
  ewlm_uint16_t         type;        /* Record type                */
  ewlm_uint16_t         length;      /* Length of record in bytes  */
  ewlm_uint16_t         version;     /* record version within type */
  ewlm_uint16_t         _reserved1;  /* 8 byte alignment           */
} ewlm_generic_header_t;


typedef struct ewlm_get_activedata_inflight_process_output
{
  ewlm_generic_header_t         header;
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PROCESSES_TYPE         (001)

  ewlm_process_id_t             pid;
  ewlm_cpu_time_t               cpu_time;
  ewlm_timestamp_t              classify_time;
  ewlm_duration_t               queue_time;
  ewlm_num_samples_t            times_sampled;

  /* Sampled delay counters */
  ewlm_state_sample_t           cpu_using;
  ewlm_state_sample_t           cpu_delay;
  ewlm_state_sample_t           page_delay;
  ewlm_state_sample_t           io_delay;
  ewlm_state_sample_t           idle;
  ewlm_state_sample_t           other;

  ewlm_get_activedata_flags_t   flags;
  ewlm_classification_id_t      reporting_id;
  ewlm_period_t                 period_number;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PROCESSES_VERSION001     (1)
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PROCESSES_V001SIZE       (80)

  /* microsecond process data                           @LU*/
  ewlm_micro_duration_t         queue_time_microsec;
  /* ------- end of data present in version 2 */
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PROCESSES_VERSION002     (2)
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PROCESSES_V002SIZE       \
          ( sizeof(ewlm_get_activedata_inflight_process_output_t) )
} ewlm_get_activedata_inflight_process_output_t;


typedef struct ewlm_get_activedata_inflight_ARM_partially_instrumented_output
{
  ewlm_generic_header_t         header;
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PARTIALINSTARM_TYPE      (003)
  ewlm_applinst_id_t            appl_inst_id;
  ewlm_applenv_id_t             parent_applenv_id;
  ewlm_applinst_id_t            parent_applinst_id;
  ewlm_timestamp_t              classify_time;
  ewlm_duration_t               queue_time;
  ewlm_duration_t               blocked_time;
  ewlm_get_activedata_flags_t   flags;
  ewlm_local_server_id_t        parent_sys_id;
  ewlm_hopcount_t               hop_count;
  ewlm_classification_id_t      reporting_id;
  ewlm_period_t                 period_number;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PARTIALINSTARM_VERSION001        (1)
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PARTIALINSTARM_V001SIZE          (64)

  /* microsecond ARM transaction data                           @LU*/
  ewlm_micro_duration_t         queue_time_microsec;
  ewlm_micro_duration_t         blocked_time_microsec;
  /* ------- end of data present in version 2 */
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PARTIALINSTARM_VERSION002        (2)
  #define EWLM_GET_ACTIVEDATA_INFLIGHT_PARTIALINSTARM_V002SIZE          \
  ( sizeof(ewlm_get_activedata_inflight_ARM_partially_instrumented_output_t) )
} ewlm_get_activedata_inflight_ARM_partially_instrumented_output_t;


typedef struct ewlm_get_activedata_endofdata_output
{
  ewlm_generic_header_t        header;
  #define EWLM_GET_ACTIVEDATA_ENDOFDATA_TYPE    (99)
  ewlm_get_activedata_cursor_t cursor;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_ACTIVEDATA_ENDOFDATA_VERSION001      (1)
  #define EWLM_GET_ACTIVEDATA_ENDOFDATA_V001SIZE        \
          offsetof(ewlm_get_activedata_endofdata_output_t,flags)

  ewlm_int32_t                  flags;
  /* A time change occurred which the underlying implementation
     believes might impact accurateness of data returned. */
  #define EWLM_GET_ACTIVEDATA_ELAPSED_TIMES_SUSPECT     (0x40000000)

    /* ------- end of data present in version 2 */
  #define EWLM_GET_ACTIVEDATA_ENDOFDATA_VERSION002      (2)
  #define EWLM_GET_ACTIVEDATA_ENDOFDATA_V002SIZE        \
          ( sizeof(ewlm_get_activedata_endofdata_output_t) )
} ewlm_get_activedata_endofdata_output_t;


typedef struct ewlm_get_completions_input
{
  ewlm_APIversion_t             version;
  ewlm_int32_t                  timeout;  /* milliseconds
                                           * 1 - 600000
                                           */
  ewlm_int32_t                  request_type;
  #define EWLM_GET_COMPLETIONS_REQUEST_SYNCHRONOUS      (1)
  #define EWLM_GET_COMPLETIONS_REQUEST_WAIT             (2)
  #define EWLM_GET_COMPLETIONS_REQUEST_CANCEL_WAIT      (3)

  ewlm_connect_handle_t      connect_handle;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_COMPLETIONS_IN_VERSION001    (1)
  #define EWLM_GET_COMPLETIONS_IN_V001SIZE      \
          ( sizeof(ewlm_get_completions_input_t) )
} ewlm_get_completions_input_t;


/*
 *  Signature:
 *              EWLM get data about terminated
 *              transactions and processes
 */

ewlm_status_t ewlm_get_completions(
    /* [in]  */ ewlm_get_completions_input_t  *input_buffer,
    /* [in]  */ ewlm_bytelength_t              input_buffer_size,
    /* [out] */ ewlm_char_t                   *output_buffer,
    /* [in]  */ ewlm_bytelength_t              output_buffer_size
);


typedef struct ewlm_get_completions_process_output
{
  ewlm_generic_header_t         header;
  #define EWLM_GET_COMPLETIONS_PROCESSES_TYPE           (101)
  ewlm_process_id_t             pid;
  ewlm_cpu_time_t               cpu_time;
  ewlm_duration_t               queue_time;
  ewlm_duration_t               response_time;
  ewlm_num_samples_t            times_sampled;

  /* Sampled delay counters */
  ewlm_state_sample_t           cpu_using;
  ewlm_state_sample_t           cpu_delay;
  ewlm_state_sample_t           page_delay;
  ewlm_state_sample_t           io_delay;
  ewlm_state_sample_t           idle;
  ewlm_state_sample_t           other;

  ewlm_get_completions_flags_t  flags;
  ewlm_classification_id_t      reporting_id;
  ewlm_period_t                 period_number;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_COMPLETIONS_PROCESSES_VERSION001     (1)
  #define EWLM_GET_COMPLETIONS_PROCESSES_V001SIZE       (80)

  /* microsecond process data                           @LU*/
  ewlm_micro_duration_t         queue_time_microsec;
  ewlm_micro_duration_t         response_time_microsec;

  /* ------- end of data present in version 2 */
  #define EWLM_GET_COMPLETIONS_PROCESSES_VERSION002     (2)
  #define EWLM_GET_COMPLETIONS_PROCESSES_V002SIZE       \
      ( sizeof(ewlm_get_completions_process_completion_output_t) )
} ewlm_get_completions_process_completion_output_t;


typedef struct ewlm_get_completions_ARM_partially_instrumented_output
{
  ewlm_generic_header_t         header;
  #define EWLM_GET_COMPLETIONS_PARTIALINSTARM_TYPE      (103)
  ewlm_applinst_id_t            appl_inst_id;
  ewlm_applenv_id_t             parent_applenv_id;
  ewlm_applinst_id_t            parent_applinst_id;

  ewlm_duration_t               queue_time;
  ewlm_duration_t               blocked_time;
  ewlm_duration_t               response_time;
  ewlm_ARM_completion_status_t  completion_status;

  ewlm_get_completions_flags_t  flags;

  ewlm_local_server_id_t        parent_sys_id;
  ewlm_hopcount_t               hop_count;
  ewlm_classification_id_t      reporting_id;
  ewlm_period_t                 period_number;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_COMPLETIONS_PARTIALINSTARM_VERSION001        (1)
  #define EWLM_GET_COMPLETIONS_PARTIALINSTARM_V001SIZE          (56)

  /* microsecond ARM transaction data                   @LU*/
  ewlm_micro_duration_t         queue_time_microsec;
  ewlm_micro_duration_t         blocked_time_microsec;
  ewlm_micro_duration_t         response_time_microsec;
  /* ------- end of data present in version 2 */
  #define EWLM_GET_COMPLETIONS_PARTIALINSTARM_VERSION002        (2)
  #define EWLM_GET_COMPLETIONS_PARTIALINSTARM_V002SIZE          \
    ( sizeof(ewlm_get_completions_ARM_partially_instrumented_output_t) )
} ewlm_get_completions_ARM_partially_instrumented_output_t;


typedef struct ewlm_get_completions_appl_instance_id_termination_output
{
  ewlm_generic_header_t         hdr;
  #define EWLM_GET_COMPLETIONS_AIID_INVALID_TYPE        (201)
  ewlm_applinst_id_t            appl_inst_id;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_COMPLETIONS_AIID_VERSION001          (1)
  #define EWLM_GET_COMPLETIONS_AIID_V001SIZE            \
   ( offsetof(ewlm_get_completions_appl_instance_id_termination_output_t,\
     flags) )

  ewlm_int32_t                  flags;
  #define EWLM_GET_COMPLETIONS_AIID_INVALID_APPLDATA        (0x40000000)
  /* Version 2 data is present.  If this flag is on,
   * the version 2 data from AEID forward contains no
   * predictable content and should not be used by the EWLM agent
   */
  ewlm_applenv_id_t             application_environment_id;
  ewlm_process_id_t             process_id;
  ewlm_encodedbytestream_t      process_name;
  ewlm_encodedbytestream_t      application_name;
  ewlm_encodedbytestream_t      application_group_name;
  ewlm_encodedbytestream_t      application_instance_name;
  /* ------- end of data present in version 2 */
  #define EWLM_GET_COMPLETIONS_AIID_VERSION002          (2)
  #define EWLM_GET_COMPLETIONS_AIID_V002SIZE            \
    ( sizeof(ewlm_get_completions_appl_instance_id_termination_output_t) )
} ewlm_get_completions_appl_instance_id_termination_output_t;


typedef struct ewlm_get_completions_appl_environment_id_termination_output
{
  ewlm_generic_header_t         hdr;
  #define EWLM_GET_COMPLETIONS_AEID_INVALID_TYPE        (301)
  ewlm_applenv_id_t             appl_env_id;
  /* ------- end of data present in version 1 */
  #define EWLM_GET_COMPLETIONS_AEID_VERSION001          (1)
  #define EWLM_GET_COMPLETIONS_AEID_V001SIZE            \
     ( sizeof(ewlm_get_completions_appl_environment_id_termination_output_t) )
} ewlm_get_completions_appl_environment_id_termination_output_t;


typedef struct ewlm_get_completions_endofdata_output
{
  ewlm_generic_header_t header;
  #define EWLM_GET_COMPLETIONS_ENDOFDATA_TYPE   (999)

  ewlm_int32_t          lost_tran_count;     /* total mode */
  ewlm_int32_t          lost_process_count;  /* total mode */
  ewlm_int32_t          lost_total_count;    /* total mode */
  /* ------- end of data present in version 1 */
  #define EWLM_GET_COMPLETIONS_ENDOFDATA_VERSION001     (1)
  #define EWLM_GET_COMPLETIONS_ENDOFDATA_V001SIZE       \
          ( sizeof(ewlm_get_completions_endofdata_output_t) )
}    ewlm_get_completions_endofdata_output_t;


/* ------------------------------------------------------------------------- */
/* ------------------------- policy management services -------------------- */
/* ------------------------------------------------------------------------- */


typedef struct ewlm_prepare_policy_input
{
  ewlm_APIversion_t             version;
  ewlm_policytype_t             policy_type;
  #define EWLM_PREPARE_POLICY_SERVICE           (1)

  ewlm_unencodedbytestream_t    policy;
  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1 */
  #define EWLM_PREPARE_POLICY_IN_VERSION001     (1)
  #define EWLM_PREPARE_POLICY_INPUT_V001SIZE    \
          ( sizeof(ewlm_prepare_policy_input_t) )
} ewlm_prepare_policy_input_t;


typedef struct ewlm_prepare_policy_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  /* ------- end of data present in version 1 */
  #define EWLM_PREPARE_POLICY_OUTVERSION001     (1)
  #define EWLM_PREPARE_POLICY_OUTPUT_V001SIZE   \
          ( sizeof(ewlm_prepare_policy_output_t) )
} ewlm_prepare_policy_output_t;


/*
 *  Signature:
 *              EWLM prepare policy
 */

ewlm_status_t ewlm_prepare_policy(
    /* [in]  */ ewlm_char_t                *input_buffer,
    /* [in]  */ ewlm_bytelength_t           input_buffer_size,
    /* [out] */ ewlm_char_t                *output_buffer,
    /* [in]  */ ewlm_bytelength_t           output_buffer_size
);


typedef struct ewlm_commit_policy_input
{
  ewlm_APIversion_t             version;
  ewlm_policytype_t             policy_type;
  #define EWLM_COMMIT__POLICY_SERVICE           (EWLM_PREPARE_POLICY_SERVICE)

  ewlm_unencodedbytestream_t    policy;
  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1 */
  #define EWLM_COMMIT_POLICY_IN_VERSION001      (1)
  #define EWLM_COMMIT_POLICY_INPUT_V001SIZE     \
          ( sizeof(ewlm_commit_policy_input_t) )
} ewlm_commit_policy_input_t;


typedef struct ewlm_commit_policy_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  /* ------- end of data present in version 1 */
  #define EWLM_COMMIT_POLICY_OUTVERSION001      (1)
  #define EWLM_COMMIT_POLICY_OUTPUT_V001SIZE    \
          ( sizeof(ewlm_commit_policy_output_t) )
} ewlm_commit_policy_output_t;


/*
 *  Signature:
 *              EWLM commit policy
 */

ewlm_status_t ewlm_commit_policy(
    /* [in]  */ ewlm_char_t            *input_buffer,
    /* [in]  */ ewlm_bytelength_t       input_buffer_size,
    /* [out] */ ewlm_char_t            *output_buffer,
    /* [in]  */ ewlm_bytelength_t       output_buffer_size
);


typedef struct ewlm_abort_policy_input
{
  ewlm_APIversion_t             version;
  ewlm_policytype_t             policy_type;
  #define EWLM_ABORT___POLICY_SERVICE           (EWLM_PREPARE_POLICY_SERVICE)

  ewlm_unencodedbytestream_t    policy;
  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1 */
  #define EWLM_ABORT_POLICY_IN_VERSION001       (1)
  #define EWLM_ABORT_POLICY_INPUT_V001SIZE      \
          ( sizeof(ewlm_abort_policy_input_t) )
} ewlm_abort_policy_input_t;


typedef struct ewlm_abort_policy_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  /* ------- end of data present in version 1 */
  #define EWLM_ABORT_POLICY_OUTVERSION001       (1)
  #define EWLM_ABORT_POLICY_OUTPUT_V001SIZE     \
          ( sizeof(ewlm_abort_policy_output_t) )
} ewlm_abort_policy_output_t;


/*
 *  Signature:
 *              EWLM abort prepared policy
 */

ewlm_status_t ewlm_abort_policy(
    /* [in]  */ ewlm_char_t            *input_buffer,
    /* [in]  */ ewlm_bytelength_t       input_buffer_size,
    /* [out] */ ewlm_char_t            *output_buffer,
    /* [in]  */ ewlm_bytelength_t       output_buffer_size
);


typedef struct ewlm_verify_policy_input
{
  ewlm_APIversion_t             version;
  ewlm_policytype_t             policy_type;
  #define EWLM_VERIFY__POLICY_SERVICE           (EWLM_PREPARE_POLICY_SERVICE)

  ewlm_unencodedbytestream_t    policy;
  ewlm_connect_handle_t         connect_handle;
  /* ------- end of data present in version 1 */
  #define EWLM_VERIFY_POLICY_IN_VERSION001      (1)
  #define EWLM_VERIFY_POLICY_INPUT_V001SIZE     \
          ( sizeof(ewlm_verify_policy_input_t) )
} ewlm_verify_policy_input_t;


typedef struct ewlm_verify_policy_output
{
  ewlm_APIversion_t             version;
  ewlm_bytelength_t             sizeneeded;
  /* ------- end of data present in version 1 */
  #define EWLM_VERIFY_POLICY_OUTVERSION001      (1)
  #define EWLM_VERIFY_POLICY_OUTPUT_V001SIZE    \
          ( sizeof(ewlm_verify_policy_output_t) )
} ewlm_verify_policy_output_t;


/*
 *  Signature:
 *              EWLM verify policy
 */

ewlm_status_t ewlm_verify_policy(
    /* [in]  */ ewlm_char_t            *input_buffer,
    /* [in]  */ ewlm_bytelength_t       input_buffer_size,
    /* [out] */ ewlm_char_t            *output_buffer,
    /* [in]  */ ewlm_bytelength_t       output_buffer_size
);


#ifdef __cplusplus
}
#endif /* __cplusplus */


/* ------------------------------------------------------------------------- */
/* -------------- EWLM Platform Services Return Codes ---------------------- */
/* ------------------------------------------------------------------------- */


/* ------------------------------------------------------------------------- */
/* -----------------------non-error return codes --------------------------- */
/* ------------------------------------------------------------------------- */


/*
 * Return codes 0 through 999 are reserved for common non-error
 * EWLM services use.
 */
#define EWLM_IRC_EWLM_RANGE_START        (0)

#define EWLM_SUCCESS                     (0)/* Data was returned in the buffer
                                               provided, and no more data
                                               can be returned at this time. */
#define EWLM_MORE_DATA                   (1)/* Data was returned in the buffer
                                               provided, and more data can be
                                               returned at this time.  The
                                               cursor parameter has been
                                               updated to contain a
                                               platform-dependent restart
                                               point, and this value must be
                                               passed on a CONTINUE request in
                                               order to obtain the next window
                                               of data. */

#define EWLM_IRC_EWLM_RANGE_END          (999)

/*
 * Return codes 1000 through 1999 are reserved for common non-error
 * ARM services use.
 */
#define EWLM_IRC_ARM_RANGE_START           (1000)
#define EWLM_IRC_ARM_RANGE_END             (1999)

/*
 * Return codes 2000 through 2999 are reserved for AIX non-error use.
 */
#define EWLM_IRC_AIX_RANGE_START           (2000)
#define EWLM_IRC_AIX_RANGE_END             (2999)

/*
 * Return codes 3000 through 3999 are reserved for OS/400 non-error use.
 */
#define EWLM_IRC_OS_400_RANGE_START        (3000)
#define EWLM_IRC_OS_400_RANGE_END          (3999)

/*
 * Return codes 4000 through 4999 are reserved for z/OS non-error use.
 */
#define EWLM_IRC_Z_OS_RANGE_START          (4000)
#define EWLM_IRC_Z_OS_RANGE_END            (4999)

/*
 * Return codes 5000 through 5999 are reserved for common EWLM Java and JNI
 * services non-error use.
 */
#define EWLM_IRC_EWLM_JAVA_RANGE_START     (5000)
#define EWLM_IRC_EWLM_JAVA_RANGE_END       (5999)

/*
 * Return codes 6000 through 6999 are reserved for Windows non-error use.
 */
#define EWLM_IRC_WINDOWS_RANGE_START       (6000)
#define EWLM_IRC_WINDOWS_RANGE_END         (6999)

/*
 * Return codes 7000 through 7999 are reserved for Linux non-error use.
 */
#define EWLM_IRC_LINUX_RANGE_START         (7000)
#define EWLM_IRC_LINUX_RANGE_END           (7999)

/*
 * Return codes 8000 through 8999 are reserved for Solaris non-error use.
 */
#define EWLM_IRC_SOLARIS_RANGE_START       (8000)
#define EWLM_IRC_SOLARIS_RANGE_END         (8999)

/*
 * Return codes 9000 through 9999 are reserved for HP/UX non-error use.
 */
#define EWLM_IRC_HP_UX_RANGE_START         (9000)
#define EWLM_IRC_HP_UX_RANGE_END           (9999)



/*
 * Return codes 15000 through 16999 are reserved for common ARM Java and JNI
 * services non-error use.
 */
#define EWLM_IRC_ARM_JAVA_RANGE_START      (15000)
#define EWLM_IRC_ARM_JAVA_RANGE_END        (16999)

#define EWLM_IRC_JAVA_RANGE_START          (15000)
#define EWLM_IRC_JAVA_RANGE_END            (16999)

/*
 * Return codes 20000 through 20999 are reserved for ARM Standard
 * services use.
 */
#define ARM_IRC_RESERVED_START             (20000)
#define ARM_IRC_RESERVED_END               (20999)


/* ------------------------------------------------------------------------- */
/* -------------------------error return codes ----------------------------- */
/* ------------------------------------------------------------------------- */

/*
 * Return codes -1 through -999 are reserved for common EWLM services use.
 */
#define EWLM_RC_EWLM_RANGE_START            (-1)
#define EWLM_RC_EWLM_RANGE_END            (-999)

#define EWLM_RC_POLICY_MAX                (-100)
#define EWLM_NO_CONNECTION                (-100)/* The EWLM agent was not
                                                   connected to the platform
                                                   component. */
#define EWLM_BAD_CONNECT_HANDLE           (-101)/* The input connect handle was
                                                   not recognized as valid by
                                                   the platform component.
                                                   Either the value is invalid,
                                                   or the value is valid but
                                                   the connect handle is not
                                                   associated with the EWLM
                                                   agent      */
#define EWLM_BAD_POLICY                   (-102)
#define EWLM_NO_PREPARED_POLICY           (-103)
#define EWLM_WRONG_POLICY                 (-104)
#define EWLM_BAD_POLICY_ADDR              (-105)
#define EWLM_BAD_POLICY_HEADER            (-106)
#define EWLM_BAD_POLICY_SIZE              (-107)

#define EWLM_BAD_POLICY_TRIPLET_POLICY    (-108)
#define EWLM_BAD_POLICY_TRIPLET_WORKLOAD  (-109)
#define EWLM_BAD_POLICY_TRIPLET_SCLS      (-110)
#define EWLM_BAD_POLICY_TRIPLET_GOAL      (-111)
#define EWLM_BAD_POLICY_TRIPLET_APPLENV1  (-112)
#define EWLM_BAD_POLICY_TRIPLET_APPLENV2  (-113)
#define EWLM_BAD_POLICY_TRIPLET_APPLENV3  (-114)
#define EWLM_BAD_POLICY_TRIPLET_TCCLS     (-115)
#define EWLM_BAD_POLICY_TRIPLET_TCFILT    (-116)
#define EWLM_BAD_POLICY_TRIPLET_SERV      (-117)
#define EWLM_BAD_POLICY_TRIPLET_PCCLS     (-118)
#define EWLM_BAD_POLICY_TRIPLET_PCFILT    (-119)
#define EWLM_BAD_POLICY_TRIPLET_FILTVAL   (-120)
#define EWLM_BAD_POLICY_APPLENV1          (-121)
#define EWLM_BAD_POLICY_APPLENV2          (-122)
#define EWLM_BAD_POLICY_APPLENV3          (-123)
#define EWLM_BAD_POLICY_TCLASS1           (-124)
#define EWLM_BAD_POLICY_TCLASS2           (-125)
#define EWLM_BAD_POLICY_TCLASS3           (-126)
#define EWLM_BAD_POLICY_TCFILTER_EYE      (-127)
#define EWLM_BAD_POLICY_TCFILTER_INDEX    (-128)
#define EWLM_BAD_POLICY_TCFILTER_SDA      (-129)
#define EWLM_BAD_POLICY_SERV              (-130)
#define EWLM_BAD_POLICY_PCLASS            (-131)
#define EWLM_BAD_POLICY_PCFILTER_EYE      (-132)
#define EWLM_BAD_POLICY_PCFILTER_INDEX    (-133)
#define EWLM_BAD_POLICY_PCFILTER_SDA      (-134)

#define EWLM_BAD_POLICY_TYPE              (-199)/* Policy type not supported */
#define EWLM_RC_POLICY_MIN                (-199)

#define EWLM_RC_COM_MIN                   (-200)
#define EWLM_BAD_FLAGS                    (-200)
#define EWLM_BAD_BUFFER                   (-201)
#define EWLM_BAD_TIMEOUT                  (-202)/* Timeout value not in range
                                                   1..600,000 inclusive */
#define EWLM_ENOMEM                       (-203)
#define EWLM_GETCOMPLETIONS_SECOND_WAITER (-204)
#define EWLM_MISSING_PARM                 (-205)/* Required input parameter(s)
                                                   not provided. */
#define EWLM_BAD_PARAMETER_ADDRESS        (-206)
#define EWLM_NOT_AUTHORIZED               (-207)
#define EWLM_BAD_APPL_INST                (-208)
#define EWLM_LIMITOF1_CONNECTION          (-209)/* The platform has another
                                                   connection currently open.
                                                   This connection request was
                                                   rejected due to the limit of
                                                   one active connection per OS
                                                   image. */
#define EWLM_INVALID_SIZE                 (-210)
#define EWLM_INVALID_TOKEN                (-211)/* API such as get_activedata
                                                   received a value, such as a
                                                   token or cursor, which is
                                                   invalid */
#define EWLM_BAD_IN_BUFFER                (-212)/* Error referencing input
                                                   buffer. */
#define EWLM_BAD_OUTBUFFER                (-213)/* Error referencing output
                                                   buffer. */
#define EWLM_UNSUPPORTED_REQUEST_TYPE     (-214)/* Request type not
                                                   supported */
#define EWLM_OUTBUFFER_BELOW_V1SIZE       (-215)/* Output buffer below minimum
                                                   size. At least enough
                                                   storage must be provided to
                                                   return the version number
                                                   and required output size. */
#define EWLM_OUTBUFFER_TOO_SMALL          (-216)/* Output buffer too small to
                                                   contain all data the OS
                                                   returns. sizeneeded contains
                                                   the buffer size that should
                                                   be used. */
#define EWLM_OUTBUFFER_TOO_LARGE          (-217)/* Output buffer above maximum
                                                   size. */
#define EWLM_INBUFFER_BELOW_V1SIZE        (-218)/* Input buffer below minimum
                                                   size. */
#define EWLM_INBUFFER_TOO_SMALL           (-219)/* Input buffer too small. */
#define EWLM_INBUFFER_TOO_LARGE           (-220)/* Input buffer too small. */
#define EWLM_AIID_NOT_FOUND               (-221)/* AIID not found */
#define EWLM_SUPPORT_NOT_ENABLED          (-222)/* Error because EWLM support
                                                   is disabled */
#define EWLM_COMPONENT_ERROR              (-223)/* The platform experienced an
                                                   error not covered by other
                                                   return codes, and recovered.
                                                   This is normally an
                                                   environmental error such as
                                                   an unsolicited exception. */
#define EWLM_RC_COM_MAX                   (-223)


/*
 * Return codes -1000 through -1999 are reserved for common ARM services use.
 */
#define EWLM_RC_ARM_RANGE_START           (-1000)
#define EWLM_RC_ARM_RANGE_END             (-1999)


/*
 * Return codes -2000 through -2999 are reserved for AIX use.
 */
#define EWLM_RC_AIX_RANGE_START           (-2000)
#define EWLM_RC_AIX_RANGE_END             (-2999)


/*
 * Return codes -3000 through -3999 are reserved for OS/400 use.
 */
#define EWLM_RC_OS_400_RANGE_START        (-3000)
#define EWLM_BAD_CONFIG_VALUE             (-3000)
#define EWLM_RC_INITIALIZE_ERROR          (-3001)
#define EWLM_RC_ALREADY_CONNECTED         (-3002)
#define EWLM_RC_OS_400_RANGE_END          (-3999)


/*
 * Return codes -4000 through -4999 are reserved for z/OS use.
 */
#define EWLM_RC_Z_OS_RANGE_START          (-4000)
#define EWLM_RC_Z_OS_RANGE_END            (-4999)


/*
 * Return codes -5000 through -5999 are reserved for common EWLM Java and JNI
 * services use.
 */
#define EWLM_RC_EWLM_JAVA_RANGE_START     (-5000)

#define EWLM_RC_EWLM_ARMJNI_START         (-5001)
#define EWLM_RC_EWLM_ARMJNI_END           (-5099)

#define EWLM_RC_EWLM_PLATJNI_START        (-5101)
#define EWLM_RC_EWLM_PLATJNI_END          (-5199)

#define EWLM_RC_EWLM_NONIBMJNI_START      (-5201)
#define EWLM_RC_EWLM_NONIBMJNI_END        (-5299)

#define EWLM_RC_EWLM_NETWLMJNI_START      (-5301)
#define EWLM_RC_EWLM_NETWLMJNI_END        (-5399)

#define EWLM_RC_EWLM_JAVA_RANGE_END       (-5999)


/*
 * Return codes -6000 through -6999 are reserved for Windows use.
 */
#define EWLM_RC_WINDOWS_RANGE_START       (-6000)
#define EWLM_RC_WINDOWS_RANGE_END         (-6999)

/*
 * Return codes -7000 through -7999 are reserved for Linux use.
 */
#define EWLM_RC_LINUX_RANGE_START         (-7000)
#define EWLM_RC_LINUX_RANGE_END           (-7999)

/*
 * Return codes -8000 through -8999 are reserved for Solaris use.
 */
#define EWLM_RC_SOLARIS_RANGE_START       (-8000)
#define EWLM_RC_SOLARIS_RANGE_END         (-8999)

/*
 * Return codes -9000 through -9999 are reserved for HP/UX use.
 */
#define EWLM_RC_HP_UX_RANGE_START         (-9000)
#define EWLM_RC_HP_UX_RANGE_END           (-9999)

/*
 * Return codes -15000 through -16999 are reserved for common ARM Java and JNI
 * services use.
 */
#define EWLM_RC_ARM_JAVA_RANGE_START      (-15000)
#define EWLM_RC_ARM_JAVA_RANGE_END        (-16999)

#define EWLM_RC_JAVA_RANGE_START          (-15000)
#define EWLM_RC_JAVA_RANGE_END            (-16999)

/*
 *Return codes -17000 to -17999 are reserved for internal error codes.
 */
#define EWLM_RC_EWLMOTHR_ERROR_RANGE_START      (-17000)
#define EWLM_RC_EWLMOTHR_ERROR_RANGE_END        (-17999)


/*
 * Return codes -20000 through -20999 are reserved for ARM Standard
 * services use.
 */
#define ARM_ERROR_CODE_RESERVED_START     (-20000)
#define ARM_ERROR_CODE_RESERVED_END       (-20999)


/*
 * Return codes -28000 to -29999 are reserved for EWLM common use.
 * No dump will be generated.  A configuration error will be issued.
 */
#define EWLM_RC_EWLM_COMMON_NODUMP_CONFIG_RANGE_START     (-28000)
#define EWLM_RC_EWLM_COMMON_NODUMP_CONFIG_RANGE_END       (-29999)


/*
 * Return codes -30000 to -32767 are reserved for EWLM common use.
 * No dump will be generated and no configuration error will be issued.
 */
#define EWLM_RC_EWLM_COMMON_NODUMP_NOCONFIG_RANGE_START   (-30000)
#define EWLM_RC_EWLM_COMMON_NODUMP_NOCONFIG_RANGE_END     (-32767)


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif


#endif

