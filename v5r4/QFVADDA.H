 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFVADDA                                    */
 /*                                                                */
 /* Descriptive Name: Add Activity.                                */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,1994,2001      */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Add Activity API adds an activity to the      */
 /*              specified change request description.             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QFVADDA                               */
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

 #ifndef QFVADDA_h
 #define QFVADDA_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for calling Add Activity API (QFVADDA)               */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QFVADDA,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QFVADDA (void *,           /* Change request description     */
               char *,           /* Activity                       */
               char *,           /* Activity type                  */
               char *,           /* Destination format             */
               void *,           /* Destination                    */
               int,              /* Number of destinations         */
               void *,           /* Condition list                 */
               int,              /* Number of conditions           */
               void *,           /* Start time                     */
               char *,           /* Hold                           */
               char *,           /* Function parameters            */
               int,              /* Function parameters length     */
               char *,           /* Text                           */
               char *,           /* Replace                        */
               char *,           /* Activity added                 */
               void *);          /* Error code                     */

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif
