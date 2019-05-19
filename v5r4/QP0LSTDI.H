/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
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
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name:  Qp0lstdi.h                                  */
/*                                                                */
/* Descriptive Name: Integrated File System definitions           */
/*                                                                */
/* Description: This header file defines multiple APIs.  They @C1A*/
/*              are identified in the Function Prototype List @C1A*/
/*              below.  The rename() function is redirected   @C1A*/
/*              with #pragma map.                             @C1A*/
/*                                                                */
/* Header Files Included: sys/types.h                             */
/*                        qlg.h                                   */
/*                        qp0lscan.h                              */
/*                                                                */
/* Macros List:                                                   */
/*              QP0L_ALLDIR                                   @C6A*/
/*              QP0L_ALLQSYS                                  @C6A*/
/*              QP0L_ALLSTMF                                  @C6A*/
/*              QP0L_ALWCKPWRT                                @B4A*/
/*              QP0L_ALWSAV_NO                                @CAA*/
/*              QP0L_ALWSAV_YES                               @CAA*/
/*              QP0L_APYJRNCHG_REQ_YES                        @CDA*/
/*              QP0L_APYJRNCHG_REQ_NO                         @CDA*/
/*              QP0L_ATTR_ACCESS_TIME                         @A5C*/
/*              QP0L_ATTR_ALLOC_SIZE                          @A4A*/
/*              QP0L_ATTR_ALLOC_SIZE_64                       @B1A*/
/*              QP0L_ATTR_ALWCKPWRT                           @B4A*/
/*              QP0L_ATTR_ALWSAV                              @CAA*/
/*              QP0L_ATTR_ASP                                 @A9A*/
/*              QP0L_ATTR_AUDIT                               @C8A*/
/*              QP0L_ATTR_AUTH                                @A5C*/
/*              QP0L_ATTR_CCSID                               @BBA*/
/*              QP0L_ATTR_CHANGE_TIME                         @A5C*/
/*              QP0L_ATTR_CHECKED_OUT                         @A5A*/
/*              QP0L_ATTR_CODEPAGE                            @B2A*/
/*              QP0L_ATTR_CREATE_TIME                         @A5C*/
/*              QP0L_ATTR_CRTOBJAUD                           @CEA*/
/*              QP0L_ATTR_CRTOBJSCAN                          @C9A*/
/*              QP0L_ATTR_DATA_SIZE                           @A4A*/
/*              QP0L_ATTR_DATA_SIZE_64                        @B1A*/
/*              QP0L_ATTR_DIR_FORMAT                          @C5A*/
/*              QP0L_ATTR_DISK_STG_OPT                        @C5A*/
/*              QP0L_ATTR_EXTENDED_ATTR_SIZE                  @A5A*/
/*              QP0L_ATTR_FILE_FORMAT                         @B3A*/
/*              QP0L_ATTR_FILE_ID                             @A8A*/
/*              QP0L_ATTR_JOURNAL_EXTENDED_INFORMATION        @CGA*/
/*              QP0L_ATTR_JOURNAL_INFORMATION                 @B6A*/
/*              QP0L_ATTR_LOCAL_REMOTE                        @A4A*/
/*              QP0L_ATTR_MAIN_STG_OPT                        @C5A*/
/*              QP0L_ATTR_MODIFY_TIME                         @A5C*/
/*              QP0L_ATTR_MULT_SIGS                           @C5A*/
/*              QP0L_ATTR_OBJTYPE                             @A4A*/
/*              QP0L_ATTR_PC_ARCHIVE                          @B2A*/
/*              QP0L_ATTR_PC_HIDDEN                           @B2A*/
/*              QP0L_ATTR_PC_READ_ONLY                        @B2A*/
/*              QP0L_ATTR_PC_SYSTEM                           @B2A*/
/*              QP0L_ATTR_RESET_DATE                          @B2A*/
/*              QP0L_ATTR_RSTDRNMUNL                          @CBA*/
/*              QP0L_ATTR_SCAN                                @C9A*/
/*              QP0L_ATTR_SCAN_INFO                           @C9A*/
/*              QP0L_ATTR_SGID                                @BBA*/
/*              QP0L_ATTR_SIGNED                              @BCA*/
/*              QP0L_ATTR_STG_FREE                            @A5C*/
/*              QP0L_ATTR_SUID                                @BBA*/
/*              QP0L_ATTR_SYS_SIGNED                          @C5A*/
/*              QP0L_ATTR_SYSTEM_ARCHIVE                      @B2A*/
/*              QP0L_ATTR_SYSTEM_USE                          @CGA*/
/*              QP0L_ATTR_UDFS_DEFAULT_FORMAT                 @B3A*/
/*              QP0L_ATTR_USAGE_INFORMATION                   @B2A*/
/*              QP0L_AUD_ALL                                  @CEA*/
/*              QP0L_AUD_CHANGE                               @CEA*/
/*              QP0L_AUD_NONE                                 @CEA*/
/*              QP0L_AUD_NOTAVL                               @CFA*/
/*              QP0L_AUD_SYSVAL                               @CEA*/
/*              QP0L_AUD_USRPRF                               @CEA*/
/*              QP0L_BYPASS_NO_ERRORID                        @A4A*/
/*              QP0L_CHECKED_OUT                              @A5A*/
/*              QP0L_DIR_FORMAT_TYPE1                         @C5A*/
/*              QP0L_DIR_FORMAT_TYPE2                         @C5A*/
/*              QP0L_DONOT_FOLLOW_SYMLNK                      @A5C*/
/*              QP0L_END_PROCESS_SUBTREE                      @A4A*/
/*              QP0L_EXCLUSION_TYPE                           @A4A*/
/*              QP0L_FILE_FORMAT_TYPE1                        @B3A*/
/*              QP0L_FILE_FORMAT_TYPE2                        @B3A*/
/*              QP0L_FOLLOW_SYMLNK                            @A5C*/
/*              QP0L_INCLUSION_TYPE                           @A4A*/
/*              QP0L_JOBLOG_NO_ERRORID                        @A4A*/
/*              QP0L_JOURNAL_AFTER_IMAGES                     @B6A*/
/*              QP0L_JOURNAL_BEFORE_IMAGES                    @B6A*/
/*              QP0L_JOURNAL_OPTIONAL_ENTRIES                 @B6A*/
/*              QP0L_JOURNAL_SUBTREE                          @B6A*/
/*              QP0L_JOURNALED                                @B6A*/
/*              QP0L_LOCAL_OBJ                                @A4A*/
/*              QP0L_LOCAL_REMOTE_OBJ                         @A4A*/
/*              QP0L_MBR                                      @C6A*/
/*              QP0L_MLTTHDACN_MSG                            @B5A*/
/*              QP0L_MLTTHDACN_NO                             @B5A*/
/*              QP0L_MLTTHDACN_NOMSG                          @B5A*/
/*              QP0L_MLTTHDACN_SYSVAL                         @B5A*/
/*              QP0L_MULT_SIGS_NO                             @C5A*/
/*              QP0L_MULT_SIGS_YES                            @C5A*/
/*              QP0L_NO                                       @A4A*/
/*              QP0L_NOQSYS                                   @C6A*/
/*              QP0L_NOT_ALWCKPWRT                            @B4A*/
/*              QP0L_NOT_CHECKED_OUT                          @A5A*/
/*              QP0L_NOT_JOURNALED                            @B6A*/
/*              QP0L_NOT_SIGNED                               @BCA*/
/*              QP0L_NULLNAME_ERRORID                         @A4A*/
/*              QP0L_PASS_WITH_ERRORID                        @A4A*/
/*              QP0L_PC_CHANGED                               @B2A*/
/*              QP0L_PC_HIDDEN                                @B2A*/
/*              QP0L_PC_NOT_CHANGED                           @B2A*/
/*              QP0L_PC_NOT_HIDDEN                            @B2A*/
/*              QP0L_PC_NOT_READONLY                          @B2A*/
/*              QP0L_PC_NOT_SYSTEM                            @B2A*/
/*              QP0L_PC_READONLY                              @B2A*/
/*              QP0L_PC_SYSTEM                                @B2A*/
/*              QP0L_REMOTE_OBJ                               @A4A*/
/*              QP0L_ROLLBACK_END_YES                         @CDA*/
/*              QP0L_ROLLBACK_END_NO                          @CDA*/
/*              QP0L_RSTDRNMUNL_OFF                           @CBA*/
/*              QP0L_RSTDRNMUNL_ON                            @CBA*/
/*              QP0L_SCANNING_CHGONLY                         @C9A*/
/*              QP0L_SCANNING_NO                              @C9A*/
/*              QP0L_SCANNING_YES                             @C9A*/
/*              QP0L_SELECT_DONE                              @A4A*/
/*              QP0L_SELECT_FAILED                            @A4A*/
/*              QP0L_SELECT_NOT_OK                            @A4A*/
/*              QP0L_SELECT_OK                                @A4A*/
/*              QP0L_SGID_OFF                                 @C5A*/
/*              QP0L_SGID_ON                                  @C5A*/
/*              QP0L_SIGNED                                   @BCA*/
/*              QP0L_STG_DYNAMIC                              @C5A*/
/*              QP0L_STG_MINIMIZE                             @C5A*/
/*              QP0L_STG_NORMAL                               @C5A*/
/*              QP0L_SUBTREE_NO                               @A4A*/
/*              QP0L_SUBTREE_YES                              @A4A*/
/*              QP0L_SUID_OFF                                 @C5A*/
/*              QP0L_SUID_ON                                  @C5A*/
/*              QP0L_SYS_NOT_STG_FREE                         @A5A*/
/*              QP0L_SYS_STG_FREE                             @A5A*/
/*              QP0L_SYSTEM_CHANGED                           @B2A*/
/*              QP0L_SYSTEM_NOT_CHANGED                       @B2A*/
/*              QP0L_SYSTEM_SIGNED_NO                         @C5A*/
/*              QP0L_SYSTEM_SIGNED_YES                        @C5A*/
/*              QP0L_UDFS_DEFAULT_TYPE1                       @B3A*/
/*              QP0L_UDFS_DEFAULT_TYPE2                       @B3A*/
/*              QP0L_SYSUSE_NONE                              @CGA*/
/*              QP0L_SYSUSE_NWSSTG                            @CGA*/
/*              QP0L_SYSUSE_VRTVOL                            @CGA*/
/*              QP0L_USER_FUNCTION_PGM                        @A4A*/
/*              QP0L_USER_FUNCTION_PTR                        @A4A*/
/*              QP0L_YES                                      @A4A*/
/*              rename                                            */
/*                                                                */
/* Structure List: Qp0l_AttrTypes_List_t                          */
/*                 Qp0l_Authority_General_t                       */
/*                 Qp0l_Authority_Users_t                         */
/*                 Qp0l_Checkout_t                                */
/*                 Qp0l_IN_EXclusion_List_t                       */
/*                 Qp0l_Journal_Extended_Info_t               @CDA*/
/*                 Qp0l_Journal_Info_t                        @C3A*/
/*                 Qp0l_Objtypes_List_t                           */
/*                 Qp0l_QSYS_Info_t                               */
/*                 Qp0l_Scan_Info_t                           @C9A*/
/*                 Qp0l_User_Function_t                           */
/*                                                                */
/* Function Prototype List: QlgGetPathFromFileID              @C1A*/
/*                          QlgRenameKeep                     @C1A*/
/*                          QlgRenameUnlink                   @C1A*/
/*                          Qp0lCvtPathToQSYSObjName              */
/*                          Qp0lGetAttr                           */
/*                          Qp0lGetPathFromFileID                 */
/*                          Qp0lOpen                          @B7A*/
/*                          Qp0lProcessSubtree                    */
/*                          Qp0lRenameKeep                        */
/*                          Qp0lRenameUnlink                      */
/*                          Qp0lSaveStgFree                       */
/*                          Qp0lUnlink                        @B7A*/
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/* ---- ------------ ----- ------ -------- ---------------------- */
/* $A0= D28253       3D10  940309 ROCH     New Include            */
/* $A1= P3992252     3D60  950522 ROCH     Add __cplusplus #ifdef */
/*                                         and #pragma info(none) */
/* $A2= PTH01765     3D60  950804 ROCH     Need to include types.h*/
/*                                         Correct #pragma info   */
/* $A3= P3624985     4D10  960813 ROCH     Move types.h           */
/* $A4= D9499200     4D30  970625 ROCH:    Add Qp0lProcessSubtree */
/*                                         and Qp0lGetAttr        */
/* $A5= D9499200     4D30  970721 ROCH:    Adding macros for      */
/*                                         Qp0lGetAttr            */
/* $A6= D95721       4D30  970820 ROCH:    Adding API Qp0lCvt-    */
/*                                         PathToQSYSObjName      */
/* $A7= D9499200     4D30  970904 ROCH:    Add Qp0lSaveStgFree    */
/* $A8= D9539701     4D30  971021 ROCH:    Adding new macro       */
/*                                         QP0L_ATTR_FILE_ID      */
/* $A9= P3662129     4D30  971222 ROCH:    Adding new macro       */
/*                                         QP0L_ATTR_ASP          */
/* $B1= D9588102     4D40  980321 ROCH:    Add new macros         */
/*                                         QP0L_ATTR_ALLOC_64     */
/*                                         QP0L_ATTR_DATA_SIZE_64 */
/* $B2= D9704000     4D40  980321 ROCH:    Add QP0lSetAttr and    */
/*                                         new macros for         */
/*                                         Qp0lGetAttr.           */
/* $B3= D9584401     4D40  980422 ROCH:    Add support to         */
/*                                         identify file formats  */
/* $B4= D9707700     4D40  980616 ROCH:    Add support for        */
/*                                         QP0L_ATTR_ALWCKPWRT    */
/* $B5= D9705800     4D40  980609 ROCH:    Add support for        */
/*                                         multithread actions    */
/* $B6= D9714800     4D40  980629 ROCH:    Add new macros         */
/*                                         for Qp0lGetAttr.       */
/*                                         Add Qp0l_Journal_Info_t*/
/*                                         structure.             */
/* $B7= D9732500     4D40  980618 ROCH:    Add Qp0lOpen and       */
/*                                         Qp0lUnlink             */
/* $B8= PSA75675     4D40  980804 ROCH:    Add _POSIX_SOURCE      */
/*                                         #ifdefs for new data   */
/*                                         types                  */
/* $B9= D9746400     5D10  990406 ROCH:    Update journal info.   */
/* $BA= P3696489     5D10  990422 ROCH:    Replace #define with   */
/*                                         #pragma map for        */
/*                                         rename                 */
/* $BB= D9746401     5D10  990525 ROCH:    Update journal info.   */
/* $BB= D9765101     5D10  990623 ROCH:    Add QP0L_ATTR_CCSID    */
/* $BC= D9754500     5D10  990714 ROCH:    Add QP0L_ATTR_SIGNED   */
/* $C1= D9765800     5D10  990607 ROCH:    Add 'Qlg' API support  */
/* $C2= D98212.05    5D10  000104 ROCH:    Datamodel changes      */
/* $C3= P9929484     5D10  000928 ROCH:    Update prologue.       */
/* $C4= D9841621     5D20  010611 ROCH:    Add field to           */
/*                                         Qp0l_QSYS_Info_t       */
/* $C5= D9864901     5D20  010627 ROCH:    QP0L_ATTR_SYS_SIGNED   */
/*                                         QP0L_ATTR_MULT_SIGS    */
/*                                         QP0L_ATTR_DISK_STG_OPT */
/*                                         QP0L_ATTR_MAIN_STG_OPT */
/*                                         QP0L_ATTR_DIR_FORMAT   */
/* $C6= D9841624     5D20  010822 ROCH:    QP0L_ALLDIR, QP0L_MBR, */
/*                                         QP0L_ALLQSYS,          */
/*                                         QP0L_NOQSYS,           */
/*                                         QP0L_ALLSTMF           */
/* $C7= P9953683     5D20  010922 ROCH:    Comment fix            */
/* $C8= D9909300     5D20  011211 ROCH:    QP0L_ATTR_AUDIT        */
/* $C9= D9986000     5D30  020330 ROCH:    Scan-related changes   */
/* $CA= D9936500     5D30  020506 ROCH:    QP0L_ATTR_ALWSAV       */
/* $CB= D9909605     5D30  020918 ROCH:    QP0L_ATTR_RSTDRNMUNL   */
/* $CC= D9923000     5D30  021206 ROCH:    CCSID neutral rename   */
/* $CD= D9920705     5D30  021223 ROCH:    Add new macros         */
/*                                         for Qp0lGetAttr. Add   */
/*                                    Qp0l_Journal_Extended_info_t*/
/*                                         structure.             */
/* $CE= D9981200   v5r4m0  031202 ROCH:    QP0L_ATTR_CRTOBJAUD    */
/* $CF= D9976601   v5r4m0  040301 ROCH:    QP0L_AUD_NOTAVL        */
/* $CG= D9979403   v5r4m0  040402 ROCH:    QP0L_ATTR_SYSTEM_USE   */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef __qp0lstdi_h
#define __qp0lstdi_h

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>                                    /*  @A3C*/

