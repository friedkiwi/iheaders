 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZLOGFX                                   */
 /*                                                                */
 /* Descriptive Name: Log PTF Information                          */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Log Problem Temporary Fix Information API     */
 /*              allows you to specify the device from which PTFs  */
 /*              are loaded as *SERVICE.                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpz_PTF_Log_Info_t                             */
 /*                                                                */
 /* Function Prototype List: QPZLOGFX                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPZLOGFX_h
#define QPZLOGFX_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QPZLOGFX             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QPZLOGFX, OS, nowiden)
#else
  extern "OS"
#endif
void QPZLOGFX (void *,            /* PTF information                */
               char *,            /* Request type                   */
               void *,            /* Qualified file name            */
               char *,            /* Member name                    */
               void *);           /* Error code                     */

/********************************************************************/
/*  Structure for PTF Information format                            */
/********************************************************************/
typedef _Packed struct Qpz_PTF_Log_Info
   {
                 char PTF_ID[7];
                 char PID[7];
                 char Rls_Lvl[6];
                 char Reserved[30];
   } Qpz_PTF_Log_Info_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
