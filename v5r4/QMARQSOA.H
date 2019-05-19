/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QMARQSOA                                      */
/*                                                                   */
/* Descriptive Name: Request Order Assistance Header                 */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Request Order Assistance (QMARQSOA) API sends a  */
/*              request for order assistance to a service provider   */
/*              using an ECS connection.                             */
/*                                                                   */
/* Header Files Included: QUS                                        */
/*                                                                   */
/* Macros List: none.                                                */
/*                                                                   */
/* Structure List: none.  (Formats included in QUS)                  */
/*                                                                   */
/* Function Prototype List: QMARQSOA.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940504 ROCH     :New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QMARQSOA_h
 #define QMARQSOA_h

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/
 #include <qus.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QMARQSOA  API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
   #pragma linkage (QMARQSOA,OS,nowiden)
 #else
   extern "OS"
 #endif

       void QMARQSOA (void *,      /* Output Order ID               */
                      void *,      /* Input Order ID                */
                      int,         /* Send/Receive Option           */
                      void *,      /* Contact Information           */
                      void *,      /* Configuration file            */
                      void *,      /* Network address               */
                      void *,      /* Request Information           */
                      void *,      /* System Information            */
                      void *);     /* Error Code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