/* Protect POSIX source                                       @B8A*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))

#include <qlg.h>                      /* For Qlg_Path_Name_T  @A4A*/
#include <qp0lscan.h>          /* For Qp0lGetAttr() scan info @C9C*/

/* Protect POSIX source                                       @B8A*/
#endif

#if (__OS400_TGTVRM__>=510)                                /* @C2A*/
#pragma datamodel(P128)                                    /* @C2A*/
#endif                                                     /* @C2A*/

/******************************************************************/
/* Type Definitions                                               */
/******************************************************************/

typedef char Qp0lFID_t[16];           /* File ID                  */

/* Protect POSIX source                                       @B8A*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))

/* Qp0lProcessSubtree() API Object types list                 @A4A*/
typedef struct                        /*                      @A4A*/
{                                     /*                      @A4A*/
  uint          Number_Of_Objtypes;   /* Number of object     @A4A*/
                                      /*   types in the list  @A4A*/
 /*qp0l_objtype_t  Objtypes[];*/      /*Variable length entry @A4A*/
                                      /*                      @A4A*/
} Qp0l_Objtypes_List_t;               /*                      @A4A*/



/* Qp0lProcessSubtree() API IN_EXclusion list type            @A4A*/
typedef struct
{
  uint       IN_EXclusion_t;          /* Inclusion list or    @A4A*/
                                      /*   exclusion list     @A4A*/
                                      /*   type identifier    @A4A*/
  uint       Number_Of_Pointers;      /* Number of path name  @A4A*/
                                      /*   pointers in the    @A4A*/
                                      /*   inclusion or       @A4A*/
                                      /*   exclusion list     @A4A*/
  char       Reserved[8];             /* Must be zero         @A4A*/
                                      /*                      @A4A*/
                                      /*Variable length entry @A4A*/
 /*Qlg_Path_Name_T    *Path_Name_Ptrs[];*/                 /* @A4A*/
                                      /*                      @A4A*/

} Qp0l_IN_EXclusion_List_t;           /*                      @A4A*/



