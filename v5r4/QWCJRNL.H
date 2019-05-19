/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2006                                */
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
/* Header File Name: H/qwcjrnl                                    */
/*                                                                */
/* Descriptive Name: Data Area Journaling                         */
/*                                                                */
/*                                                                */
/* Description: This file contains structure definitions for      */
/*              the entry specific data portion of the various    */
/*              journal entry types associated with a data area   */
/*              that may be deposited in a journal.               */
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
/*    Qwc_EA_Journal_Entry - Update data area - after image       */
/*    Qwc_EB_Journal_Entry - Update data area - before image      */
/*    Qwc_EE_Journal_Entry - Create data area journal data        */
/*    Qwc_EG_Journal_Entry - Start journal for data area          */
/*    Qwc_EK_Journal_Entry - Change journaled object attribute    */
/*    Qwc_EL_Journal_Entry - Data area restored                   */
/*    Qwc_EM_Journal_Entry - Data area moved                      */
/*    Qwc_EN_Journal_Entry - Data area renamed                    */
/*    Qwc_EQ_Journal_Entry - Data area changes applied            */
/*    Qwc_ES_Journal_Entry - Data area saved                      */
/*    Qwc_EW_Journal_Entry - Start of save for data area (SWA)    */
/*    Qwc_EX_Journal_Entry - Data area changes removed            */
/*                                                                */
/*  NOTE: There is no entry specific data associated with         */
/*        the following entry types:                              */
/*                                                                */
/*      ED - Data area deleted                                    */
/*      EH - End journal for data area                            */
/*      EI - Data area in use at shutdown                         */
/*      EU - RMVJRNCHG command started                            */
/*      EY - APYJRNCHG command started                            */
/*                                                                */
/* Function Prototype List:  None                                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL   DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ -----   ------ --------- --------------------*/
/* $A0= D9753401     v5r1m0  991105 ROCH:     New Include         */
/* $A1= D9821200     v5r1m0  991105 ROCH:     Add pragma stmts    */
/*                                            for data storage    */
/*                                            model               */
/* $A2= D9753400     v5r1m0  991205 ROCH:     Add Save_Active_    */
/*                                            Time to ES format   */
/* $A3= P9915332     v5r1m0  000302 ROCH:     Comment updates.    */
/* $A4= D9925400     v5r3m0  020913 ROCH:     Add 20 digit        */
/*                                          sequence number to ES */
/*                                          EQ, and EX formats.   */
/* $A5= D9925400     v5r3m0  021023 ROCH:     Add 20 count field  */
/*                                          to EQ and EX formats. */
/*                                     Added it because the count */
/*                                     and DB RRN field share the */
/*                                     same area when printing the*/
/*                                     DSPJRN entry. The RRN field*/
/*                                     is only 10 digits and      */
/*                                     probably will never grow   */
/*                                     larger.                    */
/* $A6= D99207       v5r3m0  030105 ROCH:  New data for EQ, ES,   */
/*                                     and EX journal entries. New*/
/*                                     entry EK                   */
/* $01= P9A29706     v5r3m0  030518 ROCH: Add inherit flag to     */
/*                                     entry EG                   */
/* $A7= D99951.1     v5r4m0  041015 ROCH:  New entry EE.          */
/* $03= P9B28231     v5r4m0f 060519 ROCH:  Add owner after the    */
/*      PSE24745                           text field for the EE  */
/*                                         entry.                 */
/* $04= P9B28231     v5r4m0f 060519 ROCH:  Add public authority   */
/*                                         information to the  EE */
/*                                         (create) journal entry */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWCJRNL_h
#define QWCJRNL_h

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(P128)
#endif

/******************************************************************/
/* Start of journal entry specific data structures for the        */
/* journal code E entry types.                                    */
/******************************************************************/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EA_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EA (Change - After image) entry type.   */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EA_Journal_Entry
{
    unsigned int Start_Position;    /* Starting position of change
                                       as specified or defaulted
                                       on CHGDTAARA (or as
                                       determined by the system if
                                       this is a minimized entry):
                                         1 if *DEC                */
    unsigned int Total_Length_Change; /* Total length of change
                                       as specified or defaulted
                                       on CHGDTAARA (or as
                                       determined by the system if
                                       this is a minimized entry) */
    unsigned int Number_Decimal_Positions; /* Number of decimal
                                       positions as specified or
                                       defaulted on CHGDTAARA:
                                         0 if not *DEC            */
    unsigned int Offset_Change_Value; /* Offset in bytes from the
                                       start of this structure to
                                       the change value field     */
    char         Data_Area_Type[10]; /* The data area type:
                                         '*DEC      '
                                         '*CHAR     '
                                         '*LGL      '             */
  /*char         Change_Value[];*/  /* The value of the bytes
                                       changed in the data area
                                       after the change - varying
                                       length                     */

} Qwc_EA_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EB_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EB (Change - Before image) entry type.  */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EB_Journal_Entry
{
    unsigned int Start_Position;    /* Starting position of change
                                       as specified or defaulted
                                       on CHGDTAARA (or as
                                       determined by the system if
                                       this is a minimized entry):
                                         1 if *DEC                */
    unsigned int Total_Length_Change; /* Total length of change
                                       as specified or defaulted
                                       on CHGDTAARA (or as
                                       determined by the system if
                                       this is a minimized entry) */
    unsigned int Number_Decimal_Positions; /* Number of decimal
                                       positions as specified or
                                       defaulted on CHGDTAARA:
                                         0 if not *DEC            */
    unsigned int Offset_Change_Value; /* Offset in bytes from the
                                       start of this structure to
                                       the change value field     */
    char         Data_Area_Type[10]; /* The data area type:
                                         '*DEC      '
                                         '*CHAR     '
                                         '*LGL      '             */
  /*char         Change_Value[];*/  /* The value of the bytes to
                                       be changed in the data area
                                       before the change - varying
                                       length                     */

} Qwc_EB_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EE_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EE (Data area created) entry type.      */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                            @A7A*/
/***   END OF STRUCTURE DESCRIPTION   *****************************/

