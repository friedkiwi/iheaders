 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLPISLNG                                   */
 /*                                                                */
 /* Descriptive Name: Install Secondary Language                   */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Install Secondary Language API installs the   */
 /*              secondary language that is specified on the       */
 /*              language ID parameter                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLPISLNG                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D60  941113 THANSON   New Include           */
 /* $A1= P3984880     3D60  950317 BLOCKER   Add __cplusplus defs  */
 /* $A2= PTH01765     3D60  950816 BLOCKER   restored --> restore  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLPISLNG_h
#define QLPISLNG_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 #ifdef __cplusplus
   extern "C" {
   #pragma info(none)
 #endif

/********************************************************************/
/*  Prototype for calling Software Product API QLPISLNG             */
/********************************************************************/
#ifdef __cplusplus
   extern "OS"
#else
   #pragma linkage (QLPISLNG, OS, nowiden)
#endif
void QLPISLNG (char *,            /* NLV language ID                */
               char *,            /* Device                         */
               char *,            /* Interactive mode screen I/O ind*/
               void *);           /* Error code                     */


#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif                            /* #ifndef QLPISLNG_h             */


