/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2003                                */
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
 /* Header File Name: H/QWCCVTDT                                   */
 /*                                                                */
 /* Descriptive Name: Convert Date and Time Format API.            */
 /*                                                                */
 /* Description: The Convert Date and Time Format (QWCCVTDT) API   */
 /*              converts date and time values from one format to  */
 /*              another format.                                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QWCCVTDT.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL  DATE   PGMR      CHANGE DESCRIPTION      */
 /* ---- --------- ------ ------ --------- ----------------------- */
 /* $A0= D2862000  3D10   940227 ROCH:     New Include             */
 /* $A1= D9914508  V5R3M0 030107 ROCH:     Add new optional parms  */
 /* $A2= P9A31508  V5R3M0 030530 ROCH:     Input time inidicator   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWCCVTDT_h
#define QWCCVTDT_h

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for calling Miscellaneous API QWCCVTDT              */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QWCCVTDT,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QWCCVTDT(void *,             /* Input format                 */
               void *,             /* Input variable               */
               void *,             /* Output format                */
               void *,             /* Output variable              */
               void *,             /* Error code                   */
               ...);               /* Optional Parameter Group 1:  */
                                   /*   char 10  Input time zone   */
                                   /*   char 10  Output time zone  */
                                   /*   char *   Time zone         */
                                   /*            information       */
                                   /*   int      Length of time    */
                                   /*            zone information  */
                                   /*   char 1   Precision         */
                                   /*            indicator         */
                                   /* Optional Parameter Group 2:  */
                                   /*   char 1   Input time        */
                                   /*            indicator         */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
