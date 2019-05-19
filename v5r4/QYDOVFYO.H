#ifdef __cplusplus
#pragma info(none)
#else
#pragma nomargins nosequence
#pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QYDOVFYO                                      */
/*                                                                   */
/* Descriptive Name: Verify Digital Signatures API                   */
/*                                                                   */
/* 5722-SS1  (C) Copyright IBM Corp. 1999,2000                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The QYDOVFYO (Verify Object Signatures) API checks   */
/*              (verifies) if the object's contents have changed     */
/*              since the object was signed.                         */
/*                                                                   */
/* Header Files Included: qusec.h                                    */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QYDOVFYO.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D97545       5D10  991116  ROCH:     New Include             */
/* $01= D98608       5D20  010821 ROCH:     move multi.objects       */
/*                                          struct to qydocommon     */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QYDOVFYO_h
#define QYDOVFYO_h
#include "qusec.h"           /* Error code structure                */
#include <qydocommon.h>      /* for Qydo_Multi_Objects_T        @01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
/********************************************************************/
/* Includes for structures.                                         */
/********************************************************************/

/********************************************************************/
/*  Prototype for QYDOVFYO  API                                     */
/********************************************************************/

#ifdef __ILEC400__
#pragma linkage (QYDOVFYO,OS,nowiden)
#else
extern "OS nowiden"
#endif
void  QYDOVFYO(char *,      /* path name to object          */
	       int  *,      /* length of path name          */
	       char *,      /* format name of object        */
	       Qydo_Multi_Objects_T * volatile, /* how to handle
			       multiple objects             */
	       int  * volatile,  /* length of multiple objects
			       structure to use
			      (0=no mult.object structure)  */
	       void *); /* error code                   */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* QYDOVFYO_h */

#ifdef __cplusplus
#pragma info(restore)
#else
#pragma checkout(resume)
#endif
