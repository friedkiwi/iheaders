/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-CX2                                                      */
/*     5716-CX4                                                      */
/*     5716-CX5                                                      */
/*     5799-GDW                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1991, 2005                                */
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
#ifndef   __ifs_h
  #define __ifs_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: ifs.h                                           */
/*                                                                   */
/* This header contains the declarations and definitions used by     */
/* the standard I/O functions that use the POSIX IFS stream IO       */
/* system support.                                                   */
/* ================================================================= */
#ifndef   __stdio_h
  #include <stdio.h>
#endif

#ifdef __IFS_IO__
  #ifndef __wctype_h
    #include <wctype.h>
  #endif

  #include <qp0lstdi.h>

  #pragma datamodel(P128)

  struct __file;
  typedef int __GETCFUNC(struct __file *);
  typedef int __PUTCFUNC(int, struct __file *);
  struct __file      /* visible portion of File Control Block */
      {
      unsigned char  *bufPtr;
      long int        countIn;
      long int        countOut;
      __GETCFUNC      *__fcbgetc;
      __PUTCFUNC      *__fcbputc;
      char           **stdfile;
      };

  typedef struct FILE
     {
     struct __file *fp;
     } FILE;

  #define __FILE 1

  /* Data management file structure which is used for DSM session IO */
#ifndef __DM_FILE
#define __DM_FILE
  typedef struct DM_FILE {
    char           __reserved1[192];
    int            __buflen;
    char           __reserved2[28];
    unsigned char *__bufptr;
    int            __apprrn;
    int            __bufidx;
    int            __lstidx;
    int            __efflen;
    char           __reserved3[12];
    short          __flags1;
    short          __flags2;
    char           __flags3;
    char           __flags4;
    char           __reserved4[61];
    char           __flags5;
  } DM_FILE;
#endif

  struct __fpos_t
    {
#if !defined(_LARGE_FILES)
    long int __fpos_elem[8];
#else
    long long int __fpos_elem[8];
#endif
    };

  typedef struct __fpos_t fpos_t;
#if defined(_LARGE_FILE_API)
  struct __fpos64_t
    {
    long long int __fpos64_elem[8];
    };
  typedef struct __fpos64_t fpos64_t;
#endif

  void       clearerr(FILE *);
  int        fclose(FILE *);
  int        feof(FILE *);
  int        ferror(FILE *);
  int        fflush(FILE *);
  int        fgetc(FILE *);
  int        fgetpos(FILE *,  fpos_t *);
  char      *fgets(char *, int, FILE *);
  FILE      *fopen(const  char *, const  char *);
#ifdef _LARGE_FILE_API
  FILE      *fopen64(const  char *, const  char *);
  FILE      *freopen64(const  char *, const  char *, FILE *);
  int        fsetpos64(FILE *, const fpos64_t *);
  FILE      *tmpfile64(void);
  int        fgetpos64(FILE *,  fpos64_t *);
  off64_t    ftello64(FILE *);
  int        fseeko64(FILE *, off64_t, int);