/* Qp0lProcessSubtree() API type definition for the user      @A4A*/
/* specified exit program                                     @A4A*/
/*                                                            @A4A*/
 typedef void (*Qp0l_ProcSubtree_t)
                     (uint *,uint *,uint *,Qlg_Path_Name_T *,
                                    void *);               /* @A4A*/


/* Qp0lProcessSubtree() API user function                     @A4A*/
typedef struct
{
  uint       Function_Type;           /* Procedure or program @A4A*/
                                      /*   type flag          @A4A*/
  char       Library[10];             /* Program library      @A4A*/
  char       Program[10];             /* Program name         @A4A*/
  char       Mltthdacn[1];            /* Multithread action   @B5A*/
  char       Reserved[7];             /* must be zero         @B5C*/
  Qp0l_ProcSubtree_t  Procedure;      /* Procedure pointer    @A4A*/

} Qp0l_User_Function_t;

/* Qp0lGetAttr() API attribute types list                     @A5A*/
typedef struct                        /*                      @A5A*/
{                                     /*                      @A5A*/
  uint          Number_Of_ReqAttrs;   /* Number of requested  @A5A*/
                                      /*   attributes in the  @A5A*/
                                      /*   list               @A5A*/
  /*uint          AttrTypes[];*/      /*Variable length entry @A5A*/
                                      /*                      @A5A*/

} Qp0l_AttrTypes_List_t;              /*                      @A5A*/

/* Qp0lGetAttr() API object checked out information           @A5A*/
typedef struct                        /*                      @A5A*/
{                                     /*                      @A5A*/
  char          Checked_Out_Flag;     /* Whether or not object@A5A*/
                                      /*   is checked out     @A5A*/
  char          User_Name[10];        /* Name of user who has @A5A*/
                                      /*   it checked out     @A5A*/
  char          Reserved[1];          /* Reserved field.      @A5A*/
  uint          Checked_Out_Time;     /* Time, in seconds     @A5A*/
                                      /*   since Epoch, when  @A5A*/
                                      /*   checked out        @A5A*/
} Qp0l_Checkout_t;                    /*                      @A5A*/


/* Qp0lGetAttr() API format for general authority information.@A5A*/
typedef struct                        /*                      @A5A*/
{                                     /*                      @A5A*/
  char          Object_owner[10];     /* Object owner         @A5A*/
  char          Primary_group[10];    /* Primary group        @A5A*/
  char          Auth_list_name[10];   /* Authorization list   @A5A*/
                                      /* name                 @A5A*/
  char          Reserved1[10];        /* (must be zero)       @A5A*/
  uint          UserArray_Offset;     /* Offset to Array of   @A5A*/
                                      /* users                @A5A*/
  uint          Number_of_users;      /* Number of users      @A5A*/
  uint          UserEntry_size;       /* Size of user entry   @A5A*/
                                      /*   field entry        @A5A*/
  char          Reserved2[12];        /* (must be zero)       @A5A*/
 /*char        Array_of_Users[];*/    /*Variable length entry @A5A*/
                                      /*                      @A5A*/
} Qp0l_Authority_General_t;

