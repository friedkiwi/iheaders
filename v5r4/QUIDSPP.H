/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIDSPP                                       */
/*                                                                   */
/* Descriptive Name: Display Panel                                   */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Display Panel API displays a panel and waits for */
/*              the user to press a function key or the Enter key.   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIDSPP                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940126 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUIDSPP_h
 #define QUIDSPP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIDSPP        */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIDSPP,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIDSPP  (char *,           /* Application handle              */
                int *,            /* Function requested              */
                char *,           /* Panel name                      */
                char *,           /* Redisplay option                */
                void *,           /* Error code                      */
                ...);             /* Optional Parameter Group 1:
                                       User task
                                       Call stack counter
                                       Call message queue
                                       Message reference key
                                       Cursor position option
                                       Last list entry
                                       Error list entry
                                       Wait time
                                     Optional Parameter Group 2:
                                       Length call message queue name
                                       Call qualification            */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