typedef _Packed struct Qwc_EE_Journal_Entry
{
   char         Create_TOD[8];         /* Date data area created. */
   char         Data_Area_Name[10];    /* Data area name          */
   char         Data_Area_Library[10]; /* Data area library name  */
   char         Data_Area_Type[5];     /* Data area type.
                                          *CHAR - character
                                          *DEC - decimal
                                          *LGL - logical          */
   char         filler[3];             /* Filler to maintain
                                          alignment.              */
   unsigned int    Num_Elements;       /* One if the Data_Area_Type
                                          is *CHAR or *LGL. Two if
                                          Data_Area_Type is *DEC. */
   unsigned int    Length;             /* Created/Declared length */
   unsigned int    Fraction_Length;    /* Decimal positions.  Zero
                                          when Data_Area_Type is
                                          *CHAR or *DEC.          */
   unsigned int    Actual_Value_Length;/* Decimal:
                                          Length, in bytes, of the
                                          data in the journal entry
                                          field Value.
					  Character and Logical:
                                          Same as Length.         */
   char            Value[2000];        /* Data or Value           */
   char            Pub_Authority[10];  /* Public Authority
                                          *LIBCRTAUT
                                          *CHANGE
                                          *ALL
                                          *USE
                                          *EXCLUDE
                                          Name
                                          This is the authority
                                          value specified for the
                                          AUT keyword on the
                                          create command          */
   char            Text[50];           /* Description or Text     */
   char            Owner[10];          /* Object owner        @03A*/
                                       /* The following authority
                                          information pertains to
                                          *PUBLIC for the data area
                                          associated with this
                                          journal entry.          */
   char            Object_Existence;   /* 'Y' = object existence
                                                              @04A*/
   char            Object_Management;  /* 'Y' = object management
                                                              @04A*/
   char            Object_Operational; /* 'Y' = object operational
                                                              @04A*/
   char            Reserved;           /* Reserved            @04A*/
   char            Auth_List_Auth;     /* 'Y' = object secured
                                          by an authorization list.
                                          If this field is 'Y', the
                                          authorization list name
                                          can be found in field
                                          Resulting_Authority @04A*/
   char            Read_Auth;          /* 'Y' = read data right
                                                              @04A*/
   char            Add_Auth;           /* 'Y' = add data right
                                                              @04A*/
   char            Update_Auth;        /* 'Y' = update data right
                                                              @04A*/
   char            Delete_Auth;        /* 'Y' = delete data right
                                                              @04A*/
   char            Exclude_Auth;       /* 'Y' = *EXCLUDE or public
                                          has no authority to the
                                          object              @04A*/
   char            Execute_Auth;       /* 'Y' = execute data right
                                                              @04A*/
   char            Object_Alter;       /* 'Y' = object alter  @04A*/
   char            Object_Reference;   /* 'Y' = object reference
                                                              @04A*/
   char            Resulting_Authority[10]; /* The public authority
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
                                       found in the Pub_Authority
                                       field above and a value such
                                       as *USE could be found in
                                       this field and it could be
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

} Qwc_EE_Journal_Entry_t;


/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EG_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EG (Start journal for data area)        */
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
typedef _Packed struct Qwc_EG_Journal_Entry
{
    char         Omit_Journal_Entries; /* Identifies whether entries
                                       are to be omitted:
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
} Qwc_EG_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EK_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EK (change journaled object attribute)  */
/*                     entry type.                                */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EK_Journal_Entry
{
    char         Attribute_Changed; /* Identifies which journal
                                       attribute was changed:
                                         '1' = IMAGES         @A6A*/
    char         New_Attribute_Value[10]; /* The new value for the
                                         attribute that changed:
                                         '*BOTH     '
                                         '*AFTER    '         @A6A*/
} Qwc_EK_Journal_Entry_t;

/******************************************************************/
/* Values defined for the Attribute_Changed field of the          */
/* Qwc_EK_Journal_Entry structure.                            @A6A*/
/******************************************************************/
#define QWC_JA_ATTRIBUTE_IMAGES  '1'                       /* @A6A*/
#define QWC_JA_ATTRIBUTE_OMTJRNE '2'                       /* @A6A*/
#define QWC_JA_ATTRIBUTE_INHERIT '3'                      /*  @A6A*/

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EL_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EL (Data area restored) entry type.     */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EL_Journal_Entry
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

} Qwc_EL_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EM_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EM (Data area moved) entry type.        */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EM_Journal_Entry
{
    char         Old_Data_Area[10]; /* Old data area name         */
    char         Old_Data_Area_Library[10]; /* Old data area
                                       library name               */
    char         Reserved_1[10];    /* Blanks                     */
    char         New_Data_Area[10]; /* New data area name         */
    char         New_Data_Area_Library[10]; /* New data area
                                       library name               */
    char         Reserved_2[10];    /* Blanks                     */

} Qwc_EM_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EN_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EN (Data area renamed) entry type.      */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EN_Journal_Entry
{
    char         Old_Data_Area[10]; /* Old data area name         */
    char         Old_Data_Area_Library[10]; /* Old data area
                                       library name               */
    char         Reserved_1[10];    /* Blanks                     */
    char         New_Data_Area[10]; /* New data area name         */
    char         New_Data_Area_Library[10]; /* New data area
                                       library name               */
    char         Reserved_2[10];    /* Blanks                     */

} Qwc_EN_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EQ_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EQ (Data area changes applied) entry    */
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
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EQ_Journal_Entry
{
    char         First_Seq_Number[10]; /* Sequence number of the
                                       first entry actually
                                       applied
                                   The First_Seq_Number is set to
                                   "-1        " if the sequence
                                   number is larger than
                                   9,999,999,999. See field
                                   First_Seq_NumberL for the
                                   actual value               @A4C*/
    char         Last_Seq_Number[10]; /* Sequence number of the
                                       last entry actually
                                       applied
                                The Last_Seq_Number is set to
                                "-1        " if the sequence
                                number is larger than
                                9,999,999,999. See field
                                Last_Seq_NumberL for the
                                actual value.                 @A4C*/
    char         Start_Rcvr[10];    /* Name of the first receiver
                                       from which entries were
                                       applied                    */
    char         Start_Rcvr_Library[10]; /* Name of the library for
                                       the first receiver         */
    char         End_Rcvr[10];      /* Name of the last receiver
                                       from which entries were
                                       applied                    */
    char         End_Rcvr_Library[10]; /* Name of the library for
                                       the last receiver          */
    char         Start_Seq_Number[10]; /* Starting sequence number
                                       for the apply operation
                                  The Start_Seq_Number is set to
                                  "-1        " if the sequence
                                  number is larger than
                                  9,999,999,999. See field
                                  Start_Seq_NumberL for the
                                  actual value.               @A4C*/
    char         End_Seq_Number[10]; /* Ending sequence number
                                       for the apply operation
                                    The End_Seq_Number is set to
                                   "-1        " if the sequence
                                   number is larger than
                                   9,999,999,999. See field
                                   End_Seq_NumberL for the
                                   actual value.              @A4C*/
    char         Incomplete_Transaction[1]; /* Indicates whether
                                       an incomplete commit
                                       control transaction was
                                       not applied:
                                         '0' = Indicates that
                                               either CMTDBY(*NO)
                                               was specified or
                                               that CMTBDY(*YES)
                                               was specified and
                                               no partial commit
                                               transaction was
                                               found
                                         '1' = Indicates that
                                               CMTBDY(*YES)
                                               was specified and
                                               one or more
                                               partial commit
                                               transactions were
                                               found              */
    char         First_Seq_NumberL[20]; /* Sequence number of the
                                        first entry actually
                                        applied. This field will
                                        always contain a
                                        sequence number.     @A4A*/
    char         Last_Seq_NumberL[20]; /* Sequence number of the
                                        last entry actually
                                        applied. This field will
                                        always contain a
                                        sequence number.     @A4A*/
    char         Start_Seq_NumberL[20]; /* Starting sequence number
                                        for the apply operation
                                        This field will always
                                        contain a sequence
                                        number.              @A4A*/
    char         End_Seq_NumberL[20]; /* Ending sequence number
                                        for the apply operation
                                        This field will always
                                        contain a sequence
                                        number.              @A4A*/
    char         Applied_Entry_Count[20]; /* Count of number of
                                           entries applied.  @A5A*/
    char         Start_Seq_Partial_Remove[20]; /* Starting sequence
                                        number for any partial
                                        transactions that were
                                        removed.  This field will
                                        always be zero since data
                                        areas cannot have partial
                                        transactions.        @A6A*/
    char         End_Seq_Partial_Remove[20]; /* ending sequence
                                        number for any partial
                                        transactions that were
                                        removed.  This field will
                                        always be zero since data
                                        areas cannot have partial
                                        transactions.        @A6A*/

    char         Partial_Remove_Count[20]; /* Count of number of
                                         entries removed for
                                         partial transactions.
                                         This will always be
                                         zero                @A6A*/
    char Object_Deleted;     /* Idication that the object was
                                deleted during the apply operation
                                Y=yes,  N=No                 @A6A*/
    char Object_Created;     /* Indication that the object was
                                created during the apply operation
                                Y=yes,  N=No                 @A6A*/
    char Early_End;          /* Indication that the apply operation
                                was ended early for this object
                                Y=yes, N=No                  @A6A*/
    char Change_Not_Made;    /* Indication that a change was found
                                for this object after an early
                                end to the apply operation
                                Y=yes, N=No                  @A6A*/
    char End_Reason_Code;    /* Reason code for early end. See
                                message MCH4801 for the possible
                                values.                      @A6A*/
    char End_Message_Id[7];  /* Message id associated with an early
                                end to the apply operation   @A6A*/
    int Error_Condition;     /* Error condition code         @A6A*/
    char Partials_Remain;    /* Indication that partial transactions
                                remain for this object.
                                Y=Yes, N=No                  @A6A*/
    char Partials_Removed;   /* Indication that at least some
                                partial transactions were removed
                                during the apply operation
                                Y=Yes, N=No                  @A6A*/
} Qwc_EQ_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_ES_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, ES (Data area saved) entry type.        */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_ES_Journal_Entry
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
                                       checkpoint  processing was
                                       completed.  If not a save
                                       while active, this field has
                                       the same value as the
                                       start date field           */
    char         Save_Active_Time[6]; /* If this is a save while
                                       active, the time when
                                       checkpoint  processing was
                                       completed.  If not a save
                                       while active, this field has
                                       the same value as the
                                       start time field           */
    char         Primary_Rcvr[10];  /* The name of the receiver that
                                       contains the 'E EW' entry  */
    char         Primary_Rcvr_Library[10]; /* The receiver's
                                       library                    */
    char         Reserved[20];      /* Reserved                   */
    char         Seq_Number[10];    /* If this is a save while
                                       active, the sequence number
                                       of the matching 'E EW'
                                       entry.  If not a save while
                                       active, the sequence number
                                       of the current 'E ES'
                                       entry.
                                     The Seq_Number is set to
                                     "-1        " if the sequence
                                     number is larger than
                                     9,999,999,999. See field
                                     Seq_NumberL for the actual
                                     value.                   @A4C*/
    char         Reserved_1[16];    /* Reserved               @A4A*/
    char         Seq_NumberL[20];   /* If this is a save while
                                       active, the sequence number
                                       of the matching 'E EW'
                                       entry.  If not a save while
                                       active, the sequence number
                                       of the current 'E ES'
                                       entry. This field will
                                       will always contain the
                                       sequence number.       @A4A*/
    char Library_ASP_Device[10]; /* The ASP device on which the
                                 library that contains the
                                 Primary_Rcvr resides.        @A6A*/
} Qwc_ES_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EW_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EW (Start of save for data area - save  */
/*                     while active) entry type.                  */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EW_Journal_Entry
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

} Qwc_EW_Journal_Entry_t;

