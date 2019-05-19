/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
 /* Header File Name: H/QDBJRNL                                    */
 /*                                                                */
 /* Descriptive Name: Database DDL Journal Entry Specific Data     */
 /*                                                                */
 /* 5722-SS1 (C) Copyright IBM Corp. 2004                          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Description: This stucture describes the entry specific data   */
 /*              for database DDL operations (the journal entry    */
 /*              types: D AC, D CG, D CT, D DC, D DT, D GC,D GO,   */
 /*              D GT, D RV, D TC, D TD, D TG, D, TQ, F DM, F MC). */
 /*                                                                */
 /*              These entries can be retrieved using the Retrieve */
 /*              Journal Entries (QjoRetrieveJournalEntries) API.  */
 /*              The entries can then be input to the Replay       */
 /*              Database Operation (QDBRPLAY) API.                */
 /*                                                                */
 /*              Some of these entries may be very long. In these  */
 /*              cases, the journal entry is marked incomplete.    */
 /*              When the incomplete flag is on, the Entry Specific*/
 /*              data length includes some amount of data and the  */
 /*              last 16 bytes is a teraspace pointer which points */
 /*              to the remainder of the entry specific data. For  */
 /*              exmaple, if the entry specific data length is 80, */
 /*              the teraspace pointer is in the last 16 bytes of  */
 /*              the entry specific data (at offset 64). For more  */
 /*              information see Use of Pointers within Entry      */
 /*              Specific Data in the Retrieve Journal Entries     */
 /*              (QjoRetrieveJournalEntries) API. QJOURNAL.H       */
 /*              contains the description of the Incomplete Flag   */
 /*              as well as the common journal entry information.  */
 /*                                                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: QdbJrnl_DDL0100_t                              */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9995100     5D40  040606 MJA:      New Include           */
 /* $A1= D9313900     5D40  050501 45HJAV:   ACTIVATE NOT LOGGED   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QDBJRNL_h
#define QDBJRNL_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif


/*******************************************************************/
/* Record structure for QDBJRNL DDL0100 format                     */
/*******************************************************************/
typedef _Packed struct QdbJrnl_DDL0100 {

    char DbJrnl_File_Name[10];    /* The name of the file          */
                                  /* associated with this DDL entry*/

    char DbJrnl_File_Lib[10];     /* The name of the file library  */
                                  /* associated with this DDL entry*/

    char DbJrnl_Member_Name[10];  /* The name of the file member   */
                                  /* associated with this DDL entry*/
                                  /* (contains blanks if this      */
                                  /* entry is not associated with  */
                                  /* a member operation)           */

    char DbJrnl_New_File_Name[10];/* The new name of the file      */
                                  /* if this is a rename file      */
                                  /* operation (also set for move  */
                                  /* file and rename member else   */
                                  /* contains blanks)              */

    char DbJrnl_New_File_Lib[10]; /* The new library name          */
                                  /* if this is a move file        */
                                  /* operation (also set for rename*/
                                  /* file and rename member else   */
                                  /* contains blanks)              */

    char DbJrnl_New_Member_Name[10];
                                  /* The new name of the member    */
                                  /* if this is a rename member    */
                                  /* operation (else blanks)       */

    char DbJrnl_Reserved1[12];    /* Reserved                      */

    int  DbJrnl_Apply_Length;     /* Length of the apply           */
                                  /* information (the first data   */
                                  /* in the internal data). This is*/
                                  /* also the length of the extra  */
                                  /* ESD data pointed to by the    */
                                  /* teraspace pointer if the      */
                                  /* Incomplete flag is on.        */

    char DbJrnl_Reserved2[32];    /* Reserved                      */

    char DbJrnl_Subtype;          /* Operation subtype. If the     */
                                  /* journal entry is CG, the      */
                                  /* following subtype values are  */
                                  /* returned:                     */
    /*                               0 = ALTER TABLE operation     */
    /*                               1 = CHGPF, CHGLF, or CHGSRCPF */
    /*                                   CL command                */
    /*                               2 = Miscellaneous change file */
    /*                                   operations                */
    /*                               3 = SQL DELETE FROM table     */
    /*                                   (without a WHERE clause)  */
    /*                                                             */
    /*                               If the journal entry is TG,   */
    /*                               the following subtype values  */
    /*                               are returned:                 */
    /*                               4 = Disable Trigger           */
    /*                               5 = Enable Trigger            */
    /*                               6 = Miscellaneous change      */
    /*                                   trigger operations        */
    /*                                                             */
    /*                               If the journal entry is CT or */
    /*                               MC, the following subtype     */
    /*                               values are returned:          */
    /*                               7 = Restore                   */
    /*                               8 = CPYF CRTFILE(*YES) or     */
    /*                                   CRTDUPOBJ                 */
    /*                               9 = Other Create              */
    /*                                                             */
    /*                               This field is not applicable  */
    /*                               if the entry type is not      */
    /*                               CG, CT, MC, or TG.            */

    char DbJrnl_Reserved3[3];     /* Reserved                      */

    short DbJrnl_Chg_Trg_Library_Len;
                                  /* The length of the trigger     */
                                  /* library name for a Change     */
                                  /* Trigger operation (TG).       */
                                  /* Contains 0 if the Change      */
                                  /* Trigger operation includes    */
                                  /* multiple triggers. This field */
                                  /* is not applicable if the entry*/
                                  /*  type is not TG.              */

    int  DbJrnl_Chg_Trg_Library_Offset;
                                  /* The offset to the trigger     */
                                  /* library name for a Change     */
                                  /* Trigger operation (TG) from   */
                                  /* the beginning of the journal  */
                                  /* entry specific data. Contains */
                                  /* hex zeros if the Change       */
                                  /* Trigger operation includes    */
                                  /* multiple triggers. This field */
                                  /* is not applicable if the entry*/
                                  /* type is not TG.               */

    short DbJrnl_Chg_Trg_Name_Len;/* The length of the trigger     */
                                  /* name for a Change Trigger     */
                                  /* operation (TG).               */
                                  /* Contains 0 if the Change      */
                                  /* Trigger operation includes    */
                                  /* multiple triggers. This field */
                                  /* is not applicable if the entry*/
                                  /*  type is not TG.              */

    int  DbJrnl_Chg_Trg_Name_Offset;
                                  /* The offset to the trigger     */
                                  /* name for a Change Trigger     */
                                  /* operation (TG) from the       */
                                  /* beginning of the journal      */
                                  /* entry specific data. Contains */
                                  /* hex zeros if the Change       */
                                  /* Trigger operation includes    */
                                  /* multiple triggers. This field */
                                  /* is not applicable if the entry*/
                                  /* type is not TG.               */

    /***************************************************************/
    /* The following fields only exist in journal entries          */
    /* produced from operations in release V5R4M0 and later        */
    /***************************************************************/
    char DbJrnl_Attr[10];         /* Reserved                      */
                                  /* OIR attribute of the object   */
                                  /* For example, PF, LF, etc.     */

    short DbJrnl_Number_Based;    /* Number of based on files of   */
                                  /* the logical file. This field  */
                                  /* is not applicable for journal */
                                  /* entries other than logical    */
                                  /* file CT entries.              */
    int DbJrnl_Based_Names_Offset;/* An offset to a 20 byte field  */
                                  /* consisting of a 10 byte file  */
                                  /* name followed by a 10 byte    */
                                  /* library name of the first     */
                                  /* based on file of the logical  */
                                  /* file from the beginning of the*/
                                  /* journal entry specific data.  */
                                  /* This field  is not applicable */
                                  /* for journal entries other than*/
                                  /* logical file CT entries.      */
    short DbJrnl_Based_Names_Next_Offset;
                                  /* Offset from the start of      */
                                  /* the prior based on file name  */
                                  /* to the next based on file name*/
    char DbJrnl_Not_Logged;       /* NOT LOGGED indicator.  Not    */
                                  /* applicable for journal entries*/
                                  /* other than CT and CG          */
    /*                               0 = NOT LOGGED was not        */
    /*                                   requested on either the   */
    /*                                   CREATE or ALTER operation */
    /*                               1 = NOT LOGGED request        */
    /*                               For a CT entry, journaling    */
    /*                               will be started for the       */
    /*                               members when the transaction  */
    /*                               is committed.                 */
    /*                                                             */
    /*                               For a CG entry, journaling    */
    /*                               was ended for the members and */
    /*                               will be restarted when the    */
    /*                               transaction is committed or   */
    /*                               rolled back.              @01A*/

    char DbJrnl_Reserved4[1];     /* Reserved                  @01C*/

    /*   QdbJrnl_Internal_Information[];*/
                                  /* Varying length internal system*/
                                  /* information                   */
} QdbJrnl_DDL0100_t;



#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif

