
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS **************************/
/*                                                             */
/*  Header File Name: tirpccom.h                               */
/*  Header File Description: Defines prototypes, macros, and   */
/*                           structures to be used by various  */
/*                           RPC and Network Selection APIs    */
/*                                                             */
/*  5769-SS1                                                   */
/*  (C) Copyright IBM Corp. 1998, 1998                         */
/*  All rights reserved.                                       */
/*  US Government Users Restricted Rights -                    */
/*  Use, duplication or disclosure restricted                  */
/*  by GSA ADP Schedule Contract with IBM Corp.                */
/*                                                             */
/*  Licensed Materials-Property of IBM                         */
/*                                                             */
/*                                                             */
/*  Header Files Included:  None                               */
/*                                                             */
/*  Macros list:  None                                         */
/*                                                             */
/*  Structure List: netbuf                                     */
/*                                                             */
/*  Function prototype list: None                              */
/*                                                             */
/*  Change Activity:                                           */
/*  CFD List:                                                  */
/*                                                             */
/*  FLAG REASON   LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/*  ---- -------  ----- ----   -----    -------------------    */
/*  $A0= D94971   4D20  980227 ROCH     New Include            */
/*  End CFD List.                                              */
/*                                                             */
/*  Additional notes about the Change Activity                 */
/*  End Changed Activity.                                      */
/*                                                             */
/*** END HEADER FILE SPECIFICATIONS ****************************/

#ifndef __TIRPCCOM__
#define __TIRPCCOM__ 1
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


#ifndef __QBFC_EXTERN
   #ifdef __ILEC400__
      #define QBFC_EXTERN extern
   #else
      #define QBFC_EXTERN extern "C"
   #endif
   #define __QBFC_EXTERN
#endif

/*Used by many TI-RPC interfaces to communicate information*/
struct netbuf {
       unsigned  maxlen;
       unsigned  len;
       char *    buf;
};
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /* ndef __TIRPCCOM__ */
#ifdef __cplusplus
   #pragma info(restore)
#else
   #pragma checkout(resume)
#endif
