#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  ssl.h                                          */
/*                                                                   */
/* Descriptive Name: Secure Sockets Layer (SSL) API Definition       */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* 5769-SS1, 5722-SS1                                                */
/* (C) Copyright IBM Corp. 1997, 2004                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Application source code that previously included ssl.h   */
/*          in order to pick up the prototypes for the iSeries       */
/*          native SSL_ secure socket interface should now           */
/*          directly include qsossl.h to pick up those prototypes.   */
/*                                                                   */
/*          The ssl.h header file will enventually be removed from   */
/*          qsysinc in order to eliminate a name collision with the  */
/*          OpenSSL open source implementation that also has ssl.h   */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          qsossl.h                                                 */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A6= Dxxxxxxx     5D30  020604  ROCH     include qsossl.h       */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __ssl_h
  #define __ssl_h

/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/

/*********************************************************************/
/* Application source code that previously included ssl.h            */
/* in order to pick up the prototypes for the iSeries                */
/* native SSL_ secure socket interface should now                    */
/* directly include qsossl.h to pick up those prototypes.            */
/*                                                                   */
/* The ssl.h header file will enventually be removed from            */
/* qsysinc in order to eliminate a name collision with the           */
/* OpenSSL open source implementation that also has ssl.h            */
/*********************************************************************/
#include <qsossl.h>

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
#endif /* #ifndef __ssl_h */
