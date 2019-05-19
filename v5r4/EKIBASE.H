/*
 *                               PrintManager
 *
 *  ekibase.h - base data types and macros
 *
 *
 *  PrintManager  (program no. 5688-179)
 *
 *  Version:  1.0
 *  Release:  1.0
 *  Level:    0.0
 *
 *  Restricted Materials of IBM
 *
 *  Copyright (C)
 *    International Business Machines Corporation   1990, 1999
 */


#if !defined (__EKIBASE)

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

#if !defined (VOID)
   #define VOID    void
#endif

#if !defined (APIENTRY)
   #define APIENTRY
   #define EXPENTRY
#endif

#if !defined (FAR)
   #define FAR
   #define NEAR
#endif

typedef unsigned short SHANDLE;
typedef void *LHANDLE;

#if !defined (CHAR)
   #define CHAR    char                /* ch  */
   #define SHORT   short               /* s   */
   #define LONG    long                /* l   */

   typedef unsigned char UCHAR;        /* uch */
   typedef unsigned short USHORT;      /* us  */
   typedef unsigned long ULONG;        /* ul  */

   typedef unsigned char BYTE;         /* b   */

   typedef char   *PSZ;
   typedef char   *NPSZ;

   typedef char   *PCH;
   typedef char   *NPCH;

   typedef BYTE   *PBYTE;
   typedef BYTE   *NPBYTE;

   typedef CHAR   *PCHAR;
   typedef SHORT  *PSHORT;
   typedef LONG   *PLONG;

   typedef UCHAR  *PUCHAR;
   typedef USHORT *PUSHORT;
   typedef ULONG  *PULONG;

   typedef VOID   *PVOID;

   typedef unsigned short BOOL;        /* f   */
   typedef BOOL  *PBOOL;
#endif

#if !defined (FALSE)
   #define FALSE   0
   #define TRUE    1
#endif


/*
 *
 * Useful Helper Macros
 *
 */

#if !defined (MAKETYPE)
   /* Cast any variable to an instance of the specified type.        */
   #define MAKETYPE(v, type)   (*((type  *)&v))
#endif

#if !defined (FIELDOFFSET)
   /* Calculate the byte offset of a field in a structure of type    */
   /* type.                                                          */
   #define FIELDOFFSET(type, field)    ((SHORT)&(((type *)0)->field))
#endif

#if !defined (MAKEULONG)
   /* Combine l & h to form a 32 bit quantity.                       */
   #define MAKEULONG(l, h)  \
      ((ULONG)(((USHORT)(l)) | ((ULONG)((USHORT)(h))) << 16))
   #define MAKELONG(l, h)   ((LONG)MAKEULONG(l, h))
#endif

#if !defined (MAKEUSHORT)
   /* Combine l & h to form a 16 bit quantity.                       */
   #define MAKEUSHORT(l, h)\
      ((((USHORT)(l)) | ((USHORT)(h)) << 8) & 0xFFFF)
   #define MAKESHORT(l, h)  ((SHORT)MAKEUSHORT(l, h))
#endif

#if !defined (LOBYTE)
   /* Extract high and low order parts of 16 or 32 bit quantity.     */
   #define LOBYTE(w)       LOUCHAR(w)
   #define HIBYTE(w)       HIUCHAR(w)
   #define LOUCHAR(w)      ((UCHAR)(w) & 0xff)
   #define HIUCHAR(w)      ((UCHAR)(((USHORT)(w) >> 8) & 0xff))
   #define LOUSHORT(l)     ((USHORT)(l) & 0xffff)
   #define HIUSHORT(l)     ((USHORT)(((ULONG)(l) >> 16) & 0xffff))
#endif


/*
 *
 * Common Error definitions
 *
 */

#if !defined (MAKEERRORID)
   typedef ULONG ERRORID;              /* errid */
   typedef ERRORID  *PERRORID;

   /* Combine severity and error code to produce ERRORID.            */
   #define MAKEERRORID(sev, error) (ERRORID)(MAKEULONG((error), (sev)))

   /* Extract error number from an errorid.                          */
   #define ERRORIDERROR(errid)  (LOUSHORT(errid))

   /* Extract severity from an errorid.                              */
   #define ERRORIDSEV(errid)  (HIUSHORT(errid))
#endif


#if !defined (SEVERITY_NOERROR)        /* Severity codes */
   #define SEVERITY_NOERROR            0x0000      /*  0 */
   #define SEVERITY_WARNING            0x0004      /*  4 */
   #define SEVERITY_ERROR              0x0008      /*  8 */
   #define SEVERITY_SEVERE             0x000C      /* 12 */
   #define SEVERITY_UNRECOVERABLE      0x0010      /* 16 */
#endif




/*
 *
 * Common types used across components
 *
 */


typedef LHANDLE   HAB;                 /* hab - anchor block handle  */
typedef HAB      *PHAB;

typedef USHORT    PID;                 /* pid - process id           */
typedef PID      *PPID;

typedef USHORT    TID;                 /* tid - thread id            */
typedef TID      *PTID;

typedef CHAR      STR8[8];             /* str8                       */
typedef STR8     *PSTR8;

#define __EKIBASE

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif                                 /* __EKIBASE */



