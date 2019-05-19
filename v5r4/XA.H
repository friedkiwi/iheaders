/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
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
#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/*********************************************************************/
/*                                                                   */
/* Header File Name        : QSYSINC/H/XA                            */
/*                                                                   */
/* Descriptive Name        : Generic XA API Function Switch Header   */
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
/*   xa_switch_t            XA function switch                       */
/*   xid_t                  Transaction branch ID                    */
/*                                                                   */
/* Function Prototype List :                                         */
/*                       ax_reg   Register RM with TM                */
/*                       ax_unreg Unregister RM from TM              */
/*                                                                   */
/* Change Activity         :                                         */
/*                                                                   */
/* CFD List                :                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= P3674293     4D40  980713 RANDYJ  : New                      */
/*                                                                   */
/* Flag Reason   Release     Date   Origin Comments                  */
/* ---- -------- ----------- ------ ------ ------------------------- */
/* $A1= D9844015 v5r2m0.xpf  010816 RANDYJ: New Transaction Services */
/* $01= P9A56478 v5r4m0.xpf  040211 RANDYJ: Remove semicolon from    */
/*                                          MAXBQUALSIZE efinition   */
/* End CFD List.                                                     */
/*                                                                   */
/*********************************************************************/

#ifndef XA_H
#define XA_H
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*-------------------------------------------------------------------*/
/* Transaction branch identification: XID                            */
/*-------------------------------------------------------------------*/
#define  XIDDATASIZE  128           /* Size in bytes                 */
#define  MAXGTRIDSIZE 64            /* Maximum size in bytes of
                                       global transaction id         */
#define  MAXBQUALSIZE 64            /* Maximum size in bytes of
                                       branch qualifier              */
typedef struct xid_t {
  long formatID;                    /* Format id
                                       Value of -1 (constant NULLXID)
                                       means that XID is null.       */
  long gtrid_length;                /* Length of lobal transaction id*/
  long bqual_length;                /* Length of branch qualifier    */
  char data[XIDDATASIZE];           /* Transaction branch id         */
} xid_t;
typedef struct xid_t XID;

/*
 * A value of -1 in formatID means the XID is null.
 */
#define NULLXID -1

/*-------------------------------------------------------------------*/
/* Prototypes for ax_ routines                                       */
/*-------------------------------------------------------------------*/
#ifdef __STDC__
  int ax_reg(int, XID *, long);
  int ax_unreg(int, long);
#else /* ifndef __STDC__ */
  int ax_reg();
  int ax_unreg();
#endif /* ifndef __STDC__ */

/*-------------------------------------------------------------------*/
/* XA options                                                        */
/*-------------------------------------------------------------------*/
typedef long TRANSACTION_TIMEOUT;   /* transaction timeout type  @A1A*/

struct xactl_t {                    /*                           @A1A*/
  long flags;                       /* valid element flags       @A1A*/
  TRANSACTION_TIMEOUT timeout;      /* timeout value             @A1A*/
};                                  /*                           @A1A*/

typedef struct xactl_t XACTL;       /*                           @A1A*/

#define XAOPTS_NOFLAGS 0x00000000L  /* no optional values        @A1A*/
#define XAOPTS_TIMEOUT 0x00000001L  /* timeout value present     @A1A*/

/*-------------------------------------------------------------------*/
/* RM switch data structure                                          */
/*-------------------------------------------------------------------*/
#define RMNAMESZ      32            /* Length of RM name including
                                       the null terminator           */
#define MAXINFOSIZE  256            /* Maximum size in bytes of
                                       xa_info strings, including
                                       the null terminator           */
