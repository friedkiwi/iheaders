/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1995, 2003                                */
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
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: SQLPROC                                      */
 /*                                                                */
 /* Descriptive Name: Structured Query Language (SQL)              */
 /*                   Procedures interface.                        */
 /*                                                                */
 /* Description: The SQL procedure interface provides access to    */
 /*              the SQL procedure service program. This is used   */
 /*              by SQL procedures.                                */
 /*                                                                */
 /* Header Files Included: SQLPROC                                 */
 /*                                                                */
 /* Macros List:                                                   */
 /*                                                                */
 /* Structure List:   SQLCA                                        */
 /*                                                                */
 /* Function Prototype List:  SQLInitSQLCA                         */
 /*                           SQLAssignN                           */
 /*                           SQLAssignC                           */
 /*                           SQLAssignD                           */
 /*                           SQLAssignT                           */
 /*                           SQLAssignTS                          */
 /*                           SQLCompareN                          */
 /*                           SQLCompareC                          */
 /*                           SQLCompareD                          */
 /*                           SQLCompareT                          */
 /*                           SQLCompareTS                         */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94943       4d20  970615 KLPASSE   New Include           */
 /* $A1= D97473       4D50  990511 45XRAU: BIGINT support          */
 /* $C1=D99228       v5r3m0 030328 klpasse: diagnostic area        */
 /* $C2=dXXXXX       V5R3M0 072903 KLPASSE: PERFORMANCE            */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef SQL_H_SQLPROC
   #define SQL_H_SQLPROC           /* Permit duplicate Includes */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifndef __SQL_EXTERN
    #ifdef __cplusplus
        #define SQL_EXTERN extern "C"
    #else
        #define SQL_EXTERN extern
    #endif

    #define __SQL_EXTERN
#endif


/* Standard SQL data types */
#define SQL_CHAR              453
#define SQL_NUMERIC           489
#define SQL_DECIMAL           485
#define SQL_INTEGER           497
#define SQL_SMALLINT          501
#define SQL_FLOAT             481
#define SQL_DATE              385
#define SQL_TIME              389
#define SQL_TIMESTAMP         393
#define SQL_VARCHAR           449
#define SQL_GRAPHIC           469
#define SQL_VARGRAPHIC        465
#define SQL_BIGINT            493   /* @A1A */

/* Standard SQL comparisons */
#define SQL_LT       1
#define SQL_LE       2
#define SQL_GT       3
#define SQL_GE       4
#define SQL_EQ       5
#define SQL_NE       6

/* Standard SQL formats for date,time,timestamp */
#define SQL_USA               1
#define SQL_ISO               3
#define SQL_EUR               5
#define SQL_JIS               7
#define SQL_INTERNAL          10
#define SQL_MDY               23
#define SQL_DMY               24
#define SQL_YMD               25
#define SQL_JUL               26
#define SQL_HMS               27
#define SQL_SAA_STAMP         9
#define SQL_INTERNAL_STAMP    12
#define SQL_YYYYMMDDHHMMSS    30

#define SQLP_NULLIND -1

#if (__OS400_TGTVRM__<530)  /* @C1A*/
/* Init sqlca */
SQL_EXTERN void SQLInitSQLCA
         (SQLCA* sqlcap);  /* pointer to sqlca           */

/* Modify sqlstate for set */
SQL_EXTERN void SQLModifyState
         (SQLCA* sqlcap);  /* pointer to sqlca           */

/* Assign character values */
SQL_EXTERN void SQLAssignC
         (SQLCA* sqlcap, /* pointer to sqlca            */
            void* op1,    /* pointer to target             */
            long type1,   /* type of target                */
            long len1,    /* length of target              */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2);   /* indicator variable for source */

/* Assign numeric values */
SQL_EXTERN void SQLAssignN
           (SQLCA* sqlcap, /* pointer to sqlca             */
            void* op1,    /* pointer to target             */
            long type1,   /* type of target                */
            short dig1,   /* digits of target              */
            short prec1,  /* precision of target           */
            short* i1,    /* indicator variable for target */
            void* op2,    /* pointer to source             */
            long type2,   /* type of source                */
            short dig2,   /* digits of source              */
            short prec2,  /* precision of source           */
            short* i2);   /* indicator variable for source */

