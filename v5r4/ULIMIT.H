#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

#ifndef __ulimit_h
  #define __ulimit_h 1

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name:        ulimit.h                                  */
/*                                                                    */
/* Descriptive Name:        Ulimit commands                           */
/*                                                                    */
/* 5722-SS1                                                           */
/* (C) Copyright IBM Corp. 2001,2001                                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON    LEVEL       DATE   CHANGE DESCRIPTION               */
/* ---- --------- ----------- ------ -------------------------------- */
/* $A0= D98532    v5r2m0.xpf  010304 New include                      */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

#pragma datamodel(P128)

/**********************************************************************/
/* Constants                                                          */
/**********************************************************************/

#define UL_GETFSIZE     0    /* Get maximum file size */
#define UL_SETFSIZE     1    /* Set maximum file size */

/**********************************************************************/
/* Function Prototypes                                                */
/**********************************************************************/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

QBFC_EXTERN long int ulimit(int, ...);

#pragma datamodel(pop)

#endif /* __ulimit_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
