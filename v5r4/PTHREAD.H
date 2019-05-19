#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

#ifndef QP0W_PTHREAD_H
#define QP0W_PTHREAD_H

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name: pthread.h                                        */
/*                                                                    */
/* Descriptive Name: Pthread structures and definitions               */
/*                                                                    */
/* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1996,2002              */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication, or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* This header file is an external product interface, all             */
/* modifications must be upward compatible.                           */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* FLAG REASON    LEVEL      DATE        CHANGE DESCRIPTION           */
/* ---- --------- ---------- ----------  ---------------------------- */
/* $A0= D94778    v4r2m0.xpf 08/26/1996  New include                  */
/* $A1= D95599    v4r3m0.xpf 10/30/1997  Changes required to GA the   */
/*      kernel threads support                                        */
/* $A2= D97059    v4r4m0.xpf 07/15/1998  Add the function             */
/*      pthread_is_initialthread_np()                                 */
/* $B1= D97119    v5r1m0.xpf 04/16/2000  Enable teraspace and remove  */
/*      support for CPA threads                                       */
/* $B2= PSA89981  v5r1m0.xpf 07/21/2000  Force string to CCSID 37     */
/* $B3= P9938962  v5r1m0.xpf 12/05/2000  Fix pthread_create(),        */
/*      pthread_key_create(), and pthread_cleanup_push() for data     */
/*      model LLP64                                                   */
/* $B4= P9941510  v5r2m0.xpf 03/12/2001  Add                          */
/*      PTHREAD_CANCELEDEXTERNAL_NP and _pthread_canceledexternal_np()*/
/* $B5= D99124.1  v5r3m0.xpf 08/27/2002  Cleanup include              */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

/* Continue and define all kernel threads definitions                 */
#define _PTHREAD_H

/* Feature Test Macros ************************************************/
#define _POSIX_THREADS
#define _POSIX_THREAD_PROCESS_SHARED
#define _THREAD_SAFE

#include <errno.h>
#include <sys/types.h>
#include <sched.h>
#include <except.h>
#include <time.h>
#include <signal.h>  /*@B5C*/

#pragma datamodel(P128)        /*@B1A*/

/**********************************************************************/
/* Constants                                                          */
/**********************************************************************/

/* Standard Defined Thread Limits *************************************/
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS     4
#define _POSIX_THREAD_KEYS_MAX                  128
#define _POSIX_THREAD_THREADS_MAX               64

/* Thread Management **************************************************/
#define PTHREAD_THREADS_MAX             (pthread_threads_max_np())
#define PTHREAD_ONCE_INIT               0x00

#define PTHREAD_CANCELED              (_pthread_canceled_np())
#define PTHREAD_EXCEPTION_NP          (_pthread_exception_np())
#define PTHREAD_CANCELEDEXTERNAL_NP (_pthread_canceledexternal_np())
#ifdef __LLP64_IFC__                                        /*@B1A@B5C*/
  #undef PTHREAD_CANCELED                                       /*@B1A*/
  #undef PTHREAD_EXCEPTION_NP                                   /*@B1A*/
  #undef PTHREAD_CANCELEDEXTERNAL_NP                            /*@B4A*/
  #define PTHREAD_CANCELED            ((void *__ptr64) 1)       /*@B1A*/
  #define PTHREAD_EXCEPTION_NP        ((void *__ptr64) 2)       /*@B1A*/
  #define PTHREAD_CANCELEDEXTERNAL_NP ((void *__ptr64) 3)       /*@B4A*/
#endif                                                          /*@B1A*/

#define PTHREAD_STATUS_ACTIVE_NP        0
#define PTHREAD_STATUS_EXIT_NP          1

#define PTHREAD_CANCEL_ENABLE           0
#define PTHREAD_CANCEL_DISABLE          1

#define PTHREAD_CANCEL_DEFERRED         0
#define PTHREAD_CANCEL_ASYNCHRONOUS     1

#define PTHREAD_CREATE_JOINABLE         0
#define PTHREAD_CREATE_DETACHED         1

#define PTHREAD_PRIO_MAX_NP             PRIORITY_MAX_NP
#define PTHREAD_PRIO_MIN_NP             PRIORITY_MIN_NP

