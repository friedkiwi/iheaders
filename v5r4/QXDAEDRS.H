/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2006                                */
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
/* START HEADER FILE SPECIFICATIONS **********************************/
/*                                                                   */
/* Header File Name: QXDAEDRS                                        */
/*                                                                   */
/* Descriptive Name: Extended Dynamic Remote Support (EDRS) APIs     */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Description: Provides functions to database operations on either  */
/*              a local or remote system.                            */
/*                                                                   */
/* Header Files Included: QP0WPID                                    */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qxda_CDBO0100_t                                   */
/*                 Qxda_CDBI0100_t                                   */
/*                 Qxda_CDBI0200_t                                   */
/*                 Qxda_QSTM0100_t                                   */
/*                 Qxda_QJBI0100_t                                   */
/*                 Qxda_ParmInfo_t                                   */
/*                                                                   */
/* Function Prototype List: QxdaConnectEDRS                          */
/*                          QxdaCommitEDRS                           */
/*                          QxdaRollbackEDRS                         */
/*                          QxdaProcessImmediateEDRS                 */
/*                          QxdaProcessExtDynEDRS                    */
/*                          QxdaProcessCommandEDRS                   */
/*                          QxdaCallProgramEDRS                      */
/*                          QxdaFindEDRSJob                          */
/*                          QxdaDisconnectEDRS                       */
/*                          QxdaCancelEDRS                           */
/*  XA API's:               QxdaSetConnection                        */
/*                          QxdaXAPrepare                            */
/*                          QxdaXACommit                             */
/*                          QxdaXARollback                           */
/*                          QxdaXAForget                             */
/*                          QxdaXARecover                            */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   CHANGE DESCRIPTION                 */
/* ---- ------------ ----- ------ --------------------------         */
/* $A0=              4D40  980430 New include                        */
/* $A1=              4P40  990330 Added # jobs returned              */
/* $B1=              5D10  990903 Teraspace and new                  */
/*                                CDBI0200 format.                   */
/* $C1=              5D10  010903 QxdaCancelEDRS API                 */
/* $C2= P9953429     5D20  010924 QXDA_BIN2 constant                 */
/* $C3= P9A02230   v5r2m0  020217 Add RDB fields for QxdaConnectEDRS.*/
/* $D1= D99237.2   v5r3m0  020918 Added necessary definitions and    */
/*                                fields for QxdaConnectEDRS to      */
/*                                allow external commitment control  */
/*                                                                   */
/* $D2= D99226     v5r3m0  030316 Added support for binary data      */
/*                                types.                             */
/*                                                                   */
/* $D3= P9A45765    v5r3m0 031130 Changed structures for padding;    */
/*                                Added PASE changes                 */
/*                                                                   */
/* $D4= PSE19530 v5r4m0.xpf     050502 MKRULICH Update XA support    */
/*                                                                   */
/*                                                                   */
/* $C4= P9A87480    v5r3m0 050118 Add Thread Safety                  */
/*                                                                   */
/* $C5= PB20376     v5r3m0 060329 Add XDA Server Mode support        */
/* $C6= 9B33875     v5r3m0 060818 Add Serviceability enhancements    */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QXDAEDRS_h
#define QXDAEDRS_h

#ifdef __OS400__
#include <qp0wpid.h>
#include <xa.h>                                               /*@D1A*/
#else
#include <sys/types.h>     /* For OS/400 PASE */
#endif /* __OS400__ */

