/*********************************************************************/
/*                                                                   */
/*  EKIERRS.H :     PrintManager error codes                         */
/*                                                                   */
/*                                                                   */
/* 5763-SS1, 5722-SS1                                                */
/* (C) Copyright IBM Corp. 1993, 2001                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* STATUS = RELEASE 1         LEVEL 1.0                              */
/*                                                                   */
/*                                                                   */
/* NOTES:   None                                                     */
/*                                                                   */
/*                                                                   */
/* CHANGE ACTIVITY:                                                  */
/*                                                                   */
/* FLAG REASON       LEVEL  DATE   PGMR       CHANGE DESCRIPTION     */
/* ---- ------------ ------ ------ ---------- -----------------------*/
/* $A1= P9934931     v5r1m0 001006 RKF      : Teraspace stage 2      */
/*                                                                   */
/*********************************************************************/

#if !defined (__EKIERRS)

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(P128)                                    /*@A1A*/
#endif                                                         /*@A1A*/


/*
 *
 * Base error definitions
 *
 */

#if !defined (PMERR_OK)
   #define PMERR_OK                      0x0000
   #define PMERR_BASE_ERROR              0x2006
#endif




/*
 *
 * PrintManager Error Codes
 *
 */

#define  PRTMGR_INV_HAB                  0x4200




/*
 *
 * Spooler Error Codes
 *
 */

#define PMERR_PRM_INV_HPRM                  0x4005
#define PMERR_PRM_NO_MEMORY                 0x4007
#define PMERR_PRM_PRINT_ABORT               0x4008
#define PMERR_PRM_NO_DATA                   0x400D
#define PMERR_PRM_INV_LENGTH_OR_COUNT       0x401A
#define PMERR_PRM_CANNOT_OPEN_FILE          0x401C
#define PMERR_PRM_STARTDOC_NOT_ISSUED       0x2104
#define PMERR_PRM_ENDDOC_NOT_ISSUED         0x210B

#define PMERR_PRM_CLOSE_ERROR               0x40A0
#define PMERR_PRM_OPEN_ERROR                0x40A1
#define PMERR_PRM_INV_OPTVALUE              0x40A2
#define PMERR_PRM_READ_ERROR                0x40A3
#define PMERR_PRM_INV_RESOURCE              0x40A4
#define PMERR_PRM_UNSUPPORTED_SYSTEM        0x40A5
#define PMERR_PRM_WRITE_ERROR               0x40A6
#define PMERR_PRM_OPT_NOT_DEFINED           0x40A7
#define PMERR_PRM_OPT_NOT_SET               0x40A8
#define PMERR_PRM_NO_PRINT_OPTS             0x40A9
#define PMERR_PRM_BUFFER_TOO_SMALL          0x40AA
#define PMERR_PRM_INV_BUFFER                0x40AB
#define PMERR_PRM_INV_TYPE                  0x40AC
#define PMERR_PRM_INV_LEVEL                 0x40AD
#define PMERR_PRM_RESOURCE_OPEN_ERROR       0x40AE
#define PMERR_PRM_RESOURCE_READ_ERROR       0x40AF
#define PMERR_PRM_TRANSFORM_ERROR           0x40B0
#define PMERR_PRM_OPTVALUE_TRUNCATED        0x40B1
#define PMERR_PRM_DATATYPE_FOR_RESOURCE     0x40B2
#define PMERR_PRM_INV_LENGTH_PARAMETER      0x40B3


/* Extended Error Message Identifiers                                */

