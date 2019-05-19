/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2006, 2006                                */
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
/* Header File Name: H/QBNRPII                                    */
/*                                                                */
/* Descriptive Name: Retrieve Program Interface Information API.  */
/*                                                                */
/* Description: The Retrieve Program Interface Information API    */
/*              lets you retrieve program interface information   */
/*              and place it into a single variable in the        */
/*              calling program.                                  */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qbn_PGII0100_t                                 */
/*                 Qbn_Interface_Entry                            */
/*                                                                */
/* Function Prototype List: QBNRPII                               */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* LEVEL                                                          */
/* -----                                                          */
/* V5R4M0                                                         */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/* End Change Activity                                            */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QBNRPII_h
#define QBNRPII_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/******************************************************************/
/* Prototype for calling QBNRPII API                              */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QBNRPII,OS,nowiden)
#else
      extern "OS"
#endif

void QBNRPII (void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified object name                */
               char *,    /* Object Type                          */
               void *,    /* Qualified bound module name          */
               void *);   /* Error code                           */

/******************************************************************/
/* Type Definitions for the PGII0100 format.                      */
/******************************************************************/
typedef _Packed struct Qbn_Interface_Entry
{
    int  Offset_Next_Entry;                /* Offset from start of receiver */
    char Module_Name[10];
    char Module_Library[10];
    int  Interface_Info_CCSID;
    int  Interface_Info_Type;
    int  Offset_Interface_Info;            /* Offset from start of receiver */
    int  Interface_Info_Length_Ret;        /* Bytes returned                */
    int  Interface_Info_Length_Avail;      /* Bytes available to be returned*/
    /*char Reserved1[];              */    /* Varying length                */
    /*char Qbn_Interface_Info[];     */    /* Interface_Info_Length         */
    /*char Reserved2[];              */    /* Varying length                */
} Qbn_Interface_Entry_t;


typedef _Packed struct Qbn_PGII0100
{
    int  Bytes_Returned;
    int  Bytes_Available;
    char Obj_Name[10];
    char Obj_Lib_Name[10];
    char Obj_Type[10];
    char Reserved3[2];
    int  Offset_First_Entry;               /* Offset from start of receiver */
    int  Number_Entries;
    /*char Reserved4[];             */     /* Varying length                */
    /*Qbn_Interface_Entry_t List[]; */     /* Repeated for each entry       */
 } Qbn_PGII0100_t;


#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
