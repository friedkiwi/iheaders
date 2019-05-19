/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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

/* Copyright (c) 2003 The Open Group                                 */
/* Copyright (c) 2003 IBM Corporation                                */
/*                                                                   */
/* This file has been modified by the IBM Corporation from           */
/* the original version copyrighted by The Open Group.               */
/*                                                                   */
/* Permission is hereby granted, free of charge, to any person       */
/* obtaining a copy of this software (the "Software"),               */
/* to deal in the Software without restriction, including without    */
/* limitation the rights to use, copy, modify, merge, publish,       */
/* distribute, sublicense, and/or sell copies of the Software, and   */
/* to permit persons to whom the Software is furnished to do so,     */
/* subject to the following conditions:                              */
/*                                                                   */
/* The above copyright notice and this permission notice shall be    */
/* included in all copies or substantial portions of the Software.   */
/*                                                                   */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,   */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES   */
/* OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND          */
/* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT       */
/* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,      */
/* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,              */
/* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR        */
/* THE USE OR OTHER DEALINGS IN THE SOFTWARE.                        */

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/ARM4                                          */
/*                                                                   */
/* Description: This file contains declarations of functions         */
/*              and data structures, used by callers of              */
/*              the ARM APIs (Application Response Measurement).     */
/*              These declatations apply to ARM version 4.0.         */
/*              For more information on ARM APIs, see ARM standard   */
/*              documentation available on www.opengroup.org.        */
/*                                                                   */
/* NOTE:        The ARM 4.0 C language binding differs completely    */
/*              from the ARM 1.0 and ARM 2.0 bindings.               */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/*      D99691.2     5D30  031007 AP:       New File                 */
/* $A0  D99691.6     5D30  040105 AP:       Minor update             */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef  _arm4_h
  #define  _arm4_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/* ----------------------------------------------------------------- */
/* operating system and compiler specific declarations               */
/* ----------------------------------------------------------------- */

#ifndef NULL
  #ifdef __cplusplus
    #define NULL 0
  #else
    #define NULL ((void *)0)
  #endif
#endif

/* ----------------------------------------------------------------- */
/* ----- 1. Determine 32 and 64 bit integer types ------------------ */
/* ----------------------------------------------------------------- */
#include <inttypes.h>

#define ARM4_CHAR    char

#define ARM4_INT8    int8_t
#define ARM4_INT16   int16_t
#define ARM4_INT32   int32_t
#define ARM4_INT64   int64_t

#define ARM4_UINT8   uint8_t
#define ARM4_UINT16  uint16_t
#define ARM4_UINT32  uint32_t
#define ARM4_UINT64  uint64_t

/* ----------------------------------------------------------------- */
/* ----- 2. API function call conventions -------------------------- */
/* -- Use of this macro is required by some operating system ------- */
/* -- environments/compilers --------------------------------------- */
/* ----------------------------------------------------------------- */
#define ARM4_API_CALL
#define ARM4_API_DYNAMIC(type) type ARM4_API_CALL


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ----------------------------------------------------------------- */
/* ---------------------------- defines section -------------------- */
/* ----------------------------------------------------------------- */

/* Boolean values */
#define ARM_FALSE                               0
#define ARM_TRUE                                1

/* Transaction status */
#define ARM_STATUS_GOOD                         0
#define ARM_STATUS_ABORTED                      1
#define ARM_STATUS_FAILED                       2
#define ARM_STATUS_UNKNOWN                      3

/* ---------------------- reserved error codes range -------------- */

#define ARM_ERROR_CODE_RESERVED_MIN        -20999
#define ARM_ERROR_CODE_RESERVED_MAX        -20000

/* ----------------------- known sub-buffer formats --------------- */

#define ARM_SUBBUFFER_USER                      3
#define ARM_SUBBUFFER_ARRIVAL_TIME              4
#define ARM_SUBBUFFER_METRIC_VALUES             5
#define ARM_SUBBUFFER_SYSTEM_ADDRESS            6
#define ARM_SUBBUFFER_DIAG_DETAIL               7