#define PTHREAD_SCOPE_SYSTEM            0
#define PTHREAD_SCOPE_PROCESS           1

#define PTHREAD_EXPLICIT_SCHED          0
#define PTHREAD_INHERIT_SCHED           1

/* Thread Private Storage *********************************************/
#define PTHREAD_DESTRUCTOR_ITERATIONS   4
#define PTHREAD_KEYS_MAX                512

/* Synchronization ****************************************************/
#define PTHREAD_PROCESS_PRIVATE         0
#define PTHREAD_PROCESS_SHARED          1

/* Declare PTHREAD_DEFAULT_MUTEX_NAME_NP as CCSID 37 "QP0WMTX UNNAMED" */
#define PTHREAD_DEFAULT_MUTEX_NAME_NP \
          "\xD8\xD7\xF0\xE6\xD4\xE3\xE7\x40\xE4\xD5\xD5\xC1\xD4\xC5\xC4"
#define PTHREAD_RWL_TAG_NP              0xD7D9E6D3

#define PTHREAD_MUTEX_NORMAL            0
#define PTHREAD_MUTEX_RECURSIVE         1
#define PTHREAD_MUTEX_ERRORCHECK        2
#define PTHREAD_MUTEX_OWNERTERM_NP      3
#define PTHREAD_MUTEX_DEFAULT           PTHREAD_MUTEX_NORMAL

#define PTHREAD_MUTEX_NONRECURSIVE_NP   PTHREAD_MUTEX_NORMAL
#define PTHREAD_MUTEX_RECURSIVE_NP      PTHREAD_MUTEX_RECURSIVE

/* Declare mutex name portion as CCSID 37 "QP0WMTX UNNAMED" */
#define PTHREAD_MUTEX_INITIALIZER \
          {NULL, \
           {0xD8,0xD7,0xF0,0xE6,0xD4,0xE3,0xE7,0x40, \
            0xE4,0xD5,0xD5,0xC1,0xD4,0xC5,0xC4,0x00}}
/* Declare mutex name portion as CCSID 37 "QP0WMTX UNNAMED" */
#define PTHREAD_COND_INITIALIZER \
          {NULL, \
           {0xD8,0xD7,0xF0,0xE6,0xD4,0xE3,0xE7,0x40, \
            0xE4,0xD5,0xD5,0xC1,0xD4,0xC5,0xC4,0x00}, \
           {NULL, NULL, NULL}}
#define PTHREAD_RWLOCK_INITIALIZER {{PTHREAD_RWL_TAG_NP,0,0,0,0,0,0,0},\
                                    {NULL, NULL, NULL}}

/* Pthread Tracing ****************************************************/
#define PTHREAD_TRACE_NONE_NP           0
#define PTHREAD_TRACE_ERROR_NP          1
#define PTHREAD_TRACE_INFO_NP           2
#define PTHREAD_TRACE_VERBOSE_NP        3

/* Pthread library option constants ***********************************/
#define PTHREAD_OPTION_POOL_NP            1
#define PTHREAD_OPTION_POOL_CURRENT_NP    2
#define PTHREAD_OPTION_THREAD_CAPABLE_NP  3

/**********************************************************************/
/* User Types                                                         */
/**********************************************************************/

/* Thread Management **************************************************/
typedef union  {
  struct {
    int          hi;
    int          lo;
  }              intId;
} pthread_id_np_t;

typedef struct {
    unsigned int reserved[4];
    void        *reserved1;
} pthread_attr_t;

typedef struct {
  void         *reserved;
  unsigned int  reservedHiId;
  unsigned int  reservedLoId;
  unsigned int  reservedHandle;
  unsigned int  reservedC;
  void         *reserved1;
} pthread_t;

typedef unsigned char pthread_once_t;

typedef struct {
  int           option;
  int           optionValue;
  int           reserved1[2];
  pthread_t     target;
  void         *reserved2[8];
} pthread_option_np_t;

typedef struct {
  struct timespec deltatime;
  int             leaveThreadAllocated:1;
  int             reserved:31;
  int             reserved1;
  void           *reserved2[3];
} pthread_joinoption_np_t;

/* Thread Private Storage *********************************************/
typedef int pthread_key_t;

/* Synchronization ****************************************************/
typedef struct {
   unsigned int     reserved[4];
   char             reserved1[16];
   void            *reserved2;
} pthread_mutexattr_t;