#endif
  int        fputc(int, FILE *);
  int        fputs(const  char *, FILE *);
  size_t     fread(void *, size_t, size_t, FILE *);
  FILE      *freopen(const  char *, const  char *, FILE *);
  int        fseek(FILE *, long int, int);
  int        fseeko(FILE *, off_t, int);
  off_t      ftello(FILE *);
  int        fsetpos(FILE *, const fpos_t *);
  long int   ftell(FILE *);
  size_t     fwrite(const  void *, size_t, size_t, FILE *);
  char      *gets(char *);
  void       perror(const  char *);
  int        puts(const  char *);
  int        remove(const  char *);
  void       rewind(FILE *);
  void       setbuf(FILE *,  char *);
  int        setvbuf(FILE *, char *, int, size_t);
  FILE      *tmpfile(void);
  int        ungetc(int, FILE *);
  #if ( defined(__LLP64_IFC__) && \
          ( defined(__VALIST64__)  || (__OS400_TGTVRM__ >= 530)))
      /* the 64-bit pointer interface                      */
     int      vsprintf(char *__ptr64, const char *__ptr64, va_list);
     int      vfprintf(FILE *__ptr64, const  char *__ptr64, va_list);
     int      vprintf(const  char *__ptr64, va_list);
  #else
      /* the 128-bit pointer interface                     */
     int        vfprintf(FILE *, const  char *, va_list);
     int        vprintf(const  char *, va_list);
     int        vsprintf(char *, const  char *, va_list);
  #endif
  FILE      *fdopen(int, const char *);
  int        fileno(FILE *);
  #if (__OS400_TGTVRM__>=530)
    #if !defined(__LLP64_IFC__)
      int      vfscanf(FILE *, const  char *, va_list);
      int      vscanf(const  char *, va_list);
      int      vsscanf(const  char *, const  char *, va_list);
    #else
      int      vfscanf(FILE *__ptr64, const  char *__ptr64, va_list);
      int      vscanf(const  char *__ptr64, va_list);
      int      vsscanf(const  char *__ptr64, const  char *__ptr64,
                          va_list);
    #endif
  #endif

 #ifndef __cplusplus_nomacro__
  int        getc(FILE *);
  int        getchar(void);
  int        putc(int, FILE *);
  int        putchar(int);
 #endif

 #ifdef __POSIX_LOCALE__
  #if defined(__UCS2__) || defined(__UTF32__)
    FILE * wfopen(const wchar_t *,const wchar_t *);
    #ifdef _LARGE_FILE_API
        FILE * wfopen64(const wchar_t *,const wchar_t *);
    #endif
  #endif

  #if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__))
      /* the 64-bit pointer interface                      */
    int   vfwprintf(FILE *__ptr64, const wchar_t *__ptr64,
                    va_list);
    int   vwprintf(const wchar_t *__ptr64, va_list);
    int   vfwscanf(FILE *__ptr64, const wchar_t *__ptr64, va_list);
    int   vwscanf(const wchar_t *__ptr64, va_list);
  #else
      /* the 128-bit pointer interface                     */
    int   vfwprintf(FILE *, const wchar_t *, va_list);
    int   vwprintf(const wchar_t *, va_list);
    #if (__OS400_TGTVRM__ >= 530)
      int   vfwscanf(FILE *, const wchar_t *, va_list);
      int   vwscanf(const wchar_t *, va_list);
    #endif
  #endif
 #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
     (__OS400_TGTVRM__ >= 540))
   #pragma datamodel(LLP64)
 #endif
   int      fwprintf(FILE *, const wchar_t *, ...);
   int      wprintf(const wchar_t *, ...);
   int      fwscanf(FILE *, const wchar_t *, ...);
   int      wscanf(const wchar_t *, ...);
 #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
     (__OS400_TGTVRM__ >= 540))
   #pragma datamodel(pop)
 #endif
  wint_t  fgetwc(FILE *);
  wchar_t *fgetws(wchar_t *, int, FILE *);
  wint_t  fputwc(wchar_t, FILE *);
  int     fputws (const wchar_t *, FILE *);
  wint_t  getwc(FILE *);
  wint_t  getwchar(void);
  wint_t  putwc(wchar_t, FILE *);
  wint_t  putwchar(wchar_t);
  wint_t  ungetwc(wint_t, FILE *);
  int     fwide(FILE *, int);
 #endif /* __POSIX_LOCALE__ */

 #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
     (__OS400_TGTVRM__ >= 540))
   #pragma datamodel(LLP64)
 #endif
   int      sscanf(const  char *, const  char *, ...);
   int      sprintf(char *, const  char *, ...);
   int      printf(const  char *, ...);
   int      fprintf(FILE *, const  char *, ...);
   int      scanf(const  char *, ...);
   int      fscanf(FILE *, const  char *, ...);
 #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
     (__OS400_TGTVRM__ >= 540))
   #pragma datamodel(pop)
 #endif
  char      *tmpnam(char *);

  #if defined (__EXTENDED__) && (__OS400_TGTVRM__>=520)
   #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
     (__OS400_TGTVRM__ >= 540))
      #pragma datamodel(LLP64)
   #endif
     int snprintf(char *, size_t, const  char *, ...);
   #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
     (__OS400_TGTVRM__ >= 540))
     #pragma datamodel(pop)
   #endif
    #if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__))
      int        vsnprintf(char *__ptr64, size_t, const  char *__ptr64,
                       va_list);
    #else
      int        vsnprintf(char *, size_t, const  char *, va_list);
  #endif
 #endif

  extern FILE* stdout;
  extern FILE* stdin;
  extern FILE* stderr;

  extern FILE* _C_IFS_stdout;
  extern FILE* _C_IFS_stdin;
  extern FILE* _C_IFS_stderr;

  #define __IFS_getc(p)     (fgetc(p))

  #define __IFS_putc(c, p)  (fputc(c, p))

  #ifndef __cplusplus_nomacro__

    #define getc(p)    __IFS_getc(p)
    #define getchar()  __IFS_getc(_C_IFS_stdin)
    #define putc(c, p) __IFS_putc(c, p)
    #define putchar(c) __IFS_putc((c), _C_IFS_stdout)

  #else

    inline int getc(FILE *p) {
      return __IFS_getc(p);
    }

    inline int getchar(void) {
      return __IFS_getc(_C_IFS_stdin);
    }

    inline int putc(int c, FILE *p) {
      return __IFS_putc(c, p);
    }

    inline int putchar(int c) {
      return __IFS_putc((c), _C_IFS_stdout);
    }

  #endif /* ifndef __cplusplus_nomacro__ */

  /* Defines for the fldata function */
  /* Values for __openmode */
  #define  __TEXT       0
  #define  __BINARY     1
  #define  __RECORD     2
  #define  __HFS        9

  /* Value's for __modeflag */
  #define  __READ       1
  #define  __WRITE      2
  #define  __APPEND     4
  #define  __UPDATE     8

  /* Defines for the  __last_op field in the FILE structure */
  #define __IFS_OPEN           601
  #define __IFS_CLOSE          602
  #define __IFS_READ           603
  #define __IFS_WRITE          604
  #define __IFS_LSEEK          605
  #define __IFS_FSTAT          606

  #define __C_TRUNCATE         60
  #define __C_FCBCHECK         61
  #define __C_DBCS_TRUNCATE    62
  #define __C_DBCS_SO_TRUNCATE 63
  #define __C_DBCS_SI_TRUNCATE 64
  #define __C_DBCS_UNEVEN      65
  #define __C_CANNOT_EXTEND    66

  #define __NOSEEK_REWIND      700
  #define EOF          (-1)

  /* Mapping of C stream IO functions to IFS version */
  #pragma map ( fclose,   "_C_IFS_fclose")
  #ifdef __POSIX_LOCALE__
   #pragma map ( fwide,    "_C_IFS_fwide")
  #endif
  #pragma map ( stdout,   "_C_IFS_stdout")
  #pragma map ( stdin,    "_C_IFS_stdin")
  #pragma map ( stderr,   "_C_IFS_stderr")
  #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
   #pragma map ( fdopen,   "_C_NEU_IFS_fdopen")
   #pragma map ( clearerr, "_C_NEU_IFS_clearerr")
   #pragma map ( feof,     "_C_NEU_IFS_feof")
   #pragma map ( ferror,   "_C_NEU_IFS_ferror")
   #pragma map ( fflush,   "_C_NEU_IFS_fflush")
   #pragma map ( fgetc,    "_C_NEU_IFS_fgetc")
   #pragma map ( fgets,    "_C_NEU_IFS_fgets")
   #pragma map ( fputc,    "_C_NEU_IFS_fputc")
   #pragma map ( fputs,    "_C_NEU_IFS_fputs")
   #pragma map ( fread,    "_C_NEU_IFS_fread")
   #pragma map ( fseek,    "_C_NEU_IFS_fseek")
   #pragma map ( ftell,    "_C_NEU_IFS_ftell")
   #pragma map ( fwrite,   "_C_NEU_IFS_fwrite")
   #pragma map ( gets,     "_C_NEU_IFS_gets")
   #pragma map ( puts,     "_C_NEU_IFS_puts")
   #pragma map ( rewind,   "_C_NEU_IFS_rewind")
   #pragma map ( setbuf,   "_C_NEU_IFS_setbuf")
   #pragma map ( setvbuf,  "_C_NEU_IFS_setvbuf")
   #pragma map ( ungetc,   "_C_NEU_IFS_ungetc")
   #pragma map ( perror,   "_C_NEU_IFS_perror")
   #pragma map ( remove,   "_C_NEU_IFS_remove")
   #pragma map ( tmpnam,   "_C_NEU_IFS_tmpnam")
  #else
   #pragma map ( clearerr, "_C_IFS_clearerr")
   #pragma map ( feof,     "_C_IFS_feof")
   #pragma map ( ferror,   "_C_IFS_ferror")
   #pragma map ( fflush,   "_C_IFS_fflush")
   #pragma map ( fgetc,    "_C_IFS_fgetc")
   #pragma map ( fgets,    "_C_IFS_fgets")
   #pragma map ( fputc,    "_C_IFS_fputc")
   #pragma map ( fputs,    "_C_IFS_fputs")
   #pragma map ( fread,    "_C_IFS_fread")
   #pragma map ( fseek,    "_C_IFS_fseek")
   #pragma map ( ftell,    "_C_IFS_ftell")
   #pragma map ( fwrite,   "_C_IFS_fwrite")
   #pragma map ( gets,     "_C_IFS_gets")
   #pragma map ( puts,     "_C_IFS_puts")
   #pragma map ( rewind,   "_C_IFS_rewind")
   #pragma map ( setbuf,   "_C_IFS_setbuf")
   #pragma map ( setvbuf,  "_C_IFS_setvbuf")
   #pragma map ( ungetc,   "_C_IFS_ungetc")
   #pragma map ( perror,   "_C_IFS_perror")
   #pragma map ( remove,   "_C_IFS_remove")
   #pragma map ( tmpnam,   "_C_IFS_tmpnam")
  #endif

