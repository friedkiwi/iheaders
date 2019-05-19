/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLEAWI                                     */
/*                                                                */
/* Descriptive Name: IBM Language Environment API Header file     */
/*                                                                */
/* 5763-SS1,5716-SS1, 5769-SS1, 5722-SS1                          */
/* (C) Copyright IBM Corp. 1994,2004                              */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: This header contains declarations and definitions */
/*              used by callers of the Language Environment APIs. */
/*                                                                */
/* Header Files Included: H/POINTER                               */
/*                        H/QUSEC                                 */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qle_ABP_Info_t, Qle_ABP_Info_Long_t            */
/*                                                                */
/* Function Prototype List: QleActBndPgm, QleActBndPgmLong        */
/*                          QleGetExp, QleGetExpLong              */
/*                                                                */
/*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QLEAWI_h
#define QLEAWI_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

#include <pointer.h>
#include <qusec.h>

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  /* QleActBndPgm flags */
  #define QLE_ABP_WAS_ACTIVE    0x80   /* 1=Previously activated.    */
                                       /* 0=Not previously activated */

  /* QleGetExport constants */
  #define QLE_EX_NOT_FOUND      0
  #define QLE_EX_PROC           1
  #define QLE_EX_DATA           2
  #define QLE_EX_NO_ACCESS      3

  typedef _Packed struct Qle_ActBndPgmInfo_t {
    int   Bytes_Returned;             /* Bytes returned (in/out)     */
    int   Bytes_Available;            /* Bytes available (output)    */
    char  Reserved1[8];               /* Set to binary 0             */
    int   Act_Grp_Mark;               /* Activation Group Mark       */
    int   Act_Mark;                   /* Activation Mark             */
    char  Reserved2[7];               /* Set to binary 0             */
    char  Flags;                      /* Flags, see QLE_ABP_* defn's */
    char  *Reserved3;                 /* Set to binary 0             */
  } Qle_ABP_Info_t;

/* If compiled with C++ _LONG_LONG must be defined to get long long interface */
/* The long long interface is available in the ILE C Compiler by default in   */
/* for target releases >= v5r3m0.                                             */
#if ((__OS400_TGTVRM__ >= 530) && \
     ((! defined(__cplusplus)) || defined(_LONG_LONG)))
  typedef _Packed struct Qle_ActBndPgmInfo_Long_t {
    int   Bytes_Returned;             /* Bytes returned (in/out)     */
    int   Bytes_Available;            /* Bytes available (output)    */
    char  Reserved1[8];               /* Set to binary 0             */
    unsigned long long Act_Grp_Mark;  /* Activation Group Mark       */
    unsigned long long Act_Mark;      /* Activation Mark             */
    char  Reserved2[7];               /* Set to binary 0             */
    char  Flags;                      /* Flags, see QLE_ABP_* defn's */
    char  Reserved3[8];              /* Set to binary 0             */
  } Qle_ABP_Info_Long_t;
#endif

  #ifndef __ILEC400__
    extern "C" {
  #endif

  int QleActBndPgm (_SYSPTR        *,  /* Pointer to service program */
                    int            *,  /* Activation mark            */
                    Qle_ABP_Info_t *,  /* Activation information     */
                    int            *,  /* Length of Activation Info. */
                    void           *); /* Error code                 */

  void *QleGetExp (int *,            /* Service pgm activation mark  */
                   int *,            /* Export Id                    */
                   int *,            /* Export name length           */
                   char *,           /* Export name                  */
                   void **,          /* Pointer to Pointer to export */
                   int *,            /* type, see QLE_EX_* defn's    */
                   void *);          /* Error code                   */

/* If compiled with C++ _LONG_LONG must be defined to get long long interface */
/* The long long interface is available in the ILE C Compiler by default in   */
/* for target releases >= v5r3m0.                                             */
#if ((__OS400_TGTVRM__ >= 530) && \
     ((! defined(__cplusplus)) || defined(_LONG_LONG)))
  unsigned long long
    QleActBndPgmLong (_SYSPTR        *,  /* Pointer to service program */
                      unsigned long long *,  /* Activation mark        */
                      void *,            /* Activation information,    */
                                         /* use Qle_ABP_Info_Long_t    */
                      int            *,  /* Length of Activation Info. */
                      void           *); /* Error code                 */

  void *QleGetExpLong (unsigned long long *, /* Service pgm activation mark */
                       int *,            /* Export Id                    */
                       int *,            /* Export name length           */
                       char *,           /* Export name                  */
                       void **,          /* Pointer to Pointer to export */
                       int *,            /* type, see QLE_EX_* defn's    */
                       void *);          /* Error code                   */
#endif

  #ifndef __ILEC400__
    }
  #endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef QLEAWI_h */