typedef struct {
     void        *reserved;
     char         reserved1[16];
} pthread_mutex_t;

typedef struct {
    unsigned int reserved[4];
    void        *reserved1;
} pthread_condattr_t;

typedef struct {
    void      *reserved;
    char      reserved1[16];
    void      *reserved2[3];
} pthread_cond_t;

typedef struct {
    int       reserved[4];
    void     *reserved1[2];
} pthread_rwlockattr_t;

typedef struct {
    int       reserved[8];
    void     *reserved1[3];
} pthread_rwlock_t;

/* Cancelation Cleanup ************************************************/
typedef struct {
  void (*handler)(void *);
  void  *arg;
} pthread_cleanup_entry_np_t;


/* Integer to Pointer Conversions *************************************/
#define __VOID(i)  Qp0wIntAsPVoid(i)
#define __INT(p)   Qp0wPVoidAsInt(p)

/* Pthread Tracing ****************************************************/
extern int Qp0wTraceLevel;

/**********************************************************************/
/* Macro: PTHREAD_TRACE_NP()                                          */
/*                                                                    */
/* Purpose: Allow the generation of code that runs only at specified  */
/*   tracelevels. Define PTHREAD_TRACE_NDEBUG when compiling to       */
/*   completely remove all generated tracepoint code                  */
/*                                                                    */
/* Parameters:                                                        */
/*   statementsToExecute - The C statements that will be executed     */
/*                         when the current trace level is greater    */
/*                         than or equal to the the desired trace     */
/*                         level. Multiple C statements should be     */
/*                         seperated by semicolons and grouped using  */
/*                         braces for readability.                    */
/*   desiredTracepointLevel - The level at which this tracepoint      */
/*                            code should be executed.                */
/**********************************************************************/
#ifndef PTHREAD_TRACE_NDEBUG
#  define PTHREAD_TRACE_NP(statementsToExecute, desiredTracepointLevel)\
 {                                                                     \
   if (Qp0wTraceLevel >= desiredTracepointLevel) {                     \
     statementsToExecute;                                              \
   }                                                                   \
 }
#else
#  define PTHREAD_TRACE_NP(statementsToExecute,desiredTracepointLevel) ;
#endif

/**********************************************************************/
/* Function Prototypes                                                */
/**********************************************************************/

/* Thread Attributes **************************************************/
int pthread_attr_destroy(pthread_attr_t *attr);
int pthread_attr_getdetachstate(const pthread_attr_t *attr,
                                int *detachstate);
int pthread_attr_getinheritsched(const pthread_attr_t *attr,
                                 int *inheritsched);
int pthread_attr_getschedparam(const pthread_attr_t *attr,
                               struct sched_param *param);
int pthread_attr_init(pthread_attr_t *attr);
int pthread_attr_setdetachstate(pthread_attr_t *attr,
                                int detachstate);
int pthread_attr_setinheritsched(pthread_attr_t *attr,
                                 int inheritsched);
int pthread_attr_setschedparam(pthread_attr_t *attr,
                               const struct sched_param *param);

/* Thread Management **************************************************/
int pthread_clear_exit_np(void);
#ifndef __LLP64_IFC__                                       /*@B3A@B5C*/
  int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                     void *(*start_routine)(void *), void *arg);
#else                                                           /*@B3C*/
  int pthread_create(pthread_t *__ptr64 thread,
              const pthread_attr_t *__ptr64 attr,
              void *__ptr64 (*__ptr64 start_routine)(void *__ptr64),
              void *__ptr64 arg);                               /*@B3A*/
  #ifndef __LLP64_PTHREAD_NO_MAP                                /*@B5A*/
    #pragma map(pthread_create, "pthread_create_ts64")          /*@B1A*/
  #endif                                                        /*@B5A*/
#endif                                                          /*@B1A*/
int pthread_detach(pthread_t thread);
int pthread_equal(pthread_t thread1, pthread_t thread2);
int pthread_delay_np(const struct timespec *interval);
void pthread_exit(void *status);
int pthread_getconcurrency(void);
int pthread_getpthreadoption_np(pthread_option_np_t *option);
int pthread_getschedparam(pthread_t thread, int *policy,
                          struct sched_param *param);
