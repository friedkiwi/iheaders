/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: QCDRCMDD                                        */
/*                                                                   */
/* Descriptive Name: Retrieve Command Definition API.                */
/*                                                                   */
/* 5722SS1 (C) Copyright IBM Corp. 2000.                             */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Retrieve Command Definition API retrieves the    */
/*              command definition for a given command as XML        */
/*              tagged source.                                       */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QCDRCMDD.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9796100     5D10  990912 MBAILEY:  New Include              */
/* $A1= D98212.1    v5r1m0 991107 gchaney:  Teraspace stage 2        */
/* $A2= D99286.11   v5r3m0 020924 gwvig:    CMDD0200 return format   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QCDRCMDD_h
 #define QCDRCMDD_h

#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(P128)                                   /*@A1A*/
#endif                                                        /*@A1A*/

 /********************************************************************/
 /*  Structures to map out the Destination parameter.                */
 /********************************************************************/
 typedef _Packed struct Qcd_DEST0100 {
    unsigned int Receiver_Variable_Length;
 } Qcd_DEST0100_t;             /* DEST0100 Format                    */

 /********************************************************************/
 /*  Structure for the Receiver Variable when Return Format=CMDD0100 */
 /********************************************************************/
 typedef _Packed struct Qcd_CMDD0100 {
    unsigned int Bytes_Returned;  /* Bytes returned in receiver      */
    unsigned int Bytes_Available; /* Bytes available from API        */
  /*char XMLSource[];*/           /* XML source returned             */
 } Qcd_CMDD0100_t;

 /********************************************************************/
 /*  Structure for the Receiver Variable when Return Format=CMDD0200 */
 /********************************************************************/
 typedef _Packed struct Qcd_CMDD0200 {
    unsigned int Bytes_Returned;  /* Bytes returned in receiver      */
    unsigned int Bytes_Available; /* Bytes available from API        */
  /*char XMLSource[];*/           /* XML source returned             */
 } Qcd_CMDD0200_t;

 /********************************************************************/
 /*  Prototype for QCDRCMDD API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QCDRCMDD,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QCDRCMDD (char *,        /* Qualified Command Name             */
                void *,        /* Destination Information            */
                char *,        /* Destination Format                 */
                void *,        /* Receiver Variable                  */
                char *,        /* Receiver Variable Format           */
                void *);       /* Error Code                         */

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                         /*@A1A*/

#endif
