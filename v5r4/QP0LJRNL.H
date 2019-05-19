/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2001, 2005                                */
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

#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QP0LJRNL                                   */
/*                                                                */
/* Descriptive Name: Integrated File System Journaling            */
/*                                                                */
/* Description: This file contains structure definitions for      */
/*              the various journal entry types that may be       */
/*              deposited in a journal associated with an         */
/*              integrated file system object.                    */
/*                                                                */
/*              It contains audit journal entry information and   */
/*              normal or user journal entry information.         */
/*                                                                */
/*                                                                */
/* Header Files Included:                                         */
/*                   Qp0lstdi.h                                   */
/*                   decimal.h                                    */
/*                                                                */
/* Macros List:                                                   */
/*                   QP0F_ZC_ACCESS_TIMESTAMP                     */
/*                   QP0F_ZC_ALWSAV                           @A6A*/
/*                   QP0F_ZC_APYJRNCHG                            */
/*                   QP0F_ZC_CHANGE_JOURNALING_ATTR           @ACA*/
/*                   QP0F_ZC_CHECKIN                              */
/*                   QP0F_ZC_CHECKOUT                             */
/*                   QP0F_ZC_CREATE_SYMLNK                        */
/*                   QP0F_ZC_CREATE_TIMESTAMP                     */
/*                   QP0F_ZC_DATA_CCSID                           */
/*                   QP0F_ZC_DATA_CODEPAGE                        */
/*                   QP0F_ZC_END_JOURNALING                       */
/*                   QP0F_ZC_MODIFY_TIMESTAMP                     */
/*                   QP0F_ZC_OBJECT_USED                          */
/*                   QP0F_ZC_OPEN_WRITE                           */
/*                   QP0F_ZC_PC_ARCHIVE                           */
/*                   QP0F_ZC_PC_HIDDEN                            */
/*                   QP0F_ZC_PC_READ_ONLY                         */
/*                   QP0F_ZC_PC_SYSTEM                            */
/*                   QP0F_ZC_SET_EXTENDED_ATTR                    */
/*                   QP0F_ZC_START_JOURNALING                     */
/*                   QP0F_ZC_SYSTEM_ALWCKPWRT                     */
/*                   QP0F_ZC_SYSTEM_ARCHIVE                       */
/*                   QP0F_ZC_TAKEDESCRIPTOR                       */
/*                   QP0F_ZC_USAGE_INFO_RESET                     */
/*                   QP0F_ZC_MAINSTG_OPT                      @A2A*/
/*                   QP0F_ZC_DISKSTG_OPT                      @A2A*/
/*                   QP0L_OBJECT_THRESHOLD                        */
/*                   QP0L_PATH_THRESHOLD                          */
/*                   QP0L_SYMLNK_THRESHOLD                        */
/*                                                                */
/* Structure List:                                                */
/*                   Qp0l_AA_Journal_Entry                        */
/*                   Qp0l_AT_Journal_Entry                        */
/*                   Qp0l_Auth_Entry                          @AJA*/
/*                   Qp0l_B0_Journal_Entry                        */
/*                   Qp0l_B1_Journal_Entry                        */
/*                   Qp0l_B2_Journal_Entry                        */
/*                   Qp0l_B3_Journal_Entry                        */
/*                   Qp0l_B4_Journal_Entry                        */
/*                   Qp0l_B5_Journal_Entry                        */
/*                   Qp0l_B6_Journal_Entry                    @A5A*/
/*                   Qp0l_B7_Journal_Entry                    @AJA*/
/*                   Qp0l_BD_Journal_Entry                        */
/*                   Qp0l_CS_Journal_Entry                        */
/*                   Qp0l_ET_Journal_Entry                        */
/*                   Qp0l_FA_Journal_Entry                        */
/*                   Qp0l_FC_Journal_Entry                        */
/*                   Qp0l_FF_Journal_Entry                        */
/*                   Qp0l_FR_Journal_Entry                        */
/*                   Qp0l_FS_Journal_Entry                        */
/*                   Qp0l_FW_Journal_Entry                        */
/*                   Qp0l_JA_Journal_Entry                    @ABA*/
/*                   Qp0l_JT_Journal_Entry                        */
/*                   Qp0l_Journal_Entry_Auth                      */
/*                   Qp0l_OA_Journal_Entry                        */
/*                   Qp0l_OF_Journal_Entry                        */
/*                   Qp0l_OG_Journal_Entry                        */
/*                   Qp0l_OO_Journal_Entry                        */
/*                   Qp0l_Object_Name                             */
/*                   Qp0l_Path_Name                               */
/*                   Qp0l_RN_Journal_Entry                    @A1A*/
/*                   Qp0l_Symlnk_Contents                         */
/*                   Qp0l_TR_Journal_Entry                        */
/*                   Qp0l_WA_Journal_Entry                        */
/*                   Qp0l_ZC_Audit_Journal_Entry                  */
/*                                                                */
/* Function Prototype List:  None                                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D9746400     5D10  990209 ROCH:     New Include           */
/* $A1= D9868606     5D20  010412 ROCH:     Add RN entry          */
/* $A2= D9880700     5D20  010712 ROCH:     Add ZC attributes     */
/* $A3= D9868606     5D20  010814 ROCH:     Add rdev to B1 entry  */
/* $A4= P9946068     5D20  011219 ROCH:     Add private data to   */
/*                                          B3, B4, and B5.       */
/* $A5= D9909601     5D30  020603 ROCH:     Added B6 Jrnl Entry   */
/* $A6= D9936501     5D30  020625 ROCH:     Update to ZC attrs    */
/* $A7= D9876007     5D30  020812 ROCH:     Add info to B1 entry  */
/* $A8= D9925404     5D30  020918 ROCH:     Add 20 digit sequence */
/*                                      number to AT & FS entries */
/* $A9= D9909605     5D30  020918 ROCH:     Add additional info   */
/*                                          to B1 entry           */
/* $AA= D9925406     5D30  021024 ROCH:     Add 20 digit count    */
/*                                      number to AT entry.       */
/*                                     Added it because the count */
/*                                     and DB RRN field share the */
/*                                     same area when printing the*/
/*                                     DSPJRN entry. The RRN field*/
/*                                     is only 10 digits and      */
/*                                     probably will never grow   */
/*                                     larger.                    */
/* $AB= D9920700     v5r3m0  030105 ROCH:  New data for AT, and FS*/
/*                                     journal entries. New       */
/*                                     entry JA                   */
/* $AC= P9A27480     v5r3m0  030402 ROCH:  New ZC audit entry     */
/*                                         data constant          */
/* $AD= P9A28376     v5r3m0  030422 ROCH: Minor comment changes   */
/* $AE= P9A29706     v5r3m0  030518 ROCH: Add inherit flag to JT  */
/*                                      entry                     */
/* $AF= P9A29960     v5r3m0  030507 ROCH: Fix _AT_ entry layout   */
/* $AG= P9A35995     v5r3m0  030725 ROCH: Change comment for      */
/*                                        QP0F_ZC_TAKEDESCRIPTOR. */
/*                                        Fix the                 */
/*                                     Qp0l_ZC_Audit_Journal_Entry*/
/*                                     structure layout.          */
/* $AH=P9A52232    v5r3m0f   040107 ROCH: Add cplusplus ifdef to  */
/*                                          end of header         */
/* $AI=PSE14849    v5r4m0    040427 ROCH: Comment change on OA    */
/* $AJ=P9A76432    v5r4m0    040713 ROCH: Add B7 entry information*/
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QP0LJRNL_h
#define QP0LJRNL_h