/* Qp0lCvtPathToQSYSObjName() API struct for info             @A6A*/
/* returned about the QSYS object name.                       @A6A*/
typedef struct {                      /*                      @A6A*/
    uint Bytes_Returned;              /* # bytes actually     @A6A*/
                                      /*   returned to caller @A6A*/
    uint Bytes_Available;             /* # bytes total        @A6A*/
                                      /*   available          @A6A*/
    uint CCSID_Out;                   /* CCSID that names and @A6A*/
                                      /*   types returned in  @A6A*/
    char Lib_Name[28];                /* Name of library      @A6A*/
    char Lib_Type[20];                /* Type of library      @A6A*/
    char Obj_Name[28];                /* Name of object       @A6A*/
    char Obj_Type[20];                /* Type of object       @A6A*/
    char Mbr_Name[28];                /* Name of member       @A6A*/
    char Mbr_Type[20];                /* Type of member       @A6A*/
    char Asp_Name[28];                /* Name of ASP          @C4A*/
} Qp0l_QSYS_Info_t;                   /*                      @A6A*/

/* Qp0lGetAttr() API format for information returned for users@A5A*/
typedef struct                        /*                      @A5A*/
{                                     /*                      @A5A*/
  char          User_name[10];        /* User name            @A5A*/
  char          User_data_auth[10];   /* User data authority  @A5A*/
  char          OBJMGT_rights[1];     /* Object management    @A5A*/
  char          OBJEXIST_rights[1];   /* Object existence auth@A5A*/
  char          OBJALTER_rights[1];   /* Object alter         @A5A*/
  char          OBJREF_rights[1];     /* Object reference     @A5A*/
  char          Reserved1[10];        /* (must be zero)       @A5A*/
  char          OBJOPR_DataRights[1]; /* Object operational   @A5A*/
  char          READ_DataRights[1];   /* Read                 @A5A*/
  char          ADD_DataRights[1];    /* Add                  @A5A*/
  char          UPDATE_DataRights[1]; /* Update               @A5A*/
  char          DELETE_DataRights[1]; /* Delete               @A5A*/
  char          EXECUTE_DataRights[1];/* Execute              @A5A*/
  char          EXCLUDE_DataRights[1];/* Exclude              @A5A*/
  char          Reserved2[7];         /* (must be zero)       @A5A*/

} Qp0l_Authority_Users_t;             /*                      @A5A*/


 /* Qp0lSaveStgFree() API pathnames for Exit programs         @A7A*/
 typedef struct                        /*                     @A7A*/
 {                                     /*                     @A7A*/
   uint       Number_Of_Names;         /* Number of path name @A7A*/
                                       /*   pointers in the   @A7A*/
   char       Reserved[12];            /* (must be zero)      @A7A*/
  /*Qlg_Path_Name_T  *Names_Ptrs[];*/  /* Variable length     @A7A*/
                                       /*   entry             @A7A*/

 } Qp0l_Pathnames_t;                   /*                     @A7A*/


/* Qp0lSaveStgFree() API type definition for the user         @A7A*/
/* specified exit program                                     @A7A*/
/*                                                            @A7A*/
 typedef void (*Qp0l_SaveStgFree_t)     /*                    @A7A*/
           (Qp0l_Pathnames_t *, int *, int *, void *);     /* @A7A*/


/* Qp0lSaveStgFree() API user function                        @A7A*/
typedef struct                         /*                     @A7A*/
{                                      /*                     @A7A*/
  uint                Function_Type;   /* Procedure or        @A7A*/
                                       /*   program type      @A7A*/
  char                Library[10];     /* Program library     @A7A*/
  char                Program[10];     /* Program name        @A7A*/
  char                Mltthdacn[1];    /* Multithread action  @B5A*/
  char                Reserved[7];     /* must be zero        @B5C*/
  Qp0l_SaveStgFree_t  Procedure;       /* Procedure pointer   @A7A*/

} Qp0l_StgFree_Function_t;             /*                     @A7A*/

/* Qp0lGetAttr() and Qp0lSetAttr() attribute data header      @B2A*/
typedef struct
{
  uint          Next_Attr_Offset;     /* Offset to next attr  @B2A*/
                                      /*  in buffer (in bytes)@B2A*/
  uint          Attr_ID;              /* Attribute ID         @B2A*/
  uint          Attr_Size;            /* Size of attr data    @B2A*/
                                      /*  in bytes (not incl. @B2A*/
                                      /*  padding).           @B2A*/
  char          Reserved[4];          /* Reserved field.      @B2A*/
} Qp0l_Attr_Header_t;                 /*                      @B2A*/

/* Qp0lGetAttr() API usage information                        @B2A*/
typedef struct                        /*                      @B2A*/
{                                     /*                      @B2A*/
  uint            Reset_date;         /* Date, in seconds     @B2A*/
                                      /*  since Epoch, that   @B2A*/
                                      /*  the Days_used_count @B2A*/
                                      /*  was reset.          @B2A*/
  uint            Last_used_date;     /* Date, in seconds     @B2A*/
                                      /*  since Epoch, that   @B2A*/
                                      /*  the object was most @B2A*/
                                      /*  recently used.      @B2A*/
  unsigned short  Days_used_count;    /* Count, incremented   @B2A*/
                                      /*  once each day, when @B2A*/
                                      /*  an object is used.  @B2A*/
  char            Reserved[4];        /* (must be zero)       @A5A*/
} Qp0l_Usage_t;                       /*                      @B2A*/

/* Qp0lGetAttr() API journal information                      @B6A*/
typedef struct                        /*                      @B6A*/
{                                     /*                      @B6A*/
  char          Status;               /* Current journaling   @B6A*/
                                      /*  status              @B6A*/
  char          Options;              /* Current Options      @B6A*/
  char          Journal_Identifier[10]; /*   JID              @B6A*/
  char          Journal_Name[10];     /* Current or last      @B6A*/
                                      /*  journal name.       @B6A*/
  char          Journal_Library[10];  /* Current or last      @B6A*/
                                      /*  journal library     @B6A*/
                                      /*  name.               @B6A*/
  uint          Time_Last_Started;    /* Date and time, in    @B6A*/
                                      /*  seconds since Epoch,@B6A*/
                                      /*  that journaling was @B6A*/
                                      /*  last started on the @B6A*/
                                      /*  object.             @B6A*/
} Qp0l_Journal_Info_t;                /*                      @B6A*/