pthread_id_np_t pthread_getthreadid_np(void);
int pthread_getunique_np(pthread_t *thread, pthread_id_np_t *id);
unsigned int pthread_is_multithreaded_np(void);
int pthread_is_initialthread_np(void);
#ifndef __LLP64_IFC__                                       /*@B1A@B5C*/
  int pthread_join(pthread_t thread, void **status);
  int pthread_join_np(pthread_t thread, void **status);
  int pthread_extendedjoin_np(pthread_t thread, void **status,
                              pthread_joinoption_np_t *options);
#else                                                           /*@B1A*/
  int pthread_join(pthread_t thread,
              void *__ptr64 *__ptr64 status);                   /*@B1A*/
  int pthread_join_np(pthread_t thread,
              void *__ptr64 *__ptr64 status);                   /*@B1A*/
  int pthread_extendedjoin_np(pthread_t thread,
              void *__ptr64 *__ptr64 status,
              pthread_joinoption_np_t *__ptr64 options);        /*@B1A*/
  #pragma map(pthread_join, "pthread_join_ts64")                /*@B1A*/
  #pragma map(pthread_join_np, "pthread_join_np_ts64")          /*@B1A*/
  #pragma map(pthread_extendedjoin_np, "pthread_extendedjoin_np_ts64")
                                                                /*@B1A*/
#endif                                                          /*@B1A*/
int pthread_once(pthread_once_t *once_control,
                 void (*init_routine)(void));
pthread_t pthread_self(void);
int pthread_setconcurrency(int concurrency);
int pthread_setpthreadoption_np(pthread_option_np_t *option);
int pthread_setschedparam(pthread_t thread, int policy,
                          const struct sched_param *param);
int pthread_threads_max_np(void);

/* Thread Private Storage *********************************************/
void *pthread_getspecific(pthread_key_t key);
#ifndef __LLP64_IFC__                                       /*@B3A@B5C*/
  int pthread_key_create(pthread_key_t *key,
                         void (*destructor)(void *));
#else                                                           /*@B3A*/
  int pthread_key_create(pthread_key_t *__ptr64 key,
              void (*__ptr64 destructor)(void *__ptr64));       /*@B3A*/
  #ifndef __LLP64_PTHREAD_NO_MAP                                /*@B5A*/
    #pragma map(pthread_key_create, "pthread_key_create_ts64")  /*@B3C*/
  #endif                                                        /*@B5A*/
#endif                                                          /*@B3A*/
int pthread_setspecific(pthread_key_t key, const void *value);
#ifdef __LLP64_IFC__                                        /*@B1A@B5C*/
  #ifndef __LLP64_PTHREAD_NO_MAP                                /*@B5A*/
    #pragma map(pthread_setspecific, "pthread_setspecific_ts64") /*@B1A*/
  #endif                                                        /*@B5A*/
#endif                                                          /*@B1A*/
int pthread_key_delete(pthread_key_t key);

/* Thread cancelation *************************************************/
int pthread_cancel(pthread_t thread);
void pthread_cleanup_pop(int execute);
int pthread_cleanup_peek_np(pthread_cleanup_entry_np_t *top);
#ifndef __LLP64_IFC__                                       /*@B3A@B5C*/
  void pthread_cleanup_push(void (*routine)(void *), void *arg);
#else                                                           /*@B3C*/
  void pthread_cleanup_push(void (*__ptr64 routine)(void *__ptr64 ),
               void *__ptr64 arg);                              /*@B3A*/
  #ifndef __LLP64_PTHREAD_NO_MAP                                /*@B5A*/
    #pragma map(pthread_cleanup_push, "pthread_cleanup_push_ts64")
  #endif                                                        /*@B5A*/
#endif                                                          /*@B1A*/
int pthread_getcancelstate_np(int *cancelstate);
int pthread_setcancelstate(int state, int *oldstate);
int pthread_setcanceltype(int type, int *oldtype);
#ifndef __LLP64_IFC__                                       /*@B1A@B5C*/
  int pthread_test_exit_np(void **status);
#else                                                           /*@B1A*/
  int pthread_test_exit_np(void *__ptr64 *__ptr64 status);      /*@B1A*/
  #pragma map(pthread_test_exit_np, "pthread_test_exit_np_ts64") /*@B1A*/