#define SYSTEM_ERROR                        0x4D00L
#define NO_DEV00E                           0x4D01L
#define DEF_VADDR_ERROR                     0x4D02L
#define RESTORE_00E_ERROR                   0x4D03L
#define XAB_SIZE_ERROR                      0x4D04L
#define INVALID_OPTION                      0x4D05L
#define VALUE_SYNTAX_ERROR                  0x4D06L
#define INVALID_PRINT_OPTION                0x4D07L
#define INVALID_VALUE_REMOVED               0x4D08L
#define PRINT_OPTION_REMOVED                0x4D09L
#define INPUT_FILE_ERROR                    0x4D0AL
#define INVALID_VALUE                       0x4D0BL
#define DSALLOC_ERROR                       0x4D0CL
#define STORE_00E_ERROR                     0x4D0DL
#define GEN_VADDR_ERROR                     0x4D0EL
#define INVALID_FORMDEF_OPTION              0x4D0FL
#define MULTIPLE_SESSION_ERROR              0x4D10L
#define OUTADD_ERROR                        0x4D11L
#define OUTDEL_ERROR                        0x4D12L
#define DSUNALLOC_ERROR                     0x4D13L
#define OPEN_FILE_ERROR                     0x4D14L
#define WRITE_FILE_ERROR                    0x4D15L
#define GDDM_TRANSFORM_ERROR                0x4D16L
#define CLOSE_FILE_ERROR                    0x4D17L
#define DELETE_FILE_ERROR                   0x4D18L
#define BINARY_VALUE                        0x4D19L
#define RESOURCE_NAME                       0x4D1AL
#define DATATYPE_RESOURCE_MISMATCH          0x4D1BL
#define RECORD_ERROR                        0x4D1CL
#define INCOMPLETE_SF                       0x4D1DL
#define TRUNCATED_VALUE_SAVED               0x4D1EL




/*
 *
 * Print Descriptor Error Codes
 *
 */

#define  PMERR_PRD_NO_MEMORY                0x4007
#define  PMERR_PRD_INV_HPRD                 0x4100
#define  PMERR_PRD_INV_VALID_VALUES         0x4102
#define  PMERR_PRD_INV_DEFAULT              0x4103
#define  PMERR_PRD_INV_RULE                 0x4104
#define  PMERR_PRD_NO_PRD_NAME              0x4105
#define  PMERR_PRD_OPEN_ERROR               0x4106
#define  PMERR_PRD_READ_ERROR               0x4107
#define  PMERR_PRD_SEEK_ERROR               0x4108
#define  PMERR_PRD_WRITE_ERROR              0x4109
#define  PMERR_PRD_FORMAT_ERROR             0x410B
#define  PMERR_PRD_BUILD_ERROR              0x410C
#define  PMERR_PRD_GRPALIAS_UNDEFINED       0x410D
#define  PMERR_PRD_GRPLISTPTR_ERROR         0x410E
#define  PMERR_PRD_RULE_MISMATCH            0x410F
#define  PMERR_PRD_BAD_STRING_MERGE         0x4110
#define  PMERR_PRD_BAD_RANGE_MERGE          0x4111
#define  PMERR_PRD_BAD_LIST_MERGE           0x4112
#define  PMERR_PRD_CONTROLPRD_ERROR         0x4113
#define  PMERR_PRD_CONTROLGRP_ERROR         0x4114
#define  PMERR_PRD_INV_PRD_NAME             0x4115
#define  PMERR_PRD_INV_CONTROL              0x4116
#define  PMERR_PRD_GRPLIST_EMPTY            0x4117
#define  PMERR_PRD_INV_LEVEL                0x4118
#define  PMERR_PRD_INV_BUFFER               0x4119
#define  PMERR_PRD_ID_ERROR                 0x411A
#define  PMERR_PRD_INV_GRPLIST              0x411B
#define  PMERR_PRD_INV_GROUP                0x411C
#define  PMERR_PRD_NOT_FOUND                0x411D
#define  PMERR_PRD_GRPLIST_NOT_FOUND        0x411E
#define  PMERR_PRD_BUFFER_TOO_SMALL         0x411F
#define  PMERR_PRD_OPT_NOT_DEFINED          0x4120
#define  PMERR_PRD_INV_OPTNAME              0x4121
#define  PMERR_PRD_TYPE_MISMATCH            0x4122
#define  PMERR_PRD_DESTROY_ERROR            0x4123
#define  PMERR_PRD_COMPRESS_ERROR           0x4124
#define  PMERR_PRD_MAX_OPTSIZE_EXCEEDED     0x4125
#define  PMERR_PRD_MAX_REFSIZE_EXCEEDED     0x4126
#define  PMERR_PRD_MAX_GRPSIZE_EXCEEDED     0x4127
#define  PMERR_PRD_INV_TYPE                 0x4128
#define  PMERR_PRD_DEFAULT_TRUNCATED        0x4129
#define  PMERR_PRD_VALID_VALUE_TRUNCATED    0x412A


/* Extended Error Message Identifiers                                */

#define GRPLISTPTR_SYNTAX_ERR               0x4E00L
#define GRPLISTPTR_NOT_ACCESSIBLE           0x4E01L

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                         /*@A1A*/

#define __EKIERRS
#endif                                    /* EKIERRS */

