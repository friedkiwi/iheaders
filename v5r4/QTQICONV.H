 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTQICONV                                   */
 /*                                                                */
 /* Descriptive Name: Codeset conversion API.                      */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Include header file for the QtqIconvOpen API.     */
 /*                                                                */
 /* Header Files Included: iconv.h                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: QtqCode_T                                      */
 /*                                                                */
 /* Function Prototype List: QtqIconvOpen()                        */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2871400     3D10  940227 BRINKER:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef    __qtqiconv_H
  #define  __qtqiconv_H

#include <iconv.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

typedef struct QtqCode {
  int  CCSID;
  int  cnv_alternative;
  int  subs_alternative;
  int  shift_alternative;
  int  length_option;
  int  mx_error_option;
  char reserved[8];
} QtqCode_T;

#ifndef __ILEC400__
  extern "C" {
#endif

iconv_t QtqIconvOpen(QtqCode_T *tocode,
                     QtqCode_T *fromcode);

#ifndef __ILEC400__
 }
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif                                       /* #ifndef __qtqiconv_H */
