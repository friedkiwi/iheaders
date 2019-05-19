/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QYDOVFY1                                   */
/*                                                                */
/* Descriptive Name: Verify objects that have been digitally      */
/*                   signed                                       */
/*                                                                */
/* 5722-SS1                                                       */
/* (C) Copyright IBM Corp. 2000,2000                              */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: The Verify Object Signatures API checks (verifies)*/
/*              if the object's contents have changed since the   */
/*              object was signed.                                */
/*                                                                */
/* Header Files Included:                                         */
/*        qusec.h       Error code structure                      */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QYDOVFY1                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D97545       5D10  991115 ROCH:     New Include           */
/* $01= D98608       5D20  010821 ROCH:     move multi.objects    */
/*                                          struct to qydocommon  */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QYDOVFY1_h
#define QYDOVFY1_h

#include <qusec.h>                 /* Error code structure         */
#include <qydocommon.h>            /* for Qydo_Multi_Objects_T @01C*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*******************************************************************/
/*  Prototype for calling Verify Object Signatures API.            */
/*******************************************************************/
#ifndef __ILEC400__
extern "C" {
#else
#pragma nomargins nosequence
#pragma checkout(suspend)
#endif

    void  QydoVerifyObject(char * volatile,  /* path name to object         */
			   int  * volatile,  /* length of path name         */
			   char * volatile,  /* format name                 */
			   Qydo_Multi_Objects_T * volatile, /* how to handle
					        multiple objects            */
			   int  * volatile,  /* length of multiple objects
					        structure to use
					      (0=no mult.object structure)  */
			   void * volatile); /* error code              */

#ifndef __ILEC400__
}
#else
#pragma checkout(resume)
#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