/* Qp0lGetAttr() API journal extended information             @CDA*/
typedef struct                        /*                      @CDA*/
{                                     /*                      @CDA*/
  char          Status;               /* Current journaling   @CDA*/
                                      /*  status              @CDA*/
  char          Options;              /* Current Options      @CDA*/
  char          Journal_Identifier[10]; /*   JID              @CDA*/
  char          Journal_Name[10];     /* Current or last      @CDA*/
                                      /*  journal name.       @CDA*/
  char          Journal_Library[10];  /* Current or last      @CDA*/
                                      /*  journal library     @CDA*/
                                      /*  name.               @CDA*/
  uint          Time_Last_Started;    /* Date and time, in    @CDA*/
                                      /*  seconds since Epoch,@CDA*/
                                      /*  that journaling was @CDA*/
                                      /*  last started on the @CDA*/
                                      /*  object.             @CDA*/
  char          ReceiverName[10];     /*  Journal rcv name    @CDA*/
                                      /*  from the last save  @CDA*/
                                      /*  or oldest trans.    @CDA*/
                                      /*  prior to save.      @CDA*/
  char          ReceiverLibrary[10];  /*  Journal rcv library @CDA*/
                                      /*  name from the last  @CDA*/
                                      /*  save or oldest      @CDA*/
                                      /*  transaction prior   @CDA*/
                                      /*  to save.            @CDA*/
  char          ReceiverASPDevice[10];/*  Journal rcv ASP     @CDA*/
                                      /*  device from last    @CDA*/
                                      /*  save or oldest      @CDA*/
                                      /*  trans prior to      @CDA*/
                                      /*  save.               @CDA*/
  char          ApplyJournalChangeReq;/*                      @CDA*/
                                      /* QP0L_APYJRNCHG_REQ_NO@CDA*/
                                      /* - Loaded object has  @CDA*/
                                      /*   no partial trans.  @CDA*/
                                      /*QP0L_APYJRNCHG_REQ_YES@CDA*/
                                      /* - Loaded object has  @CDA*/
                                      /*   partial trans.     @CDA*/
  char          RollBackEnded;        /* QP0L_ROLLBACK_END_NO @CDA*/
                                      /* - Rollback did not   @CDA*/
                                      /*   ended prior to     @CDA*/
                                      /*   full completion.   @CDA*/
                                      /* QP0L_ROLLBACK_END_YES@CDA*/
                                      /* - Rollback abruptly  @CDA*/
                                      /*   ended prior to     @CDA*/
                                      /*   full completion.   @CDA*/
  char          Reserved0[12];        /*  Reserved space.     @CDA*/
} Qp0l_Journal_Extended_Info_t;       /*                      @CDA*/

/* Qp0lGetAttr() API scan information                         @C9A*/
typedef struct                        /*                      @C9A*/
{                                     /*                      @C9A*/
  char          status;               /* Scan status          @C9A*/
  char          signaturesDiff;       /* Scan signatures are
                                         different            @C9A*/
  char          binary;               /* Binary scan          @C9A*/
  char          reserved[1];          /* Reserved field.      @C9A*/
  uint          CCSID_1;              /* CCSID #1             @C9A*/
  uint          CCSID_2;              /* CCSID #2             @C9A*/
} Qp0l_Scan_Info_t;                   /*                      @C9A*/

/* Protect POSIX source                                       @B8A*/
#endif

/******************************************************************/
/* POSIX sensitive defines                                        */
/******************************************************************/

QBFC_EXTERN int rename(const char *, const char *);        /* @BAA*/
#ifdef _POSIX_SOURCE
   #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)    /* @CCA*/
      #pragma map (rename, "_C_NEU_IFS_rename_unlink")     /* @CCA*/
   #else                                                   /* @CCA*/
      #pragma map (rename, "Qp0lRenameUnlink")             /* @BAC*/
   #endif                                                  /* @CCA*/
#elif   defined _POSIX1_SOURCE
   #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)    /* @CCA*/
      #pragma map (rename, "_C_NEU_IFS_rename_unlink")     /* @CCA*/
   #else                                                   /* @CCA*/
      #pragma map (rename, "Qp0lRenameUnlink")             /* @BAC*/
   #endif                                                  /* @CCA*/
#else
   #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)    /* @CCA*/
      #pragma map (rename, "_C_NEU_IFS_rename_keep")       /* @CCA*/
   #else                                                   /* @CCA*/
      #pragma map (rename, "Qp0lRenameKeep")               /* @BAC*/
   #endif                                                  /* @CCA*/
#endif


/******************************************************************/
/* Macros                                                         */
/******************************************************************/

/* Protect POSIX source                                       @B8A*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))

/******************************************************************/
/* Macros for Qp0lProcessSubtree API                          @A4A*/
/******************************************************************/

/* Qp0lProcessSubtree() API user function type is either a    @A4A*/
/*   procedure pointer or a library/program name              @A4A*/
#define QP0L_USER_FUNCTION_PTR 0     /* a procedure pointer   @A4A*/
#define QP0L_USER_FUNCTION_PGM 1     /* a lib/program name    @A4A*/


/* Qp0lProcessSubtree() API path name list is either an inclusion */
/*   list or an exclusion list                                @A4A*/
#define QP0L_INCLUSION_TYPE    0     /* an inclusion list     @A4A*/
#define QP0L_EXCLUSION_TYPE    1     /* an exclusion list     @A4A*/

/*Choose to open and process subdirectories or not            @A4A*/
#define QP0L_SUBTREE_YES       0     /* Open subdirectories   @A4A*/
#define QP0L_SUBTREE_NO        1     /* Do not open           @A4A*/
                                     /*  subdirectories       @A4A*/


/*Choose to process local objects only, remote objects only   @A4A*/
/*   or both local and remote objects                         @A4A*/
#define QP0L_LOCAL_REMOTE_OBJ  0     /* both local and remote @A4A*/
#define QP0L_LOCAL_OBJ         1     /* local objects only    @A4A*/
#define QP0L_REMOTE_OBJ        2     /* remote objects only   @A4A*/
                                     /*                       @A4A*/

/*Choose Qp0lProcessSubtree() API recovery actions            @A4A*/
#define QP0L_PASS_WITH_ERRORID   0   /* pass objects with an  @A4A*/
                                     /*   error message       @A4A*/
#define QP0L_BYPASS_NO_ERRORID   1   /* bypass object without @A4A*/
                                     /*   an error message    @A4A*/
#define QP0L_JOBLOG_NO_ERRORID   2   /* put object name in    @A4A*/
                                     /*   joblog without an   @A4A*/
                                     /*   error message       @A4A*/
#define QP0L_NULLNAME_ERRORID    3   /* pass a null name and  @A4A*/
                                     /*   an error message    @A4A*/
#define QP0L_END_PROCESS_SUBTREE 4   /* end subtree processing@A4A*/


/* Qp0lProcessSubtree() API selection status passed to the    @A4A*/
/* called function                                            @A4A*/
#define QP0L_SELECT_OK         0     /* no problems           @A4A*/
#define QP0L_SELECT_DONE       1     /* selection complete    @A4A*/
#define QP0L_SELECT_NOT_OK     2     /* problems encountered  @A4A*/
#define QP0L_SELECT_FAILED     3     /* could not select      @A4A*/

/* Qp0lProcessSubtree() API object type special values        @C6A*/
#define QP0L_ALLDIR  "*ALLDIR   "   /* *ALLDIR -all dir objs  @C6A*/
#define QP0L_ALLQSYS "*ALLQSYS  "   /* *ALLQSYS-all qsys objs @C6A*/
#define QP0L_ALLSTMF "*ALLSTMF  "   /* *ALLSTMF-all str files @C6A*/
#define QP0L_MBR     "*MBR      "   /* *MBR    -database mbrs @C6A*/
#define QP0L_NOQSYS  "*NOQSYS   "   /* *NOQSYS -no qsys objs  @C6A*/

/*************************************************************@A4A*/
/* Macros for Qp0lGetAttr() and Qp0lSetAttr() APIs            @B2C*/
/*************************************************************@A4A*/

