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
/*********************************************************************/
/*                                                                   */
/* Header File Name: H/QYKIMPK                                       */
/*                                                                   */
/* Descriptive Name:  Import Certificate Store                       */
/*                                                                   */
/* Description: The Import Certificate Store API imports an          */
/*              entire certificate store from a PKCS12 version 3     */
/*              file.  If the certificate store does not exist       */
/*              beforehand, it is created.  If it does exist,        */
/*              only certificates without duplicate public keys      */
/*              or duplicate labels will be imported.                */
/*                                                                   */
/* Header Files Included:                                            */
/*        qusec.h       Error code structure                         */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QYKMIMPK                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON      LEVEL   DATE     PGMR    CHANGE DESCRIPTION      */
 /*                        YY/MM/DD                                  */
 /* ---- ---------   -----   ------  -------  ---------------------  */
 /* $A0= D99408      v5r3m0  020801   ROCH:   New Include            */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/
#ifndef QYKMIMPK_h
#define QYKMIMPK_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling Import Certificate Store API QYKMIMPK    */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYKMIMPK,OS,nowiden)
#else
   extern "OS nowiden"
#endif

     void  QYKMIMPK (
                  void *,          /* Certificate store path and
                                      file name                    */
                  int *,           /* Length of certificate store
                                      path and file name           */
                  char *,          /* Format of certificate store
                                      path and file name           */
                  char *,          /* Certificate store password   */
                  int *,           /* Length of certificate store
                                      password                     */
                  int *,           /* CCSID of certificate store
				      password                     */
                  void *,          /* Import path and file name    */
                  int *,           /* Length of import path and
                                      file name                    */
                  char *,          /* Format of import path and
                                      file name                    */
                  char *,          /* Version of pkcs12 file       */
                  char *,          /* Import file password         */
                  int *,           /* Length of import file
                                      password                     */
                  int *,           /* CCSID of import file
				      password                     */
                  void *);         /* Error code                   */

#if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
#endif
#endif
