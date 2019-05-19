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
/*********************************************************************/
/*                                                                   */
/* Source File Name = SQLSCDS.H                                      */
/*                                                                   */
/* Function = Include File for use with SQL descriptors and          */
/*            diagnostics.                                           */
/*                                                                   */
/*            Includes defined values for use as                     */
/*            DYNAMIC_FUNCTION_CODE and                              */
/*            COMMAND_FUNCTION_CODE values.                          */
/*                                                                   */
/* Operating System = Common C Include File                          */
/*                                                                   */
/* Product Names = DB2 Universal Database for z/OS Version 8         */
/* DB2 Universal Database Version 8                                  */
/* DB2 Universal Database for AS/400 Version 5 Release 3             */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ -------- ------------------------- */
/* $A0= P9A36383     5D30  030801 ROCH    :New Include               */
/* $B0= D99227.4     5D40  040625 ROCH    :Updates                   */
/* $B1= P9A99148     5D40  050602 ROCH    :Add current debug mode    */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/* End Change Activity                                               */
/*                                                                   */
/*********************************************************************/

#ifndef  SQL_H_SQLSCDS
#define SQL_H_SQLSCDS

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define SQLSTMT_ALLOCATE_CURSOR 1
#define SQLSTMT_ALLOCATE_DESCRIPTOR 2
#define SQLSTMT_ALTER_DATABASE -1
#define SQLSTMT_ALTER_DATABASE_PARTITION_GROUP -2
#define SQLSTMT_ALTER_FOREIGN_DATA_WRAPPER 120
#define SQLSTMT_ALTER_FOREIGN_TABLE 105
#define SQLSTMT_ALTER_ROUTINE 17
#define SQLSTMT_ALTER_SEQUENCE 134
#define SQLSTMT_ALTER_SERVER 108
#define SQLSTMT_ALTER_STOGROUP -3
#define SQLSTMT_ALTER_TABLE 4
#define SQLSTMT_ALTER_TABLESPACE -4
#define SQLSTMT_ALTER_TYPE 60
#define SQLSTMT_ALTER_USER_MAPPING 123
#define SQLSTMT_ALTER_VIEW -5
#define SQLSTMT_ASSIGNMENT 5
#define SQLSTMT_ASSOCIATE_LOCATOR -6
#define SQLSTMT_BEGIN_END 12
#define SQLSTMT_CALL 7
#define SQLSTMT_CASE 86
#define SQLSTMT_CLOSE_CURSOR 9
#define SQLSTMT_COMMENT -7
#define SQLSTMT_COMMIT_WORK 11
#define SQLSTMT_CONNECT 13
#define SQLSTMT_CREATE_ALIAS -8
#define SQLSTMT_CREATE_AUXILIARY_TABLE -9
#define SQLSTMT_CREATE_BUFFERPOOL -10
#define SQLSTMT_CREATE_DATABASE -11
#define SQLSTMT_CREATE_DATABASE_PARTITION_GROUP -12
#define SQLSTMT_CREATE_EVENT_MONITOR -13
#define SQLSTMT_CREATE_FOREIGN_DATA_WRAPPER 119
#define SQLSTMT_CREATE_FOREIGN_TABLE 103
#define SQLSTMT_CREATE_INDEX -14
#define SQLSTMT_CREATE_INDEX_EXTENSION -15
#define SQLSTMT_CREATE_ROUTINE 14
#define SQLSTMT_CREATE_ROUTINE_MAPPING 132
#define SQLSTMT_CREATE_SCHEMA 64
#define SQLSTMT_CREATE_SEQUENCE 133
#define SQLSTMT_CREATE_SERVER 107
#define SQLSTMT_CREATE_STOGROUP -16
#define SQLSTMT_CREATE_SYNONYM -17
#define SQLSTMT_CREATE_TABLE 77
#define SQLSTMT_CREATE_TABLESPACE -18
#define SQLSTMT_CREATE_TRANSFORM 117
#define SQLSTMT_CREATE_TRIGGER 80
#define SQLSTMT_CREATE_TYPE 83
#define SQLSTMT_CREATE_TYPE_MAPPING -19
#define SQLSTMT_CREATE_USER_MAPPING 122
#define SQLSTMT_CREATE_VIEW 84
#define SQLSTMT_DEALLOCATE_DESCRIPTOR 15
#define SQLSTMT_DECLARE_GLOBAL_TEMPORARY_TABLE -21
#define SQLSTMT_DELETE_CURSOR 18
#define SQLSTMT_DELETE_WHERE 19
#define SQLSTMT_DESCRIBE 20
#define SQLSTMT_DESCRIBE_PROCEDURE -23
#define SQLSTMT_DESCRIBE_TABLE -24
#define SQLSTMT_DISCONNECT 22
#define SQLSTMT_DROP_ALIAS -25
#define SQLSTMT_DROP_BUFFERPOOL -26
#define SQLSTMT_DROP_DATABASE -27
#define SQLSTMT_DROP_DATABASE_PARTITION_GROUP -28
#define SQLSTMT_DROP_EVENT_MONITOR -29
#define SQLSTMT_DROP_FOREIGN_DATA_WRAPPER 121
#define SQLSTMT_DROP_FOREIGN_TABLE 105
#define SQLSTMT_DROP_INDEX -30
#define SQLSTMT_DROP_INDEX_EXTENSION -31
#define SQLSTMT_DROP_PACKAGE -32
#define SQLSTMT_DROP_ROUTINE 30
#define SQLSTMT_DROP_ROUTINE_MAPPING 131
#define SQLSTMT_DROP_SCHEMA 31
#define SQLSTMT_DROP_SEQUENCE 135
#define SQLSTMT_DROP_SERVER 110
#define SQLSTMT_DROP_TABLE 32
#define SQLSTMT_DROP_TABLESPACE -33
#define SQLSTMT_DROP_TRANSFORM 116
#define SQLSTMT_DROP_TRIGGER 34
#define SQLSTMT_DROP_TYPE 35
#define SQLSTMT_DROP_TYPE_MAPPING -34
#define SQLSTMT_DROP_USER_MAPPING 124
#define SQLSTMT_DROP_VIEW 36
#define SQLSTMT_DYNAMIC_CLOSE_CURSOR 37
#define SQLSTMT_DYNAMIC_DELETE_CURSOR 38
#define SQLSTMT_DYNAMIC_FETCH 39
#define SQLSTMT_DYNAMIC_OPEN 40
#define SQLSTMT_EXECUTE 44
#define SQLSTMT_EXECUTE_IMMEDIATE 43
#define SQLSTMT_EXPLAIN -35
#define SQLSTMT_FETCH 45
#define SQLSTMT_FLUSH_EVENT_MONITOR -36
#define SQLSTMT_FOR 46
#define SQLSTMT_FREE_LOCATOR 98
#define SQLSTMT_GET_DESCRIPTOR 47
#define SQLSTMT_GOTO -37
#define SQLSTMT_GRANT 48
#define SQLSTMT_HOLD_LOCATOR 99      /* Changed from -38 @B0C*/
#define SQLSTMT_IF 88
#define SQLSTMT_INSERT 50
#define SQLSTMT_ITERATE 102
#define SQLSTMT_LABEL -39
#define SQLSTMT_LEAVE 89
#define SQLSTMT_LOCK_TABLE -40
#define SQLSTMT_LOOP 90
#define SQLSTMT_MERGE 128
#define SQLSTMT_OPEN 53
#define SQLSTMT_PREPARE 56
#define SQLSTMT_REFRESH_TABLE -41
#define SQLSTMT_RELEASE_CONNECTION -42
#define SQLSTMT_RELEASE_SAVEPOINT 57
#define SQLSTMT_RENAME_INDEX -43
#define SQLSTMT_RENAME_TABLE -44
#define SQLSTMT_RENAME_TABLESPACE -45
#define SQLSTMT_REPEAT 95
#define SQLSTMT_RESIGNAL 91
#define SQLSTMT_RETURN 58
#define SQLSTMT_REVOKE 59
#define SQLSTMT_ROLLBACK_WORK 62
#define SQLSTMT_SAVEPOINT 63
#define SQLSTMT_SELECT 65
#define SQLSTMT_SELECT_CURSOR 85
#define SQLSTMT_SET_CONNECTION 67
#define SQLSTMT_SET_CURRENT_APPLICATION_ENCODING_SCHEME -46
#define SQLSTMT_SET_CURRENT_DEBUG_MODE -75            /* @B1A*/
#define SQLSTMT_SET_CURRENT_DEGREE -47
#define SQLSTMT_SET_CURRENT_ENCRYPTION_PASSWORD -48
#define SQLSTMT_SET_CURRENT_EXPLAIN_MODE -49
#define SQLSTMT_SET_CURRENT_EXPLAIN_SNAPSHOT -50
#define SQLSTMT_SET_CURRENT_LOCALE_LC_CTYPE -51
#define SQLSTMT_SET_CURRENT_LOCK_TIMEOUT -68
#define SQLSTMT_SET_CURRENT_MAINTAINED_TABLE_TYPES_FOR_OPTIMIZATION -52
#define SQLSTMT_SET_CURRENT_OPTIMIZATION_HINT -53
#define SQLSTMT_SET_CURRENT_PACKAGESET -54
#define SQLSTMT_SET_CURRENT_PACKAGE_PATH -67
#define SQLSTMT_SET_CURRENT_PRECISION -55
#define SQLSTMT_SET_CURRENT_QUERY_OPTIMIZATION -56
#define SQLSTMT_SET_CURRENT_REFRESH_AGE -57
#define SQLSTMT_SET_CURRENT_RULES -58
#define SQLSTMT_SET_CURRENT_SQLID -59
#define SQLSTMT_SET_DESCRIPTOR 70
#define SQLSTMT_SET_ENCRYPTION_PASSWORD -48          /* @B1A*/
#define SQLSTMT_SET_EVENT_MONITOR_STATE -60
#define SQLSTMT_SET_INTEGRITY -61
#define SQLSTMT_SET_PASSTHROUGH 126
#define SQLSTMT_SET_PATH 69
#define SQLSTMT_SET_RESULT_SETS -64
#define SQLSTMT_SET_SCHEMA 74
#define SQLSTMT_SET_SERVER_OPTION -65
#define SQLSTMT_SET_SESSION_AUTHORIZATION 76        /* @B0A*/
#define SQLSTMT_SET_TRANSACTION 75
#define SQLSTMT_SET_TRANSFORM_GROUP 118
#define SQLSTMT_SIGNAL 92
#define SQLSTMT_UPDATE_CURSOR 81
#define SQLSTMT_DYNAMIC_UPDATE_CURSOR 42
#define SQLSTMT_UPDATE_WHERE 82
#define SQLSTMT_VALUES_INTO -66
#define SQLSTMT_WHILE 97
#define SQLSTMT_UNKNOWN 0

#ifdef __cplusplus
}
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* SQL_H_SQLSCDS */