#ifndef __cplusplus_nomacro__
  #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
       #pragma map ( getc,     "_C_NEU_IFS_getc")
       #pragma map ( getchar,  "_C_NEU_IFS_getchar")
       #pragma map ( putc,     "_C_NEU_IFS_putc")
       #pragma map ( putchar,  "_C_NEU_IFS_putchar")
  #else
       #pragma map ( getc,     "_C_IFS_getc")
       #pragma map ( getchar,  "_C_IFS_getchar")
       #pragma map ( putc,     "_C_IFS_putc")
       #pragma map ( putchar,  "_C_IFS_putchar")
  #endif
#endif

#ifndef _LARGE_FILES
     #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
      #pragma map ( fgetpos,  "_C_NEU_IFS_fgetpos")
      #pragma map ( fopen,    "_C_NEU_IFS_fopen")
      #pragma map ( freopen,  "_C_NEU_IFS_freopen")
      #pragma map ( tmpfile,  "_C_NEU_IFS_tmpfile")
      #pragma map ( fseeko,   "_C_NEU_IFS_fseeko")
      #pragma map ( ftello,   "_C_NEU_IFS_ftello")
      #pragma map ( fsetpos,  "_C_NEU_IFS_fsetpos")
     #else
      #pragma map ( fgetpos,  "_C_IFS_fgetpos")
      #pragma map ( fopen,    "_C_IFS_fopen")
      #pragma map ( freopen,  "_C_IFS_freopen")
      #pragma map ( tmpfile,  "_C_IFS_tmpfile")
      #pragma map ( fsetpos,  "_C_IFS_fsetpos")
     #endif
