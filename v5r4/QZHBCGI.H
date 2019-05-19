/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/* Description: This CGI interface module header provides interfaces */
/*              for CGI scripts (user programs that can be called by */
/*              the HTTP server) to meet the HTTP-defined "Common    */
/*              Gateway Interface."                                  */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None                                              */
/*                                                                   */
/* Function Prototype List:                                          */
/*                   QtmhGetEnv      - get environment variable      */
/*                   QzsrGetEnvCCSID - get environment variable @B5A */
/*                                     with CCSID                    */
/*                   QtmhRdStin      - read from stdin               */
/*                   QtmhWrStout     - write to stdout               */
/*                   QtmhCvtDB       - convert from CGI string to    */
/*                                      structure according to DDS   */
/*                                      data definition.             */
/*                   QtmhPutEnv      - put environment variable      */
/*                   QzsrPutEnvCCSID - put environment variable      */
/*                                     with CCSID               @B5A */
/*                   QzhbCgiUtils    - generate full response        */
/*                                     for non-parsed header CGI     */
/*                                     programs                      */
/*                   QzhbCgiParse    - Parse the QUERY_STRING        */
/*                                     environment variable or       */
/*                                     STDIN for CGI programs        */
/*                   QzhbCgiRecvState_r - Receives state from Web    */
/*                                         Server                    */
/*                   QzhbCgiSendState_r - Send state to Web Server   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $B0= D95742       4D30  980310 Rochester: New for DGO             */
/* $B2= P9928287     5D10  000926 frenkel:  High availability support*/
/* $B3= P9940230     5D10  000926 frenkel: High availability support */
/*                                         put #ifdef around #pragma */
/* $B4=P9944157	     5F10  022701 Wingerts  Add missing close comment*/
/*                                          before column 80         */
/* $B5=P9A96962      5D40  050512 ROCH:    New env variable APIs     */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QZHBCGI_H
#define _QZHBCGI_H
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifndef __QTMH_EXTERN
    #ifdef __ILEC400__
        #define QTMH_EXTERN extern
    #else
        #define QTMH_EXTERN extern "C"
    #endif

    #define __QTMH_EXTERN
#endif


/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/

/*********************************************************************/
/*  Macros                                                           */
/*********************************************************************/

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/

/*********************************************************************/
/*  Function Prototypes                                              */
/*********************************************************************/

/*********************************************************************/
/* HTTP CGI Get Environment Variable API prototype.                  */
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QtmhGetEnv, OS)
#endif /* @B3A */
QTMH_EXTERN void QtmhGetEnv(char *, /* env. variable value receiver */
                            int *,   /* env. variable receiver length*/
                            int *,   /* length of env. variable value*/
                            char *,  /* env. variable name           */
                            int *,   /* env. variable name length    */
                            void *); /* error code.                  */
/*********************************************************************/
/* HTTP CGI Get Environment Variable with CCSID API prototype    @B5A*/
/*********************************************************************/
#ifdef __ILEC400__
#pragma argument(QzsrGetEnvCCSID, OS)
#endif
QTMH_EXTERN void QzsrGetEnvCCSID(char *, /* env var value receiver*/
                        int *,   /* env variable receiver length     */
                        int *,   /* length of env. variable value    */
                        char *,  /* env variable name                */
                        int *,   /* env variable name length         */
                        int *,   /* CCSID of request variable        */
                        int *,   /* CCSID of returned environment variable */
                        void *); /* error code.                      */



/*********************************************************************/
/* HTTP CGI Read from Standard Input (stdin) API prototype.          */
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QtmhRdStin, OS)
#endif /* @B3A */
QTMH_EXTERN void QtmhRdStin(void *,  /* stdin data receiver         */
                            int *,   /* stdin data receiver length   */
                            int *,  /* length of data read from stdin*/
                            void *); /* error code.                  */


/*********************************************************************/
/* HTTP CGI Write to Standard Output (stdout) API prototype.         */
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QtmhWrStout, OS)
#endif /* @B3A */
QTMH_EXTERN void QtmhWrStout(void *, /* stdout data receiver        */
                            int *,   /* data length                  */
                            void *); /* error code.                  */


/*********************************************************************/
/* HTTP CGI Convert CGI keyword parms to structure using DDS file    */
/*  API prototype.                                                   */
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QtmhCvtDb, OS)
#endif /* @B3A */
QTMH_EXTERN void QtmhCvtDb(void *, /* qualified DDS file name.      */
                           char *, /* buffer containing the string of
                                      CGI keyword parameters to be
                                      parsed.                        */
                           int *,  /* length of the string of CGI
                                      keyword parameters to be parsed*/
                           void *, /* output buffer into which the
                                      parsed parameter values will be
                                      stored.                        */
                           int *,  /* length of buffer provided for
                                      parsed parameter values.       */
                           int *,  /* response length .              */
                           int *,  /* response code   .              */

                           void *); /* error code.                   */


/*********************************************************************/
/* HTTP CGI Put Environment Variable API prototype.              @A1A*/
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QtmhPutEnv, OS)
#endif /* @B3A */
QTMH_EXTERN void QtmhPutEnv(char *,  /* env string ("var=value")  */
                            int *,   /* env string length            */
                            void *); /* error code.                  */

/*********************************************************************/
/* HTTP CGI Put Environment Variable with CCSID API prototype.   @B5A*/
/*********************************************************************/
#ifdef __ILEC400__
#pragma argument(QzsrPutEnvCCSID, OS)
#endif
QTMH_EXTERN void QzsrPutEnvCCSID(char *, /* env string ("var=value")*/
                           int *,   /* env string length             */
                           int *,   /* CCSID of environment string   */
                           void *); /* error code.                   */

/*********************************************************************/
/* HTTP CGI CgiParse API prototype                               @B0A*/
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QzhbCgiParse, OS)
#endif /* @B3A */
QTMH_EXTERN void QzhbCgiParse(char *,  /* Command string             */
                              char *,  /* Output format              */
                              char *,  /* Target Buffer              */
                              int *,   /* length of target buffer    */
                              int *,   /* length of response         */
                              void *); /* error code.                */


/*********************************************************************/
/* HTTP CGI CgiUtils API prototype                               @B0A*/
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QzhbCgiUtils, OS)
#endif /* @B3A */
QTMH_EXTERN void QzhbCgiUtils(char *,  /* Command string             */
                              void *); /* error code.                */


/*********************************************************************/
/* HTTP CGI CgiSendState_r API prototype                         @B2A*/
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QzhbCgiSendState_r, OS)                      /* @B2A */
#endif /* @B3A */
QTMH_EXTERN void QzhbCgiSendState_r(char *,  /* CGI's state string    @B2A*/
				    int *,  /* length of CGI's state @B2A*/
				    void *); /* error code.           @B2A*/


/*********************************************************************/
/* HTTP CGI CgiRecvState_r API prototype                         @B2A*/
/*********************************************************************/
#ifdef __ILEC400__ /* @B3A */
#pragma argument(QzhbCgiRecvState_r, OS)                      /* @B2A */
#endif /* @B3A */
QTMH_EXTERN void QzhbCgiRecvState_r(char *,  /* Target Buffer         @B4C*/
				    int *,  /* length of target buffer      @B2A*/
				    int *,  /* length of available response @B2A*/
				    int *,   /* continuation handle          @B2A*/
				    void *); /* error code.                  @B2A*/


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* _QTMHCGI_H */

