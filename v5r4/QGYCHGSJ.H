 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYCHGSJ                                   */
 /*                                                                */
 /* Descriptive Name: Change Server Job                            */
 /*                                                                */
 /* 5763-SS1,5722-SS1 (C) Copyright IBM Corp. 1996,2001            */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYCHGSJ API sets the maximum number of       */
 /*              auxiliary server jobs allowed for a server job    */
 /*              with the AS/400.                                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QGYCHGSJ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960530 DPW       New Include           */
 /* $A1= P9934931     5d10  991105 ROCH      Teraspace Stage 2     */
/*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYCHGSJ_h
 #define QGYCHGSJ_h
 #if(__OS400_TGTVRM__>=510)                                 /* @A1A*/
   #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for calling QGYCHGSJ API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYCHGSJ,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYCHGSJ  (int,        /* Number of aux server jobs allowed */
                   void *      /* Error code                        */
                  );

 #if(__OS400_TGTVRM__>=510)                                 /* @A1A*/
   #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif

