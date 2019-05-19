#ifndef _QYDORTVR_h
#define _QYDORTVR_h

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/



/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QYDORTVR                                     */
/*                                                                  */
/* Descriptive Name: Retrieve signature(s) for an object.           */
/*                                                                  */
/* 5722-SS1                                                         */
/* (C) Copyright IBM Corp. 1999,2000                                */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/* Description: The Retrieve Object API returns the signatures      */
/*              on an object.                                       */
/*                                                                  */
/* Header Files Included:                                           */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: None.                                            */
/*                                                                  */
/* Function Prototype List:                                         */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON   LEVEL  DATE     PGMR      CHANGE DESCRIPTION       */
/* ---- -------- -----  -------- --------- ------------------------ */
/* $A0= D97545   5D10   09/27/99 ROCH:     New Include              */
/* $01= P9954844 v5r1m0 11/01/01 rdhemmer  support commands objects */
/* End CFD List.                                                    */
/*                                                                  */
/*  Additional notes about the Change Activity                      */
/* End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS *********************************/

/*******************************************************************/
/*  Structure of Reciever on Retrieve Signatures API               */
/*******************************************************************/

/* Basic Signature Data */
typedef _Packed struct Qydortv_receiver_header
{

    int Bytes_Returned;               /* Number of Bytes Returned by the     */
                                      /* API into the Receiver               */
    int Bytes_Available;              /* Number of Bytes Available from      */
                                      /* the API                             */
    int Offset_To_Sections;           /* Offset from beginning of struct to  */
                                      /* the first signature section         */
    int Length_Of_Section;            /* Length of each signature section    */
    int Number_Of_Sections;           /* How many Signature Sections in the  */
                                      /*   structure                         */
    int Number_Signatures_Returned;   /* How many Signatures returned        */
    int Number_Signatures_Available;  /* How many Signatures available       */
    int Composite_Object;             /* Composite object indicator.
                                         0 if not composite                  */
    int Version;                      /* 0 = V5R1, 1 = new fields added in
                                         v5r2                            @01C*/
    int IBM_Signed;                   /* 1= IBM Build signature is present.  */

   /*------------------------------------------------------------------------*/
   /* The next four fields (Entire_Signed, Core_Signed, Compressed_Signature */
   /* and Decompressed_Signature) were added in v5r2 and were reserved       */
   /* fields in v5r1.  Programs should check the Version field above for     */
   /* the value '1' before referencing these new fields to prevent problems  */
   /* if the program is ever loaded onto a v5r1 system.                  @01A*/
   /*------------------------------------------------------------------------*/
    char Core_Signed;                 /* Currently only *CMD objects can be
                                         "Core" signed.
                                         '1' = Object is "Core" signed,
                                         '0' = Object not "Core" signed,
                                         Reserved, if Version = 0.       @01A*/
    char Entire_Signed;               /* '1' = Object is "Entire" signed,
                                         '0' = Object not "Entire" signed,
                                          Reserved,  if Version = 0.     @01A*/
    char Compressed_Signature;        /* '1' = Object has a compressed
                                               signature,
                                         '0' = Object does not have a
                                               compressed signature,
                                         Reserved,  if Version = 0.     @01A*/
    char Decompressed_Signature;      /* '1' = Object has a decompressed
                                               signature,
                                         '0' = Object does not have a
                                               decompressed  signature,
                                         Reserved,  if Version = 0.      @01A*/
    char reserved2[24];               /* Reserved for Future Use         @01C*/
};

const int IBMSIGNED = 1;
const int OTHERSIGN = 0;

/* Return values for Entire_Signed, Core_Signed, Compressed_Signature and
   Decompressed_Signature:                                               @01A*/

const char QYDO_YES = '1';            /* Yes                             @01A*/
const char QYDO_NO =  '0';            /* No                              @01A*/

/* Return values for CertificateFormat: */
#define QYDO_CERT0210 "CERT0210" /* All text fields available.  None of the
                                    fields are translated from the ASCII
                                    format that they had in the certificate
                                    into the job CCSID.                      */
#define QYDO_CERT0200 "CERT0200" /* All text fields available.
                                    Fields are translated from the ASCII
                                    format that they had in the certificate
                                    into the job CCSID.                      */
#define QYDO_CERT0000 "CERT0000" /* The certificate could not be parsed      */


typedef _Packed struct Signature_Section
{

    int  Offset_Cert_Info;       /* Offset from beginning of receiver to the
                                    Certificate Information                  */
    int  Length_Cert_Info;       /* Length of the Certificate Information    */
    char Certificate_Format[8];  /* Format of the parsed certificate         */
    char Reserved1[1];           /* Reserved                                 */
    char Parse_Msg_ID[7];        /* Message result--if any--from parsing the
                                    certificate                              */
    char Date_Signed[14];        /* Exactly 14 characters fit for
                                    YYYYMMDDhhmmss                           */
    char Signature_Scope;        /* 'E' = "entire" object scope,
                                    'C' = "core" object scop,
	                             Reserved, if Version = 0.           @01A*/
    char Compressed_Signature;   /* '1' = Object has a compressed signature,
                                    '0' = Object does not have a compressed
                                          signature,
                                    Reserved, if Version = 0.            @01A*/
    char Decompressed_Signature; /* '1' = Object has a decompressed signature.
                                    '0' = Object does not have a decompressed
                                          signature,
                                    Reserved, if Version = 0.            @01A*/

    char Reserved2[23];          /* Reserved                             @01C*/
} ;

/* Return values for Signature_Scope                                     @01A*/
const char QYDO_ENTIRE = 'E';    /* Signature scope is entire object     @01A*/
const char QYDO_CORE = 'C';      /* Signature scope is core parts of the
                                    object                               @01A*/


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/


#endif  /* end _QYDORTVR_h */