#ifdef __cplusplus
  extern "C" {
#endif

#ifdef __OS400__             /* @D3A*/
#if (__OS400_TGTVRM__>=510)                                   /* @B1A*/
#pragma datamodel(P128)                                       /* @B1A*/
#endif                                                        /* @B1A*/
#endif

#define QXDA_MAX_CONNECTIONS     64  /* Max # of connections allowed */

#define QXDA_MAX_USER_DATA_LEN  256  /* Max length of job and suspend
                                        data in Qxda_CDBI0100 struct */

/*********************************************************************/
/* Commit options to use with QxdaCommit API                         */
/*********************************************************************/
#define QXDA_COMMIT_WORK          0
#define QXDA_COMMIT_WITH_HOLD     1

/*********************************************************************/
/* Rollback options to use with QxdaRollback API                     */
/*********************************************************************/
#define QXDA_ROLLBACK_WORK        0
#define QXDA_ROLLBACK_WITH_HOLD   1

/*********************************************************************/
/* Additional options to use with QxdaProcessExtDyn API              */
/*********************************************************************/
#define QXDA_EXTDYN_NOOPTS        0x00000000
#define QXDA_CREATE_OBJECTS       0x00000001
#define QXDA_FIND_STMT            0x00000010
#define QXDA_DEFER_OPEN           0x00000100

/*********************************************************************/
/* Disconnect options to use with QxdaDisconnectDB API               */
/*********************************************************************/
#define QXDA_DISCONNECT_COMMIT    0
#define QXDA_DISCONNECT_ROLLBACK  1

/*********************************************************************/
/* Parameter usages to use with QxdaCallProgram API                  */
/*********************************************************************/
#define QXDA_INPUT                0
#define QXDA_OUTPUT               1
#define QXDA_IN_OUT               2

/*********************************************************************/
/* Parameter types to use with QxdaCallProgram API                   */
/*********************************************************************/
#define QXDA_BIN4                 1
#define QXDA_CHAR                 2
#define QXDA_HEX                  3                           /* @B1A*/
#define QXDA_BIN2                 4


/*********************************************************************/
/* The following are XA operation ID's.                              */
/*********************************************************************/
#define QXDA_SQL_TXN_FIND     1                     /*@D1A*/
#define QXDA_SQL_TXN_CREATE   2                     /*@D1A*/
#define QXDA_SQL_TXN_SUSPEND  3                     /*@D1A*/
#define QXDA_SQL_TXN_END      4                     /*@D1A*/
#define QXDA_SQL_TXN_END_FAIL 5                     /*@D4A*/
#define QXDA_SQL_TXN_RESUME   6                     /*@D4A*/
#define QXDA_SQL_TXN_LOOSELY_COUPLED_CREATE 7       /*@D4A*/
#define QXDA_SQL_TXN_JOIN     8                     /*@D4A*/

/*********************************************************************/
/* The values are definitions for customer tracing                   */
/*********************************************************************/
#define     QXDA_TRACE_NONE      0                        /*@C6A*/
#define     QXDA_TRACE_INFO      1                        /*@C6A*/
#define     QXDA_TRACE_ERROR     2                        /*@C6A*/
#define     QXDA_TRACE_VERBOSE   3                        /*@C6A*/
#define     QXDA_TRACE_NET        "TRACENET"              /*@C6A*/
#define     QXDA_TRACE_DATA_BLOCK "TRACEDATABLOCK"        /*@C6A*/


/*********************************************************************/
/* Prototypes for calling the APIs                                   */
/*********************************************************************/
#ifdef __ILEC400__
#pragma argument (QxdaConnectEDRS, OS, nowiden)
#endif
void QxdaConnectEDRS ( void *,         /* Input structure            */
                       char *,         /* Input structure format     */
                       void *,         /* Receiver variable          */
                       int *,          /* Length of receiver variable*/
                       char *,         /* Receiver variable format   */
                       void *);        /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaCommitEDRS, OS, nowiden)
#endif
void QxdaCommitEDRS ( int *,           /* Connection handle          */
                      int *,           /* Commit options             */
                      void *,          /* SQL communications area    */
                      void *);         /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaRollbackEDRS, OS, nowiden)
#endif
void QxdaRollbackEDRS ( int *,         /* Connection handle          */
                        int *,         /* Rollback options           */
                        void *,        /* SQL communications area    */
                        void *);       /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaProcessImmediateEDRS, OS, nowiden)
#endif
void QxdaProcessImmediateEDRS ( int *,   /* Connection handle        */
                                char *,  /* SQL statement to execute */
                                int *,   /* Length of SQL statement  */
                                void *,  /* SQL communications area  */
                                void *); /* Error code               */

#ifdef __ILEC400__
#pragma argument (QxdaProcessExtDynEDRS, OS, nowiden)
#endif
void QxdaProcessExtDynEDRS ( int *,    /* Connection handle          */
                             void *,   /* SQL descriptor area        */
                             void *,   /* SQL communications area    */
                             char *,   /* QSQPRCED format name       */
                             void *,   /* QSQPRCED input format      */
                             void *,   /* Receiver variable          */
                             int *,    /* Length of receiver variable*/
                             char *,   /* Receiver variable format   */
                             int *,    /* Extended dynamic options   */
                             void *);  /* Error code                 */



#ifdef __ILEC400__
#pragma argument (QxdaProcessCommandEDRS, OS, nowiden)
#endif
void QxdaProcessCommandEDRS ( int *,   /* Connection handle          */
                              char *,  /* System command to execute  */
                              int *,   /* Length of system command   */
                              void *); /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaCallProgramEDRS, OS, nowiden)
