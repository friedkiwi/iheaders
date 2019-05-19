/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QD0TRNDS                                  */
/*                                                               */
/* Descriptive Name: Translate Data Stream API.                  */
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
/* Description: The Translate Data Stream API translates data    */
/*              from one format to another format.               */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None                                          */
/*                                                               */
/* Function Prototype List: QD0TRNDS                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940328 XZS0786:  New Include          */
/*                                                               */
/* $A1=P3996093      3D60  950717 RBS    :  variable being passed*/
/*                                          as input variable    */
/* $A2= P9934931     v5r1m0 001018 v00656   Teraspace stage 2    */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QD0TRNDS_h
#define QD0TRNDS_h

 #if (__OS400_TGTVRM__>=510)                               /*@A2A*/
     #pragma datamodel(P128)                               /*@A2A*/
 #endif                                                    /*@A2A*/


#ifdef __ILEC400__
    #pragma linkage (QD0TRNDS,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for Translate Data Stream API QD0TRNDS             */
/*****************************************************************/
void QD0TRNDS (void *,         /* Translation session handle   */
               void *,           /* To buffer                    */
               int  *,           /* To buffer output length      */
               int   ,           /* To buffer length             */
               char *,           /* To buffer type               */
               void *,           /* From buffer                  */
               int   ,           /* From buffer length           */
               char *,           /* From buffer type             */
               char * ,          /* Operation                    */
               void *);          /* Error code                   */

 #if (__OS400_TGTVRM__>=510)                               /*@A2A*/
     #pragma datamodel(pop)                                /*@A2A*/
 #endif                                                    /*@A2A*/

#endif
