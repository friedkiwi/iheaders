/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     1994-2005                                                     */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header file name: qpdsrvpg.h                                      */
/*                                                                   */
/* Descriptive name: Software Problem APIs                           */
/*                                                                   */
/*                                                                   */
/* Description: Include header file for the software problem APIs.   */
/*                                                                   */
/* Macros used: None.                                                */
/*                                                                   */
/* Structure list:                                                   */
/*   Qpd_Key_Pointer_t                                               */
/*                                                                   */
/* Function prototype list:                                          */
/*   QpdReportSoftwareError                                          */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON  LEVEL DATE     PGMR        DESCRIPTION               */
/* ---- ------- ----- ------   ---------   ------------------------- */
/* $A0=D28650   3D10  1/7/94   PBG,NISTLER Create                    */
/* $B1=D94891.1 4D30  12/03/97 CECI        IFS support               */
/* $B2=P3665382 4D30  03/04/98 CECI        Change Reserved to pointer*/
/* $C0=D93040.3 v5r4m0 100304  CAMARENA    Add key 107               */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the change activity:                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QPDSRVPG_H
#define _QPDSRVPG_H

#include <pointer.h>    /* _SYSPTR is typedefed                      */
#include <qlg.h>        /* @B1A     NLS enabled path name typedefed  */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*********************************************************************/
/* Problem description records                                       */
/*********************************************************************/

/* The following keys identify a particular problem description
   record format */

typedef enum
{
  Qpd_Call_Stack_Counter        = 100,
  Qpd_Suspected_Program         = 101,
  Qpd_Suspected_Srv_Program     = 102,
  Qpd_Suspected_Module          = 103,
  Qpd_Suspected_Procedure       = 104,
  Qpd_Detecting_Program         = 105,
  Qpd_Detecting_Srv_Program     = 106,
  Qpd_Prob_Log_entry_creation   = 107,                       /* @C0A */
  Qpd_Symptom                   = 200,
  Qpd_Instruction_Number        = 201,
  Qpd_System_Object             = 300,
  Qpd_Data                      = 301,
  Qpd_Named_System_Object       = 302,
  Qpd_Spooled_File              = 303,
  Qpd_Named_IFS_Object          = 304,                       /* @B1A */
  Qpd_Service_Id                = 400,
  Qpd_Force_to_Integer          = 70000
} Qpd_Key_t;

/* key unknown */
typedef struct
{
  Qpd_Key_t     Key;
/*char          Problem_Record_Desc[];*//* Varying length */
} Qpd_Unknown_Key_t;


/* Call stack counter */
typedef struct
{
  Qpd_Key_t     Key;
  int           Relative_Invocation;
} Qpd_Call_Stack_Counter_t;

/* Suspected program */
typedef struct
{
  Qpd_Key_t  Key;
  int        Program_Name_Length;
  int        Library_Name_Length;
  char       Reserved[4];
  char       *Program_Name;
  char       *Library_Name;
} Qpd_Suspected_Program_t;

/* Suspected service program */
typedef struct
{
  Qpd_Key_t   Key;
  int         Srv_Program_Name_Length;
  int         Library_Name_Length;
  char        Reserved[4];
  char        *Srv_Program_Name;
  char        *Library_Name;
} Qpd_Suspected_Srv_Program_t;


/* Suspected module */
typedef struct
{
  Qpd_Key_t  Key;
  int        Module_Name_Length;
  int        Library_Name_Length;
  char       Reserved[4];
  char       *Module_Name;
  char       *Library_Name;
} Qpd_Suspected_Module_t;

/* Suspected procedure */
typedef struct
{
  Qpd_Key_t Key;
  int       Procedure_Name_Length;
  char      Reserved[8];
  char      *Procedure_Name;
} Qpd_Suspected_Procedure_t;

/* Detecting program */
typedef struct
{
  Qpd_Key_t  Key;
  int        Program_Name_Length;
  int        Library_Name_Length;
  char       Reserved[4];
  char       *Program_Name;
  char       *Library_Name;
} Qpd_Detecting_Program_t;

