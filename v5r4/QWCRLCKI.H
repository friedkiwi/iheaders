/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QWCRLCKI                                   */
/*                                                                */
/* Descriptive Name: Retrieve Lock Information API                */
/*                                                                */
/* 5722-SS1                                                       */
/* (C) Copyright IBM Corp. 2000.2001                              */
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
/* Structure List: Qwc_LOBJ0100_t                             @A1A*/
/*                 Qwc_LOBJ0200_t                             @A1A*/
/*                 Qwc_LCKI0100_t                                 */
/*                 Qwc_Lock_Information_t                         */
/*                 Qwc_Holder_Information_t                   @A1A*/
/*                 Qwc_Lock_Filter_t                          @A1A*/
/*                 Qwc_Keyfmt_t                                   */
/*                                                                */
/* Function Prototype List: QWCRLCKI                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D98031.9   v5r1m0  000710           New Include           */
/* $A1= D98824.4   v5r2m0  010930           V5R2 updates for ASP, */
/*                                          transaction service   */
/*                                          changes               */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  _QWCRLCKI_h
#define  _QWCRLCKI_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif
/*******************************************************************/
/*  Prototype for calling Retrieve Lock Information API (QWCRLCKI) */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QWCRLCKI,OS,nowiden)
#else
extern "OS"
#endif

void QWCRLCKI(void *,        /* Receiver variable                */
	      int,             /* Length of receiver variable      */
	      char *,          /* Format name                      */
	      void *,          /* Object identification        @A1C*/
	      char *,          /* Object identification format @A1C*/
	      int,             /* Number of fields to return       */
	      int *,           /* Key of fields to return          */
	      void *,          /* Filters                      @A1A*/
              char *,          /* Filter format                @A1A*/
	      void *);         /* Error code                       */

/*******************************************************************/
/*  Input format for Object ID LOBJ0100                        @A1A*/
/*******************************************************************/

typedef _Packed struct Qwc_LOBJ0100 {                       /* @A1A*/
    int  Size;                                              /* @A1A*/
    char Object_Name[10];                                   /* @A1A*/
    char Object_Lib[10];                                    /* @A1A*/
    char Object_Lib_ASP_Name[10];                           /* @A1A*/
    char Object_Type[10];                                   /* @A1A*/
    char Member[10];                                        /* @A1A*/
    char reserved[2];                                       /* @A1A*/
    int  Record_Lock_Indicator;                             /* @A1A*/
    unsigned int Relative_Record_Number;                    /* @A1A*/
} Qwc_LOBJ0100_t;                                           /* @A1A*/

/*******************************************************************/
/*  Input format for Object ID LOBJ0200                        @A1A*/
/*******************************************************************/

typedef _Packed struct Qwc_LOBJO200 {                       /* @A1A*/
    int Size;                                               /* @A1A*/
    char Object_Lock_Handle[64];                            /* @A1A*/
} Qwc_LOBJ0200_t;                                           /* @A1A*/

/*******************************************************************/
/* Record structure for QWCRLCKI LCKI0100 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_LCKI0100 {
    int  Bytes_Return;
    int  Bytes_Avail;
    int  TypeOfEntity;
    char Extended_Object_Name[30];                          /* @A1C*/
    char Object_Lib_Name[10];
    char Object_ASP_Name[10];                               /* @A1A*/
    char Object_Lib_ASP_Name[10];                           /* @A1A*/
    int  Object_ASP_Number;                                 /* @A1A*/
    int  Object_Lib_ASP_Number;                             /* @A1A*/
    char Object_Type[10];
    char Object_Attribute[10];
    int  Number_Lock_I_Entries;
    int  Offset_Lock_I;
    int  Number_Lock_I_Entries_Returned;
    int  Length_Lock_I_Entry;
    /*Qwc_Lock_Information_t List[];*/   /* Varying length         */
} Qwc_LCKI0100_t;

typedef _Packed struct Qwc_Lock_Information{
    char Lock_State[10];
    char reserved1[2];
    int  Lock_Status;
    char Lock_Scope;
    char reserved2[3];
    char Lock_Space_ID[20];                                 /* @A1A*/
    char Lock_Req_Handle[64];                               /* @A1A*/
    int  Lock_count;                                        /* @A1A*/
    char Member[10];                                        /* @A1A*/
    char Member_Lock_Type;                                  /* @A1A*/
    char reserved3;
    unsigned int  Relative_Rec_Num;                         /* @A1A*/
    int  Displacement_To_Holder_Info;                       /* @A1A*/
    int Displacement_To_Key;
    int Number_Keys;
    int Holder_Type;                                        /* @A1A*/
    /*Qwc_Holder_Information_t List[];*/   /* Varying length       */
} Qwc_Lock_Information_t;

typedef union Qwc_Holder_Information {                      /* @A1A*/

/*******************************************************************/
/*  Job Holder Identification                                  @A1A*/
/*******************************************************************/

  _Packed struct  {                                         /* @A1A*/
      int Holder_ID_Size;                                   /* @A1A*/
      char Job_Name[10];                                    /* @A1A*/
      char User_Name[10];                                   /* @A1A*/
      char Job_Number[6];                                   /* @A1A*/
      char Thread_ID[8];                                    /* @A1A*/
      char reserved[2];                                     /* @A1A*/
      unsigned int Thread_Handle;                           /* @A1A*/
  } JB;                                                     /* @A1A*/

/*******************************************************************/
/*  Lock Space Holder Identification                           @A1A*/
/*******************************************************************/

  _Packed struct {                                          /* @A1A*/
      int Holder_ID_Size;                                   /* @A1A*/
      char Lock_Space_ID[20];                               /* @A1A*/
  } LS;                                                     /* @A1A*/
} Qwc_Holder_Information_t;                                 /* @A1A*/
/*******************************************************************/
/* Generic Key structure					   */
/*******************************************************************/

typedef _Packed struct Qwc_Keyfmt {
    int Length;
    int Key;
    char Type_Data;
    char reserved[3];
    int Length_Data;
    /*char Data[]; */ /* Varying length */
    /*char reserved[]; */   /* reserved */
} Qwc_Keyfmt_t;

/*******************************************************************/
/* Filter format                                               @A1A*/
/*******************************************************************/

typedef _Packed struct Qwc_Lock_Filter {                    /* @A1A*/
     int Size;                                              /* @A1A*/
     int Lock_State;                                        /* @A1A*/
     int Lock_Scope;                                        /* @A1A*/
     int Lock_Status;                                       /* @A1A*/
     char Lock_Holder_Type;                                 /* @A1A*/
     char Member_Lock_Type;                                 /* @A1A*/
} Qwc_Lock_Filter_t;                                        /* @A1A*/

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