#endif
void QxdaCallProgramEDRS ( int *,      /* Connection handle          */
                           char *,     /* Qualified program name     */
                           int *,      /* Number of parameters       */
                           void *,     /* Parameter information      */
                           void *);    /* Error code                 */
#ifdef __ILEC400__
#pragma argument (QxdaCancelEDRS , OS, nowiden)
#endif
void QxdaCancelEDRS      ( int *,      /* Connection handle      @C1A*/
                           void *,     /* Input Structure        @C1A*/
                           char *,     /* Input structure format @C1A*/
                           void *);    /* Error code             @C1A*/

#ifdef __ILEC400__
#pragma argument (QxdaFindEDRSJob, OS, nowiden)
#endif
void QxdaFindEDRSJob ( int *,          /* Connection handle          */
                       char *,         /* User data                  */
                       int *,          /* Length of user data        */
                       void *,         /* Receiver variable          */
                       int *,          /* Size of receiver variable  */
                       char *,         /* Receiver variable format   */
                       int *,          /* Number of jobs found       */
                       int *,          /* Number of jobs return  @A1A*/
                       void *);        /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaDisconnectEDRS, OS, nowiden)
#endif
void QxdaDisconnectEDRS ( int *,       /* Connection handle          */
                          int *,       /* Disconnect options         */
                          void *);     /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaSetConnection, OS, nowiden)
#endif
void QxdaSetConnection (int *,   /* Connection handle           @D1A  */
                        void *,  /* Transaction branch identifier */
                        int *,   /* Return Value                  */
                        int *,   /* Operation                     */
                        int *,   /* Timeout Value                 */
                        void *);  /* Error code                   */

#ifdef __ILEC400__
#pragma argument (QxdaXAPrepare, OS, nowiden)
#endif
void QxdaXAPrepare(int *,   /* Connection handle         @D1A    */
                   void *,  /* Transaction branch identifier */
                   int *,   /* Return Value                  */
                   int *,   /* Flags                         */
                   void *);  /* Error code                   */

#ifdef __ILEC400__
#pragma argument (QxdaXARollback, OS, nowiden)
#endif
void QxdaXARollback(int *,  /* Connection handle           @D1A  */
                    void *,  /* Transaction branch identifier */
                    int *,   /* Return Value                  */
                    int *,   /* Flags                         */
                    void *); /* Error code                    */

#ifdef __ILEC400__
#pragma argument (QxdaXACommit, OS, nowiden)
#endif
void QxdaXACommit (int *,   /* Connection handle          @D1A   */
                   void *,  /* Transaction branch identifier */
                   int *,   /* Return Value                  */
                   int *,   /* Flags                         */
                   void *); /* Error code                    */

#ifdef __ILEC400__
#pragma argument (QxdaXAForget, OS, nowiden)
#endif
void QxdaXAForget (int *,   /* Connection handle          @D1A */
                   void *,  /* Transaction branch identifier */
                   int *,   /* Return Value                  */
                   int *,   /* Flags                         */
                   void *); /* Error code                    */

#ifdef __ILEC400__
#pragma argument (QxdaXARecover, OS, nowiden)
#endif
void QxdaXARecover (int *,   /* Connection handle        @D1A */
                    void *,  /* XID's Array                   */
                    int *,   /* Count (size of the array)     */
                    int *,   /* Return Value                  */
                    int *,   /* Flags                         */
                    void *); /* Error code                    */

#ifdef __ILEC400__
#pragma argument (QxdaSetOptions, OS, nowiden)
#endif                                                   /*@C4A*/
void QxdaSetOptions(void *,   /* Input Options strucutre       */
                    char *,   /* Input Options structure name  */
                    void *);  /* Error Code                    */


/*********************************************************************/
/* Type Definition for the CDBI0100 format for the QxdaConnectEDRS   */
/* API input format.                                                 */
/*                                                                   */
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will have  */
/*       to be defined by the user.                                  */
/*********************************************************************/
typedef struct Qxda_CDBI0100
{
   char    Connection_Type;
   char    Commitment_Control;
   char    Commit_Scope[10];
   char    Allow_Suspend;
   char    Server_Name[256];
   char    RDB_Specified;
   char    SQL_Hex_Constants;           /*@D2A*/
   char    Autocommit;                  /*@D2C @C5C*/
   int     SQLDA_Cache_Size;
   int     Offset_Job_Data;
   int     Length_Job_Data;
   int     Offset_Suspend_Data;
   int     Length_Suspend_Data;
   char    RDB_Name[18];
   char    TM_Info[10];                /*@D1A*/
   int     Locktimeout;                /*@D1A*/
/*char     Job_Data[]; */              /* Variable length            */
/*char     Suspend_Data[]; */          /* Variable length            */
} Qxda_CDBI0100_t;