/* Detecting service program */
typedef struct
{
  Qpd_Key_t  Key;
  int        Srv_Program_Name_Length;
  int        Library_Name_Length;
  char       Reserved[4];
  char       *Srv_Program_Name;
  char       *Library_Name;
} Qpd_Detecting_Srv_Program_t;

/* Problem log entry creation  @C0A */
typedef struct
{
  Qpd_Key_t     Key;
  char          Prob_log_entry_creation;
} Qpd_Prob_log_entry_creation_t;

/* Symptom */
typedef struct
{
  Qpd_Key_t  Key;
  int        Keyword_Length;
  int        Data_Length;
  char       Data_Type;
  char       Reserved[3];
  char       *Keyword;
  char       *Data;
} Qpd_Symptom_t;

/* Instruction number */
typedef struct
{
  Qpd_Key_t     Key;
  char          Instruction_Number[4];
} Qpd_Instruction_Number_t;

/* System Object */
typedef struct
{
  Qpd_Key_t     Key;
  char          Reserved[12];
  _SYSPTR       Object;
} Qpd_System_Object_t;

/* Related data */
typedef struct
{
  Qpd_Key_t     Key;
  int           Data_Length;
  int           Data_Id;
  char          Reserved[4];
  void          *Data;
} Qpd_Data_t;

/* Name of related object */
typedef struct
{
  Qpd_Key_t     Key;
  char          Object_Name[30];
  char          Object_Library[30];
  char          Object_Type[10];
} Qpd_Named_System_Object_t;

/* Related spooled file */
typedef struct
{
  Qpd_Key_t     Key;
  char          Spf_Name[10];
  int           Spf_Number;
} Qpd_Spooled_File_t;

/* Service id */
typedef struct
{
  Qpd_Key_t     Key;
  char          Service_Id[4];
} Qpd_Service_Id_t;

/* IMPORTANT! Following structure uses the Qlg_Path_Name_T struct defined*/
/* IN H/QLG include file, and it will be updated if that include file    */
/* changes.                                                              */
/* Named IFS Object */
 typedef struct
{
  Qpd_Key_t       Key;
  char                    Reserved[12];
  char                   *Named_IFS_NLS_Enabled_Path;
} Qpd_Named_IFS_Object_t;                                    /* @B1A */

typedef union
{
  Qpd_Unknown_Key_t                     *Unknown_Key;
  Qpd_Call_Stack_Counter_t              *Call_Stack_Counter;
  Qpd_Suspected_Program_t               *Suspected_Program;
  Qpd_Suspected_Srv_Program_t           *Suspected_Srv_Program;
  Qpd_Suspected_Module_t                *Suspected_Module;
  Qpd_Suspected_Procedure_t             *Suspected_Procedure;
  Qpd_Detecting_Program_t               *Detecting_Program;
  Qpd_Detecting_Srv_Program_t           *Detecting_Srv_Program;
  Qpd_Prob_log_entry_creation_t         *Prob_log_entry_creation;  /*@C0A*/
  Qpd_Symptom_t                         *Symptom;
  Qpd_Instruction_Number_t              *Instruction_Number;
  Qpd_System_Object_t                   *System_Object;
  Qpd_Data_t                            *Data;
  Qpd_Named_System_Object_t             *Named_System_Object;
  Qpd_Spooled_File_t                    *Spooled_File;
  Qpd_Service_Id_t                      *Service_Id;
  Qpd_Named_IFS_Object_t                *Named_IFS_Object;   /* @B1A */
  void                                  *Reserved;      /* @B2C @B1A */
} Qpd_Key_Pointer_t;


/*********************************************************************/
/* API Function Prototypes                                           */
/*********************************************************************/
#ifdef __ILEC400__
 #pragma argument (QpdReportSoftwareError, OS, nowiden)
#else
 extern "C"
#endif
void QpdReportSoftwareError(
        void *,     /* Array of Problem description records  */
        int *,      /* Number of problem description records */
        void *);    /* Error code structure                  */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif  /* _QPDSRVPG_H  */
