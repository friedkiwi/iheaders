#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  gssapi.h                                       */
/*                                                                   */
/* Descriptive Name: Generic Security Services API definition        */
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
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the sockets API.              */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          krb5.h                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*     GSS_C_DELEG_FLAG                                              */
/*     GSS_C_MUTUAL_FLAG                                             */
/*     GSS_C_REPLAY_FLAG                                             */
/*     GSS_C_SEQUENCE_FLAG                                           */
/*     GSS_C_CONF_FLAG                                               */
/*     GSS_C_INTEG_FLAG                                              */
/*     GSS_C_ANON_FLAG                                               */
/*     GSS_C_PROT_READY_FLAG                                         */
/*     GSS_C_TRANS_FLAG                                              */
/*     GSS_C_BOTH                                                    */
/*     GSS_C_INITIATE                                                */
/*     GSS_C_ACCEPT                                                  */
/*     GSS_C_GSS_CODE                                                */
/*     GSS_C_MECH_CODE                                               */
/*     GSS_C_AF_UNSPEC                                               */
/*     GSS_C_AF_LOCAL                                                */
/*     GSS_C_AF_INET                                                 */
/*     GSS_C_AF_IMPLINK                                              */
/*     GSS_C_AF_PUP                                                  */
/*     GSS_C_AF_CHAOS                                                */
/*     GSS_C_AF_NS                                                   */
/*     GSS_C_AF_NBS                                                  */
/*     GSS_C_AF_ECMA                                                 */
/*     GSS_C_AF_DATAKIT                                              */
/*     GSS_C_AF_CCITT                                                */
/*     GSS_C_AF_SNA                                                  */
/*     GSS_C_AF_DECnet                                               */
/*     GSS_C_AF_DLI                                                  */
/*     GSS_C_AF_LAT                                                  */
/*     GSS_C_AF_HYLINK                                               */
/*     GSS_C_AF_APPLETALK                                            */
/*     GSS_C_AF_BSC                                                  */
/*     GSS_C_AF_DSS                                                  */
/*     GSS_C_AF_OSI                                                  */
/*     GSS_C_AF_X25                                                  */
/*     GSS_C_AF_NULLADDR                                             */
/*     GSS_C_NO_BUFFER                                               */
/*     GSS_C_NO_OID                                                  */
/*     GSS_C_NO_OID_SET                                              */
/*     GSS_C_NO_CONTEXT                                              */
/*     GSS_C_NO_CREDENTIALS                                          */
/*     GSS_C_NO_CHANNEL_BINDINGS                                     */
/*     GSS_C_NO_NAME                                                 */
/*     GSS_C_EMPTY_BUFFER                                            */
/*     GSS_C_NULL_OID                                                */
/*     GSS_C_NULL_OID_SET                                            */
/*     GSS_C_QOP_DEFAULT                                             */
/*     GSS_C_INDEFINITE                                              */
/*     GSS_S_COMPLETE                                                */
/*     GSS_C_CALLING_ERROR_OFFSET                                    */
/*     GSS_C_ROUTINE_ERROR_OFFSET                                    */
/*     GSS_C_SUPPLEMENTARY_OFFSET                                    */
/*     GSS_C_CALLING_ERROR_MASK                                      */
/*     GSS_C_ROUTINE_ERROR_MASK                                      */
/*     GSS_C_SUPPLEMENTARY_MASK                                      */
/*     GSS_CALLING_ERROR                                             */
/*     GSS_ROUTINE_ERROR                                             */
/*     GSS_SUPPLEMENTARY_INFO                                        */
/*     GSS_ERROR                                                     */
/*     GSS_CALLING_ERROR_FIELD                                       */
/*     GSS_ROUTINE_ERROR_FIELD                                       */
/*     GSS_SUPPLEMENTARY_INFO_FIELD                                  */
/*     GSS_S_CALL_INACCESSIBLE_READ                                  */
/*     GSS_S_CALL_INACCESSIBLE_WRITE                                 */
/*     GSS_S_CALL_BAD_STRUCTURE                                      */
/*     GSS_S_BAD_MECH                                                */
/*     GSS_S_BAD_NAME                                                */
/*     GSS_S_BAD_NAMETYPE                                            */
/*     GSS_S_BAD_BINDINGS                                            */
/*     GSS_S_BAD_STATUS                                              */
/*     GSS_S_BAD_SIG                                                 */
/*     GSS_S_NO_CRED                                                 */
/*     GSS_S_NO_CONTEXT                                              */
/*     GSS_S_DEFECTIVE_TOKEN                                         */
/*     GSS_S_DEFECTIVE_CREDENTIAL                                    */
/*     GSS_S_CONTEXT_EXPIRED                                         */
/*     GSS_S_FAILURE                                                 */
/*     GSS_S_BAD_QOP                                                 */
/*     GSS_S_UNAUTHORIZED                                            */
/*     GSS_S_UNAVAILABLE                                             */
/*     GSS_S_DUPLICATE_ELEMENT                                       */
/*     GSS_S_NAME_NO_MN                                              */
/*     GSS_S_CRED_UNAVAIL                                            */
/*     GSS_S_BAD_MIC                                                 */
/*     GSS_S_CONTINUE_NEEDED                                         */
/*     GSS_S_DUPLICATE_TOKEN                                         */
/*     GSS_S_OLD_TOKEN                                               */
/*     GSS_S_UNSEQ_TOKEN                                             */
/*     GSS_S_GAP_TOKEN                                               */
/*     gss_sign                                                      */
/*     gss_verify                                                    */
/*     gss_seal                                                      */
/*     gss_unseal                                                    */
/*     GSS_C_NT_USER_NAME                                            */
/*     GSS_C_NT_HOSTBASED_SERVICE                                    */
/*     GSS_C_NT_HOSTBASED_SERVICE_X                                  */
/*     GSS_C_NT_ANONYMOUS                                            */
/*     GSS_C_NT_EXPORT_NAME                                          */
/*     GSS_KRB5_INTEG_C_QOP_DES_MD5                                  */
/*     GSS_KRB5_INTEG_C_QOP_MD5                                      */
/*     GSS_KRB5_INTEG_C_QOP_DES_MAC                                  */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*     OM_string                                                     */
/*     OM_object_identifier                                          */
/*     gss_OID_desc                                                  */
/*     gss_OID_set_desc                                              */
/*     gss_buffer_desc                                               */
/*     gss_channel_bindings_desc                                     */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*     gss_acquire_cred                                              */
/*     gss_release_cred                                              */
/*     gss_init_sec_context                                          */
/*     gss_accept_sec_context                                        */
/*     gss_process_context_token                                     */
/*     gss_delete_sec_context                                        */
/*     gss_context_time                                              */
/*     gss_display_status                                            */
/*     gss_indicate_mechs                                            */
/*     gss_compare_name                                              */
/*     gss_display_name                                              */
/*     gss_import_name                                               */
/*     gss_release_name                                              */
/*     gss_release_buffer                                            */
/*     gss_release_oid_set                                           */
/*     gss_inquire_cred                                              */
/*     gss_get_mic                                                   */
/*     gss_verify_mic                                                */
/*     gss_wrap                                                      */
/*     gss_unwrap                                                    */
/*     gss_inquire_context                                           */
/*     gss_wrap_size_limit                                           */
/*     gss_add_cred                                                  */
/*     gss_inquire_cred_by_mech                                      */
/*     gss_release_oid                                               */
/*     gss_create_empty_oid_set                                      */
/*     gss_add_oid_set_member                                        */
/*     gss_test_oid_set_member                                       */
/*     gss_str_to_oid                                                */
/*     gss_oid_to_str                                                */
/*     gss_inquire_names_for_mech                                    */
/*     gss_inquire_mechs_for_name                                    */
/*     gss_duplicate_name                                            */
/*     gss_canonicalize_name                                         */
/*     gss_krb5_get_ccache                                           */
/*     gss_krb5_get_tkt_flags                                        */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D9802600     5D10  991020  ROCH     New include.           */
/*   $A1= D9870902     5D20  991020  ROCH     Add new API prototypes.*/
/*   $A2= P9A03795     5D20  020423  ROCH     Removed carrot symbol  */
/*                                            for C++ compiler bug.  */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _GSSAPI_H_INCLUDED_
#define _GSSAPI_H_INCLUDED_

