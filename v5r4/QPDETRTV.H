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
/* Header File Name: QPDETRTV                                     */
/*                                                                */
/* Descriptive Name: Retrieve User Policy API                     */
/*                                                                */
/* Description: This include describes the information needed to  */
/*              use the retrieve user policy API.                 */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qpdet_RPOL0100                                 */
/*                 Qpdet_RPOL0200                                 */
/*                 Qpdet_RPOL0300                                 */
/*                                                                */
/* Function Prototype List: QPDETRTV.                             */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D93040      v5r4m0 052404           New part              */
/* $A1= D93302      v5r4m0 060505           Added RPOL0300        */
/* End Change Activity.                                           */
/******************************************************************/
#ifndef qpdetrtv_h
#define qpdetrtv_h
#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(P128)
#endif

#ifdef  __ILEC400__
  #pragma linkage(QPDETRTV,OS,nowiden)
#else
  extern "OS"
#endif
          void QPDETRTV(
                         char*, /* Receiver variable */
                         int,   /* Length of receiver variable */
                         char*, /* Format of name */
                         void*  /* Error code */
                         );

/******************************************************************/
/* Retrieve service interval policy                               */
/******************************************************************/
typedef _Packed struct  Qpdet_RPOL0100{
     int Bytes_Returned;
     int Bytes_Available;
     int Number_Days;
 } Qpdet_RPOL0100t;

/******************************************************************/
/* Retrieve problem documentation level                           */
/******************************************************************/
typedef _Packed struct  Qpdet_RPOL0200{
     int Bytes_Returned;
     int Bytes_Available;
     char Problem_Level[10];
 } Qpdet_RPOL0200t;

/******************************************************************/
/* Retrieve maximum PTF order size                           @A1A */
/******************************************************************/
typedef _Packed struct  Qpdet_RPOL0300{
     int Bytes_Returned;
     int Bytes_Available;
     int Max_PTF_Order_Size_LAN;
     int Max_PTF_Order_Size_MODEM;
 } Qpdet_RPOL0300t;


    #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
#endif

#endif
