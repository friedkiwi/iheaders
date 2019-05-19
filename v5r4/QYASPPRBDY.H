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
 /* Header File Name: H/QYASPPRBDY                                 */
 /*                                                                */
 /* Descriptive Name: Set Pointer Reset Boundary.                  */
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
 /* Description: The Set Pointer Reset API sets an IPL boundary    */
 /*              for invalidating any pointer within *SYSBAS       */
 /*              that contains an address of an object in an IASP. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QYASPPRBDY                            */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D93276       5D40  050225 JGR    :  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QYASPPRBDY_H
 #define _QYASPPRBDY_H
#if (__OS400_TGTVRM__>=540)
#pragma datamodel(P128)
#endif


 /******************************************************************/
 /* Valid values for the option parameter.                         */
 /******************************************************************/
 #define QYASPPRBDY_DEFAULT           0 /* Set the default action  */
 #define QYASPPRBDY_NEXT_IPL          1 /* Next IPL is a boundary  */
 #define QYASPPRBDY_ALL_IPL           2 /* All IPLs are boundaries */


 /******************************************************************/
 /*  Prototype for QYASPPRBDY API                                  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QYASPPRBDY,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QYASPPRBDY(int  *,        /* Option                         */
                  void *);       /* Error Code                     */


#if (__OS400_TGTVRM__>=540)
#pragma datamodel(pop)
#endif
 #endif
