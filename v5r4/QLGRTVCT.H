/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGRTVCT                                   */
/*                                                                */
/* Descriptive Name: QLGRTVCT API.                                */
/*                                                                */
/* 5722-SS1  (C) Copyright IBM Corp. 2000, 2000                   */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve CCSID Text API retrieves             */
/*              a list of CCSIDS and their descriptions.          */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGRTVCT                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= P9936331     5D10  001105 VIET      New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGRTVCT_h
#define QLGRTVCT_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Prototype for calling QLGRTVCT API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGRTVCT,OS,nowiden)
#else
      extern "OS"
#endif
void QLGRTVCT (void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               int,              /* CCSID Request type            */
               int,              /* CCSID request type qualifier  */
               void *);          /* Error code                    */


/******************************************************************/
/* Type Definition for the CCSID_text Array.                      */
/******************************************************************/
typedef _Packed struct Qlg_CCSID_textArray
{
   int Offset_Next_CCSID;         /* Offset to next CCSID(from    */
                                  /* start of receiver variable)  */
   int CCSID;                     /* CCSID                        */
   int Text_CCSID;                /* CCSID of descriptive text    */
   int Offset_To_Text;            /* Offset to descriptive text   */
                                  /*  from start of recvr variable*/
   int Text_Length;               /* Length of descriptive text   */
                                  /* If length = 0, then no       */
                                  /* descriptive text is available*/
} Qlg_CCSID_textArray_t;

/******************************************************************/
/* Type Definition for the receiver variable.                     */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef _Packed struct Qlg_RTVT0100
{
  int  Bytes_Returned;
  int  Bytes_Available;
  int  Offset_To_CCSID_Entries;
  int  Number_Of_CCSID_Entries;
/*char Reserved;*/                      /* Varying length         */
/*Qlg_CCSID_textArray CCSID_entries[];*/  /* Varying number       */
} Qlg_RTVT0100_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
