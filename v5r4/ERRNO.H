#ifndef    __errno_h
  #define  __errno_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================== */
/* Header File Name: errno.h                                          */
/*                                                                    */
/* This header contains the declaration of errno and the              */
/* definitions of the error numbers.                                  */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                             */
/* (C) Copyright IBM Corp. 1991,2003                                  */
/*                                                                    */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/* ================================================================== */

#pragma datamodel(P128)

extern int *__errno(void);

/* Error Numbers                                                       */
#define EDOM            3001 /* domain error in math function          */
#define ERANGE          3002 /* range error in math function           */
#define ETRUNC          3003 /* truncation on I/O operation            */
#define ENOTOPEN        3004 /* file has not been opened               */
#define ENOTREAD        3005 /* file not opened for read               */
#define ERECIO          3008 /* file opened for record I/O             */
#define ENOTWRITE       3009 /* file not opened for write              */
#define ESTDIN          3010 /* stdin cannot be opened                 */
#define ESTDOUT         3011 /* stdout cannot be opened                */
#define ESTDERR         3012 /* stderr cannot be opened                */
#define EBADSEEK        3013 /* bad offset to seek to                  */
#define EBADNAME        3014 /* invalid file name specified            */
#define EBADMODE        3015 /* invalid file mode specified            */
#define EBADPOS         3017 /* invalid position specifier             */
#define ENOPOS          3018 /* no record at specified position        */
#define ENUMMBRS        3019 /* no ftell if more than 1 member         */
#define ENUMRECS        3020 /* no ftell if too many records           */
#define EBADFUNC        3022 /* invalid function pointer               */
#define ENOREC          3026 /* record not found                       */
#define EBADDATA        3028 /* message data invalid                   */
#define EBADOPT         3040 /* bad option on I/O function             */
#define ENOTUPD         3041 /* file not opened for update             */
#define ENOTDLT         3042 /* file not opened for delete             */
#define EPAD            3043 /* padding occurred on write operation    */
#define EBADKEYLN       3044 /* bad key length option                  */
#define EPUTANDGET      3080 /* illegal write after read               */
#define EGETANDPUT      3081 /* illegal read after write               */
#define EIOERROR        3101 /* I/O exception non-recoverable error    */
#define EIORECERR       3102 /* I/O exception recoverable error        */

/* The following values are defined by POSIX ISO/IEC 9945-1:1990.      */
#define EINVAL          3021 /* invalid argument                       */
#define EIO             3006 /* input/output error                     */
#define ENODEV          3007 /* no such device                         */
#define EBUSY           3029 /* resource busy                          */
#define ENOENT          3025 /* no such file or library                */
#define EPERM           3027 /* operation not permitted                */

