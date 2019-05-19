#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsyrmvuc.H                                   */
 /*                                                                */
 /* Descriptive Name: Remove User Certificates                     */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1997,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Digital Certificate ID include provides       */
 /*              the definition for removing certificate           */
 /*              with a user.                                      */
 /*                                                                */
 /* Header Files Included: qsydigid.h                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSYRMVUC                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS DATE   PGMR  COMMENTS                    */
 /*    ---- -------- ---- ------ ----  --------------------------- */
 /*    $A0= D95249   4D20 970501 ROCH: New Include.                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QSYRMVUC_H
 #define _QSYRMVUC_H

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <qsydigid.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Prototype for calling Digital Certificate ID API QSYRMVUC        */
 /********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRMVUC,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRMVUC(
              char *,        /*   User profile           */
              char *,        /*   Certificate            */
              int   ,        /*   Type                   */
              int   ,        /*   Length of certificate  */
              void *);       /*   Error code             */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif /* _QSYRMVUC_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
