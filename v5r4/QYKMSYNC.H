/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2005                                */
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
/*********************************************************************/
/*                                                                   */
/* Header File Name: H/QYKMSYNC                                      */
/*                                                                   */
/* Descriptive Name: Support export/import entire certificate        */
/*                   stores.                                         */
/*                                                                   */
/* Description: The Export Certificate Store API will export         */
/*              all the certificates within a certificate store      */
/*              including issuers.  Private keys and labels are      */
/*              are also exported.                                   */
/*                                                                   */
/*              The Import Certificate Store API will import         */
/*              all of the certificates contained in a PKCS12 v3     */
/*              file into a certificate store.  If the certificate   */
/*              does not exist prior to the import request, it       */
/*              will be created.  If the certificate store does      */
/*              exist prior to the request, only unique              */
/*              certificate records will be imported.  Duplicate     */
/*              public keys or duplicate certificate labels will     */
/*              prevent certificates from being imported.            */
/*                                                                   */
/*              The Get Default Key Item APi will return the         */
/*              label of the defautl certificate for the             */
/*              given certificate store.  If there is no default     */
/*              certificate, NULL is returned.  If the               */
/*              length of the certificate label is longer than       */
/*              the length provided, no label is returned and        */
/*              the length of the label returned indicates how       */
/*              big the length of the label provided must be in      */
/*              order for the label to be returned.                  */
/*                                                                   */
/* Header Files Included:                                            */
/*        qusec.h       Error code structure                         */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List: None.                                            */
 /*                                                                  */
 /* Function Prototype List: QykmExportKeyStore                      */
 /*                          QykmImportKeyStore                      */
 /*                          QykmGetDefaultKeyItem                   */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* FLAG REASON      LEVEL    DATE     PGMR    CHANGE DESCRIPTION    */
 /*                         MM/DD/YY                                 */
 /* ---- ------     ------   ------   ------  ---------------------- */
 /* $A0= D99408     v5r3m0   080102    ROCH:  New Include            */
 /* $A1= D93233.1   v5r4m0   120204    ROCH:  Get Default Key Item   */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/
#ifndef QYKMSYNC_h
#define QYKMSYNC_h

#include <qusec.h>                 /* Error code structure           */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*********************************************************************/
/*  Prototypes                                                       */
/*********************************************************************/
#ifndef __ILEC400__
   extern "C" {
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

     void  QykmExportKeyStore (
                  void * volatile,  /* Certificate store path and
                                       file name to export           */
                  int  * volatile,  /* Length of certificate store
                                       path and file name            */
                  char * volatile,  /* Format of certificate store
                                       path and file name            */
                  char * volatile,  /* Certificate store password    */
                  int  * volatile,  /* Length of certificate store
                                       password                      */
                  int  * volatile,  /* CCSID of certificate store
				       password                      */
                  void * volatile,  /* Export file path and name     */
                  int  * volatile,  /* Length of export path and
                                       file name                     */
                  char * volatile,  /* Format of export path and
                                       file name                     */
                  char * volatile,  /* Version of pkcs12 file (*V3)  */
                  char * volatile,  /* Export file password          */
                  int  * volatile,  /* Length of export file
                                       password                      */
                  int  * volatile,  /* CCSID of export file
				       password                      */
                  void * volatile); /* Error information             */


     void  QykmImportKeyStore (
                  void * volatile,  /* Certificate store path and
                                       file name to import           */
                  int  * volatile,  /* Length of certificate store
                                       path and file name            */
                  char * volatile,  /* Format of certificate store
                                       path and file name            */
                  char * volatile,  /* Certificate store password    */
                  int  * volatile,  /* Length of certificate store
                                       password                      */
                  int  * volatile,  /* CCSID of certificate store
				       password                      */
                  void * volatile,  /* Import file path and name     */
                  int  * volatile,  /* Length of import path and
                                       file name                     */
                  char * volatile,  /* Format of import path and
                                       file name                     */
                  char * volatile,  /* Version of pkcs12 file (*V3)  */
                  char * volatile,  /* Import file password          */
                  int  * volatile,  /* Length of import file
                                       password                      */
                  int  * volatile,  /* CCSID of import file
				       password                      */
                  void * volatile); /* Error information             */


     void  QykmGetDefaultKeyItem (
                  void * volatile,  /* Certificate store path and
                                       file name to import           */
                  int  * volatile,  /* Length of certificate store
                                       path and file name            */
                  char * volatile,  /* Format of certificate store
                                       path and file name            */
                  char * volatile,  /* Default certficate label      */
                  int  * volatile,  /* Length of default certificate
                                       label provided                */
                  int  * volatile,  /* Length of default certificate
                                       label returned                */
                  void * volatile); /* Error information             */



#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif
#endif
