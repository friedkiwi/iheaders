/***   START OF HEADER FILE SPECIFICATIONS   ************************/
/*                                                                  */
/* Header File Name: H/QCSTDD                                       */
/*                                                                  */
/* Descriptive Name: Cluster Control APIs.                          */
/*                                                                  */
/* 5722-SS1                                                         */
/* (C) Copyright IBM Corp. 2001,2001                                */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: Include header file for QCSTDD service program.     */
/*                                                                  */
/* Header Files Included: qcst.h                                    */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qcst_ADDD0100_t                                  */
/*                 Qcst_RMVD0100_t                                  */
/*                                                                  */
/* Function Prototype List: QcstAddDeviceDomainEntry                */
/*                          QcstRemoveDeviceDomainEntry             */
/*                                                                  */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- ----- ------ --------- --------------------------- */
/* $A0= D97869.3 5D10  990917 ROCH      New Include                 */
/* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2           */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*   Additional notes about the Change Activity                     */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/***   END OF HEADER FILE SPECIFICATIONS   **************************/

#ifndef _QCSTDD_h
#define _QCSTDD_h

#if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
    #pragma datamodel(P128)                                 /*@A1A*/
#endif                                                      /*@A1A*/

#include <qcst.h>


/********************************************************************/
/* Prototype for Add Device Domain Entry API                        */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstAddDeviceDomainEntry,OS,nowiden)
#else
    extern "C"
#endif
void QcstAddDeviceDomainEntry (char *,  /* Request handle    */
			              char *,  /* Cluster name      */
                                      char *,  /* Device domain name*/
			              char *,  /* Device domain info*/
                                      char *,  /* Format name       */
			              void *,  /* Result information*/
                                      void *); /* Error code        */

/*------------------------------------------------------------------*/
/* Structure for ADDD0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_ADDD0100 {
     int  DataLength;
     char NodeId[8];
} Qcst_ADDD0100_t;

/********************************************************************/
/* Prototype for Remove Device Domain Entry API                     */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstRemoveDeviceDomainEntry,OS,nowiden)
#else
    extern "C"
#endif
void QcstRemoveDeviceDomainEntry (char *, /* Request handle */
			                  char *, /* Cluster name   */
                                          char *, /* Device dmn name*/
				          char *, /* Device dmn info*/
                                          char *, /* Format name    */
                                          void *, /* Result info    */
                                          void *); /* Error code    */

/*------------------------------------------------------------------*/
/* Structure for RMDD0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_RMVD0100 {
     int  DataLength;
     char NodeId[8];
} Qcst_RMVD0100_t;

#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(pop)                                    /*@A1A*/
#endif                                                        /*@A1A*/


#endif /* _QCSTDD_h*/
