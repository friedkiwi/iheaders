#ifndef __langinfo_h
  #define __langinfo_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: langinfo.h                                      */
/*                                                                   */
/* This header contains the declarations used by the nl_langinfo     */
/* runtime routine.                                                  */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1991,2003                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================= */

#ifdef __POSIX_LOCALE__

  #pragma datamodel(P128)

  #define CODESET      1  /* codeset name */
  #define D_T_FMT      2  /* string for formatting date and time */
  #define D_FMT        3  /* string for formatting date */
  #define T_FMT        4  /* string for formatting time */
  #define T_FMT_AMPM   5  /* string for am or pm time format */
  #define AM_STR       6  /* Ante Meridian affix */
  #define PM_STR       7  /* Post Meridian affix */

  #define ABDAY_1      8  /* abbreviated first day of the week   (Sun) */
  #define ABDAY_2      9  /* abbreviated second day of the week  (Mon) */
  #define ABDAY_3     10  /* abbreviated third day of the week   (Tue) */
  #define ABDAY_4     11  /* abbreviated fourth day of the week  (Wed) */
  #define ABDAY_5     12  /* abbreviated fifth day of the week   (Thu) */
  #define ABDAY_6     13  /* abbreviated sixth day of the week   (Fri) */
  #define ABDAY_7     14  /* abbreviated seventh day of the week (Sat) */

  #define DAY_1       15  /* name of the first day of week  (Sunday) */
  #define DAY_2       16  /* name of the second day of week (Monday) */
  #define DAY_3       17  /* name of the third day of week  (Tuesday) */
  #define DAY_4       18  /* name of the fourth day of week (Wednesday)*/
  #define DAY_5       19  /* name of the fifth day of week  (Thursday)*/
  #define DAY_6       20  /* name of the sixth day of week  (Friday) */
  #define DAY_7       21  /* name of the seventh day of week (Saturday)*/

  #define ABMON_1     22  /* abbreviated first month    (Jan) */
  #define ABMON_2     23  /* abbreviated second month   (Feb) */
  #define ABMON_3     24  /* abbreviated third month    (Mar) */
  #define ABMON_4     25  /* abbreviated fourth month   (Apr) */
  #define ABMON_5     26  /* abbreviated fifth month    (May) */
  #define ABMON_6     27  /* abbreviated sixth month    (Jun) */
  #define ABMON_7     28  /* abbreviated seventh month  (Jul) */
  #define ABMON_8     29  /* abbreviated eighth month   (Aug) */
  #define ABMON_9     30  /* abbreviated ninth month    (Sep) */
  #define ABMON_10    31  /* abbreviated tenth month    (Oct) */
  #define ABMON_11    32  /* abbreviated eleventh month (Nov) */
  #define ABMON_12    33  /* abbreviated twelveth month (Dec) */

  #define MON_1       34  /* name of the first month    (January) */
  #define MON_2       35  /* name of the second month   (February) */
  #define MON_3       36  /* name of the third month    (March) */
  #define MON_4       37  /* name of the fourth month   (April) */
  #define MON_5       38  /* name of the fifth month    (May) */
  #define MON_6       39  /* name of the sixth month    (June) */
  #define MON_7       40  /* name of the seventh month  (July) */
  #define MON_8       41  /* name of the eighth month   (August) */
  #define MON_9       42  /* name of the ninth month    (September) */
  #define MON_10      43  /* name of the tenth month    (October) */
  #define MON_11      44  /* name of the eleventh month (November) */
  #define MON_12      45  /* name of the twelfth month  (December) */

  #define RADIXCHAR   46  /* radix character */
  #define THOUSEP     47  /* separator for thousands */
  #define YESEXPR     48  /* affirmative response expression */
  #define NOEXPR      49  /* negative response expression */
  #define CRNCYSTR    50  /* currency symbol; - leading, + trailing */
  #define ERA         51  /* era description segments */
  #define ERA_D_FMT   52  /* era date format string */
  #define ERA_D_T_FMT 53  /* era date and time format string */
  #define ERA_T_FMT   54  /* era time format string */
  #define ALT_DIGITS  55  /* alternative symbols for digits */
  #define YESSTR      56  /* affirmative response for yes/no queries */
  #define NOSTR       57  /* negative response for yes/no queries */

  #ifndef __NL_NUM_ITEMS
    #define __NL_NUM_ITEMS 58
  #endif

  #ifndef __nl_item
    #define __nl_item
    typedef int       nl_item;
  #endif

  char *nl_langinfo( nl_item );
  #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
    #pragma map(nl_langinfo, "_C_NEU_nl_langinfo")
  #endif


  #if (__OS400_TGTVRM__>=530) && defined(__EXTENDED__) && \
      (defined(__UTF32__) || defined(__UCS2__))
     #ifndef   __wchar_t
       #define __wchar_t
       #ifdef __UTF32__
         typedef unsigned int wchar_t;
       #else
         typedef unsigned short wchar_t;
       #endif
     #endif

     wchar_t *_WCS_nl_langinfo( nl_item );
     #if defined(__UTF32__)
       #pragma map(_WCS_nl_langinfo, "_C_UTF_WCS_nl_langinfo")
     #endif
  #endif

  #pragma datamodel(pop)

#endif    /* ifdef __POSIX_LOCALE__                                  */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif   /* ifndef __langinfo_h                                     */