/*
 *  Include the Kerberos definitions
 */
#include <krb5.h>

#ifdef __cplusplus
extern "C" {
#endif


/*
 *  Basic data definitions
 */
typedef int                     OM_sint;
typedef short                   OM_sint16;
typedef long int                OM_sint32;
typedef unsigned                OM_uint;
typedef unsigned short          OM_uint16;
typedef long unsigned           OM_uint32;
typedef OM_uint32               OM_boolean;
typedef OM_sint32               OM_enumeration;
typedef OM_uint                 OM_exclusions;
typedef OM_sint32               OM_integer;
typedef OM_uint32               OM_string_length;

typedef struct {
    OM_string_length            length;
    void *                      elements;
} OM_string;

typedef OM_string               OM_object_identifier;


/*
 *  GSSAPI data definitions
 */
typedef OM_uint32               gss_ctx_id_t;
typedef OM_uint32               gss_cred_id_t;
typedef void *                  gss_name_t;
typedef OM_uint32               gss_qop_t;
typedef int                     gss_cred_usage_t;

#ifdef GSSAPI_V1_COMPAT
typedef int                     gss_flags_t;
typedef int                     gss_msg_ctx_t;
#else
typedef OM_uint32               gss_flags_t;
typedef OM_uint32               gss_msg_ctx_t;
#endif

typedef OM_object_identifier    gss_OID_desc, *gss_OID;

typedef struct gss_OID_set_desc_struct  {
    int                         count;
    gss_OID                     elements;
} gss_OID_set_desc, *gss_OID_set;

typedef struct gss_buffer_desc_struct {
    size_t                      length;
    void *                      value;
} gss_buffer_desc, *gss_buffer_t;

typedef struct gss_channel_bindings_struct {
    OM_uint32                   initiator_addrtype;
    gss_buffer_desc             initiator_address;
    OM_uint32                   acceptor_addrtype;
    gss_buffer_desc             acceptor_address;
    gss_buffer_desc             application_data;
} gss_channel_bindings_desc, *gss_channel_bindings_t;


/*
 * Context-level services
 */
#define GSS_C_DELEG_FLAG      1
#define GSS_C_MUTUAL_FLAG     2
#define GSS_C_REPLAY_FLAG     4
#define GSS_C_SEQUENCE_FLAG   8
#define GSS_C_CONF_FLAG       16
#define GSS_C_INTEG_FLAG      32
#define GSS_C_ANON_FLAG       64
#define GSS_C_PROT_READY_FLAG 128
#define GSS_C_TRANS_FLAG      256


/*
 * Credential usage options
 */
#define GSS_C_BOTH      0
#define GSS_C_INITIATE  1
#define GSS_C_ACCEPT    2


/*
 * Status code types for gss_display_status
 */
#define GSS_C_GSS_CODE  1
#define GSS_C_MECH_CODE 2


/*
 * Channel-bindings address families
 */
#define GSS_C_AF_UNSPEC      0
#define GSS_C_AF_LOCAL       1
#define GSS_C_AF_INET        2
#define GSS_C_AF_IMPLINK     3
#define GSS_C_AF_PUP         4
#define GSS_C_AF_CHAOS       5
#define GSS_C_AF_NS          6
#define GSS_C_AF_NBS         7
#define GSS_C_AF_ECMA        8
#define GSS_C_AF_DATAKIT     9
#define GSS_C_AF_CCITT      10
#define GSS_C_AF_SNA        11
#define GSS_C_AF_DECnet     12
#define GSS_C_AF_DLI        13
#define GSS_C_AF_LAT        14
#define GSS_C_AF_HYLINK     15
#define GSS_C_AF_APPLETALK  16
#define GSS_C_AF_BSC        17
#define GSS_C_AF_DSS        18
#define GSS_C_AF_OSI        19
#define GSS_C_AF_X25        21
#define GSS_C_AF_INET6      24

#define GSS_C_AF_NULLADDR   255


/*
 *  NULL values
 */
#define GSS_C_NO_BUFFER           ((gss_buffer_t) 0)
#define GSS_C_NO_OID              ((gss_OID) 0)
#define GSS_C_NO_OID_SET          ((gss_OID_set) 0)
#define GSS_C_NO_CONTEXT          ((gss_ctx_id_t) 0)
#define GSS_C_NO_CREDENTIAL       ((gss_cred_id_t) 0)
#define GSS_C_NO_CHANNEL_BINDINGS ((gss_channel_bindings_t) 0)
#define GSS_C_NO_NAME             ((gss_name_t) 0)
#define GSS_C_EMPTY_BUFFER        {0, NULL}


/*
 *  Definitions retained for compatibility with GSS-API Version 1
 */
#define GSS_C_NULL_OID            ((gss_OID) 0)
#define GSS_C_NULL_OID_SET        ((gss_OID_set) 0)


/*
 * Define the default Quality of Protection for per-message
 * services.  Note that an implementation that offers multiple
 * levels of QOP may either reserve a value (for example zero,
 * as assumed here) to mean "default protection", or alternatively
 * may simply equate GSS_C_QOP_DEFAULT to a specific explicit QOP
 * value.
 */
#define GSS_C_QOP_DEFAULT 0


/*
 * Expiration time of 2**32-1 seconds means infinite lifetime for a
 * credential or security context
 */
#define GSS_C_INDEFINITE ((OM_uint32) 0xfffffffful)


/* Major status codes */
#define GSS_S_COMPLETE 0


/*
 * Some "helper" definitions to make the status code macros obvious.
 */
#define GSS_C_CALLING_ERROR_OFFSET 24
#define GSS_C_ROUTINE_ERROR_OFFSET 16
#define GSS_C_SUPPLEMENTARY_OFFSET 0
#define GSS_C_CALLING_ERROR_MASK   ((OM_uint32) 0377ul)
#define GSS_C_ROUTINE_ERROR_MASK   ((OM_uint32) 0377ul)
#define GSS_C_SUPPLEMENTARY_MASK   ((OM_uint32) 0177777ul)


/*
 * The macros that test status codes for error conditions
 */
#define GSS_CALLING_ERROR(x) \
    ((x) & (GSS_C_CALLING_ERROR_MASK << GSS_C_CALLING_ERROR_OFFSET))
#define GSS_ROUTINE_ERROR(x) \
    ((x) & (GSS_C_ROUTINE_ERROR_MASK << GSS_C_ROUTINE_ERROR_OFFSET))
#define GSS_SUPPLEMENTARY_INFO(x) \
    ((x) & (GSS_C_SUPPLEMENTARY_MASK << GSS_C_SUPPLEMENTARY_OFFSET))
#define GSS_ERROR(x) \
    ((GSS_CALLING_ERROR(x) != 0) || (GSS_ROUTINE_ERROR(x) != 0))

#define GSS_CALLING_ERROR_FIELD(x) \
    (((x) >> GSS_C_CALLING_ERROR_OFFSET) & GSS_C_CALLING_ERROR_MASK)
#define GSS_ROUTINE_ERROR_FIELD(x) \
    (((x) >> GSS_C_ROUTINE_ERROR_OFFSET) & GSS_C_ROUTINE_ERROR_MASK)
#define GSS_SUPPLEMENTARY_INFO_FIELD(x) \
    (((x) >> GSS_C_SUPPLEMENTARY_OFFSET) & GSS_C_SUPPLEMENTARY_MASK)


/*
 * Calling errors:
 */
#define GSS_S_CALL_INACCESSIBLE_READ \
                   (1 << GSS_C_CALLING_ERROR_OFFSET)
#define GSS_S_CALL_INACCESSIBLE_WRITE \
                   (2 << GSS_C_CALLING_ERROR_OFFSET)
#define GSS_S_CALL_BAD_STRUCTURE \
                   (3 << GSS_C_CALLING_ERROR_OFFSET)

/*
 * Routine errors:
 */
#define GSS_S_BAD_MECH             (1 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_BAD_NAME             (2 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_BAD_NAMETYPE         (3 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_BAD_BINDINGS         (4 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_BAD_STATUS           (5 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_BAD_SIG              (6 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_NO_CRED              (7 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_NO_CONTEXT           (8 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_DEFECTIVE_TOKEN      (9 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_DEFECTIVE_CREDENTIAL (10 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_CREDENTIALS_EXPIRED  (11 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_CONTEXT_EXPIRED      (12 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_FAILURE              (13 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_BAD_QOP              (14 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_UNAUTHORIZED         (15 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_UNAVAILABLE          (16 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_DUPLICATE_ELEMENT    (17 << GSS_C_ROUTINE_ERROR_OFFSET)
#define GSS_S_NAME_NOT_MN          (18 << GSS_C_ROUTINE_ERROR_OFFSET)

#define GSS_S_CRED_UNAVAIL         GSS_S_FAILURE
#define GSS_S_BAD_MIC              GSS_S_BAD_SIG


/*
 * Supplementary info bits:
 */
#define GSS_S_CONTINUE_NEEDED (1 << (GSS_C_SUPPLEMENTARY_OFFSET + 0))
#define GSS_S_DUPLICATE_TOKEN (1 << (GSS_C_SUPPLEMENTARY_OFFSET + 1))
#define GSS_S_OLD_TOKEN       (1 << (GSS_C_SUPPLEMENTARY_OFFSET + 2))
#define GSS_S_UNSEQ_TOKEN     (1 << (GSS_C_SUPPLEMENTARY_OFFSET + 3))
#define GSS_S_GAP_TOKEN       (1 << (GSS_C_SUPPLEMENTARY_OFFSET + 4))


/*
 * Function prototypes for the GSSAPI routines.
 */
SKRB_API OM_uint32 SKRB_CALL gss_accept_sec_context (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t *              ctx_handle,
    gss_cred_id_t               verifier_cred_handle,
    gss_buffer_t                input_token,
    gss_channel_bindings_t      channel_bindings,
    gss_name_t *                source_name,
    gss_OID *                   mech_type,
    gss_buffer_t                output_token,
    gss_flags_t *               return_flags,
    OM_uint32 *                 time_received,
    gss_cred_id_t *             deleg_cred_handle);

SKRB_API OM_uint32 SKRB_CALL gss_acquire_cred (
    OM_uint32 *                 minor_status,
    gss_name_t                  desired_name,
    OM_uint32                   time_requested,
    gss_OID_set                 desired_mechs,
    gss_cred_usage_t            cred_usage,
    gss_cred_id_t *             output_cred_handle,
    gss_OID_set *               actual_mechs,
    OM_uint32 *                 time_received);

SKRB_API OM_uint32 SKRB_CALL gss_add_cred (
    OM_uint32 *                 minor_status,
    gss_cred_id_t               input_cred_handle,
    gss_name_t                  desired_name,
    gss_OID                     desired_mech,
    gss_cred_usage_t            cred_usage,
    OM_uint32                   initiator_time_requested,
    OM_uint32                   acceptor_time_requested,
    gss_cred_id_t *             output_cred_handle,
    gss_OID_set *               actual_mechs,
    OM_uint32 *                 initiator_time_received,
    OM_uint32 *                 acceptor_time_received);

SKRB_API OM_uint32 SKRB_CALL gss_add_oid_set_member (
    OM_uint32 *                 minor_status,
    gss_OID                     member_oid,
    gss_OID_set *               oid_set);

SKRB_API OM_uint32 SKRB_CALL gss_canonicalize_name (
    OM_uint32 *                 minor_status,
    gss_name_t                  input_name,
    gss_OID                     mech,
    gss_name_t *                output_name);

SKRB_API OM_uint32 SKRB_CALL gss_compare_name (
    OM_uint32 *                 minor_status,
    gss_name_t                  name_1,
    gss_name_t                  name_2,
    int *                       name_equal);

SKRB_API OM_uint32 SKRB_CALL gss_context_time (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    OM_uint32 *                 time_received);

SKRB_API OM_uint32 SKRB_CALL gss_create_empty_oid_set (
    OM_uint32 *                 minor_status,
    gss_OID_set *               oid_set);

SKRB_API OM_uint32 SKRB_CALL gss_delete_sec_context (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t *              ctx_handle,
    gss_buffer_t                output_token);

SKRB_API OM_uint32 SKRB_CALL gss_display_name (
    OM_uint32 *                 minor_status,
    gss_name_t                  input_name,
    gss_buffer_t                output_name,
    gss_OID *                   output_name_type);

SKRB_API OM_uint32 SKRB_CALL gss_display_status (
    OM_uint32 *                 minor_status,
    OM_uint32                   status_value,
    int                         status_type,
    gss_OID                     mech_type,
    gss_msg_ctx_t *             message_context,
    gss_buffer_t                status_string);

SKRB_API OM_uint32 SKRB_CALL gss_duplicate_name (
    OM_uint32 *                 minor_status,
    gss_name_t                  input_name,
    gss_name_t *                output_name);

SKRB_API OM_uint32 SKRB_CALL gss_export_cred (
    OM_uint32 *                 minor_status,
    gss_cred_id_t               cred_handle,
    gss_buffer_t                cred_token);

SKRB_API OM_uint32 SKRB_CALL gss_export_name (
    OM_uint32 *                 minor_status,
    gss_name_t                  input_name,
    gss_buffer_t                exported_name);

SKRB_API OM_uint32 SKRB_CALL gss_export_sec_context (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t *              ctx_handle,
    gss_buffer_t                context_token);

SKRB_API OM_uint32 SKRB_CALL gss_get_mic (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    gss_qop_t                   qop_requested,
    gss_buffer_t                message_buffer,
    gss_buffer_t                message_token);

SKRB_API OM_uint32 SKRB_CALL gss_import_cred (
    OM_uint32 *                 minor_status,
    gss_buffer_t                cred_token,
    gss_cred_id_t *             cred_handle);

SKRB_API OM_uint32 SKRB_CALL gss_import_name (
    OM_uint32 *                 minor_status,
    gss_buffer_t                input_name,
    gss_OID                     input_name_type,
    gss_name_t *                output_name);

SKRB_API OM_uint32 SKRB_CALL gss_import_sec_context (
    OM_uint32 *                 minor_status,
    gss_buffer_t                context_token,
    gss_ctx_id_t *              ctx_handle);

SKRB_API OM_uint32 SKRB_CALL gss_indicate_mechs (
    OM_uint32 *                 minor_status,
    gss_OID_set *               mech_set);

SKRB_API OM_uint32 SKRB_CALL gss_init_sec_context (
    OM_uint32 *                 minor_status,
    gss_cred_id_t               cred_handle,
    gss_ctx_id_t *              ctx_handle,
    gss_name_t                  target_name,
    gss_OID                     mech_type,
    gss_flags_t                 request_flags,
    OM_uint32                   time_requested,
    gss_channel_bindings_t      channel_bindings,
    gss_buffer_t                input_token,
    gss_OID *                   actual_mech,
    gss_buffer_t                output_token,
    gss_flags_t *               return_flags,
    OM_uint32 *                 time_received);

SKRB_API OM_uint32 SKRB_CALL gss_inquire_context (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    gss_name_t *                source_name,
    gss_name_t *                target_name,
    OM_uint32 *                 lifetime,
    gss_OID *                   mech_type,
    gss_flags_t *               context_flags,
    int *                       locally_initiated,
    int *                       open);

SKRB_API OM_uint32 SKRB_CALL gss_inquire_cred (
    OM_uint32 *                 minor_status,
    gss_cred_id_t               cred_handle,
    gss_name_t *                name,
    OM_uint32 *                 lifetime,
    gss_cred_usage_t *          cred_usage,
    gss_OID_set *               mech_set);

SKRB_API OM_uint32 SKRB_CALL gss_inquire_cred_by_mech (
    OM_uint32 *                 minor_status,
    gss_cred_id_t               cred_handle,
    gss_OID                     mech_type,
    gss_name_t *                name,
    OM_uint32 *                 initiator_lifetime,
    OM_uint32 *                 acceptor_lifetime,
    gss_cred_usage_t *          cred_usage);

SKRB_API OM_uint32 SKRB_CALL gss_inquire_mechs_for_name (
    OM_uint32 *                 minor_status,
    gss_name_t                  name,
    gss_OID_set *               mech_types);

SKRB_API OM_uint32 SKRB_CALL gss_inquire_names_for_mech (
    OM_uint32 *                 minor_status,
    gss_OID                     mech,
    gss_OID_set *               name_types);

SKRB_API OM_uint32 SKRB_CALL gss_oid_to_str (
    OM_uint32 *                 minor_status,
    gss_OID                     oid,
    gss_buffer_t                oid_string);

SKRB_API OM_uint32 SKRB_CALL gss_process_context_token (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    gss_buffer_t                input_token);

SKRB_API OM_uint32 SKRB_CALL gss_release_buffer (
    OM_uint32 *                 minor_status,
    gss_buffer_t                buffer);

SKRB_API OM_uint32 SKRB_CALL gss_release_cred (
    OM_uint32 *                 minor_status,
    gss_cred_id_t *             cred_handle);

SKRB_API OM_uint32 SKRB_CALL gss_release_name (
    OM_uint32 *                 minor_status,
    gss_name_t *                input_name);

SKRB_API OM_uint32 SKRB_CALL gss_release_oid (
    OM_uint32 *                 minor_status,
    gss_OID *                   oid);

SKRB_API OM_uint32 SKRB_CALL gss_release_oid_set (
    OM_uint32 *                 minor_status,
    gss_OID_set *               oid_set);

SKRB_API OM_uint32 SKRB_CALL gss_str_to_oid (
    OM_uint32 *                 minor_status,
    gss_buffer_t                oid_string,
    gss_OID *                   oid);

SKRB_API OM_uint32 SKRB_CALL gss_test_oid_set_member (
    OM_uint32 *                 minor_status,
    gss_OID                     member,
    gss_OID_set                 oid_set,
    int *                       present);

SKRB_API OM_uint32 SKRB_CALL gss_unwrap (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    gss_buffer_t                input_message,
    gss_buffer_t                output_message,
    int *                       conf_state,
    gss_qop_t *                 qop_state);

SKRB_API OM_uint32 SKRB_CALL gss_verify_mic (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    gss_buffer_t                message_buffer,
    gss_buffer_t                message_token,
    gss_qop_t *                 qop_state);

SKRB_API OM_uint32 SKRB_CALL gss_wrap (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    int                         conf_requested,
    gss_qop_t                   qop_requested,
    gss_buffer_t                input_message,
    int *                       conf_state,
    gss_buffer_t                output_message);

SKRB_API OM_uint32 SKRB_CALL gss_wrap_size_limit (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_handle,
    int                         conf_requested,
    gss_qop_t                   qop_requested,
    OM_uint32                   requested_output_size,
    OM_uint32 *                 maximum_output_size);


/*
 *  Deprecated functions from GSS-API Version 1
 *
 *  Note that GSS-API Version 1 defined the quality-of-protection
 *  parameter as an 'int' and not as 'gss_qop_t'.
 */
#define gss_sign(minor, ctx, qop, msg, token) \
    gss_get_mic(minor, ctx, (gss_qop_t)(qop), msg, token)

#define gss_verify(minor, ctx, msg, token, state) \
    gss_verify_mic(minor, ctx, msg, token, (gss_qop_t *)(qop))

#define gss_seal(minor, ctx, conf, qop, inmsg, state, outmsg) \
    gss_wrap(minor, ctx, conf, (gss_qop_t)(qop), inmsg, state, outmsg)

#define gss_unseal(minor, ctx, inmsg, outmsg, state, qop) \
    gss_unwrap(minor, ctx, inmsg, outmsg, state, (gss_qop_t *)qop)


/*
 *  Object identifiers
 *
 *  gss_mech_krb5 =           {1 2 840 113554 1 2 2}
 *  gss_nt_krb5_name =        {1 2 840 113554 1 2 2 1}
 *  gss_nt_krb5_principal =   {1 2 840 113554 1 2 2 2}
 *  gss_nt_user_name =        {1 2 840 113554 1 2 1 1}
 *  gss_nt_machine_uid_name = {1 2 840 113554 1 2 1 2}
 *  gss_nt_string_uid_name =  {1 2 840 113554 1 2 1 3}
 *  gss_nt_service_name =     {1 2 840 113554 1 2 1 4}
 *  gss_mech_krb5_old =       {1 3 5 1 5 2}
 *  gss_nt_service =          {1 3 6 1 5 6 2}
 *  gss_nt_anonymous =        {1 3 6 1 5 6 3}
 *  gss_nt_export_name =      {1 3 6 1 5 6 4}
 */
extern SKRB_API gss_OID         gss_mech_krb5_old;
extern SKRB_API gss_OID         gss_mech_krb5;
extern SKRB_API gss_OID         gss_nt_krb5_name;
extern SKRB_API gss_OID         gss_nt_krb5_principal;
extern SKRB_API gss_OID         gss_nt_user_name;
extern SKRB_API gss_OID         gss_nt_machine_uid_name;
extern SKRB_API gss_OID         gss_nt_string_uid_name;
extern SKRB_API gss_OID         gss_nt_service_name;
extern SKRB_API gss_OID         gss_nt_service;
extern SKRB_API gss_OID         gss_nt_anonymous;
extern SKRB_API gss_OID         gss_nt_export_name;

        /*  Architected GSS-API OID names  */
#define GSS_C_NT_USER_NAME              gss_nt_user_name
#define GSS_C_NT_MACHINE_UID_NAME       gss_nt_machine_uid_name
#define GSS_C_NT_STRING_UID_NAME        gss_nt_string_uid_name
#define GSS_C_NT_HOSTBASED_SERVICE      gss_nt_service_name
#define GSS_C_NT_HOSTBASED_SERVICE_X    gss_nt_service
#define GSS_C_NT_ANONYMOUS              gss_nt_anonymous
#define GSS_C_NT_EXPORT_NAME            gss_nt_export_name


/*
 * The QOP levels offered by the Kerberos GSSAPI implementation apply
 * to the gss_get_mic() and gss_wrap() functions.  The QOP is formed
 * by or'ing together one of the GSS_KRB5_INTEG values and one of the
 * GSS_KRB5_CONF values.
 *
 * The available integrity algorithms (in order of decreasing
 * speed) are:
 *
 *   MD5:       Truncated MD5 (sometimes referred to as MD2.5)
 *   DES-MD5:   DES-MAC of an MD5 hash (DES default)
 *   DES-MAC:   Regular DES-MAC
 *   HMAC-SHA1: DES3-HMAC of a SHA1 hash (DES3 default)
 *
 * The available sealing algorithms are:
 *
 *   DES:       56-bit DES
 *   DES-KD:    168-bit DES3 with key derivation
 */
#define GSS_KRB5_INTEG_C_QOP_DEFAULT    0x0000
#define GSS_KRB5_INTEG_C_QOP_MD5        0x0001
#define GSS_KRB5_INTEG_C_QOP_DES_MD5    0x0002
#define GSS_KRB5_INTEG_C_QOP_DES_MAC    0x0003
#define GSS_KRB5_INTEG_C_QOP_HMAC_SHA1  0x0004

#define GSS_KRB5_CONF_C_QOP_DEFAULT     0x0000
#define GSS_KRB5_CONF_C_QOP_DES         0x0100
#define GSS_KRB5_CONF_C_QOP_DES3_KD     0x0200


/*
 *  Kerberos-specific function prototypes
 */
SKRB_API OM_uint32 SKRB_CALL gss_krb5_acquire_cred_ccache (
    OM_uint32 *                 minor_status,
    krb5_ccache                 ccache,
    OM_uint32                   time_req,
    gss_cred_usage_t            cred_usage,
    gss_cred_id_t *             output_cred_handle,
    OM_uint32 *                 time_rec);

SKRB_API OM_uint32 SKRB_CALL gss_krb5_ccache_name (
    OM_uint32 *                 minor_status,
    char *                      new_name,
    char **                     old_name);

SKRB_API OM_uint32 SKRB_CALL gss_krb5_copy_ccache (
    OM_uint32 *                 minor_status,
    gss_cred_id_t               cred_handle,
    krb5_ccache                 ccache);

SKRB_API OM_uint32 SKRB_CALL gss_krb5_get_ccache (
    OM_uint32 *                 minor_status,
    gss_cred_id_t               cred_id,
    krb5_ccache *               ccache);

SKRB_API OM_uint32 SKRB_CALL gss_krb5_get_tkt_flags (
    OM_uint32 *                 minor_status,
    gss_ctx_id_t                ctx_id,
    krb5_flags *                tkt_flags);


#ifdef __cplusplus
}
#endif

#endif