#include <Qp0lstdi.h>         /* Common file system definitions   */
#include <decimal.h>          /* Packed decimal.                  */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Start of journal entry specific data structures for the        */
/* journal code B entry types.                                    */
/******************************************************************/

/* Macro constants used by journal entry specific data
   structures.                                                    */
#define QP0L_PATH_THRESHOLD     5000
#define QP0L_OBJECT_THRESHOLD   510
#define QP0L_SYMLNK_THRESHOLD   10000


/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_Object_Name                           */
/*                                                                */
/* Structure Purpose:  Structure is used to package information   */
/*                     describing a object or link name.          */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_Object_Name
{
    unsigned int Length;      /* Length of the object name field. */
    qlg_nls_t NLSinfo;        /* National language support
                                 information about the Name.  This
                                 includes information such as the
                                 CCSID, etc.                      */
    char Name[1];             /* The object name.  This
                                 field is variable length, up to a
                                 maximum of QP0L_OBJECT_THRESHOLD
                                 bytes.                           */
} Qp0l_Object_Name_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_Path_Name                             */
/*                                                                */
/* Structure Purpose:  Structure is used to package information   */
/*                     describing a path name.                    */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_Path_Name
{
    char PathIndicator;       /* Absolute or relative path
                                 indicator.  This field will be one
                                 of the following values:
                                   '0' - Path contains an absolute
					 path name.   The
					 RelativeDirFID field is not
					 valid and may not be used
					 to form a complete
					 path name.
                                   '1' - Path contains a relative
                                         path name.  The
                                         RelativeDirFID field
                                         is valid and may be used
                                         to form a complete
                                         path name.    */
    Qp0lFID_t RelativeDirFID; /* File ID of the directory that
                                 contains the path indicated in
                                 the Path field.                  */
    Qlg_Path_Name_T PathHeader;/* The path name structure.  This
                                 field is a path name structure.
                                 The path name itself, described by
                                 this structure, is in the Path
                                 field.                           */
    char Path[1];             /* The path name itself.  It is
                                 described by the preceding
                                 PathHeader field.  This Path field
                                 is declared as 1 byte long, but is
                                 variable length up to a maximum
                                 of QP0L_PATH_THRESHOLD bytes.    */
} Qp0l_Path_Name_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_Symlnk_Contents                       */
/*                                                                */
/* Structure Purpose:  Structure is used to package information   */
/*                     describing a symbolic link name.           */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_Symlnk_Contents
{
    char ContentsIncluded;    /* Indicates if the entire symbolic
                                 link's contents are included in
                                 the Contents field.  This field
                                 will be one of the following
                                 values:
                                   '0' - The entire symbolic link's
                                         contents could not be
                                         included in Contents.
                                         The symbolic link's
                                         contents are truncated in
                                         this entry.
                                   '1' - The entire symbolic link's
                                         contents are included in
                                         Contents.                */
    Qlg_Path_Name_T ContentsHeader;/* The symbolic link's contents
                                 header structure.  The symbolic
                                 link's contents itself, described
                                 by this structure, is in the
                                 Contents field.                  */
    char Contents[1];         /* The symbolic link's contents.
                                 This field is variable
                                 length, up to a maximum of
                                 QP0L_SYMLNK_THRESHOLD bytes.     */
} Qp0l_Symlnk_Contents_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_AA_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code B,*/
/*                     AA (Change audit attribute) entry type.    */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     NOTE:  This is intended to map directly to */
/*                     the layout of the AD security audit        */
/*                     journal entry.                             */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_AA_Journal_Entry
{
    char EntryType;           /* Type of entry.  Will be one of the
                                   following:
                                   D - Changed DLO authority
                                   O - Changed object authority   */
    char ObjectName[10];      /* Object name.  *N if object is not
                                 in a library.                    */
    char LibraryName[10];     /* Library name.  *N if object is not
                                 in a library.                    */
    char ObjectType[8];       /* Symbolic object type.            */
    char AuditingVal[10];     /* New value specified on command.  */
    char Reserved0[135];      /* Reserved.  Set to blanks.        */
    int ObjectNameCCSID;      /* CCSID for the object name.       */
    char Reserved1[8];        /* Reserved.  Set to blanks.        */
    Qp0lFID_t ParentFID;      /* Parent directory's File ID.      */
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_AA_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_AT_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code B,*/
/*                     AT (End apply journal changes) entry type. */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_AT_Journal_Entry
{
    char StartSeqNum[10];     /* Sequence number of the first
                                 entry applied.
                                 The StartSeqNum is set to -1
                                 if the actual value is larger
                                 than 9,999,999,999. See field
                                 StartSeqNumL for the actual
                                 value.                  @A8C @AFC*/
    char EndSeqNum[10];       /* Sequence number of the last
                                 entry applied.
                                 The EndSeqNum is set to -1
                                 if the actual value is larger
                                 than 9,999,999,999. See field
                                 EndSeqNumL for the actual
                                 value.                  @A8C @AFC*/
    char StartRcvName[10];    /* Name of the first receiver from
                                 which entries were applied.      */
    char StartRcvLibrary[10]; /* Name of the library for the
                                 first receiver.                  */
    char EndRcvName[10];      /* Name of the last receiver from
                                 which entries were applied.      */
    char EndRcvLibrary[10];   /* Name of the library for the
                                 first receiver.                  */
    char ApplyStartSeqNum[10];/* Starting sequence number for the
                                 apply operation.
                                 The ApplyStartSeqNum is set to
                                 "-1        " if the actual value
                                 is larger than 9,999,999,999. See
                                 field ApplyStartSeqNumL for the
                                 actual value.                @A8C*/
    char ApplyEndSeqNum[10];  /* Ending sequence number for the
                                 apply operation.
                                 The ApplyEndSeqNum is set to
                                 "-1        " if the actual value
                                 is larger than 9,999,999,999. See
                                 field ApplyEndSeqNumL for the
                                 actual value.                @A8C*/
    char CommitTransaction;   /* Incomplete commit transaction not
                                 applied indicator.  Will be one
                                 of the following values:

                                   0 - Indicates that either
                                       CMTBDY(*NO) was specified or
                                       CMTBDY(*YES) was specified
                                       and no partial commitment
                                       control transactions were
                                       found in the range specified
                                       by ApplyStartSeqNumL and
                                       ApplyEndSeqNumL.
                                   1 - Indicates that CMTBDY(*YES)
                                       was specified and one or
                                       more partial commitment
                                       control transactions were
                                       found in the range specified
                                       by ApplyStartSeqNumL and
                                       ApplyEndSeqNumL.           */
    char StartSeqNumL[20];  /* Sequence number of the first entry
                               applied. This field will always
                               contain a sequence number.     @A8A*/
    char EndSeqNumL[20];    /* Sequence number of the last entry
                               applied. This field will always
                               contain a sequence number.     @A8A*/
    char ApplyStartSeqNumL[20]; /* Starting sequence number for
                                the apply operation. This field
                                will always contain a sequence
                                number.                       @A8A*/
    char ApplyEndSeqNumL[20]; /* Ending sequence number for the
                                apply operation. This field will
                                always contain a sequence number.
                                                              @A8A*/
    char ApplyCount[20];     /* Count of number of entries applied
                                                              @AAA*/
    char StartSeqPartialRemove[20]; /* Starting sequence number
                               for any partial transactions that
                               were removed.  This field will
                               always be zero since IFS objects
                               cannot have partial transactions.
                                                              @ABA*/
    char EndSeqPartialRemove[20]; /* ending sequence number
                               for any partial transactions that
                               were removed.  This field will
                               always be zero since IFS objects
                               cannot have partial transactions.
                                                              @ABA*/

    char PartialRemoveCount[20]; /* Count of number of entries
                               removed for partial transactions.
                               This will always be zero       @ABA*/
    char ObjectDeleted;      /* Indication that the object was
                                deleted during the apply operation
                                Y=yes,  N=No                  @ABA*/
    char ObjectCreated;      /* Indication that the object was
                                created during the apply operation
                                Y=yes,  N=No                  @ABA*/
    char EarlyEnd;           /* Indication that the apply operation
                                was ended early for this object
                                Y=yes, N=No                   @ABA*/
    char ChangeNotMade;      /* Indication that a change was found
                                for this object after an early
                                end to the apply operation
                                Y=yes, N=No                   @ABA*/
    char EndReasonCode;      /* Reason code for early end.  See
                                message MCH4801 for the possible
                                values                        @ABA*/
    char EndMessageId[7];    /* Message id associated with an early
                                end to the apply operation    @ABA*/
    int ErrorCondition;      /* Error condition code          @ABA*/
    char PartialsRemain;     /* Indication that partial transactions
                                remain for this object.
                                Y=Yes, N=No                   @ABA*/
    char PartialsRemoved;    /* Indication that at least some
                                partial transactions were removed
                                during the apply operation
                                Y=Yes, N=No                   @ABA*/
} Qp0l_AT_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B0_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B0 (Begin create) entry type.           */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     This is a variable length entry structure. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B0_Journal_Entry
{
    unsigned int NameOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 ObjectName info.                 */
    char ObjectType[7];       /* Symbolic object type.            */
    char StartJournaling;     /* Start journaling indicator.
                                   'Y' - indicates that journaling
                                         will be started.
                                   ' ' - indicates that journaling
                                         will not be started.     */
    unsigned int Reserved0;   /* Reserved.  Set to zero.      @A3C*/
 /* The following field is part of this structure, but it is
    commented out because its offset from the beginning of this
    structure might vary.  Use the offset field within this
    structure to determine the correct starting byte of this field
    within the entry.                                             */
 /* Qp0l_Object_Name_t ObjectName; */ /* New object's name.       */
} Qp0l_B0_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_Journal_Entry_Auth                    */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data authority information  */
/*                     for entries described within this file.    */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef struct Qp0l_Journal_Entry_Auth
{                             /*                                  */
    char Objexist;            /* *OBJEXIST ('Y' or ' ')           */
    char Objmgt;              /* *OBJMGT   ('Y' or ' ')           */
    char Objopr;              /* *OBJOPR   ('Y' or ' ')           */
    char Objalter;            /* *OBJALTER ('Y' or ' ')           */
    char Objref;              /* *OBJREF   ('Y' or ' ')           */
    char Read;                /* *READ     ('Y' or ' ')           */
    char Add;                 /* *ADD      ('Y' or ' ')           */
    char Upd;                 /* *UPD      ('Y' or ' ')           */
    char Dlt;                 /* *DLT      ('Y' or ' ')           */
    char Exclude;             /* *EXCLUDE  ('Y' or ' ')           */
    char Execute;             /* *EXECUTE  ('Y' or ' ')           */
    char Reserved0;           /* Reserved.  Set to blank.         */
} Qp0l_Journal_Entry_Auth_t;  /*                                  */

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B1_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B1 (Create summary) entry type.         */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     This is a variable length entry structure. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B1_Journal_Entry
{
    unsigned int NameOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 ObjectName field.                */
    unsigned int PathOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 PathName field.                  */
    unsigned int SymlnkOffset;/* Offset from beginning of this
                                 structure to the beginning of the
                                 SymlnkContents field.            */
    char ObjectType[7];       /* Symbolic object type.            */
    char scanAttr;            /* If *STMF, the object scan attribute.
                                 If *DIR, the create object scanning
                                 value.  Values are (see Qp0lSetAttr):
                                 QP0L_SCANNING_NO
                                 QP0L_SCANNING_YES
                                 QP0L_SCANNING_CHGONLY        @A7A*/
    Qp0lFID_t ObjectFID;      /* New object's File ID.            */
    char OwnerName[10];       /* Owner's user profile name.       */
    char GroupName[10];       /* Primary group profile name.      */
    char AuditingValue[10];   /* Auditing value.                  */
    unsigned short CCSID;     /* CCSID of object.                 */
    Qp0l_Journal_Entry_Auth_t OwnerAuthority; /* Owner's object
                                 authority.                       */
    Qp0l_Journal_Entry_Auth_t GroupAuthority; /* Primary group's
                                 object authority.                */
    Qp0l_Journal_Entry_Auth_t PublicAuthority; /* *PUBLIC's
                                 object authority.  This field
                                 only used when AutlPublic is
                                 a blank ' '.                     */
    char AutlName[10];        /* Authorization list name.         */
    char AutlPublic;          /* Authorization List *PUBLIC
                                 authority ('Y' or ' ').          */
    char Format;              /* Format indicator.  Will be set to
                                 one of the following values:
                                   QP0L_B1_ENTRY_FORMAT1
                                   QP0L_B1_ENTRY_FORMAT2      @A3A
                                   QP0L_B1_ENTRY_FORMAT3      @A7C*/
    char PCReadOnly;          /* PC Read Only flag.  Values:
                                   QP0L_PC_NOT_READONLY
                                   QP0L_PC_READONLY               */
    char PCHidden;            /* PC Hidden flag.  Values:
			           QP0L_PC_NOT_HIDDEN
			           QP0L_PC_HIDDEN                 */
    char PCSystem;            /* PC System File flag.  Values:
			           QP0L_PC_NOT_SYSTEM
			           QP0L_PC_SYSTEM                 */
    char PCChanged;           /* PC Changed flag.  Values:
			           QP0L_PC_NOT_CHANGED
			           QP0L_PC_CHANGED                */
    Qp0l_Journal_Info_t JournalInfo; /* Journaling information for
                                 the new object.  This structure
                                 indicates if journaling is now
                                 active on the new object.  If so,
                                 it also contains the information
                                 used to start journaling.  This
                                 structure is defined in
                                 Qp0lstdi.h.                      */
    dev64_t Rdev;             /* Device ID.  This field is only
                                 valid when the ObjectType is
                                 *CHRSF.                      @A3A*/
    char createObjAuditing[10]; /* Create object auditing value.
                                 This only applies to *DIR    @A7A*/
    char sisvtxModeBit;       /* The restricted rename and unlink
                                 (S_ISVTX) mode bit.  Values:
                                   QP0L_RSTDRNMUNL_OFF
                                   QP0L_RSTDRNMUNL_ON         @A9A*/
    char sisuidModeBit;       /* The S_ISUID mode bit.  Values:
                                   QP0L_SUID_OFF
                                   QP0L_SUID_ON               @A9A*/
    char sisgidModeBit;       /* The S_ISGID mode bit.  Values:
                                   QP0L_SGID_OFF
                                   QP0L_SGID_ON               @A9A*/
 /* The following fields are part of this structure, but they are
    commented out because their offset from the beginning of this
    structure might vary.  Use the offset fields within this
    structure to determine the correct starting byte of this field
    within the entry.                                             */
 /* Qp0l_Object_Name_t ObjectName; */ /* New object's name.       */
 /* Qp0l_Path_Name_t PathName; */ /* New object's path name.      */
 /* Qp0l_Symlnk_Contents_t SymlnkContents; */ /* Symbolic link
                                 contents.  This field is only
                                 present if the object created
                                 was a symbolic link.  The
                                 SymlnkOffset field will be 0
                                 when SymlnkContents is not
                                 present in this entry.           */
} Qp0l_B1_Journal_Entry_t;

/******************************************************************/
/* Values defined for the Format field of the                     */
/* Qp0l_B1_Journal_Entry structure.                           @A3A*/
/* Format1 was the original layout of this journal entry          */
/* Format2 includes all of Format1 plus the following:            */
/*   Rdev field is set appropriately                              */
/* Format3 includes all of Format2 plus the following:            */
/*   scanAttr field is set appropriately                          */
/*   createObjectAuditing field is set appropriately              */
/*   sisvtxModeBit is set appropriately                       @A9A*/
/*   sisuidModeBit is set appropriately                       @A9A*/
/*   sisgidModeBit is set appropriately                       @A9A*/
/******************************************************************/
#define QP0L_B1_ENTRY_FORMAT1 0x00                         /* @A3A*/
#define QP0L_B1_ENTRY_FORMAT2 0x01                         /* @A3A*/
#define QP0L_B1_ENTRY_FORMAT3 0x02         /* Current format  @A7A*/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B2_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B2 (Link to existing object) entry type.*/
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     This is a variable length entry structure. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B2_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* File ID of the existing object.  */
    unsigned int LinkOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 LinkName field.                  */
    unsigned int PathOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 PathName field.                  */
    char StartJournaling;     /* Start journaling indicator.
                                   'Y' - indicates that journaling
                                         will be started on the
                                         existing object as a
                                         result of this operation.
                                         The JournalInfo field
                                         contains the information
                                         used to start journaling.
                                         See the Summary field for
                                         additional information.
                                   ' ' - indicates that journaling
                                         will not be started on the
                                         existing object as a
                                         result of this operation.
                                         The JournalInfo field
                                         will contain all hex 0s.   */
    char Summary;              /* Summary record indicator.
                                   'Y' - indicates that this journal
                                         entry was deposited after the
                                         actual operation was completed
                                         and if StartJournaling is also
                                         'Y', then the JournalInfo
                                         structure contains the actual
                                         information related to starting
                                         journaling on the target object.
                                         If StartJournaling is ' ', then
                                         the JournalInfo structure will
                                         contain all hex 0s.
                                   ' ' - indicates that this journal
                                         entry was deposited before the
                                         actual operation was attempted.
                                         If StartJournaling is 'Y', then
                                         the JournalInfo structure
                                         contains the journal information
                                         inherited from its new parent
                                         that will be used to attempt
                                         a start journaling operation.
                                         If StartJournaling is ' ', then
                                         the JournalInfo structure will
                                         contain all hex 0s.         */
    char Reserved0[2];         /* Reserved.  Set to zero.        @A3C*/
    Qp0l_Journal_Info_t JournalInfo; /* Journaling information for
                                 the new object.  See the Summary
                                 field for additional information.
                                 This structure is defined in
                                 Qp0lstdi.h.                         */
 /* The following fields are part of this structure, but they are
    commented out because their offset from the beginning of this
    structure might vary.  Use the offset fields within this
    structure to determine the correct starting byte of this field
    within the entry.                                             */
 /* Qp0l_Object_Name_t LinkName; */ /* Name of new link to object.*/
 /* Qp0l_Path_Name_t PathName; */ /* Existing object's path name.
                                 Note that if this B2 was deposited as
                                 a result of a rollback of a B5 entry,
                                 then this will actually be the path to
                                 the parent directory to which the link
                                 is being is being added.*/
} Qp0l_B2_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B3_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B3 (Rename/move object) entry type.     */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     This is a variable length entry structure. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B3_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* File ID of the renamed link's
                                 object.                          */
    Qp0lFID_t SourceParentFID;/* File ID of the source object's
                                 directory.                       */
    Qp0lFID_t TargetParentFID;/* File ID of the target object's
                                 directory.                       */
    Qp0lFID_t ReplacedObjectFID;/* File ID of the object that was
                                 replaced by this operation.  This
                                 will contain all hex 0 if no
                                 object was replaced.             */
    unsigned int SourceOffset; /* Offset from beginning of this
                                 structure to the beginning of the
                                 Source name field.               */
    unsigned int TargetOffset; /* Offset from beginning of this
                                 structure to the beginning of the
                                 Target name field.               */
    unsigned int SourceParentOffset; /* Offset from beginning of
                                 this structure to the beginning of
                                 the Source parent path field.    */
    unsigned int TargetParentOffset; /* Offset from beginning of
                                 this structure to the beginning of
                                 the Target parent path field.    */
    char StartJournaling;     /* Start journaling indicator.
                                   'Y' - indicates that journaling
                                         will be started on the
                                         existing object as a
                                         result of this operation.
                                         The JournalInfo field
                                         contains the information
                                         used to start journaling.
                                         See the Summary field for
                                         additional information.
                                   ' ' - indicates that journaling
                                         will not be started on the
                                         existing object as a
                                         result of this operation.
                                         The JournalInfo field
                                         will contain all hex 0s.   */
    char Summary;              /* Summary record indicator.
                                   'Y' - indicates that this journal
                                         entry was deposited after the
                                         actual operation was completed
                                         and if StartJournaling is also
                                         'Y', then the JournalInfo
                                         structure contains the actual
                                         information related to starting
                                         journaling on the target object.
                                         If StartJournaling is ' ', then
                                         the JournalInfo structure will
                                         contain all hex 0s.
                                   ' ' - indicates that this journal
                                         entry was deposited before the
                                         actual operation was attempted.
                                         If StartJournaling is 'Y', then
                                         the JournalInfo structure
                                         contains the journal information
                                         inherited from its new parent
                                         that will be used to attempt
                                         a start journaling operation.
                                         If StartJournaling is ' ', then
                                         the JournalInfo structure will
                                         contain all hex 0s.         */
    char Replace;              /* Replace indicator.  Indicates if
                                  the target was replaced as a
                                  result of this operation.
                                   'Y' - indicates that the target
                                         was replaced.
                                   ' ' - indicates that the target
                                         did not exist prior to
                                         this operation.          */
    struct {                   /* Entry flags structure.          */
	unsigned int BothJournaled:1;  /* Indicates that this entry
                                  is one of a pair of B3 entries
                                  sent for this move operation.
                                  This occurs when both the source
                                  and target parent directories are
                                  journaled at the time of the
                                  move operation.                 */
	unsigned int SourceEntry:1;  /* Indicates that this entry
                                  was deposited because the source
                                  parent was journaled.           */
	unsigned int Reserved1:6; /* Reserved bits.  Set to 0.    */
    } Flags;                   /* End of entry flags structure.   */
    char Reserved0[4];         /* Reserved.  Set to zero.     @A3C*/
    Qp0l_Journal_Info_t JournalInfo; /* Journaling information for
                                 the new object.  See the Summary
                                 field for additional information.
                                 This structure is defined in
                                 Qp0lstdi.h.                      */
    unsigned int SysOffset;    /* Offset from beginning of this
                                  structure to the beginning of
                                  private system data.        @A4A*/
 /* The following fields are part of this structure, but they are
    commented out because their offset from the beginning of this
    structure might vary.  Use the offset fields within this
    structure to determine the correct starting byte of this field
    within the entry.                                             */
 /* Qp0l_Object_Name_t Source; */ /* Name of object being renamed
                                 or moved.                        */
 /* Qp0l_Object_Name_t Target; */ /* Name of object after being
                                 renamed or moved.                */
 /* Qp0l_Path_Name_t SourceParentPath; */ /* Path to the parent
                                 directory from which the object
                                 previously belonged. */
 /* Qp0l_Path_Name_t TargetParentPath; */ /* Path to the parent
                                 directory to which the object now
                                 belongs. */
 /* char SysData[1];        */ /* System data.                @A4A*/
} Qp0l_B3_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B4_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B4 (Remove link - Parent Directory)     */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     This is a variable length entry structure. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B4_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* File ID of the existing object.  */
    Qp0lFID_t ParentFID;      /* Link's parent directory File ID. */
    unsigned int LinkOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 LinkName field.                  */
    char JournalIdentifier[10]; /* JID of object.                 */
    char ObjectType[7];       /* Symbolic object type.            */
    char Reserved0[7];        /* Reserved.  Set to zero.      @A3C*/
    unsigned int SysOffset;    /* Offset from beginning of this
				  structure to the beginning of
				  private system data.        @A4A*/
 /* The following fields are part of this structure, but they are
    commented out because their offset from the beginning of this
    structure might vary.  Use the offset fields within this
    structure to determine the correct starting byte of this field
    within the entry.                                             */
 /* Qp0l_Object_Name_t LinkName; */ /* Name of link.              */
 /* char SysData[1];        */ /* System data.                @A4A*/
} Qp0l_B4_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B5_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B5 (Remove link - Link) entry type.     */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     This is a variable length entry structure. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B5_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* File ID of the existing object.  */
    Qp0lFID_t ParentFID;      /* Link's parent directory File ID. */
    unsigned int LinkOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 LinkName field.                  */
    unsigned int ParentPathOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 ParentPath field.                */
    char JournalIdentifier[10]; /* JID of parent directory.       */
    char ObjectType[7];       /* Symbolic object type.            */
    char Reserved0[3];        /* Reserved.  Set to zero.      @A3C*/
    unsigned int SysOffset;    /* Offset from beginning of this
				  structure to the beginning of
				  private system data.        @A4A*/
 /* The following fields are part of this structure, but they are
    commented out because their offset from the beginning of this
    structure might vary.  Use the offset fields within this
    structure to determine the correct starting byte of this field
    within the entry.                                             */
 /* Qp0l_Object_Name_t LinkName; */ /* Name of link.              */
 /* Qp0l_Path_Name_t ParentPath; */ /* Path to the parent that
                                 used to contain this link.       */
 /* char SysData[1];        */ /* System data.                @A4A*/
} Qp0l_B5_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B6_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B6 (Bytes Cleared After Image) entry    */
/*                     type.                                      */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B6_Journal_Entry		  /*  @A5A*/
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.            @A5A*/
    unsigned long long DataLength; /* Length of data.         @A5A*/
    unsigned long long Offset;/* Offset to begin write.       @A5A*/
    char Reserved0[16];       /* Reserved.  Set to 0s.        @A5A*/
} Qp0l_B6_Journal_Entry_t;    /*                              @A5A*/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_Auth_Entry                            */
/*                                                                */
/* Structure Purpose:  Structure is used to package information   */
/*                     describing the private authority           */
/*                     information given to objects that are      */
/*                     created but not journaled.                 */
/*                                                            @AJA*/
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_Auth_Entry
{

    char UserName[10];        /* Name of the user profile whose
                                 authority is being granted.      */
    char OperationType[3];    /* "GRT" - Grant                    */
    char Reserved[7];         /* Reserved.  Set to 0s.            */
    Qp0l_Journal_Entry_Auth_t privateAuths; /* The private
                                 authorities assigned for the given
                                 user to the object.  (12 chars)  */
} Qp0l_Auth_Entry_t;          /*                              @AJA*/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_B7_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, B7 (Created object authority            */
/*                     information) entry type.                   */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     This is a variable length entry structure. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_B7_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* File ID of the created object.   */
    unsigned int NumAuths;    /* Number of private authorities that
                                 are in this entry.               */
    unsigned int NameOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 ObjectName field.                */
    unsigned int PathOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 PathName field.                  */
    unsigned int AuthOffset;  /* Offset from beginning of this
                                 structure to the beginning of the
                                 AuthInfo field.                  */
    char Format;              /* Format indicator.  Will be set to
                                 one of the following values:
                                   QP0L_B7_ENTRY_FORMAT1          */
    char Reserved[15];        /* Reserved.  Set to zero.          */
 /* The following fields are part of this structure, but they are
    commented out because their offset from the beginning of this
    structure might vary.  Use the offset fields within this
    structure to determine the correct starting byte of this field
    within the entry.                                             */
 /* Qp0l_Object_Name_t ObjectName; */ /* New object's name.       */
 /* Qp0l_Path_Name_t PathName;     */ /* New object's path name.  */
 /* If the journal entry is marked as having 'incomplete data'    */
 /* in the journal entry header, then the following data is       */
 /* returned as a pointer.  Otherwise, it is returned as a        */
 /* character string.                                             */
 /* union                                */ /*                    */
 /* {                                    */ /*                    */
 /*   Qp0l_Auth_Entry_t *AuthInfoPtr;    */ /* Pointer to data.   */
 /*   Qp0l_Auth_Entry_t AuthInfoData[1]; */ /* Data.              */
 /* } AuthInfo;               */ /* Private authority information */
 /*                           */ /*  that has been set for the    */
 /*                           */ /*  created object.          @AJA*/
} Qp0l_B7_Journal_Entry_t;       /*                           @AJA*/

