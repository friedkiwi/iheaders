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
/* Header File Name: QPDETPOL                                     */
/*                                                                */
/* Descriptive Name: Update User Policy API                       */
/*                                                                */
/* Description: This include describes the information needed to  */
/*              use the update user policy API.                   */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qpdet_POLS0100                                 */
/*                 Qpdet_POLS0200                                 */
/*                 Qpdet_POLS0300                                 */
/*                                                                */
/* Function Prototype List: QPDETPOL.                             */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D93040      v5r4m0 052404           New part              */
/* $A1= D93302      v5r4m0 060505           Add POLS0300          */
/* End Change Activity.                                           */
/******************************************************************/
#ifndef qpdetpol_h
#define qpdetpol_h
#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(P128)
#endif

#ifdef  __ILEC400__
  #pragma linkage(QPDETPOL,OS,nowiden)
#else
  extern "OS"
#endif
          void QPDETPOL(
                         char*, /*  Policy Data */
                         int,   /* Length Of Policy Data */
                         char*, /* Format Of Policy Data */
                         void*  /*Error code */
                         );

/******************************************************************/
/* Set service interval policy                                    */
/******************************************************************/
typedef _Packed struct  Qpdet_POLS0100{
     int Number_Days;
 } Qpdet_POLS0100t;

/******************************************************************/
/* Set problem documentation level                                */
/******************************************************************/
typedef _Packed struct  Qpdet_POLS0200{
     char Problem_Level[10];
 } Qpdet_POLS0200t;

/******************************************************************/
/* Set maximum PTF order size                                @A1A */
/******************************************************************/
typedef _Packed struct  Qpdet_POLS0300{
     int Max_PTF_Order_Size_LAN;
     int Max_PTF_Order_Size_MODEM;
 } Qpdet_POLS0300t;

    #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
#endif

#endif