#endif                                                          /*@B1A*/
void pthread_testcancel(void);

/* Return unique status for thread termination reasons ****************/
void *_pthread_canceled_np(void);
void *_pthread_exception_np(void);
void *_pthread_canceledexternal_np(void);  /*@B4A*/

/* Signals ************************************************************/
int pthread_kill(pthread_t thread, int sig);
int pthread_sigmask(int how, const sigset_t *set, sigset_t *oset);
int pthread_signal_to_cancel_np(sigset_t *set, pthread_t *thread);

/* Mutex Attributes ***************************************************/
int pthread_mutexattr_destroy(pthread_mutexattr_t *attr);
int pthread_mutexattr_getkind_np(const pthread_mutexattr_t *attr,
                                 int *kind);
int pthread_mutexattr_getname_np(const pthread_mutexattr_t *attr,
                                 char *name);
int pthread_mutexattr_getpshared(const pthread_mutexattr_t *attr,
                                 int *pshared);
int pthread_mutexattr_gettype(const pthread_mutexattr_t *attr,
                              int *type);
int pthread_mutexattr_init(pthread_mutexattr_t *attr);
int pthread_mutexattr_setkind_np(pthread_mutexattr_t *attr,
                                 int kind);
int pthread_mutexattr_setname_np(pthread_mutexattr_t *attr,
                                 const char *name);
int pthread_mutexattr_setpshared(pthread_mutexattr_t *attr,
                                 int pshared);
int pthread_mutexattr_settype(pthread_mutexattr_t *attr,
                              int type);
int pthread_set_mutexattr_default_np(int kind);

/* Mutexes ************************************************************/
int pthread_mutex_destroy(pthread_mutex_t *mutex);
int pthread_mutex_init(pthread_mutex_t *mutex,
                       const pthread_mutexattr_t *attr);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_timedlock_np(pthread_mutex_t *mutex,
                               const struct timespec *deltatime);
int pthread_mutex_trylock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_lock_global_np(void);
int pthread_unlock_global_np(void);

/* Condition Attributes ***********************************************/
int pthread_condattr_destroy(pthread_condattr_t *attr);
int pthread_condattr_getpshared(const pthread_condattr_t *attr,
                                int *pshared);
int pthread_condattr_init(pthread_condattr_t *attr);
int pthread_condattr_setpshared(pthread_condattr_t *attr,
                                int pshared);

/* Condition Variables ************************************************/
int pthread_cond_broadcast(pthread_cond_t *cond);
int pthread_cond_destroy(pthread_cond_t *cond);
int pthread_cond_init(pthread_cond_t *cond,
                      const pthread_condattr_t *attr);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cond_timedwait(pthread_cond_t *cond,
                           pthread_mutex_t *mutex,
                           const struct timespec *abstime);
int pthread_cond_wait(pthread_cond_t *cond,
                      pthread_mutex_t *mutex);
int pthread_get_expiration_np(const struct timespec *delta,
                              struct timespec *abstime);

/* Read/Write Lock Attributes *****************************************/
int pthread_rwlockattr_destroy(pthread_rwlockattr_t *attr);
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t *attr,
                                  int *pshared);
int pthread_rwlockattr_init(pthread_rwlockattr_t *attr);
int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *attr,
                                  int pshared);

/* Read/Write Locks ***************************************************/
int pthread_rwlock_destroy(pthread_rwlock_t *rwlock);
int pthread_rwlock_init(pthread_rwlock_t *rwlock,
                        const pthread_rwlockattr_t *attr);
int pthread_rwlock_rdlock(pthread_rwlock_t *rwlock);
int pthread_rwlock_timedrdlock_np(pthread_rwlock_t *rwlock,
                                  const struct timespec *deltatime);
int pthread_rwlock_timedwrlock_np(pthread_rwlock_t *rwlock,
                                  const struct timespec *deltatime);
