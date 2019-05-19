#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

#ifndef __qshell_h
  #define __qshell_h 1

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name:        qshell.h                                  */
/*                                                                    */
/* Descriptive Name:        Qshell Interpreter Header File            */
/*                                                                    */
/* 5769-SS1                                                           */
/* (C) Copyright IBM Corp. 1999,1999                                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* Description:             Qshell Interpreter support                */
/*                                                                    */
/* Header Files Included:   None                                      */
/*                                                                    */
/* Macros List:             None                                      */
/*                                                                    */
/* Structure List:          None                                      */
/*                                                                    */
/* Function Prototype List: QzshCheckShellCommand                     */
/*                          QzshSystem                                */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ------------------------- */
/* $A0= D9712000     4D40  980819 ROCH    : New include               */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

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
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

QBFC_EXTERN int QzshCheckShellCommand(const char *command,
                                      const char *path);
QBFC_EXTERN int QzshSystem(const char *command);
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /* __qshell_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
