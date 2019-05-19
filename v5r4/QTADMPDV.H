 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTADMPDV                                   */
 /*                                                                */
 /* Descriptive Name: Dump Device QTADMPDV                         */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Dump Device (QTADMPDV) API                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTADMPDV                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  P3634292     3P70  112596 HOOVEY    Creation              */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTADMPDV_h
 #define QTADMPDV_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Dump Device (QTADMPDV)                   */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTADMPDV,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTADMPDV (char *,            /* Device name                  */
                char *,            /* Information type             */
                char *,            /* Problem identifier           */
                void *);           /* Error code                   */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