/*sys/errno.h defines */
#define EACCES          3401 /*  Permission denied.                      */
#define ENOTDIR         3403 /*  Not a directory.                        */
#define ENOSPC          3404 /*  No space available.                     */
#define EXDEV           3405 /*  Improper link.                          */
#define EWOULDBLOCK     3406 /*  Operation would have caused the process */
#define EAGAIN          3406 /*  Operation would have caused the process */
#define EINTR           3407 /*  Interrupted function call.              */
#define EFAULT          3408 /*  The address used for an argument was no */
#define ETIME           3409 /*  Operation timed out                     */
#define ENXIO           3415 /*  No such device or address               */
#define ECLOSED         3417 /*  Socket closed                           */
#define EADDRINUSE      3420 /*  Address already in use.                 */
#define EADDRNOTAVAIL   3421 /*  Address not available.                  */
#define EAFNOSUPPORT    3422 /*  The type of socket is not supported in  */
#define EALREADY        3423 /*  Operation already in progress.          */
#define ECONNABORTED    3424 /*  Connection ended abnormally.            */
#define ECONNREFUSED    3425 /*  A remote host refused an attempted conn */
#define ECONNRESET      3426 /*  A connection with a remote socket was r */
#define EDESTADDRREQ    3427 /*  Operation requires destination address. */
#define EHOSTDOWN       3428 /*  A remote host is not available.         */
#define EHOSTUNREACH    3429 /*  A route to the remote host is not avail */
#define EINPROGRESS     3430 /*  Operation in progress.                  */
#define EISCONN         3431 /*  A connection has already been establish */
#define EMSGSIZE        3432 /*  Message size out of range.              */
#define ENETDOWN        3433 /*  The network is not currently available. */
#define ENETRESET       3434 /*  A socket is connected to a host that is */
#define ENETUNREACH     3435 /*  Cannot reach the destination network.   */
#define ENOBUFS         3436 /*  There is not enough buffer space for th */
#define ENOPROTOOPT     3437 /*  The protocol does not support the speci */
#define ENOTCONN        3438 /*  Requested operation requires a connecti */
#define ENOTSOCK        3439 /*  The specified descriptor does not refer */
#define ENOTSUP         3440 /*  Operation not supported.                */
#define EOPNOTSUPP      3440 /*  Operation not supported.                */
#define EPFNOSUPPORT    3441 /*  The socket protocol family is not suppo */
#define EPROTONOSUPPORT 3442 /*  No protocol of the specified type and d */
#define EPROTOTYPE      3443 /*  The socket type or protocols are not co */
#define ERCVDERR        3444 /*  An error indication was sent by the pee */
#define ESHUTDOWN       3445 /*  Cannot send data after a shutdown.      */
#define ESOCKTNOSUPPORT 3446 /*  The specified socket type is not suppor */
#define ETIMEDOUT       3447 /*  A remote host did not respond within th */
#define EUNATCH         3448 /*  The protocol required to support the sp */
#define EBADF           3450 /*  Descriptor not valid.                   */
#define EMFILE          3452 /*  Too many open files for this process.   */
#define ENFILE          3453 /*  Too many open files in the system.      */
#define EPIPE           3455 /*  Broken pipe.                            */
#define EEXIST          3457 /*  File exists.                            */
#define EDEADLK         3459 /*  Resource deadlock avoided.              */
#define ENOMEM          3460 /*  Storage allocation request failed.      */
#define EOWNERTERM      3462 /*  The synchronization object no longer ex */
#define EDESTROYED      3463 /* The synchronization object was destroyed */
#define ETERM           3464 /*  Operation terminated.                   */
#define EMLINK          3468 /*  Maximum link count for a file was excee */
#define ESPIPE          3469 /*  Seek request not supported for object.  */
#define ENOSYS          3470 /*  Function not implemented.               */
#define EISDIR          3471 /*  Specified target is a directory.        */
#define EROFS           3472 /*  Read-only file system.                  */
#define EUNKNOWN        3474 /*  Unknown system state.                   */
#define EITERBAD        3475 /*  Iterator is invalid.                    */
#define EDAMAGE         3484 /*  A damaged object was encountered.       */
#define ELOOP           3485 /*  A loop exists in the symbolic links.    */
#define ENAMETOOLONG    3486 /*  A path name is too long.                */
#define ENOLCK          3487 /*  No locks available                      */
#define ENOTEMPTY       3488 /*  Directory not empty.                    */
#define ENOSYSRSC       3489 /*  System resources not available to compl */
#define ECONVERT        3490 /*  Conversion error.                       */
#define E2BIG           3491 /*  Argument list too long.                 */
#define EILSEQ          3492 /*  Conversion stopped due to input charact */
#define ESOFTDAMAGE     3497 /* Object has soft damage.                  */
#define ENOTENROLL      3498 /*  User not enrolled in system distributio */
#define EOFFLINE        3499 /*  Object is suspended.                    */
#define EROOBJ          3500 /* Object is a read only object.            */
#define ELOCKED         3506 /* Area being read from or written to is lo */
#define EFBIG           3507 /* Object too large.                        */
#define EIDRM           3509 /* The semaphore, shared memory, or message */
#define ENOMSG          3510 /* The queue does not contain a message of  */
#define EFILECVT        3511 /* File ID conversion of a directory failed */
#define EBADFID         3512 /* A File ID could not be assigned when lin */
#define ESTALE          3513 /* A File ID could not be assigned when lin */
#define ESRCH           3515 /* No such process.                         */
#define ENOTSIGINIT     3516 /* Process not enabled for signals.         */
#define ECHILD          3517 /* No child process.                        */
#define ETOOMANYREFS    3523 /* The operation would have exceeded the ma */
#define ENOTSAFE        3524 /* Function not allowed.                    */
#define EOVERFLOW       3525 /* Object is too large to process.          */
#define EJRNDAMAGE      3526 /* Journal damaged.                         */
#define EJRNINACTIVE    3527 /* Journal inactive.                        */
#define EJRNRCVSPC      3528 /* Journal space or system storage error.   */
#define EJRNRMT         3529 /* Journal is remote.                       */
#define ENEWJRNRCV      3530 /* New journal receiver is needed.          */
#define ENEWJRN         3531 /* New journal is needed.                   */
#define EJOURNALED      3532 /* Object already journaled.                */
#define EJRNENTTOOLONG  3533 /* Entry too large to send.                 */
#define EDATALINK       3534 /* Object is a Datalink object.             */
#define ENOTAVAIL       3535 /* Independent ASP is not available         */
#define ENOTTY          3536 /* Inappropriate IO control operation       */
#define EFBIG2          3540 /* Write or truncate past file size         */
#define ETXTBSY         3543 /* Text file busy                           */
#define EASPGRPNOTSET   3544 /* ASP group not set for thread             */
#define ERESTART        3545 /* System call can be restarted             */
#define ESCANFAILURE    3546 /* Object marked as scan failure            */

#define errno (*__errno())

#pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __errno_h   */
