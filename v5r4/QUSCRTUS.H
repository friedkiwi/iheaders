/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSCRTUS                                      */
/*                                                                   */
/* Descriptive Name: Create User Space API.                          */
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
/* Description: The Create User Space APi creates a user space in    */
/*              either the user domain or the system domain.         */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUSCRTUS.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940119 LUPA:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUSCRTUS_h
 #define QUSCRTUS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QUSCRTUS API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSCRTUS,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUSCRTUS (void *,           /* Qualified User Space Name       */
                char *,           /* Extended Attribute              */
                int,              /* Initial Size                    */
                char *,           /* Initial Value                   */
                char *,           /* Public Authority                */
                void *,           /* Text Description                */
                ...);             /* Optional Parameter Group 1:
                                       Replace
                                       Error Code
                                     Optional Parameter Group 2:
                                       Domain
                                     Optional Parameter Group 3:
                                       Transfer size request
                                       Optimum alignment             */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
