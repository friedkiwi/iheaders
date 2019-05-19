/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EWCPRSEP                              */
/*                                                                   */
/* Descriptive Name       :  Pre-restricted state                    */
/*                           Exit Program Structure                  */
/*                                                                   */
/*                                                                   */
/* Description: This include defines the parameter structures for    */
/*              the exit point.                                      */
/*                                                                   */
/*              QIBM_QWC_PRERESTRICT format PRSE0100, PRSE0200       */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qwc_prse0100_Format_t                             */
/*                 Qwc_prse0200_Format_t                             */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= D99530       5D30  030328 ROCHESTER:New Include              */
/* $A1=P9A27665      5D30  030411 ROCHESTER: comment corrected       */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EWCPRSEP_h
 #define EWCPRSEP_h

 #if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/* Key Operator constants */
#define QWCPRE_STATUS_NO  0         /* No Operator                  */
#define QWCPRE_STATUS_YES 1         /* Yes Operator                 */

/********************************************************************/
/* Typedef for exit program structure                               */
/********************************************************************/

typedef _Packed struct Qwc_PRSE0100_Format
{
    int  Return_Length;                /* Return information length */
    int  Status_Flag;                  /* Status Flag               */
    int  Wait_Time;                    /* Wait time                 */
} Qwc_Prse0100_Format_t;
typedef _Packed struct Qwc_PRSE0200_Format
{
    int  Return_Length;                /* Return information length */
} Qwc_Prse0200_Format_t;


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif

