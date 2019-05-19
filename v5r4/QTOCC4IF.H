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
/* Header File Name: H/QTOCC4IF                                   */
/*                                                                */
/* Descriptive Name: Change IPv4 Interface API information        */
/*                                                                */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description:  Structures for calling the QTOCC4IF API          */
/*                                                                */
/* Header Files Included:    None                                 */
/*                                                                */
/* Macros List:              None                                 */
/*                                                                */
/* Structure List:           Qtocc4if_PrfIfcLst_t                 */
/*                           Qtoc_IFCH0100_t                      */
/*                                                                */
/* Function Prototype List:  QTOCC4IF                             */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL  DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ -----  ------ --------- -------------------- */
/* $A0  D93267       v5r4m0 050104 ROCH:     New Include          */
/* $A1  P9A93661     v5r4m0 050406 ROCH:     Misc. changes        */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QTOCC4IF_h
#define QTOCC4IF_h

/******************************************************************/
/* Type Definition for the preferred interface list information   */
/******************************************************************/
typedef _Packed struct Qtocc4if_PrfIfcLst
{
  char          Preferred_Interface_Address[15];
  char          Reserved_1[1];
} Qtocc4if_PrfIfcLst_t;

/******************************************************************/
/* Type Definition for the IFCH0100 format.                       */
/******************************************************************/
typedef _Packed struct Qtoc_IFCH0100
{
  long          Length_Fixed_Information;
  char          Internet_Address[15];
  char          Reserved_1[1];
  long          Proxy_ARP_Allowed;
  long          Offset_Prf_Ifc_List;
  long          Number_Prf_Ifc_List;
  long          Length_Prf_Ifc_List;
  char          Interface_Name[24];
  /*Qtocc4if_PrfIfcLst_t Prf_Ifc_List[]; */ /* Varying Length      */

} Qtoc_IFCH0100_t;

 /******************************************************************/
 /*  Prototype for QTOCC4IF API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTOCC4IF,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QTOCC4IF(void *,           /* Interface information          */
               char *,           /* Format name                    */
               void *);          /* Error Code                     */


#endif
