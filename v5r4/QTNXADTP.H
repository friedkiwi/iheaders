#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/*********************************************************************/
/*                                                                   */
/* Header File Name        : QSYSINC/H/QTNXADTP                      */
/*                                                                   */
/* Descriptive Name        : DB2/400 XA API Function Switch Header   */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1998                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/* Description             :                                         */
/*   Provide common declarations used by the XA APIs.                */
/*                                                                   */
/* Macro List              :                                         */
/*                                                                   */
/* Structure List          :                                         */
/*   QTNXADTP_switch_t      XA function switch                       */
/*   QTNXADTP_xid_t         Transaction branch ID                    */
/*                                                                   */
/* Function Prototype List :                                         */
/*                       None. XA API function prototypes are        */
/*                       declared in the QTNXAAPI header file.       */
/*                                                                   */
/* Change Activity         :                                         */
/*                                                                   */
/* CFD List                :                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D9496500     4D30  970918 MIETEK  : New                      */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*********************************************************************/

#ifndef _QTNXADTP_H
#define _QTNXADTP_H
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*-------------------------------------------------------------------*/
/* Transaction branch identification: XID                            */
/*-------------------------------------------------------------------*/
#define  XIDDATASIZE  128           /* Size in bytes                 */
#define  MAXGTRIDSIZE 64            /* Maximum size in bytes of
                                       global transaction id         */
#define  MAXBQUALSIZE 64;           /* Maximum size in bytes of
                                       branch qualifier              */
typedef struct db2xid_t {
  long formatID;                    /* Format id
                                       Value of -1 (constant NULLXID)
                                       means that XID is null.       */
  long gtrid_length;                /* Length of lobal transaction id*/
  long bqual_length;                /* Length of branch qualifier    */
  char data[XIDDATASIZE];           /* Transaction branch id         */
  } db2xid_t;
typedef struct db2xid_t XID;

#define NULLXID -1                  /* Format id value indicating
                                       null XID                      */

/*-------------------------------------------------------------------*/
/* Flag definitions for xa_ and ax_ routines                         */
/*-------------------------------------------------------------------*/
#define TMASYNC      0x80000000L    /* Perform routine asynchronously*/
#define TMONEPHASE   0x40000000L    /* Caller is using one-phase
                                       optimization                  */
#define TMFAIL       0x20000000L    /* Dissociates caller and marks
                                       transaction branch
                                       rollback-only                 */
#define TMNOWAIT     0x10000000L    /* Return if blocking condition
                                      exists                        */
#define TMRESUME     0x08000000L    /* Caller is resuming
                                       association with suspended
                                       transaction branch            */
#define TMSUCCESS    0x04000000L    /* Dissociate caller from
                                       transaction branch            */
#define TMSUSPEND    0x02000000L    /* Caller is suspending, not
                                       ending, association           */
#define TMSTARTRSCAN 0x01000000L    /* Start a recovery scan         */
#define TMENDRSCAN   0x00800000L    /* End a recovery scan           */
#define TMMULTIPLE   0x00400000L    /* Wait for any asynchronous
                                       operation                     */
#define TMJOIN       0x00200000L    /* Caller is joining existing
                                       transaction branch            */
#define TMMIGRATE    0x00100000L    /* Caller intends to perform
                                       migration                     */

/*-------------------------------------------------------------------*/
/* ax_() return codes                                                */
/*-------------------------------------------------------------------*/
#define TM_JOIN     2               /* Caller is joining existing
                                       transaction branch            */
#define TM_RESUME   1               /* Caller is resuming
                                       association with suspended
                                       transaction branch            */
#define TM_OK       0               /* Normal execution              */
#define TMER_TMERR  -1              /* An error occurred in the
                                       transaction manager           */
#define TMER_INVAL  -2              /* Invalid arguments were given  */
#define TMER_PROTO  -3              /* Routine invoked in an
                                       improper context              */