struct xa_switch_t {
  char name[RMNAMESZ];              /* Resource manager name         */
  long flags;                       /* Options specific to the
                                       resource manager              */
  long version;                     /* Resource manager version      */
#ifdef __STDC__
  int (*xa_open_entry) (char *, int, long); /* xa_open function
                                       pointer                       */
  int (*xa_close_entry) (char *, int, long); /* xa_close function
                                       pointer                       */
  int (*xa_start_entry) (XID *, int, long); /* xa_start function
                                       pointer                       */
  int (*xa_end_entry) (XID *, int, long); /* xa_end function
                                       pointer                       */
  int (*xa_rollback_entry) (XID *, int, long); /* xa_rollback
                                       function pointer              */
  int (*xa_prepare_entry) (XID *, int, long); /* xa_prepare function
                                       pointer                       */
  int (*xa_commit_entry) (XID *, int, long); /* xa_commit function
                                       pointer                       */
  int (*xa_recover_entry) (XID *, long, int, long); /* xa_recover
                                       function pointer              */
  int (*xa_forget_entry) (XID *, int, long); /* xa forget_function
                                       pointer                       */
  int (*xa_complete_entry) (int *, int *, int, long); /* xa complete
                                       function pointer              */
  int (*xa_ready_entry) (XID *, int, long); /* xa_ready function
                                       pointer                   @A1A*/
  int (*xa_done_entry) (XID *, int, long); /* xa_done function
                                       pointer                   @A1A*/
  int (*xa_wait_recovery_entry) (int, long); /* xa_wait_recovery
                                       pointer                   @A1A*/
  int (*xa_wait_entry) (int, long);  /* xa_wait function pointer @A1A*/
  int (*xa_start_2_entry) (XID *, int, XACTL *, long); /* xa_start_2
                                        function pointer         @A1A*/
#else
  int (*xa_open_entry) ();          /* xa_open function pointer      */
  int (*xa_close_entry) ();         /* xa_close function pointer     */
  int (*xa_start_entry) ();         /* xa_start function pointer     */
  int (*xa_end_entry) ();           /* xa_end function pointer       */
  int (*xa_rollback_entry) ();      /* xa_rollback function pointer  */
  int (*xa_prepare_entry) ();       /* xa_prepare function pointer   */
  int (*xa_commit_entry) ();        /* xa_commit function pointer    */
  int (*xa_recover_entry) ();       /* xa_recover function pointer   */
  int (*xa_forget_entry) ();        /* xa_forget function pointer    */
  int (*xa_complete_entry) ();      /* xa_complete function pointer  */
  int (*xa_ready_entry) ();         /* xa_ready function pointer @A1A*/
  int (*xa_done_entry) ();          /* xa_done function pointer  @A1A*/
  int (*xa_wait_recovery_entry) (); /* xa_wait_recovery pointer  @A1A*/
  int (*xa_wait_entry) ();          /* xa_wait function pointer  @A1A*/
  int (*xa_start_2_entry) ();       /* xa_start_2 function pointer
                                                                 @A1A*/
#endif
  struct ax_switch_t **xa_tmswitch; /* Location of TM switch pointer
                                                                 @A1A*/
};

