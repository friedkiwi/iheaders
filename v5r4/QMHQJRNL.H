/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2001, 2006                                */
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
/* Header File Name: H/qmhqjrnl                                   */
/*                                                                */
/* Descriptive Name: Data Queue Journaling                        */
/*                                                                */
/*                                                                */
/* Description: This file contains structure definitions for      */
/*              the entry specific data portion of the various    */
/*              journal entry types associated with a data queue  */
/*              that may be deposited in a journal.               */
/*              NOTE:  The following journal entries associated   */
/*                     with a data queue are not included in this */
/*                     file.                                      */
/*                     Refer to H/qlijrnl for journal entry:      */
/*                        Q ZB - Object attribute changed         */
/*                     Refer to H/qsyjrnl for journal entries:    */
/*                        Q ZA - Change authority                 */
/*                        Q ZO - Change owner                     */
/*                        Q ZP - Change primary group             */
/*                        Q ZT - Change audit attribute           */
/*                                                                */
/*              Refer to H/qjournal for structure definitions     */
/*              for the fixed portion of the journal entries.     */
/*                                                                */
/*                                                                */
/* Header Files Included:  None                                   */
/*                                                                */
/* Macros List:  None                                             */
/*                                                                */
/* Structure List:                                                */
/*                                                                */
/*    Qmhq_QA_Journal_Entry - Data queue created                  */
/*    Qmhq_QB_Journal_Entry - Start data queue journaling         */
/*    Qmhq_QH_Journal_Entry - Data queue changes applied          */
/*    Qmhq_QJ_Journal_Entry - Data queue cleared, has key         */
/*    Qmhq_QK_Journal_Entry - Send data queue entry has key       */
/*    Qmhq_QL_Journal_Entry - Rcv data queue entry, has key       */
/*    Qmhq_QM_Journal_Entry - Data queue moved                    */
/*    Qmhq_QN_Journal_Entry - Data queue renamed                  */
/*    Qmhq_QS_Journal_Entry - Send data queue entry, no key       */
/*    Qmhq_QX_Journal_Entry - Start of save for data queue (SWA)  */
/*    Qmhq_QY_Journal_Entry - Data queue saved                    */
/*    Qmhq_QZ_Journal_Entry - Data queue restored                 */
/*                                                                */
/*  NOTE: There is entry specific data associated with            */
/*        the following entry types but it is reserved            */
/*        information so a structure was not generated:           */
/*                                                                */
/*        QC - Data queue cleared, no key                         */
/*             this entry contains 2 bytes of entry specific data */
/*        QR - Rcv data queue entry, no key                       */
/*             this entry contains 18 bytes of entry specific data*/
/*                                                                */
/*  NOTE: There is no entry specific data associated with         */
/*        the following entry types:                              */
/*                                                                */
/*        QD - Data queue deleted                                 */
/*        QE - End data queue journaling                          */
/*        QI - Queue in use at abnormal end                       */
/*        QW - APYJRNCHG command started                          */
/*                                                                */
/* Function Prototype List:  None                                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL   DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ -----   ------ --------- --------------------*/
/* $A0= D9773301     v5r1m0  000206 ROCH:     New Include and     */
/*                                            add pragma stmts    */
/*                                            for data storage    */
/*                                            model               */
/* $A1= D9773302     v5r1m0  000305 ROCH:     Update QS entry to  */
/*                                            match late arch chg */
/* $A2= D9925400     v5r3m0  020913 ROCH:    Add 20 digit sequence*/
/*                                          number to QY entry.   */
/* $A3= D9920700     v5r3m0  030105 ROCH:   Add IASP device to QY */
/*                                          entry                 */
/* $01= P9A29706     v5r3m0  030518 ROCH:   Add inherit flag to   */
/*                                          QB entry              */
/* $A4= D9995100     v5r4m0  041205 ROCH:   Add QA entry for data */
/*                                          queue created         */
/* $A5= D9301500     v5r4m0  041205 ROCH:   Add entries QH and QW */
/*                                          and add a field to the*/
/*                                          end of the QX, QY and */
/*                                          QZ entries            */
/* $02= P9A99189     v5r4m0  050605 ROCH:   Add information about */
/*                                          incomplete entries for*/
/*                                          the QK and QS entries */
/* $03= P9B28082     v5r4m0f 060519 ROCH:   Add owner after the   */
/*      PSE24746                            text field for the QA */
/*                                          entry.                */
/* $04= P9B28082     v5r4m0f 060519 ROCH:   Add public authority  */
/*                                          information to the  QA*/
/*                                          (create) journal entry*/
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QMHQJRNL_h
#define QMHQJRNL_h

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(P128)
#endif

/******************************************************************/
/* Start of journal entry specific data structures for the        */
/* journal code Q entry types.                                    */
/******************************************************************/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QA_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QA (Data queue created) entry type.     */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                            @A4A*/
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QA_Journal_Entry
{
    char         Date_Time_Stamp[8]; /* Date and time of create
                                       operation.  The format is a
                                       system time stamp (*DTS).
                                       API QWCCVTDT can be used to
                                       convert the time stamp.@A4A*/
    char         Data_Queue_Name[10]; /* Data queue name      @A4A*/
    char         Data_Queue_Library[10]; /* Library containing the
                                       data queue             @A4A*/
    unsigned int Max_Entry_Length;  /* Maximum entry length, value
                                       from 1 through 64512   @A4A*/
    char         Force_Aux_Storage; /* Force queue to auxillary
                                       storage on send and receive:
                                         'N' = Force is not done
                                         'Y' = Force is done  @A4A*/
    char         Reserved_1[8];     /* Reserved               @A4A*/
    char         Sequence;          /* Sequence in which entries are
                                       received from the data queue:
                                         'F' = FIFO queue
                                         'K' = Keyed queue
                                         'L' = LIFO queue     @A4A*/
    unsigned short int  Key_Length; /* Key length of a keyed queue,
                                       a value from 1 through 256
                                                              @A4A*/
    char         Include_Sender_ID; /* Attach a sender ID to each
                                       entry sent to the queue:
                                         'N' = Do not include id
                                         'Y' = Include id     @A4A*/
    char         Queue_Type;        /* Type of data queue:
                                         'S' = Standard data queue
                                       (DDM data queues cannot be
                                        journaled.)           @A4A*/
    unsigned int Reserved_2;        /* Reserved               @A4A*/
    unsigned int Queue_Size_Max_Entries; /* Maximum number of
                                       entries to allow:
                                         -1 = *MAX16MB
                                         -2 = *MAX2GB         @A4A*/
    unsigned int Queue_Size_Init_Entries; /* Initial number of
                                       entries to allocate (default
                                       on CRTDTAQ command is 16)
                                                              @A4A*/
    char         Automatic_Reclaim; /* Allocated storage is
                                       automatically reclaimed
                                       (released) when the queue is
                                       empty:
                                         '0' = no storage released
                                         '1' = storage is released
                                                              @A4A*/
    char         Reserved_3[481];   /* Reserved               @A4A*/
    char         Authority[10];     /* Authority value specified
                                       for the AUT keyword on the
                                       create command         @A4A*/
    char         Text[50];          /* Text description       @A4A*/
    char         Owner[10];         /* Object owner           @03A*/
                                    /* The following authority
                                       information pertains to
                                       *PUBLIC for the data queue
                                       associated with this journal
                                       entry.                     */
    char         Object_Existence;  /* 'Y' = object existence @04A*/
    char         Object_Management; /* 'Y' = object management
                                                              @04A*/
    char         Object_Operational; /* 'Y' = object operational
                                                              @04A*/
    char         Reserved_4;        /* Reserved               @04A*/
    char         Auth_List_Auth;    /* 'Y' = object secured
                                       by an authorization list.
                                       If this field is 'Y', the
                                       authorization list name can
                                       be found in field
                                       Resulting_Authority    @04A*/
    char         Read_Auth;         /* 'Y' = read data right  @04A*/
    char         Add_Auth;          /* 'Y' = add data right   @04A*/
    char         Update_Auth;       /* 'Y' = update data right
                                                              @04A*/
    char         Delete_Auth;       /* 'Y' = delete data right
                                                              @04A*/
    char         Exclude_Auth;      /* 'Y' = *EXCLUDE or public has
                                       no authority to the object
                                                              @04A*/
    char         Execute_Auth;      /* 'Y' = execute data right
                                                              @04A*/
    char         Object_Alter;      /* 'Y' = object alter     @04A*/
    char         Object_Reference;  /* 'Y' = object reference @04A*/
    char         Resulting_Authority[10]; /* The public authority
                                       resulting from the create
                                       command.  For example, the
                                       values can include:  *CHANGE,
                                       *ALL, *USE, *EXCLUDE, or an
                                       authorization list name
                                       if there was a Y in field
                                       Auth_List_Auth.
                                       To clarify how this field
                                       could be used,
                                       if *LIBCRTAUT was specified
                                       on the original create
                                       command, *LIBCRTAUT would be
                                       found in the Authority field
                                       above and a value such as
                                       *USE could be found in this
                                       field and it could be
                                       specified on a subsequent
                                       create command.
                                       This field could be blank
                                       if an error occurred and
                                       individual authority fields
                                       would result in a user
                                       defined value that could not
                                       be specified by the special
                                       values allowed on a create
                                       command.               @04A*/
} Qmhq_QA_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QB_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QB (Start data queue journaling)        */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     The flag field in the fixed portion of the */
/*                     journal entry indicates the type of        */
/*                     images selected:                           */
/*                       '0' = after images                       */
/*                       '1' - before and after images            */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QB_Journal_Entry
{
    char         Omit_Journal_Entries; /* Identifies whether entries
                                       are to be omitted from
                                       journaling:
                                         '0' = no entries are to be
                                               omitted
                                         '1' = entries are to be
                                               omitted            */
    char         New_Objects_Inherit_Journaling; /* Identifies
                                       whether new objects created
                                       within a directory should
                                       inherit journaling
                                          '0' = no, or inherit does
                                                not apply to this
                                                object
                                          '1' = yes, new objects
                                                inherit journaling
                                                              @01A*/
} Qmhq_QB_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QH_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QH (Data queue changes applied) entry   */
/*                     type.                                      */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     The count/relative record number field in  */
/*                     the fixed portion of the journal entry     */
/*                     contains the number of journal entries     */
/*                     applied.                                   */
/*                                                                */
/*                     The flag field in the fixed portion of the */
/*                     journal entry indicates the results of the */
/*                     apply operation:                           */
/*                       '0' = command completed normally         */
/*                       '1' = command completed abnormally       */
/*                                                            @A5A*/
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QH_Journal_Entry
{
    char         First_Seq_Number[10]; /* Sequence number of the
                                    first entry actually applied.
                                    The First_Seq_Number is set to
                                    "-1        " if the sequence
                                    number is larger than
                                    9999999999. See field
                                    First_Seq_NumberL for the
                                    actual value              @A5A*/
    char         Last_Seq_Number[10]; /* Sequence number of the
                                    last entry actually applied.
                                    The Last_Seq_Number is set to
                                    "-1        " if the sequence
                                    number is larger than
                                    9999999999. See field
                                    Last_Seq_NumberL for the
                                    actual value.             @A5A*/
    char         Start_Rcvr[10]; /* Name of the first receiver
                                    from which entries were applied.
                                                              @A5A*/
    char         Start_Rcvr_Library[10]; /* Name of the library for
                                    the first receiver        @A5A*/
    char         End_Rcvr[10];   /* Name of the last receiver
                                    from which entries were applied.
                                                              @A5A*/
    char         End_Rcvr_Library[10]; /* Name of the library for
                                    the last receiver         @A5A*/
    char         Start_Seq_Number[10]; /* Starting sequence number
                                    for the apply operation.
                                    The Start_Seq_Number is set to
                                    "-1        " if the sequence
                                    number is larger than
                                    9999999999. See field
                                    Start_Seq_NumberL for the
                                    actual value.             @A5A*/
    char         End_Seq_Number[10]; /* Ending sequence number
                                    for the apply operation.
                                    The End_Seq_Number is set to
                                    "-1        " if the sequence
                                    number is larger than
                                    9999999999. See field
                                    End_Seq_NumberL for the
                                    actual value.             @A5A*/
    char         Incomplete_Transaction[1]; /* Indicates whether
                                    an incomplete commit control
                                    transaction was not applied:
                                       '0' = Indicates that either
                                             CMTDBY(*NO) was
                                             specified or that
                                             CMTBDY(*YES) was
                                             specified and no
                                             partial commit
                                             transaction was
                                             found
                                       '1' = Indicates that
                                             CMTBDY(*YES) was
                                             specified and one or
                                             more partial commit
                                             transactions were
                                             found            @A5A*/
    char         First_Seq_NumberL[20]; /* Sequence number of the
                                    first entry actually applied.
                                    This field will always contain
                                    a sequence number.        @A5A*/
    char         Last_Seq_NumberL[20]; /* Sequence number of the
                                    last entry actually applied.
                                    This field will always contain
                                    a sequence number.        @A5A*/
    char         Start_Seq_NumberL[20]; /* Starting sequence number
                                    for the apply operation.  This
                                    field will always contain a
                                    sequence number.          @A5A*/
    char         End_Seq_NumberL[20]; /* Ending sequence number for
                                    for the apply operation.  This
                                    field will always contain a
                                    sequence number.          @A5A*/
    char         Applied_Entry_Count[20]; /* Count of number of
                                    entries applied.          @A5A*/
    char         Start_Seq_Partial_Remove[20]; /* Starting sequence
                                    number for any partial
                                    transactions that were removed.
                                    This field will always be zero
                                    since data queues cannot have
                                    partial transactions.     @A5A*/
    char         End_Seq_Partial_Remove[20]; /* Ending sequence
                                    number for any partial
                                    transactions that were removed.
                                    This field will always be zero
                                    since data queues cannot have
                                    partial transactions.     @A5A*/
    char         Partial_Remove_Count[20]; /* Count of number of
                                    entries removed for partial
                                    transactions.  This will always
                                    be zero.                  @A5A*/
    char Object_Deleted;         /* Indication that the object was
                                    deleted during the apply
                                    operation.  Values are Y=yes
                                    or N=No.                  @A5A*/
    char Object_Created;         /* Indication that the object was
                                    created during the apply
                                    operation.  Values are Y=yes
                                    or N=No.                  @A5A*/
    char Early_End;              /* Indication that the apply
                                    operation was ended early for
                                    this object.  Values are Y=yes
                                    or N=No.                  @A5A*/
    char Change_Not_Made;        /* Indication that a change was
                                    found for this object after an
                                    early end to the apply operation
                                    Values are Y=yes or N=No. @A5A*/
    char End_Reason_Code;        /* Reason code for early end. See
                                    message MCH4801 for the possible
                                    values.                   @A5A*/
    char End_Message_Id[7];      /* Message id associated with an
                                    early end to the apply operation
                                                              @A5A*/
    int Error_Condition;         /* Error condition code      @A5A*/
    char Partials_Remain;        /* Indication that partial
                                    transactions remain for this
                                    object.  Values are Y=yes or
                                    N=No.                     @A5A*/
    char Partials_Removed;       /* Indication that at least some
                                    partial transactions were
                                    removed during the apply
                                    operation.  Values are Y=Yes or
                                    N=No.                     @A5A*/
} Qmhq_QH_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QJ_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QJ (Data queue cleared, has key)        */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QJ_Journal_Entry
{
    char         Reserved[2];       /* Reserved                   */
    unsigned short int  Key_Length; /* Key length                 */
    char         Key_Order[2];      /* Key order, possible values:
                                          GT = Greater than
                                          LT = Less than
                                          NE = Not equal
                                          EQ = Equal
                                          GE = Greater than or equal
                                          LE = Less than or equal */
    /*char         Key[]; */        /* Key, it can be from 1-256
                                       characters in length based
                                       on the Key_Length above    */

} Qmhq_QJ_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QK_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QK (Send data queue entry has key)      */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/* Note:               The first 16 bytes of the Data_Entry field */
/*                     contains "API Information" needed by API   */
/*                     QSNDTAQ when the journal entry is used     */
/*                     for replication with parameter 8 of        */
/*                     QSNDDTAQ but these 16 bytes are not placed */
/*                     on the data queue.                         */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QK_Journal_Entry
{
    unsigned int Data_Length;       /* Length of the data placed on
                                       the data queue             */
    unsigned int Data_Offset;       /* Offset to the data placed on
                                       the data queue             */
    char         Reserved[2];       /* Reserved                   */
    unsigned short int  Key_Length; /* Key length                 */
    char         Reserved_1[4];     /* Reserved                   */
    /*char         Key[]; */        /* Key, it can be from 1-256
                                       characters in length based
                                       on the Key_Length above    */
    /*char         Reserved_2[]; */ /* Reserved, variable length  */
    /*char         Data_Entry[]; */ /* Data that was placed on the
                                       data queue.  If the journal
                                       entry is marked as having
                                       'incomplete data' in the
                                       journal entry header, then
                                       this field is returned as a
                                       pointer.  Otherwise, it is
                                       returned as a character
                                       string.  For either type of
                                       entry, field Data_Length
                                       (the first field in this
                                       structure) contains the
                                       length of the data.    @02C*/

} Qmhq_QK_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QL_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QL (Rcv data queue entry, has key)      */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QL_Journal_Entry
{
    char         Reserved[18];      /* Reserved                   */
    unsigned short int  Key_Length; /* Key length                 */
    char         Key_Order[2];      /* Key order, possible values:
                                          GT = Greater than
                                          LT = Less than
                                          NE = Not equal
                                          EQ = Equal
                                          GE = Greater than or equal
                                          LE = Less than or equal */
    /*char         Key[]; */        /* Key, it can be from 1-256
                                       characters in length based
                                       on the Key_Length above    */

} Qmhq_QL_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QM_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QM (Data queue moved) entry type.       */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QM_Journal_Entry
{
    char         Old_Data_Queue[10]; /* Old data queue name       */
    char         Old_Data_Queue_Library[10]; /* Old data queue
                                       library name               */
    char         Reserved_1[10];    /* Reserved                   */
    char         New_Data_Queue[10]; /* New data queue name       */
    char         New_Data_Queue_Library[10]; /* New data queue
                                       library name               */
    char         Reserved_2[10];    /* Reserved                   */

} Qmhq_QM_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QN_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QN (Data queue renamed) entry type.     */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QN_Journal_Entry
{
    char         Old_Data_Queue[10]; /* Old data queue name       */
    char         Old_Data_Queue_Library[10]; /* Old data queue
                                       library name               */
    char         Reserved_1[10];    /* Reserved                   */
    char         New_Data_Queue[10]; /* New data queue name       */
    char         New_Data_Queue_Library[10]; /* New data queue
                                       library name               */
    char         Reserved_2[10];    /* Reserved                   */

} Qmhq_QN_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QS_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QS (Send data queue entry, no key)      */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/* Note:               The first 16 bytes of the Data_Entry field */
/*                     contains "API Information" needed by API   */
/*                     QSNDTAQ when the journal entry is used     */
/*                     for replication with parameter 8 of        */
/*                     QSNDDTAQ but these 16 bytes are not placed */
/*                     on the data queue.                         */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QS_Journal_Entry
{
    char         Reserved[28];      /* Reserved                   */
    unsigned int Data_Length;       /* Length of the data placed on
                                       the data queue             */
    /*char       Data_Entry[]; */   /* Data that was placed on the
                                       data queue.  If the journal
                                       entry is marked as having
                                       'incomplete data' in the
                                       journal entry header, then
                                       this field is returned as a
                                       pointer.  Otherwise, it is
                                       returned as a character
                                       string.  For either type of
                                       entry, field Data_Length
                                       (the previous field in this
                                       structure) contains the
                                       length of the data.    @02C*/

} Qmhq_QS_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QX_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QX (Data queue save started with save   */
/*                     while active specified) entry type.        */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QX_Journal_Entry
{
    char         Media_Type[3];     /* Media Type:
                                         'DKT' = Diskette
                                         'TAP' = Tape
                                         'SAV' = Save File
                                         'OPT' = Optical          */
    char         First_Volume_ID[6]; /* First Volume ID           */
    char         Start_Date[6];     /* Date of start of save
                                       operation                  */
    char         Start_Time[6];     /* Time of start of save
                                       operation                  */
    char         Update_History;    /* Update history flag used on
                                       save request:
                                         '0' = Update history NO
                                         '1' = Update history YES */
    char         Save_File[10];     /* Save file name (Blank if
                                       media type not 'SAV')      */
    char         Save_File_Library[10]; /* Save file library name
                                       (Blanks if media type not
                                       'SAV')                     */
    char         Save_Active[10];   /* Save while active
                                       parameter                  */
    char         Save_Active_Date[6]; /* The date when checkpoint
                                       processing was completed   */
    char         Save_Active_Time[6]; /* The time when checkpoint
                                       processing was completed   */
    char         Contents_Saved;    /* Contents of data queue were
                                       saved:
                                         '0' = No contents saved
                                         '1' = Contents saved @A5A*/
} Qwc_QX_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QY_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QY (Data queue saved) entry type.       */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QY_Journal_Entry
{
    char         Media_Type[3];     /* Media Type:
                                         'DKT' = Diskette
                                         'TAP' = Tape
                                         'SAV' = Save File
                                         'OPT' = Optical          */
    char         First_Volume_ID[6]; /* First Volume ID           */
    char         Start_Date[6];     /* Date of start of save
                                       operation                  */
    char         Start_Time[6];     /* Time of start of save
                                       operation                  */
    char         Update_History;    /* Update history flag used on
                                       save request:
                                         '0' = Update history NO
                                         '1' = Update history YES */
    char         Save_File[10];     /* Save file name (Blank if
                                       media type not 'SAV')      */
    char         Save_File_Library[10]; /* Save file library name
                                      (Blanks if media type not
                                      'SAV')                      */
    char         Save_Active[10];   /* Save while active
                                       parameter                  */
    char         Save_Active_Date[6]; /* If this is a save while
                                       active, the date when
                                       checkpoint processing was
                                       completed.  If not a save
                                       while active, this field has
                                       the same value as the
                                       start date field           */
    char         Save_Active_Time[6]; /* If this is a save while
                                       active, the time when
                                       checkpoint processing was
                                       completed.  If not a save
                                       while active, this field has
                                       the same value as the
                                       start time field           */
    char         Primary_Rcvr[10];  /* If this is save while
                                       active, this is the name of
                                       receiver that contains the
                                       matching 'Q QX' entry.  If
                                       not a save while active,
                                       this is the name of the
                                       receiver of the current
                                       'Q QY' entry.              */
    char         Primary_Rcvr_Library[10]; /* If this is save while
                                       active, this is the name of
                                       library that contains the
                                       matching 'Q QX' entry.  If
                                       not a save while active,
                                       this is the name of the
                                       library of the current
                                       'Q QY' entry.              */
    char         Reserved[20];      /* Reserved                   */
    char         Seq_Number[10];    /* If this is a save while
                                       active, the sequence number
                                       of the matching 'Q QX'
                                       entry.  If not a save while
                                       active, the sequence number
                                       of the current 'Q QY'
                                       entry.
                                    The Seq_Number is set to
                                   "-1        " if the actual
                                   value is larger than
                                   9999999999. See field
                                   Seq_NumberL for the actual
                                   value.                     @A2C*/
    char         Reserved_1[16];    /* Reserved               @A2A*/
    char         Seq_NumberL[20];   /* If this is a save while
                                       active, the sequence number
                                       of the matching 'Q QX'
                                       entry.  If not a save while
                                       active, the sequence number
                                       of the current 'Q QY'
                                       entry. This field will
                                       will always contain a
                                       sequence number.       @A2A*/
    char         Library_ASP_Device[10]; /* The ASP device on which
                                   the Library that contains the
                                   Primary_Rcvr resides.      @A3A*/
    char         Contents_Saved;    /* Contents of data queue were
                                       saved:
                                         '0' = No contents saved
                                         '1' = Contents saved @A5A*/
} Qmhq_QY_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qmhq_QZ_Journal_Entry                      */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     Q, QZ (Data queue restored) entry type.    */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qmhq_QZ_Journal_Entry
{
    char         Media_Type[3];     /* Media Type:
                                         'DKT' = Diskette
                                         'TAP' = Tape
                                         'SAV' = Save File
                                         'OPT' = Optical          */
    char         First_Volume_ID[6]; /* First Volume ID           */
    char         Start_Date[6];     /* Date of start of restore
                                       operation                  */
    char         Start_Time[6];     /* Time of start of restore
                                       operation                  */
    char         Update_History;    /* Update history flag used on
                                       save request:
                                         '0' = Update history NO
                                         '1' = Update history YES */
    char         Save_File[10];     /* Save file name (blank if
                                       media type not 'SAV')      */
    char         Save_File_Library[10]; /* Save file library name
                                      (blank if media type not
                                      'SAV')                      */
    char         Contents_Saved;    /* Contents of data queue were
                                       saved:
                                         '0' = No contents saved
                                         '1' = Contents saved @A5A*/
} Qmhq_QZ_Journal_Entry_t;


#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(pop)
#endif

#endif
