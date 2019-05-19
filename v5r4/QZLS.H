/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
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
 /* Header File Name: H/QZLS                                       */
 /*                                                                */
 /* Descriptive Name: General NetServer API Header File.           */
 /* This is a generic default base file for Create Part of IDSS    */
 /* part development.  There is also the capability to have a      */
 /* default base that is specific for a given type.  For example   */
 /* if you want a default base for all the parts created with      */
 /* the type PL8 then you need a file with the name $TEMPLAT PL8   */
 /* that contains the default file.                                */
 /*                                                                */
 /* *** WARNING ***                                                */
 /*   This macro/include is a CUE.  This macro/include provides    */
 /*   an interface that is externally documented to customers, or  */
 /*   is a function that any user could create.  Any changes to    */
 /*   this part MUST be upwardly compatible at compile and         */
 /*   run-time.  This macro/include is approved for use by         */
 /*   external products.                                           */
 /*                                                                */
 /* CUESTATUS: OU                                                  */
 /*                                                                */
 /*                                                                */
 /* Description: Include header file for the QZLS APIs.            */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLS                                  */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97125       4D40  970805 ROCH:     New Include           */
 /* $A1= D97812.2     5D10  991031 ROCH:     Add user profile len  */
 /* $A2= P9934931     5D10  001030 ROCH      Additional pragma code*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLS_h
#define QZLS_h

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(P128)
#endif
/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define USER_PROFILE_LENGTH 10

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/

typedef _Packed struct Qzls_Extension_Table_Entry {
  int  extensionLen;
  char extension[46];
} Qzls_Extension_Table_Entry_t;

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif
#endif

