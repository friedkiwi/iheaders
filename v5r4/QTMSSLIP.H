#ifndef _QTMSSLIP_H
   #define _QTMSSLIP_H

/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QTMSSLIP                                     */
/*                                                                  */
/* Descriptive Name: SMTP Retry Mail (TMS) API.                     */
/*                                                                  */
/* 5769-TC1  (C) Copyright IBM Corp. 1998                           */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/* Description: Include header file for QtmsRetryMail API.          */
/*                                                                  */
/*                                                                  */
/* Header Files Included:                                           */
/*               None.                                              */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List:                                                  */
/*              None                                                */
/*                                                                  */
/* Function Prototype List:                                         */
/*                                                                  */
/*                 QtmsRetryMail                                    */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ -------   ----------------------- */
/* $A0= P3666097     4P20  980216 PFLUGFA:   New Include for V4R2   */
/* $A1= P9924887     v5r1m0.rtcp  PFLUGFA:  Changes for new Storage */
/*                                          model in V5R1.          */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/* Additional notes about the Change Activity                       */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/*** END HEADER FILE SPECIFICATIONS *********************************/


/*------------------------------------------------------------------*/
/** Various Defines                                                **/
/*------------------------------------------------------------------*/
#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(P128)                                  /* @A1A*/
#endif                                                       /* @A1A*/

/********************************************************************/
/* Prototype for calling  Retry Mail                                */
/*(QtmsRetryMail) API                                               */
/********************************************************************/
#ifdef __ILEC400__
   #pragma argument(QtmsRetryMail, OS, NOWIDEN)

#else
   extern "C"
#endif

  int QtmsRetryMail( void );

#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(pop)                                   /* @A1A*/
#endif                                                       /* @A1A*/


#endif /*_QTMSSLIP_H*/
