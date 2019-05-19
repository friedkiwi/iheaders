/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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

#ifndef _QKRBSPNEGO_H
#define _QKRBSPNEGO_H
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qkrbspnego.h                                 */
 /*                                                                */
 /* Descriptive Name: Kerberos SPNEGO interface                    */
 /*                                                                */
 /*                                                                */
 /* Description: The Kerberos SPNEGO include provides              */
 /*              the definitions for working with SPNEGO           */
 /*              tokens.                                           */
 /*                                                                */
 /* Header Files Included:                                         */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS   DATE   PGMR  COMMENTS                  */
 /*    ---- -------- ------ ------ ----  ------------------------- */
 /*    $A0= D9984100 V5R4M0 040215 ROCH: New.                      */
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include "gssapi.h"

#ifdef __cplusplus
extern "C" {
#endif

/*--------------------------------------------------------------------*/
/*    Return codes                                                    */
/*--------------------------------------------------------------------*/
#define GSS_SPNEGO_SUCCESS               0
#define GSS_SPNEGO_UNEXPECTED_ERR        1
#define GSS_SPNEGO_NOMEM                 2
#define GSS_SPNEGO_DEFECTIVE_TOKEN       3
#define GSS_SPNEGO_INCOMPLETE_RESULTS    4
#define GSS_SPNEGO_INVALID_FORMAT        5

/*--------------------------------------------------------------------*/
/*    Format type                                                     */
/*--------------------------------------------------------------------*/
#define GSS_SPNEGO_FORMAT_0              0
#define GSS_SPNEGO_FORMAT_1              1

/*--------------------------------------------------------------------*/
/*    Negotiation result                                              */
/*--------------------------------------------------------------------*/
#define GSS_SPNEGO_ACCEPT_COMPLETED   0x00
#define GSS_SPNEGO_ACCEPT_INCOMPLETE  0x01
#define GSS_SPNEGO_REJECTED           0x02


/*--------------------------------------------------------------------*/
/*    Parsed initiator token results                                  */
/*--------------------------------------------------------------------*/
typedef struct qkrb_spnego_init_item
{
    gss_buffer_desc  init_token_copy;
    gss_OID_set      supported_mechanisms;
    gss_OID_desc     first_mechanism;
    gss_flags_t      context_flags;
    gss_buffer_desc  token_for_first_mechanism;
    gss_buffer_desc  mechanism_list_mic;
    OM_uint32        format_type;
} qkrb_spnego_init_item_t;

/*--------------------------------------------------------------------*/
/*    Parsed target token results                                     */
/*--------------------------------------------------------------------*/
typedef struct qkrb_spnego_target_item
{
    gss_buffer_desc  target_token_copy;
    gss_buffer_desc  negotiation_result;
    gss_OID_desc     supported_mechanism;
    gss_buffer_desc  response_token;
    gss_buffer_desc  mechanism_list_mic;
    OM_uint32        format_type;
} qkrb_spnego_target_item_t;


/*--------------------------------------------------------------------*/
/*    Build initiator token                                           */
/*--------------------------------------------------------------------*/
OM_uint32 qkrb_build_spnego_init_token
(
 gss_OID_set             supported_mechanisms,
 gss_flags_t          *  context_flags,
 gss_buffer_desc      *  token_for_first_mechanism,
 gss_buffer_desc      *  mechanism_list_mic,
 OM_uint32               format_type,
 gss_buffer_desc      *  initiator_token
 );

/*--------------------------------------------------------------------*/
/*    Parse initiator token                                           */
/*--------------------------------------------------------------------*/
OM_uint32 qkrb_parse_spnego_init_token
(
 gss_buffer_desc         *   init_token,
 qkrb_spnego_init_item_t **   parsed_token
 );

/*--------------------------------------------------------------------*/
/*    Free parsed results                                             */
/*--------------------------------------------------------------------*/
OM_uint32 qkrb_free_spnego_init_item
(
 qkrb_spnego_init_item_t **   parsed_token
 );

/*--------------------------------------------------------------------*/
/*    Build target token                                              */
/*--------------------------------------------------------------------*/
OM_uint32 qkrb_build_spnego_target_token
(
 gss_buffer_desc      *  negotiation_result,
 gss_OID_desc         *  supported_mechanism,
 gss_buffer_desc      *  response_token,
 gss_buffer_desc      *  mechanism_list_mic,
 OM_uint32               format_type,
 gss_buffer_desc      *  target_response_token
 );

/*--------------------------------------------------------------------*/
/*    Parse target token                                              */
/*--------------------------------------------------------------------*/
OM_uint32 qkrb_parse_spnego_target_token
(
 gss_buffer_desc            *   target_token,
 qkrb_spnego_target_item_t **   parsed_token
 );

/*--------------------------------------------------------------------*/
/*    Free parsed results                                             */
/*--------------------------------------------------------------------*/
OM_uint32 qkrb_free_spnego_target_item
(
 qkrb_spnego_target_item_t **   parsed_token
 );

#ifdef __cplusplus
}
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* _QKRBSPNEGO_H */
