/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QWCRJBLK                                   */
/*                                                                */
/* Descriptive Name: Retrieve Job Locks API                       */
/*                                                                */
/* 5722-SS1                                                       */
/* (C) Copyright IBM Corp. 2000,2002                              */
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
/* Header Files Included: H/QWCATTR                               */
/*                                                                */
/* Structure List: Qwc_JBLK0100_t                                 */
/*                 Qwc_JBLK0200_t                                 */
/*                 Qwc_Lock_List_t                                */
/*                 Qwc_Lock_List2_t                               */
/*                 Qwc_JBFL0100_t                                 */
/*                                                                */
/* Function Prototype List: QWCRJBLK                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D98031     v5r1m0  000510 LAH       New Include           */
/* $A1= D9860301   v5r2m0  010223 ROCH:     Add IASP support      */
/* $A2= D98824.3   v5r2m0  010906 ROCH:     Add filter and list200*/
/* $A3= P0058451   v5r2m0  011215 ROCH:     Minor fixes to names  */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  _QWCRJBLK_h
#define  _QWCRJBLK_h
#include <qwcattr.h>
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif
/*******************************************************************/
/*  Prototype for calling  Job LOCK Information API (QWCRJBLK)     */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QWCRJBLK,OS,nowiden)
#else
extern "OS"
#endif
void QWCRJBLK(void *,          /* Receiver variable              */
	      int,               /* Length of receiver variable    */
	      char *,            /* Format name                    */
	      void *,            /* Job Identification Information */
	      char *,            /* Format of Job ID Information   */
	      void *,            /* Error code                     */
              ...);              /* Optional parameters            */
/*            void *                Filter format structure        */
/*            char *                Filter format name             */

/*******************************************************************/
/* Record structure for QWCLJBLK JBLK0100 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_Lock_List{
    char Object_Name[10];
    char Object_Lib_Name[10];
    char Object_Type[10];
    char Object_Attribute[10];
    char Lock_State[10];
    char bytealign1[2];
    int  Lock_Status;
    int  Member_Locks;
    int  Number_of_Locks;
    char Lock_Scope;
    char bytealign2[3];
    char Thread_ID[8];
    unsigned int  Thread_Handle;
    char Lock_Space_ID[20];
    char Object_ASP_Name[10];
    char Object_Library_ASP_Name[10];
    int  Object_ASP_Number;
    int  Object_Library_ASP_Number;
} Qwc_Lock_List_t;

typedef _Packed struct Qwc_JBLK0100 {
    int  Bytes_Return;
    int  Bytes_Avail;
    int  Number_Obj_Locks;
    int  Offset_Lock_List;
    int  Number_Locks_Returned;
    int  Length_Lock_Obj_Entry;
    /*Qwc_Lock_List_t List[]; */   /* Varying length            */
} Qwc_JBLK0100_t;

typedef _Packed struct Qwc_Lock_List2{
    int  Entity_type;
    char Extended_Object_Name[30];
    char Object_Lib_Name[10];
    char Object_ASP_Name[10];
    char Object_Library_ASP_Name[10];
    int  Object_ASP_Number;
    int  Object_Library_ASP_Number;
    char Object_Type[10];
    char Object_Attribute[10];
    char Member_Name[10];
    char Member_Lock_Type;
    char bytealign1[3];
    char Lock_State[10];
    int  Lock_Status;
    int  Member_Locks;
    int  Number_of_Locks;
    char Lock_Scope;
    char bytealign2[3];
    unsigned long long Space_Loc_Offset;
    char Thread_ID[8];
    unsigned int  Thread_Handle;
    char Lock_Space_ID[20];
    char Object_Lock_Handle[64];
    char Lock_Request_Handle[64];
} Qwc_Lock_List2_t;

typedef _Packed struct Qwc_JBLK0200 {
    int  Bytes_Return;
    int  Bytes_Avail;
    int  Number_Obj_Locks;
    int  Offset_Lock_List;
    int  Number_Locks_Returned;
    int  Length_Lock_Obj_Entry;
    /*Qwc_Lock_List2_t List[]; */   /* Varying length            */
} Qwc_JBLK0200_t;

typedef _Packed struct Qwc_JBFL0100 {
    int Size;
    int Lock_State;
    int Lock_Scope;
    int Lock_Status;
    char Include_External_Objects;
    char Include_Members;
    char Include_Int_Sys_Objects;
    char Include_Ext_Space_Locations;
    char Include_Int_Space_Locations;
    char Include_Lock_Space_Objects;
    char Include_Unknown;
    char Object_Name[10];
    char Object_Library[10];
    char Object_Library_ASP_Name[10];
    } Qwc_JBFL0100_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
