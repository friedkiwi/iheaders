#ifndef _QGYRHRL_H_
#define _QGYRHRL_H_

/***********************************************************************
//                     Include File Description
// *********************************************************************
//  Header File Name: H/QGYRHRL
//
//  Descriptive Name: Retrieve Hardware Resource List API
//
//  Description:
//  The Retrieve Hardware Resource List API retrieves a list of hardware
//  resource names, and other hardware resource information fields, that
//  provide a summary description for each resource.
//
//  5722-SS1 (C) Copyright IBM Corp. 1996,2001
//  Refer to copyright instructions form no. G120-2083
//
//  Header files included:
//    h/qgyrhrcm
//
//  Macros list:
//    none
//
//  Function prototype list:
//    QGYRHRL
//
//  Structure list:
//    none
//
//  End Include File Description
*/

/***********************************************************************
//                          Change Log
// *********************************************************************
//
//  Flag  Reason    Date      Userid    Description
//  ----  --------  --------  --------  -----------
//  $A0   D94532    02/25/96  ROCHESTR  New include file.
//  $A1= D98212.5   010300    gchaney : Teraspace stage 2
//
// End Change Activity
*/


/***********************************************************************
//                          Includes
// ********************************************************************/

#ifdef __AIXxiCC__
  #include "qgyrhrcm.cleinc"
#else
  #include <qgyrhrcm.h>
#endif

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
    #pragma datamodel(P128)                                   /* @A1A*/
#endif                                                        /* @A1A*/


/***********************************************************************
//                     Function Prototypes
// ********************************************************************/

#if   __AIXxiCC__
  #pragma linkage(QGYRHRL,OS,nowiden)
  extern "OS"
#elif __ILEC400__
  #pragma linkage(QGYRHRL,OS,nowiden)
#else
  extern "OS"
#endif

void QGYRHRL(char *,                    /* receiver variable */
             qgyUint32 *,               /* length of receiver variable */
             char *,                    /* format name */
             qgyUint32 *,               /* resource category */
             char *);                   /* error code */


#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
    #pragma datamodel(pop)                                    /* @A1A*/
#endif                                                        /* @A1A*/

#endif /* _QGYRHRL_H_ */
