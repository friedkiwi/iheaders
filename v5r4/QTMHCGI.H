/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:   qtmhcgi.h                                     */
/*                                                                   */
/* Header File Description:  CGI interface module header file        */
/*                                                                   */
/* 5769-DG1                                                          */
/* (C) Copyright IBM Corp. 1998                                      */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/* Description: This CGI interface module header provides interfaces */
/*              for CGI scripts (user programs that can be called by */
/*              the HTTP server) to meet the HTTP-defined "Common    */
/*              Gateway Interface."                                  */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None                                              */
/*                                                                   */
/* Function Prototype List: QtmhGetEnv   - get environment variable  */
/*                          QtmhRdStin   - read from stdin           */
/*                          QtmhWrStout  - write to stdout           */
/*                          QtmhCvtDB    - convert from CGI string to*/
/*                                         structure according to DDS*/
/*                                         data definition.          */
/*                          QtmhPutEnv   - put environment variable  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D94109       3D20  960202 Finkenaur: HTTP server new include */
/* $A1= D94857       4D10  961115 Silber   : Add QtmhPutEnv          */
/* $A2= D95842       4D30  980310 Rochester: include new .h          */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QTMHCGI_H
#define _QTMHCGI_H

#ifndef __QTMH_EXTERN
    #ifdef __ILEC400__
        #define QTMH_EXTERN extern
    #else
        #define QTMH_EXTERN extern "C"
    #endif

    #define __QTMH_EXTERN
#endif


/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/
#include <qzhbcgi.h>                                          /* @A2A*/
/*********************************************************************/
/*  Macros                                                           */
/*********************************************************************/

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/

/*********************************************************************/
/*  Function Prototypes                                              */
/*********************************************************************/

#endif /* _QTMHCGI_H */

