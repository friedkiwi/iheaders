 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWTSETPX                                   */
 /*                                                                */
 /* Descriptive Name: Set profile exits                            */
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
 /* Description: The Retrieve profile information API              */
 /*              - This API sets the  preattention flags and       */
 /*                presystem request flags in the interactive      */
 /*                userprofile based on the values passed in       */
 /*                                                                */
 /* Header Files Included: none                                    */
 /*                                                                */
 /* Macros List: none                                              */
 /*                                                                */
 /* Structure List: Qwt_SET_ATTN0100                               */
 /*                 Qwt_SET_SREQ0100                               */
 /*                                                                */
 /* Function Prototype List: QWTSETPX                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QWTSETPX_h
#define QWTSETPX_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #ifdef __ILEC400__
       #pragma linkage (QWTSETPX,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QWTSETPX                                  */
/********************************************************************/

void QWTSETPX(int,                  /* Number of flags               */
              void *,               /* Exit program flags            */
              char *,               /* Format of information returned*/
              char *,               /* User ID name                  */
              void *);              /* Error code                    */

/*********************************************************************/
/* Structure for format ATTN0100                                     */
/****                                                                */
/*  NOTE:  The following type definition only defines the fixed      */
/*         portion of the format.  Any varying length fields must    */
/*         be defined by the user.                                   */
/*********************************************************************/
typedef _Packed struct Qwt_SET_ATTN0100
{
     /*int  Attention_Flags[];*/  /* Varying length                 */
} Qwt_SET_ATTN0100_t;

/*********************************************************************/
/* Structure for format SREQ0100                                     */
/****                                                                */
/*  NOTE:  The following type definition only defines the fixed      */
/*         portion of the format.  Any varying length fields must    */
/*         be defined by the user.                                   */
/*********************************************************************/
typedef _Packed struct Qwt_SET_SREQ0100
{
     /*int  System_Request_Flags[];*/  /* Varying length             */
} Qwt_SET_SREQ0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
