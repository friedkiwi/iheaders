 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLPRAGR                                    */
 /*                                                                */
 /* Descriptive Name: Retrieve Software Agreement API              */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2004                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:  Retrieve Software Agreement API returns the      */
 /*               user's acceptance status of the software         */
 /*               agreement for a specific product,release, option.*/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLPRAGR                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG Track      Release        DATE   Userid     Comments      */
 /* ---- --------- -------------- ------  -------   ---------------*/
 /*  $A0=P9A47808  v5r3m0.xpf     031130  BLOCKER : New  Include   */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QLPRAGR_h
#define QLPRAGR_h
#pragma datamodel(P128)

/*******************************************************************/
/*  Prototype for calling Software Product API QLPRAGR             */
/*******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QLPRAGR,OS,nowiden)
  #else
       extern "OS"
  #endif



 void   QLPRAGR(void *,      /* Receiver variable                 */
                 int   ,      /* Length of receiver variable       */
                 char *,      /* Format name                       */
                 char *,      /* Product ID                        */
                 char *,      /* Release                           */
                 char *,      /* Option                            */
                 void *       /* Error code                        */
                );

 /******************************************************************/
 /* Type Definition for the LPAG0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qlp_LPAG0100
    {
     int   Bytes_Retd;           /* Bytes returned                 */
     int   Bytes_Avail;          /* Bytes available                */
     char  Accept_Status[1];     /* Acceptance Status              */
    } Qlp_LPAG0100_t;


#pragma datamodel(pop)
#endif
