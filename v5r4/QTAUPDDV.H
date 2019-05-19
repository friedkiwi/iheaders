/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/QTAUPDDV                                     */
 /*                                                                  */
 /* Descriptive Name: Update Device Microcode   QTAUPDDV             */
 /*                                                                  */
 /* Header Files Included: None.                                     */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Function Prototype List: QTAUPDDV                                */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
 /* ---- ------------ ----- ------ --------- ------------------------*/
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/
 #ifndef QTAUPDDV_h
 #define QTAUPDDV_h
 #pragma datamodel(P128)

 /********************************************************************/
 /* Prototype for calling Update Device Microcode   QTAUPDDV API     */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTAUPDDV,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QTAUPDDV (char *,             /* Device name                 */
                  void *,             /* Source path name            */
                  ...);	              /* Optional Parameter Group:   */
                     /* int               Length of source path name */
                     /* char *            Format name                */
                     /* void *            Error code                 */


 /********************************************************************/
 /* Constant for format name                                         */
 /********************************************************************/
 #define TAUD0100 "TAUD0100"
 #define TAUD0200 "TAUD0200"

 #pragma datamodel(pop)
 #endif
