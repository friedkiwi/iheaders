#ifndef _QGYRHR_H_
#define _QGYRHR_H_

/***********************************************************************
//                     Include File Description
// *********************************************************************
//  Header File Name: H/QGYRHR
//
//  Descriptive Name: Retrieve Hardware Resource APIs
//
//  Description:
//  APIs that are in the QGYRHR service program.
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
//    QgyRtvHdwRscList
//    QgyRtvHdwRscInfo
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
//  $A1= D98212.5   010300 gchaney: Teraspace stage 2
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

/**********************************************************************
//                     Function Prototypes
// *******************************************************************/

#ifdef __ILEC400__
  #pragma argument(QgyRtvHdwRscList,OS,nowiden)
  #pragma argument(QgyRtvHdwRscInfo,OS,nowiden)
#else
  extern "C" {
#endif

/* retrieve hardware resource list */
void QgyRtvHdwRscList(char *,           /* receiver variable */
                      qgyUint32 *,      /* length of rcvr variable */
                      char *,           /* format name */
                      qgyUint32 *,      /* resource category */
                      char *);          /* error code */

/* retrieve hardware resource information */
void QgyRtvHdwRscInfo(char *,           /* receiver variable */
                      qgyUint32 *,      /* length of rcvr variable */
                      char *,           /* format name */
                      char *,           /* resource name */
                      char *);          /* error code */

#ifndef __ILEC400__
  }
#endif

#if (__OS400_TGTVRM__>=510)                               /* @A1A*/
    #pragma datamodel(pop)                                /* @A1A*/
#endif                                                    /* @A1A*/

#endif /* _QGYRHR_H_ */
