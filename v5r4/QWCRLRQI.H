/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QWCRLRQI                                   */
/*                                                                */
/* Descriptive Name: Retrieve Lock Request Information API        */
/*                                                                */
/* 5722-SS1                                                       */
/* (C) Copyright IBM Corp. 2002                                   */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qwc_LRQI0100_t                                 */
/*                                                                */
/* Function Prototype List: QWCRLRQI                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D98824.5    v5r2m0  011112          New Include           */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  _QWCRLRQI_h
#define  _QWCRLRQI_h

/*******************************************************************/
/*  Prototype for calling Retrieve Lock Information API (QWCRLRQI) */
/*******************************************************************/
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif
#ifdef __ILEC400__
#pragma linkage (QWCRLRQI,OS,nowiden)
#else
extern "OS"
#endif

void QWCRLRQI(void *,        /*   Receiver variable              */
	      int,             /*   Length of receiver variable    */
	      char *,          /*   Format name                    */
	      char *,          /*   Lock request handle            */
	      void *);         /*   Error code                     */

/*******************************************************************/
/* Record structure for QWCRLRQI LRQI0100 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_LRQI0100 {
    int  Bytes_Return;
    int  Bytes_Avail;
    int  Offset_Statement_Id;
    int  Number_Statement_Id;
    int  Offset_Proc_Name;
    int  Length_Proc_Name;
    char Program_Name[10];
    char Program_Lib_Name[10];
    char Program_ASP_Name[10];
    char Program_Lib_ASP_Name[10];
    int  Program_ASP_Number;
    int  Program_Lib_ASP_Number;
    int  MI_Instruct_Number;
    char Module_Name[10];
    char Module_Lib_Name[10];
    /*char Stmt_Identifier[][10]; */  /* Varying length */
    /*char Proc_Name[]; */            /* Varying length */
} Qwc_LRQI0100_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
