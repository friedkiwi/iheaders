 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QECCVTEW                                   */
 /*                                                                */
 /* Descriptive Name: Convert Edit Word API                        */
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
 /* Description: The Convert Edit Word APi translates an edit word */
 /*              specification into an edit mask.                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QECCVTEW                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $A1= D9722400     4D40  980515 V2CIB10:  Allow optional parms  */
 /* $A2= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QECCVTEW_h
 #define QECCVTEW_h

  #if (__OS400_TGTVRM__>=510)                              /* @A2A */
      #pragma datamodel(P128)                              /* @A2A */
  #endif                                                   /* @A2A */


 /******************************************************************/
 /*  Prototype for QECCVTEW API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QECCVTEW,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QECCVTEW(void *,          /* Edit mask                       */
               int  *,          /* Edit mask length                */
               int  *,          /* Receiver variable length        */
               void *,          /* Edit word                       */
               int,             /* Edit word length                */
               void *,          /* Error code                      */
               ...);            /* Optional parameters:            */
                                /*   Source length     int *       */
                                /*   Currency symbol   char *      */


  #if (__OS400_TGTVRM__>=510)                              /* @A2A */
      #pragma datamodel(pop)                               /* @A2A */
  #endif                                                   /* @A2A */



 #endif