#define ARM_SUBBUFFER_APP_IDENTITY            102
#define ARM_SUBBUFFER_APP_CONTEXT             103
#define ARM_SUBBUFFER_TRAN_IDENTITY           104
#define ARM_SUBBUFFER_TRAN_CONTEXT            105
#define ARM_SUBBUFFER_METRIC_BINDINGS         106
#define ARM_SUBBUFFER_CHARSET                 107

/* ---------------------------- metric defines -------------------- */

#define ARM_METRIC_FORMAT_RESERVED              0
#define ARM_METRIC_FORMAT_COUNTER32             1
#define ARM_METRIC_FORMAT_COUNTER64             2
#define ARM_METRIC_FORMAT_CNTRDIVR32            3
#define ARM_METRIC_FORMAT_GAUGE32               4
#define ARM_METRIC_FORMAT_GAUGE64               5
#define ARM_METRIC_FORMAT_GAUGEDIVR32           6
#define ARM_METRIC_FORMAT_NUMERICID32           7
#define ARM_METRIC_FORMAT_NUMERICID64           8
/* format 9 (string8) is deprecated */
#define ARM_METRIC_FORMAT_STRING32             10

#define ARM_METRIC_USE_GENERAL                  0
#define ARM_METRIC_USE_TRAN_SIZE                1
#define ARM_METRIC_USE_TRAN_STATUS              2

#define ARM_METRIC_MIN_ARRAY_INDEX              0
#define ARM_METRIC_MAX_ARRAY_INDEX              6
#define ARM_METRIC_MAX_COUNT                    7

#define ARM_METRIC_STRING32_MAX_CHARS          31
#define ARM_METRIC_STRING32_MAX_LENGTH          \
  (ARM_METRIC_STRING32_MAX_CHARS*3+1)

/* -------------------------- misc string defines ----------------- */

#define ARM_NAME_MAX_CHARS                    127
#define ARM_NAME_MAX_LENGTH                  (ARM_NAME_MAX_CHARS*3+1)

#define ARM_DIAG_DETAIL_MAX_CHARS            4095
#define ARM_DIAG_DETAIL_MAX_LENGTH    (ARM_DIAG_DETAIL_MAX_CHARS*3+1)

#define ARM_MSG_BUFFER_CHARS                  255
#define ARM_MSG_BUFFER_LENGTH              (ARM_MSG_BUFFER_CHARS*3+1)

/* -------------------------- properties defines ------------------ */

#define ARM_PROPERTY_MIN_ARRAY_INDEX            0
#define ARM_PROPERTY_MAX_ARRAY_INDEX           19
#define ARM_PROPERTY_MAX_COUNT                 20

#define ARM_PROPERTY_NAME_MAX_CHARS       (ARM_NAME_MAX_CHARS)
#define ARM_PROPERTY_NAME_MAX_LENGTH            \
  (ARM_PROPERTY_NAME_MAX_CHARS*3+1)
#define ARM_PROPERTY_VALUE_MAX_CHARS          255
#define ARM_PROPERTY_VALUE_MAX_LENGTH           \
  (ARM_PROPERTY_VALUE_MAX_CHARS*3+1)

#define ARM_PROPERTY_URI_MAX_CHARS           4095
#define ARM_PROPERTY_URI_MAX_LENGTH             \
  (ARM_PROPERTY_URI_MAX_CHARS*3+1)

/* --------------------- system address format values ------------- */

#define ARM_SYSADDR_FORMAT_RESERVED             0
#define ARM_SYSADDR_FORMAT_IPV4                 1
#define ARM_SYSADDR_FORMAT_IPV4PORT             2
#define ARM_SYSADDR_FORMAT_IPV6                 3
#define ARM_SYSADDR_FORMAT_IPV6PORT             4
#define ARM_SYSADDR_FORMAT_SNA                  5
#define ARM_SYSADDR_FORMAT_X25                  6
#define ARM_SYSADDR_FORMAT_HOSTNAME             7
#define ARM_SYSADDR_FORMAT_UUID                 8

/* -------------------------- mandatory charsets ------------------ */

