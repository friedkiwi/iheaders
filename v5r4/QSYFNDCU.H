#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsyfndcu.H                                   */
 /*                                                                */
 /* Descriptive Name: Find certificate user                        */
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
 /*              the definition for finding the user that          */
 /*              has an association with the certificate.          */
 /*                                                                */
 /* Header Files Included: qsydigid.h                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QSYFNDCU                              */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS DATE   PGMR  COMMENTS                    */
 /*    ---- -------- ---- ------ ----  --------------------------- */
 /*    $A0= D9524900 4D20 970501 ROCH: New.                        */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QSYFNDCU_H
 #define _QSYFNDCU_H

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <qsydigid.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Prototype definitions                                            */
 /********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYFNDCU,OS,nowiden)
  #else
       extern "OS"
  #endif
  void QSYFNDCU(
                char *,        /*  Certificate             */
                int   ,        /*  Type                    */
                int   ,        /*  Length of certificate   */
                char *,        /*  User                    */
                void *);       /*  Error code              */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif /* _QSYFNDCU_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