/*-------------------------------------------------------------------*/
/* AX Switch Data Structure                                      @A1A*/
/*-------------------------------------------------------------------*/
struct ax_switch_t {
  long flags;                       /* transaction manager options   */
  long version;                     /* must be 0                     */
#ifdef _STDC_
  int (*ax_reg_entry)(int, XID *, long); /* ax_reg function pointer  */
  int (*ax_unreg_entry)(int, long); /* ax_unreg function pointer     */
  int (*ax_start_entry)(int, XID *, long); /* ax_start function
                                       pointer                       */
  int (*ax_end_entry)(int, XID *, long); /* ax_end function pointer  */
  int (*ax_rollback_entry)(int, XID *, long); /* ax_rollback function
                                       pointer                       */
  int (*ax_prepare_entry)(int, XID *, long); /* ax_prepare function
                                       pointer                       */
  int (*ax_commit_entry)(int, XID *, long); /* ax_commit function
                                       pointer                       */
  int (*ax_recover_entry)(int, XID *, long, long); /* ax_recover
                                       function pointer              */
  int (*ax_add_branch_entry)(int, XID *, long); /* ax_add_branch
                                       function pointer              */
  int (*ax_forget_branch_entry)(int, XID *, long); /* ax_forget_branch
                                       function pointer              */
  int (*ax_set_branch_info_entry)(int, XID *, char *, long, long); /*
                                       ax_set_branch_info function
                                       pointer                       */
  int (*ax_get_branch_info_entry)(int, XID *, char *, long *, long); /*
                                       ax_get_branch_info function
                                       pointer                       */
  int (*ax_ready_entry)(int, XID *, long); /* ax_ready function
                                       pointer                       */
  int (*ax_done_entry)(int, XID *, long); /* ax_done function pointer*/
  int (*ax_reg_2_entry)(int, XID *, XACTL *, long); /* ax_reg_2_entry
                                       function pointer              */
  int (*ax_start_2_entry)(int, XID *, XACTL *, long); /*
                                       ax_start_2_entry function
                                       pointer                       */
#else /* #ifndef _STDC_ */
  int (*ax_reg_entry)();            /* ax_reg function pointer       */
  int (*ax_unreg_entry)();          /* ax_unreg function pointer     */
  int (*ax_start_entry)();          /* ax_start function pointer     */
  int (*ax_end_entry)();            /* ax_end function pointer       */
  int (*ax_rollback_entry)();       /* ax_rollback function pointer  */
  int (*ax_prepare_entry)();        /* ax_prepare function pointer   */
  int (*ax_commit_entry)();         /* ax_commit function pointer    */
  int (*ax_recover_entry)();        /* ax_recover function pointer   */
  int (*ax_add_branch_entry)();     /* ax_add_branch function pointer*/
  int (*ax_forget_branch_entry)();  /* ax_forget_branch function
                                       pointer                       */
  int (*ax_set_branch_info_entry)(); /* ax_set_branch_info function
                                       pointer                       */
  int (*ax_get_branch_info_entry)(); /* ax_get_branch_info function
                                       pointer                       */
  int (*ax_ready_entry)();          /* ax_ready function pointer     */
  int (*ax_done_entry)();           /* ax_done function pointer      */
  int (*ax_reg_2_entry)();          /* ax_reg_2_entry function
                                       pointer                       */
  int (*ax_start_2_entry)();        /* ax_start_2_entry function
                                       pointer                       */
#endif /* #ifndef _STDC_ */
};

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
#define TMUSECHAIN 0x00000008L      /* resource manager supports
                                       transaction chaining          */
#define TMUSEOPTS 0x00000010L       /* resource manager supports
                                       xa_start_2()                  */
#define TMUSE2PHASE 0x00000020L     /* resource manager might force
                                       upgrading 1-phase commit to
                                       2-phase commit                */
#define TMSWITCHOK 0x00000040L      /* resource manager has provided
                                       location for address of
                                       transaction manager switch    */
#define TMNOROLLALLOWED 0x00000080L /* tx_rollback() is not permitted
                                       in subordinates               */
#define TMNOCOMALLOWED 0x00000100L  /* tx_commit() is not permitted
                                       in subordinates               */
#define TMUSETHREADS 0x00000200L    /* resource manager can use threads
                                       as thread of control          */
/*-------------------------------------------------------------------*/
/* Flag definitions for the TM switch                                */
/*-------------------------------------------------------------------*/
#define TMSUPPORTSTHREADS 0x00000001L /* transaction manager is
                                       prepared to use threads as
                                       thread of control             */
#define TMSUBORDINATE 0x00000002L   /* The subordinate set of ax_()
                                       functions can be called       */

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

#define TMRECOVER 0x00080000L       /* call in recovery mode */
#define TMCHAINED 0x00040000L       /* call is in transaction chaining
                                       mode                          */
#define TMDEFERRED 0x00020000L      /* start is pending acceptance by
                                       the application program       */