/*-------------------------------------------------------------------*/
/* xa_() return codes                                                */
/*-------------------------------------------------------------------*/
/*----- Rollback codes ----------------------------------------------*/
#define XA_RBBASE      100          /* Inclusive lower bound of the
                                       rollback codes                */
#define XA_RBROLLBACK  XA_RBBASE    /* Rollback was caused by an
                                       unspecified reason            */
#define XA_RBCOMMFAIL  XA_RBBASE+1  /* Rollback was caused by
                                       communication failure         */
#define XA_RBDEADLOCK  XA_RBBASE+2  /* Deadlock was detected         */
#define XA_RBINTEGRITY XA RBBASE+3  /* Condition that violates the
                                       integrity of the resources
                                       was detected                  */
#define XA_RBOTHER     XA_RBBASE+4  /* RM rolled back the
                                       transaction branch for a
                                       reason not on this list       */
#define XA_RBPROTO     XA_RBBASE+5  /* Protocol error occurred in the
                                       RM                            */
#define XA_RBTIMEOUT   XA_RBBASE+6  /* Transaction branch tool too
                                       long                          */
#define XA_RBTRANSIENT XA_RBBASE+7  /* May retry the transaction
                                       branch                        */
#define XA_RBEND       XA_RBTRANSIENT /* The inclusive upper bound
                                       of the rollback codes         */
/* ----- Migrate codes ----------------------------------------------*/
#define XA_NOMIGRATE   9            /* Resumption must occur where
                                       suspension occurred            */
/*----- Heuristic codes ---------------------------------------------*/
#define XA_HEURHAZ     8            /* Transaction branch may have
                                       been heuristically completed  */
#define XA_HEURCOM     7            /* Transaction branch has been
                                       heuristically committed       */
#define XA_HEURRB      6            /* Transaction branch has been
                                       heuristically rolled back     */
#define XA_HEURMIX     5            /* Transaction branch has been
                                       heuristically committed or
                                       rolled back                   */
/*----- Other positive codes ----------------------------------------*/
#define XA_RETRY       4            /* Routine returned with no
                                       effect and may be reissued    */
#define XA_RDONLY      3            /* Transaction branch was
                                       read-only and has been
                                       committed                     */
/*----- OK code -----------------------------------------------------*/
#define XA_OK          0            /* Normal execution              */

/*----- Error codes -------------------------------------------------*/
#define XAER_ASYNC    -2            /* Asynchronous operation
                                       already outstanding           */
#define XAER_RMERR    -3            /* RM error occurred in the
                                       transaction branch            */
#define XAER_NOTA     -4            /* XID is not valid              */
#define XAER_INVAL    -5            /* Invalid arguments were given  */
#define XAER_PROTO    -6            /* Routine invoked in an
                                       improper context              */
#define XAER_RMFAIL   -7            /* RM unavailable                 */
#define XAER_DUPID    -8            /* XID already exists            */
#define XAER_OUTSIDE  -9            /* RM doing work outside global
                                       transaction                   */
/*-------------------------------------------------------------------*/
/* RM switch data structure                                          */
/*-------------------------------------------------------------------*/
#define RMNAMESZ      32            /* Length of RM name including
                                       the null terminator           */
#define MAXINFOSIZE  256            /* Maximum size in bytes of
                                       db2xa info strings, including
                                       the null terminator           */
