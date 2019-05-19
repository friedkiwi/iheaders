/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: QIMGCVTI.CLEINC                              */
/*                                                                */
/* Descriptive Name: Prototype for OPM Convert Image API          */
/*                                                                */
/* 5769-SS1,5722-SS1  (C) Copyright IBM Corp. 1997,2001           */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Convert Image API copies and optionally       */
/*              transforms an image or a printer datastream.      */
/*                                                                */
/* Header Files Included: H/QIMGAPII                              */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QIMGCVTI                              */
/*                                                                */
/* Change Activity:                                               */
/* CFD List:                                                      */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/*      D94140.5     4D14  970213 KOLB      New Include           */
/* $A1= D98212.6    v5r1m0 010400 gchaney:  Teraspace stage 2     */
/*                                                                */
/* End CFD List.                                                  */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

/******************************************************************/
/*                      QIMGCVTI Include                          */
/******************************************************************/
#ifndef QIMGCVTI_CLEINC
#define QIMGCVTI_CLEINC

/* ************************************************************** */
/* Include files                                                  */
/* ************************************************************** */
#ifndef QIMGAPII_CLEINC
#include <qimgapii.H>             /* QIMGCVTI API common structs  */
#endif

#if (__OS400_TGTVRM__>=510)                                /* @A1A*/
    #pragma datamodel(P128)                                /* @A1A*/
#endif                                                     /* @A1A*/

/******************************************************************/
/* Prototype for calling OPM Convert Image API.                   */
/******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QIMGCVTI,OS,nowiden)
#else
     extern "OS"
#endif
void QIMGCVTI (void *,        /* Control structure               */
               void *,        /* Input Image structure           */
               void *,        /* Main storage input image        */
               void *,        /* Output image structure          */
               void *,        /* Main storage output image       */
               void *,        /* Feedback structure              */
               void *);       /* Error code                      */

#if (__OS400_TGTVRM__>=510)                               /* @A1A*/
    #pragma datamodel(pop)                                /* @A1A*/
#endif                                                    /* @A1A*/

#endif
