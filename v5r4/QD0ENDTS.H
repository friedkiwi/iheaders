/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QD0ENDTS                                  */
/*                                                               */
/* Descriptive Name: End Data Stream Translation API.            */
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
/* Description: The End Data Stream Translation Session API ends */
/*              a session for data stream translation.           */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QD0ENDTS                             */
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

#ifndef QD0ENDTS_h
#define QD0ENDTS_h

 #if (__OS400_TGTVRM__>=510)                               /*@A1A*/
     #pragma datamodel(P128)                               /*@A1A*/
 #endif                                                    /*@A1A*/

#ifdef __ILEC400__
    #pragma linkage (QD0ENDTS,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for End Data Stream Translation Session API        */
/*  QD0ENDTS                                                     */
/*****************************************************************/
void QD0ENDTS (void *,         /* Translation session handle   */
               void *);          /* Error code                   */
 #if (__OS400_TGTVRM__>=510)                               /*@A1A*/
     #pragma datamodel(pop)                                /*@A1A*/
 #endif                                                    /*@A1A*/



#endif