/***   START OF STRUCTURE DESCRIPTION   ***************************/
/*                                                                */
/* Structure Name   :  Qwc_EX_Journal_Entry                       */
/*                                                                */
/* Structure Purpose:  Structure is used to define the journal    */
/*                     entry specific data for the journal code   */
/*                     E, EX (Data area changes removed) entry    */
/*                     type.                                      */
/*                                                                */
/*                     This structure is only the entry specific  */
/*                     data within a larger journal entry layout. */
/*                                                                */
/*                     The count/relative record number field in  */
/*                     the fixed portion of the journal entry     */
/*                     contains the number of journal entries     */
/*                     removed.                                   */
/*                                                                */
/*                     The flag field in the fixed portion of the */
/*                     journal entry indicates the results of the */
/*                     remove operation:                          */
/*                       '0' = command completed normally         */
/*                       '1' = command completed abnormally       */
/*                                                                */
/***   END OF STRUCTURE DESCRIPTION   *****************************/
typedef _Packed struct Qwc_EX_Journal_Entry
{
    char         First_Seq_Number[10]; /* Sequence number of the
                                       first entry actually
                                       removed
                                   The First_Seq_Number is set to
                                   "-1        " if the sequence
                                   number is larger than
                                   9,999,999,999. See field
                                   First_Seq_NumberL for the
                                   actual value.              @A4C*/
    char         Last_Seq_Number[10]; /* Sequence number of the
                                       last entry actually
                                       removed
                                   The Last_Seq_Number is set to
                                   "-1        " if the sequence
                                   number is larger than
                                   9,999,999,999. See field
                                   Last_Seq_NumberL for the
                                   actual value.              @A4C*/
    char         Start_Rcvr[10];    /* Name of the first receiver
                                       from which entries were
                                       removed                    */
    char         Start_Rcvr_Library[10]; /* Name of the library for
                                       the first receiver         */
    char         End_Rcvr[10];      /* Name of the last receiver
                                       from which entries were
                                       removed                    */
    char         End_Rcvr_Library[10]; /* Name of the library for
                                       the last receiver          */
    char         Start_Seq_Number[10]; /* Starting sequence number
                                       for the remove operation
                                    The Start_Seq_Number is set to
                                    "-1        " if the sequence
                                    number is larger than
                                    9,999,999,999. See field
                                    Start_Seq_NumberL for the
                                    actual value.             @A4C*/
    char         End_Seq_Number[10]; /* Ending sequence number
                                       for the remove operation
                                     The End_Seq_Number is set to
                                     "-1        " if the sequence
                                     number is larger than
                                     9,999,999,999. See field
                                     End_Seq_NumberL for the
                                     actual value.            @A4C*/
    char         Incomplete_Transaction[1]; /* Indicates whether
                                       an incomplete commit
                                       control transaction was
                                       not removed:
                                         '0' = Indicates that
                                               either CMTDBY(*NO)
                                               was specified or
                                               that CMTBDY(*YES)
                                               was specified and
                                               no partial commit
                                               transaction was
                                               found
                                         '1' = Indicates that
                                               CMTBDY(*YES)
                                               was specified and
                                               one or more
                                               partial commit
                                               transactions were
                                               found.             */
    char         First_Seq_NumberL[20]; /* Sequence number of the
                                       first entry actually
                                       removed. This field will
                                       always contain a sequence
                                       number.               @A4A*/
    char         Last_Seq_NumberL[20]; /* Sequence number of the
                                       last entry actually
                                       removed.  This field will
                                       always contain a sequence
                                       number.               @A4A*/
    char         Start_Seq_NumberL[20]; /* Starting sequence number
                                       for the remove operation.
                                       This field will always
                                      contain a sequence number.
                                                             @A4A*/
    char         End_Seq_NumberL[20]; /* Ending sequence number
                                       for the remove operation
                                       This field will always
                                      contain a sequence number.
                                                             @A4A*/
    char         Removed_Entry_Count[20]; /* Count of number of
                                            entries removed. @A5A*/
    char         Start_Seq_Partial_Remove[20]; /* Starting sequence
                                        number for any partial
                                        transactions that were
                                        removed.  This field will
                                        always be zero since data
                                        areas cannot have partial
                                        transactions.        @A6A*/
    char         End_Seq_Partial_Remove[20]; /* ending sequence
                                        number for any partial
                                        transactions that were
                                        removed.  This field will
                                        always be zero since data
                                        areas cannot have partial
                                        transactions.        @A6A*/

    char         Partial_Remove_Count[20]; /* Count of number of
                                         entries removed for
                                         partial transactions.
                                         This will always be
                                         zero                @A6A*/
    char Object_Deleted;     /* Indication that the object was
                                deleted during the remove operation
                                Y=yes,  N=No                 @A6A*/
    char Object_Created;     /* Indication that the object was
                                created during the remove operation
                                Y=yes,  N=No                 @A6A*/
    char Early_End;          /* Indication that the remove operation
                                was ended early for this object
                                Y=yes, N=No                  @A6A*/
    char Change_Not_Made;    /* Indication that a change was found
                                for this object after an early
                                end to the remove operation
                                Y=yes, N=No                  @A6A*/
    char End_Reason_Code;    /* Reason code for early end. See
                                message MCH4801 for the possible
                                values.                      @A6A*/
    char End_Message_Id[7];  /* Message id associated with an early
                                end to the remove operation  @A6A*/
    int Error_Condition;     /* Error condition code         @A6A*/
    char Partials_Remain;    /* Indication that partial transactions
                                remain for this object.
                                Y=Yes, N=No                  @A6A*/
    char Partials_Removed;   /* Indication that at least some
                                partial transactions were removed
                                during the remove operation
                                Y=Yes, N=No                  @A6A*/
} Qwc_EX_Journal_Entry_t;

#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(pop)
#endif

#endif
