/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QWPZTAFP                                      */
/*                                                                   */
/* Descriptive Name: Transform AFP to ASCII                          */
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
/* Description: The Transform AFP to ASCII API transforms an Advanced*/
/*              Function Printing data stream into an ASCII data     */
/*              stream.                                              */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: IBM4019                                              */
/*              IBM4029                                              */
/*              HPLJ2                                                */
/*              HPLJ3                                                */
/*              IBM4216H                                             */
/*              PS                                                   */
/*              TEXT                                                 */
/*                                                                   */
/* Structure List: Qwp_OCTF0100_t                                    */
/*                                                                   */
/* Function Prototype List: QWPZTAFP                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940419 XZS2523:  New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

 #ifndef QWPZTAFP_h
 #define QWPZTAFP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #ifdef __ILEC400__
       #pragma linkage (QWPZTAFP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /********************************************************************/
 /* Prototype for call Transform AFP to ASCII API                    */
 /*  QWPZTAFP                                                        */
 /********************************************************************/
 void QWPZTAFP (void *,          /* Qualified input user space name  */
                int,             /* Length of input data             */
                void *,          /* Qualified output user space name */
                int  *,          /* Size of space used               */
                void *,          /* Output controls table            */
                int,             /* Length of output controls table  */
                void *);         /* Error code                       */

 /*******************************************************************/
 /* Structure for output controls table format                      */
 /*******************************************************************/
 typedef _Packed struct Qwp_OCTF0100
 {
      int  Data_Stream_Type;
      int  Top_Border_Size;
      int  Left_Border_Size;
      int  Start_Page_Number;
      int  End_Page_Number;
      char Set_Char_Pos;
      char Download_Fonts;
 } Qwp_OCTF0100_t;

#define  IBM4019  1
#define  IBM4029  2
#define  HPLJ2    3
#define  HPLJ3    4
#define  IBM4216H 5
#define  PS       6
#define  TEXT     7

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
