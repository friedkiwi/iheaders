/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2005                                */
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
/* ----------------------------------------------------------------- */
#if(__OS400_TGTVRM__>=530)
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/QP0LRRO                               */
/*                                                                   */
/* Descriptive Name       :  Retrieve Referenced Objects API include */
/*                                                                   */
/* Description            :  This file contains the structures and   */
/*                           prototype for the QP0LRRO API.          */
/*                                                                   */
/* Macros List            :  QP0L_JIDF0100                           */
/*                           QP0L_JIDF0200                           */
/*                           QP0LRRO_RROO0100_FORMAT                 */
/*                                                                   */
/* Type Definition List   :  Qp0l_Obj_List_Output_T                  */
/*                           Qp0l_RROO0100_Output_T                  */
/*                                                                   */
/* Structure List         :  Qp0l_RROO0100_Output                    */
/*                           Qp0l_Obj_List_Output                    */
/*                                                                   */
/* Class List             :  None.                                   */
/*                                                                   */
/* Function Prototype List:  QP0LRRO                                 */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* FLAG REASON     LEVEL   DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- -------    ------  ------ --------- -----------------------  */
/* $A0=D9918800    v5r3m0  020419 ROCH      : New Include            */
/* $A1=P9A52232    v5r3m0f 040107 ROCH      : Add cplusplus ifdef to */
/*                                            end of header          */
/* $A2=P9A55370    v5r4m0  040202 ROCH      : Add void to func call  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QP0LRRO_h
#define _QP0LRRO_h

#include <qlg.h>             /* Qlg_Path_Name_T definition           */
#include <qp0lror.h>         /* Qp0l_Ext_Ref_Types_Output_T          */
#include <qwcattr.h>         /* For JIDF0100, JIDF0200 job structures*/
#include <sys/stat.h>        /* For ino_t definition                 */
#include <qp0lstdi.h>        /* For qp0lFID_T definition             */


#pragma datamodel(P128)

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Obj_List_Output                          */
/*                                                                   */
/* Structure Purpose:  This structure is used to package the         */
/*                     object(s) in use and the objects various      */
/*                     reference types that may be returned for the  */
/*                     object.  This structure repeats for each	     */
/*	               object associated with the specified job.     */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_Obj_List_Output
{
  unsigned int NextListEntryDisp;  /* Displacement to the next object
                                       list output entry.            */
  unsigned int RefDisp;      /* Displacement to the extended
                                reference types.                     */
  unsigned int RefLength;    /* Length of the extended reference
                                types.                               */
  unsigned int RefCount;     /* Reference Count.                     */
  unsigned int PathDisp;     /* Displacement to returned Qlg path
                                name structure.                      */
  unsigned int PathLength;   /* Length of the returned path name
                                structure.                           */
  Qp0lFID_t    FileID;       /* File identifier for the object.      */
  dev64_t      FileSysId;    /* File system identifier.              */
  unsigned int FileSysType;  /* File system type. These file system
                                types are defined below.             */
  ino_t	       FileIdNumber; /* File identifier number for the
                                   object                            */
  unsigned int GenId;        /* Generation identifier for the object */
/*Qp0l_Ext_Ref_Types_Output_T RefTypes; */ /* Extended reference type
                                structure. The extended reference type
                                output structure is contained in
                                qp0lror.h                            */
/*Qlg_Path_Name_T PathName; */ /* Qlg path name structure.  The Qlg
                                  path name structure is contained in
                                  qlg.h                              */
} Qp0l_Obj_List_Output_T;

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_RROO0100_Output                          */
/*                                                                   */
/* Structure Purpose:  This structure is used to return the objects  */
/*                     and their references.                         */
/*                                                                   */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_RROO0100_Output
{
    unsigned int BytesReturned;    /* Number of bytes returned in
                                      this output buffer.            */
    unsigned int BytesAvailable;   /* Number of bytes that were	
                                      available to be returned.      */
    unsigned int ObjectsReturned;  /* Number of objects returned.    */
    unsigned int ObjectsAvailable; /* Number of objects available to
                                      be returned.                   */
    unsigned int ObjListOffset;    /* Offset to the object list output
                                      structure.         	     */
    unsigned int ReferenceStatus;  /* Retrieve referenced object
                                      status                         */
/*Qp0l_Obj_List_Output_T ObjListResults[1]; */ /* Object list output
                                      structure.  Contains the object
                                      path name and object references.
                                      This structure repeats for each
                                      object referenced by the
                                      specified job.                 */
} Qp0l_RROO0100_Output_T;

/* Macro constants to use for the receiver format parameter of
   QP0LRRO.   */
#define QP0LRRO_RROO0100_FORMAT  "RROO0100"

/* Macro constants to use for the Job format parameter of QP0LRRO.   */
#define QP0L_JIDF0100  "JIDF0100"
#define QP0L_JIDF0200  "JIDF0200"

/* File system types */
#define QP0L_ROOT_FS            0
#define QP0L_QOPENSYS_FS        1
#define QP0L_UDFS_FS            2
#define QP0L_UDFS_MANAGEMENT_FS 3
#define QP0L_QSYS_FS            4
#define QP0L_IASPQSYS_FS        5
#define QP0L_QDLS_FS            6
#define QP0L_NFS_FS             7
#define QP0L_QNETWARE_FS        8
#define QP0L_QOPT_FS            9
#define QP0L_QFILSVR400_FS      10
#define QP0L_QNTC_FS            11

/* Retrieve referenced object status */
#define QP0L_NO_ERROR           0x00000000
#define QP0L_ERROR              0x00000001
#define QP0L_SPACE_ERROR        0x00000002

#ifdef __ILEC400__
#pragma linkage (QP0LRRO,OS,nowiden)
#else
extern "OS"
#endif
void QP0LRRO(void* Receiver_Variable,
unsigned int Length_Of_Receiver_Variable,
char* Receiver_Format_Name,
void* Job_Identification,
char* Job_Identification_Format,
void* Error_Code);                                            /* @A2C*/

#pragma datamodel(pop)
#endif     /* QP0LRRO_h  */

#ifdef __cplusplus                                            /* @A1A*/
    #pragma info(restore)                                     /* @A1A*/
#else                                                         /* @A1A*/
    #pragma checkout(resume)                                  /* @A1A*/
#endif                                                        /* @A1A*/

#endif     /* >= 530      */