#else  /* large file is on  */
     #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
      #pragma map ( fgetpos,  "_C_NEU_IFS_fgetpos64")
      #pragma map ( fopen,    "_C_NEU_IFS_fopen64")
      #pragma map ( freopen,  "_C_NEU_IFS_freopen64")
      #pragma map ( tmpfile,  "_C_NEU_IFS_tmpfile64")
      #pragma map ( fseeko,   "_C_NEU_IFS_fseeko64")
      #pragma map ( ftello,   "_C_NEU_IFS_ftello64")
      #pragma map ( fsetpos,  "_C_NEU_IFS_fsetpos64")
     #else
      #pragma map ( fgetpos,  "fgetpos64")
      #pragma map ( fopen,    "fopen64")
      #pragma map ( freopen,  "freopen64")
      #pragma map ( tmpfile,  "tmpfile64")
      #pragma map ( fseeko,   "fseeko64")
      #pragma map ( ftello,   "ftello64")
      #pragma map ( fsetpos,  "fsetpos64")
     #endif
#endif  /* _LARGE_FILES  */

#if defined(_LARGE_FILE_API)
  #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
     #pragma map ( fopen64,   "_C_NEU_IFS_fopen64")
     #pragma map ( freopen64, "_C_NEU_IFS_freopen64")
     #pragma map ( fsetpos64, "_C_NEU_IFS_fsetpos64")
     #pragma map ( tmpfile64, "_C_NEU_IFS_tmpfile64")
     #pragma map ( fgetpos64, "_C_NEU_IFS_fgetpos64")
     #pragma map ( ftello64,  "_C_NEU_IFS_ftello64")
     #pragma map ( fseeko64,  "_C_NEU_IFS_fseeko64")
  #endif
