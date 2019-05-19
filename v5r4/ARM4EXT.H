/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2004                                */
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
/* Header File Name: H/ARM4EXT                                       */
/*                                                                   */
/* Description: This file contains declarations of EWLM extensions   */
/*              to the ARM standard version 4.0, including           */
/*              return codes returned by EWLM implementation of      */
/*              ARM APIs.                                            */
/*                                                                   */
/* Function Prototype List: ewlm_classify_corelator()                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/*      D99691       5D30  030820 AP:       New file                 */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _arm4ext_h
  #define _arm4ext_h

#include <arm4.h>             /* declarations for standard ARM APIs */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#ifdef __cplusplus
  extern "C" {
#endif


#define EWLM_SUBBUFFER_SOCKET_INFO              -30000

#define EWLMARM_ACCEPTQ_CLASSIFY_OUTPUT_SIZE    32


typedef arm_int16_t     ewlm_hopcount_t;
typedef arm_int16_t     ewlm_classification_id_t;
typedef arm_uint8_t     ewlm_netclass_t;
typedef arm_int64_t     ewlm_socket_desc_t;
typedef arm_int32_t     ewlm_boolean_t;

typedef struct ewlm_subbuffer_socket_info
{
  arm_subbuffer_t       header;
  ewlm_boolean_t        nc_valid;
  ewlm_socket_desc_t    socket_desc;
  ewlm_netclass_t       opaque[EWLMARM_ACCEPTQ_CLASSIFY_OUTPUT_SIZE];
}       ewlm_subbuffer_socket_info_t;


/* API signature */

ARM4_API_DYNAMIC(arm_error_t)
ewlm_classify_correlator(
   arm_app_start_handle_t       app_handle,
   arm_id_t                    *tran_id,
   arm_int32_t                  flags,
   arm_buffer4_t               *buffer4,
   arm_correlator_t            *classify_correlator);


/* function pointer for API */

typedef arm_error_t
(ARM4_API_CALL* ewlm_classify_correlator_t)(
   arm_app_start_handle_t       app_handle,
   arm_id_t                    *tran_id,
   arm_int32_t                  flags,
   arm_buffer4_t               *buffer4,
   arm_correlator_t            *classify_correlator);

/* ----------------------------------------------------------------- */
/* ----------------- ARM4 Services Return Codes -------------------- */
/* ----------------------------------------------------------------- */
/* Note that implementations differ and a given implementation       */
/* may never return a particular return code.                        */

/*
 * Successful ARM return codes are positive values.
 */

/* Successful ARM service completion */
#define ARM_RC_SUCCESS                  (0)


/* #define EWLM_IRC_ARM_RANGE_START     (1000) */

/* Successful arm_start_application() with an application specified
 * system address subbuffer.  EWLM does not capture data or manage
 * such applications */

#define ARM_RC_SYSADDR                  (1000)

/* An ewlm_classify_correlator() created parent correlator was
 * ignored because the parent correlator was created with a
 * different EWLM policy than is currently active on the system.
 * Application should call ewlm_classify_correlator() again to
 * get a new pre-classified parent correlator for the current
 * EWLM policy. */
#define ARM_RC_CLASSIFY_CORR_IGNORED    (1001)

/* #define EWLM_IRC_ARM_RANGE_END       (1999) */


/*
 * Unsuccessful ARM return codes are negative values.
 */

/* #define EWLM_RC_ARM_RANGE_START      (-1000) */

/* Application name missing or too long */
#define ARM_RC_APPL_NAME                (-1001)

/* Application group name too long */
#define ARM_RC_GRP_NAME                 (-1002)

/* Application instance name too long */
#define ARM_RC_APPL_INST_NAME           (-1003)

/* Transaction name missing or too long */
#define ARM_RC_TRAN_NAME                (-1004)

/* Property name too long */
#define ARM_RC_PROP_NAME                (-1005)

/* Too many property names */
#define ARM_RC_PROP_NAME_MAX            (-1006)

/* Property value too long */
#define ARM_RC_PROP_VAL                 (-1007)

/* URI value too long */
#define ARM_RC_URI_NAME                 (-1008)

/* User name too long */
#define ARM_RC_USERNAME                 (-1009)

/* Invalid buffer4 count */
#define ARM_RC_BUFFER4_COUNT            (-1010)

/* Invalid handle or id address */
#define ARM_RC_HANDLE_ADDR              (-1011)

/* Invalid correlator address */
#define ARM_RC_CORR_ADDR                (-1012)

/* Undefined flag bits specified */
#define ARM_RC_FLAGS_UNDEFINED          (-1013)

/* Invalid transaction status */
#define ARM_RC_TRAN_STATUS_INVALID      (-1014)

/* Calling process did not register any applications */
#define ARM_RC_NOT_USING_ARM            (-1015)

/* Registered application id does not exist in the calling process */
#define ARM_RC_REGAPP_ID                (-1016)

/* Started application handle does not exist in the calling process */
#define ARM_RC_STARTAPP_HANDLE          (-1017)

/* Registered transaction id does not exist in the calling process */
#define ARM_RC_REGTRAN_ID               (-1018)

/* Transaction handle does not exist */
#define ARM_RC_TRAN_HANDLE              (-1019)

/* Block handle does not exist */
#define ARM_RC_BLOCK_HANDLE             (-1020)

/* Calling process is not authorized to use ARM */
#define ARM_RC_AUTH_ERROR               (-1021)

/* Maximum number of registered applications exceeded */
#define ARM_RC_REGAPP_MAX               (-1022)

/* Maximum number of started applications exceeded */
#define ARM_RC_STARTAPP_MAX             (-1023)

/* Maximum number of registered transactions exceeded */
#define ARM_RC_REGTRAN_MAX              (-1024)

/* Maximum number of started transactions exceeded */
#define ARM_RC_TRAN_MAX                 (-1025)

/* Maximum number of registered applications per process exceeded */
#define ARM_RC_REGAPP_PROC_MAX          (-1026)

/* Maximum number of started applications per process exceeded */
#define ARM_RC_STARTAPP_PROC_MAX        (-1027)

/* Maximum number of registered transactions per process exceeded */
#define ARM_RC_REGTRAN_PROC_MAX         (-1028)

/* Maximum number of started transactions per process exceeded */
#define ARM_RC_TRAN_PROC_MAX            (-1029)

/* Maximum number of blocks per transaction exceeded */
#define ARM_RC_BLOCKED_MAX              (-1030)

/* Maximum ARM services memory limit exceeded */
#define ARM_RC_MAXMEM                   (-1031)

/* Process or system out of memory */
#define ARM_RC_ENOMEM                   (-1032)

/* Correlator size is not valid */
#define ARM_RC_CORR_BAD_SIZE            (-1033)

/* API was called for the started application instance, */
/* which is for out of process transactions */
#define ARM_RC_SYSADDR_BUFFER           (-1034)

/* API is not functionally supported */
#define ARM_RC_ENOSUPP                  (-1035)

/* ARM support not enabled */
#define ARM_RC_NOT_ENABLED              (-1036)

/* ARM adapter processing failed */
#define ARM_RC_ADAP_FAIL                (-1037)

/* Unsupported character set */
#define ARM_RC_UNSUP_CHARSET            (-1038)

/* Unable to initialize character set conversion interface */
#define ARM_RC_CONVERT_INVAL            (-1039)

/* Invalid string to convert */
#define ARM_RC_INVAL_STRING             (-1040)

/* URI mismatch between transaction identity and context */
#define ARM_RC_URI_MISMATCH             (-1041)

/* Missing parameter */
#define ARM_RC_NULL_PARM                (-1042)

/* Invalid correlator flag number */
#define ARM_RC_CORR_FLAGNUM             (-1043)

/* Invalid metric format */
#define ARM_RC_METRIC_FORMAT            (-1044)

/* Invalid metric usage */
#define ARM_RC_METRIC_USAGE             (-1045)

/* Invalid metric name */
#define ARM_RC_METRIC_NAME              (-1046)

/* Invalid metric unit */
#define ARM_RC_METRIC_UNIT              (-1047)

/* Policy not available for classification */
#define ARM_RC_NO_EWLM_AGENT            (-1048)

/* Internal problem (e.g. exception) */
/*  in ARM implementation layer      */
#define ARM_RC_INTERNAL_PROBLEM         (-1049)

#define ARM_RC_INITIALIZATION_ERROR     (-1050)
#define ARM_RC_INVALID_PROPERTY_COUNT   (-1051)
#define ARM_RC_VALUE_NAME_MISMATCH      (-1052)
#define ARM_RC_BAD_ID_PROP_ARRAY_PTR    (-1053)
#define ARM_RC_BAD_CTX_PROP_ARRAY_PTR   (-1054)
#define ARM_RC_BAD_SUBBUFFER_ARRAY_PTR  (-1055)

/* Maximum number of threads bound to a single */
/* transaction instance exceeded               */
#define ARM_RC_BIND_MAX                 (-1056)

/* Improperly formatted/invalid subbuffer */
#define ARM_RC_SUBBUFFER                (-1058)

/* Maximum number of ID subbuffers has been exceeded */
#define ARM_RC_MAX_ID_COUNT             (-1066)

/* Maximum number of application instance/transaction class */
/* combinations has been exceeded                           */
#define ARM_RC_AI_TC_MAX                (-1067)

/* #define EWLM_RC_ARM_RANGE_END        (-1999)  */


#ifdef __cplusplus
             }
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif


#endif
