/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2005                                */
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
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/QP0LCHSG                              */
/*                                                                   */
/* Descriptive Name       :  Scan related include for:               */
/*                           Change Scan Signature (QP0LCHSG)        */
/*                                                                   */
/* Description            :  This file contains the structures and   */
/*                           prototypes for the Change Scan          */
/*                           Signature (QP0LCHSG) API.              */
/*                                                                   */
/* Macros List            :  None                                    */
/*                                                                   */
/* Type Definition List   :  None                                    */
/*                                                                   */
/* Structure List         :  None                                    */
/*                                                                   */
/* Class List             :  None.                                   */
/*                                                                   */
/* Function Prototype List:  None.                                   */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- -------      ----- ------ --------- -----------------------  */
/* $A0=D9868000      5D30  020330 ROCH    : New Include              */
/* $A1=P9A52232    v5r3m0f 040107 ROCH    : Add cplusplus ifdef to   */
/*                                          end of header            */
/* $A2=P9A55370    v5r4m0  040202 ROCH    : Add void to function call*/
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QP0LCHSG_h
#define _QP0LCHSG_h

#pragma datamodel(P128)

#include <qp0lscan.h>               /* Scan related type definitions */

/* Information for the QP0LCHSG (Change Scan Signature) API          */
#ifdef __ILEC400__
#pragma linkage (QP0LCHSG,OS,nowiden)
#else
extern "OS"
#endif
void QP0LCHSG(void * ScanKey_Ptr,
void            * ScanSign_Ptr,
void            * Error_Code_Ptr);                            /* @A2C*/

#pragma datamodel(pop)
#endif /* _QP0LCHSG_h */

#ifdef __cplusplus                                            /* @A1A*/
    #pragma info(restore)                                     /* @A1A*/
#else                                                         /* @A1A*/
    #pragma checkout(resume)                                  /* @A1A*/
#endif                                                        /* @A1A*/
