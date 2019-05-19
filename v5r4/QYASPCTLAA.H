/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYASPCTLAA                                 */
 /*                                                                */
 /* Descriptive Name: Control ASP Access API.                      */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2005                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Control ASP Access API provides an ability    */
 /*              to restrict use of an ASP to a user determined    */
 /*              set of jobs.                                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QYASPCTLAA                            */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D93276       5D40  050224 JGR    :  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QYASPCTLAA_H
 #define _QYASPCTLAA_H
#if (__OS400_TGTVRM__>=540)
#pragma datamodel(P128)
#endif



/*********************************************************************/
/* Valid values for the operation key.                               */
/*********************************************************************/
#define QYASP_START_EXCLUSIVE          1  /* Start exclusive ASP use */
#define QYASP_START_SHARED             2  /* Participate in ASP use  */
#define QYASP_END_SHARED               3  /* End participation in    */
                                          /* ASP use                 */
#define QYASP_END_EXCLUSIVE            4  /* End exclusive ASP use   */


 /******************************************************************/
 /*  Prototype for QYASPCTLAA API                                  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QYASPCTLAA,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QYASPCTLAA(char *,        /* ASP name                       */
                  int  *,        /* Operation key                  */
                  char *,        /* Request handle                 */
                  char *,        /* Return handle                  */
                  void *);       /* Error Code                     */


#if (__OS400_TGTVRM__>=540)
#pragma datamodel(pop)
#endif
 #endif
