/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QDCXLATE                                   */
/*                                                                */
/* Descriptive Name: QDCXLATE API header                          */
/*                                                                */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: This is the C header for the QDCXLATE API.        */
/*                                                                */
/* Header Files Included: decimal/h                               */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QDCXLATE                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940519 BRINKER:  New Include           */
/* $A1= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QDCXLATE_h
#define QDCXLATE_h

#include <decimal.h>

#if (__OS400_TGTVRM__>=510)                       /* @A1A */
    #pragma datamodel(P128)                       /* @A1A */
#endif                                            /* @A1A */

/******************************************************************/
/* Prototype for calling QDCXLATE API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QDCXLATE,OS,nowiden)
#else
      extern "OS"
#endif
void QDCXLATE (_Decimal(5,0) *,/* Length of data being converted  */
               char *,         /* Conversion data                 */
               char *,         /* SBCS conversion table name      */
               ...);           /* Optionals:
                                    SBCS conversion table library
                                    Output data
                                    Length of output buffer
                                    Length of converted data
                                    DBCS Language
                                    Shift-out and shift-in chars
                                    Type of conversion            */

#if (__OS400_TGTVRM__>=510)                       /* @A1A */
    #pragma datamodel(pop)                        /* @A1A */
#endif                                            /* @A1A */

#endif
