 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWTRTVPX                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve profile information                 */
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
 /*              - This API retrieves preattention flags andted    */
 /*   FUNCTION:    presystem request flags based on the value in   */
 /*                format field from the interactive useprofile    */
 /*                and places it into a single receiver var in     */
 /*                the calling program. The amount of information  */
 /*                returned depends on the size of the receiver    */
 /*                variable.                                       */
 /*                                                                */
 /* Header Files Included: none                                    */
 /*                                                                */
 /* Macros List: none                                              */
 /*                                                                */
 /* Structure List: Qwt_RTV_ATTN0100                               */
 /*                 Qwt_RTV_SREQ0100                               */
 /*                                                                */
 /* Function Prototype List: QWTRTVPX                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QWTRTVPX_h
#define QWTRTVPX_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #ifdef __ILEC400__
       #pragma linkage (QWTRTVPX,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QWTRTVPX                                  */
/********************************************************************/

void QWTRTVPX(void *,               /* Receiver variable             */
              int,                  /* Length of receiver variable   */
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
typedef _Packed struct Qwt_RTV_ATTN0100
{
     int  Bytes_Return;
     int  Bytes_Avail;
     /*int  Attention_Flags[];*/  /* Varying length                 */
} Qwt_RTV_ATTN0100_t;

/*********************************************************************/
/* Structure for format SREQ0100                                     */
/****                                                                */
/*  NOTE:  The following type definition only defines the fixed      */
/*         portion of the format.  Any varying length fields must    */
/*         be defined by the user.                                   */
/*********************************************************************/
typedef _Packed struct Qwt_RTV_SREQ0100
{
     int  Bytes_Return;
     int  Bytes_Avail;
     /*int  System_Request_Flags[];*/  /* Varying length             */
} Qwt_RTV_SREQ0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