/* IANA charset MIBenum numbers (http://www.iana.org/) */
#define ARM_CHARSET_ASCII                       3    /* mandatory */
#define ARM_CHARSET_UTF8                      106    /* mandatory */
#define ARM_CHARSET_UTF16BE                  1013
#define ARM_CHARSET_UTF16LE                  1014    /* Windows */
#define ARM_CHARSET_UTF16                    1015
#define ARM_CHARSET_IBM037                   2028    /* iSeries */
#define ARM_CHARSET_IBM1047                  2102    /* zSeries */

/* -------------------- flags to be passed on API calls ----------- */

/* Use ARM_FLAG_NONE instead of zero to be more readable            */
#define ARM_FLAG_NONE                (0x00000000)

/* ARM_FLAG_TRACE_REQUEST could be used in the following calls      */
/* to request a trace:                                              */
/*   - arm_generate_correlator()                                    */
/*   - arm_start_transaction()                                      */
/*   - arm_report_transaction()                                     */
/* NOTE: The agent does not have to support instance tracing so     */
/*       to be sure check the generated correlator using the        */
/*       arm_get_correlator_flags() function.                       */
#define ARM_FLAG_TRACE_REQUEST       (0x00000001)

/* ARM_FLAG_BIND_THREAD could be used on arm_start_transaction()    */
/* call to do an implicit arm_bind_thread().                        */
#define ARM_FLAG_BIND_THREAD         (0x00000002)

/* ARM_FLAG_CORR_IN_PROCESS indicates that a correlator will only   */
/* be used within the process it was created. An ARM implementation */
/* may optimize the generation of a correlator for that special     */
/* usage. This flag can be passed to:                               */
/*   - arm_generate_correlator()                                    */
/*   - arm_start_transaction()                                      */
/* NOTE: The agent does not have to support in-process correlation  */
/*       at all.                                                    */
#define ARM_FLAG_CORR_IN_PROCESS     (0x00000004)

/* -------------------------- correlator defines ------------------ */

#define ARM_CORR_MAX_LENGTH                   512

/* Correlator flag numbers. See arm_get_correlator_flags()          */
#define ARM_CORR_FLAGNUM_APP_TRACE              1
#define ARM_CORR_FLAGNUM_AGENT_TRACE            2

/* When no correlator is requested (e.g. in arm_start_transaction() */
#define ARM_CORR_NONE ((arm_correlator_t *) NULL)

/* ------ current time for arm_report_transaction() stop time ----- */

#define ARM_USE_CURRENT_TIME ((arm_stop_time_t)-1)

/* ----------------------------- misc defines --------------------- */

/* Use ARM_BUF4_NONE instead of a NULL to be more readable          */
#define ARM_BUF4_NONE     ((arm_buffer4_t*) NULL)

/* Use ARM_ID_NONE instead of a NULL to be more readable            */
#define ARM_ID_NONE           ((arm_id_t *) NULL)

/* Use ARM_STRING_NONE instead of a NULL to be more readable.    @A0*/
#define ARM_STRING_NONE ((arm_char_t *) NULL)

/* ---------------------------------------------------------------- */
/* ------------------ basic typedef section ----------------------- */
/* ---------------------------------------------------------------- */

/* Generic data types */
typedef ARM4_CHAR        arm_char_t;

typedef ARM4_INT8        arm_int8_t;
typedef ARM4_UINT8       arm_uint8_t; /* used to define byte arrays */

typedef ARM4_INT16       arm_int16_t;
typedef ARM4_UINT16      arm_uint16_t;

typedef ARM4_INT32       arm_int32_t;
typedef ARM4_UINT32      arm_uint32_t;

typedef ARM4_INT64       arm_int64_t;
typedef ARM4_UINT64      arm_uint64_t;

/* ARM-specific simple types */
typedef arm_int32_t      arm_boolean_t;
typedef arm_int32_t      arm_error_t;

/* ---------------------------------------------------------------- */
typedef arm_int64_t      arm_arrival_time_t;         /* opaque time */
typedef arm_int64_t      arm_stop_time_t;      /* time in millisecs */
typedef arm_int64_t      arm_response_time_t;   /* time in nanosecs */

