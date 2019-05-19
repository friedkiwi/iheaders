/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2002, 2004                                */
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
#ifndef QSYEIMAPI_h
#define QSYEIMAPI_h
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  qsyeimapi.h                                    */
/*                                                                   */
/* Descriptive Name: Enterprise Identity Mapping (EIM) APIs that     */
/*                   are specific to OS/400                          */
/*                                                                   */
/* 5722-SS1                                                          */
/* (C) Copyright IBM Corp. 2002                                      */
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
/*          structures to be used with the OS/400 specific EIM APIs. */
/*                                                                   */
/* Header Files Included:  eim.h                                     */
/*                                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*                                                                   */
/* Structure List: QsyEimKerberosKeyTab                              */
/*                 QsyEimKerberosPassword                            */
/*                 QsyEimConnectionInfo                              */
/*                 QsyEimConnectInfo                                 */
/*                                                                   */
/*                                                                   */
/* Function Prototype List: QsySetEIMConnectInfo                     */
/*                          QsyGetEIMConnectInfo                     */
/*                          QsyGetEIMHandle                          */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL  DATE   PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ------ ------ -------- ---------------------- */
/*   $A0= D9860703     V5R2M0 010722 ROCH:    New include.           */
/*   $A1= D9121900     V5R3M0 021201 ROCH:    Add message catalog IDs*/
/*   $A2= P9A73961     V5R3M0 040815 ROCH:    New API QsyGetEIMHandle*/
/*** END HEADER FILE SPECIFICATIONS **********************************/


#include "eim.h"

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma enum(4)
/*--------------------------------------------------------------------*/
/*    Message Catalog Message IDs                                     */
/*--------------------------------------------------------------------*/
#define EIMERR_OS400_BINDDN_SIZE 5001
#define EIMERR_OS400_CONN_SYS_INVAL 5002
#define EIMERR_OS400_KEYTAB_SIZE 5003
#define EIMERR_OS400_PRINCIPAL_SIZE 5004
#define EIMERR_OS400_PWD_SIZE 5005
#define EIMERR_OS400_REALM_SIZE 5006
#define EIMERR_OS400_NOTSET_CONFIG 5007
#define EIMERR_OS400_NOTSET_MASTER 5008
#define EIMERR_OS400_QSYEIM_NOT_ACTIVE 5009
#define EIMERR_OS400_DATA_SIZE 5010
#define EIMERR_OS400_USERPROFILE_INVALID 5011
#define EIMERR_OS400_KERBEROS_ERR 5012
/*--------------------------------------------------------------------*/
/*    EimConnect System                                               */
/*--------------------------------------------------------------------*/
enum QsyEimConnectSystem
{
    QSY_EIM_CONFIG,                 /* Connecting to configured system*/
    QSY_EIM_MASTER                  /* Connecting to master system    */
};

enum QsyEimConnectType
{
    QSY_EIM_SIMPLE,                 /* Simple bind                    */
    QSY_EIM_KERBEROS_KEYTAB,        /* Kerberos using keytab file     */
    QSY_EIM_KERBEROS_PWD,           /* Kerberos using password        */
    QSY_EIM_REMOVE_CONNECT_INFO     /* Remove connection info for the */
                                    /* specified system               */
};

typedef struct QsyEimKerberosKeyTab
{
     char * keyTabFile;
     char * principal;
     char * realm;
} QsyEimKerberosKeyTab;             /* Information when connection    */
                                    /* type = QSY_EIM_KERBEROS_KEYTAB */

typedef struct QsyEimKerberosPassword
{
     char * principal;
     char * realm;
     char * password;
} QsyEimKerberosPassword;           /* Information when connection    */
                                    /* type = QSY_EIM_KERBEROS_PWD    */

typedef struct QsyEimConnectionInfo
{
     enum QsyEimConnectType type;
     union {
         QsyEimKerberosKeyTab    kerberosKeyTab;
         QsyEimKerberosPassword  kerberosPassword;
         EimSimpleConnectInfo    simpleCreds;
     } connectInfo;
} QsyEimConnectionInfo;

typedef struct QsyEimConnectInfo
{
     unsigned int              nextEntry;
                                    /* Displacement to next entry.    */
     enum QsyEimConnectSystem  connectSystem;
     enum QsyEimConnectType    connectType;
     union {
         struct {
             EimListData       kerberosKeyTab;
             EimListData       kerberosPrincipal;
             EimListData       kerberosRealm;
         } kerberosKeyTab;          /* Kerberos information, if       */
                                    /* connectType is                 */
                                    /* QSY_EIM_KERBEROS_KEYTAB        */
         struct {
             EimListData       kerberosPrincipal;
             EimListData       kerberosRealm;
         } kerberosPwd;             /* Kerberos information, if       */
                                    /* connectType is                 */
                                    /* QSY_EIM_KERBEROS_PWD           */
         struct {
             enum EimPasswordProtect  protect;
             EimListData              bindDN;
         } simpleConnect;
                                    /* Protect value and bind DN, if  */
                                    /* connectType is QSY_EIM_SIMPLE  */

     } connectInfo;
} QsyEimConnectInfo;

/*--------------------------------------------------------------------*/
/*                                                                    */
/*   Connect API's                                                    */
/*                                                                    */
/*--------------------------------------------------------------------*/
 int QsySetEIMConnectInfo
    (
     enum QsyEimConnectSystem    connectSystem,
     QsyEimConnectionInfo        connectInfo,
     EimRC                     * eimrc
    );

 int QsyGetEIMConnectInfo
    (
     int          lengthOfConnectInfo,
     EimList    * connectInfo,
     EimRC      * eimrc
    );
 int QsyGetEIMHandle                                           /* @A2A*/
   (                                                           /* @A2A*/
    EimHandle      * eim,           /* Output: EimHandle          @A2A*/
    EimRC          * eimrc                                     /* @A2A*/
    );                                                         /* @A2A*/

#pragma enum(pop)

#ifdef __cplusplus
}
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* QSYEIMAPI_h */