/*-------------------------------------------------------------------*/
/* Maximum values for ax_* functions                                 */
/*-------------------------------------------------------------------*/
#define TMMAXBLOBLEN 1024           /* maximum blob_len for
                                       ax_set_branch_info()          */
#define TMMAXBLOBTOT 8192           /* maximum total blob data created
                                       using ax_set_branch_info() for
                                       all branches created at this
                                       node for a given transaction  */

/*-------------------------------------------------------------------*/
/* ax_() return codes                                                */
/*-------------------------------------------------------------------*/
#define TM_RBBASE 100               /* the inclusive lower bound of
                                       the rollback codes            */
#define TM_RBROLLBACK TM_RBBASE     /* the rollback was caused by an
                                       unspecified reason            */
#define TM_RBCOMMFAIL TM_RBBASE+1   /* the rollback was caused by a
                                       communication failure         */
#define TM_RBDEADLOCK TM_RBBASE+2   /* a deadlock was detected       */
#define TM_RBINTEGRITY TM_RBBASE+3  /* a condition that violates the
                                       integrity of the resources was
                                       detected                      */
#define TM_RBOTHER TM_RBBASE+4      /* the resource manager rolled
                                       back the transaction branch for
                                       a reason not on this list     */
#define TM_RBPROTO TM_RBBASE+5      /* a protocol error occurred in
                                       in the resource manager       */
#define TM_RBTIMEOUT TM_RBBASE+6    /* a transaction branch took
                                       too long                      */
#define TM_RBTRANSIENT TM_RBBASE+7  /* may retry the transaction
                                       branch                        */
#define TM_RBEND TM_RBTRANSIENT     /* the inclusive upper bound of the
                                       rollback codes                */
#define TM_DEFERRED 11              /* the commit decision has not
                                       been made                     */
#define TM_RETRY_COMMFAIL 10        /* ax_commit could not be completed
                                       due to communication failure  */
#define TM_NOMIGRATE 9              /* resumption must occur where
                                       suspension occurred           */
#define TM_HEURHAZ 8                /* the transaction branch may have
                                       been heuristically completed  */
#define TM_HEURCOM 7                /* the transaction branch has been
                                       heuristically committed       */
#define TM_HEURRB 6                 /* the transaction branch has been
                                       heuristically rolled back     */
#define TM_HEURMIX 5                /* the transaction branch has been
                                       heuristically committed and
                                       rolled back                   */
#define TM_RDONLY 3                 /* the transaction branch was
                                       read-only and has been
                                       committed                     */
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
#define TMER_NOTA -4                /* the XID is not valid          */
#define TMER_DUPID -8               /* the XID already exists        */

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
#define XA_RBINTEGRITY XA_RBBASE+3  /* Condition that violates the
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
#define XA_TWOPHASE 13              /* Use two-phase commit          */
#define XA_PROMOTED 12              /* AP promoted to initiator      */
#define XA_DEFERRED 11              /* the commit decision has not been
                                       made                          */
#define XA_RETRY_COMMFAIL 10        /* xa_commit could not be completed
                                       due to communication failure  */
/* ----- Migrate codes ----------------------------------------------*/
#define XA_NOMIGRATE   9            /* Resumption must occur where
                                       suspension occurred           */
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
#define XAER_RMFAIL   -7            /* RM unavailable                */
#define XAER_DUPID    -8            /* XID already exists            */
#define XAER_OUTSIDE  -9            /* RM doing work outside global
                                       transaction                   */


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
int xa_start_2( XID *, int, XACTL *, long ); /*                @A1A*/
int xa_end( XID *, int, long );
int xa_rollback( XID *, int, long );
int xa_prepare( XID *, int, long );
int xa_commit( XID *, int, long );
int xa_recover( XID *, long, int, long );
int xa_forget( XID *, int, long );
int xa_complete( int *, int *, int, long );
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif   /* end ifndef XA_H */

#ifdef __cplusplus
# pragma info(restore)
 } /* end extern "C" */
#else
# pragma checkout(resume)
#endif

