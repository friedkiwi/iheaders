 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCLSPGAS                                   */
 /*                                                                */
 /* Descriptive Name: Store Progam Associated Space                */
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
 /* Description: The Store Program Associated Space API allows     */
 /*              you to store information in the associated space  */
 /*              of an original program model, user-state program  */
 /*              in the user domain.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QCLSPGAS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940419 SYKES:    New Include           */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QCLSPGAS_h
#define QCLSPGAS_h

 #if (__OS400_TGTVRM__>=510)                                  /*@A1A*/
     #pragma datamodel(P128)                                  /*@A1A*/
 #endif                                                       /*@A1A*/

 #ifdef __ILEC400__
      #pragma linkage (QCLSPGAS,OS,nowiden)
 #else
      extern "OS"
 #endif
 /*******************************************************************/
 /* Prototype for QCLSPGAS API.                                     */
 /*******************************************************************/
 void QCLSPGAS (void *,        /* Input Data Buffer                 */
                int   ,        /* Length of Input Data Buffer       */
                void *,        /* Qualified Program Name            */
                int   ,        /* Call Stack Counter                */
                void *,        /* Data Handle                       */
                void *);       /* Error Code                        */

 #if (__OS400_TGTVRM__>=510)                                  /*@A1A*/
     #pragma datamodel(pop)                                   /*@A1A*/
 #endif                                                       /*@A1A*/

#endif
