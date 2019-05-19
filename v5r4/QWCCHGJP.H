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
 /* Header File Name: H/QWCCHGJP                                   */
 /*                                                                */
 /* Descriptive Name: Change job Pool API                          */
 /*                                                                */
 /* Description: The Change job Pool API will change the system    */
 /*              pool of the job on the system                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_JOBP0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QWCCHGJP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
 /* ---- -------- ----- ------ --------- --------------------------*/
 /* $A0= D93365  v5r3m0 050731 AJMEYER: New Function               */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCCHGJP_h
 #define QWCCHGJP_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for QWCCHGJP API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCCHGJP,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCCHGJP(void *,          /* Function Information           */
              void *,            /* Length of Function info        */
              void *,            /* Format name                    */
              void *,            /* Error code                     */
              ...);              /* Optional Parameter 1:
                                    Return code                    */

 /******************************************************************/
 /* Type Definition for the JOBP0100 format                        */
 /*                                                                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwc_JOBP0100
    {
       char Source_Job_Name[10];
       char Source_Job_User_Name[10];
       char Source_Job_Number[6];
       char Target_Pool_Type[10];
       int  Target_Pool_Id;
    } Qwc_JOBP0100_t;


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
