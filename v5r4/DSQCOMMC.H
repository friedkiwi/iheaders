#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: dsqcommc.h                                   */
 /*                                                                */
 /* Descriptive Name: IBM Query Management/400 interface           */
 /*                     include file.                              */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 1989, 2001                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /*  Description:                                                  */
 /*      This include file contains the declarations needed        */
 /*      by an ILE C application program for interfacing           */
 /*      with the Query Management Callable Interface.             */
 /*      Query Management is the AS/400 implementation of the      */
 /*      Systems Application Architecture Query Callable           */
 /*      Programming Interface.                                    */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: dsqcomm - Query Management communications area */
 /*                                                                */
 /* Function Prototype: DSQCIC                                     */
 /*                     DSQCICE                                    */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940118 MOREY:    New Include           */
 /* $B1= P3958396     5D10  000621 CRRAND:   Additional macro      */
 /*                                           specifications.      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef DSQCOMMC_h
  #define DSQCOMMC_h

/*********************************************************************/
/* Callable Interface Constants and Structures                       */
/*********************************************************************/

/* return code values for DSQ_RETURN_CODE                            */
#define DSQ_SUCCESS        0   /* successful execution of the request*/
#define DSQ_WARNING        4   /* normal completion with warnings    */
#define DSQ_FAILURE        8   /* command did not execute correctly  */
#define DSQ_SEVERE        16   /* severe error; SAA Query session    */
                               /* terminated.                        */

/* Variable data types */
#define DSQ_VARIABLE_CHAR "CHAR"    /* unsigned character data type  */
#define DSQ_VARIABLE_FINT "FINT"    /* long integer type             */

/* Cancel indicator                                                  */
#define DSQ_CANCEL_YES    "1"       /* Yes it was cancelled.         */
#define DSQ_CANCEL_NO     "0"       /* No, it was not cancelled.     */

/* Derived query/form indicator                                      */
#define DSQ_DERIVED_YES   "1"       /* Yes it was derived from QRYDFN*/
#define DSQ_DERIVED_NO    "0"       /* No, it was not derived        */

/* Yes/No indicator.  This indicator can be used to test the values  */
/*   returned for the following global variables:                    */
/*      DSQCATTN - Last command cancel indicator.                    */
/*      DSQAROWC - Current data completed indicator.                 */
/*                                                                   */
#define DSQ_YES           "1"       /* Yes                           */
#define DSQ_NO            "0"       /* No                            */

/* misc defines                                                      */
#define DSQ_TRUE           1        /* indicates TRUE                */
#define DSQ_FALSE          0        /* indicates FALSE               */
#define DSQ_MATCH          0        /* match indicator               */

/* define the Communication Area structure */
struct dsqcomm
  {
  unsigned long dsq_return_code;      /* function return code         */
  unsigned long dsq_instance_id;      /* instance id for this session */
  unsigned char dsq_reserve1[44];     /* reserved space - not for     */
                                      /* application use              */
  unsigned char dsq_message_id[8];            /* completion message id*/
  unsigned char dsq_q_message_id[8];          /* query message id     */
  unsigned char dsq_start_parm_error[8];      /* name of start parm   */
  unsigned char dsq_cancel_ind[1];            /* command canceled by  */
                                         /* Control-Break (1=yes,0=no)*/
  unsigned char dsq_reserve2[17];        /* reserved space -- not for */
                                          /* application use          */
  unsigned char dsq_query_derived[1];     /* query used was derived   */
                                          /*   from AS/400 *QRYDFN    */
  unsigned char dsq_form_derived[1];      /* form used was derived    */
                                          /*   from AS/400 *QRYDFN    */
  unsigned int  dsq_delete_env;           /* flag used by QM to       */
                                          /*  control the QM          */
                                          /*  environment.            */
  unsigned char dsq_reserve3[924];        /* Reserve area 3           */
                                          /* application use          */
  } ;

/*********************************************************************/
/* Callable Interface External Function/Routine Definition           */
/*********************************************************************/

/* pragma definitions */
#define dsqcice DSQCICE
#define dsqcic DSQCIC


/* prototype for DSQCICE  */

 #ifdef  __ILEC400__
       #pragma linkage(DSQCICE, OS,nowiden)
 #else
       extern "OS"
 #endif

extern void dsqcice  (
             struct dsqcomm *,      /* Communication Area            */
             signed long  *,        /* command length                */
             char *,                /* command                       */
             signed long *,         /* number of parms               */
             signed long *,         /* keyword lengths               */
             char *,                /* keywords                      */
             signed long *,         /* data lengths                  */
             void *,                /* data                          */
             char *);               /* data value type               */

/* prototype for DSQCIC   */

 #ifdef  __ILEC400__
       #pragma linkage(DSQCIC, OS,nowiden)
 #else
       extern "OS"
 #endif

extern void dsqcic   (
             struct dsqcomm *,      /* Communication Area            */
             signed long  *,        /* command length                */
             char *);               /* command                       */
#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