int pthread_rwlock_tryrdlock(pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock(pthread_rwlock_t *rwlock);
int pthread_rwlock_unlock(pthread_rwlock_t *rwlock);
int pthread_rwlock_wrlock(pthread_rwlock_t *rwlock);

/* Utilities and debug ************************************************/
int pthread_trace_init_np(void);
void *Qp0wIntAsPVoid(int val);
int Qp0wPVoidAsInt(void *ptr);

/* Unsupported functions (fail with ENOSYS) ***************************/
int pthread_attr_getschedpolicy(const pthread_attr_t *attr,
                                int *policy);
int pthread_attr_getscope(const pthread_attr_t *attr,
                          int *contentionscope);
int pthread_attr_getguardsize(const pthread_attr_t *attr,
                              size_t *guardsize);
int pthread_attr_setschedpolicy(pthread_attr_t *attr,
                                int policy);
int pthread_attr_setscope(pthread_attr_t *attr,
                          int contentionscope);
int pthread_attr_setguardsize(pthread_attr_t *attr,
                              size_t guardsize);
int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t *attr,
                                     int *prioceiling);
int pthread_mutexattr_getprotocol(const pthread_mutexattr_t *attr,
                                  int *protocol);
int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *attr,
                                     int prioceiling);
int pthread_mutexattr_setprotocol(pthread_mutexattr_t *attr,
                                  int protocol);
int pthread_mutex_getprioceiling(const pthread_mutex_t *mutex,
                                 int *prioceiling);
int pthread_mutex_setprioceiling(pthread_mutex_t *mutex,
                                 int prioceiling, int *oldceiling);
int pthread_atfork(void (*prepare)(void),
                   void (*parent)(void),
                   void (*child)(void));
int pthread_atfork_np(int *userState, void (*prepare)(void),
                      void (*parent)(void),
                      void (*child)(void));
int pthread_attr_getstackaddr(const pthread_attr_t *attr,
                              void **stackaddr);
int pthread_attr_getstacksize(const pthread_attr_t *attr,
                              size_t *stacksize);
int pthread_attr_setstackaddr(pthread_attr_t *attr,
                              void *stackaddr);
int pthread_attr_setstacksize(pthread_attr_t *attr,
                              size_t stacksize);

/* Map the unsupported functions to unique non posix function       */
/* exports for possible future compatibility                        */
#pragma map(pthread_attr_getschedpolicy, \
            "pthread_attr_getschedpolicy_unsup_np")
#pragma map(pthread_attr_getscope, \
            "pthread_attr_getscope_unsup_np")
#pragma map(pthread_attr_getguardsize, \
            "pthread_attr_getguardsize_unsup_np")
#pragma map(pthread_attr_setguardsize, \
            "pthread_attr_setguardsize_unsup_np")
#pragma map(pthread_attr_setschedpolicy, \
            "pthread_attr_setschedpolicy_unsup_np")
#pragma map(pthread_attr_setscope, \
            "pthread_attr_setscope_unsup_np")
#pragma map(pthread_mutexattr_getprioceiling, \
            "pthread_mutexattr_getprioceiling_unsup_np")
#pragma map(pthread_mutexattr_getprotocol, \
            "pthread_mutexattr_getprotocol_unsup_np")
#pragma map(pthread_mutexattr_setprioceiling, \
            "pthread_mutexattr_setprioceiling_unsup_np")
#pragma map(pthread_mutexattr_setprotocol, \
            "pthread_mutexattr_setprotocol_unsup_np")
#pragma map(pthread_mutex_getprioceiling, \
            "pthread_mutex_getprioceiling_unsup_np")
#pragma map(pthread_mutex_setprioceiling, \
            "pthread_mutex_setprioceiling_unsup_np")
#pragma map(pthread_atfork, \
            "pthread_atfork_unsup_np")
#pragma map(pthread_atfork_np, \
            "pthread_atfork_np_unsup_np")
#pragma map(pthread_attr_getstackaddr, \
            "pthread_attr_getstackaddr_unsup_np")
#pragma map(pthread_attr_getstacksize, \
            "pthread_attr_getstacksize_unsup_np")
#pragma map(pthread_attr_setstackaddr, \
            "pthread_attr_setstackaddr_unsup_np")
#pragma map(pthread_attr_setstacksize, \
            "pthread_attr_setstacksize_unsup_np")


#pragma datamodel(pop)         /*@B1A*/

#endif /* QP0W_PTHREAD_H */

#ifdef __cplusplus
#pragma info(restore)
 } /* end extern "C" */
#else
# pragma checkout(resume)
#endif