/* Assign date values */
SQL_EXTERN void SQLAssignD
         (SQLCA* sqlcap, /* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2,    /* indicator variable for source */
            char sep,     /* separator for date            */
            short format);/* format for date               */

/* Assign time values */
SQL_EXTERN void SQLAssignT
         (SQLCA* sqlcap, /* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2,    /* indicator variable for source */
            char sep,     /* separator for date            */
            short format);/* format for date               */

/* Assign timestamp values */
SQL_EXTERN void SQLAssignTS
         (SQLCA* sqlcap, /* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2);   /* indicator variable for source */

/* Compare character values */
SQL_EXTERN long SQLCompareC
         (SQLCA* sqlcap,/* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char sqlop,   /* sql comparison operator       */
            char* op2,    /* pointer to source             */
            short* i2);   /* indicator variable for source */

/* Compare numeric values */
SQL_EXTERN long SQLCompareN
             (SQLCA* sqlcap, /* pointer to sqlca             */
              void* op1,    /* pointer to target             */
              long type1,   /* type of target                */
              short dig1,   /* digits of target              */
              short prec1,  /* precision of target           */
              short* i1,    /* indicator variable for target */
              char sqlop,   /* sql comparison operator       */
              void* op2,    /* pointer to source             */
              long type2,   /* type of source                */
              short dig2,   /* digits of source              */
              short prec2,  /* precision of source           */
              short* i2);   /* indicator variable for source */

/* Compare date values */
SQL_EXTERN long SQLCompareD
          (SQLCA* sqlcap, /* pointer to sqlca             */
             char* op1,    /* pointer to target             */
             short* i1,    /* indicator variable for target */
             char sqlop,   /* sql comparison operator       */
             char* op2,    /* pointer to source             */
             short* i2,    /* indicator variable for source */
             char sep,     /* separator for date            */
             short format);/* format for date               */

/* Compare time values */
SQL_EXTERN long SQLCompareT
          (SQLCA* sqlcap, /* pointer to sqlca             */
             char* op1,    /* pointer to target             */
             short* i1,    /* indicator variable for target */
             char sqlop,   /* sql comparison operator       */
             char* op2,    /* pointer to source             */
             short* i2,    /* indicator variable for source */
             char sep,     /* separator for date            */
             short format);/* format for date               */

/* Compare timestamp values */
SQL_EXTERN long SQLCompareTS
         (SQLCA* sqlcap, /* pointer to sqlca             */
             char* op1,    /* pointer to target             */
             short* i1,    /* indicator variable for target */
             char sqlop,   /* sql comparison operator       */
             char* op2,    /* pointer to source             */
             short* i2);   /* indicator variable for source */


typedef struct SQLCA
  { unsigned  char     sqlcaid[8];
              long     sqlcabc;
              long     sqlcode;
              short    sqlerrml;
    unsigned  char     sqlerrmc[70];
    unsigned  char     sqlerrp[8];
              long     sqlerrd[6];
    unsigned  char     sqlwarn[11];
    unsigned  char     sqlstate[5];
    };

    #else                  /* @C1A*/
/* Assign numeric values */
SQL_EXTERN void SQLAssignN
           (void*,        /* NULLPTR                   @C1A*/
            void* op1,    /* pointer to target             */
            long type1,   /* type of target                */
            short dig1,   /* digits of target              */
            short prec1,  /* precision of target           */
            short* i1,    /* indicator variable for target */
            void* op2,    /* pointer to source             */
            long type2,   /* type of source                */
            short dig2,   /* digits of source              */
            short prec2,  /* precision of source           */
            short* i2);   /* indicator variable for source */

SQL_EXTERN void SQLDiagPush(void);
SQL_EXTERN void SQLDiagInit(void);
SQL_EXTERN void SQLDiagPop(void);
SQL_EXTERN void SQLDiagClear(void);
SQL_EXTERN void SQLDiagPopCopy(void);
SQL_EXTERN short SQLRetrieveJobCCSID(void);
                             // Prototype for retrieve job ccsid         @C2A
#endif                       /* @C1A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/


#endif /* SQL_H_SQLPROC */