/* Qp0lGetAttr() API attribute selection constants            @A4A*/
#define QP0L_ATTR_OBJTYPE            0
                                     /* Object Type           @A4A*/
#define QP0L_ATTR_DATA_SIZE          1
                                     /* Data size, no headers @A4A*/
#define QP0L_ATTR_ALLOC_SIZE         2
                                     /* Disk allocation size  @A4A*/
#define QP0L_ATTR_EXTENDED_ATTR_SIZE 3                    /* @A5A*/
                                     /* Size used by extended @A5A*/
                                     /* attributes.           @A5A*/
#define QP0L_ATTR_CREATE_TIME        4
                                     /* Object creation time  @A5C*/
#define QP0L_ATTR_ACCESS_TIME        5
                                     /* Last data accessed    @A5C*/
                                     /* time                  @A5C*/
#define QP0L_ATTR_CHANGE_TIME        6
                                     /* Last attr change time @A5C*/
#define QP0L_ATTR_MODIFY_TIME        7
                                     /* Last data change time @A5C*/
#define QP0L_ATTR_STG_FREE           8
                                     /* Storage Free indicator@A5C*/
#define QP0L_ATTR_CHECKED_OUT        9
                                     /* Is object checked out @A5A*/
#define QP0L_ATTR_LOCAL_REMOTE       10
                                     /* is on Local DASD or   @A5A*/
                                     /* not                   @A5A*/
#define QP0L_ATTR_AUTH               11
                                     /* Authorities           @A5C*/
#define QP0L_ATTR_FILE_ID            12
                                     /* File Identifier       @A8A*/
#define QP0L_ATTR_ASP                13                    /* @A9A*/
                                     /* ASP that object       @A9A*/
                                     /* resides in            @A9A*/

/*      Attributes for Large Files                            @B1A*/

#define QP0L_ATTR_DATA_SIZE_64       14
                               /* Large data size, no headers @B1A*/
#define QP0L_ATTR_ALLOC_SIZE_64      15
                               /* Large disk allocation size  @B1A*/
#define QP0L_ATTR_USAGE_INFORMATION  16
                                     /* Get usage data.           */
                                     /* Can only be used with     */
                                     /* Qp0lGetAttr() api.    @B2A*/
#define QP0L_ATTR_PC_READ_ONLY       17
                                     /* PC read only          @B2A*/
#define QP0L_ATTR_PC_HIDDEN          18
                                     /* PC hidden object      @B2A*/
#define QP0L_ATTR_PC_SYSTEM          19
                                     /* PC system file        @B2A*/
#define QP0L_ATTR_PC_ARCHIVE         20
                                     /* PC archive            @B2A*/
#define QP0L_ATTR_SYSTEM_ARCHIVE     21
                                     /* System archive        @B2A*/
#define QP0L_ATTR_CODEPAGE           22
                                     /* Codepage              @B2A*/
#define QP0L_ATTR_FILE_FORMAT        23
                                     /* *STMF file format     @B3A*/
#define QP0L_ATTR_UDFS_DEFAULT_FORMAT 24
                                     /* UDFS default file format. */
                                     /*                       @B3A*/
#define QP0L_ATTR_JOURNAL_INFORMATION 25
                                     /* Journaling info.      @B6A*/
#define QP0L_ATTR_ALWCKPWRT          26
                                     /* Share with readers and    */
                                     /* writers during a save @B4A*/
#define QP0L_ATTR_CCSID              27
                                     /* CCSID                 @BBA*/
#define QP0L_ATTR_SIGNED             28
                                     /* Object signature flag @BCA*/
#define QP0L_ATTR_SYS_SIGNED         29
                                     /* Whether object signed @C5A*/
                                     /* by a system-trusted   @C5A*/
                                     /* source.               @C5A*/
#define QP0L_ATTR_MULT_SIGS          30
                                     /* Whether object has    @C5A*/
                                     /* more than one         @C5A*/
                                     /* signature.            @C5A*/
#define QP0L_ATTR_DISK_STG_OPT       31
                                     /* Disk storage option   @C5A*/
                                     /* attribute.            @C5A*/
#define QP0L_ATTR_MAIN_STG_OPT       32
                                     /* Main storage option   @C5A*/
                                     /* attribute.            @C5A*/
#define QP0L_ATTR_DIR_FORMAT         33
                                     /* Directory format flag @C5A*/
#define QP0L_ATTR_AUDIT              34
                                     /* Audit information flag@C8A*/
#define QP0L_ATTR_CRTOBJSCAN         35
                                     /* Create object scanning@C9A*/
#define QP0L_ATTR_SCAN               36
                                     /* Object scanning       @C9A*/
#define QP0L_ATTR_SCAN_INFO          37
                                     /* Object scan info      @C9A*/
#define QP0L_ATTR_ALWSAV             38
                                     /* Can be saved          @CAA*/
#define QP0L_ATTR_RSTDRNMUNL         39
                                     /* Restricted rename and @CBA*/
                                     /* unlink                @CBA*/
#define QP0L_ATTR_JOURNAL_EXTENDED_INFORMATION 40
                                     /* Journaling extended   @CDA*/
                                     /* information.          @CDA*/
#define QP0L_ATTR_CRTOBJAUD          41
                                     /* Create object auditing@CEA*/
#define QP0L_ATTR_SYSTEM_USE         42
                                     /* Streamfile special usage  */
                                     /*                       @CGA*/
#define QP0L_ATTR_RESET_DATE        200
                                     /* Days_used_count reset     */
                                     /* date.  Can only be used   */
                                     /* with Qp0lSetAttr()        */
                                     /* API                   @B2A*/
#define QP0L_ATTR_SUID              300
                                     /* The SUID mode bit was
                                        changed.              @B9A*/
#define QP0L_ATTR_SGID              301
                                     /* The SGID mode bit was
                                        changed.              @B9A*/

/* Qp0lGetAttr() and Qp0lSetAttr()  APIs
                     indicator for following a symlink        @B2C*/
#define QP0L_DONOT_FOLLOW_SYMLNK 0   /* do not follow symlink @A5C*/
#define QP0L_FOLLOW_SYMLNK       1   /* follow symlink        @A5C*/

/* Qp0lGetAttr() API on/off indicators for object and data rights */
/*  or other items needing a yes or no response               @A4A*/
#define QP0L_NO                  0   /* negative response     @A4A*/
#define QP0L_YES                 1   /* positive response     @A4A*/

/* Qp0lGetAttr() API macros for storage-free object attribute@A5A*/
#define QP0L_SYS_NOT_STG_FREE    0   /* Object not storage-  @A5A*/
                                     /*   freed              @A5A*/
#define QP0L_SYS_STG_FREE        1   /* Object is storage-   @A5A*/
                                     /*   freed              @A5A*/

/* Qp0lGetAttr() API macros for object checked-out attribute @A5A*/
#define QP0L_NOT_CHECKED_OUT     0   /* Object not checked   @A5A*/
                                     /* out                  @A5A*/
#define QP0L_CHECKED_OUT         1   /* Object checked out   @A5A*/


/* Qp0lGetAttr() and Qp0lSetAttr() API macros for PC attributes
                                                             @B2A*/
#define QP0L_PC_NOT_READONLY         0 /* File is not read   @B2A*/
                                       /* only               @B2A*/
