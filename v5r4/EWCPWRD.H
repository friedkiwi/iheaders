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
/* ----------------------------------------------------------------- */

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EWCPWRD                               */
/*                                                                   */
/* Descriptive Name       :  Pre-power down state                    */
/*                           exit program structure                  */
/*                                                                   */
/*                                                                   */
/* Description: This include defines the parameter structures for    */
/*              the exit point.                                      */
/*                                                                   */
/*              QIBM_QWC_PWRDWNSYS format PWRD0200                   */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qwc_PDPF0100_Format_t                             */
/*                 Qwc_PDPF0200_Format_t                             */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= D99843       5D40  040810 ROCHESTER: New Include             */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EWCPWRD_h
 #define EWCPWRD_h

 #if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/* Constants to be used for the Status_Flag field shown below:      */
#define QWCPD_STATUS_NO  0          /* No - PWRDWNSYS not allowed   */
#define QWCPD_STATUS_YES 1          /* Yes - PWRDWNSYS allowed      */

/********************************************************************/
/* Typedef for exit program structure                               */
/********************************************************************/

typedef _Packed struct Qwc_PDPF0100_Format
{
    int  Exit_Information_Length;      /* Exit information length   */
    int  Status_Flag;                  /* Status flag               */
    int  Wait_Time;                    /* Wait time                 */
} Qwc_PDPF0100_Format_t;

typedef _Packed struct Qwc_PDPF0200_Format
{
    int  Exit_Information_Length;      /* Exit information length   */
    int  Execute_Wait_Time;            /* Execute wait time         */
} Qwc_PDPF0200_Format_t;


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif

