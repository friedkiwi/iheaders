 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QECEDT                                     */
 /*                                                                */
 /* Descriptive Name: Edit API                                     */
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
 /* Description: The Edit API uses an edit mask to transform a     */
 /*              numeric from its internal format to a character   */
 /*              form suitable for displaying.                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QECEDT                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $A1= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QECEDT_h
 #define QECEDT_h

  #if (__OS400_TGTVRM__>=510)                              /* @A1A */
      #pragma datamodel(P128)                              /* @A1A */
  #endif                                                   /* @A1A */


 /******************************************************************/
 /*  Prototype for QECEDT API                                      */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QECEDT,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QECEDT(void *,            /* Receiver variable               */
             int,               /* Receiver variable length        */
             void *,            /* source variable                 */
             char *,            /* Source variable class           */
             int,               /* Source variable precision       */
             void *,            /* Edit mask                       */
             int,               /* Edit mask length                */
             char *,            /* Zero balance fill character     */
             void *);           /* Error code                      */

  #if (__OS400_TGTVRM__>=510)                              /* @A1A */
      #pragma datamodel(pop)                               /* @A1A */
  #endif                                                   /* @A1A */


 #endif
