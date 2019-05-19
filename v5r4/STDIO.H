/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-CX2                                                      */
/*     5716-CX4                                                      */
/*     5716-CX5                                                      */
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
#ifndef   __stdio_h
  #define __stdio_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif
/* ================================================================== */
/*  Header File Name: stdio.h                                         */
/*                                                                    */
/*  This header contains the declarations and definitions used by     */
/*  the standard I/O functions.                                       */
/* ================================================================== */

  #pragma datamodel(P128)

  #ifndef __va_list
    #define __va_list
    typedef char *va_list[2];
  #endif

  #ifndef __size_t
    #define __size_t
    typedef unsigned int size_t;
  #endif

  #ifndef  NULL
   #ifdef __cplusplus
    #define NULL 0
   #else
    #define NULL ((void *)0)
   #endif
  #endif

  #ifndef __temp_char_d
    #define __temp_char_d 1
    static char    __temp_char;
  #endif

/* If *IFSIO option is specified on CRTCMOD or CRTBNDC include        */
/* IFS version of stream declaration and definitions                  */

  #ifdef __IFS_IO__
     #include <ifs.h>

  #endif  /* ifdef __IFS_IO__  */
  #ifndef __IFS_IO__
      typedef struct FILE {
        char           __reserved1[192];
        int            __buflen;
        char           __reserved2[20];
        char           __nlchar;
        char           __altnlchar;
        char           __neu_nlchar;
        char           __neu_altnlchar;
        char           __reserved2a[4];
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
      } FILE;

      typedef struct fpos_t {
        int     __reserved[5];
      } fpos_t;
      extern FILE *stderr;
      extern FILE *stdin;
      extern FILE *stdout;
  #endif /* ifndef __IFS_IO__ */

  #if defined (__EXTENDED__)

    /* Major Minor Return Code Structure                              */
    typedef struct _Major_Minor_rc {
      char major_rc[2];
      char minor_rc[2];
    } _Major_Minor_rc;

    typedef long int _SSN_HANDLE_T;

    extern _Major_Minor_rc _C_Maj_Min_rc;

    #define _Maj_Min_rc _C_Maj_Min_rc

    #ifndef __ANSI_NAMES_ONLY__
      #define _fputchar(c) fputc((c), stdout);
    #endif    /* non-ansi extensions */

  #endif /* #if defined (__EXTENDED__)                                */

  #ifndef __IFS_IO__
     void     clearerr(FILE *);
     int      fclose(FILE *);
     int      feof(FILE *);
     int      ferror(FILE *);
     int      fflush(FILE *);
     int      fgetc(FILE *);
     int      fgetpos(FILE *,  fpos_t *);
     char    *fgets(char *, int, FILE *);
     FILE    *fopen(const  char *, const  char *);
     int      fputc(int, FILE *);
     int      fputs(const  char *, FILE *);
     size_t   fread(void *, size_t, size_t, FILE *);
     FILE    *freopen(const  char *, const  char *, FILE *);
     int      fseek(FILE *, long int, int);
     int      fsetpos(FILE *, const fpos_t *);
     long int ftell(FILE *);
     size_t   fwrite(const  void *, size_t, size_t, FILE *);
     int      getc(FILE *);
     int      getchar(void);
     char    *gets(char *);
     void     perror(const  char *);
     int      putc(int, FILE *);
     int      putchar(int);
     int      puts(const  char *);
     int      remove(const  char *);
     int      rename(const  char *, const  char *);
     void     rewind(FILE *);
     void     setbuf(FILE *,  char *);
     int      setvbuf(FILE *, char *, int, size_t);
     #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
         (__OS400_TGTVRM__ >= 540))
        #pragma datamodel(LLP64)
     #endif
       int      printf(const  char *, ...);
       int      sprintf(char *, const  char *, ...);
       int      fprintf(FILE *, const  char *, ...);
       int      scanf(const  char *, ...);
       int      fscanf(FILE *, const  char *, ...);
       int      sscanf(const  char *, const  char *, ...);
     #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
         (__OS400_TGTVRM__ >= 540))
        #pragma datamodel(pop)
     #endif
     FILE    *tmpfile(void);
     char    *tmpnam(char *);
     int      ungetc(int, FILE *);
     #if ( defined(__LLP64_IFC__) && \
          ( defined(__VALIST64__)  || (__OS400_TGTVRM__ >= 530)))
      /* the 64-bit pointer interface                      */
       int      vsprintf(char *__ptr64, const char *__ptr64, va_list);
       int      vfprintf(FILE *__ptr64, const  char *__ptr64, va_list);
       int      vprintf(const  char *__ptr64, va_list);
     #else
        /* the 128-bit pointer interface                     */
       int      vfprintf(FILE *, const  char *, va_list);
       int      vprintf(const  char *, va_list);
       int      vsprintf(char *, const  char *, va_list);
     #endif
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
        /* the 64-bit pointer interface                      */
         int    vsnprintf(char *__ptr64, size_t, const  char *__ptr64,
                        va_list);
       #else
        /* the 128-bit pointer interface                     */
         int    vsnprintf(char *, size_t, const  char *, va_list);
       #endif
     #endif
     #if (__OS400_TGTVRM__>=530)
       #if defined(__LLP64_IFC__)
         int  vfscanf(FILE *__ptr64, const char *__ptr64, va_list);
         int  vscanf(const char *__ptr64, va_list);
         int  vsscanf(const char *__ptr64, const char *__ptr64, va_list);
       #else
         int  vfscanf(FILE *, const  char *, va_list);
         int  vscanf(const  char *, va_list);
         int  vsscanf(const  char *, const  char *, va_list);
       #endif
     #endif

     #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
       #pragma map ( clearerr, "_C_NEU_DM_clearerr")
       #pragma map ( feof,     "_C_NEU_DM_feof")
       #pragma map ( ferror,   "_C_NEU_DM_ferror")
       #pragma map ( fflush,   "_C_NEU_DM_fflush")
       #pragma map ( fgetc,    "_C_NEU_DM_fgetc")
       #pragma map ( fgetpos,  "_C_NEU_DM_fgetpos")
       #pragma map ( fgets,    "_C_NEU_DM_fgets")
       #pragma map ( fopen,    "_C_NEU_DM_fopen")
       #pragma map ( fputc,    "_C_NEU_DM_fputc")
       #pragma map ( fputs,    "_C_NEU_DM_fputs")
       #pragma map ( fread,    "_C_NEU_DM_fread")
       #pragma map ( freopen,  "_C_NEU_DM_freopen")
       #pragma map ( fseek,    "_C_NEU_DM_fseek")
       #pragma map ( fsetpos,  "_C_NEU_DM_fsetpos")
       #pragma map ( ftell,    "_C_NEU_DM_ftell")
       #pragma map ( fwrite,   "_C_NEU_DM_fwrite")
       #pragma map ( getc,     "_C_NEU_DM_getc")
       #pragma map ( getchar,  "_C_NEU_DM_getchar")
       #pragma map ( gets,     "_C_NEU_DM_gets")
       #pragma map ( perror,   "_C_NEU_DM_perror")
       #pragma map ( putc,     "_C_NEU_DM_putc")
       #pragma map ( putchar,  "_C_NEU_DM_putchar")
       #pragma map ( puts,     "_C_NEU_DM_puts")
       #pragma map ( remove,   "_C_NEU_DM_remove")
       #pragma map ( rename,   "_C_NEU_DM_rename")
       #pragma map ( rewind,   "_C_NEU_DM_rewind")
       #pragma map ( setbuf,   "_C_NEU_DM_setbuf")
       #pragma map ( setvbuf,  "_C_NEU_DM_setvbuf")
       #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
           (__OS400_TGTVRM__ >= 540))
         #pragma map ( sprintf,  "_C_NEU_sprintf_ts64")
         #pragma map ( fprintf,  "_C_NEU_DM_fprintf_ts64")
         #pragma map ( printf,   "_C_NEU_DM_printf_ts64")
         #pragma map ( scanf,    "_C_NEU_DM_scanf_ts64")
         #pragma map ( fscanf,   "_C_NEU_DM_fscanf_ts64")
         #pragma map ( sscanf,   "_C_NEU_sscanf_ts64")
       #else
         #pragma map ( printf,   "_C_NEU_DM_printf")
         #pragma map ( sprintf,  "_C_NEU_sprintf")
         #pragma map ( fprintf,  "_C_NEU_DM_fprintf")
         #pragma map ( scanf,    "_C_NEU_DM_scanf")
         #pragma map ( fscanf,   "_C_NEU_DM_fscanf")
         #pragma map ( sscanf,   "_C_NEU_sscanf")
       #endif
       #pragma map ( tmpfile,  "_C_NEU_DM_tmpfile")
       #pragma map ( tmpnam,   "_C_NEU_DM_tmpnam")
       #pragma map ( ungetc,   "_C_NEU_DM_ungetc")
       #if (defined(__LLP64_IFC__))
         #pragma map ( vprintf,  "_C_NEU_DM_vprintf_ts64")
         #pragma map ( vfprintf, "_C_NEU_DM_vfprintf_ts64")
         #pragma map ( vsprintf, "_C_NEU_vsprintf_ts64")
         #pragma map ( vscanf,   "_C_NEU_DM_vscanf_ts64")
         #pragma map ( vfscanf,  "_C_NEU_DM_vfscanf_ts64")
         #pragma map ( vsscanf,  "_C_NEU_vsscanf_ts64")
       #else
         #pragma map ( vprintf,  "_C_NEU_DM_vprintf")
         #pragma map ( vfprintf, "_C_NEU_DM_vfprintf")
         #pragma map ( vsprintf, "_C_NEU_vsprintf")
         #pragma map ( vscanf,   "_C_NEU_DM_vscanf")
         #pragma map ( vfscanf,  "_C_NEU_DM_vfscanf")
         #pragma map ( vsscanf,  "_C_NEU_vsscanf")
       #endif
       #if defined (__EXTENDED__)
         #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
             (__OS400_TGTVRM__ >= 540))
           #pragma map ( snprintf,  "_C_NEU_snprintf_ts64")
         #else
           #pragma map ( snprintf,  "_C_NEU_snprintf")
         #endif
         #if defined(__LLP64_IFC__)
           #pragma map ( vsnprintf, "_C_NEU_vsnprintf_ts64")
         #else
           #pragma map ( vsnprintf, "_C_NEU_vsnprintf")
         #endif
       #endif
     #elif (defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530))
       #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
           (__OS400_TGTVRM__ >= 540))
         #pragma map ( sprintf,  "_C_PSX_sprintf_ts64")
         #pragma map ( printf,   "_C_printf_ts64")
         #pragma map ( fprintf,  "_C_fprintf_ts64")
         #pragma map ( scanf,    "_C_scanf_ts64")
         #pragma map ( fscanf,   "_C_fscanf_ts64")
         #pragma map ( sscanf,   "_C_PSX_sscanf_ts64")
       #else
         #pragma map ( sprintf,  "_C_PSX_sprintf")
         #pragma map ( sscanf,   "_C_PSX_sscanf")
       #endif
       #if defined(__LLP64_IFC__)
         #pragma map ( vsprintf, "_C_PSX_vsprintf_ts64")
         #pragma map ( vprintf,  "_C_vprintf_ts64")
         #pragma map ( vfprintf, "_C_vfprintf_ts64")
         #pragma map ( vsscanf,  "_C_PSX_vsscanf_ts64")
         #pragma map ( vscanf,   "_C_vscanf_ts64")
         #pragma map ( vfscanf,  "_C_vfscanf_ts64")
       #else
         #pragma map ( vsprintf, "_C_PSX_vsprintf")
         #pragma map ( vsscanf,  "_C_PSX_vsscanf")
       #endif
       #if defined (__EXTENDED__)
         #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
             (__OS400_TGTVRM__ >= 540))
           #pragma map ( snprintf,  "_C_PSX_snprintf_ts64")
         #else
           #pragma map ( snprintf,  "_C_PSX_snprintf")
         #endif
         #if defined(__LLP64_IFC__)
           #pragma map ( vsnprintf, "_C_PSX_vsnprintf_ts64")
         #else
           #pragma map ( vsnprintf, "_C_PSX_vsnprintf")
         #endif
       #endif
    /* This is the else of if UTF or NEUTRAL  */
    #elif defined(__LLP64_IFC__)
      #if (defined(__VALIST64__) || __OS400_TGTVRM__ >= 530)
         #pragma map ( vprintf,  "_C_vprintf_ts64")
         #pragma map ( vfprintf, "_C_vfprintf_ts64")
         #pragma map ( vsprintf, "_C_vsprintf_ts64")
         #if (defined (__EXTENDED__) && (__OS400_TGTVRM__ >= 530))
           #pragma map ( vsnprintf, "_C_vsnprintf_ts64")
         #endif
      #endif
      #if (__OS400_TGTVRM__ >= 530)
         #pragma map ( vscanf,   "_C_vscanf_ts64")
         #pragma map ( vfscanf,  "_C_vfscanf_ts64")
         #pragma map ( vsscanf,  "_C_vsscanf_ts64")
      #endif
      #if (__OS400_TGTVRM__ >= 540) && defined(__FORMAT64__)
         #pragma map ( sprintf,   "_C_sprintf_ts64")
         #pragma map ( printf,    "_C_printf_ts64")
         #pragma map ( fprintf,   "_C_fprintf_ts64")
         #pragma map ( scanf,     "_C_scanf_ts64")
         #pragma map ( fscanf,    "_C_fscanf_ts64")
         #pragma map ( sscanf,    "_C_sscanf_ts64")
         #if defined (__EXTENDED__)
           #pragma map ( snprintf,  "_C_snprintf_ts64")
         #endif
      #endif
    #endif  /* End of the elif  */

  #endif    /* End of Not defined IFSIO  */
  #if defined (__EXTENDED__)
     _SSN_HANDLE_T _C_Get_Ssn_Handle(void);
  #endif /* #if defined (__EXTENDED__)                                */

  #define _IOFBF        1
  #define _IOLBF        2
  #define _IONBF        3
  #define BUFSIZ        512
  #define EOF           (-1)
  #define L_tmpnam      39
  #define FILENAME_MAX  39

  #define stderr      stderr
  #define stdin       stdin
  #define stdout      stdout

  /* limited by the amount of storage available                       */
  #define FOPEN_MAX     32767
  #define TMP_MAX       32767

  #ifndef PATH_MAX
    #ifndef __IFS_IO__
      #define PATH_MAX      39
    #else
      #define PATH_MAX      255
    #endif
  #endif

  #define SEEK_SET      0
  #define SEEK_CUR      1
  #define SEEK_END      2

  #define __EOF_FLAG    0x40
  #define __ERR_FLAG    0x20

   #ifndef __IFS_IO__
     #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
       #define __USE_FPUTC(p, c)                                         \
      ( ( (c) == (p)->__neu_nlchar ) ||                                  \
        ( (c) == (p)->__neu_altnlchar ) ||                               \
        ( (c) == 0x0d ) ||                                               \
        ( (c) == 0x0c ) ||                                               \
        (p)->__bufidx >= (p)->__buflen ||                                \
        ( (p)->__flags3 & 0x0C ) != 0x04 ||                              \
        ( (p)->__flags1 & 0x2430 ) == 0x2000 &&                          \
        ( (p)->__apprrn <= 0 ||                                          \
          !((p)->__flags4) ) )
   #else
      #define __USE_FPUTC(p, c)                                          \
      ( ( (c) == (p)->__nlchar ) ||                                      \
        ( (c) == (p)->__altnlchar ) ||                                   \
        ( (c) == 0x0d ) ||                                               \
        ( (c) == 0x0c ) ||                                               \
        (p)->__bufidx >= (p)->__buflen ||                                \
        ( (p)->__flags3 & 0x0C ) != 0x04 ||                              \
        ( (p)->__flags1 & 0x2430 ) == 0x2000 &&                          \
        ( (p)->__apprrn <= 0 ||                                          \
          !((p)->__flags4) ) )
   #endif

    #define __UPDATE_FILE(p)                                             \
      ( (p)->__flags4 = 0,                                               \
        ( !((p)->__flags1 & 0x0010) ) ?                                  \
        ( ( ++((p)->__bufidx) >= (p)->__efflen ) ?                       \
          ( ( (p)->__flags1 & 0x2000 ) ?                                 \
            ( ( (p)->__flags5 ) ?                                        \
              ( ( ((p)->__flags1 & 0x0010) && (p)->__lstidx < 0 ) ?      \
                ( (p)->__flags4 = 0 ) :                                  \
                ( (p)->__flags4 = 0x02 - ((p)->__flags3 & 0x02) ) ) :    \
              ( (p)->__flags4 = 1 ) ) :                                  \
            ( 1 ),                                                       \
            (p)->__efflen = (p)->__bufidx ) :                            \
          ( ( (p)->__flags5 ) ?                                          \
            ( (p)->__lstidx = (p)->__efflen ) :                          \
            ( 1 ) ) ) :                                                  \
        ( ++((p)->__bufidx) ) )

    #define __putc(c, s)                                                \
     ( (__temp_char = (c)),                                             \
       (__USE_FPUTC((s), (__temp_char))) ?                              \
       ( fputc((__temp_char), (s)) ) :                                  \
       ( __UPDATE_FILE(s),  *((s)->__bufptr++) = (__temp_char) ) )
    #define __putchar(c)  (__putc((c), stdout))
    #define __getc(s)                                                   \
     ( (++((s)->__bufidx) < (s)->__efflen) ?                            \
       *((s)->__bufptr++) :                                             \
       (--((s)->__bufidx), fgetc(s)) )
    #define __getchar()   (__getc(stdin))
    #define __feof(s)     ((s)->__flags3 & __EOF_FLAG)
    #define __ferror(s)   ((s)->__flags3 & __ERR_FLAG)

    #ifndef __cplusplus_nomacro__

      #define putc(c, f) (__putc((c), (f)))
      #define putchar(c) (__putchar(c))
      #define getchar()  (__getchar())
      #define getc(f)    (__getc(f))
      #define feof(f)    (__feof(f))
      #define ferror(f)  (__ferror(f))

    #else

      inline int putc(int c, FILE *f) {
        return __putc(c,f);
      }

      inline int putchar(int c) {
        return __putchar(c);
      }

      inline int getchar(void) {
        return __getchar();
      }

      inline int getc(FILE *f) {
        return __getc(f);
      }

      inline int feof(FILE *f) {
        return __feof(f);
      }

      inline int ferror(FILE *f) {
        return __ferror(f);
      }

    #endif /* ifndef __cplusplus_nomacro__ */

   #endif  /* __IFS_IO_ */

  #pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __stdio_h */
