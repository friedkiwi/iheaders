/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGSRTIO                                   */
/*                                                                */
/* Descriptive Name: QLGSRTIO API.                                */
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
/* Description: The Sort Input/Output API is used to provide a    */
/*              set of records at a time to be sorted and to      */
/*              retrun a set of records at a time that have       */
/*              already been sorted.                              */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qlg_Srtio_Feedback_Info_t                      */
/*                 Qlg_Srtio_Output_t                             */
/*                 Qlg_Srtio_Control_Block_t                      */
/*                                                                */
/* Function Prototype List: QLGSRTIO                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940413 BRINKER   New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGSRTIO_h
#define QLGSRTIO_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGSRTIO API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGSRTIO,OS,nowiden)
#else
      extern "OS"
#endif
void QLGSRTIO (void *,           /* Request control block         */
               void *,           /* Input data buffer             */
               void *,           /* Output data buffer            */
               int  *,           /* Length of output data buffer  */
               void *,           /* Output data information       */
               void *,           /* Error Code                    */
               ...);             /* Optionals:
                                      Returned records feedback
                                      Length of returned records
                                        feedback                  */

/******************************************************************/
/* Type Definition for the QLGSRTIO Returned Records Feedback     */
/* Information.                                                   */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef _Packed struct Qlg_Srtio_Feedback_Info
{
  int  Bytes_Available;
  int  Bytes_Returned;
  int  Offset_Records_Array;
  int  Number_Files;
/*char Reserved[];*/             /* Varying length                */
/*int Returned_Records[];*/      /* Varying length                */
} Qlg_Srtio_Feedback_Info_t;

/******************************************************************/
/* Type Definition for the QLGSRTIO output data information.      */
/******************************************************************/
typedef _Packed struct Qlg_Srtio_Output
{
  int  Records_Processed;
  int  Records_Available;
  char Reserved[8];
} Qlg_Srtio_Output_t;

/******************************************************************/
/* Type Definition for the QLGSRTIO Request Control Block.        */
/******************************************************************/
typedef _Packed struct Qlg_Srtio_Control_Block
{
  int Request_Type;
  int Reserved;
  int Record_Length;
  int Record_Count;
} Qlg_Srtio_Control_Block_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif



