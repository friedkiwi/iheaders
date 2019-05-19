/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2004, 2005                                */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGLDCPYVL                                  */
 /*                                                                */
 /* Descriptive Name: Copy Validation List To Directory            */
 /*                                                                */
 /* Description: The Copy Validation List To Directory API copies  */
 /*              Internet users defined in a validation list to    */
 /*              the local directory server, creating              */
 /*              inetOrgPerson directory entries with passwords    */
 /*              based on original validation list entry.          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QGLDCPYVL                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL DATE     PGMR    CHANGE DESCRIPTION        */
 /* ---- -------- ----- -------- ------- ------------------------- */
 /* $A0= D9985800 5P30  20040728 ROCH    New Include               */
 /* $A1= PSE20094 5P30  20050505 ROCH    Add Alternate CCSID and   */
 /*                                      Entry Exists Action       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QGLDCPYVL_h
#define QGLDCPYVL_h
#pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling QGLDCPYVL API                            */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QGLDCPYVL,OS,nowiden)
#else
     extern "OS"
#endif
void QGLDCPYVL (char *,         /* Qualified validation list name */
                char *,          /* Bind distinguished name        */
                int,             /* Length of bind DN              */
                char *,          /* Bind password                  */
                int,             /* Length of bind password        */
                char *,          /* Parent distinguished name      */
                int,             /* Length of parent DN            */
                char *,          /* Additional object class        */
                int,             /* Length of object class         */
		void *,          /* Error code                     */
		...              /* Optional parameters:
                                       int  Alternate CCSID
                                       char Entry exists action
				  */
                );

#pragma datamodel(pop)
#endif