#define QP0L_PC_READONLY             1 /* File is read only  @B2A*/

#define QP0L_PC_NOT_HIDDEN           0 /* File is not        @B2A*/
                                       /* hidden             @B2A*/
#define QP0L_PC_HIDDEN               1 /* File is hidden     @B2A*/

#define QP0L_PC_NOT_SYSTEM           0 /* File is not        @B2A*/
                                       /* system file        @B2A*/
#define QP0L_PC_SYSTEM               1 /* File is a system   @B2A*/
                                       /* file               @B2A*/

#define QP0L_PC_NOT_CHANGED          0 /* File has not       @B2A*/
                                       /* changed            @B2A*/
#define QP0L_PC_CHANGED              1 /* File has changed   @B2A*/

/* Qp0lGetAttr() and Qp0lSetAttr() API macros for system attributes
                                                             @B2A*/
#define QP0L_SYSTEM_NOT_CHANGED      0 /* File has not       @B2A*/
                                       /* changed since save @B2A*/

#define QP0L_SYSTEM_CHANGED          1 /* File has changed   @B2A*/
                                       /* since save         @B2A*/


/* Qp0lGetAttr() API macros for identifying file format for  @B3A*/
/* a *STMF file and default file format for a UDFS.          @B3A*/
#define QP0L_FILE_FORMAT_TYPE1   0   /* File format type 1   @B3A*/

#define QP0L_FILE_FORMAT_TYPE2   1   /* File format type 2   @B3A*/

#define QP0L_UDFS_DEFAULT_TYPE1  0   /* UDFS default file    @B3A*/
                                     /* format type 1        @B3A*/
#define QP0L_UDFS_DEFAULT_TYPE2  1   /* UDFS default file    @B3A*/
                                     /* format type 2        @B3A*/


/* Qp0lGetAttr() and Qp0lSetAttr() API macros for            @B4A*/
/* identifying whether an object can be shared with readers  @B4A*/
/* and writers during a save.                                @B4A*/
#define QP0L_NOT_ALWCKPWRT       0   /* Object can be shared @B4A*/
                                     /* with readers only    @B4A*/
                                     /* during a save        @B4A*/

#define QP0L_ALWCKPWRT           1   /* Object can be shared @B4A*/
                                     /* with readers and     @B4A*/
                                     /* writers during a     @B4A*/
                                     /* save                 @B4A*/

/* Qp0lGetAttr() API macros for identifying whether an       @BCA*/
/* object has a signature.                                   @BCA*/
#define QP0L_NOT_SIGNED          0   /* The object does not  @BCA*/
                                     /* have a signature.    @BCA*/

#define QP0L_SIGNED              1   /* The object has a     @BCA*/
                                     /* signature.           @BCA*/

/* Qp0lGetAttr() API macros for system signed attribute      @C5A*/
#define QP0L_SYSTEM_SIGNED_NO    0   /* Object not signed by @C5A*/
                                     /*   a source trusted   @C5A*/
                                     /*   by the system.     @C5A*/
#define QP0L_SYSTEM_SIGNED_YES   1   /* Object signed by a   @C5A*/
                                     /*   source trusted by  @C5A*/
                                     /*   the system.        @C5A*/

/* Qp0lGetAttr() API macros for multiple signature attribute @C5A*/
#define QP0L_MULT_SIGS_NO        0   /* Object does not      @C5A*/
                                     /*   have multiple      @C5A*/
                                     /*   signatures         @C5A*/
#define QP0L_MULT_SIGS_YES       1   /* Object does have     @C5A*/
                                     /*   multiple signatures@C5A*/

/* Qp0lGetAttr() API macros for identifying directory type   @C5A*/
#define QP0L_DIR_FORMAT_TYPE1    0   /* *TYPE1 Directory     @C5A*/
#define QP0L_DIR_FORMAT_TYPE2    1   /* *TYPE2 Directory     @C5A*/

/* Macros for Qp0lGetAttr() and Qp0lSetAttr() APIs for       @C5A*/
/* getting/setting main storage and disk storage options     @C5A*/
/* on stream files.                                          @C5A*/
#define QP0L_STG_NORMAL          0   /* *NORMAL option       @C5A*/
#define QP0L_STG_MINIMIZE        1   /* *MINIMIZE option     @C5A*/
#define QP0L_STG_DYNAMIC         2   /* *DYNAMIC option      @C5A*/

/* Macros for Qp0lGetAttr() and Qp0lSetAttr() APIs for       @C5A*/
/* setting/getting the S_ISUID bit.                          @C5A*/
#define QP0L_SUID_OFF            0   /* S_ISUID is OFF       @C5A*/
#define QP0L_SUID_ON             1   /* S_ISUID is ON        @C5A*/

/* Macros for Qp0lGetAttr() and Qp0lSetAttr() APIs for       @C5A*/
/* setting/getting the S_ISGID bit.                          @C5A*/
#define QP0L_SGID_OFF            0   /* S_ISGID is OFF       @C5A*/
#define QP0L_SGID_ON             1   /* S_ISGID is ON        @C5A*/

/* Macros for declaring multithread actions                  @B5A*/
#define QP0L_MLTTHDACN_SYSVAL 0      /* Use QMLTTHDACN       @B5A*/
                                     /* system value to      @B5A*/
                                     /* determine the action @B5A*/
#define QP0L_MLTTHDACN_NOMSG  1      /* Call exit program    @B5A*/
                                     /* without an informa-  @B5A*/
                                     /* tional message       @B5A*/
#define QP0L_MLTTHDACN_MSG    2      /* Call exit program    @B5A*/
                                     /* with an informa-     @B5A*/
                                     /* tional message       @B5A*/
#define QP0L_MLTTHDACN_NO     3      /* Do not call the exit @B5A*/
                                     /* program in a multi-  @B5A*/
                                     /* threaded environment @B5A*/

/* Qp0lGetAttr() API macros for journaling attributes.       @B6A*/
#define QP0L_NOT_JOURNALED       0   /* Object is not        @B6A*/
                                     /*  journaled.          @B6A*/
#define QP0L_JOURNALED           1   /* Object is journaled. @B6A*/

/* Qp0lGetAttr() API macros for journaling options.          @B6A*/
#define QP0L_JOURNAL_SUBTREE           0x80 /* IFS subtree   @BBC*/
                                            /* semantics @B9A@BBC*/
#define QP0L_JOURNAL_BEFORE_IMAGES     0x40 /* Before images @B6A*/
                                            /* are journaled @B6A*/
#define QP0L_JOURNAL_AFTER_IMAGES      0x20 /* After images  @B6A*/
                                            /* are journaled @B6A*/
#define QP0L_JOURNAL_OPTIONAL_ENTRIES  0x08 /* Optional      @B6A*/
                                            /* entries       @B6A*/
                                            /* are journaled @B6A*/

/* Qp0lGetAttr() API macros for journaling extended info     @CDA*/
#define QP0L_APYJRNCHG_REQ_NO    0x00 /* Loaded object has   @CDA*/
                                      /* no partial trans.   @CDA*/
#define QP0L_APYJRNCHG_REQ_YES   0x01 /* Loaded object has   @CDA*/
                                      /* partial trans.      @CDA*/
#define QP0L_ROLLBACK_END_NO     0x00 /* Rollback was not    @CDA*/
                                      /* ended prior to      @CDA*/
                                      /* full completion     @CDA*/