typedef arm_int32_t      arm_tran_status_t;
typedef arm_int32_t      arm_charset_t;      /* IANA MIBenum values */
typedef arm_int32_t      arm_sysaddr_format_t;

/* ARM string buffer types */
typedef arm_char_t       arm_message_buffer_t[ARM_MSG_BUFFER_LENGTH];

/* subbuffer types */
typedef arm_int32_t      arm_subbuffer_format_t;

/* metric types */
typedef arm_uint8_t      arm_metric_format_t;
typedef arm_uint8_t      arm_metric_slot_t;
typedef arm_int16_t      arm_metric_usage_t;

/* handle types */
typedef arm_int64_t      arm_app_start_handle_t;
typedef arm_int64_t      arm_tran_start_handle_t;
typedef arm_int64_t      arm_tran_block_handle_t;

/* correlator types */
typedef arm_int16_t      arm_correlator_length_t;

/* ---------------------------------------------------------------- */
/* ----------------------- compound typedefs section -------------- */
/* ---------------------------------------------------------------- */

/* All IDs are 8-byte aligned for performance reasons,           @A0*/
/* so that they can be processed as a byte array or as integers     */
typedef struct arm_id
{
   union
   {
      arm_uint64_t    uint64[2];
      arm_uint32_t    uint32[4];
      arm_uint8_t     uint8[16];
   } id_u;
} arm_id_t;

/* Correlator */
typedef struct arm_correlator
{
   arm_uint8_t    opaque[ARM_CORR_MAX_LENGTH];
} arm_correlator_t;

/* User-defined metrics */
typedef arm_int32_t    arm_metric_counter32_t;
typedef arm_int64_t    arm_metric_counter64_t;
typedef arm_int32_t    arm_metric_divisor32_t;
typedef arm_int32_t    arm_metric_gauge32_t;
typedef arm_int64_t    arm_metric_gauge64_t;
typedef arm_int32_t    arm_metric_numericID32_t;
typedef arm_int64_t    arm_metric_numericID64_t;
typedef const arm_char_t *arm_metric_string32_t;
typedef struct arm_metric_cntrdivr32
{
   arm_metric_counter32_t  counter;
   arm_metric_divisor32_t  divisor;
} arm_metric_cntrdivr32_t;
typedef struct arm_metric_gaugedivr32
{
   arm_metric_gauge32_t    gauge;
   arm_metric_divisor32_t  divisor;
} arm_metric_gaugedivr32_t;

typedef struct arm_metric
{
   arm_metric_slot_t    slot;
   arm_metric_format_t  format;
   arm_metric_usage_t   usage;
   arm_boolean_t        valid;
   union
   {
      arm_metric_counter32_t    counter32;
      arm_metric_counter64_t    counter64;
      arm_metric_cntrdivr32_t   counterdivisor32;
      arm_metric_gauge32_t      gauge32;
      arm_metric_gauge64_t      gauge64;
      arm_metric_gaugedivr32_t  gaugedivisor32;
      arm_metric_numericID32_t  numericid32;
      arm_metric_numericID64_t  numericid64;
      arm_metric_string32_t     string32;
   } metric_u;
} arm_metric_t;

typedef struct arm_metric_binding
{
   arm_metric_slot_t    slot;
   arm_id_t             id;
} arm_metric_binding_t;

typedef struct arm_property
{
   const arm_char_t    *name;
   const arm_char_t    *value;
} arm_property_t;

/* ---------------------------------------------------------------- */
/* ---------------------- subbuffer typedefs section -------------- */
/* ---------------------------------------------------------------- */

typedef struct arm_subbuffer {
   arm_subbuffer_format_t format;
   /* format specific data fields are following here */
} arm_subbuffer_t;

/* This macro could be used to avoid compiler warning if you pass   */
/* one of the following arm_subbuffer_*_t structure pointers to     */
/* a function accepting subbuffer pointers. Any subbuffer is passed */
/* to the ARM API call as a (arm_subbuffer_t *) pointer. Use this   */
/* macro if you pass a "real" subbuffer to an API function.         */
#define ARM_SB(x)  (&((x).header))

