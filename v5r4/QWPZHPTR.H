/*** START HEADER FILE SPECIFICATIONS ***************************/
/*                                                              */
/* Header File Name: H/QWPZHPTR                                 */
/*                                                              */
/* Descriptive Name: Host Print Transform API                   */
/*                                                              */
/* 5716-SS1  (C) Copyright IBM Corp. 1994,1995                  */
/* All rights reserved.                                         */
/* US Government Users Restricted Rights -                      */
/* Use, duplication or disclosure restricted                    */
/* by GSA ADP Schedule Contract with IBM Corp.                  */
/*                                                              */
/* Licensed Materials-Property of IBM                           */
/*                                                              */
/*                                                              */
/* Description: The Host Print Transform API provides an        */
/*              interface to the Host Print Transform.          */
/*                                                              */
/*                                                              */
/* Header Files Included: h/qwpz                                */
/*                                                              */
/* Macros List: None.                                           */
/*                                                              */
/* Structure List: Qwpz_HPT_Opt_SpecIn_t                        */
/*                 Qwpz_HPT_Opt_SpecOut_t                       */
/*                                                              */
/* Structure List: None.(Structures in QWPZ)                    */
/*                                                              */
/* Function Prototype List: QWPZHPTR.                           */
/*                                                              */
/* Change Activity:                                             */
/*                                                              */
/* CFD List:                                                    */
/*                                                              */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ ----- ------ --------- --------------------*/
/* $A0= D9171000     3D60  941102 Stangler: New Include         */
/*                                                              */
/* End CFD List.                                                */
/*                                                              */
/*  Additional notes about the Change Activity                  */
/* End Change Activity.                                         */
/*** END HEADER FILE SPECIFICATIONS *****************************/

 #ifndef QWPZHPTR_h
 #define QWPZHPTR_h

 /******************************************************************/
 /* Includes for structures.                                       */
 /******************************************************************/
    #include <qwpz.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Host Print Transform API.                */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QWPZHPTR,OS,nowiden)
  #else
       extern "OS"
  #endif

 void QWPZHPTR(int  *,           /* Process Option               */
               void *,           /* Option specific information  */
               int  *,           /* Length of option specific
                                    information                  */
               void *,           /* Spooled file data buffer     */
               int  *,           /* Length of spooled file data
                                    buffer                       */
               void *,           /* Option specific output info  */
               int  *,           /* Length of option specific
                                    output information           */
               int  *,           /* Length of option specific
                                    output information available */
               void *,           /* Transformed data buffer      */
               int  *,           /* Length of transformed data
                                    buffer                       */
               int  *,           /* Length of transformed data
                                    available                    */
               void *);          /* Error code                   */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