#define QP0L_ROLLBACK_END_YES    0x01 /* Rollback abruptly   @CDA*/
                                      /* ended prior to      @CDA*/
                                      /* full completion     @CDA*/

/* Qp0lGetAttr() and Qp0lSetAttr() API macros for create object
    scanning and object scanning                             @C9A*/
#define QP0L_SCANNING_NO         0   /* Object will not be scanned
                                        by exit programs     @C9A*/
#define QP0L_SCANNING_YES        1   /* Object will be scanned
                                        by exit programs     @C9A*/
#define QP0L_SCANNING_CHGONLY    2   /* Object will be scanned
                                        only if modified     @C9A*/

/* Qp0lGetAttr() API macros for scan information, see qp0lscan.h
   include.                                                  @C9A*/

/* Qp0lGetAttr() and Qp0lSetAttr() API macros for allow save @CAA*/
#define QP0L_ALWSAV_NO           0   /* Can not be saved
                                        (includes subtree)   @CAA*/
#define QP0L_ALWSAV_YES          1   /* Can be saved         @CAA*/

/* Macros for Qp0lGetAttr() and Qp0lSetAttr() APIs for       @CBA*/
/* setting/getting the restricted rename and unlink          @CBA*/
/* (S_ISVTX) bit.                                            @CBA*/
#define QP0L_RSTDRNMUNL_OFF      0   /* Restricted rename    @CBA*/
                                     /* and unlink is OFF    @CBA*/
#define QP0L_RSTDRNMUNL_ON       1   /* Restricted rename    @CBA*/
                                     /* and unlink is ON     @CBA*/

/* Qp0lGetAttr() and Qp0lSetAttr() API macros for audit and  @CEA*/
/*   create object auditing values                           @CEA*/
#define QP0L_AUD_ALL    "*ALL      " /* *ALL                 @CEA*/
#define QP0L_AUD_CHANGE "*CHANGE   " /* *CHANGE              @CEA*/
#define QP0L_AUD_NONE   "*NONE     " /* *NONE                @CEA*/
#define QP0L_AUD_NOTAVL "*NOTAVL   " /* *NOTAVL              @CFA*/
#define QP0L_AUD_SYSVAL "*SYSVAL   " /* *SYSVAL              @CEA*/
#define QP0L_AUD_USRPRF "*USRPRF   " /* *USRPRF              @CEA*/

/* Qp0lGetAttr() API macros for system use values.           @CGA*/
#define QP0L_SYSUSE_NONE         0                        /* @CGA*/
#define QP0L_SYSUSE_VRTVOL       1                        /* @CGA*/
#define QP0L_SYSUSE_NWSSTG       2                        /* @CGA*/

/* Protect POSIX source                                      @B8A*/
#endif

/*****************************************************************/
/* function prototypes                                           */
/*****************************************************************/
QBFC_EXTERN int Qp0lRenameUnlink(const char *, const char *);
QBFC_EXTERN int Qp0lRenameKeep(const char *, const char *);
QBFC_EXTERN char *Qp0lGetPathFromFileID(char *, size_t, Qp0lFID_t);

/* Protect POSIX source                                          @B8A*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))

QBFC_EXTERN int Qp0lProcessSubtree(Qlg_Path_Name_T *,
                            uint,
                            Qp0l_Objtypes_List_t *,
                            uint,
                            Qp0l_IN_EXclusion_List_t *,
                            uint,
                            Qp0l_User_Function_t *,
                            void *, ...);                     /* @A4A*/

QBFC_EXTERN int QlgProcessSubtree(Qlg_Path_Name_T *,
                            uint,
                            Qp0l_Objtypes_List_t *,
                            uint,
                            Qp0l_IN_EXclusion_List_t *,
                            uint,
                            Qp0l_User_Function_t *,
                            void *, ...);                     /* @C1A*/


QBFC_EXTERN int Qp0lGetAttr(Qlg_Path_Name_T *,
                              Qp0l_AttrTypes_List_t *,
                              char *,
                              uint,
                              uint *,
                              uint *,
                              uint, ...);                     /* @A5A*/

QBFC_EXTERN int QlgGetAttr(Qlg_Path_Name_T *,
                              Qp0l_AttrTypes_List_t *,
                              char *,
                              uint,
                              uint *,
                              uint *,
                              uint, ...);                     /* @C1A*/



QBFC_EXTERN void Qp0lCvtPathToQSYSObjName(
                              Qlg_Path_Name_T *,
                              void *,
                              char [8],
                              uint,
                              uint,
                              void *);                        /* @A6A*/

QBFC_EXTERN void QlgCvtPathToQSYSObjName(
                              Qlg_Path_Name_T *,
                              void *,
                              char [8],
                              uint,
                              uint,
                              void *);                        /* @C1A*/

QBFC_EXTERN int Qp0lSaveStgFree(Qlg_Path_Name_T *,
                                     Qp0l_StgFree_Function_t *,
                                     void *);                 /* @A7A*/


QBFC_EXTERN int QlgSaveStgFree(Qlg_Path_Name_T *,
                                     Qp0l_StgFree_Function_t *,
                                     void *);                 /* @C1A*/


QBFC_EXTERN int Qp0lSetAttr(Qlg_Path_Name_T *,
                              char *,
                              uint,
                              uint, ...);                     /* @B2A*/

QBFC_EXTERN int QlgSetAttr(Qlg_Path_Name_T *,
                              char *,
                              uint,
                              uint, ...);                     /* @C1A*/

QBFC_EXTERN int Qp0lOpen(Qlg_Path_Name_T *,
                              int, ...);                      /* @B7A*/

QBFC_EXTERN int QlgOpen(Qlg_Path_Name_T *,
                              int, ...);                       /* @C1A*/


QBFC_EXTERN int Qp0lUnlink(Qlg_Path_Name_T *);                /* @B7A*/

QBFC_EXTERN int QlgUnlink(Qlg_Path_Name_T *);                 /* @C1A*/


QBFC_EXTERN int QlgRenameKeep(const Qlg_Path_Name_T *,        /* @C1A*/
                               const Qlg_Path_Name_T *);       /* @C1A*/
QBFC_EXTERN int QlgRenameUnlink(const Qlg_Path_Name_T *,     /* @C1A*/
                                  const Qlg_Path_Name_T *);   /* @C1A*/
QBFC_EXTERN Qlg_Path_Name_T *QlgGetPathFromFileID(
				  Qlg_Path_Name_T *,          /* @C1A*/
                                  size_t, Qp0lFID_t);         /* @C1A*/


#pragma map (QlgCvtPathToQSYSObjName, "Qp0lCvtPathToQSYSObjName") /* @C1A*/
#pragma map (QlgGetAttr, "Qp0lGetAttr")                           /* @C1A*/
#pragma map (QlgProcessSubtree, "Qp0lProcessSubtree")             /* @C1A*/
#pragma map (QlgSaveStgFree, "Qp0lSaveStgFree")                   /* @C1A*/
#pragma map (QlgSetAttr, "Qp0lSetAttr")                           /* @C1A*/
#pragma map (QlgUnlink, "Qp0lUnlink")                             /* @C1A*/



/* Protect POSIX source                                          @B8A*/
#endif

#if (__OS400_TGTVRM__>=510)                                   /* @C2A*/
#pragma datamodel(pop)                                        /* @C2A*/
#endif                                                        /* @C2A*/

#endif  /* __qp0lstdi_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
