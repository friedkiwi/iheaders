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
 /******************************************************************/
 /*                                                                */
 /* WARNING:    This macro/include is a CUE.                       */
 /*             This macro/include provides an interface           */
 /*             that is externally documented to customers,        */
 /*             or is function that any user could create.         */
 /*             Any changes to this part MUST be upwardly          */
 /*             compatible at compile and run-time.                */
 /*             This interface may be generated as in-line         */
 /*             code in customer programs.                         */
 /*                                                                */
 /*             CUESTATUS: OT                                      */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header File Name: H/QEDCHGIN                                   */
 /*                                                                */
 /* Descriptive Name: Change Contact Information API.              */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Description: The Change Contact Information API updates the    */
 /*              information in the contact information data base. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:	Qed_CNTC0100                               */
 /*                                                                */
 /* Function Prototype List: QEDCHGIN                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL   DATE    PGMR      CHANGE DESCRIPTION   */
 /* ---- ---------  -----   ------  --------- ---------------------*/
 /* $A0= D99918.7   v5r4m0  040919  ROBEROG   New Include          */
 /* $A1= D99918     v5r4m0  041205  ROBEROG   Add a second email   */
 /* $A2= P9A94466   v5r4m0  050417  ROBEROG   Change NLV from int  */
 /*                                           to char(10)          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QEDCHGIN_H
  #define _QEDCHGIN_H

  #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
  #endif


 /******************************************************************/
 /* Type Definition for change information (CNTC0100 format)       */
 /****                                                           ***/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/


 typedef _Packed struct Qed_CNTC0100
 {
     char Company_Name[36];
     char Contact_Name[36];
     char Primary_Telephone[20];
     char Helpdesk_Pagenumber[20];
     char Primary_Fax[20];
     char Alternative_Fax[20];
     char Street_Address_L1[36];
     char Street_Address_L2[36];
     char Street_Address_L3[36];
     char City_Locality[36];
     char State_Province[36];
     char Country_Region[20];
     char Postal_Code[12];
     int  Offset_Email_Address;
     int  Length_Email_Address;
     int  Offset_Email_Address2;                        /* @A1A */
     int  Length_Email_Address2;                        /* @A1A */
     int  Media_Mailing_PTF;
     char National_Language_Version[10];                /* @A2C */
     /*char Email_Address[1];  */ /* Varying length     */
     /*char Email_Address2[1]; */ /* Varying length     */
 } Qed_CNTC0100_t;


  /******************************************************************/
  /* Prototype for calling Retrieve Contact Information API QEDCHGIN*/
  /******************************************************************/
  #ifdef __ILEC400__
      #pragma linkage (QEDCHGIN, OS, nowiden)
  #else
      extern "OS"
  #endif

  void QEDCHGIN(void *,       /* Contact information */
                int,            /* Length of contact information */
                void *,         /* Format name */
                void *);        /* Error Code */


  #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
  #endif

#endif /* _QEDCHGIN_H */
