 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFVRMVA                                    */
 /*                                                                */
 /* Descriptive Name: Remove activity.                             */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Remove Activity API removes an activity from  */
 /*              the specifiec change request description.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QFVRMVA                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
 /* ---- --------- ----- ------ --------- -------------------------*/
 /* $A0= PM601636  3D10  940619 HHUGO    :New  include             */
 /* $A1= D98212.2 v5r1m0 010300 gchaney : Teraspace stage 2        */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFVRMVA_h
 #define QFVRMVA_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for calling Remove Activity API (QFVRMVA)            */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QFVRMVA,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QFVRMVA (void *,           /* Change request description     */
               char *,           /* Activity                       */
               void *);          /* Error code                     */

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif
