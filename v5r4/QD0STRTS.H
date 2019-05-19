/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QD0STRTS                                  */
/*                                                               */
/* Descriptive Name: Start Data Stream Translation Session API   */
/*                                                               */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                   */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Start Data Stream Translation Session API    */
/*              initates a session for data stream translation.  */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QD0STRTS                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940328 XZS0786:  New Include          */
/* $A1= P9934931     v5r1m0 001018 v00656   Teraspace stage 2    */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QD0STRTS_h
#define QD0STRTS_h

 #if (__OS400_TGTVRM__>=510)                               /*@A1A*/
     #pragma datamodel(P128)                               /*@A1A*/
 #endif                                                    /*@A1A*/

#ifdef __ILEC400__
    #pragma linkage (QD0STRTS,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for Start Data Stream Translation Session API      */
/*  QD0STRTS                                                     */
/*****************************************************************/
void QD0STRTS (void *,         /* Translation session handle   */
               char *,           /* Display device name          */
               char *,           /* Default screen size          */
               char *,           /* Alternate screen size        */
               void *);          /* Error code                   */

 #if (__OS400_TGTVRM__>=510)                               /*@A1A*/
     #pragma datamodel(pop)                                /*@A1A*/
 #endif                                                    /*@A1A*/

#endif