/* The user data buffer */
typedef struct arm_buffer4
{
   arm_int32_t             count;
   arm_subbuffer_t       **subbuffer_array;
} arm_buffer4_t;

typedef struct arm_subbuffer_charset
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_CHARSET */

   arm_charset_t           charset;    /* IANA MIBenum value */
   arm_int32_t             flags;
} arm_subbuffer_charset_t;

typedef struct arm_subbuffer_app_identity
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_APP_IDENTITY */

   arm_int32_t             identity_property_count;
   const arm_property_t   *identity_property_array;
   arm_int32_t             context_name_count;
   const arm_char_t      **context_name_array;
} arm_subbuffer_app_identity_t;

typedef struct arm_subbuffer_app_context
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_APP_CONTEXT */

   arm_int32_t             context_value_count;
   const arm_char_t      **context_value_array;
} arm_subbuffer_app_context_t;

typedef struct arm_subbuffer_tran_identity
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_TRAN_IDENTITY */

   arm_int32_t             identity_property_count;
   const arm_property_t   *identity_property_array;
   arm_int32_t             context_name_count;
   const arm_char_t      **context_name_array;
   const arm_char_t       *uri;
} arm_subbuffer_tran_identity_t;

typedef struct arm_subbuffer_tran_context
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_TRAN_CONTEXT */

   arm_int32_t             context_value_count;
   const arm_char_t      **context_value_array;
   const arm_char_t       *uri;
} arm_subbuffer_tran_context_t;


typedef struct arm_subbuffer_arrival_time
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_ARRIVAL_TIME */

   arm_arrival_time_t      opaque_time;
} arm_subbuffer_arrival_time_t;

typedef struct arm_subbuffer_metric_bindings
{
   arm_subbuffer_t         header; /* ARM_SUBBUFFER_METRIC_BINDINGS */

   arm_int32_t             count;
   const arm_metric_binding_t *metric_binding_array;
} arm_subbuffer_metric_bindings_t;

typedef struct arm_subbuffer_metric_values
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_METRIC_VALUES */

   arm_int32_t             count;
   const arm_metric_t     *metric_value_array;
} arm_subbuffer_metric_values_t;

typedef struct arm_subbuffer_user
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_USER */

   const arm_char_t       *name;
   arm_boolean_t           id_valid;
   arm_id_t                id;
} arm_subbuffer_user_t;

typedef struct arm_subbuffer_system_address
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_SYSTEM_ADDRESS */

   arm_int16_t             address_format;
   arm_int16_t             address_length;
   const arm_uint8_t      *address;
   arm_boolean_t           id_valid;
   arm_id_t                id;
} arm_subbuffer_system_address_t;

typedef struct arm_subbuffer_diag_detail
{
   arm_subbuffer_t         header;  /* ARM_SUBBUFFER_DIAG_DETAIL */

   const arm_char_t       *diag_detail;
} arm_subbuffer_diag_detail_t;

/* ---------------------------------------------------------------- */
/* --------------------------- ARM4 API section ------------------- */
/* ---------------------------------------------------------------- */

/* register meta data API functions */
ARM4_API_DYNAMIC(arm_error_t)
arm_register_application(
        const arm_char_t              *app_name,
        const arm_id_t                *input_app_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
	arm_id_t                      *output_app_id);

