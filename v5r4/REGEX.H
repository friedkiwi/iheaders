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
/* (C)Copyright IBM Corp.  1991, 2003                                */
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
#ifndef _H_REGEX
  #define _H_REGEX

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif
/* ================================================================= */
/* Header File Name: regex.h                                         */
/*                                                                   */
/* This header contains definitions and declarations used by         */
/* the regular expression routines.                                  */
/*                                                                   */
/* ================================================================= */

#ifdef __POSIX_LOCALE__

  #pragma datamodel(P128)

  #if !defined(__size_t)
     #define __size_t  1
     typedef unsigned int size_t;
  #endif

  #ifndef __wchar_t
     #define __wchar_t
     #ifdef __UTF32__
       typedef unsigned int wchar_t;
     #else
       typedef unsigned short wchar_t;
     #endif
  #endif


#ifndef __colval_t
  #define __colval_t 1
  typedef int _LC_colval_t;
#endif


  /* regcomp() cflags */

#define REG_BASIC          0x000   /* Basic RE rules  (BRE)        */
#define REG_EXTENDED       0x001   /* Extended RE rules (ERE)      */
#define REG_ICASE          0x002   /* Ignore case in match         */
#define REG_NEWLINE        0x004   /* Convert <backslash><n> to
                                                         <newline> */
#define REG_NOSUB          0x008   /* regexec() not report
                                                    subexpressions */
#define REG_ALT_NL         0x010   /* POSIX: Use IFS newline       */
                                   /* instead of database newline  */
                                   /* UTF32: Use database newline  */
                                   /* instead of IFS newline.      */


  /* regexec() eflags */

#define REG_NOTBOL  0x100   /* First character not start of line   */
#define REG_NOTEOL  0x200   /* Last character not end of line      */



  /* Regular Expression error codes */

#define REG_NOMATCH        1  /* RE pattern not found           */
#define REG_BADPAT         2  /* Invalid Regular Expression     */
#define REG_ECOLLATE       3  /* Invalid collating element      */
#define REG_ECTYPE         4  /* Invalid character class        */
#define REG_EESCAPE        5  /* Last character is \            */
#define REG_ESUBREG        6  /* Invalid number in \digit       */
#define REG_EBRACK         7  /* imbalance                      */
#define REG_EPAREN         8  /* \( \) or () imbalance          */
#define REG_EBRACE         9  /* \{ \} or { } imbalance         */
#define REG_BADBR         10  /* Invalid \{ \} range exp        */
#define REG_ERANGE        11  /* Invalid range exp endpoint     */
#define REG_ESPACE        12  /* Out of memory                  */
#define REG_BADRPT        13  /* ?*+ not preceded by valid RE   */
#define REG_ECHAR         14  /* invalid multibyte character    */
#define REG_EBOL          15  /* (shift 6 caret or not) anchor
                                          and not BOL           */
#define REG_EEOL          16  /* $ anchor and not EOL           */
#define REG_ECOMP         17  /* Unknown error in regcomp() call*/
#define REG_EEXEC         18  /* Unknown error in regexec() call*/
#define REG_LAST          18  /* Needs to always be the greatest*/
                              /* regerror uses it to check for  */
                              /* valid number                   */

#ifndef __mbstate_t
  #define __mbstate_t
    #ifdef __UTF32__
      typedef int   mbstate_t;       /* multi-byte shift state */
    #else
      typedef short mbstate_t;       /* multi-byte shift state */
    #endif
#endif

typedef struct {        /* regcomp() data saved for regexec()  */
    size_t  re_nsub;    /* # of subexpressions in RE pattern   */
    void    *re_comp;   /* compiled RE; freed by regfree()     */
    int     re_cflags;  /* saved cflags for regexec()          */
    size_t  re_erroff;  /* RE pattern error offset             */
    size_t  re_len;     /* length in bytes of compiled pattern */
    _LC_colval_t re_ucoll[2]; /* min/max uniq collating values */
    size_t  *re_lsub;   /* start subexp                        */
    size_t  lsub_ar[16]; /* default lsub array                 */
    size_t  esub_ar[16]; /* default esub array                 */
    void    *reserved1; /* reserved field                      */
    size_t  *re_esub;   /* end subexp                          */
    void    *re_specchar; /* converted special characters      */
    void    *re_phdl;   /* ptr to collation information        */
    unsigned char comp_spc[112]; /* compiled RE space          */
    unsigned char re_map[256]; /* maps valid pattern characters*/
    mbstate_t re_shift; /* Saved shift state                   */
    short   re_dbcs;    /* May start with DBCS character       */
} regex_t;

typedef long  _off_t;           /* file offset   */

  /*
   *
   * X/Open Issue 4 Version 1 (XPG4)
   *
   */
#ifdef __XPG4
  #define   REG_ENOSYS   134  /* function not supported */
    typedef _off_t regoff_t;
#endif

typedef struct {      /* substring locations - from regexec() */
    _off_t    rm_so;  /* offset of substring                  */
    mbstate_t rm_ss;  /* Shift state at start of substring    */
    _off_t    rm_eo;  /* offset of first char after substring */
    mbstate_t rm_es;  /* Shift state at end of substring      */
} regmatch_t;


  /* Regular Expression function prototypes */

#ifdef _NO_PROTO
  int regexec();
  int regcomp();
  size_t regerror();
  void regfree();
#else
  #ifdef __XPG4
    int regexec(const regex_t *, const char *, size_t, regmatch_t[], int);
  #else
    int regexec(const regex_t *, const char *, size_t, regmatch_t *, int);
  #endif
  int regcomp(regex_t *, const char *, int);
  size_t regerror(int, const regex_t *, char *, size_t);
  void regfree(regex_t *);
#endif   /*  _NO_PROTO  */

#if defined(__UTF32__)
  #pragma map(regexec, "_C_UTF_regexec")
  #pragma map(regcomp, "_C_UTF_regcomp")
  #pragma map(regerror, "_C_UTF_regerror")
#endif

  #pragma datamodel(pop)

#endif /* __POSIX_LOCALE__ */

#ifdef __cplusplus
  #pragma info(restore)
    }
#else
  #pragma checkout(resume)
#endif

#endif /* _H_REGEX */
