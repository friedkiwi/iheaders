 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QALGENA                                    */
 /*                                                                */
 /* Descriptive Name: Generate Alert                               */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Generate Alert API, an alert API, creates an  */
 /*              alert for a particular message ID.                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QALGENA                               */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940227 ROCH:     New Include           */
 /* $A1= D98212.1     v5r1m0 991101 gchaney: teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QALGENA_h
#define QALGENA_h

 #if (__OS400_TGTVRM__>=510)                                  /*@A1*/
    #pragma datamodel(P128)                                   /*@A1*/
 #endif                                                       /*@A1*/

 #ifdef __ILEC400__
      #pragma linkage (QALGENA,OS,nowiden)
 #else
      extern "OS"
 #endif
 /*******************************************************************/
 /* Prototype for QALGENA API.                                      */
 /*******************************************************************/
void QALGENA ( void *,       /* Receiver Variable                 */
               int   ,         /* Receiver Variable Length          */
               int  *,         /* Size of Alert                     */
               void *,         /* Qualified Alert Table Name        */
               char *,         /* Message ID                        */
               void *,         /* Message Data                      */
               int   ,         /* Message Data Length               */
               void *);        /* Error Code                        */

#if (__OS400_TGTVRM__>=510)                                    /*@A1*/
    #pragma datamodel(pop)                                     /*@A1*/
#endif                                                         /*@A1*/

#endif