#endif

  #ifdef __UCS2__
    #ifndef _LARGE_FILES
     #pragma map ( wfopen,   "_C_IFS_wfopen")
    #else
     #pragma map ( wfopen,   "wfopen64")
    #endif
    #if ( defined(__LLP64_IFC__) && \
          ( defined(__VALIST64__)  || (__OS400_TGTVRM__ >= 530)))
      #pragma map ( vfprintf, "_C_UCS2_vfprintf_ts64")
      #pragma map ( vprintf,  "_C_UCS2_vprintf_ts64")
      #pragma map ( vsprintf, "_C_UCS2_vsprintf_ts64")
    #else
      #pragma map ( vfprintf, "_C_UCS2_vfprintf")
      #pragma map ( vprintf,  "_C_UCS2_vprintf")
      #pragma map ( vsprintf, "_C_UCS2_vsprintf")
    #endif
    #if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__))
      #pragma map ( vfwprintf,"_C_UCS2_vfwprintf_ts64")
      #pragma map ( vwprintf, "_C_UCS2_vwprintf_ts64")
      #pragma map ( vfscanf, "_C_UCS2_vfscanf_ts64")
      #pragma map ( vscanf,  "_C_UCS2_vscanf_ts64")
      #pragma map ( vfwscanf,  "_C_UCS2_vfwscanf_ts64")
      #pragma map ( vwscanf,   "_C_UCS2_vwscanf_ts64")
      #pragma map ( vsscanf,  "_C_UCS2_vsscanf_ts64")
    #else
      #pragma map ( vfwprintf,"_C_UCS2_vfwprintf")
      #pragma map ( vwprintf, "_C_UCS2_vwprintf")
      #if (__OS400_TGTVRM__>=530)
        #pragma map ( vfscanf, "_C_UCS2_vfscanf")
        #pragma map ( vscanf,  "_C_UCS2_vscanf")
        #pragma map ( vfwscanf,  "_C_UCS2_vfwscanf")
        #pragma map ( vwscanf,   "_C_UCS2_vwscanf")
        #pragma map ( vsscanf,  "_C_UCS2_vsscanf")
      #endif
    #endif
    #pragma map ( fgetwc,   "_C_UCS2_fgetwc")
    #pragma map ( fgetws,   "_C_UCS2_fgetws")
    #pragma map ( fputwc,   "_C_UCS2_fputwc")
    #pragma map ( fputws,   "_C_UCS2_fputws")
    #pragma map ( getwc,    "_C_UCS2_getwc")
    #pragma map ( getwchar, "_C_UCS2_getwchar")
    #pragma map ( putwc,    "_C_UCS2_putwc")
    #pragma map ( putwchar, "_C_UCS2_putwchar")
    #pragma map ( ungetwc,  "_C_UCS2_ungetwc")
    #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
      (__OS400_TGTVRM__ >= 540))
      #pragma map ( sprintf,  "_C_UCS2_sprintf_ts64")
      #pragma map ( fprintf,  "_C_UCS2_fprintf_ts64")
      #pragma map ( printf,   "_C_UCS2_printf_ts64")
      #pragma map ( fwprintf, "_C_UCS2_fwprintf_ts64")
      #pragma map ( wprintf,  "_C_UCS2_wprintf_ts64")
      #pragma map ( fscanf,   "_C_UCS2_fscanf_ts64")
      #pragma map ( scanf,    "_C_UCS2_scanf_ts64")
      #pragma map ( fwscanf,  "_C_UCS2_fwscanf_ts64")
      #pragma map ( wscanf,   "_C_UCS2_wscanf_ts64")
      #pragma map ( sscanf,   "_C_UCS2_sscanf_ts64")
    #else
      #pragma map ( sprintf,  "_C_UCS2_sprintf")
      #pragma map ( fprintf,  "_C_UCS2_fprintf")
      #pragma map ( printf,   "_C_UCS2_printf")
      #pragma map ( fwprintf, "_C_UCS2_fwprintf")
      #pragma map ( wprintf,  "_C_UCS2_wprintf")
      #pragma map ( fscanf,   "_C_UCS2_fscanf")
      #pragma map ( scanf,    "_C_UCS2_scanf")
      #pragma map ( fwscanf,  "_C_UCS2_fwscanf")
      #pragma map ( wscanf,   "_C_UCS2_wscanf")
      #pragma map ( sscanf,   "_C_UCS2_sscanf")
    #endif
    #if defined (__EXTENDED__) && (__OS400_TGTVRM__>=520)
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
        (__OS400_TGTVRM__ >= 540))
        #pragma map ( snprintf, "_C_UCS2_snprintf_ts64")
      #else
        #pragma map ( snprintf, "_C_UCS2_snprintf")
      #endif
      #if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__))
        #pragma map ( vsnprintf, "_C_UCS2_vsnprintf_ts64")
      #else
        #pragma map ( vsnprintf, "_C_UCS2_vsnprintf")
      #endif
   #endif
  #elif defined(__UTF32__)  /* UTF32 */
    #ifndef _LARGE_FILES
     #pragma map ( wfopen,   "_C_UTF_IFS_wfopen")
    #else
     #pragma map ( wfopen,   "_C_UTF_IFS_wfopen64")
    #endif
    #ifdef _LARGE_FILE_API
     #pragma map ( wfopen64, "_C_UTF_IFS_wfopen64")
    #endif
    #if (defined(__LLP64_IFC__))
      #pragma map ( vfprintf, "_C_NEU_IFS_vfprintf_ts64")
      #pragma map ( vprintf,  "_C_NEU_IFS_vprintf_ts64")
      #pragma map ( vfwprintf,"_C_UTF_IFS_vfwprintf_ts64")
      #pragma map ( vwprintf, "_C_UTF_IFS_vwprintf_ts64")
      #pragma map ( vsprintf, "_C_NEU_vsprintf_ts64")
      #pragma map ( vfscanf,  "_C_NEU_IFS_vfscanf_ts64")
      #pragma map ( vscanf,   "_C_NEU_IFS_vscanf_ts64")
      #pragma map ( vfwscanf, "_C_UTF_IFS_vfwscanf_ts64")
      #pragma map ( vwscanf,  "_C_UTF_IFS_vwscanf_ts64")
      #pragma map ( vsscanf,  "_C_NEU_vsscanf_ts64")
    #else
      #pragma map ( vfprintf, "_C_NEU_IFS_vfprintf")
      #pragma map ( vprintf,  "_C_NEU_IFS_vprintf")
      #pragma map ( vfwprintf,"_C_UTF_IFS_vfwprintf")
      #pragma map ( vwprintf, "_C_UTF_IFS_vwprintf")
      #pragma map ( vsprintf, "_C_NEU_vsprintf")
      #pragma map ( vfscanf,  "_C_NEU_IFS_vfscanf")
      #pragma map ( vscanf,   "_C_NEU_IFS_vscanf")
      #pragma map ( vfwscanf, "_C_UTF_IFS_vfwscanf")
      #pragma map ( vwscanf,  "_C_UTF_IFS_vwscanf")
      #pragma map ( vsscanf,  "_C_NEU_vsscanf")
    #endif
    #pragma map ( fgetwc,   "_C_UTF_IFS_fgetwc")
    #pragma map ( fgetws,   "_C_UTF_IFS_fgetws")
    #pragma map ( fputwc,   "_C_UTF_IFS_fputwc")
    #pragma map ( fputws,   "_C_UTF_IFS_fputws")
    #pragma map ( getwc,    "_C_UTF_IFS_getwc")
    #pragma map ( getwchar, "_C_UTF_IFS_getwchar")
    #pragma map ( putwc,    "_C_UTF_IFS_putwc")
    #pragma map ( putwchar, "_C_UTF_IFS_putwchar")
    #pragma map ( ungetwc,  "_C_UTF_IFS_ungetwc")
    #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
      (__OS400_TGTVRM__ >= 540))
      #pragma map ( sprintf,  "_C_NEU_sprintf_ts64")
      #pragma map ( fprintf,  "_C_NEU_IFS_fprintf_ts64")
      #pragma map ( printf,   "_C_NEU_IFS_printf_ts64")
      #pragma map ( fwprintf, "_C_UTF_IFS_fwprintf_ts64")
      #pragma map ( wprintf,  "_C_UTF_IFS_wprintf_ts64")
      #pragma map ( fscanf,   "_C_NEU_IFS_fscanf_ts64")
      #pragma map ( scanf,    "_C_NEU_IFS_scanf_ts64")
      #pragma map ( fwscanf,  "_C_UTF_IFS_fwscanf_ts64")
      #pragma map ( wscanf,   "_C_UTF_IFS_wscanf_ts64")
      #pragma map ( sscanf,   "_C_NEU_sscanf_ts64")
    #else
      #pragma map ( sscanf,   "_C_NEU_sscanf")
      #pragma map ( fwscanf,  "_C_UTF_IFS_fwscanf")
      #pragma map ( wscanf,   "_C_UTF_IFS_wscanf")
      #pragma map ( sprintf,  "_C_NEU_sprintf")
      #pragma map ( fprintf,  "_C_NEU_IFS_fprintf")
      #pragma map ( printf,   "_C_NEU_IFS_printf")
      #pragma map ( fwprintf, "_C_UTF_IFS_fwprintf")
      #pragma map ( wprintf,  "_C_UTF_IFS_wprintf")
      #pragma map ( fscanf,   "_C_NEU_IFS_fscanf")
      #pragma map ( scanf,    "_C_NEU_IFS_scanf")
    #endif

    #if defined (__EXTENDED__)
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
        (__OS400_TGTVRM__ >= 540))
        #pragma map ( snprintf, "_C_NEU_snprintf_ts64")
      #else
        #pragma map ( snprintf, "_C_NEU_snprintf")
      #endif
      #if (defined(__LLP64_IFC__))
        #pragma map ( vsnprintf, "_C_NEU_vsnprintf_ts64")
      #else
        #pragma map ( vsnprintf, "_C_NEU_vsnprintf")
      #endif
    #endif
  #else  /* Non-Unicode */
    #if defined(__CCSID_NEUTRAL__)
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
        (__OS400_TGTVRM__ >= 540))
        #pragma map ( fprintf,  "_C_NEU_IFS_fprintf_ts64")
        #pragma map ( fscanf,   "_C_NEU_IFS_fscanf_ts64")
        #pragma map ( printf,   "_C_NEU_IFS_printf_ts64")
        #pragma map ( scanf,    "_C_NEU_IFS_scanf_ts64")
      #else
        #pragma map ( fprintf,  "_C_NEU_IFS_fprintf")
        #pragma map ( fscanf,   "_C_NEU_IFS_fscanf")
        #pragma map ( printf,   "_C_NEU_IFS_printf")
        #pragma map ( scanf,    "_C_NEU_IFS_scanf")
      #endif
      #if (defined(__LLP64_IFC__))
        #pragma map ( vfprintf, "_C_NEU_IFS_vfprintf_ts64")
        #pragma map ( vprintf,  "_C_NEU_IFS_vprintf_ts64")
        #pragma map ( vfscanf,  "_C_NEU_IFS_vfscanf_ts64")
        #pragma map ( vscanf,   "_C_NEU_IFS_vscanf_ts64")
      #else
        #pragma map ( vfprintf, "_C_NEU_IFS_vfprintf")
        #pragma map ( vprintf,  "_C_NEU_IFS_vprintf")
        #pragma map ( vfscanf,  "_C_NEU_IFS_vfscanf")
        #pragma map ( vscanf,   "_C_NEU_IFS_vscanf")
      #endif
    #else  /* Non-Unicode Non-CCSID_NEUTRAL  */
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
        (__OS400_TGTVRM__ >= 540))
        #pragma map ( fprintf,  "_C_IFS_fprintf_ts64")
        #pragma map ( fscanf,   "_C_IFS_fscanf_ts64")
        #pragma map ( printf,   "_C_IFS_printf_ts64")
        #pragma map ( scanf,    "_C_IFS_scanf_ts64")
      #else
        #pragma map ( fprintf,  "_C_IFS_fprintf")
        #pragma map ( fscanf,   "_C_IFS_fscanf")
        #pragma map ( printf,   "_C_IFS_printf")
        #pragma map ( scanf,    "_C_IFS_scanf")
      #endif
      #if ( defined(__LLP64_IFC__) && \
          ( defined(__VALIST64__)  || (__OS400_TGTVRM__ >= 530)))
        #pragma map ( vfprintf, "_C_IFS_vfprintf_ts64")
        #pragma map ( vprintf,  "_C_IFS_vprintf_ts64")
      #else
        #pragma map ( vfprintf, "_C_IFS_vfprintf")
        #pragma map ( vprintf,  "_C_IFS_vprintf")
      #endif
      #if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__))
        #ifdef __POSIX_LOCALE__
          #pragma map ( vfwprintf,"_C_IFS_vfwprintf_ts64")
          #pragma map ( vwprintf, "_C_IFS_vwprintf_ts64")
        #endif
        #pragma map ( vfscanf, "_C_IFS_vfscanf_ts64")
        #pragma map ( vscanf,  "_C_IFS_vscanf_ts64")
      #else
        #ifdef __POSIX_LOCALE__
          #pragma map ( vfwprintf,"_C_IFS_vfwprintf")
          #pragma map ( vwprintf, "_C_IFS_vwprintf")
        #endif
        #if (__OS400_TGTVRM__>=530)
          #pragma map ( vfscanf, "_C_IFS_vfscanf")
          #pragma map ( vscanf,  "_C_IFS_vscanf")
        #endif
      #endif
    #endif  /* Non neutral, non unicode  */
    #ifdef __POSIX_LOCALE__
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
          (__OS400_TGTVRM__ >= 540))
        #pragma map ( fwprintf, "_C_IFS_fwprintf_ts64")
        #pragma map ( fwscanf,  "_C_IFS_fwscanf_ts64")
        #pragma map ( wprintf,  "_C_IFS_wprintf_ts64")
        #pragma map ( wscanf,   "_C_IFS_wscanf_ts64")
      #else
        #pragma map ( fwprintf, "_C_IFS_fwprintf")
        #pragma map ( fwscanf,  "_C_IFS_fwscanf")
        #pragma map ( wprintf,  "_C_IFS_wprintf")
        #pragma map ( wscanf,   "_C_IFS_wscanf")
      #endif
      #if (__OS400_TGTVRM__>=530)
        #if (defined(__LLP64_IFC__))
          #pragma map ( vfwscanf,  "_C_IFS_vfwscanf_ts64")
          #pragma map ( vwscanf,   "_C_IFS_vwscanf_ts64")
        #else
          #pragma map ( vfwscanf,  "_C_IFS_vfwscanf")
          #pragma map ( vwscanf,   "_C_IFS_vwscanf")
        #endif
      #endif
      #pragma map ( fgetwc,   "_C_IFS_fgetwc")
      #pragma map ( fgetws,   "_C_IFS_fgetws")
      #pragma map ( fputwc,   "_C_IFS_fputwc")
      #pragma map ( fputws,   "_C_IFS_fputws")
      #pragma map ( getwc,    "_C_IFS_getwc")
      #pragma map ( getwchar, "_C_IFS_getwchar")
      #pragma map ( putwc,    "_C_IFS_putwc")
      #pragma map ( putwchar, "_C_IFS_putwchar")
      #pragma map ( ungetwc,  "_C_IFS_ungetwc")
    #endif
    #if defined(__CCSID_NEUTRAL__)
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
        (__OS400_TGTVRM__ >= 540))
        #pragma map ( sprintf,  "_C_NEU_sprintf_ts64")
        #pragma map ( sscanf,   "_C_NEU_sscanf_ts64")
      #else
        #pragma map ( sprintf,  "_C_NEU_sprintf")
        #pragma map ( sscanf,   "_C_NEU_sscanf")
      #endif
      #if (defined(__LLP64_IFC__))
        #pragma map ( vsprintf, "_C_NEU_vsprintf_ts64")
        #pragma map ( vsscanf,  "_C_NEU_vsscanf_ts64")
      #else
        #pragma map ( vsprintf, "_C_NEU_vsprintf")
        #pragma map ( vsscanf,  "_C_NEU_vsscanf")
      #endif

      #if defined (__EXTENDED__)
        #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
          (__OS400_TGTVRM__ >= 540))
          #pragma map ( snprintf, "_C_NEU_snprintf_ts64")
        #else
          #pragma map ( snprintf, "_C_NEU_snprintf")
        #endif
        #if (defined(__LLP64_IFC__))
          #pragma map ( vsnprintf, "_C_NEU_vsnprintf_ts64")
        #else
          #pragma map ( vsnprintf, "_C_NEU_vsnprintf")
        #endif
      #endif
    #elif ((__OS400_TGTVRM__ >= 530) && defined(__POSIX_LOCALE__))
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
        (__OS400_TGTVRM__ >= 540))
        #pragma map ( sprintf,  "_C_PSX_sprintf_ts64")
        #pragma map ( sscanf,   "_C_PSX_sscanf_ts64")
      #else
        #pragma map ( sprintf,  "_C_PSX_sprintf")
        #pragma map ( sscanf,   "_C_PSX_sscanf")
      #endif
      #if (defined(__LLP64_IFC__))
        #pragma map ( vsprintf, "_C_PSX_vsprintf_ts64")
        #pragma map ( vsscanf,  "_C_PSX_vsscanf_ts64")
      #else
        #pragma map ( vsprintf, "_C_PSX_vsprintf")
        #pragma map ( vsscanf,  "_C_PSX_vsscanf")
      #endif

      #if defined (__EXTENDED__)
        #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
          (__OS400_TGTVRM__ >= 540))
          #pragma map ( snprintf, "_C_PSX_snprintf_ts64")
        #else
          #pragma map ( snprintf, "_C_PSX_snprintf")
        #endif
        #if (defined(__LLP64_IFC__))
          #pragma map ( vsnprintf, "_C_PSX_vsnprintf_ts64")
        #else
          #pragma map ( vsnprintf, "_C_PSX_vsnprintf")
        #endif
      #endif
    #elif (defined(__LLP64_IFC__))
      #if (defined(__VALIST64__) || __OS400_TGTVRM__ >= 530)
         #pragma map ( vsprintf, "_C_vsprintf_ts64")
         #if (defined (__EXTENDED__) && (__OS400_TGTVRM__ >= 530))
           #pragma map ( vsnprintf, "_C_vsnprintf_ts64")
         #endif
      #endif
      #if (__OS400_TGTVRM__ >= 530)
         #pragma map (vsscanf, "_C_vsscanf_ts64")
      #endif
      #if (__OS400_TGTVRM__ >= 540) && defined(__FORMAT64__)
         #pragma map (sprintf, "_C_sprintf_ts64")
         #pragma map (sscanf, "_C_sscanf_ts64")
         #if defined (__EXTENDED__)
           #pragma map (snprintf, "_C_snprintf_ts64")
         #endif
      #endif
    #endif
   #endif  /* Non unicode  */

#pragma datamodel(pop)

#endif  /* __IFS_IO__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif  /* __ifs_h     */
