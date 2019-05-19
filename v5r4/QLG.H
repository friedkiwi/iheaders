
#ifndef __ILEC400__
  extern "C" {
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLG                                        */
 /*                                                                */
 /* Descriptive Name: Common structures for LG component           */
 /*                                                                */
 /* 5716-SS1 5722-SS1 (C) Copyright IBM Corp. 1994,2000            */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The common structures that could be used by more  */
 /*              than one LG component include.                    */
 /*                                                                */
 /* Macros List:                                                   */
 /*              QLG_CHAR_DOUBLE                               @A2A*/
 /*              QLG_CHAR_SINGLE                               @A2A*/
 /*              QLG_PTR_DOUBLE                                @A2A*/
 /*              QLG_PTR_SINGLE                                @A2A*/
 /*                                                                */
 /* Structure List: Qlg_CCSID_ReqCtlBlk_T                          */
 /*                 Qlg_Table_ReqCtlBlk_T                          */
 /*                 Qlg_Qual_Tbl_Name_T                            */
 /*                 Qlg_UsrDef_ReqCtlBlk_T                         */
 /*                 Qlg_Path_Name_T                                */
 /*                                                                */
 /* Function Prototype List: None                                  */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2827200     3D10  940227 ROCH    : New Include           */
 /* $A1= D2870900     3D60  941204 ROCH    : Add NLS enabled path  */
 /*                                          name structure        */
 /* $A2= D9765800     5D10  990620 ROCH    : Added Path_type       */
 /*                                          macros                */
 /* $A3= P9934931    V5R1M0 001105 VIET    : Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef    QLG_h
  #define  QLG_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A3A*/
     #pragma datamodel(P128)                                 /*@A3A*/
 #endif                                                      /*@A3A*/


/********************************************************************/
/* Structure for CCSID based request                                */
/********************************************************************/

typedef struct Qlg_CCSID_ReqCtlBlk {
    int Type_of_Request;
    int CCSID_of_Input_Data;
    int Case_Request;
    char Reserved[10];
} Qlg_CCSID_ReqCtlBlk_T;

/********************************************************************/
/* Structures for request using table (*TBL)                        */
/********************************************************************/

typedef struct Qlg_Qual_Tbl_Name {
    char Tbl_Name[10];
    char Lib[10];
} Qlg_Qual_Tbl_Name_T;

typedef struct Qlg_Table_ReqCtlBlk {
    int Type_of_Request;
    int DBCS_Indicator;
    Qlg_Qual_Tbl_Name_T Qual_Tbl_Name;
} Qlg_Table_ReqCtlBlk_T;

/********************************************************************/
/* Structure for request using a user-defined conversion map        */
/********************************************************************/

typedef struct UsrDef_ReqCtlBlk {
    int Type_of_Request;
    int DBCS_Indicator;
    int Reserved;
    int Length;
/*  char CvtMap[];                         Variable length field    */
} Qlg_UsrDef_ReqCtlBlk_T;

/********************************************************************/
/* Structure for NLS enabled path name                              */
/****                                                            ****/
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will      */
/*       have to be defined by the user.                            */
/********************************************************************/

typedef struct Qlg_Path_Name {
    int  CCSID;
    char Country_ID[2];              /* Country or region ID        */
    char Language_ID[3];
    char Reserved[3];
    unsigned int Path_Type;
    int  Path_Length;
    char Path_Name_Delimiter[2];
    char Reserved2[10];
  /*char Path_Name[];*/              /*   Variable length field    */
} Qlg_Path_Name_T;


/*************************************************************@A2A*/
/* Macros for Path_Type in the Qlg_Path_Name structure.       @A2A*/
/*************************************************************@A2A*/
#define QLG_CHAR_SINGLE              0
                                     /* The Path_Name is a    @A2A*/
                                     /* character string and  @A2A*/
                                     /* the delimiter is one  @A2A*/
                                     /* byte long.            @A2A*/

#define QLG_PTR_SINGLE               1
                                     /* The Path_Name is a    @A2A*/
                                     /* pointer and the       @A2A*/
                                     /* delimiter is one      @A2A*/
                                     /* byte long.            @A2A*/

#define QLG_CHAR_DOUBLE              2
                                     /* The Path_Name is a    @A2A*/
                                     /* character string and  @A2A*/
                                     /* the delimiter is two  @A2A*/
                                     /* bytes long.           @A2A*/

#define QLG_PTR_DOUBLE               3
                                     /* The Path_Name is a    @A2A*/
                                     /* pointer and the       @A2A*/
                                     /* delimiter is two      @A2A*/
                                     /* bytes long.           @A2A*/


 #if (__OS400_TGTVRM__>=510)                                /*@A3A*/
     #pragma datamodel(pop)                                 /*@A3A*/
 #endif                                                     /*@A3A*/

#endif      /* #ifndef QLG_h */

#ifndef __ILEC400__
 }


#endif