/******************************************************************/
/* Values defined for the Format field of the                     */
/* Qp0l_B7_Journal_Entry structure.                               */
/* Format1 was the original layout of this journal entry      @AJA*/
/******************************************************************/
#define QP0L_B7_ENTRY_FORMAT1 0x00                         /* @AJA*/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_BD_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, BD (IFS object deleted) entry type.     */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_BD_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_BD_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_CS_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, CS (Close) entry type.                  */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_CS_Journal_Entry
{
    int OpenFlags;            /* Open flags.                      */
} Qp0l_CS_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_ET_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, ET (End Journal) entry type.            */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_ET_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_ET_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_FA_Journal_Entry_Attr                 */
/*                                                                */
/* Structure Purpose:  Structure is used by the                   */
/*                     Qp0l_FA_Journal_Entry structure to specify */
/*                     a changed attribute.  One of these         */
/*                     structures per changed attribute is        */
/*                     included in the FA entry.                  */
/*                                                                */
/*                     NOTE:  This structure matches the format   */
/*                     of the attribute input to the              */
/*                     Qp0lSetAttr() API.                         */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_FA_Journal_Entry_Attr
{
    Qp0l_Attr_Header_t Header; /* Attribute header.               */
    char Data[4];             /* Data value for this attribute.
                                 This field is variable length,
                                 but will always be at least 4
                                 bytes long.                      */
} Qp0l_FA_Journal_Entry_Attr_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_FA_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code B,*/
/*                     FA (Attribute change) entry type.          */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_FA_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
    Qp0lFID_t ParentFID;      /* Parent directory's File ID.      */
    char ObjectType[7];       /* Symbolic object type.            */
    char Reserved0[9];        /* Reserved for alignment. Set to
                                 hex 0s.                          */
    Qp0l_FA_Journal_Entry_Attr_t Attrs[1]; /* Attribute(s) that were
                                 changed.  This array field is
                                 variable length, but will always be
                                 at least one element long.       */
} Qp0l_FA_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_FC_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, FC (Sync) entry type.                   */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_FC_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_FC_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_FF_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, FF (Suspend) entry type.                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_FF_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
    unsigned long long OldSize; /* Old size.                      */
} Qp0l_FF_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_FR_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, FR (Object restored) entry type.        */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_FR_Journal_Entry
{
    char MediaType[3];        /* Media Type ("DKT " - Diskette,
                                             "TAP"  - Tape,
                                             "SAV"  - Save File,
                                             "OPT " - Optical)    */
    char FirstVolumeID[6];    /* First Volume ID                  */
    char StartDate[6];        /* Date of start of restore
                                 operation.                       */
    char StartTime[6];        /* Time of start of restore
                                 operation.                       */
    char UpdateHistory;       /* Update history flag used on save
                                 request:
                                   0xF1 = Update history YES.
                                   0xF0 = Update history NO.      */
    char SaveFile[10];        /* Save file name.                  */
    char SaveFileLibrary[10]; /* Save file library name.          */
    Qp0lFID_t MediaFID;       /* File ID of object on the media.  */
    Qp0lFID_t RestoredFID;    /* File ID of the new restored
                                 object.                          */
    Qp0lFID_t RestoredOverFID;/* File ID of the restored over
                                 object, if a restore over.       */
} Qp0l_FR_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_FS_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, FS (Saved) entry type.                  */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_FS_Journal_Entry
{
    char MediaType[3];        /* Media Type ("DKT " - Diskette,
                                             "TAP"  - Tape,
                                             "SAV"  - Save File,
                                             "OPT " - Optical)    */
    char FirstVolumeID[6];    /* First Volume ID                  */
    char SaveStartDate[6];    /* Date of start of save operation. */
    char SaveStartTime[6];    /* Time of start of save operation. */
    char UpdateHistory;       /* Update history flag used on save
                                 request:
                                   0xF1 = Update history YES.
                                   0xF0 = Update history NO.      */
    char SaveFile[10];        /* Save file name.                  */
    char SaveFileLibrary[10]; /* Save file library name.          */
    char SaveActive[10];      /* Save while active parameter.     */
    char SaveActiveDate[6];   /* Date of start of save while active
                                 operation.                       */
    char SaveActiveTime[6];   /* Time of start of save while active
                                 operation.                       */
    char PrimaryReceiver[10]; /* Name of the first of two journal
                                 receivers that contain the B FW
                                 entry.                           */
    char PrimaryLibrary[10];  /* Library that contains the
                                 PrimaryReceiver.                 */
    char DualReceiver[10];    /* Name of the second of two journal
                                 receivers that contain the B FW
                                 entry.  This will be blank if only
                                 a single receiver was used when
                                 the B FW entry was added.        */
    char DualLibrary[10];     /* Library that contains the
                                 DualReceiver.                    */
    char StartSeqNumber[10];  /* Starting sequence number
                                 The StartSeqNumber is set to
                                 "-1        " if the actual value
                                 is larger than 9,999,999,999. See
                                 field StartSeqNumberL for the
                                 actual value.                @A8C*/
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
    char StartSeqNumberL[20]; /* Starting sequence number. This
                                 field will always contain a
                                 sequence number.             @A8A*/
    char LibraryASPDevice[10]; /* The ASP device on which the
                                 library that contains the
                                 PrimaryReceiver resides.     @ABA*/
} Qp0l_FS_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_FW_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, FW (Save while active) entry type.      */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_FW_Journal_Entry
{
    char MediaType[3];        /* Media Type ("DKT " - Diskette,
                                             "TAP"  - Tape,
                                             "SAV"  - Save File,
                                             "OPT " - Optical)    */
    char FirstVolumeID[6];    /* First Volume ID                  */
    char SaveStartDate[6];    /* Date of start of save operation. */
    char SaveStartTime[6];    /* Time of start of save operation. */
    char UpdateHistory;       /* Update history flag used on save
                                 request:
                                   0xF1 = Update history YES.
                                   0xF0 = Update history NO.      */
    char SaveFile[10];        /* Save file name.                  */
    char SaveFileLibrary[10]; /* Save file library name.          */
    char SaveActive[10];      /* Save while active parameter.     */
    char SaveActiveDate[6];   /* Date when checkpoint processing
                                 was completed if this is a save
                                 while active.                    */
    char SaveActiveTime[6];   /* Time when checkpoint processing
                                 was completed if this is a save
                                 while active.                    */
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_FW_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_JA_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, JA (change journaled object attribute)  */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_JA_Journal_Entry
{
    char Attribute_Changed; /* Identifies which journal attribute
                               was changed:
                               '1' = IMAGES
                               '2' = OMTJRNE
                               '3' = INHERIT                 @ABA*/
    char New_Attribute_value[10]; /* The new value for the
                                     attribute that changed:     */
                            /* For IMAGES the valid values are:  */
                            /* '*BOTH     ' or '*AFTER     '     */
                            /* For OMTJRNE the valid values are: */
                            /* '*NONE     ' or '*OPNCLOSYN'      */
                            /* For INHERIT the valid values are: */
                            /* '*YES      ' or '*NO       '  @ABA*/
} Qp0l_JA_Journal_Entry_t;
/******************************************************************/
/* Values defined for the Attribute_Changed field of the          */
/* Qp0l_JA_Journal_Entry structure.                           @ABA*/

/******************************************************************/
#define QP0L_JA_ATTRIBUTE_IMAGES  '1'                      /* @ABA*/
#define QP0L_JA_ATTRIBUTE_OMTJRNE '2'                      /* @ABA*/
#define QP0L_JA_ATTRIBUTE_INHERIT '3'                     /*  @ABA*/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_JT_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, JT (Start Journal) entry type.          */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_JT_Journal_Entry
{
    char OptionalEntries;     /* Optional entries omitted.
                                  0xF0 - No entries omitted.
                                  0xF1 - Optional entries omitted.*/
    char NewObjectsInheritJournaling; /* Identifies whether
                                       new objects created
                                       within a directory should
                                       inherit journaling
                                        0xF0 - no, or inherit does
                                                not apply to this
                                                object
                                        0xF1 - yes, new objects
                                               inherit journaling
                                                              @AEA*/
    char Reserved0[6];        /* Reserved.  Set to binary 0s. @AEC*/
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
    Qp0l_Path_Name_t Path;    /* Object's Absolute path name.     */
} Qp0l_JT_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_OA_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code B,*/
/*                     OA (Object authority change) entry type.   */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_OA_Journal_Entry
{
    char EntryType;           /* Type of entry.  A = Change auth. */
    char ObjectName[10];      /* Object name.  *N if object is not
                                 in a library.                    */
    char LibraryName[10];     /* Library name.  *N if object is not
                                 in a library.                    */
    char ObjectType[8];       /* Symbolic object type.            */
    char UserName[10];        /* Name of the user profile whose auth
                                 is being granted or revoked.     */
    char AutlName[10];        /* Authorization List Name.         */
    struct Qp0l_OA_Journal_Entry_Auth
    {                         /*                                  */
        char Objexist;        /* *OBJEXIST ('Y' or ' ')           */
        char Objmgt;          /* *OBJMGT   ('Y' or ' ')           */
        char Objopr;          /* *OBJOPR   ('Y' or ' ')           */
        char Autlmgt;         /* Authorization List Mgmt. (' ')   */
        char AutlPublic;      /* Authorization List *PUBLIC auth. */
                              /*           ('Y' or ' ')       @ADC*/
        char Read;            /* *READ     ('Y' or ' ')           */
        char Add;             /* *ADD      ('Y' or ' ')           */
        char Upd;             /* *UPD      ('Y' or ' ')           */
        char Dlt;             /* *DLT      ('Y' or ' ')           */
        char Exclude;         /* *EXCLUDE  ('Y' or ' ')           */
        char Execute;         /* *EXECUTE  ('Y' or ' ')           */
        char Objalter;        /* *OBJALTER ('Y' or ' ')           */
        char Objref;          /* *OBJREF   ('Y' or ' ')           */
    } Authority;              /* All PGP authorities set.         */
    char Reserved0[4];        /* Reserved.  Set to blanks.        */
    char OperationType[3];    /* "GRT" - Grant, "RPL" - Grant with
                                 Replace, or "RVK" - Revoke.      */
    char Reserved1[149];      /* Reserved.  Set to blanks.        */
    int ObjectNameCCSID;      /* CCSID for the object name.       */
    char Reserved2[8];        /* Reserved.  Set to blanks.        */
    Qp0lFID_t ParentFID;      /* Parent directory's File ID. This */
                              /*  field is not set or used.   @AIA*/
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_OA_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_OF_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, OF (Open) entry type.                   */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_OF_Journal_Entry
{
    int OpenFlags;            /* Open flags.                      */
} Qp0l_OF_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_OG_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code B,*/
/*                     OG (Object PGP change) entry type.         */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_OG_Journal_Entry
{
    char EntryType;           /* Type of entry.  A - Change primary
                                 group profile.                   */
    char ObjectName[10];      /* Object name.  *N if object is not
                                 in a library.                    */
    char LibraryName[10];     /* Library name.  *N if object is not
                                 in a library.                    */
    char ObjectType[8];       /* Symbolic object type.            */
    char OldPGP[10];          /* Old PGP of object.               */
    char NewPGP[10];          /* New PGP of object.               */
    struct Qp0l_OG_Journal_Entry_Auth
    {                         /*                                  */
        char Objexist;        /* *OBJEXIST ('Y' or ' ')           */
        char Objmgt;          /* *OBJMGT   ('Y' or ' ')           */
        char Objopr;          /* *OBJOPR   ('Y' or ' ')           */
        char Objalter;        /* *OBJALTER ('Y' or ' ')           */
        char Objref;          /* *OBJREF   ('Y' or ' ')           */
        char Reserved0[10];   /* Reserved.  Set to blanks.        */
        char Autlmgt;         /* Authorization List Mgmt. (' ')   */
        char Read;            /* *READ     ('Y' or ' ')           */
        char Add;             /* *ADD      ('Y' or ' ')           */
        char Upd;             /* *UPD      ('Y' or ' ')           */
        char Dlt;             /* *DLT      ('Y' or ' ')           */
        char Execute;         /* *EXECUTE  ('Y' or ' ')           */
        char Reserved1[10];   /* Reserved.  Set to blanks.        */
        char Exclude;         /* *EXCLUDE  ('Y' or ' ')           */
        char RvkPrevPGPAuth;  /* Revoke previous PGP's authority:
                                 (Y' or ' ')                      */
    } Authority;              /* All PGP authorities set.         */
    char Reserved0[143];      /* Reserved.  Set to blanks.        */
    int ObjectNameCCSID;      /* CCSID for the object name.       */
    char Reserved1[8];        /* Reserved.  Set to blanks.        */
    Qp0lFID_t ParentFID;      /* Parent directory's File ID.      */
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_OG_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_OO_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code B,*/
/*                     OO (Object Owner change) entry type.       */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_OO_Journal_Entry
{
    char EntryType;           /* Type of entry.  A - Change owner.*/
    char ObjectName[10];      /* Object name.  *N if object is not
                                 in a library.                    */
    char LibraryName[10];     /* Library name.  *N if object is not
                                 in a library.                    */
    char ObjectType[8];       /* Symbolic object type.            */
    char OldOwner[10];        /* Old owner of object.             */
    char NewOwner[10];        /* New owner of object.             */
    char Reserved0[143];      /* Reserved.  Set to blanks.        */
    int ObjectNameCCSID;      /* CCSID for the object name.       */
    char Reserved1[8];        /* Reserved.  Set to blanks.        */
    Qp0lFID_t ParentFID;      /* Parent directory's File ID.      */
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
} Qp0l_OO_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_RN_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code B,*/
/*                     RN (Rename file identifier) entry type.    */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                                                            @A1A*/
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_RN_Journal_Entry               /* @A1A*/
{
    Qp0lFID_t OldFID;         /* Object's old File ID.        @A1A*/
    char      Reserved0[14];  /* Reserved.  Set to blanks.    @A1A*/
    Qp0lFID_t NewFID;         /* Object's new File ID.        @A1A*/
    char      Reserved1[14];  /* Reserved.  Set to blanks.    @A1A*/
} Qp0l_RN_Journal_Entry_t;    /*                              @A1A*/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_TR_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B,  TR (Truncate) entry type.              */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_TR_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
    unsigned long long OldSize; /* Old size.                      */
    unsigned long long NewSize; /* New size.                      */
} Qp0l_TR_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_WA_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to package the journal   */
/*                     entry specific data for the journal code   */
/*                     B, WA (Write - After image) entry type.    */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_WA_Journal_Entry
{
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
    unsigned long long DataLength; /* Length of data.             */
    unsigned long long Offset;/* Offset to begin write.           */
    char Reserved0[16];       /* Reserved.  Set to 0s.            */
    /* If the journal entry is marked as having 'incomplete data' */
    /* in the journal entry header, then the following data is    */
    /* returned as a pointer.  Otherwise, it is returned as a     */
    /* character string.                                      @ADC*/
    union                     /*                                  */
    {                         /*                                  */
      char *DataP;            /* Pointer to data.                 */
      char Data[1];           /* Data.                            */
    } WriteData;              /*                                  */
} Qp0l_WA_Journal_Entry_t;    /*                                  */

/******************************************************************/
/* End of journal entry specific data structures for the          */
/* journal code B entry types.                                    */
/******************************************************************/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qp0l_ZC_Audit_Journal_Entry                */
/*                                                                */
/* Structure Purpose:  Structure is used to package the audit     */
/*                     journal entry specific data for the audit  */
/*                     code T, ZC (Change to object) entry type.  */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     NOTE:  This is intended to map directly to */
/*                     the layout of the ZC security audit        */
/*                     journal entry.                             */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qp0l_ZC_Audit_Journal_Entry
{
    char ObjectAccess;        /* Object access.  Always 'C' for
                                 Change of an object.             */
    char ObjectName[10];      /* Object name.  *N if object is not
                                 in a library.                    */
    char LibraryName[10];     /* Library name.  *N if object is not
                                 in a library.                    */
    char ObjectType[8];       /* Symbolic object type.            */
    decimal(5,0) AccessType;  /* Type of access.  The values
                                 for this field are described in
                                 the Security - Reference
                                 book.                            */
    char AccessSpecificData[50];/* Access specific data.          */
    char Reserved0[18];       /* Reserved.  Set to blanks.        */
    short ObjectNameLength;   /* Length of the Object Name.  If   */
                              /* 0 this indicates that an object  */
                              /* name is not provided.        @AGC*/
    int ObjectNameCCSID;      /* CCSID for the object name.       */
    char ObjectNameCountryID[2]; /* Country ID for Object Name.   */
                              /* May be set to blanks if no       */
                              /* Object Name.                 @AGA*/
    char ObjectNameLangID[3]; /* Language ID for Object Name.     */
                              /* May be set to blanks if no       */
                              /* Object Name.                 @AGA*/
    char Reserved1[3];        /* Reserved.  Set to blanks.    @AGC*/
    Qp0lFID_t ParentFID;      /* Parent directory's File ID.      */
    Qp0lFID_t ObjectFID;      /* Object's File ID.                */
    char ObjectComponentName[512]; /* Object name.  When provided,*/
                              /* this is the last component of the*/
                              /* object's path name.              */
    Qp0lFID_t AbsolutePathObjectFID; /* File ID of the object     */
                              /* identified by the absolute path. */
    char AbsolutePathASPName[10]; /* Name of the ASP containing   */
                              /* the object identified by the     */
                              /* absolute path.                   */
    char AbsolutePathASPNumber[5]; /* Number of the ASP containing*/
                              /* the object identified by the     */
                              /* absolute path.                   */
    int AbsolutePathCCSID;    /* CCSID of the absolute path.      */
    char AbsolutePathCountryID[2]; /* Country ID of the absolute  */
                              /* path.                            */
    char AbsolutePathLanguageID[3]; /* Language ID of the absolute*/
                              /* path.                            */
    short AbsolutePathLength; /* Length in bytes of the absolute  */
                              /* path.                            */
    char AbsolutePathIndicator; /* Indicates if the absolute path */
                              /* is absolute or relative. 'Y'     */
                              /* indicates the path is absolute.  */
                              /* 'N' indicates that the path is   */
                              /* relative to the directory        */
                              /* identified by the File ID in     */
                              /* AbsolutePathRelativeFID.         */
    Qp0lFID_t AbsolutePathRelativeFID; /* File ID of the directory*/
                              /* containing AbsolutePathName when */
                              /* AbsolutePathIndicator is 'N'.    */
                              /* When AbsolutePathIndicator is 'Y'*/
                              /* this field will be hex zeroes.   */
    short AbsolutePathLength2; /* Length in bytes of the absolute */
                              /* path. Same as AbsolutePathLength.*/
    char AbsolutePathName[5000]; /* The absolute path to the      */
                              /* object for which the ZC entry was*/
                              /* deposited.  If the               */
                              /* AbsolutePathIndicator is 'N',    */
                              /* then this will actually be a path*/
                              /* that is relative to the directory*/
                              /* identified by                    */
                              /* AbsolutePathRelativeFID.  The    */
                              /* actual length of the field will  */
                              /* be determined by                 */
                              /* AbsolutePathLength.              */
} Qp0l_ZC_Audit_Journal_Entry;

/********************************************************************/
/* The following are macro constants used when sending a ZC audit   */
/* journal entry.  One or more of these values may be set in the    */
/* AccessSpecificData field of a ZC security audit journal entry    */
/* to indicate which attribute(s) or operation(s) caused the entry  */
/* to be created.  See the Qp0l_ZC_Audit_Journal_Entry structure    */
/* (defined above) for more details.                                */
/********************************************************************/

/* Create timestamp set.                                            */
#define QP0F_ZC_CREATE_TIMESTAMP        'A'

/* Access timestamp set.                                            */
#define QP0F_ZC_ACCESS_TIMESTAMP        'B'

/* Symbolic link created.                                           */
#define QP0F_ZC_CREATE_SYMLNK           'C'

/* Modify timestamp set.                                            */
#define QP0F_ZC_MODIFY_TIMESTAMP        'D'

/* PC read only bit set.                                            */
#define QP0F_ZC_PC_READ_ONLY            'E'

/* PC hidden bit set.                                               */
#define QP0F_ZC_PC_HIDDEN               'F'

/* PC system bit set.                                               */
#define QP0F_ZC_PC_SYSTEM               'G'

/* PC archive bit set.                                              */
#define QP0F_ZC_PC_ARCHIVE              'H'

/* System archive bit set.                                          */
#define QP0F_ZC_SYSTEM_ARCHIVE          'I'

/* Data codepage and CCSID set.                                     */
#define QP0F_ZC_DATA_CODEPAGE           'J'

/* Data codepage and CCSID set.                                     */
#define QP0F_ZC_DATA_CCSID              'J'

/* Object checked out.                                              */
#define QP0F_ZC_CHECKOUT                'K'

/* Days used count reset.                                           */
#define QP0F_ZC_USAGE_INFO_RESET        'L'

/* Allow writers during save-while-active checkpoint processing.    */
#define QP0F_ZC_SYSTEM_ALWCKPWRT        'M'

/* File descriptor opened for write access has been made available
   in a new or additional job.                                  @AGC*/
#define QP0F_ZC_TAKEDESCRIPTOR          'N'

/* File opened for write access.                                    */
#define QP0F_ZC_OPEN_WRITE              'O'

/* Extended attributes were set or changed.                         */
#define QP0F_ZC_SET_EXTENDED_ATTR       'P'

/* Operation checked object to see if dynamic retrieval was needed
   and performed dynamic retrieval if necessary.                    */
#define QP0F_ZC_DYNAMIC_RETRIEVAL_ATTEMPTED 'Q'

/* Object checked out.                                              */
#define QP0F_ZC_CHECKIN                 'R'

/* Object changed via APYJRNCHG command.                            */
#define QP0F_ZC_APYJRNCHG               'S'

/* Journaling was started for this object.                          */
#define QP0F_ZC_START_JOURNALING        'T'

/* Journaling was ended for this object.                            */
#define QP0F_ZC_END_JOURNALING          'U'

/* Main storage option changed for object                       @A2A*/
#define QP0F_ZC_MAINSTG_OPT             'V'                  /* @A2A*/

/* Disk storage option changed for object.                      @A2A*/
#define QP0F_ZC_DISKSTG_OPT             'W'                  /* @A2A*/

/* Allow save option changed for object.                        @A6A*/
#define QP0F_ZC_ALWSAV                  'X'                  /* @A6A*/

/* Change journaling attributes for object.                     @ACA*/
#define QP0F_ZC_CHANGE_JOURNALING_ATTR  'Y'                  /* @ACA*/

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif   /* QP0LJRNL_h */

#ifdef __cplusplus                                            /* @AHA*/
    #pragma info(restore)                                     /* @AHA*/
#else                                                         /* @AHA*/
    #pragma checkout(resume)                                  /* @AHA*/
#endif                                                        /* @AHA*/
