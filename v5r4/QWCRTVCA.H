/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QWCRTVCA                                   */
/*                                                                */
/* Descriptive Name: Retrieve current attributes                  */
/*                                                                */
/* 5769-SS1  (C) Copyright IBM Corp. 1997,2002                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve Current Attributes API returns       */
/*              the requested attributes that are current         */
/*              for this thread.                                  */
/*                                                                */
/* Header Files Included: H/QWCRTVCA                              */
/*                        H/QWCATTR                               */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:  Qwc_RTVC_Attribute_Data_t                     */
/*                  Qwc_RTVC0100_t                                */
/*                  Qwc_RTVC_Lib_List_t                           */
/*                  Qwc_RTVC0200_t                                */
/*                  Qwc_RTVC_ASP_List_t                           */
/*                  Qwc_RTVC0300_t                                */
/*                                                                */
/* Function Prototype List: QWCRTVCA                              */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D94779       4D20  970409 ROCH:     New Include           */
/* $A1= D9860301   v5r2m0  010223 ROCH:     Add IASP support      */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWCRTVCA_h
#define QWCRTVCA_h

#include <qwcattr.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Record structure for RTVC0100 format                           */
/******************************************************************/
 typedef _Packed struct Qwc_RTVC_Attribute_Data
    {
       int  Length_Field_Info_Rtnd;
       int  Key_Field;
       char Type_Of_Data;
       char Reserved[3];
       int  Length_Data;
    /*char Data[];*/          /* Varying length                 */
    /*char Reserved[]*/       /* Varying length                 */
    } Qwc_RTVC_Attribute_Data_t;

 typedef _Packed struct Qwc_RTVC0100
    {
       int  Number_Fields_Rtnd;
     /*Qwc_RTVC_Attribute_Data_t  Receiver_Info[]; */ /* Varying
                                                            length  */
    } Qwc_RTVC0100_t;

/******************************************************************/
/* Record structure for RTVC0200 format                           */
/******************************************************************/
typedef _Packed struct Qwc_RTVC_Lib_List{
     char Lib_Name[11];
} Qwc_RTVC_Lib_List_t;

typedef _Packed struct Qwc_RTVC0200 {
     int  Bytes_Return;
     int  Bytes_Avail;
     int  Libs_In_Syslibl;
     int  Prod_Libs;
     int  Curr_Libs;
     int  Libs_In_Usrlibl;
   /*Qwc_Cur_Lib_List_t[];*/     /* Varying length                 */
} Qwc_RTVC0200_t;


/******************************************************************/
/* Record structure for RTVC0300 format                           */
/******************************************************************/
typedef _Packed struct Qwc_RTVC_ASP_List{
     char ASP_Name[10];
} Qwc_ASP_Device_List_t;

typedef _Packed struct Qwc_RTVC0300 {
     int  Bytes_Return;
     int  Bytes_Avail;
     int  ASP_Device_List_Offset;
     int  Entries_In_ASP_Device_List;
     int  Length_ASP_Device_List_Entry;
   /*Qwc_ASP_Device_List_t[];*/     /* Varying length             */
} Qwc_RTVC0300_t;

/******************************************************************/
/* Prototype for calling Work Management API QWCRTVCA             */
/******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QWCRTVCA,OS,nowiden)
#else
     extern "OS"
#endif
void QWCRTVCA(void *,           /* Receiver variable              */
	       int ,             /* Length of receiver variable    */
	       char *,           /* Format name                    */
	       int ,             /* Number of fields to return     */
	       void *,           /* Keys of fields to be returned  */
	       void *);          /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