/*********************************************************************/
/* Type Definition for the CDBI0200 format for the QxdaConnectEDRS   */
/* API input format.                                                 */
/*                                                                   */
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will have  */
/*       to be defined by the user.                                  */
/*********************************************************************/
typedef struct Qxda_CDBI0200
{
   char    Connection_Type;
   char    Commitment_Control;
   char    Commit_Scope[10];
   char    Allow_Suspend;
   char    Server_Name[256];
   char    Convert_Endian_Data;
   char    RDB_Specified;
   char    SQL_Hex_Constants;           /*@D2A*/
   int     SQLDA_Cache_Size;
   int     Offset_Job_Data;
   int     Length_Job_Data;
   int     Offset_Suspend_Data;
   int     Length_Suspend_Data;
   int     Offset_Profile;
   int     Length_Profile;
   int     Offset_Password;
   int     Length_Password;
   int     Server_Job_CCSID;
   int     Password_CCSID;
   char    RDB_Name[18];
   char    TM_Info[10];                /*@D1A*/
   int     Locktimeout;               /*@D1A*/
/*char     Job_Data[]; */              /* Variable length            */
/*char     Suspend_Data[]; */          /* Variable length            */
/*char     Profile_Data[]; */          /* Variable length            */
/*char     Password_Data[];*/          /* Variable length            */
} Qxda_CDBI0200_t;                                            /* @B1A*/

/*********************************************************************/
/* Type Definition for the CDBO0100 format for the QxdaConnectEDRS   */
/* API output format.                                                */
/*********************************************************************/
typedef struct Qxda_CDBO0100
{
   int     Bytes_Returned;
   int     Bytes_Available;
   int     Connection_Handle;
   char    Server_Job_Name[10];
   char    Server_User_Name[10];
   char    Server_Job_Number[6];
   char    Connection_Type_Used;
   char    Reserved;             /*@D3A*/
} Qxda_CDBO0100_t;

/*********************************************************************/
/* Type Definition for the EXDO0100 format for the                   */
/* QxdaProcessExtDynEDRS API receiver variable.                      */
/*********************************************************************/
typedef struct Qxda_EXDO0100
{
   int     Bytes_Returned;
   int     Bytes_Available;
   char    Statement_Name[18];
   char    Reserved[2];          /*@D3A*/
} Qxda_EXDO0100_t;

/*********************************************************************/
/* Type Definition for the Qxda_QJBI0100 structure for the           */
/* QxdaFindEDRSJob API.                                              */
/*********************************************************************/
typedef struct Qxda_QJBI0100
{
   pid_t   pid;
   char    Name[10];
   char    User[10];
   char    Number[6];
   char    JobID[16];
   char    Reserved[2];
} Qxda_QJBI0100_t;

/*********************************************************************/
/* Type Definition for the Qxda_ParmInfo_t structure for the         */
/* QxdaCallProgram API.                                              */
/*********************************************************************/
typedef struct Qxda_ParmInfo
{
   void  *ParmAddr;
   int    ParmType;
   int    ParmLen;
   int    ParmUsage;
   char   Reserved[4];
} Qxda_ParmInfo_t;


/*********************************************************************/
/* Type Definition for the Qxda_CNCL0100 structure for the           */
/* QxdaCancelEDRS API.                                               */
/*********************************************************************/
typedef struct Qxda_CNCL0100
{
   char    Job_Name[10];
   char    Job_User[10];
   char    Job_Number[6];
} Qxda_CNCL0100_t;

/*********************************************************************/
/* Type Definition for the Qxda_SETO0100 structure for the           */
/* QxdaSetOptions API.                                               */
/*********************************************************************/
typedef struct Qxda_SETO0100                                   /*@C4A*/
{
   char Thread_Safe;
   char Trace_Mode;
   char Reserved1[2];
   int Trace_File_Size;      /*@C6A Units are MB with 2 Gigabytes maximum */
   int Offset_Trace_Config;  /*@C6A offset to the configuration string */
   int Length_Trace_Config;  /*@C6A length of the configuration string */
   char Reserved2[112];
 /*char Trace_Config; */     /*@C6A Variable length field */
} Qxda_SETO0100_t;

#ifdef __OS400__             /* @D3A*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* __OS400__ */       /* @D3A*/

#ifdef __cplusplus           /* @D3C*/
  }
#endif
#endif

