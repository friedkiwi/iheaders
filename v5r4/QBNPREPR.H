/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QBNPREPR                                      */
/*                                                                   */
/* Descriptive Name: Compiler Preprocessor APIs.                     */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: Include header file for the QBNPREPR APIs.           */
/*                                                                   */
/* Header Files Included: H/QBNPREPR                                 */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QbnStartPreProcessor                     */
/*                          QbnAddExtendedAttributeData              */
/*                          QbnAddAssociatedSpaceEntry               */
/*                          QbnAddPreProcessorLevelData              */
/*                          QbnRetrieveAssociatedSpace               */
/*                          QbnAddBindtimeExit                       */
/*                          QbnEndPreProcessor                       */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D2862000     3D10  940124 BAP:      New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QBNPREPR_h
#define QBNPREPR_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/*********************************************************************/
/* Prototype for Start Preprocessor API.                             */
/*********************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QbnStartPreProcessor,OS,nowiden)
    void QbnStartPreProcessor
                          (void *);  /* Error Code                 */
 #else
    extern "C"
    void QbnStartPreProcessor
                          (void *);  /* Error Code                 */
 #endif

/*********************************************************************/
/* Prototype for Add Extended Attribute Data API.                    */
/*********************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QbnAddExtendedAttributeData,OS,nowiden)
    void QbnAddExtendedAttributeData(void *,/* Extended Attribute    */
                                    void *);/* Error Code            */
 #else
    extern "C"
    void QbnAddExtendedAttributeData(void *,/* Extended Attribute    */
                                    void *);/* Error Code            */
 #endif

/*********************************************************************/
/* Prototype for Add Associated Space Entry API.                     */
/*********************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QbnAddAssociatedSpaceEntry,OS,nowiden)
    void QbnAddAssociatedSpaceEntry(char *, /* Space Identifier      */
                                    void *, /* Space Data            */
                                    long int,
                                            /* Space Data Length     */
                                    char *, /* Space Options         */
                                    void *);/* Error Code            */
 #else
    extern "C"
    void QbnAddAssociatedSpaceEntry(char *, /* Space Identifier      */
                                    void *, /* Space Data            */
                                    long int *,
                                            /* Space Data Length     */
                                    char *, /* Space Options         */
                                    void *);/* Error Code            */
 #endif

/*********************************************************************/
/* Prototype for Add Preprocessor Level Data API.                    */
/*********************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QbnAddPreProcessorLevelData,OS,nowiden)
    void QbnAddPreProcessorLevelData(char *,/* Level Data            */
                                    void *);/* Error Code            */
 #else
    extern "C"
    void QbnAddPreProcessorLevelData(char *,/* Level Data            */
                                    void *);/* Error Code            */
 #endif

/*********************************************************************/
/* Prototype for Retrieve Associated Space API.                      */
/*********************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QbnRetrieveAssociatedSpace,OS,nowiden)
    void QbnRetrieveAssociatedSpace(void *, /* User Space            */
                                    long int,
                                            /* Call Level            */
                                    char *, /* Space Identifier      */
                                    void *);/* Error Code            */
 #else
    extern "C"
    void QbnRetrieveAssociatedSpace(void *, /* User Space            */
                                    long int *,
                                            /* Call Level            */
                                    char *, /* Space Identifier      */
                                    void *);/* Error Code            */
 #endif

/*********************************************************************/
/* Prototype for Add Bindtime Exit API.                              */
/*********************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QbnAddBindtimeExit,OS,nowiden)
    void QbnAddBindtimeExit(void *,         /* Exit Program Name     */
                            void *,         /* Exit Program Data     */
                            long int,       /* Exit Data Length      */
                            void *);        /* Error Code            */
 #else
    extern "C"
    void QbnAddBindtimeExit(void *,         /* Exit Program Name     */
                            void *,         /* Exit Program Data     */
                            long int  *,    /* Exit Data Length      */
                            void *);        /* Error Code            */
 #endif

/*********************************************************************/
/* Prototype for End Preprocessor API.                               */
/*********************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QbnEndPreProcessor,OS,nowiden)
    void QbnEndPreProcessor(void *,         /* Input Source File     */
                            char *,         /* Input Source Member   */
                            void *,         /* Output Source File    */
                            char *,         /* Output Source Member  */
                            void *,         /* Exit Program Name     */
                            void *,         /* Exit Program Data     */
                            long int,       /* Exit Data Length      */
                            void *);        /* Error Code            */
 #else
    extern "C"
    void QbnEndPreProcessor(void *,         /* Input Source File     */
                            char *,         /* Input Source Member   */
                            void *,         /* Output Source File    */
                            char *,         /* Output Source Member  */
                            void *,         /* Exit Program Name     */
                            void *,         /* Exit Program Data     */
                            long int  *,    /* Exit Data Length      */
                            void *);        /* Error Code            */
 #endif

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
