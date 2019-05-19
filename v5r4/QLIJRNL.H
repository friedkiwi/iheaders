/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/qlijrnl                                    */
/*                                                                */
/* Descriptive Name: Change Object Attribute Journal Entry        */
/*                                                                */
/*                                                                */
/* Description: This file contains structure definitions for      */
/*              the entry specific data portion of the journal    */
/*              entry associated with changing an object          */
/*              attribute.                                        */
/*                                                                */
/*              Refer to H/qjournal for structure definitions     */
/*              for the fixed portion of the journal entries.     */
/*                                                                */
/*                                                                */
/* Header Files Included:  None                                   */
/*                                                                */
/* Macros List:  None                                             */
/*                                                                */
/* Structure List:                                                */
/*                                                                */
/*    QLI_ZB_Journal_Entry - Change object attribute              */
/*                                                                */
/*                                                                */
/* Function Prototype List:  None                                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL   DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ -----   ------ --------- --------------------*/
/* $A0= D99951       v5r4m0  041017 CEM:      New Include         */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLIJRNL_h
#define QLIJRNL_h

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(P128)
#endif

/*********************************************************************/
/*  Type Definition for the format of the variable length record     */
/*  which is used in the ZB (Change Object Attribute) journal entry. */
/*                                                                   */
/*  This structure is in the same format as the variable length      */
/*  record structure used as input in the Change Object Description  */
/*  (QLICOBJD) API.                                                  */
/*                                                                   */
/*  Refer to the QLICOBJD API for a list of the valid keys and the   */
/*  object attributes associated with the keys.                      */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/
typedef _Packed struct QLI_ZB_Fmt_Vlen_Record
{
   int  Key;                       /* Key identifier                 */
   int  Len_Of_Data;               /* Length of data                 */
   /*char Data[];*/                /* Varying length                 */
} QLI_ZB_Fmt_Vlen_Record_t;

/*********************************************************************/
/*                                                                   */
/* Structure Name   :  QLI_ZB_Journal_Entry                          */
/*                                                                   */
/* Structure Purpose:  Structure is used to define the journal       */
/*                     entry specific data for the journal entry     */
/*                     type ZB (Change Object Attribute) used        */
/*                     with various journal codes.                   */
/*                                                                   */
/*                     This structure is only the entry specific     */
/*                     data within a larger journal entry layout.    */
/*                                                                   */
/*                     This structure is in the same format as the   */
/*                     "Changed object information" structure used   */
/*                     as input on the Change Object Description     */
/*                     (QLICOBJD) API.                               */
/*                                                                   */
/*                     When attributes of an object have changed,    */
/*                     the following structure identifies the        */
/*                     number of object attributes that have changed */
/*                     and the variable length records identify the  */
/*                     object attribute and the changed data.        */
/*                     Refer to the QLICOBJD API for the object      */
/*                     attributes associated with the keys.          */
/*                                                                   */
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/
typedef _Packed struct QLI_ZB_Journal_Entry
{
   int  Num_Vlen_Records;
   /*QLI_ZB_Fmt_Vlen_Record_t  Vlen_Record[];*/
} QLI_ZB_Journal_Entry_t;

#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(pop)
#endif

#endif