struct db2xa_switch_t {
  char name[RMNAMESZ];              /* Resource manager name         */
  long flags;                       /* Options specific to the
                                       resource manager              */
  long version;                     /* Resource manager version      */
#ifdef __STDC__
  int (*db2xa_open_entry) (char *, int, long); /* db2xa_open function
                                       pointer                       */
  int (*db2xa_close_entry) (char *, int, long); /* db2xa_close
                                       function pointer              */
  int (*db2xa_start_entry) (XID *, int, long); /* db2xa_start function
                                       pointer                       */
  int (*db2xa_end_entry) (XID *, int, long); /* db2xa_end function
                                       pointer                       */
  int (*db2xa_rollback_entry) (XID *, int, long); /* db2xa_rollback
                                       function pointer              */
  int (*db2xa_prepare_entry) (XID *, int, long); /* db2xa_prepare
                                       function pointer              */
  int (*db2xa_commit_entry) (XID *, int, long); /* db2xa_commit
                                       function pointer              */
  int (*db2xa_recover_entry) (XID *, long, int, long); /* db2xa_recover
                                       function pointer              */
  int (*db2xa_forget_entry) (XID *, int, long); /* db2xa_forget
                                       function pointer              */
  int (*db2xa_complete_entry) (int *, int *, int, long); /* db2xa_comp
                                       lete function pointer         */
#else
  int (*db2xa_open_entry) ();       /* db2xa open function pointer   */
  int (*db2xa_close_entry) ();      /* db2xa close function pointer  */
  int (*db2xa_start_entry) ();      /* db2xa start function pointer  */
  int (*db2xa_end_entry) ();        /* db2xa end function pointer    */
  int (*db2xa_rollback_entry) ();   /* db2xa rollback function
                                       pointer                       */
  int (*db2xa_prepare_entry) ();    /* db2xa prepare function pointer*/
  int (*db2xa_commit_entry) ();     /* db2xa commit function pointer */
  int (*db2xa_recover_entry) ();    /* db2xa recover function pointer*/
  int (*db2xa_forget_entry) ();     /* db2xa forget function pointer */
  int (*db2xa_complete_entry) ();   /* db2xa complete function
                                       pointer                       */
#endif
};
typedef struct db2xa_switch_t  DB2SWITCH;

/*-------------------------------------------------------------------*/
/* Flag definitions for the RM switch                                */
/*-------------------------------------------------------------------*/
#define TMNOFLAGS   0x00000000L     /* No resource manager features
                                       selected                      */
#define TMREGISTER  0x00000001L     /* Resource manager dynamically
                                       registers                     */
#define TMNOMIGRATE 0x00000002L     /* Resource manager does not
                                       support association migration */
#define TMUSEASYNC  0x00000004L     /* Resource manager supports
                                       asynchronous operations       */



/*------------------------------------------------------------------*/
/* External DBA Interface Functions                                 */
/*------------------------------------------------------------------*/
#ifdef _XA_PROTOTYPES            /* Optional prototypes             */
/* db2xa_switch functions (Original XA implementation for DB2)      */
int db2xa_open( char *, int, long );
int db2xa_close( char *, int, long );
int db2xa_start( XID *, int, long );
int db2xa_end( XID *, int, long );
int db2xa_rollback( XID *, int, long );
int db2xa_prepare( XID *, int, long );
int db2xa_commit( XID *, int, long );
int db2xa_recover( XID *, long, int, long );
int db2xa_forget( XID *, int, long );
int db2xa_complete( int *, int *, int, long );

/* xa_switch functions  (New Transaction Model XA implementation)   */
int xa_open( char *, int, long );
int xa_close( char *, int, long );
int xa_start( XID *, int, long );
int xa_end( XID *, int, long );
int xa_rollback( XID *, int, long );
int xa_prepare( XID *, int, long );
int xa_commit( XID *, int, long );
int xa_recover( XID *, long, int, long );
int xa_forget( XID *, int, long );
int xa_complete( int *, int *, int, long );
#endif

/*------------------------------------------------------------------*/
/* Switch structures                                                */
/*------------------------------------------------------------------*/
extern struct db2xa_switch_t  db2xa_switch; /* Original XA                 */
extern struct db2xa_switch_t  xa_switch;    /* New Transaction Model XA    */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif   /* end ifndef _QTNXADTP_H */

#ifdef __cplusplus
# pragma info(restore)
 } /* end extern "C" */
#else
# pragma checkout(resume)
#endif