ARM4_API_DYNAMIC(arm_error_t)
arm_destroy_application(
        const arm_id_t                *app_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

ARM4_API_DYNAMIC(arm_error_t)
arm_register_transaction(
        const arm_id_t                *app_id,
        const arm_char_t              *tran_name,
        const arm_id_t                *input_tran_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_id_t                      *output_tran_id);

ARM4_API_DYNAMIC(arm_error_t)
arm_register_metric(
        const arm_id_t                *app_id,
        const arm_char_t              *metric_name,
        const arm_metric_format_t      metric_format,
        const arm_metric_usage_t       metric_usage,
        const arm_char_t              *metric_unit,
        const arm_id_t                *input_metric_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_id_t                      *output_metric_id);

/* application instance API functions */
ARM4_API_DYNAMIC(arm_error_t)
arm_start_application(
        const arm_id_t                *app_id,
        const arm_char_t              *app_group,
        const arm_char_t              *app_instance,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_app_start_handle_t        *app_handle);

ARM4_API_DYNAMIC(arm_error_t)
arm_stop_application(
        const arm_app_start_handle_t   app_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* transaction instance API functions */
ARM4_API_DYNAMIC(arm_error_t)
arm_start_transaction(
        const arm_app_start_handle_t   app_handle,
        const arm_id_t                *tran_id,
        const arm_correlator_t        *parent_correlator,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_tran_start_handle_t       *tran_handle,
        arm_correlator_t              *current_correlator);

ARM4_API_DYNAMIC(arm_error_t)
arm_stop_transaction(
        const arm_tran_start_handle_t  tran_handle,
        const arm_tran_status_t        tran_status,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

ARM4_API_DYNAMIC(arm_error_t)
arm_update_transaction(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

ARM4_API_DYNAMIC(arm_error_t)
arm_discard_transaction(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

ARM4_API_DYNAMIC(arm_error_t)
arm_block_transaction(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_tran_block_handle_t       *block_handle);

ARM4_API_DYNAMIC(arm_error_t)
arm_unblock_transaction(
        const arm_tran_start_handle_t  tran_handle,
        const arm_tran_block_handle_t  block_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* thread support API functions */
ARM4_API_DYNAMIC(arm_error_t)
arm_bind_thread(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

ARM4_API_DYNAMIC(arm_error_t)
arm_unbind_thread(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* report transaction data API function */
ARM4_API_DYNAMIC(arm_error_t)
arm_report_transaction(
        const arm_app_start_handle_t   app_handle,
        const arm_id_t                *tran_id,
        const arm_tran_status_t        tran_status,
        const arm_response_time_t      response_time,
        const arm_stop_time_t          stop_time,
        const arm_correlator_t        *parent_correlator,
        const arm_correlator_t        *current_correlator,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* correlator API functions */
ARM4_API_DYNAMIC(arm_error_t)
arm_generate_correlator(
        const arm_app_start_handle_t   app_handle,
        const arm_id_t                *tran_id,
        const arm_correlator_t        *parent_correlator,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_correlator_t              *current_correlator);

ARM4_API_DYNAMIC(arm_error_t)
arm_get_correlator_length(
	const arm_correlator_t        *correlator,
	arm_correlator_length_t       *length);

ARM4_API_DYNAMIC(arm_error_t)
arm_get_correlator_flags(
	const arm_correlator_t        *correlator,
	const arm_int32_t              corr_flag_num,
	arm_boolean_t                 *flag);

/* miscellaneous API functions */
ARM4_API_DYNAMIC(arm_error_t)
arm_get_arrival_time(
        arm_arrival_time_t            *opaque_time);

ARM4_API_DYNAMIC(arm_error_t)
arm_get_error_message(
        const arm_charset_t            charset,
        const arm_error_t              code,
        arm_message_buffer_t           msg);

ARM4_API_DYNAMIC(arm_error_t)
arm_is_charset_supported(
	const arm_charset_t            charset,
	arm_boolean_t                 *supported);



/* ---------------------------------------------------------------- */
/* ------ function pointers to ARM4 APIs section ------------------ */
/* ------ Use these when using late binding ----------------------- */
/* ---------------------------------------------------------------- */

/* register meta data API function pointer types */
typedef arm_error_t
(ARM4_API_CALL* arm_register_application_t)(
        const arm_char_t              *app_name,
        const arm_id_t                *input_app_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_id_t                      *output_app_id);

typedef arm_error_t
(ARM4_API_CALL* arm_destroy_application_t)(
        const arm_id_t                *app_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

typedef arm_error_t
(ARM4_API_CALL* arm_register_transaction_t)(
        const arm_id_t                *app_id,
        const arm_char_t              *tran_name,
        const arm_id_t                *input_tran_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_id_t                      *output_tran_id);

typedef arm_error_t
    (ARM4_API_CALL* arm_register_metric_t)(
        const arm_id_t                *app_id,
        const arm_char_t              *metric_name,
        const arm_metric_format_t      metric_format,
        const arm_metric_usage_t       metric_usage,
        const arm_char_t              *metric_unit,
        const arm_id_t                *input_metric_id,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_id_t                      *output_metric_id);

/* application instance API function pointer types */
typedef arm_error_t
(ARM4_API_CALL* arm_start_application_t)(
        const arm_id_t                *app_id,
        const arm_char_t              *app_group,
        const arm_char_t              *app_instance,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_app_start_handle_t        *app_handle);

typedef arm_error_t
(ARM4_API_CALL* arm_stop_application_t)(
        const arm_app_start_handle_t   app_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* transaction instance API function pointer types */
typedef arm_error_t
(ARM4_API_CALL* arm_start_transaction_t)(
        const arm_app_start_handle_t   app_handle,
        const arm_id_t                *tran_id,
        const arm_correlator_t        *parent_correlator,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_tran_start_handle_t       *tran_handle,
        arm_correlator_t              *current_correlator);

typedef arm_error_t
(ARM4_API_CALL* arm_stop_transaction_t)(
        const arm_tran_start_handle_t  tran_handle,
        const arm_tran_status_t        tran_status,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

typedef arm_error_t
(ARM4_API_CALL* arm_update_transaction_t)(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

typedef arm_error_t
(ARM4_API_CALL* arm_discard_transaction_t)(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

typedef arm_error_t
(ARM4_API_CALL* arm_block_transaction_t)(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_tran_block_handle_t       *block_handle);

typedef arm_error_t
(ARM4_API_CALL* arm_unblock_transaction_t)(
        const arm_tran_start_handle_t  tran_handle,
        const arm_tran_block_handle_t  block_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* thread support API function pointer types */
typedef arm_error_t
(ARM4_API_CALL* arm_bind_thread_t)(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

typedef arm_error_t
(ARM4_API_CALL* arm_unbind_thread_t)(
        const arm_tran_start_handle_t  tran_handle,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* report transaction data API function pointer type*/
typedef arm_error_t
(ARM4_API_CALL* arm_report_transaction_t)(
        const arm_app_start_handle_t   app_handle,
        const arm_id_t                *tran_id,
        const arm_tran_status_t        tran_status,
        const arm_response_time_t      response_time,
        const arm_stop_time_t          stop_time,
        const arm_correlator_t        *parent_correlator,
        const arm_correlator_t        *current_correlator,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4);

/* correlator API function pointer types */
typedef arm_error_t
(ARM4_API_CALL* arm_generate_correlator_t)(
        const arm_app_start_handle_t   app_handle,
        const arm_id_t                *tran_id,
        const arm_correlator_t        *parent_correlator,
        const arm_int32_t              flags,
        const arm_buffer4_t           *buffer4,
        arm_correlator_t              *current_correlator);

typedef arm_error_t
(ARM4_API_CALL* arm_get_correlator_length_t)(
	const arm_correlator_t        *correlator,
	arm_correlator_length_t       *length);

typedef arm_error_t
(ARM4_API_CALL* arm_get_correlator_flags_t)(
	const arm_correlator_t        *correlator,
	const arm_int32_t              corr_flag_num,
	arm_boolean_t                 *flag);

/* miscellaneous API function pointer types */
typedef arm_error_t
(ARM4_API_CALL* arm_get_arrival_time_t)(
        arm_arrival_time_t            *opaque_time);

typedef arm_error_t
(ARM4_API_CALL* arm_get_error_message_t)(
        const arm_charset_t            charset,
        const arm_error_t              code,
        arm_message_buffer_t           msg);

typedef arm_error_t
(ARM4_API_CALL* arm_is_charset_supported_t)(
	const arm_charset_t            charset,
	arm_boolean_t                 *supported);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif


#endif

