/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBRTVFD.h                                 */
 /*                                                                */
 /* Descriptive Name: Retrieve file description API.               */
 /*                                                                */
 /* Description: The Retrieve File Description (QDBRTVFD) API      */
 /*              allows the user to get complete and specific      */
 /*              information about a file on a local or remote     */
 /*              system.                                           */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List: Qdb_Rfd_Input_Parms_t                          */
 /*                 Qdb_Qdbfh_t                                    */
 /*                 Qdb_Qdbfphys_t                                 */
 /*                 Qdb_Qdbftrg_t                                  */
 /*                 Qdb_Qdbf_Constraint_t                          */
 /*                 Qdb_Qdbf_Keyn_t                                */
 /*                 Qdb_Qdbf_Riafk_Afkd_t                          */
 /*                 Qdb_Qdbf_Chk_Cst_t                             */
 /*                 Qdb_Qdbfdtalnk_t                               */
 /*                 Qdb_Qdbfdlcole_t                               */
 /*                 Qdb_Qdbfdrae_t                                 */
 /*                 Qdb_Qdbfdrtb_t                                 */
 /*                 Qdb_Qdbflogl_t                                 */
 /*                 Qdb_Qdbfv_t                                    */
 /*                 Qdb_Qdbfj_t                                    */
 /*                 Qdb_Qdbfjfld_t                                 */
 /*                 Qdb_Qdbfjdup_t                                 */
 /*                 Qdb_Qdbfacs_t                                  */
 /*                 Qdb_Qdbfdic_t                                  */
 /*                 Qdb_Qdbflngn_t                                 */
 /*                 Qdb_Qdbfb_t                                    */
 /*                 Qdb_Qdbfss_t                                   */
 /*                 Qdb_Qdbfsp_t                                   */
 /*                 Qdb_Qdbfk_t                                    */
 /*                 Qdb_Qdbf_dis_t                                 */
 /*                 Qdb_Qdbfjoal_t                                 */
 /*                 Qdb_Qddfmt_t                                   */
 /*                 Qdb_Qddffld_t                                  */
 /*                 Qdb_Qddfrefi_t                                 */
 /*                 Qdb_Qddfedcw_t                                 */
 /*                 Qdb_Qddfdfne_t                                 */
 /*                 Qdb_Qddfcolh_t                                 */
 /*                 Qdb_Qddfvchk_t                                 */
 /*                 Qdb_Qddfvcst_t                                 */
 /*                 Qdb_Qddfvcpr_t                                 */
 /*                 Qdb_Qddfcpli_t                                 */
 /*                 Qdb_Qddfftxt_t                                 */
 /*                 Qdb_Qddfalis_t                                 */
 /*                 Qdb_Qddfdft_t                                  */
 /*                 Qdb_Qddfdicf_t                                 */
 /*                 Qdb_Qddfdvof_t                                 */
 /*                 Qdb_Qddfdvoc_t                                 */
 /*                 Qdb_Qddfdvo_t                                  */
 /*                 Qdb_Qddfderv_t                                 */
 /*                 Qdb_Qddfdvst_t                                 */
 /*                 Qdb_Qddfdvtx_t                                 */
 /*                 Qdb_Qddfxl_t                                   */
 /*                 Qdb_qddfcsl_t                                  */
 /*                 Qdb_Qddfdic_t                                  */
 /*                 Qdb_Qdbwhrec_t                                 */
 /*                 Qdb_Qdbwh_t                                    */
 /*                 Qdb_Qdbwhkattr_t                               */
 /*                 Qdb_Qdbwhkatt1_t                               */
 /*                 Qdb_Qdbwhkey_t                                 */
 /*                 Qdb_Qbftrg_Head                                */
 /*                 Qdb_Qdbftrg_Def_Head                           */
 /*                 Qdb_Qdbftrg_Name_Area                          */
 /*                 Qdb_Qdbftrg_Path_Area                          */
 /*                 Qdb_Qdbftrg_Updc_Area                          */
 /*                 Qdb_Qdbftrg_Updc_List_Ent                      */
 /*                 Qdb_Qdbftrg_When_Area                          */
 /*                 Qdb_Qdbftrg_When_Array                         */
 /*                 Qdb_Qdbftrg_Body_Area                          */
 /*                 Qdb_Qdbftrg_Body_Array                         */
 /*                 Qdb_Qdbftrg_Depo_Area                          */
 /*                 Qdb_Qdbftrg_Depo_Array                         */
 /*                 Qdb_Qdbftrg_Trns_Area                          */
 /*                 Qdb_Qdbftrg_Stmt_Area                          */
 /*                 Qdb_Qdbftrg_Long_Area                          */
 /*                 Qdb_Qdbfmqtd_Head                              */
 /*                 Qdb_Qdbfmqtd                                   */
 /*                 Qdb_Qdbfvflgs                                  */
 /*                 Qdb_Qdbfsqpt_Head                              */
 /*                 Qdb_Qdbfsqpt_Part                              */
 /*                 Qdb_Qdbfsqpt_Range                             */
 /*                 Qdb_Qdbfsqpt_Head_Hash                         */
 /*                 Qdb_Qdbfsqpt_Hash                              */
 /*                                                                */
 /* Function Prototype List: QDBRTVFD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   DEPT/PGMR CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940102 45H R P:  New Include           */
 /* $01= PTH01678     3P10  940818 45H JRA:  Correct ALWNULL flag  */
 /*                                            definition.         */
 /* $A2= D9196200     3D60  941104 45H JRA:  Large Access Path     */
 /*                                            support.            */
 /* $A3= D2871000     3D60  941104 45H JRA:  UCS-2 support.        */
 /* $02= P3979527     3P10  950119 45H JRA:  Correct field text    */
 /*                                            definition.         */
 /* $03= PSA42574     3P10  950411 45H JRA:  Correct ACST/SST      */
 /*                                            definition and      */
 /*                                            separate Record ID  */
 /*                                            Code array.         */
 /* $04= P            3D60  950630 45H PSN: Add Default for Date,  */
 /*                                         Time, Timestamp of     */
 /*                                         CURRENT_xxxx           */
 /* $A4= D9410100     3D70  950713 45H KRB:  Distributed File      */
 /*                                            support.            */
 /* $05= P3617238     3D70  960430 45H KRS: Add missing operands   */
 /*                                         to derived operator    */
 /*                                         comments.              */
 /* $06= P3629488     4D10  960930 45H KLW: Add missing comments   */
 /*                                         for concatenated       */
 /*                                         fields and number of   */
 /*                                         digits.                */
 /* $A5= D28540       4D20  970127 45H randy: Add Check Constraint */
 /*                                           support              */
 /* $A6= D9495801     4D20  970215 45H KRS: UCS-2 sort sequence    */
 /* $07= P3640846     4D20  970227 45H KRS: Fix comment.           */
 /* $08= P3651248     4D20  970729 RAMLER : Add v4r2 QQ support    */
 /*                                         CAST, CASE             */
 /* $09= P3652103     4D20  970811 45H KRS: Add "Allow Repeated    */
 /*                                         Change" flag to        */
 /*                                         trigger section.       */
 /* $A7= d9491500     4D30  971215 45H DMK: Add EVI support.       */
 /* $A8= P3663202     4D30  980302 SBURRICH: Add comment for V4R3  */
 /*                                          QQ FLOOR support.     */
 /* $A9= D9586707     4D40  980713 45H KRS: Add THDSAFE and        */
 /*                                         MLTTHDACN support.     */
 /* $AA= D9703200     4D40  980713 45H MWT: Complex Objects.       */
 /* $AB= P3684590     4D40  981117 45H KRS: Add Qddfsqfd.          */
 /* $AC= P3684760     4D40  981209 Bestgen: UDF support.           */
 /* $AD= D9759300     5D10  990801 45H RKS: Triggers               */
 /* $AE= P9934931     5D10  001010 45H RKS: Teraspace State II     */
 /* $AF= P9938576     5D10  001129 45H RKS: Fix comment            */
 /* $AG= D9844202     5D20  010530 45H RKS: Identity Columns       */
 /* $AH= D9899500     5D20  010625 VPZ MJA: Longer alias names     */
 /* $AI= D9913201     5D30  020613 45H KRS: SQL materialized query */
 /*                                         tables.                */
 /* $AJ= D9923300     5D30  021010 45H MWT: SQL Partitioned Table  */
 /* $AK= D9922600     5D30  030107 45H RLN: Binary Character       */
 /*                                         support.               */
 /* $AL= D9924906     5D30  030226 45H KRS: UTF8.                  */
 /* $0A= P9A32647     5D30  030616 45H KRS: Return Qddfflgs in     */
 /*                                         field header.          */
 /* $0B= P9A35914     5D30  030729 45H KRS: Fix values for ROWID   */
 /*                                         and ID generate fields.*/
 /* $0C= P9A42662     5D30  031010 ISA MJA: Add info for SQL view  */
 /*                                         text.                  */
 /* $0D= D9977201     5D40  031206 45H BAC: Instead OF triggers    */
 /* $AM= D9307400     5D40  041206 45H MWT: Added for V5R4.        */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QDBRTVFD_h
   #define QDBRTVFD_h


#ifndef _decimal_h                  /* Added-moved.08/20/01   @AGA*/
     #define _decimal_h 1
     #include <decimal.h>
#endif


/*********************************************************************/
/* Prototypes for calling Retrieve File Description API QDBRTVFD     */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBRTVFD,OS,nowiden)
#else
   extern "OS" {
#endif

#if (__OS400_TGTVRM__>=510)         /*                           @AEA*/
     #pragma datamodel(P128)        /*                           @AEA*/
#endif                              /*                           @AEA*/


void QDBRTVFD(void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              void *,               /* Returned file and library name*/
              char *,               /* Format name                   */
              void *,               /* File and library name         */
              char *,               /* Record format name            */
              char *,               /* Overrride processing          */
              char *,               /* System                        */
              char *,               /* Format type                   */
              void *);              /* Error code                    */





/*******************************************************************/
/* Input structure for QDBRTVFD API header section                 */
/*******************************************************************/

typedef _Packed struct
                Qdb_Rfd_Input_Parms {
                /*char Receiver_Var[];*/         /* varying length */
                  long Length_Of_Receiver_Var;
                  char Returned_File_And_Library[20];
                  char Format_Name[8];
                  char File_And_Library_Name[20];
                  char Record_Format_Name[10];
                  char File_Override_Flag[1];
                  char System[10];
                  char Format_Type[10];
                /*char Error_Code[];*/           /* varying length */
              } Qdb_Rfd_Input_Parms_t;

    /*****************************************************************/
    /*  Record Structure for QDBRTVFD FILD0100 format                */
    /*****************************************************************/
/*********************************************************************/
/*                      FDT HEADER DECLARATIONS                      */
/*********************************************************************/
    /*  The following typedef structs are pointed to by the header   */
    /*  typedef struct.  They are defined outside of the header for  */
    /*  LAN/DE compatibility and to ensure alignment on a 16-byte    */
    /*  boundary.                                                    */
    /*****************************************************************/

    /**  Attribute Bytes  ********************************************/
     typedef _Packed struct
                     Qdb_Qdbfhflg { /* Attribute Bytes               */

          unsigned  Reserved_1:2;   /* Reserved.                     */


          unsigned  Qdbfhfpl:1;     /* Type Of File
                                       0 = The file is a physical
                                           Database file.
                                       1 = The file is a logical
                                           Database file.            */

          unsigned  Reserved_2:1;   /* Reserved.                     */

          unsigned  Qdbfhfsu:1;     /* File Type (FILETYPE)
                                       0 = The file is a data file
                                           (*DATA).
                                       1 = The file is a source
                                           file (*SRC).              */

          unsigned  Reserved_3:1;   /* Reserved.                     */

          unsigned  Qdbfhfky:1;     /* Access Path
                                       0 = The file has an arrival
                                           sequence access path
                                       1 = The file has a keyed
                                           sequence access path      */

          unsigned  Reserved_4:1;   /* Reserved.                     */

          unsigned  Qdbfhflc:1;     /* Record Format Level Check
                                       (LVLCHK)
                                       0 = The level identifiers of
                                           the record formats are
                                           NOT checked when the file
                                           is opened (*NO).
                                       1 = The level identifiers of
                                           the record formats are
                                           checked when the file
                                           is opened (*YES).         */

          unsigned  Qdbfkfso:1;     /* Select/Omit
                                       0 = The file is NOT a
                                           select/omit logical file.
                                       1 = The file is a select/omit
                                           logical file.             */

          unsigned  Reserved_5:1;   /* Reserved.                     */

          unsigned  Qdbfhshr:1;     /* Reserved.                     */

          unsigned  Reserved_6:2;   /* Reserved.                     */


          unsigned  Qdbfigcd:1;     /* Double-Byte Character Set
                                       (DBCS) and/or Graphic Data
                                       0 = The record format(s) for
                                           the file does NOT contain
                                           any DBCS or Graphic data
                                           fields.
                                       1 = The record format(s) for
                                           the file does contain
                                           DBCS or Graphic data
                                           fields.                   */

          unsigned  Qdbfigcl:1;     /* Double-Byte Character Set
                                       (DBCS) and/or Graphic
                                       Literals
                                       0 = The file definition for
                                           the file does NOT contain
                                           DBCS or Graphic literals.
                                       1 = The file definition for
                                           the file does contain
                                           DBCS or Graphic literals. */
        } Qdb_Qdbfhflg_t;

    /**  Keyed Sequence Access Path Attributes  **********************/
     typedef _Packed struct
                     Qdb_Qdbfkflg { /* Keyed Sequence Access Path
                                       Attributes                    */

            unsigned  Reserved_8:1; /* Reserved.                     */

            unsigned  Qdbfkfcs:1;   /* Alternative Collating
                                       Sequence (ALTSEQ)
                                       0 = No alternative collating
                                           sequence table for the
                                           file.
                                       1 = An alternative collating
                                           sequence table was
                                           specified for the file.   */

            unsigned  Reserved_9:4; /* Reserved.                     */

            unsigned  Qdbfkfrc:1;   /* Force Keyed Access Path
                                       (FRCACCPTH)
                                       0 = The access path and
                                           changed records are NOT
                                           forced to auxiliary
                                           storage when the access
                                           path is changed (*NO).
                                       1 = The access path and
                                           changed records are
                                           forced to auxiliary
                                           storage when the access
                                           path is changed (*YES).   */

           unsigned  Qdbfkflt:1;    /* Floating Point Key Indicator
                                       0 = The access path for the
                                           file contains NO floating
                                           point keys.
                                       1 = The access path for the
                                           file contains floating
                                           point keys.               */
         } Qdb_Qdbfkflg_t;

    /**  Keyed Sequence Access Path Description  *********************/
     typedef _Packed struct
                    Qdb_Qdbfkdat {  /* Keyed Sequence Access Path
                                       Description
                                       If this file has an arrival
                                       sequence access path, these
                                       fields are NOT applicable.    */

          short      Qdbfknum;      /* Number Of Key Fields
                                       1-120 = Number of key fields
                                               for the file.         */

          short      Qdbfkmxl;      /* Maximum Key Length
                                       1-2000 = Maximum length of
                                                the key for the file.*/

          Qdb_Qdbfkflg_t Qdbfkflg;  /* Keyed Sequence Access Path    */

          char       Qdbfkfdm;      /* Access Path Maintenance
                                       (MAINT)
                                       'I' = Immediate maintenance
                                             (*IMMED).
                                       'D' = Delayed maintenance
                                             (*DLY).
                                       'R' = Rebuild maintenance
                                             (*REBLD).               */

          char       Reserved_10[8];/* Reserved.                     */

        } Qdb_Qdbfkdat_t;

    /**  Additional Attribute Flags  *********************************/
     typedef _Packed struct
                    Qdb_Qaaf  {     /* Additional Attribute Flags    */

          unsigned  Reserved_12:7;  /* Reserved.                     */

          unsigned  Qdbfpgmd:1;     /* Program Described File
                                       Indicator
                                       0 = The file is an externally
                                           described file.
                                       1 = The file is a program
                                           described file.           */

        } Qdb_Qaaf_t;

    /**  Additional Attribute Flags  *********************************/
     typedef _Packed struct
                    Qdb_Qdbfhfl2 {  /* Additional Attribute Flags    */

          unsigned  Qdbfjnap:1;     /* Access Path Journaled
                                       0 = The files access path(s)
                                           is NOT journaled.
                                       1 = The files access path(s)
                                           is journaled.             */

                                    /* File Capability Attributes    */

          unsigned  Reserved_13:1;  /* Reserved.                     */

                                    /* File Capability Flags         */

          unsigned  Qdbfrdcp:1;     /* Allow Read Operation
                                       0 = Records are allowed to
                                           be read from the file.
                                       1 = Records are NOT allowed
                                           to be read from the file. */

          unsigned  Qdbfwtcp:1;     /* Allow Write Operation
                                       0 = Records are allowed to
                                           be written to the file.
                                       1 = Records are NOT allowed
                                           to be written to the
                                           file.                     */

          unsigned  Qdbfupcp:1;     /* Allow Update Operation
                                       (ALWUPD)
                                       0 = Records are allowed to
                                           be updated in the file
                                           (*YES).
                                       1 = Records are NOT allowed
                                           to be updated in the
                                           file (*NO).               */

          unsigned  Qdbfdlcp:1;     /* Allow Delete Operation
                                       (ALWDLT)
                                       0 = Records are allowed to
                                           be deleted from the file
                                           (*YES).
                                       1 = Records are NOT allowed
                                           to be deleted from the
                                           file (*NO).               */

          unsigned  Reserved_14:9;  /* Reserved.                     */

          unsigned  Qdbfkfnd:1;     /* Null Values Cause Duplicates
                                       Indicator (UNIQUE)
                                       0 = Null values do cause
                                           duplicate keys in the
                                           files access path(s)
                                           (*INCNULL).
                                       1 = Null values do NOT cause
                                           duplicate keys in the
                                           files access path(s)
                                           (*EXCNULL).
                                       Only valid if Qdbfpact is
                                       equal to 'KU'.                */

        } Qdb_Qdbfhfl2_t;

    /**  Additional Attribute Flags  *********************************/
     typedef _Packed struct
                      Qdb_Qaaf2 {   /* Additional Attribute Flags    */

          unsigned  Qdbfhmcs:1;     /* Multiple Coded Character Set
                                       Identifier Indicator (CCSID).
                                       0 = The file has only one
                                           CCSID for all of its
                                           input and output
                                           character type fields.
                                       1 = The file has more than
                                           one CCSID for all of its
                                           input and output
                                           character type fields.
                                       If the file has NO character
                                       type fields in its record
                                       format(s), this bit will be
                                       off.                          */

          unsigned  Reserved_15:1;  /* Reserved.                     */

          unsigned  Qdbfknll:1;     /* Allow Null Value Key
                                       Indicator (ALWNULL)
                                       0 = The access path for the
                                           file contains NO allow
                                           null value keys.
                                       1 = The access path for the
                                           file contains allow null
                                           value keys.               */

          unsigned  Qdbfnfld:1;     /* Allow Null Value Data
                                       (ALWNULL)
                                       0 = The record format(s) for
                                           the file does NOT contain
                                           any allow null value
                                           fields.
                                       1 = The record format(s) for
                                           the file does contain
                                           allow null value fields.  */

          unsigned  Qdbfvfld:1;     /* Variable Length Data (VARLEN)
                                       0 = The record format(s) for
                                           the file does NOT contain
                                           any variable length
                                           fields.
                                       1 = The record format(s) for
                                           the file does contain
                                           variable length fields.   */

          unsigned  Qdbftfld:1;     /* Date/Time/Timestamp Data
                                       0 = The record format(s) for
                                           the file does NOT contain
                                           any date, time, or
                                           timestamp fields.
                                       1 = The record format(s) for
                                           the file does contain
                                           a date, time, or
                                           timestamp fields.         */

          unsigned  Qdbfgrph:1;     /* Graphic Data
                                       0 = The record format(s) for
                                           the file does NOT contain
                                           any graphic fields.
                                       1 = The record format(s) for
                                           the file does contain
                                           graphic fields.           */

          unsigned  Qdbfpkey:1;     /* Primary Key
                                       0 = The access path for the
                                           file is NOT a primary key.
                                           any graphic fields.
                                       1 = The access path for the
                                           file is a primary key.
                                                                     */


          unsigned  Qdbfunqc:1;     /* Unique Constraint
                                       Indicator (ALWNULL)
                                       0 = The access path for the
                                           file is NOT a unique
                                           constraint.
                                       1 = The access path for the
                                           file is a unique
                                           constraint.               */

          unsigned  Reserved_118:2; /* Reserved.                     */

          unsigned  Qdbfapsz:1;     /* Access Path Size(ACCPTHSIZ).
                                       0 = All access paths for the
                                           file will be allowed to
                                           occupy a maximum of 4GB
                                           of auxillary storage.
                                       1 = All access paths for the
                                           file will be allowed to
                                           occupy a maximum of 1TB
                                           of auxillary storage.     */

          unsigned  Qdbfdisf:1;     /* File is distributed indicator.
                                       0 = File is not a distributed
                                           file.
                                       1 = File is a distributed file.
                                                                     */
          unsigned  Reserved_119:3; /* Reserved.                     */

         } Qdb_Qaaf2_t;



    /**  Complex Object Flags.       *********************************/
     typedef _Packed struct
                      Qdb_Qdbfnbit { /* Additional Attribute Flags   */

          unsigned  Qdbfhudt:1;      /* User Defined Types in file.
                                       0 = The file does not have
                                           any UDTs.
                                       1 = The file has fields with
                                           UDTs.                     */
          unsigned  Qdbfhlob:1;     /* Large Objects fields in file.
                                       0 = The file does not have
                                           any LOBs.
                                       1 = The file has fields with
                                           LOBs.                     */
          unsigned  Qdbfhdtl:1;     /* Datalink fields in file.
                                       0 = The file does not have
                                           any datalinks.
                                       1 = The file has fields with
                                           datalinks.                */
          unsigned  Qdbfhudf:1;     /* User Defined Functions in file.
                                       0 = The file does not have
                                           any UDFs.
                                       1 = The file has UDFs.
                                                                     */
          unsigned  Qdbfhlon:1;     /* Datalink fields in the file
                                       with FILE LINK CONTROL.
                                       0 = The file does not have
                                           datalink fields with
                                           FILE LINK CONTROL.
                                       1 = The file has datalink fields
                                           with FILE LINK CONTROL.   */
          unsigned  Qdbfhlop:1;     /* Logical file without any LOB
                                       fields, but the based on file
                                       has LOB fields.
                                       0 = The based on file does
                                           not have LOB fields.
                                       1 = The based on file has LOB
                                           fields.                   */
          unsigned  Qdbfhdll:1;     /* Logical file without any datalink
                                       fields, but the based on file
                                       has LOB fields.
                                       0 = The based on file does
                                           not have datalink fields.
                                       1 = The based on file has
                                           datalink fields.          */
          unsigned  Qdbfsqlvol:1;   /* SQL Volatile Table Indicator  */
                                    /* 0 = The file is NOT an SQL    */
                                    /*     volatile table.           */
                                    /* 1 = The file is an SQL        */
                                    /*     volatile table.       @AMC*/
         } Qdb_Qdbfnbit_t;


    /**  File Text Description  **************************************/
     typedef _Packed struct
                     Qdb_Qdbfhtx {  /* File Text Description         */

          char       Reserved_18[2];/* Reserved.                     */

          char       Qdbfhtxt[50];  /* Text Description (TEXT)       */

        } Qdb_Qdbfhtx_t;

    /**  Source File Fields  *****************************************/
     typedef _Packed struct
                     Qdb_Qdbfsrc {  /* Source File Fields
                                       Must be X'00's if there is
                                       NO source file information.   */

          char       Qdbfsrcf[10];  /* Source File Name              */

          char       Qdbfsrcm[10];  /* Source File Member Name       */

          char       Qdbfsrcl[10];  /* Source File Library Name      */

        } Qdb_Qdbfsrc_t;

    /**  Sort Sequence Table Flags  **********************************/
     typedef _Packed struct
                    Qdb_Qdbfnlsb {  /* Flags                         */

           unsigned  Qdbfsscs:3;    /* Sort Sequence Table
                                       (SRTSEQ) Indicators
                                       B'000' = No sort sequence
                                                table for the file.
                                                However, an
                                                alternate collating
                                                sequence table was
                                                specified for the
                                                file.
                                       B'010' = No sort sequence
                                                table is used for the
                                                file, and the hexa-
                                                decimal values of the
                                                characters will be
                                                used to determine the
                                                sort sequence (*HEX).
                                        B'100' = A sort sequence
                                                 table was specified
                                                 for the file.       */

           unsigned Reserved_103:5; /* Reserved                      */

         } Qdb_Qdbfnlsb_t;


    /**  Sort Sequence Table  ****************************************/
     typedef _Packed struct
                    Qdb_Qdbfssfp{   /* Sort Sequence Table           */

           Qdb_Qdbfnlsb_t  Qdbfnlsb;  /* NLS Flags                   */

           char    Qdbflang[3];     /* Language Identifier (LANGID)  */

           char    Qdbfcnty[2];     /* Country Identifier (CNTRYID)  */

         } Qdb_Qdbfssfp_t;

    /**  Identity/Rowid Flags.       *********************************/
     typedef _Packed struct
                      Qdb_Qdbfidfl { /* Additional Attribute Flags   */

          unsigned  Reserved_121:5;  /* Reserved.                    */

          unsigned  Qdbf_File_Has_Identity_Column:1;
                                    /* Identity Column in the file.
                                       0 = The file does not have
                                           an Identity Column.
                                       1 = The file has an Identity
                                           column.                   */
          unsigned  Qdbf_File_Has_Rowid:1;
                                    /* Rowid in the file.
                                       0 = The file does not have
                                           a Rowid Column.
                                       1 = The file has a Rowid
                                           column.                   */
          unsigned  Reserved_122:9; /* Reserved.                     */

         } Qdb_Qdbfidfl_t;

    /*****************************************************************/
    /*                                                               */
    /* File Definition Template (FDT) Header                         */
    /*                                                               */
    /*****************************************************************/
    /* This section is always located at the beginning of the        */
    /* returned data.                                                */
    /*****************************************************************/

     typedef _Packed struct
              Qdb_Qdbfh {           /* Header information - The
                                       FDT starts here               */

        long       Qdbfyret;        /* Bytes returned - The length
                                       of the data returned          */

        long       Qdbfyavl;        /* Bytes available - The number
                                       of bytes provided for the
                                       file definition template
                                       data                          */

        Qdb_Qdbfhflg_t   Qdbfhflg;  /* Attribute Bytes               */

        char       Reserved_7[4];   /* Reserved.                     */

        short      Qdbflbnum;       /* Number Of Data Members
                                       1 = Externally described
                                           physical file, or program
                                           described physical file
                                           that is NOT linked to a
                                           Data Dictionary.
                                       1-32 = Number of Data
                                              Dictionary record
                                              formats for a program
                                              described physical
                                              file that is linked to
                                              a Data Dictionary.
                                       1-256= Number of based on
                                              physical files for
                                              a logical file.        */

        Qdb_Qdbfkdat_t   Qdbfkdat;  /* Keyed Sequence Access Path    */

        char       Qdbfhaut[10];    /* Public Authority (AUT)
                                       '*CHANGE   ' = Public change
                                                      authority.
                                       '*ALL      ' = Public all
                                                      authority.
                                       '*USE      ' = Public use
                                                      authority.
                                       '*EXCLUDE  ' = Public exclude
                                                      authority.
                                       'authorization-list-name'
                                                    = Name of the
                                                      authorization
                                                      list whose
                                                      authority is
                                                      used for the
                                                      file.
                                       This is the original public
                                       authority that the file was
                                       created with, NOT the current
                                       public authority for the file.*/

        char       Qdbfhupl;        /* Preferred Storage Unit (UNIT)
                                       X'00' = The storage space for
                                               the file and its
                                               members can be
                                               allocated on any
                                               available auxiliary
                                               storage unit (*ANY).
                                       X'01'-X'FF' = The unit
                                                     identifier (a
                                                     number from 1
                                                     to 255 assigned
                                                     when the disk
                                                     device is
                                                     configured) of
                                                     a specific
                                                     auxiliary
                                                     storage unit on
                                                     the system.     */

        short      Qdbfhmxm;        /* Maximum Members (MAXMBRS)
                                       0 = No maximum is specified
                                           for the number of members,
                                           the system maximum of
                                           32,767 members is used
                                           (*NOMAX).
                                       1-32,767 = The value for the
                                                  maximum number of
                                                  members that the
                                                  file can have
                                                  (maximum-members). */

        short      Qdbfwtfi;        /* Maximum File Wait Time
                                       (WAITFILE)
                                       -1 = The default wait time
                                            specified in the class
                                            description is used as
                                            the wait time for the
                                            file (*CLS).
                                       0 = A program does NOT wait
                                           for the file, an
                                           immediate allocation of
                                           the file is required
                                           (*IMMED).
                                       1-32,767 = The number of
                                                  seconds that a
                                                  program waits for
                                                  the file (number-
                                                  of-seconds).       */

        short      Qdbfhfrt;        /* Records To Force A Write
                                       (FRCRATIO)
                                       0 = There is NO force write
                                           ratio, the system
                                           determines when the
                                           records are written to
                                           auxiliary storage (*NONE).
                                       1-32,767 = The number of
                                                  inserted, updated,
                                                  or deleted records
                                                  that are processed
                                                  before they are
                                                  explicitly forced
                                                  to auxiliary
                                                  storage (number-
                                                  of-records-before-
                                                  force).            */

        short      Qdbfhmnum;       /* Number Of Members
                                       0-32,767 = The current number
                                                  of members for the
                                                  file.              */
        short      Qdbfapsize;      /* Access path page size.    @AMA*/
                                    /* -1 = NA, 4G Access path.      */
                                    /*  0 = Key length page size.    */
                                    /* 8,16,32,64,128,256,512=Ksize  */
        char       Reserved_11[7];  /* Reserved.                     */

        short      Qdbfbrwt;        /* Maximum Record Wait Time
                                       (WAITRCD)
                                       -2 = The wait time is the
                                            maximum allowed by the
                                            system, 32,767 seconds
                                            (*NOMAX).
                                       -1 = A program does NOT wait
                                            for the record, an
                                            immediate allocation of
                                            the record is required
                                            (*IMMED).
                                       1-32,767 = The number of
                                                  seconds that a
                                                  program waits for
                                                  the record
                                                  (number-of-
                                                  seconds).          */

        Qdb_Qaaf_t     Qaaf;        /* Additional Attribute Flags    */

        short      Qdbffmtnum;      /* Total Number Of Record
                                       Formats
                                       1-32 = Number of record
                                              formats for the file.  */

        Qdb_Qdbfhfl2_t   Qdbfhfl2;  /* Additional Attribute Flags    */

        short      Qdbfvrm;         /* First Supported
                                       Version Release Modification
                                       Level
                                       X'0000' = Pre-Version 2
                                                 Release 1
                                                 Modification 0 file.
                                       X'1500' = Version 2 Release 1
                                                 Modification 0,
                                                 V2R1M0, file.
                                       X'1501' = Version 2 Release 1
                                                 Modification 1,
                                                 V2R1M1, file.
                                       X'1600' = Version 2 Release 2
                                                 Modification 0,
                                                 V2R2M0, file.
                                       X'1700' = Version 2 Release 3
                                                 Modification 0,
                                                 V2R3M0, file.
                                       X'1F00' = Version 3 Release 1
                                                 Modification 0,
                                                 V3R1M0, file.
                                       X'2000' = Version 3 Release 2
                                                 Modification 0,
                                                 V3R2M0, file.
                                       X'2400' = Version 3 Release 6
                                                 Modification 0,
                                                 V3R6M0, file.
                                       X'2500' = Version 3 Release 7
                                                 Modification 0,
                                                 V3R7M0, file.
                                       X'2900' = Version 4 Release 1
                                                 Modification 0,
                                                 V4R1M0, file.
                                       X'2A00' = Version 4 Release 2
                                                 Modification 0,
                                                 V4R2M0, file.
                                       X'2B00' = Version 4 Release 3
                                                 Modification 0,
                                                 V4R3M0, file.
                                       X'2C00' = Version 4 Release 4
                                                 Modification 0,
                                                 V4R4M0, file.
                                       New Database support is used
                                       in the file which will
                                       prevent it from being saved
                                       and restored to a prior
                                       Version Release and
                                       Modification level.           */

        Qdb_Qaaf2_t       Qaaf2;    /* Additional Attribute Flags    */

        char       Qdbfhcrt[13];    /* File Level Identifier
                                       The date of the file in
                                       internal standard format
                                       (ISF), CYYMMDDHHMMSS.         */

        Qdb_Qdbfhtx_t     Qdbfhtx;  /* File Text Description         */

        char       Reserved_19[13]; /* Reserved                      */

        Qdb_Qdbfsrc_t     Qdbfsrc;  /* Source File Fields            */

        char       Qdbfkrcv;        /* Access Path Recovery
                                       (RECOVER)
                                       'A' = The file has its access
                                             path built after the
                                             IPL has been completed
                                             (*AFTIPL).
                                       'N' = The access path of the
                                             file is NOT built
                                             during or after an IPL
                                             (*NO).  The file's
                                             access path is built
                                             when the file is next
                                             opened.
                                       'S' = The file has its access
                                             path built during the
                                             IPL (*IPL).             */

        char       Reserved_20[23]; /* Reserved.                     */

        unsigned short  Qdbftcid;   /* Coded Character Set
                                       Identifier, CCSID, For
                                       Text Description (TEXT)
                                       0 = There is NO text
                                           description for the file.
                                       1-65,535 = The CCSID for the
                                                  file's text
                                                  description.       */

        char       Qdbfasp[2];      /* Auxiliary Storage Pool (ASP)
                                       X'0000' = The file is
                                                 located on the
                                                 system auxiliary
                                                 storage pool.
                                       X'0002'-X'0010' = The user
                                                 auxiliary storage
                                                 pool the file is
                                                 located on
                                                 (asp-identifier).   */

        Qdb_Qdbfnbit_t Qdbfnbit;    /* Complex Object flags.         */

        short      Qdbfmxfnum;      /* Maximum Number Of Fields
                                       1-8000 = The number of fields
                                                in the file's record
                                                format that contains
                                                the largest number
                                                of fields.           */

        char       Reserved_22[74]; /* Reserved.                     */

        Qdb_Qdbfidfl_t   Qdbfidfl;  /* Identity/Rowid flags.         */

        long       Qdbfodic;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       IDDU/SQL Data Dictionary
                                       Area, Qdbfdic.                */

        char       Reserved_23[14]; /* Reserved.                     */

        short      Qdbffigl;        /* File Generic Key Length
                                       0-2000 = The length of the
                                                key before the first
                                                *NONE key field for
                                                the file.
                                       If this file has an arrival
                                       sequence access path, this
                                       field is NOT applicable.      */

        short      Qdbfmxrl;        /* Maximum Record Length
                                       1-32766 = The length of the
                                                 record in the
                                                 file's record
                                                 format that
                                                 contains the
                                                 largest number of
                                                 bytes.              */

        char       Reserved_24[8];  /* Reserved.                     */

        short      Qdbfgkct;        /* File Generic Key Field Count
                                       0-120 = The count of the
                                               number of key fields
                                               before the first
                                               *NONE key field for
                                               the file.
                                       If this file has an arrival
                                       sequence access path, this
                                       field is NOT applicable.      */

        long       Qdbfos;          /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       File Scope Array, Qdbfb.      */

        char       Reserved_25[8];  /* Reserved.                     */

        long       Qdbfocs;         /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Alternative Collating
                                       Sequence Table section,
                                       Qdbfacs.                      */

        char       Reserved_26[4];  /* Reserved.                     */

        char       Qdbfpact[2];     /* Access Path Type
                                       'AR' = Arrival sequence
                                              access path.
                                       'KC' = Keyed sequence access
                                              path with duplicate
                                              keys allowed.
                                              Duplicate keys are
                                              accessed in first-
                                              changed-first-out
                                              (FCFO) order.
                                       'KF' = Keyed sequence access
                                              path with duplicate
                                              keys allowed.
                                              Duplicate keys are
                                              accessed in first-
                                              in-first-out
                                              (FIFO) order.
                                       'KL' = Keyed sequence access
                                              path with duplicate
                                              keys allowed.
                                              Duplicate keys are
                                              accessed in last-
                                              in-first-out
                                              (LIFO) order.
                                       'KN' = Keyed sequence access
                                              path with duplicate
                                              keys allowed.
                                              No order is guaranteed
                                              when accessing
                                              duplicate keys.
                                              Duplicate keys are
                                              accessed in one of the
                                              following methods:
                                              (FCFO) (FIFO) (LIFO).
                                       'KU' = Keyed sequence access
                                              path with NO duplicate
                                              keys allowed (UNIQUE).
                                       'EV' = Encoded Vector with a
                                              1, 2, or 4 byte vector
                                                                     */

        char       Qdbfhrls[6];     /* File Version Release
                                       Modification Level
                                       'VxRyMz' = Where x is the
                                                  Version, y is the
                                                  Release, and z is
                                                  the Modification
                                                  level
                                                  example V2R1M1
                                                  Version 2 Release
                                                  1 Modification 1   */

        char       Reserved_27[20]; /* Reserved.                     */

        long       Qdbpfof;         /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Physical File Specific
                                       Attributes section, Qdbfphys. */

        long       Qdblfof;         /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Logical File Specific
                                       Attributes section, Qdbflogl. */

        Qdb_Qdbfssfp_t  Qdbfssfp;   /* Sort Sequence Table           */

        long       Qdbfjorn;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Journal Section, Qdbfjoal.    */

        unsigned long     Qdbfevid; /* Initial number of distinct
                                       values an encoded vector
                                       access path was allowed at
                                       creation. Default will be set
                                       to hex zeros                  */


        char       Reserved_28[14]; /* Reserved.                     */

      } Qdb_Qdbfh_t;

    /*****************************************************************/
    /*                                                               */
    /* The FDT header ends here.                                     */
    /*                                                               */
    /*****************************************************************/

/*********************************************************************/
/*                     PHYSICAL FILE DECLARATIONS                    */
/*********************************************************************/
    /**  Flags  ******************************************************/
     typedef _Packed struct
                   Qdb_Qflags {     /* Flags                         */

          unsigned  Qdbfrdel:1;     /* Reuse Deleted Records
                                       (REUSEDLT)
                                       0 = The deleted record space
                                           in the file's members is
                                           NOT used again by the
                                           system on Write (Insert)
                                           requests to the file's
                                           members (*NO).
                                       1 = The deleted record space
                                           in the file's members is
                                           used again by the system
                                           on Write (Insert)
                                           requests to the file's
                                           members (*YES).           */

          unsigned  Reserved_30:3;  /* Reserved.                     */

          unsigned  Qdbfsqlt:1;     /* SQL Table Indicator
                                       0 = The file is NOT an SQL
                                           table.
                                       1 = The file is an SQL table. */

          unsigned  Qdbfmqt:1;      /* SQL Materialized Query Table
                                       Indicator
                                       0 = The file is not an MQT.
                                       1 = The file is an MQT.       */

          unsigned  Qdbfsqpt:1;     /* SQL Partitioned Table
                                       Indicator
                                       0 = The file is not an SQL
                                           Partitioned Table.
                                       1 = The file is an SQL
                                           Partitioned Table.       */

          unsigned  Reserved_31:1;  /* Reserved.                    */

        } Qdb_Qflags_t;


    /*****************************************************************/
    /*                                                               */
    /* Physical File Specific Attributes                             */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset QDBPFOF, which is */
    /* located in the FDT header section.                            */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qdbfphys {           /* Physical File Attributes      */

        char       Qdbfpalc[2];     /* Allocate/Contiguous Storage
                                       (ALLOCATE and CONTIG)
                                       'DN' = New members added to
                                              the file allow the
                                              system to determine
                                              storage space that is
                                              allocated for the
                                              member (ALLOCATE(*NO)).
                                       'IC' = New members added to
                                              the file use the
                                              initial number of
                                              records (SIZE
                                              parameter) to
                                              determine storage
                                              space that is
                                              allocated for the
                                              member
                                              (ALLOCATE(*YES)), and
                                              the storage is
                                              attempted to be
                                              allocated contiguously
                                              (CONTIG(*YES)).
                                       'IN' = New members added to
                                              the file use the
                                              initial number of
                                              records (SIZE
                                              parameter) to
                                              determine storage
                                              space that is
                                              allocated for the
                                              member
                                              (ALLOCATE(*YES)), and
                                              the storage is NOT
                                              attempted to be
                                              allocated contiguously
                                              (CONTIG(*NO)).         */

        char       Qdbfcmps;        /* Maximum Percentage Of Deleted
                                       Records Allowed (DLTPCT)
                                       X'00' = The number of deleted
                                               records in the file's
                                               member is NOT checked
                                               when the member is
                                               closed (*NONE).
                                       X'01'-X'64' = The largest
                                                     percentage of
                                                     deleted records
                                                     that the file's
                                                     member should
                                                     have (deleted-
                                                     records-
                                                     threshold-
                                                     percentage).    */
        unsigned long Qdbfoff_sqpt; /* For SQL Partitioned Tables
                                       offset from the start
                                       of the FDT header, Qdbfh, to
                                       the SQL Partitioned Area.     */

        char       Reserved_29[4];  /* Reserved.                     */

        long       Qdbfprnum;       /* Initial Number Of Records
                                       (SIZE)
                                       0 = The number of records
                                           that can be inserted into
                                           each member of the file
                                           is NOT limited by the
                                           user.  The maximum size
                                           of each member is
                                           determined by the system
                                           (*NOMAX).
                                       1-2,147,483,646 = The number
                                           of records that can be
                                           inserted before an
                                           automatic extension
                                           occurs (number-of-
                                           records).                 */

        short      Qdbfpri;         /* Increment Number Of Records
                                       (SIZE)
                                       0-32,767 = The maximum number
                                                  of additional
                                                  records that can
                                                  be inserted into
                                                  the member after
                                                  an automatic
                                                  extension occurs
                                                  (increment-value). */

        short      Qdbfprinum;      /* Maximum Number Of Increments
                                       (SIZE)
                                       0-32,767 = The maximum number
                                                  of increments
                                                  that can be
                                                  automatically
                                                  added to the
                                                  member (number-of-
                                                  increments).       */

        long       Qdbforid;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Record ID Codes for program
                                       described physical files,
                                       Qdbforid.                     */

        Qdb_Qflags_t       Qflags;  /* Flags                         */

        long       Qdbfotrg;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Trigger Description Area,
                                       Qdbftrg                       */

        short      Qdbftrgn;        /* Number of triggers            */

        long       Qdbfofcs;        /* This is the offset from the
                                       start of the FDT header,
                                       Qdbfh, to the Constraint
                                       Definition Area,
                                       Qdb_Qdbf_constraint           */

        long       Qdbfcstn;        /* Number of constraint for the
                                       File                          */

        long       Qdbfodl;         /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       datalinks area,
                                       Qdb_Qdbfdtalnk.               */

        unsigned long Qdbfovw_mqt;  /* For SQL materialized query
                                       tables, offset from the start
                                       of the FDT header, Qdbfh, to
                                       the SQL Area.                 */

        char       Reserved_32[2];  /* Reserved.                     */

      } Qdb_Qdbfphys_t;

/*********************************************************************/
/*                     TRIGGER DECLARATIONS                          */
/*********************************************************************/
    /**  Trigger Flags   *********************************************/
     typedef _Packed struct
              Qdb_Qdbftrgf {        /* Trigger Flags                 */

          unsigned  Qdbfalrc:1;     /* Allow Repeated Change Indicator
                                       0 = *NO (not allowed)
                                       1 = *YES (allows change)      */

          unsigned  Qdbftths:2;     /* Threadsafe Indicator
                                       B'00' = *UNKNOWN (Threadsafe
                                               status is not known)
                                       B'10' = *NO (Not threadsafe)
                                       B'11' = *YES (Threadsafe)     */

          unsigned  Qdbftmta:2;     /* Multithreaded Job Action
                                       Indicator
                                       B'01' = *MSG (Run, diagnostic)
                                       B'10' = *NORUN (Escape)
                                       B'11' = *RUN (Run, no message)*/

          unsigned  Qdbftqmt:1;     /* QMLTTHDACN system value usage
                                       0 = Not used
                                       1 = Used                      */

          unsigned  Qdbf_more_trg_info:1;
                                    /* Indicates more trigger
                                       information is available if
                                       format FILD0400 is requested.
                                       0 = No more info available
                                       1 = More information available
                                                                 @ADA*/

          unsigned Reserved_200:1;  /* Reserved.                 @ADC*/

        } Qdb_Qdbftrgf_t;

    /*****************************************************************/
    /*                                                               */
    /* Trigger Description Area                                      */
    /*                                                               */
    /* The Trigger information for this file.                        */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfotrg,         */
    /* located in the Physical File Specific Attributes section,     */
    /* or with the offset Qdbflotrg, located in the Logical File     */
    /* Specific Attributes section.                                  */
    /* This is repeated by the number of triggers Qdbftrgn or        */
    /* Qdbfltrgn.                                                    */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qdbftrg{             /* Trigger Section               */

        char       Qdbftrgt[1];     /* Trigger Time
                                       '1' = Run a trigger AFTER the
                                             change operation.
                                       '2' = Run a trigger BEFORE the
                                             change operation.
                                       '3' = Run a trigger INSTEAD OF
                                             the operaton            */

        char       Qdbftrge[1];     /* Trigger Event
                                       '1' = INSERT operation.
                                       '2' = DELETE operation.
                                       '3' = UPDATE operation.
                                       '4' = READ operation          */

        char       Qdbftpgm[10];    /* Trigger Program Name          */

        char       Qdbftplb[10];    /* Trigger Program Library       */

        char       Qdbftupd[1];     /* Trigger update condition. This
                                       field is only valid for UPDATE
                                       event. This field will be
                                       ignored for INSERT or DELETE
                                       event.
                                       '1' = Always calls the trigger
                                             when updating the file.
                                       '2' = Only calls the trigger
                                             when the updated values
                                             are changed.            */

        Qdb_Qdbftrgf_t  Qdbftrgf;   /* Trigger Flags                 */

        char      Reserved_201[24]; /* Reserved.                     */

      } Qdb_Qdbftrg_t;


    /*****************************************************************/
    /*                                                               */
    /* Constraint Definition Area                                    */
    /*                                                               */
    /* The constraint definition area information about              */
    /* constraints for this physical file.                           */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfofcs, which   */
    /* is located in the Physical File Specific Attributes section.  */
    /*****************************************************************/
 /********************************************************************/
 /* Constraint Definition Header                                     */
 /*                                                                  */
 /********************************************************************/
    typedef _Packed struct
            Qdb_Qdbf_Constraint {    /* File Constraint Definition
                                        Area.                        */

      long Qdbf_csto;                /* Offset from
                                        Qdb_Qdbf_Constraint
                                        to the next section for
                                        this constraint              */

      long Qdbf_hlen;                /* Constraint Entry Header
                                        Length in Bytes.             */

      char Qdbf_type;                /* Constraint Type
                                        (TYPE)
                                        'P' = Primary Unique
                                              Constraint
                                        'F' = Referential Constraint
                                        'U' = Unique Constraint.
                                        'C' = Check Constraint       */

      char Qdbf_chkpd;               /* Check Pending Attribute
                                        'N' = The constraint is not
                                              in check pending.
                                        'Y' = The constraint is in
                                              check pending.         */

      char Qdbf_state;               /* Constraint State
                                        'D' = The constraint is
                                              defined.
                                        'E' = The constraint is
                                              established.           */

      char Qdbf_abled;               /* Constraint State
                                        (STATE)
                                        'D' = The constraint is
                                              disabled.
                                        'E' = The constraint is
                                              enabled.               */

      char Qdbf_add_ts[13];          /* Constraint Date
                                        The Constraint Date is in
                                        internal standard format
                                        (ISF), CYYMMDDHHMMSS.        */

      char Qdbf_cst_lin[10];         /* Constraint library name      */

      long Qdbf_cst_lp2;             /* Constraint Name (delimited)
                                          Length.                    */

      char Revcst_2[25];             /* Reserved.                    */

      char Qdbf_cst_name[258];       /* Constraint name (CST)        */

    } Qdb_Qdbf_Constraint_t;


 /********************************************************************/
 /* Constraint Definition Body which follows the Constraint Header   */
 /*                                                                  */
 /*       ------------------------------------                       */
 /*       |||   --Constraint Definition    |||                       */
 /*       |||     Body, variable length.   |||                       */
 /*       |||      - 'F' = Referential     |||                       */
 /*       |||              constraint      |||                       */
 /*       |||        The structures used   |||                       */
 /*       |||        will be ordered:      |||                       */
 /*       |||        1) Qdb_Qdbf_Keyn      |||                       */
 /*       |||        2) Qdb_Qdbf_Keyn      |||                       */
 /*       |||        3) Qdb_Qdbf_Riafk_Afkd|||                       */
 /*       |||                              |||                       */
 /*       |||      - 'U' = Unique          |||                       */
 /*       |||              Constraint      |||                       */
 /*       |||        The structures used   |||                       */
 /*       |||        will be ordered:      |||                       */
 /*       |||        1) Qdb_Qdbf_Keyn      |||                       */
 /*       |||                              |||                       */
 /*       |||      - 'P' = Primary Unique  |||                       */
 /*       |||              Constraint      |||                       */
 /*       |||        The structures used   |||                       */
 /*       |||        will be ordered:      |||                       */
 /*       |||        1) Qdb_Qdbf_Keyn      |||                       */
 /*       |||                              |||                       */
 /*       |||     - 'C' = Check Constraint |||                       */
 /*       |||       1) Qdb_Qdbf_Chk_Cst    |||                       */
 /*       |||                              |||                       */
 /*       ------------------------------------                       */
 /*                                                                  */
 /********************************************************************/

 /********************************************************************/
 /* Structure for the Constraint Keys.                               */
 /********************************************************************/
 /* This section can be located with the offset Qdbf_Hlen, which is  */
 /* located in the Constraint Definition Header section, or with the */
 /* with the offset Qdbf_Kslen when this is a Referential Constraint.*/
 /********************************************************************/

     typedef _Packed struct
                   Qdb_Qdbf_Narray{  /* Key Name Array                */

          char Qdbf_Kname[10];       /* KEY Name (PRNKEY KEY)         */

          char Revcst_6[22];         /* Reserved                      */

        } Qdb_Qdbf_Narray_t;

    typedef _Packed struct
            Qdb_Qdbf_Keyn{           /* Constraint Key Structure      */

      long Qdbf_Kslen;               /* Constraint Key Structure
                                        Length. The length, in bytes,
                                        of this Constraint Key
                                        Structure. This is also the
                                        offset from Qdb_Qdbf_Keyn
                                        to the next structure for
                                        this constraint.              */
                                     /*                               */
      long Qdbf_Nokys;               /* Number of Keys.
                                        1-120 = The count of the
                                        number of key fields for the
                                        Constraints key.              */
                                     /*                               */
      long Qdbf_Klen;                /* Constraint Key Length.        */
                                     /*                               */
      char Revcst_7[52];             /* Reserved                      */

      Qdb_Qdbf_Narray_t Qdbf_Narray; /* Key Name Array                */

    } Qdb_Qdbf_Keyn_t;


 /********************************************************************/
 /* Structure for Referential Constraint                             */
 /********************************************************************/
 /* This section can be located with the offset Qdbf_Kslen when this */
 /* is a Referential Constraint.                                     */
 /********************************************************************/
    typedef _Packed struct
            Qdb_Qdbf_Riafk_Afkd {    /* Referential Constraint
                                        Definition                   */
                                     /*                              */
        char Qdbf_Riafk_Pkfn[10];    /* Parent File Name (PRNFILE)   */
                                     /*                              */
        char Qdbf_Riafk_Pkln[10];    /* Parent File Library Name.    */
                                     /*                              */
        char Revcst_3[44];           /*  Reserved                    */
                                     /*                              */
        char Qdbf_Riafk_Fkcdr;       /* Delete Rule
                                        (DLTRULE)
                                        'C' = *CASCADE
                                        'D' = *SETDFT
                                        'L' = *SETNULL
                                        'N' = *NOACTION Default
                                              Value
                                        'R' = *RESTRICT              */

        char Revcst_4;               /* Reserved.                    */
                                     /*                              */
        char Qdbf_Riafk_Fkcur;       /* Update Rule.
                                        (UPDRULE)
                                        'N' = *NOACTION Default
                                              Value
                                        'R' = *RESTRICT              */
                                     /*                              */
        char Revcst_5[61];           /* Reserved.                    */
      } Qdb_Qdbf_Riafk_Afkd_t;


      /**************************************************************/
      /* Structure for a Check Constraint expression                */
      /**************************************************************/
      typedef _Packed struct Qdb_Qdbf_Chk_Cst {
           long Qdbf_chkcst_len;        /* Structure Length         */
           long Qdbf_chkexpr_len;       /* Expression Length        */
           char Revcst_8[24];           /* .. reserved              */
         /*char Qdb_Qdbf_chkexp[];*/    /* First character of       */
                                        /*  expression              */
                                        /*  (varying length)        */
      } Qdb_Qdbf_Chk_Cst_t;

      /**************************************************************/
      /* Structure for datalink header information.                 */
      /**************************************************************/
      typedef _Packed struct Qdb_Qdbfdtalnk {
           long Qdbfdlcoln;             /* Number of datalink       */
                                        /* columns with links to    */
                                        /* servers.                 */
           long Qdbfdlocole;            /* Offset fromQdb_Qdbfdtalnk*/
                                        /* to the Qdb_dbfdlcole     */
                                        /* area.                    */
           char Qdbfdlinkp;             /* Link pending staus.      */
                                        /* 'N' The file is not in   */
                                        /*     link pending.        */
                                        /* 'Y' The file is in       */
                                        /*     link pending.        */
           char Revdl_1[23];            /* .. reserved              */
      } Qdb_Qdbfdtalnk_t;               /*                          */

      /**************************************************************/
      /* Structure for datalink column information.                 */
      /**************************************************************/
      typedef _Packed struct Qdb_Qdbfdlcole {
           long Qdbfdlcelen;            /* Length of this entry.    */
                                        /* Use this length to get   */
                                        /* to the next entry.       */
           long Qdbfdlsevn;             /* Number of servers linked */
                                        /* for this column.         */
           char Qdbfdlcolnm[10];        /* Column name.             */
           char Revdl_2[14];            /* .. reserved              */
           char Qdbfdlsevnm[254];       /* Array of server names.   */
      } Qdb_Qdbfdlcole_t;               /*                          */


    /*****************************************************************/
    /* Record ID Code Array Entry                                    */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qdbfdrae {           /* Record ID Code Array          */

        char      Reserved_34[4];   /* Reserved.                     */

        char      Qdbfdrnm[10];     /* External Name                 */

        short     Qdbfdrrp;         /* Relative Field Position
                                       1-8000 = The relative
                                                position of the
                                                field in the record
                                                format.              */

        char      Qdbfdrco[2];      /* Comparison Operator
                                       'EQ' = Compare equal.
                                       'NE' = Compare NOT equal.
                                       'ZN' = Compare zone.
                                       'NZ' = Compare NOT zone.
                                       'DG' = Compare digit.
                                       'ND' = Compare NOT digit.     */

        short     Qdbfdrln;         /* Length Of Test Value
                                       1 = Test value length must be
                                           1.                        */

        char      Qdbfdrtv;         /* Test Value                    */

        char      Qdbfdrao;         /* AND/OR/Last Operator
                                       '0' = Last array entry.
                                       '1' = AND with next array
                                             entry.
                                       '2' = OR with next array
                                             entry.                  */

        char      Reserved_35[10];  /* Reserved.                     */

      } Qdb_Qdbfdrae_t;

    /*****************************************************************/
    /*                                                               */
    /* Record ID Codes                                               */
    /*                                                               */
    /* The Record ID Codes for program described physical            */
    /* files. The Record ID Code information is an array with        */
    /* variable length entries.                                      */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbforid, which   */
    /* is located in the Physical File Specific Attributes section.  */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qdbfdrtb {           /* Record ID Codes               */

                                    /* Record ID Code Header         */

        short      Qdbfdrnum;       /* The Number Of Record ID Code
                                       Array Entries
                                       0-70 = The number of elements
                                              in the Record ID Code
                                              array.                 */

        long       Qdbfdrtl;        /* Size Of This Record ID Code
                                       Table
                                       0-2256 = The Record ID Code
                                                table size in bytes. */

        char      Reserved_33[10];  /* Reserved.                     */

        Qdb_Qdbfdrae_t  Qdbfdrae;   /* Record ID Code Array Entry    */

      } Qdb_Qdbfdrtb_t;

/*********************************************************************/
/*                     LOGICAL FILE DECLARATIONS                     */
/*********************************************************************/
    /**  Logical File Attributes  ************************************/
     typedef _Packed struct
                        Qdb_Qlfa {  /* Logical File Attributes       */

          unsigned  Reserved_36:2;  /* Reserved.                     */

          unsigned  Qdbfjoin:1;     /* Join Logical File Indicator
                                       (JFILE)
                                       0 = The file is NOT a join
                                           logical file.
                                       1 = The file is a join
                                           logical file.             */

          unsigned  Qdbfdyns:1;     /* Dynamic Selection Indicator
                                       (DYNSLT)
                                       0 = The selection and
                                           omission tests specified
                                           for the file are done
                                           when the access path is
                                           updated.
                                       1 = The selection and
                                           omission tests specified
                                           for the file are done
                                           when the record is read
                                           (retrieved).              */

          unsigned  Qdbfsqlv:1;     /* SQL View Indicator
                                       0 = The file is NOT an SQL
                                           view.
                                       1 = The file is an SQL view.  */

          unsigned  Qdbfsqli:1;     /* SQL Index Indicator
                                       0 = The file is NOT an SQL
                                           index.
                                       1 = The file is an SQL index. */

          unsigned Reserved_37:2;   /* Reserved.                     */

        } Qdb_Qlfa_t;

    /*****************************************************************/
    /*                                                               */
    /* Logical File Specific Attributes                              */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdblfof, which is */
    /* located in the FDT header section.                            */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qdbflogl {           /* Logical File Attributes       */

        long       Qdbfoj;          /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Join Specifications, Qdbfj.   */

        short      Qdbfscsn;        /* Total Number Of Select/Omit
                                       Statements For All Record
                                       Formats
                                       1-32767 = The number of
                                                 Select/Omit
                                                 statements for all
                                                 of the files
                                                 record formats.     */

        char       Qdbflxp[10];     /* Record Format Selector
                                       Program (FMTSLR)
                                       X'00's = NO record format
                                                selector program
                                                (*NONE).             */

        char       Qdbflxl[10];     /* Record Format Selector
                                       Program's Library (FMTSLR)
                                       X'00's = NO record format
                                                selector program
                                                (*NONE).             */

        long       Qdbfovw;         /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       SQL Area, Qdbfv.              */

        Qdb_Qlfa_t     Qlfa;        /* Logical File Attributes       */

        char       Qdbfjtyp;        /* Join File Type
                                       'I' = Inner join. No default
                                             entries will be
                                             supplied if a join
                                             value does NOT exist.
                                       'P' = Partial outer join.
                                             Default values
                                             (JDFTVAL) will be
                                             supplied if a join
                                             value does NOT exist.   */

        unsigned short  Qdbfsrcd;   /* Coded Character Set
                                       Identifier, CCSID, For
                                       Select/Omit Constants
                                       0 = There are NO Select/Omit
                                           constants for the file.
                                       1-65,535 = The CCSID for the
                                                  file's Select/Omit
                                                  constants.         */

        char       Qdbfwchk;        /* With Check Option
                                       'C' = The With Check Option
                                             was specified with
                                             CASCADE.
                                       'L' = The With Check Option
                                             was specified with
                                             Local.
                                       'N' = No With Check Option
                                             was specified.
                                       This value will be set
                                       for all logical files. The
                                       values of 'C' and 'L' will
                                       only apply for SQL views.     */
        long       Qdbflotrg;       /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Trigger Description Area,
                                       Qdbftrg                   @0DA*/
        short      Qdbfltrgn;      /* Number of triggers         @0DA*/

        char       Reserved_38[7]; /* Reserved.                  @0DC*/

      } Qdb_Qdbflogl_t;

/*********************************************************************/
/*                     SQL AREA FLAG DECLARATIONS                    */
/*********************************************************************/
    /**  Flags  ******************************************************/
     typedef _Packed struct
                   Qdb_Qdbfvflgs {   /* Flags                        */

          unsigned  Qdbfmqt_init:1;  /* SQL materialized query table
                                       initial data indicator:
                                       0 = Deferred. Data is not
                                           inserted into the table as
                                           part of the Create Table
                                           statement.
                                       1 = Immediate. Data is inserted
                                           initially.                */

          unsigned  Qdbfmqt_maint:1; /* SQL materialized query table
                                       maintenance indicator:
                                       0 = Reserved.
                                       1 = User-maintained.          */

          unsigned  Qdbfmqt_refresh:1; /* SQL materialized query table
                                       refresh indicator:
                                       0 = Refresh-deferred.
                                       1 = Reserved.                 */

         unsigned  Qdbfmqt_opt:1;   /* SQL materialized query table
                                       optimization indicator:
                                       0 = Enabled for optimization.
                                       1 = Disabled for optimization.*/

          unsigned  Reserved_88:4;  /* Reserved.                     */

        } Qdb_Qdbfvflgs_t;

    /*****************************************************************/
    /*                                                               */
    /* SQL Area                                                      */
    /*                                                               */
    /* The SQL Area contains the SQL select statement.               */
    /*                                                               */
    /*****************************************************************/
    /* For SQL views, this section can be located with the offset    */
    /* Qdbfovw, which is located in the Logical file specific        */
    /* attributes section.  For SQL materialized query tables, this  */
    /* section can be located with the offset Qdbfovw_mqt, in the    */
    /* Physical file specific attributes section.                    */
    /*****************************************************************/

     typedef _Packed struct
              Qdb_Qdbfv {           /* SQL Area                      */

        char       Reserved_39[16]; /* Reserved.                     */
        unsigned long Qdbfvs_start; /* Starting offset of the SELECT */
                                    /* statement within CREATE TABLE */
                                    /* statement.                    */
        unsigned long Qdbfvs_end;   /* Ending offset of the SELECT   */
                                    /* statement within CREATE TABLE */
                                    /* statement.                    */
        unsigned short Qdbfvs_ccsid;/* Coded Character Set           */
                                    /* Identifier, CCSID, for the    */
                                    /* Select Statement              */

        unsigned long Qdbfmqtd_o;   /* For SQL materialized query    */
                                    /* tables, offset from the start */
                                    /* of the FDT header, Qdbfh, to  */
                                    /* the SQL materialized query    */
                                    /* table dependency area.        */

        char       Qdbfmqt_cmt[2];  /* For SQL materialized query    */
                                    /* tables, the isolation level   */
                                    /* in effect for the table:      */
                                    /* 'NC' - *NONE no commit        */
                                    /* 'UR' - *CHG uncommitted read  */
                                    /* 'CS' - *CS cursor stability   */
                                    /* 'CL' - *CS with keep locks    */
                                    /* 'RS' - *ALL read stability    */
                                    /* 'RR' - *RR repeatable read    */
                                    /* Null if not an MQT.           */

        Qdb_Qdbfvflgs_t Qdbfvlgs;   /* Flags                         */
        char       Reserved_89[23]; /* Reserved                      */

                                    /* SQL Select Statement Structure*/

        long       Qdbfvssl;        /* Select Statement Length       */

      /*char Qdbfvsst[];*/  /* SQL Select Statement (varying length) */

      } Qdb_Qdbfv_t;

/*********************************************************************/
/*                  JOIN SPECIFICATION DECLARATIONS                  */
/*********************************************************************/
    /**  Join Specifications Header  *********************************/
     typedef _Packed struct
                    Qdb_Qdbfjhdr {  /* Join Specifications Header    */

          long       Qdbfjnho;      /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Join Specifications, Qdbfj,
                                       for the next join to-file.    */

          char       Reserved_40[4];/* Reserved.                     */

          short      Qdbfjknum;     /* Number Of Join Field
                                       Specifications (JFLD)
                                       1-32767 = The number of join
                                                 field statements
                                                 that identify the
                                                 from and to fields
                                                 used to join the
                                                 from-file and
                                                 to-file.            */

          short      Qdbfjdnum;     /* Number Of Join Duplicate
                                       Sequence Specifications
                                       (JDUPSEQ)
                                       1-32767 = The number of join
                                                 duplicate sequence
                                                 statements that
                                                 specify the order
                                                 in which records
                                                 with duplicate join
                                                 fields are returned
                                                 to your program.    */

          short      Qdbfjffnum;    /* Join From-File Number (JOIN)
                                       1-256= The number of the
                                              based on physical
                                              from-file corresponding
                                              with its position in
                                              the JFILE statement.
                                       This number indicates which
                                       based on physical file to
                                       join the to-file from.        */

          short      Qdbfjtfnum;    /* Join To-File Number (JOIN)
                                       2-256= The number of the
                                              based on physical
                                              to-file corresponding
                                              with its position in
                                              the JFILE statement.
                                       This number indicates which
                                       based on physical to-file
                                       this Join Specification
                                       relates to.                   */

          char      Reserved_41[24];/* Reserved.                     */

          long       Qdbfjsao;      /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Join Specification Array,
                                       Qdbfjfld, for this join
                                       to-file.                      */

          long       Qdbfjdao;      /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Join Duplicate Sequence
                                       Array, Qdbfjdup, for this
                                       join to-file.                 */

        } Qdb_Qdbfjhdr_t;


    /*****************************************************************/
    /*                                                               */
    /* Join Specifications                                           */
    /*                                                               */
    /* The Join Specifications are a linked list.  There is one      */
    /* entry in the linked list for each join to-file.  Each         */
    /* entry defines the join logical file's based on physical       */
    /* files, and the fields in the from-file and the to-file that   */
    /* are used to join the based on physical files.                 */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfoj, which is  */
    /* located in the FDT header section.                            */
    /*****************************************************************/

     typedef _Packed struct
              Qdb_Qdbfj {           /* Join Specifications           */

        Qdb_Qdbfjhdr_t   Qdbfjhdr;  /* Join Specifications Header    */

      } Qdb_Qdbfj_t;

    /*****************************************************************/
    /*                                                               */
    /* Join Specification Array                                      */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfjsao, which   */
    /* is located in the Join header section.                        */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qdbfjfld {           /* Join Specification Array      */

        char       Qdbfjfnm[10];    /* Join From-Field-Name (JFLD)   */

        short      Qdbfjfnum;       /* Join From-Field Reference
                                       Number
                                       0 = The join from-field is
                                           a field in the join
                                           logical file's record
                                           format.
                                       1-256= The number of the
                                              based on physical
                                              from-file corresponding
                                              with its position in
                                              the JFILE statement
                                              that this join
                                              from-field is
                                              contained in.          */

        char       Reserved_42[2];  /* Reserved.                     */


        char       Qdbfjop[2];      /* Join Operation
                                       'EQ' = The join operation is
                                              always equal.          */

        char       Qdbfjtnm[10];    /* Join To-Field-Name (JFLD)     */

        short      Qdbfjtnum;       /* Join To-Field Reference
                                       Number
                                       0 = The join to-field is a
                                           field in the join logical
                                           file's record format.
                                       2-256= The number of the
                                              based on physical
                                              to-file corresponding
                                              with its position in
                                              the JFILE statement
                                              that this join
                                              to-field is contained
                                              in.                    */

        char       Reserved_43[20]; /* Reserved.                     */

      } Qdb_Qdbfjfld_t;


    /*****************************************************************/
    /* Join Duplicate Sequence Specification                         */
    /*****************************************************************/
    /**  Join Sequencing-Field-Name Attributes  **********************/
     typedef _Packed struct
                      Qdb_Qjsfna {  /* Join Sequencing-Field-Name
                                       Attributes                    */

          unsigned  Qdbfjdd:1;      /* Ascending/Descending
                                       Sequence Indicator
                                       0 = The join sequencing-
                                           field-name is an
                                           ascending sequence field.
                                       1 = The join sequencing-
                                           field-name is a
                                           descending sequence field
                                           (*DESCEND).               */

          unsigned  Reserved_44:7;  /* Reserved.                     */

        } Qdb_Qjsfna_t;

    /*****************************************************************/
    /*                                                               */
    /* Join Duplicate Sequence Specification Array                   */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfjdao, which   */
    /* is located in the Join header section.                        */
    /*****************************************************************/

  typedef _Packed struct
          Qdb_Qdbfjdup {            /* Join Duplicate Sequence
                                       Specifications Array          */

        char       Qdbfjdnm[10];    /* Join Sequencing-Field-Name
                                       (JDUPSEQ)                     */

        short      Qdbfjdjnum;      /* Join Sequencing-Field-Name
                                       Reference Number
                                       0 = The join sequencing-
                                           field-name is a field in
                                           the join logical file's
                                           record format.
                                       2-256= The number of the
                                              based on physical
                                              to-file corresponding
                                              with its position in
                                              the JFILE statement
                                              that this join
                                              sequencing-field-name
                                              is contained in.       */

        Qdb_Qjsfna_t       Qjsfna;  /* Join Sequencing-Field-Name    */

        char       Reserved_45[19]; /* Reserved.                     */

      } Qdb_Qdbfjdup_t;

/*********************************************************************/
/*                  SORT SEQUENCE TABLE DECLARATIONS                 */
/*********************************************************************/
    /**  Sort Sequence Table Fields  *********************************/
     typedef _Packed struct
                    Qdb_Qdbfsrts {  /* Sort Sequence Table Fields    */

        char         Qdbftbln[10];  /* Sort Sequence Table Name.     */

        char         Qdbftbll[10];  /* Sort Sequence Table's.
                                       Library Name                  */

      } Qdb_Qdbfsrts_t;

    /**  Sort Sequence Table Flag  ***********************************/
     typedef _Packed struct
                    Qdb_Qdbfsrtf {  /* Sort Sequence Table Flag      */

        unsigned     Qdbfwght:1;    /* Weight Indicator for Single-
                                       byte Sort Sequence Table
                                       0 = The sort sequence
                                           table for the file is
                                           shared weighted.
                                       1 = The sort sequence
                                           table for the file is
                                           unique weighted.          */

        unsigned     Qdbfsubc:1;    /* Substitution Character
                                       Indicator for Single-byte
                                       Sort Sequence Table
                                       0 = The sort sequence
                                           table for the file does
                                           not have substitution
                                           characters.
                                       1 = The sort sequence
                                           table for the file has
                                           substitution characters.  */

        unsigned  Qdbf_UCS2_Wght:1; /* Weight Indicator for UCS-2
                                       Sort Sequence Table
                                       0 = The sort sequence
                                           table for the file is
                                           shared weighted.
                                       1 = The sort sequence
                                           table for the file is
                                           unique weighted.          */

        unsigned Reserved_104:5;    /* Reserved                      */

      } Qdb_Qdbfsrtf_t;

    /*****************************************************************/
    /*                                                               */
    /* Alternative Collating Sequence Table or Sort Sequence Table.  */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfocs, which is */
    /* located in the FDT header section.                            */
    /*****************************************************************/

      typedef _Packed struct Qdb_Qdbfacs {
        char         Qdbfacst[256]; /* Alternative Collating
                                       Sequence Table (ALTSEQ), or
                                       Sort Sequence Table (SRTSEQ)
                                       Information.  Single-byte.    */

        unsigned short  Qdbfccsd;   /* Coded Charactor Set
                                       Identifier, CCSID, for the
                                       Single-byte Table.            */

        Qdb_Qdbfsrts_t   Qdbfsrts;  /* Sort Sequence Table Fields    */

        Qdb_Qdbfsrtf_t   Qdbfsrtf;  /* Sort Sequence Table Flag      */

        long Qdbf_UCS2_Srtseq_Len;  /* Length of UCS-2 Sort Sequence
                                       table, Qdbf_UCS2_Srtseq.      */

        unsigned short Qdbf_UCS2_Ccsd;
                                    /* Coded Character Set ID, CCSID,
                                       of UCS-2 sort sequence table. */

        char      Reserved_101[19]; /* Reserved                      */

    /*char Qdbf_UCS2_Srtseq[];*/    /* UCS-2 Sort Sequence Table.    */
                                    /* (Varying length.)             */

      } Qdb_Qdbfacs_t;

    /*****************************************************************/
    /*                                                               */
    /* IDDU/SQL Data Dictionary Area                                 */
    /*                                                               */
    /* The IDDU/SQL data dictionary area is present for all Database */
    /* files.                                                        */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfodic, which   */
    /* is located in the FDT header section.                         */
    /*****************************************************************/

   typedef _Packed struct Qdbfdic { /* IDDU/SQL Data Dictionary
                                       Area                          */

        char       Qdbfdilk;        /* Data Dictionary Link Status
                                       'L' = The file is linked to
                                             a Data Dictionary.
                                       'U' = The file is NOT linked
                                             to a Data Dictionary.   */

        char       Qdbfdinm[10];    /* Data Dictionary/Library Name  */

        char       Qdbfdifd[10];    /* Data Dictionary File
                                       Definition Name               */

        char       Qdbfdiid[11];    /* Data Dictionary Internal File
                                       Definition Identifier         */

        char       Reserved_46[4];  /* Reserved.                     */

        long       Qdbfdicl;        /* Data Dictionary File
                                       Definition Comment Length     */

        unsigned short  Qdbfdicc;   /* Data Dictionary File
                                       Definition Comment Coded
                                       Character Set Identifier
                                       (CCSID)
                                       0 = There is NO file
                                           definition comment for
                                           the file.
                                       1-65,535 = The CCSID for the
                                                  file's definition
                                                  comment.           */

        long       Qdbfolng;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       SQL Long/Alias File Names
                                       Area, Qdbflngn.               */

        short      Qdbflnnum;       /* Number of Long/Alias File
                                       Names for the file            */

        char       Reserved_47[16]; /* Reserved.                     */

      /*char       Qdbfdict[];*/    /* Data Dictionary File
                                       Definition Comment Text
                                       (varying length)              */
      } Qdb_Qdbfdic_t;

/*********************************************************************/
/*               SQL LONG ALIAS FILE NAME DECLARATIONS               */
/*********************************************************************/
    /**  Long/Alias File Name Flag Byte  *****************************/
     typedef _Packed struct
                     Qdb_Qdbflnfl { /* Long/Alias File Name Flag
                                       Byte                          */

         unsigned  Qdbflndl:1;      /* Long/Alias File Name
                                       Input Delimited Indicator
                                       0 = Long/Alias File Name was
                                           NOT delimited when
                                           supplied as input.
                                       1 = Long/Alias File Name was
                                           delimited when supplied
                                           as input.                 */

         unsigned  Reserved_111:7;  /* Reserved                      */

       } Qdb_Qdbflnfl_t;

    /*****************************************************************/
    /*                                                               */
    /* SQL Long/Alias File Names Area                                */
    /*                                                               */
    /* The SQL Long/Alias File Names Area contains the files         */
    /* alternate names that can be used to access the file when      */
    /* using the systems SQL interfaces.                             */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfolng, which   */
    /* is located in the IDDU/SQL Data Dictionary Area section.      */
    /*****************************************************************/

   typedef _Packed struct
            Qdb_Qdbflngn {          /* SQL Long/Alias File Names
                                       Area                          */

                                    /* Long/Alias File Names Entry   */

       short      Qdbflnel;         /* Long/Alias File Name Entry
                                       Length. The length, in bytes,
                                       of this Long/Alias File Name
                                       Entry. This also is the
                                       offset from Qdb_Qdbflngn to
                                       the next Long/Alias File Name
                                       Entry.                        */

       Qdb_Qdbflnfl_t     Qdbflnfl; /* Long/Alias File Name Flag     */

       short      Qdbflnlg;         /* Long/Alias File Name
                                       (non-delimited) Length        */

       char       Reserved_112[11]; /* Reserved                      */

     /*char       Qdbflnam[];*/     /* The Long/Alias File Name
                                       (non-delimited)
                                       (varying length)              */
     } Qdb_Qdbflngn_t;

    /*****************************************************************/
    /*                                                               */
    /* File Scope Array                                              */
    /*                                                               */
    /* The file scope array is present for all Database files.       */
    /* The number of data members, Qdbflb#, contains the number of   */
    /* file scope array entries.  Each entry contains a based on     */
    /* physical file name, and optionally a record format name.      */
    /*                                                               */
    /* Externally Described Physical Files:                          */
    /*   There is only one entry.  The entry names the physical      */
    /*   file record format.  The file name portion of the entry     */
    /*   is NOT used.                                                */
    /*                                                               */
    /* Program Described Physical Files:                             */
    /*   There is one entry for each Data Dictionary record format.  */
    /*   The entry names the Data Dictionary record format.  The     */
    /*   file name portion of the entry is NOT used.                 */
    /*                                                               */
    /* Non-Join Logical Files:                                       */
    /*   There is one entry for each based on physical file.  Each   */
    /*   entry names the based on physical file and describes the    */
    /*   logical file record format to use with the based on file.   */
    /*                                                               */
    /* Join Logical Files:                                           */
    /*   There is one entry for each based on physical file.  Each   */
    /*   entry names the based on physical file.  Only the first     */
    /*   entry describes the logical file record format to use with  */
    /*   the join logical file.                                      */
    /*                                                               */
    /* SQL View Logical Files:                                       */
    /*   There is one entry for each based on physical file.  Each   */
    /*   entry names the base on file which will be either an        */
    /*   externally described physical file, or another view         */
    /*   logical file.  Only the first entry describes the logical   */
    /*   file record format to use with the view logical file.       */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfos, which is  */
    /* located in the FDT header section.                            */
    /*****************************************************************/

      typedef _Packed struct Qdb_Qdbfb {

        char       Reserved_48[48]; /* Reserved.                     */

        char       Qdbfbf[10];      /* Based On Physical File Name   */

        char       Qdbfbfl[10];     /* Based On Physical File's
                                       Library Name                  */

        char       Qdbft[10];       /* Record Format Name
                                       The name of this particular
                                       record format for the file.   */

        char       Reserved_49[37]; /* Reserved.                     */

        short      Qdbfbgky;        /* Record Format Generic Key
                                       Field Count
                                       0-120 = The count of the
                                               number of key fields
                                               before the first
                                               *NONE key field for
                                               the record format.
                                       If this file has an arrival
                                       sequence access path, this
                                       field is NOT applicable.      */

        char       Reserved_50[2];  /* Reserved.                     */

        short      Qdbfblky;        /* Record Format Maximum Key
                                       Length
                                       1-2000 = Maximum length of
                                                the key for the
                                                record format.
                                       If this file has an arrival
                                       sequence access path, this
                                       field is NOT applicable.      */

        char       Reserved_51[2];  /* Reserved.                     */

        short      Qdbffogl;        /* Record Format Generic Key
                                       Length
                                       0-2000 = The length of the
                                                key before the first
                                                *NONE key field for
                                                the record format.
                                       If this file has an arrival
                                       sequence access path, this
                                       field is NOT applicable.      */

        char       Reserved_52[3];  /* Reserved.                     */

        short      Qdbfsoon;        /* Number Of Select/Omit
                                       Statements
                                       1-32767 = The number of
                                                 Select/Omit
                                                 statements for this
                                                 record format.      */

        long       Qdbfsoof;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Select/Omit Specification
                                       Array, Qdbfss.                */

        long       Qdbfksof;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Key Specification Array,
                                       Qdbfk.                        */

        short      Qdbfkyct;        /* Record Format Full Key Field
                                       Count
                                       0-120 = The count of the
                                               total number of key
                                               fields for the record
                                               format.
                                       If this file has an arrival
                                       sequence access path, this
                                       field is NOT applicable.      */

        short      Qdbfgenf;        /* Generic Key Field Count For
                                       All Record Formats With This
                                       Record Format Name
                                       0-120 = The count of the
                                               number of key fields
                                               before the first
                                               *NONE key field for
                                               all the record
                                               formats with this
                                               record format's name.
                                       If this file has an arrival
                                       sequence access path, this
                                       field is NOT applicable.      */

        long       Qdbfodis;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Distributed File Definition
                                       Section Qdbf_dis, which
                                       contains the Partition Key
                                       Array, Qdbf_dis_pkeyarr.      */

        char       Reserved_53[14]; /* Reserved.                     */

      } Qdb_Qdbfb_t;

/*********************************************************************/
/*                SELECT/OMIT STATEMENT DECLARATIONS                 */
/*********************************************************************/
    /**  Select/Omit Statement Attribute Flags  **********************/
     typedef _Packed struct
                      Qdb_Qsosaf {  /* Select/Omit Statement
                                       Attribute Flags               */

          unsigned  Reserved_55:7;  /* Reserved.                     */

          unsigned  Qdbfssfi:1;     /* Select/Omit Statement
                                       External Or Internal Name
                                       Indicator
                                       0 = The Select/Omit statement
                                           field name is an internal
                                           record format name.
                                       1 = The Select/Omit statement
                                           field name is an external
                                           record format name.       */

        } Qdb_Qsosaf_t;

    /*****************************************************************/
    /*                                                               */
    /* Select/Omit Specification Array                               */
    /*                                                               */
    /* The Select/Omit specification array entries describe the      */
    /* record format's fields that the Select/Omit statements        */
    /* refer to.                                                     */
    /*                                                               */
    /* Non-Join Logical Files:                                       */
    /*   There can be one Select/Omit specification array for        */
    /*   each file scope array entry.                                */
    /*                                                               */
    /* Join Logical Files:                                           */
    /*   There can only be one Select/Omit specification array       */
    /*   for the join logical file.  The first scope array entry     */
    /*   for the join logical file will contain the offset to the    */
    /*   file's Select/Omit specification array.                     */
    /*                                                               */
    /* All Select/Omit specification arrays will end with an         */
    /* 'AL' operation.                                               */
    /*                                                               */
    /* Select/Omit constant operands have the following form:        */
    /*                                                               */
    /*   Character   -  Quoted character string (imbedded quotes     */
    /*                  must be double quoted 'ISN''T').             */
    /*                  Blank padding will be done if the character  */
    /*                  constant passed is shorter than the field.   */
    /*                                                               */
    /*   Hexadecimal -  X followed by a quoted string of valid       */
    /*                  hexadecimal values (X'F1F2F3').              */
    /*                  No padding will be done for a hexadecimal    */
    /*                  constant.  The length of a hexadecimal       */
    /*                  constant must exactly match the field        */
    /*                  length.                                      */
    /*                                                               */
    /*   Floating    -  External form of floating point              */
    /*   Point          (1.234 E+10).                                */
    /*                                                               */
    /*   Packed or   -  String of 0 through 9 without decimal point. */
    /*   Zoned or       The decimal point is assumed at the          */
    /*   Binary         appropriate precision.  The string must be   */
    /*                  Preceded by a - if negative and may be       */
    /*                  preceded by a + if positive (+1234 or        */
    /*                  -1234 would be +1.234 or -1.234 if the field */
    /*                  was defined to have 3 decimal places).       */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfsoof, which   */
    /* is located in the Scope array entry section.                  */
    /*****************************************************************/

    typedef _Packed struct
             Qdb_Qdbfss {           /* Select/Omit Specification
                                       Array                         */

        char       Reserved_54[2];  /* Reserved.                     */

        char       Qdbfssso;        /* Select/Omit Statement Rule
                                       'A' = Select/Omit ANDed
                                             statement
                                       'O' = Select/Omit omit
                                             statement
                                       'S' = Select/Omit select
                                             statement               */

        char       Qdbfssop[2];     /* Select/Omit Statement
                                       Comparison (ALL COMP VALUES)
                                       'AL' = The Select/Omit
                                              statement comparison
                                              is for all (ALL)
                                       'EQ' = The Select/Omit
                                              statement comparison
                                              is for equal to
                                              (COMP EQ).
                                       'GE' = The Select/Omit
                                              statement comparison
                                              is for greater than
                                              or equal to (COMP GE).
                                       'GT' = The Select/Omit
                                              statement comparison
                                              is for greater than
                                              (COMP GT).
                                       'LE' = The Select/Omit
                                              statement comparison
                                              is for less than or
                                              equal to (COMP LE).
                                       'LT' = The Select/Omit
                                              statement comparison
                                              is for less than
                                              (COMP LT).
                                       'NE' = The Select/Omit
                                              statement comparison
                                              is for NOT equal to
                                              (COMP NE).
                                       'NG' = The Select/Omit
                                              statement comparison
                                              is for NOT greater
                                              than (COMP NG).
                                       'NL' = The Select/Omit
                                              statement comparison
                                              is for NOT less than
                                              (COMP NL).
                                       'VA' = The Select/Omit
                                              statement comparison
                                              is for values (VALUES) */

        char       Qdbfssfn[10];    /* Select/Omit Statement Field
                                       Name                          */

        short      Qdbfsspnum;      /* Number Of Select/Omit
                                       Statement Parameters
                                       1-32767 = The number of
                                                 Select/Omit
                                                 parameters for this
                                                 Select/Omit
                                                 statement.          */

        Qdb_Qsosaf_t       Qsosaf;  /* Select/Omit Statement         */

        short      Qdbfssfj;        /* Select/Omit Statement Join
                                       Reference Number (JREF)
                                       1-256= The number of the
                                              based on physical
                                              file corresponding
                                              with its position in
                                              the JFILE statement
                                              that this Select/Omit
                                              statement field
                                              references.
                                       If this file is NOT a join
                                       logical file, then this
                                       field is NOT applicable.      */

        char       Reserved_56[8];  /* Reserved.                     */

        long       Qdbfsoso;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       Select/Omit Parameters,
                                       Qdbfsp, for this Select/Omit
                                       statement.                    */

      } Qdb_Qdbfss_t;

/*********************************************************************/
/*                SELECT/OMIT PARAMETER DECLARATIONS                 */
/*********************************************************************/
    /**  Additional Select/Omit Parameter Attribute Flags  ***********/
     typedef _Packed struct
                     Qdb_Qasopaf {  /* Additional Select/Omit
                                       Parameter Attribute Flags     */

          unsigned  Qdbfsigc:1;     /* Double-Byte Character Set
                                       (DBCS) and/or Graphic Data
                                       Indicator
                                       0 = The non-field compare
                                           value does NOT contain
                                           any DBCS or Graphic data.
                                       1 = The non-field compare
                                           value does contain DBCS
                                           or Graphic data.
                                       If this is NOT a non-field
                                       compare value, then this
                                       field is NOT applicable.      */

          unsigned  Qdbfshex:1;     /* Hexadecimal Data Indicator
                                       0 = The non-field compare
                                           value is NOT hexadecimal
                                           data.
                                       1 = The non-field compare
                                           value is hexadecimal
                                           data.
                                       If this is NOT a non-field
                                       compare value, then this
                                       field is NOT applicable.      */

          unsigned  Qdbfsnul:1;     /* Null Value Indicator
                                       0 = The non-field compare
                                           value is NOT the null
                                           value.
                                       1 = The non-field compare
                                           value is the null value.
                                       If this is NOT a non-field
                                       compare value, then this
                                       field is NOT applicable.      */

          unsigned  Reserved_57:5;  /* Reserved.                     */

        } Qdb_Qasopaf_t;

    /*****************************************************************/
    /*                                                               */
    /* Select/Omit Parameters                                        */
    /*                                                               */
    /* This is a linked list of parameter descriptions.  This        */
    /* section describes the parameter values for this particular    */
    /* Select/Omit statement.  The Select/Omit parameters are        */
    /* either a compare value or another record format field.        */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfsoso, which   */
    /* is located in the Select omit array section.                  */
    /*****************************************************************/

    typedef _Packed struct
             Qdb_Qdbfsp {           /* Select/Omit Parameter         */

        long       Qdbfspno;        /* Offset from the start of the
                                       FDT header, Qdbfh, to the
                                       next Select/Omit Parameter,
                                       Qdbfsp, for this Select/Omit
                                       statement.                    */

        short      Qdbfspln;        /* Select/Omit Parameter Length
                                       1-32767 = The length of this
                                                 Select/Omit
                                                 parameter structure
                                                 including the
                                                 actual compare
                                                 value.              */

        char       Qdbfspin;        /* Select/Omit Parameter
                                       Attribute Indicator
                                       X'00' = The Select/Omit
                                               parameter is NOT
                                               another record format
                                               field.  It is an
                                               actual compare value.
                                       X'01' = The Select/Omit
                                               parameter is another
                                               internal record
                                               format field.
                                       X'02' = The Select/Omit
                                               parameter is another
                                               external record
                                               format field.         */

        Qdb_Qasopaf_t     Qasopaf;  /* Additional Select/Omit        */

        short      Qdbfsppj;        /* Select/Omit Parameter Join
                                       Reference Number (JREF)
                                       1-256= The number of the
                                              based on physical
                                              file corresponding
                                              with its position in
                                              the JFILE statement
                                              that this Select/Omit
                                              parameter field
                                              references.
                                       If this file is NOT a join
                                       logical file, then this
                                       field is NOT applicable. Also,
                                       if this is a non-field
                                       compare value, then this
                                       field is NOT applicable.      */

        char       Reserved_58[10]; /* Reserved.                     */

      /*char       Qdbfspvl[];*/    /* Select/Omit Parameter Compare
       (varying length)                Value Or Record Format Field
                                       Name
                                       When the Select/Omit
                                       parameter attribute indicator
                                       (Qdbfspin) is an actual
                                       compare value (X'00'), then
                                       this field is the parameter
                                       compare value.
                                       When the Select/Omit
                                       parameter attribute indicator
                                       (Qdbfspin) is a record format
                                       field (X'01' or X'02'), then
                                       this field is the CHAR(10)
                                       parameter record format field
                                       name.                         */

      } Qdb_Qdbfsp_t;

/*********************************************************************/
/*               KEY SPECIFICATION ARRAY DECLARATIONS                */
/*********************************************************************/
    /**  Key Statement Sequencing Attribute Flags  *******************/
     typedef _Packed struct
                     Qdb_Qdbfksq {  /* Key Statement Sequencing
                                       Attribute Flags               */

          unsigned  Qdbfksad:1;     /* Ascending/Descending
                                       Sequence Indicator
                                       0 = The key field is an
                                           ascending sequence key.
                                       1 = The key field is a
                                           descending sequence key
                                           (*DESCEND).               */

          unsigned  Qdbfksn:2;      /* Numeric Key Field Sequencing
                                       Indicators
                                       B'00' = The numeric key field
                                               will sequence as a
                                               string of unsigned
                                               binary data
                                               (UNSIGNED).
                                       B'01' = The numeric key field
                                               will ignore the sign
                                               of the field and
                                               sequence as absolute
                                               value data (ABSVAL).
                                       B'10' = The numeric key field
                                               will consider the
                                               signs of the field
                                               and sequence as
                                               signed value data
                                               (SIGNED).             */

          unsigned  Reserved_60:1;  /* Reserved.                     */

          unsigned  Qdbfksac:1;     /* Alternative Collating
                                       Sequence Indicator (ALTSEQ)
                                       0 = The alternative collating
                                           sequence table does NOT
                                           apply to this key field
                                           (NOALTSEQ).
                                       1 = The alternative collating
                                           sequence table does apply
                                           to this key field.
                                       If this file does NOT have an
                                       alternative collating
                                       sequence table, then this
                                       field is NOT applicable.      */

          unsigned  Qdbfkszf:1;     /* Force Zone Sequencing
                                       Indicators
                                       0 = The zone portion of the
                                           key field will NOT be
                                           zeroed.
                                       1 = The zone portion of the
                                           key field will be zeroed
                                           so that only the digit
                                           portions (farthest right
                                           4 bits) of the key values
                                           will be used in the key
                                           sequencing (DIGIT).       */

          unsigned  Qdbfksdf:1;     /* Force Digit Sequencing
                                       Indicators
                                       0 = The digit portion of the
                                           key field will NOT be
                                           zeroed.
                                       1 = The digit portion of the
                                           key field will be zeroed
                                           so that only the zone
                                           portions (farthest left
                                           4 bits) of the key values
                                           will be used in the key
                                           sequencing (ZONE).        */

          unsigned  Qdbfkft:1;      /* Key Statement External Or
                                       Internal Name Indicator
                                       0 = The key statement field
                                           name is an internal
                                           record format name.
                                       1 = The key statement field
                                           name is an external
                                           record format name.       */

        } Qdb_Qdbfksq_t;

    /*****************************************************************/
    /*                                                               */
    /* Key Specification Array                                       */
    /*                                                               */
    /* The key specification array entries describe the record       */
    /* format's fields that are used in defining the access path     */
    /* for the file.                                                 */
    /*                                                               */
    /* Non-Join Logical Files:                                       */
    /*   There can be one key specification array for each file      */
    /*   scope array entry.                                          */
    /*                                                               */
    /* Join Logical Files:                                           */
    /*   There can only be one key specification array for the       */
    /*   join logical file.  The first scope array entry for the     */
    /*   join logical file will contain the offset to the file's     */
    /*   key specification array.                                    */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfksof, which   */
    /* is located in the Scope array entry section.                  */
    /*****************************************************************/

     typedef _Packed struct
              Qdb_Qdbfk {           /* Key Specification Array       */

        char       Qdbfkfld[10];    /* Key Statement Field Name
                                       X'40's = The key statement
                                                field is a *NONE key
                                                field.               */

        char       Reserved_59[3];  /* Reserved.                     */

        Qdb_Qdbfksq_t     Qdbfksq;  /* Key Statement Sequencing      */

        char       Reserved_61[18]; /* Reserved.                     */

      } Qdb_Qdbfk_t;

 /********************************************************************/
 /*                                                                  */
 /* Distributed File Definition Section and Partition Key Array.     */
 /*                                                                  */
 /* The Distributed File Definition Section and Partition Key        */
 /* Array consists of 2 parts - the Distributed File Definition      */
 /* Section Header and the Partition Key Array.                      */
 /********************************************************************/
 /* The section Qdb_Qdbf_dis is located by the offset Qdbfodis       */
 /* which is located in the File Scope Array Section.                */
 /********************************************************************/
    /*****************************************************************/
    /* Partition Key Array                                           */
    /* This array is located in the structure below it, Qdb_Qdbf_dis.*/
    /*                                                               */
    /*****************************************************************/
    typedef _Packed struct
            Qdb_Qdbf_dis_pkeyarr  {  /* Partition key names array
                                                                     */

          char Qdbf_dis_kname[10];   /* Partition key name           */

          char Reserdis_1[22];       /* Reserved                     */

    } Qdb_Qdbf_dis_pkeyarr_t;        /* End of key names structure
                                                                     */

    /*****************************************************************/
    /* Distributed File Definition Section Header                    */
    /*                                                               */
    /*****************************************************************/
    typedef _Packed struct
            Qdb_Qdbf_dis          {  /* Distributed File Definition
                                        Section for this scope
                                        entry                        */

          char Qdbf_dis_ndgpn[10];   /* Node group name              */

          char Qdbf_dis_ndgpl[10];   /* Node group library           */

          long Qdbf_dis_nkyn;        /* Number of partition keys
                                                                     */

          char Reserdis_2[40];       /* Reserved                     */

          Qdb_Qdbf_dis_pkeyarr_t  Qdbf_dis_pkeyarr;
                                     /* Partition key names array
                                                                     */

    }  Qdb_Qdbf_dis_t;               /* End of Distributed File
                                        Definition Section           */

/*********************************************************************/
/*                   JOURNAL SECTION DECLARATIONS                    */
/*********************************************************************/
    /**  Journaling Option Flags  ************************************/
     typedef _Packed struct
                    Qdb_Qdbfojpt {  /* Journaling Option Flags       */

          unsigned Reserved_106:1;  /* Reserved.                     */

          unsigned  Qdbfjbim:1;     /* Before Images Indicator.
                                       0 = The before images are not
                                           being journaled.
                                       1 = Before images are
                                           being journaled           */

          unsigned  Qdbfjaim:1;     /* After Images Indicator.
                                       0 = The after images are not
                                           being journaled.
                                       1 = The after images are
                                           being journaled.          */

          unsigned Reserved_107:1;  /* Reserved.                     */

          unsigned  Qdbfjomt:1;     /* Omit Journal Entries
                                       Indicator.
                                       0 = All entries are being
                                           journaled.
                                       1 = The open and close entries
                                           are being omitted from
                                           the journal.              */

          unsigned Reserved_108:3;  /* Reserved.                     */

        } Qdb_Qdbfojpt_t;

    /*****************************************************************/
    /*                                                               */
    /* Journal Section                                               */
    /*                                                               */
    /* The journal information of this physical file.                */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qdbfjorn, which is*/
    /* located in the FDT header section.                            */
    /*****************************************************************/

      typedef _Packed struct
               Qdb_Qdbfjoal {       /* Journal Section               */

        char       Qdbfojrn[10];    /* Journal Name                  */

        char       Qdbfolib[10];    /* Journal Library Name          */

        Qdb_Qdbfojpt_t   Qdbfojpt;  /* Journaling Option Flags       */

        char       Qdbfjact;        /* Journaling Options.
                                       '0' = The file is not being
                                             journaled.
                                       '1' = The file is being
                                             journaled.              */

        char       Qdbfljrn[13];    /* Last Journaling date
                                       Stamp-This is the date
                                       that corresponds to the most
                                       recent time that journaling
                                       was started for the file.
                                       The date is in
                                       internal standard format
                                       (ISF), CYYMMDDHHMMSS.         */

        char      Reserved_105[29]; /* Reserved.                     */

      } Qdb_Qdbfjoal_t;


/*********************************************************************/
/*               QDBRTVFD FILD0200 FORMAT DECLARATIONS               */
/*********************************************************************/
    /**  Record format DBCS flags  ***********************************/
     typedef _Packed struct
                    Qdb_Qddffmtf {  /* Record format DBCS flags      */

       unsigned  Qddfrity:1;        /* Double-Byte Character Set
                                       (DBCS) and/or Graphic Data
                                       0 = The format does NOT
                                           contain DBCS or graphic
                                           data fields.
                                       1 = The format does contain
                                           DBCS or graphic data
                                           fields.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

       unsigned  Qddfrilt:1;        /* Double-Byte Character Set
                                       (DBCS) and/or Graphic
                                       Literals
                                       0 = The format definition for
                                           the format does NOT
                                           contain DBCS or graphic
                                           literals.
                                       1 = The format definition for
                                           the format does contain
                                           DBCS or graphic literals.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Qddfritx:1;        /* Double-Byte Character Set
                                       (DBCS) Record Format Text
                                       Description
                                       0 = The text description
                                           (TEXT) for the format
                                           does NOT contain DBCS
                                           data.
                                       1 = The text description
                                           (TEXT) for the format
                                           does contain DBCS data.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Qddfrmep:1;        /* Mapping Error Possible
                                       0 = The format does NOT
                                           contain fields which may
                                           return data mapping
                                           errors.
                                       1 = The format does contain
                                           fields which may return
                                           data mapping errors.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Qddfrdrv:1;        /* Derived Fields
                                       (Logical files only)
                                       0 = The format does NOT
                                           contain fields derived
                                           from fields in the
                                           physical file the logical
                                           file is based on, or from
                                           fields in this logical
                                           file (CONCAT or SST).
                                       1 = The format does contain
                                           fields derived from
                                           fields in the physical
                                           file the logical file is
                                           based on, or from fields
                                           in this logical file
                                           (CONCAT or SST).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  Y               */

       unsigned  Qddfrni:1;         /* Neither or Input-Only Fields
                                       (Logical files only)
                                       0 = The format does NOT
                                           contain fields which can
                                           be used neither for input
                                           nor output operations,
                                           nor does it contain
                                           fields which can be used
                                           for input operations
                                           only.
                                       1 = The format does contain
                                           fields which can be used
                                           neither for input nor
                                           output operations, or it
                                           does contain fields which
                                           can be used for input
                                           operations only.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  N               */

       unsigned  Qddfrdfi:1;        /* Default Values
                                       (Physical files only)
                                       0 = The format does NOT
                                           contain fields with
                                           default values (DFT).
                                       1 = The format does contain
                                           fields with default
                                           values (DFT).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  Y               */

       unsigned  Qddfcato:1;        /* Concatenated Fields
                                       (Logical files only)
                                       0 = The format does NOT
                                           contain fields which are
                                           concatinations of two or
                                           more fields from the
                                           physical file record
                                           format (CONCAT).
                                       1 = The format does contain
                                           fields which are
                                           concatinations of two or
                                           more fields from the
                                           physical file record
                                           format (CONCAT).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  N               */
     } Qdb_Qddffmtf_t;

    /**  Format Flags  ***********************************************/
     typedef _Packed struct
                     Qdb_Qddftflgs{ /* Format Flags                  */

           unsigned  Reserved_113:1;/* Reserved                      */

           unsigned  Qddfucsd:1;    /* UCS-2 fields
                                       0 = The format does NOT
                                           contain fields which are
                                           UCS-2.
                                       1 = The format does contain
                                           fields which are UCS-2.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfdlnk:1;    /* Datalink fields.
                                       0 = The format does NOT
                                           contain fields which are
                                           datalinks.
                                       1 = The format does contain
                                           fields which are
                                           datalinks.
                                       (DB)  CREATE: N   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfdudt:1;    /* User Defined Type fields.
                                       0 = The format does NOT
                                           contain fields which are
                                           UDTs.
                                       1 = The format does contain
                                           fields which are UDTs.
                                       (DB)  CREATE: N   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfdlob:1;    /* Large Object fields.
                                       0 = The format does NOT
                                           contain fields which are
                                           LOBs.
                                       1 = The format does contain
                                           fields which are LOBs.
                                       (DB)  CREATE: N   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */
           unsigned  Qddfutfd:1;    /* UTF-8 or UTF-16 fields.
                                       0 = The format does NOT
                                           contain fields which are
                                           UTF-8 or UTF-16.
                                       1 = The format does contain
                                           fields which are UTF-8
                                           or UTF-16.
                                       (DB)  CREATE: N   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Reserved_114:2;/* Reserved                      */

          } Qdb_Qddftflgs_t;

    /**  Flags  ******************************************************/
     typedef _Packed struct
                     Qdb_Qddflgs {  /* Flags                         */

           unsigned  Reserved_65:1; /* Reserved                      */

           unsigned  Qddfrvar:1;    /* Variable Length Fields
                                       0 = The format does NOT
                                           contain fields which are
                                           variable length (VARLEN).
                                       1 = The format does contain
                                           fields which are variable
                                           length (VARLEN).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfrgph:1;    /* Graphic Fields
                                       0 = The format does NOT
                                           contain graphic data
                                           fields.
                                       1 = The format does contain
                                           graphic data fields.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfrdtt:1;    /* Date, Time or Timestamp
                                       Fields.
                                       0 = The format does NOT
                                           contain date, time or
                                           timestamp fields.
                                       1 = The format does contain
                                           date, time or timestamp
                                           fields.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfrnul:1;    /* Null Capable Fields
                                       0 = The format does NOT
                                           contain fields which
                                           allow the null value
                                           (ALWNULL).
                                       1 = The format does contain
                                           fields which allow the
                                           null value (ALWNULL).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfrsid:1;    /* Common Coded Character Set
                                       Identifier Flag
                                       0 = NOT all character fields
                                           in the format use the
                                           same coded character set
                                           identifier (CCSID).
                                       1 = All character fields in
                                           the format use the same
                                           coded character set
                                           identifier (CCSID).  The
                                           actual CCSID can be found
                                           in variable Qddfrcid.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

           unsigned  Qddfesid:1;    /* Explicit Coded Character Set
                                       Identifier Flag
                                       0 = NO coded character set
                                           identifier (CCSID) was
                                           specified for the
                                           physical file containing
                                           the format, nor for any
                                           fields within the format.
                                       1 = A coded character set
                                           identifier (CCSID) was
                                           specified for the
                                           physical file containing
                                           the format, or for one or
                                           more fields within the
                                           format.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

            unsigned  Reserved_66:1;/* Reserved                      */

          } Qdb_Qddflgs_t;

    /*****************************************************************/
    /*  Record Structure for QDBRTVFD FILD0200 format                */
    /*****************************************************************/

    /*****************************************************************/
    /*                                                               */
    /*          FMTD HEADER                                          */
    /*                                                               */
    /*****************************************************************/
    /* This section is always located at the beginning of the        */
    /* returned data.                                                */
    /*****************************************************************/

    typedef _Packed struct
                       Qdb_Qddfmt { /* Header information
                                       The FMTD starts here.         */

       long       Qddbyrtn;         /* Bytes Returned
                                       The length, in bytes, of the
                                       data returned.                */

       long       Qddbyava;         /* Bytes Available
                                       The total length, in bytes,
                                       of the format.                */

       char       Reserved_62[24];  /* Reserved                      */

                                    /* Record status flags           */

       Qdb_Qddffmtf_t    Qddffmtf;  /* Record format DBCS flags      */

       long       Qddfxlto;         /* Offset from start of FMTD
                                       header to the translate table
                                       specifications (Qddfxl).
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  Y               */

       long       Qddfrcao;         /* OFFSET to the SELECTION
                                       specifications for CASE
                                       operators in this record
                                       format(Qddfcsl). This is only
                                       valid for query formats
                                       (DB)  CREATE: N EXTRACT: N
                                       (DF)            EXTRACT: N
                                       (QQ) QUERY:  Y                */

       long       Qddfdico;         /* Offset from start of FMTD
                                       header to the IDDU/SQL
                                       dictionary format
                                       information (Qddfdic).
                                       (DB) CREATE : Y    EXTRACT: Y
                                       (DF)               EXTRACT: N
                                       (QQ)  QUERY:  Y               */

       unsigned short Qddfrcid;     /* Common Coded Character Set
                                       Identifier.
                                       Note:  Before using this
                                       field, you should check
                                       Qddfrsid, if it is zero, then
                                       NOT all character fields in
                                       the format use the same coded
                                       character set identifier
                                       (CCSID), and this field is
                                       not valid.
                                       65535 = The format contains
                                               no character fields.
                                       nnnnn = All character fields
                                               in the format use
                                               this coded character
                                               set identifier
                                               (CCSID).
                                       (QQ)  QUERY:  Y               */

       unsigned short  Qddfsrcd;    /* Source File Coded Character
                                       Set Identifier.
                                       nnnnn = The coded character
                                               set identifier
                                               (CCSID) specified for
                                               the character portion
                                               of the source file
                                               which contained the
                                               DDS used to create
                                               the format.  (CCSID).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

       unsigned short Qddfrtcd;     /* Format Text Coded Character
                                       Set Identifier.
                                       nnnnn = The coded character
                                               set identifier
                                               (CCSID) for the text
                                               description (TEXT) of
                                               the format.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

       unsigned short Qddfrlcd;     /* Long Comment Coded Character
                                       Set Identifier.
                                       nnnnn = The coded character
                                               set identifier
                                               (CCSID) for the
                                               information about the
                                               content and purpose
                                               of the format.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

       char       Reserved_64[7];   /* Reserved                      */

       Qdb_Qddftflgs_t    Qddftflgs; /* Format flags                 */

       Qdb_Qddflgs_t      Qddflgs;  /* Flags                         */

       char       Reserved_67[4];   /* Reserved                      */

       long       Qddfrlen;         /* Record Length
                                       The sum of the lengths of all
                                       fields the format contains,
                                       excluding neither fields.
                                       (DB)  CREATE: R    EXTRACT: Y
                                       (DF)               EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       char       Qddfname[10];     /* Record Format Name
                                       The name associated with the
                                       format.
                                       (DB)  CREATE: R    EXTRACT: Y
                                       (DF)               EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       char       Qddfseq[13];      /* Level Identifier
                                       The modification level
                                       identifier of the format. It
                                       is used to verify the format
                                       has not been changed since
                                       compile time, if LVLCHK(*YES)
                                       is requested.
                                       (DB)  CREATE: N    EXTRACT: Y
                                       (DF)               EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       char       Qddftext[50];     /* Text Description (TEXT)
                                       The text description of the
                                       format.
                                       (DB)  CREATE: Y    EXTRACT: Y
                                       (DF)               EXTRACT: Y
                                       (QQ)  QUERY:  Y               */

       short      Qddffldnum;       /* Number of Fields
                                       The number of fields in the
                                       format.  There is one field
                                       header for each field.
                                       (DB)  CREATE: R    EXTRACT: Y
                                       (DF)               EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       long       Qddf_Identity_Off;   /* Offset from start of Format
                                       header to the Identity column
                                       information (Qdb_Qddfidcl).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       char       Reserved_68[107]; /* Reserved                      */

     /*char       Qddffldx[];*/     /* Start of Field Definitions
                                     (varying length)                */

     } Qdb_Qddfmt_t;


/*********************************************************************/
/*                     FIELD HEADER DECLARATIONS                     */
/*********************************************************************/
    /**   Field Status Byte 1  ***************************************/
    typedef _Packed struct
                   Qdb_Qddffldst1{  /* Field Status Byte 1           */

                                    /* Field DBCS Status             */

       unsigned  Qddffiat:1;        /* Double-Byte Character Set
                                       (DBCS) Alternate Type Field
                                       0 = The alternate type for
                                           the field does NOT
                                           contain DBCS data.
                                       1 = The alternate type for
                                           the field does contain
                                           DBCS data.
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Qddffitx:1;        /* Double-Byte Character Set
                                       (DBCS) Field Text Description
                                       0 = The text description
                                           (TEXT) for the field does
                                           NOT contain DBCS data.
                                       1 = The text description
                                           (TEXT) for the field does
                                           contain DBCS data.
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Qddffich:1;        /* Double-Byte Character Set
                                       (DBCS) Column Headings
                                       0 = The column headings
                                           (COLHDG) for the field do
                                           NOT contain DBCS data.
                                       1 = The column headings
                                           (COLHDG) for the field do
                                           contain DBCS data.
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Qddffivc:1;        /* Double-Byte Character Set
                                       (DBCS) Validity Checking
                                       Literals
                                       0 = The compare (COMP), range
                                           (RANGE) or values
                                           (VALUES) literals for the
                                           field do NOT contain DBCS
                                           data.
                                       1 = The compare (COMP), range
                                           (RANGE) or values
                                           (VALUES) literals for the
                                           field do contain DBCS
                                           data.
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Qddffrnd:1;        /* Rounding
                                       Rounding method for the
                                       field.  Currently not
                                       supported through DDS.
                                       0 = Truncate
                                           Insignificant decimal
                                           digits will be truncated.
                                       1 = Round
                                           Insignificant decimal
                                           digits will be rounded to
                                           the nearest decimal
                                           digit.
                                       (QQ)  QUERY: Y                */

       unsigned   Qddffcid:1;       /* Character Identifier Flag
                                       0 = A character identifier
                                           (CHRID) was NOT
                                           specified.
                                       1 = A character identifier
                                           (CHRID) was specified.
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       unsigned  Reserved_69:2;     /* Reserved                      */

     } Qdb_Qddffldst1_t;

    /**   Field Status Byte 2  ***************************************/
     typedef _Packed struct
                  Qdb_Qddffldst2 {  /* Field Status Byte 2
                                       Field Default Value and Null
                                       Value Allowed Indicator
                                       00 = Not NULL with default
                                       01 = Not NULL
                                       10 = NULL capable
                                       11 = Invalid
                                        (DB) CREATE: R    EXTRACT: Y
                                        (DF)              EXTRACT: N */

       unsigned  Qddffnul:1;        /* Allow Null Value (ALWNULL)
                                       0 = The null value is NOT
                                           allowed for this field.
                                       1 = The null value is allowed
                                           for this field.
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  Y               */

       unsigned  Qddffdft:1;        /* Column Default Value
                                       0 = The column has a default
                                           value.
                                       1 = The column does NOT have
                                           a default value.
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  N               */

       unsigned   Qddffvar:1;       /* Variable Length Field
                                       0 = The field is NOT a
                                           variable length field.
                                       1 = The field is a variable
                                           length field.
                                       (DF)              EXTRACT: N
                                       (QQ)  QUERY:  Y               */

       unsigned  Reserved_70:5;     /* Reserved                      */

     } Qdb_Qddffldst2_t;

    /**   Flags  *****************************************************/
     typedef _Packed struct
                    Qdb_Qddflgs2 {  /* Flags                         */

        unsigned  Qddfcorr:1;       /* Correlated Field
                                       0 = This is NOT a correlated
                                           field.
                                       1 = This is a correlated
                                           field.
                                       (QQ)  QUERY:  Y               */

        unsigned  Qddffrrn:1;       /* File Relative Record Number
                                       field.
                                       0 - This is NOT a relative
                                           record number field.
                                       1 - This is a relative record
                                           number field.
                                       (QQ)  QUERY:  Y               */

        unsigned  Reserved_71:5;    /* Reserved                      */

        unsigned  Qddffmep:1;       /* Mapping Errors Possible
                                       0 = The field can NOT return
                                           data mapping errors.
                                       1 = The field may return data
                                           mapping errors.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

      } Qdb_Qddflgs2_t;

   /**   Flags  *****************************************************/
     typedef _Packed struct
                    Qdb_Qddfflgs {  /* These flags indicate the user */
                                    /* specified value for the field */
                                    /* at the time the format was    */
                                    /* created. These flags only     */
                                    /* apply to date, time, and      */
                                    /* timestamp fields.             */
                                    /* CAUTION: If the format has    */
                                    /* ever been shared, these flags */
                                    /* may not be applicable to the  */
                                    /* file for which the API was    */
                                    /* called.                       */
        unsigned  Qdddatfmt_dft:1;  /* If on, DATFMT was defaulted.  */
                                    /*                               */
        unsigned  Qdddatfmt_job:1;  /* If on, DATFMT(*JOB) was       */
                                    /* specified.                    */
        unsigned  Qdddatsep_dft:1;  /* If on, DATSEP was defaulted.  */
                                    /*                               */
        unsigned  Qdddatsep_job:1;  /* If on, DATSEP(*JOB) was       */
                                    /* specified.                    */
        unsigned  Qddtimfmt_dft:1;  /* If on, TIMFMT was defaulted.  */
                                    /*                               */
        unsigned  Qddtimsep_dft:1;  /* If on, TIMSEP was defaulted.  */
                                    /*                               */
        unsigned  Qddtimsep_job:1;  /* If on, TIMSEP(*JOB) was       */
                                    /* specified.                    */
        unsigned  QddSAAfmt:1;      /* If on, SAA format was         */
                                    /* specified.                    */
       } Qdb_Qddfflgs_t;

/*********************************************************************/
/*              Complex Object Field Flags                           */
/*********************************************************************/
    /**   Default Attributes  ****************************************/
     typedef _Packed struct
                    Qdb_Qddflagco  {  /* Complex Objects             */

         unsigned  Reserved_64:3;   /* Reserved.                     */
         unsigned  Qddfucs:1;       /* UCS-2 field.
                                       0 = The field is not a
                                           UCS-2 field.
                                       1 = The field is a UCS-2 field.
                                                                     */

         unsigned  Qddfudt:1;       /* User Defined Type field.
                                       0 = The field is not a UDT field.
                                       1 = The field is a UDT field.
                                                                     */
         unsigned  Qddf_Identity_Col:1; /* Identity Column field.
                                       0 = The field is not an
                                           Identity column.
                                       1 = The field is an Identity
                                           column.                   */
         unsigned  Qddf_Rowid_Col:1; /* ROWID Column field.
                                       0 = The field is not a
                                           ROWID column.
                                       1 = The field is a ROWID
                                           column.                   */
         unsigned  Qddfutf:1;        /* UTF-8 or UTF-16 field.
                                       0 = The field is not a
                                           UTF-8 or UTF-16 field.
                                       1 = The field is a UTF-8 or
                                           UTF-16 field.             */



       } Qdb_Qddflagco_t;

/*********************************************************************/
/*              UCS-2 Field Values                                   */
/*********************************************************************/
     typedef _Packed struct
                    Qdb_Qdducs2co  {  /* UCS-2 fields values.    @AMA*/

         unsigned short Qddfdspl;    /*  Field-display-length:       */
                                     /*  Used with a UCS-2 field when*/
                                     /*  the CCSID keyword modifies  */
                                     /*  the display length.     @AMA*/
         unsigned  Qddfucsp:1;       /*  UCS2_conversion_flag:       */
                                     /*  When referenced by a printer*/
                                     /*  file,indicates whether UCS-2*/
                                     /*  characters are to be        */
                                     /*  converted before printing.  */
                                     /*  1 = do not convert.         */
                                     /*                          @AMA*/
         unsigned  Qddfucsm:1;       /*  Minimum-display-length-flag:*/
                                     /*  When referenced by a display*/
                                     /*  file.                       */
                                     /* 1 = Qddfdspl contains the    */
                                     /*     number of display        */
                                     /*     positions allowed equal  */
                                     /*     to the field length      */
                                     /*     defined in the DDS.      */
                                     /*  Example:   5G  CCSID(13488).*/
                                     /*  The Qddfdspl value is 5.@AMA*/
         unsigned  Qddfucsl:1;       /*  Length-of-display-field_flag*/
                                     /*  When referenced by a display*/
                                     /*  file.                       */
                                     /*  1 = the DDS for the field   */
                                     /*  provided the allowed number */
                                     /*  of display positions.       */
                                     /*  This number is in Qddfdspl. */
                                     /*                          @AMA*/
         unsigned  Reserved_130:5;   /* Reserved.                    */

         char      Qddfencode[2];    /* Encoding scheme for field's  */
                                     /* CCSID.                       */
                                     /* '0000'X = No encoding scheme.*/
                                     /*                          @AMA*/
       } Qdb_Qdducs2co_t;

    /*****************************************************************/
    /*                                                               */
    /*          FIELD HEADER                                         */
    /*                                                               */
    /*****************************************************************/
    /* This section is located immediately after the FMTD header     */
    /*****************************************************************/

   typedef _Packed struct
            Qdb_Qddffld {           /* Field Definition
                                       The definition for a field in
                                       format.  There is a linked
                                       list of these field
                                       definitions, one for each
                                       field.  The number of fields
                                       is stored in the variable
                                       Qddffldnum.                   */

       long       Qddfdefl;         /* Length of Field
                                       The length of the entire
                                       field structure, including
                                       all sub-sections.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       char       Qddffldi[30];     /* Internal Field Name
                                       The name of the field in the
                                       logical format, if this is a
                                       logical format.  If this is a
                                       physical format, this name is
                                       a duplicate of Qddfflde.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       char       Qddfflde[30];     /* External Field Name
                                       The name of the field in the
                                       physical format, if this is a
                                       physical format.  If this is
                                       a logical format, this name
                                       is the name of the field in
                                       a physical format, on which
                                       this field is based.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       char       Qddfftyp[2];      /* Data Type
                                       The data type of the field.
                                       X'0000' = BINARY . . . . . .
                                       X'0001' = FLOAT  . . . . . .
                                       X'0002' = ZONED DECIMAL .  .
                                       X'0003' = PACKED DECIMAL . .
                                       X'0004' = CHARACTER  . . . .
                                       X'8004' = VAR CHARACTER  . .
                                       X'0005' = GRAPHIC   .  . . .
                                       X'0006' = DBCS-CAPABLE . . .
                                       X'8005' = VAR GRAPHIC  . . .
                                       X'8006' = VAR DBCS-CAPABLE .
                                       X'000B' = DATE . . . . . . .
                                       X'000C' = TIME . . . . . . .
                                       X'000D' = TIMESTAMP  . . . .
                                       X'4004' = BLOB/CLOB  . . . .
                                       X'4005' = DBCLOB . . . . . .
                                       X'4006' = CLOB-OPEN  . . . .
                                       X'8044' = DATALINK-CHAR  . .
                                       X'8046' = DATALINK-OPEN  . .
                                       X'FFFF' = NULL . . . . . . .
                                                 NULL is only valid
                                                 for data base query
                                                 formats. If NULL is
                                                 specified, query
                                                 will determine the
                                                 type and attributes
                                                 of the field from
                                                 the based on fields
                                                 if Qddffvar is off.
                                                 If Qddffvar is on
                                                 then the attributes
                                                 are set from the
                                                 variable's operand.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       char       Qddffiob;         /* Usage
                                       X'01' = Input-Only
                                               The field can be used
                                               for input operations
                                               only.
                                       X'02' = Output Only
                                               The field can be used
                                               for output operations
                                               only.
                                       X'03' = Both
                                               The field can be used
                                               for both input and
                                               output operations.
                                       X'04' = Neither
                                               The field can be used
                                               for neither input nor
                                               output operations.
                                       X'FF' = Unknown
                                               The usage is set
                                               appropriately during
                                               query processing.
                                               This value is only
                                               valid for query.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R               */

       long       Qddffobo;         /* Output Buffer Offset
                                       The offset from the start of
                                       the output buffer, indicating
                                       the position of this field
                                       within the buffer.
                                       (DB)  CREATE: R    EXTRACT: Y
                                       (DF)               EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       long       Qddffibo;         /* Input Buffer Offset
                                       The offset from the start of
                                       the input buffer, indicating
                                       the position of this field
                                       within the buffer.
                                       (DB)  CREATE: R    EXTRACT: Y
                                       (DF)               EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       short      Qddffldb;         /* Length
                                       The length of the field.
                                       - For character fields, this
                                         is the number of
                                         characters.
                                       - For float fields:
                                         4 = Single
                                         8 = Double
                                       - For variable length fields,
                                         this is the maximum length
                                         the field can be, plus two
                                         for the length.
                                       - For date/time/timestamp
                                         fields, this is the length
                                         of the formatted data.  So
                                         this may vary, depending on
                                         the format specified.
                                       - For graphic data fields,
                                         this is the number of
                                         bytes.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R, unless data
                                         type (Qddffldt) is X'FFFF'. */

       short      Qddffldd;         /* Number of Digits
                                       The number of digits in the
                                       field.
                                       - For numeric fields, this
                                         is the number of digits.
                                       - For graphic data fields,
                                         this is the number of DBCS
                                         characters the field can
                                         contain.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R, unless data
                                         type (Qddffldt) is x'FFFF'. */

       short      Qddffldp;         /* Decimal Positions
                                       The number of decimal
                                       positions to the right of the
                                       decimal point.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R, unless data
                                         type (Qddffldt) is x'FFFF'. */

       char       Qddffkbs;         /* Keyboard Shift (REFSHIFT)
                                       The keyboard shift attribute
                                       of the field.
                                       'X' = Alphabetic only
                                       'A' = Alphameric shift
                                       'N' = Numeric shift
                                       'S' = Signed numeric
                                       'Y' = Numeric only
                                       'D' = Digits only
                                       'M' = Numeric only character
                                       'W' = Katakana
                                       'H' = Hexadecimal
                                       'I' = Inhibit keyboard entry
                                       'J' = DBCS only
                                       'E' = DBCS either
                                       'O' = DBCS open
                                       'B' = Binary character
                                       X'00' = No shift specified
                                       (DB)  CREATE: Y   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  R, unless data
                                         type (Qddffldt) is x'FFFF'. */

       Qdb_Qddffldst1_t Qddffldst1; /* Field Status Byte 1           */

       short      Qddfjref;         /* Join Reference (JREF)
                                       (Logical files only)
                                       For fields whose names are
                                       specified in more than one
                                       physical file, this value
                                       identifies which physical
                                       file contains the field.
                                       0 = The fields previously
                                           defined in this format
                                           will be searched for the
                                           external name.  If the
                                           field is not found, the
                                           based on file formats
                                           will be searched.  If the
                                           field name is found in
                                           more than one file
                                           format, an error is
                                           signalled.  This value is
                                           only allowed on a query
                                           format.
                                       n = The external field name
                                           is to be found in the
                                           file format referenced
                                           by using this value as a
                                           join reference index into
                                           the file list.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)                       N
                                       (QQ)  QUERY:  R               */

       Qdb_Qddffldst2_t Qddffldst2; /* Field Status Byte 2           */

       Qdb_Qddflgs2_t   Qddflgs2;   /* Flags                         */

       short      Qddfvarx;         /* Variable Field Index
                                       Index into the list of all
                                       variable field values for the
                                       query.
                                       (QQ)  QUERY:  Y               */

       char       Reserved_72[2];   /* Reserved                      */

       short      Qddflalc;         /* Allocated Length
                                       The number of bytes allocated
                                       for the field in the fixed
                                       portion of the file.
                                       or...
                                       Date/Time/Timestamp Length
                                       The number of bytes the
                                       based-on field for the date/
                                       time/timestamp occupies.
                                       (QQ)  QUERY:  R, unless field
                                       type (Qddffldt) is x'FFFF'    */

       char       Qddfdttf;         /* Date Format (DATFMT)
                                       The format of the date field.
                                       Note:  Before using this
                                              field, you should
                                              check Qddfftyp, if it
                                              is not '000B'X,
                                              '000C'X or '000D'X,
                                              then this field is not
                                              valid.
                                       'FE'X = The date format
                                               associated with the
                                               job is used.
                                       'FF'X = The date format
                                               associated with the
                                               QDT is used.
                                       '01'X = *USA (IBM USA
                                               Standard) format is
                                               used.
                                               e.g. mm/dd/yyyy
                                       '03'X = *ISO (International
                                               Standards
                                               Organization) format
                                               is used.
                                               e.g. yyyy-mm-dd
                                       '05'X = *EUR (IBM European
                                               Standard) format is
                                               used.
                                               e.g. dd.mm.yyyy
                                       '07'X = *JIS Japanese
                                               Industrial Standard
                                               Christian Era) format
                                               is used.
                                               e.g. yyyy-mm-dd
                                       '17'X = *MDY (Month/Day/Year)
                                               format is used.
                                               e.g. mm/dd/yy
                                       '18'X = *DMY (Day/Month/Year)
                                               format is used.
                                               e.g. dd/mm/yy
                                       '19'X = *YMD (Year/Month/Day)
                                               format is used.
                                               e.g. yy/mm/dd
                                       '1A'X = *JUL (Julian) format
                                               is used.
                                               e.g. yy/ddd
                                       or...
                                       Time Format (TIMFMT)
                                       The format of the time field.
                                       'FE'X = The time format
                                               associated with the
                                               job is used.
                                       'FF'X = The time format
                                               associated with the
                                               QDT is used.
                                       '01'X = *USA (IBM USA
                                               Standard) format is
                                               used.
                                               e.g. hh:mm AM or
                                                    hh:mm PM
                                       '03'X = *ISO (International
                                               Standards
                                               Organization) format
                                               is used.
                                               e.g. hh.mm.ss
                                       '05'X = *EUR (IBM European
                                               Standard) format is
                                               used.
                                               e.g. hh.mm.ss
                                       '07'X = *JIS Japanese
                                               Industrial Standard
                                               Christian Era) format
                                               is used.
                                               e.g. hh:mm:ss
                                       '09'X = The SAA timestamp is
                                               used.
                                       '1B'X = *HMS (Hour/Minute/
                                               Second) format is
                                               used.
                                               e.g. hh:mm:ss
                                       (QQ)  QUERY:  Y               */

       char       Qddfdtts;         /* Date Separator (DATSEP)
                                       The separator character to be
                                       used with a date field.
                                       or...
                                       Time Separator (TIMSEP)
                                       The separator character to be
                                       used with a time field.
                                       Note:  Before using this
                                              field, you should
                                              check Qddfftyp, if it
                                              is not '000B'X,
                                              '000C'X or '000D'X,
                                              then this field is not
                                              valid.
                                       '00'X = The default separator
                                               associated with the
                                               job is to be used.
                                       'EE'X = The implied separator
                                               is to be used.
                                       '/'   = The slash separator
                                               is to be used.
                                       '-'   = The dash separator
                                               is to be used.
                                       '.'   = The period separator
                                               is to be used.
                                       ','   = The comma separator
                                               is to be used.
                                       ' '   = The blank separator
                                               is to be used.
                                       ':'   = The colon separator
                                               is to be used.
                                       (QQ)  QUERY:  Y               */

       unsigned short Qddfcsid;     /* Common Coded Character Set
                                       Identifier (CCSID)
                                       00000 = The CCSID associated
                                               with the job is to be
                                               used for data
                                               translation.
                                       65535 = No data translation
                                               is to be done.
                                       nnnnn = This coded character
                                               set identifier
                                               (CCSID) is to be used
                                               for data translation.
                                       (QQ)  QUERY:  Y               */

       unsigned short  Qddftsid;    /* Text Description Common Coded
                                       Character Set Identifier
                                       00000 = The CCSID associated
                                               with the job is to be
                                               used for translating
                                               the text description.
                                       65535 = The text description
                                               is not to be
                                               translated.
                                       nnnnn = This coded character
                                               set identifier
                                               (CCSID) is to be used
                                               for translating the
                                               text description.
                                       (QQ)  QUERY:  Y               */

       unsigned short  Qddfhsid;    /* Column Heading Common Coded
                                       Character Set Identifier
                                       00000 = The CCSID associated
                                               with the job is to be
                                               used for translating
                                               the column headings.
                                       65535 = The column headings
                                               are not to be
                                               translated.
                                       nnnnn = This coded character
                                               set identifier
                                               (CCSID) is to be used
                                               for translating the
                                               column headings.
                                       (QQ)  QUERY:  Y               */

       unsigned short  Qddflsid;    /* Long Comment Common Coded
                                       Character Set Identifier
                                       00000 = The CCSID associated
                                               with the job is to be
                                               used for translating
                                               the long comment.
                                       65535 = The long comment is
                                               not to be translated.
                                       nnnnn = This coded character
                                               set identifier
                                               (CCSID) is to be used
                                               for translating the
                                               long comment.
                                       (QQ)  QUERY:  Y               */

       char       Qddfldur;         /* Labeled Duration
                                       The type of labeled duration
                                       this field defines.
                                       '00'X = The field is not a
                                               labeled duration.
                                       '0D'X = Year/Years.
                                       '0E'X = Month/Months.
                                       '0F'X = Day/Days.
                                       '10'X = Hour/Hours.
                                       '11'X = Minute/Minutes.
                                       '12'X = Second/Seconds.
                                       '13'X = Microsecond/
                                               Microseconds.
                                       (QQ)  QUERY:  Y               */

       Qdb_Qddfflgs_t Qddfflgs;     /* Flags.                        */

       unsigned short  Qddfwsid;    /* Edit Word Common Coded
                                       Character Set Identifier
                                       00000 = The CCSID associated
                                               with the job is to be
                                               used for translating
                                               the edit word.
                                       65535 = The edit word is not
                                               to be translated.
                                       nnnnn = This coded character
                                               set identifier
                                               (CCSID) is to be used
                                               for translating the
                                               edot word.
                                       (QQ)  QUERY:  Y               */

       char       Reserved_61;      /* Reserved                      */
       char       Reserved_62;      /* Reserved                      */
       unsigned short  Reserved_63; /* Reserved.                     */

       Qdb_Qddflagco_t Qddflagco;   /* Complex Object flags.         */

       Qdb_Qdducs2co_t Qdducs2co;   /* UCS-2 field values.       @AMA*/

       char       Reserved_74[63];  /* Reserved                  @AMA*/

       long       Qddfcplx;         /* Offset from start of Field
                                       header to the Complex Object
                                       field information
                                       (Qdb_Qddffcpli).
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       long       Qddfbmaxl;        /* Maximum length of the LOB.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */
       unsigned short  Qddfbpadl;   /* Pad length of the LOB.
                                       (DB)  CREATE: R   EXTRACT: Y
                                       (DF)              EXTRACT: Y
                                       (QQ)  QUERY:  N               */

       long       Qddfdicd;         /* Offset from start of Field
                                       header to IDDU/SQL dictionary
                                       field information (Qddfdicf)
                                       (QQ)  QUERY:  Y               */

       long       Qddfdftd;         /* Offset from start of Field
                                       header to default value
                                       description (Qddfdft)
                                       (QQ)  QUERY:  Y               */

       long       Qddfderd;         /* Offset from start of Field
                                       header to derived field
                                       description (or to the
                                       concatenated field description
                                       if its file is externally
                                       described) (Qddfderv)
                                       (QQ)  QUERY:  Y               */

       char       Reserved_75[6];   /* Reserved                      */

       long       Qddftxtd;         /* Offset from start of Field
                                       header to field text
                                       description (Qddfftxt)
                                       (QQ)  QUERY:  N               */

       char       Reserved_102[2];  /* Reserved                      */

       long       Qddfrefd;         /* Offset from start of Field
                                       header to field reference
                                       information (Qddfrefi)
                                       (QQ)  QUERY:  N               */

       short      Qddfedtl;         /* Length of the edit code /
                                       edit word information for the
                                       field
                                       (QQ)  QUERY:  N               */

       long       Qddfedtd;         /* Offset from start of Field
                                       header to the edit code /
                                       edit word information
                                       (Qddfedcw)
                                       (QQ)  QUERY:  N               */

       char       Reserved_76[2];   /* Reserved                      */

       long       Qddfchd;          /* Offset from start of Field
                                       header to the column heading
                                       information (Qddfcolh)
                                       (QQ)  QUERY:  N               */

       short      Qddfvckl;         /* Length of the validity
                                       checking data present for the
                                       field.
                                       (QQ)  QUERY:  N               */

       long       Qddfvckd;         /* Offset from start of Field
                                       header to the validity
                                       checking data (Qddfvchk)
                                       (QQ)  QUERY:  N               */

       long       Qddfxals;         /* Offset from start of Field
                                       header to alias name entry
                                       (QQ)  QUERY:  N               */

       long       Qddffpnd;         /* Offset from start of Field
                                       header to the the field
                                       prompted numeric editing
                                       information (Qddfdfne)
                                       (QQ)  QUERY:  N               */

       char       Reserved_77[8];   /* Reserved                      */

     /*char       Qddfvpx[];*/      /* START OF THE VARIABLE PORTION
                                       OF THE FIELD DESCRIPTION
                                       (varying length)              */

     } Qdb_Qddffld_t;



    /*****************************************************************/
    /*                                                               */
    /*          Complex Object Field Type Information                */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfcplx, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

     typedef _Packed struct
                    Qdb_Qddfcpli {  /* Field text                    */


       long       Qddflenu;         /* If the field is a UDT,        */
                                    /* this length is the length     */
                                    /* of the UDT name.              */
       char       Qddfnudt[128];    /* UDT name.                     */
       char       Qddfludt[10];     /* UDT library name.             */
       char       Qddfdlink;        /* If the field is a datalink,   */
                                    /* this is the link control:     */
                                    /*  N = No link control.         */
                                    /*  Y = Link control.            */
       char       Qddfdinte;        /* If the field is a datalink,   */
                                    /* this is the link integrity:   */
                                    /*  A = All under control.       */
                                    /*  S = Selective control.       */
                                    /*      This value is not        */
                                    /*      supported yet.           */
       char       Qddfdrper[2];     /* If the field is a datalink,   */
                                    /* this is the read permisssion: */
                                    /*  FS = File system.            */
                                    /*  DB = Database.               */
       char       Qddfdwper[2];     /* If the field is a datalink,   */
                                    /* this is the write             */
                                    /* permission:                   */
                                    /*  FS = File system.            */
                                    /*  BL = Blocked.                */
       char       Qddfdreco;        /* If the field is a datalink,   */
                                    /* the database manager will     */
                                    /* recover the file:             */
                                    /*  Y = Yes. This value is not   */
                                    /*      supported yet.           */
                                    /*  N = No.                      */
       char       Qddfdunlk;        /* If the field is a datalink,   */
                                    /* the database manager will     */
                                    /* restore the file owner on     */
                                    /* an unlink, or delete the file */
                                    /* when unlinking the file.      */
                                    /*  R = Restore the owner.       */
                                    /*  D = Delete the file.         */
       char       Qddrev150[10];    /* Reserved.                     */
     } Qdb_Qddfcpli_t;              /*                               */

    /*****************************************************************/
    /*                                                               */
    /*          IDENTITY Column/ROWID Field Information              */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddf_Identity_Off */
    /* which is located in the Field header section.                 */
    /*****************************************************************/

     typedef _Packed struct
                    Qdb_Qddfidcl {   /* IDENTITY column/ROWID info   */
                                     /* NOTE: Only                   */
                                     /* Qddf_ROWID_Generate          */
                                     /* applies to ROWID columns.    */
       short Qddf_Id_Len;            /* Length of identity column/   */
                                     /* ROWID information.           */
       decimal(31,0) Qddf_Id_Orig_Start_With;
                                     /* Identity Original START WITH */
                                     /* value                        */
       decimal(31,0) Qddf_Id_Curr_Start_With;
                                     /* Identity Current START WITH  */
                                     /* value.  (Changed using ALTER */
                                     /* TABLE RESTART WITH.)         */
       long Qddf_Id_Increment_By;    /* Identity INCREMENT BY value. */
       decimal(31,0) Qddf_Id_Minimum;
                                     /* Identity MINIMUM value.      */
       decimal(31,0) Qddf_Id_Maximum;
                                     /* Identity MAXIMUM value.      */
       char Qddf_Id_Cycle;           /* Identity CYCLE indicator.    */
                                     /* 1 = Cycling will occur.      */
                                     /* 0 = Cycling will not occur.  */
       char Qddf_Id_Order;           /* Identity ORDER mode.         */
                                     /* 1 = Values are generated in  */
                                     /*     order of request.        */
                                     /* 0 = Values do not need to be */
                                     /*     generated in order of    */
                                     /*     request.                 */
       char Qddf_Id_Generate;        /* Identity GENERATE indicator. */
                                     /* 1 = GENERATED BY DEFAULT.    */
                                     /* 0 = GENERATE ALWAYS.         */
       unsigned long Qddf_Id_Curr_Cache; /* Identity CACHE value     */
       char  Qddf_Rowid_Generate;    /* ROWID GENERATE indicator     */
                                     /* 1 = GENERATED BY DEFAULT.    */
                                     /* 0 = GENERATE ALWAYS.         */
       char  Qddf_Id_Reserved1[53];  /* Reserved.                    */


     } Qdb_Qddfidcl_t;              /*                               */



    /*****************************************************************/
    /*                                                               */
    /*          FIELD TEXT                                           */
    /*                                 (QQ)  QUERY:  N               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddftxtd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

     typedef _Packed struct
                    Qdb_Qddfftxt {  /* Field text                    */

       char      Qddfftxt[50];      /* Text (TEXT)
                                       Text description of the
                                       field.                        */
     } Qdb_Qddfftxt_t;

/*********************************************************************/
/*                REFERENCE INFORMATION DECLARATIONS                 */
/*********************************************************************/
    /**   Modification Flags  ****************************************/
     typedef _Packed struct
                    Qdb_Qddfrcde {  /* Modification Flags            */

        unsigned   Qddfdupe:1;      /* Modifications
                                       0 = The field has NOT been
                                           modified.
                                       1 = The field has been
                                           modified.                 */

        unsigned   Qddfnmec:1;      /* Name Modification
                                       0 = The name of the field has
                                           NOT been modified.
                                       1 = The name of the field has
                                           been modified.            */

        unsigned   Qddftypc:1;      /* Data Type Modification
                                       0 = The data type of the
                                           field has NOT been
                                           modified.
                                       1 = The data type of the
                                           field has been modified.  */

        unsigned   Qddflenc:1;      /* Field Length Modification
                                       0 = The length of the field
                                           has NOT been modified.
                                       1 = The length of the field
                                           has been modified.        */

        unsigned  Qddfdecc:1;       /* Precision Modification
                                       0 = The precision of the
                                           field has NOT been
                                           modified.
                                       1 = The precision of the
                                           field has been modified.  */

        unsigned  Qddfedtc:1;       /* Edit Information Modification
                                       0 = The edit information of
                                           the field has NOT been
                                           modified.
                                       1 = The edit information of
                                           the field has been
                                           modified.                 */

        unsigned   Qddfvc:1;        /* Validity Checking Information
                                       Modification
                                       0 = The validity checking
                                           information of the field
                                           has NOT been modified.
                                       1 = The validity checking
                                           information of the field
                                           has been modified.        */

        unsigned   Qddfothr:1;      /* Other Modification
                                       0 = Other information of the
                                           field has NOT been
                                           modified.
                                       1 = Other information of the
                                           field has been modified.  */

      } Qdb_Qddfrcde_t;

    /*****************************************************************/
    /*                                                               */
    /*          REFERENCE INFORMATION                                */
    /*                                 (QQ)  QUERY:  N               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfrefd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/


  typedef _Packed struct
           Qdb_Qddfrefi {           /* Reference Information         */

       Qdb_Qddfrcde_t    Qddfrcde;  /* Modification Flags            */

       char       Qddfrfil[10];     /* Referenced File Name
                                       The name of the file the
                                       field references.             */

       char       Qddfrlib[10];     /* Referenced File Library
                                       The name of the library
                                       containing the file the field
                                       references.                   */

       char       Qddfrfmt[10];     /* Referenced Record Format
                                       The name of the record format
                                       containing the field
                                       referenced.                   */

       char       Qddfrfld[30];     /* Referenced Field
                                       The name of the field
                                       referenced.                   */

       char       Reserved_78[19];  /* Reserved                      */

     } Qdb_Qddfrefi_t;

/*********************************************************************/
/*                       EDIT CODE DECLARATIONS                      */
/*********************************************************************/
    /**   Edit Code Information  *************************************/
     typedef _Packed struct
                    Qdb_Qddfecdi {  /* Edit Code Information         */

        char        Qddfecde;       /* Edit Code (EDTCDE)
                                       Edit code for the field when
                                       it is referred to later
                                       during display or printer
                                       file creation.                */

        char        Qddfecdx;       /* Floating Currency Symbol
                                       '*' = Asterisk Protection
                                             Asterisks are displayed
                                             to the left of
                                             significant digits.
                                       floating currency symbol =
                                             The symbol specified
                                             appears to the left of
                                             the first significant
                                             digit.                  */

      } Qdb_Qddfecdi_t;

    /*****************************************************************/
    /*                                                               */
    /*          EDIT CODE / EDIT WORD INFORMATION                    */
    /*                                 (QQ)  QUERY:  N               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfedtd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfedcw {           /* Edit Information              */

       Qdb_Qddfecdi_t    Qddfecdi;  /* Edit Code Information         */

       char       Reserved_79[14];  /* Reserved                      */

     /*char       Qddfewd[];*/      /* Edit Word (EDTWRD)
         (varying length)              The form in which the field
                                       values are to be displayed.
                                       Note:  Before using this
                                              field, you should
                                              check Qddfecde, if it
                                              is not blank, then
                                              this field is not
                                              valid.  The length of
                                              this field, if
                                              present, is included
                                              in Qddfedtl.           */
     } Qdb_Qddfedcw_t;

/*********************************************************************/
/*                     NUMERIC EDIT DECLARATIONS                     */
/*********************************************************************/
    /**   Negative Sign Information  *********************************/
     typedef _Packed struct
                        Qdb_Qnsi {  /* Negative Sign Information     */

        char       Qddfdnsc;        /* Display Negative Sign
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1' = The negative sign
                                             character will be
                                             displayed for negative
                                             values.
                                       '2' = The negative sign
                                             character will NOT be
                                             displayed for negative
                                             values.                 */

        char       Qddfdnsl[6];     /* Left Negative Sign Value
                                       The symbol to be displayed
                                       to the left of the digits to
                                       indicate a negative value.
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid. */

        char       Qddfdnsr[6];     /* Right Negative Sign Value
                                       The symbol to be displayed
                                       to the right of the digits to
                                       indicate a negative value.
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid. */

      } Qdb_Qnsi_t;

    /**   Currency Symbol Information   ******************************/
     typedef _Packed struct
                        Qdb_Qcsi {  /* Currency Symbol Information   */

        char       Qddfdcsy;        /* Display Currency Symbol
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1' = The currency symbol
                                             will be displayed.
                                       '2' = The currency symbol
                                             will NOT be displayed.  */

        char       Qddfdcsl[6];     /* Left Currency Symbol Value
                                       The symbol to be displayed
                                       to the left of the digits to
                                       indicate currency.
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid. */

        char       Qddfdcsr[6];     /* Right Currency Symbol Value
                                       The symbol to be displayed
                                       to the right of the digits to
                                       indicate currency.
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid. */

      } Qdb_Qcsi_t;

    /**   Leading Zero Information  **********************************/
     typedef _Packed struct
                        Qdb_Qlzi {  /* Leading Zero Information      */

        char       Qddfdrlz;        /* Replace Leading Zeros
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1' = Leading zeros are
                                             replaced.
                                       '2' = Leading zeros are NOT
                                             replaced.               */

        char       Qddfdrlv;        /* Leading Zero Replacement
                                       Value
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1' = Leading zeros are
                                             replaced with blanks.
                                       '2' = Leading zeros are
                                             replaced with asterisks.
                                       '3' = Leading zeros are
                                             replaced with blanks,
                                             and left currency
                                             symbol is shifted to
                                             the right.              */

        char       Qddfdlzo;        /* Single Leading Zero
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1' = A zero is displayed to
                                             the left of the decimal
                                             point when there are no
                                             significant digits to
                                             the left of the decimal
                                             point.
                                       '2' = A zero is NOT displayed
                                             to the left of the
                                             decimal point when
                                             there are no
                                             significant digits to
                                             the left of the decimal
                                             point.                  */

      } Qdb_Qlzi_t;

    /*****************************************************************/
    /*                                                               */
    /*          FIELD PROMPTED NUMERIC EDITING INFORMATION           */
    /*                                 (QQ)  QUERY:  N               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddffpnd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfdfne {           /* IDDU/SQL Dictionary Field
                                       Prompted Numeric Editing
                                       Information.                  */

       char       Reserved_80[2];   /* Reserved                      */

       char       Qddfddts;         /* Date Separator (DATSEP)
                                       The separator character to be
                                       used with a date field.
                                       or...
                                       Time Separator (TIMSEP)
                                       The separator character to be
                                       used with a time field.
                                       '00'X = This is not a date
                                               or time field.  The
                                               numeric editing
                                               information should be
                                               used.
                                       '1'   = The period separator
                                               is to be used. "."
                                       '2'   = The slash separator
                                               is to be used. "/"
                                       '3'   = The colon separator
                                               is to be used. ":"
                                       '4'   = The dash separator
                                               is to be used. "-"
                                       '5'   = The comma separator
                                               is to be used. ","    */

       char       Qddfddpc;         /* Decimal Point Character
                                       The character to be used to
                                       separate decimal digits.
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1'   = The period decimal
                                               is to be used. "."
                                       '2'   = The comma decimal
                                               is to be used. ","
                                       '3'   = The colon decimal
                                               is to be used. ":"
                                       '4'   = The dollar decimal
                                               is to be used. "$"
                                       '5'   = No decimal is to be
                                               used.                 */

       char       Qddfdtsc;         /* Thousands Separator Character
                                       The character to be used to
                                       group digits by threes.
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1'   = The period thousands
                                               is to be used. "."
                                       '2'   = The comma thousands
                                               is to be used. ","
                                       '3'   = The apostrophe
                                               thousands is to be
                                               used. "'"
                                       '4'   = The blank thousands
                                               is to be used. " "
                                       '5'   = No thousands is to be
                                               used.                 */

       Qdb_Qnsi_t            Qnsi;  /* Negative Sign Information     */

       Qdb_Qcsi_t            Qcsi;  /* Currency Symbol Information   */

       char       Qddfdpzv;         /* Print Zero Value
                                       Note:  Before using this
                                       field, you should check
                                       Qddfddts, if it is not '00'X
                                       then this field is not valid.
                                       '1' = A zero value is
                                             displayed.
                                       '2' = A zero value is NOT
                                             displayed.              */

       Qdb_Qlzi_t            Qlzi;  /* Leading Zero Information      */


       char       Reserved_81[29];  /* Reserved                      */

     } Qdb_Qddfdfne_t;

    /*****************************************************************/
    /*                                                               */
    /*          COLUMN HEADING INFORMATION                           */
    /*                                 (QQ)  QUERY:  N               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfchd, which    */
    /* is located in the Field header section.                       */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfcolh {           /* Column Heading (COLHDG)
                                       Column headings used for this
                                       field when it is displayed    */

        char        Qddfch1[20];    /* Column Heading #1
                                       The first column heading, as
                                       specified on the COLHDG DDS
                                       keyword, without the quotes.
                                       (DF)              EXTRACT: N  */

        char        Qddfch2[20];    /* Column Heading #2
                                       The second column heading, as
                                       specified on the COLHDG DDS
                                       keyword, without the quotes.
                                       (DF)              EXTRACT: N  */

        char        Qddfch3[20];    /* Column Heading #3
                                       The third column heading, as
                                       specified on the COLHDG DDS
                                       keyword, without the quotes.
                                       (DF)              EXTRACT: N  */

      } Qdb_Qddfcolh_t;

    /*****************************************************************/
    /*                                                               */
    /*          VALIDITY CHECKING INFORMATION                        */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfvckd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfvchk {           /* Validity Checking Information
                                       (CHECK), (COMP), (RANGE), and
                                       (VALUES)                      */

       short      Qddfvcnume;       /* Number of Validity Check
                                       Entries                       */

       char       Reserved_82[14];  /* Reserved                      */

     /*char       Qddfvcen[];*/     /* Validity Checking Entry Array
                                       (varying length)              */

     } Qdb_Qddfvchk_t;

  typedef _Packed struct
           Qdb_Qddfvcst {           /* Validity Checking Entry       */

       char       Qddfvccd;         /* DDSI Keyword Identifier
                                       '63'X = CHKMSGID
                                       '64'X = CHECK(ME)
                                       '66'X = CHECK(FE)
                                       '67'X = CHECK(MF)
                                       '71'X = RANGE
                                       '72'X = VALUES
                                       '73'X = COMP(GT)
                                       '74'X = COMP(GE)
                                       '75'X = COMP(EQ)
                                       '76'X = COMP(NE)
                                       '77'X = COMP(LE)
                                       '78'X = COMP(LT)
                                       '79'X = COMP(NL)
                                       '7A'X = COMP(NG)
                                       'A0'X = CHECK(M10)
                                       'A1'X = CHECK(M11)
                                       'A2'X = CHECK(VN)
                                       'A3'X = CHECK(AB)
                                       'A5'X = CHECK(VNE)
                                       'A6'X = CHECK(M10F)
                                       'A7'X = CHECK(M11F)           */

       short      Qddfvcnump;       /* Number of Parameters          */

       short      Qddfvcel;         /* Length of This Validity Check
                                       Entry                         */

       char       Reserved_83[11];  /* Reserved.                     */

     /*char       Qddfvcpm[];*/     /* Validity Checking Parameter
                                       Array (varying length)        */

     } Qdb_Qddfvcst_t;

  typedef _Packed struct
           Qdb_Qddfvcpr {           /* Validity Checking Parameter   */

       short      Qddfvcpl;         /* Length of the Validity
                                       Checking Parameter Qddfvcpv   */

       char       Reserved_84[14];  /* Reserved.                     */

     /*char       Qddfvcpv[];*/     /* Validity Checking Parameter
                                       Value (varying length)        */

     } Qdb_Qddfvcpr_t;

    /*****************************************************************/
    /*                                                               */
    /*          ALIAS NAME STRUCTURE                                 */
    /*                                 (QQ)  QUERY:  N               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfxals, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfalis {           /* Alternative Name Information
                                       (ALIAS)                       */

       short      Qddfalsl;         /* Length of Alternative Name
                                       Qddfalsn                      */

       char       Reserved_85[14];  /* Reserved                      */

     /*char       Qddfalsn[];*/     /* Alternative Name (ALIAS)
                                       An alternative name for the
                                       field. (varying length)       */

     } Qdb_Qddfalis_t;

/*********************************************************************/
/*              DEFAULT VALUE DESCRIPTION DECLARATIONS               */
/*********************************************************************/
    /**   Default Attributes  ****************************************/
     typedef _Packed struct
                    Qdb_Qddfdfta {  /* Default Attributes            */

         unsigned  Qddfdfig:1;      /* DBCS or Graphic Default
                                       0 = The default is NOT a DBCS
                                           or graphic literal.
                                       1 = The default is a DBCS or
                                           graphic literal.          */

         unsigned  Qddfdfhx:1;      /* Hex Default
                                       0 = The default is NOT a
                                           hex literal.
                                       1 = The default is a hex
                                           literal.                  */

         unsigned  Qddfndft:1;      /* Null Default
                                       0 = The default is NOT null.
                                       1 = The default is null.      */

         unsigned  Reserved_86:2;   /* Reserved                      */

         unsigned  Qddfdcur:1;      /* Default is CURRENT_DATE,
                                       CURRENT_TIME or
                                       CURRENT_TIMESTAMP
                                       0 = The default is NOT CURRENT
                                       1 = The default is CURRENT.   */

         unsigned  Reserved_109:1;  /* Reserved                      */

         unsigned  Qddfdftk:1;      /* DFT or DFTVAL Keyword
                                       0 = The DFT keyword was
                                           specified.
                                       1 = The DFTVAL keyword was
                                           specified.                */

       } Qdb_Qddfdfta_t;

    /*****************************************************************/
    /*                                                               */
    /*          DEFAULT VALUE DESCRIPTION INFORMATION                */
    /*                                 (QQ)  QUERY:  Y               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfdftd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/


   typedef _Packed struct
            Qdb_Qddfdft {           /* Default Information (DFT) or
                                       (DFTVAL)                      */

        short      Qddfdftl;        /* Length of Default Information
                                       Qddfdft                       */

       Qdb_Qddfdfta_t    Qddfdfta;  /* Default Attributes            */

       char       Reserved_87[13];  /* Reserved                      */

     /*char       Qddfdftv[];*/     /* Default (DFT) or (DFTVAL)
                                       The default value of the
                                       field. (varying length)       */

     } Qdb_Qddfdft_t;

/*********************************************************************/
/*            IDDU/SQL DICTIONARY ADDITIONAL DECLARATIONS            */
/*********************************************************************/
    /**   Field Definition Long Comment  *****************************/
     typedef _Packed struct
                    Qdb_Qddfdfco {  /* Field Definition Long Comment */

          short      Qddfdfcl;      /* Length of Field Definition
                                       Long Comment Qddfdfco         */

        /*char       Qddfdfct[];*/  /* Field Definition Comment Text
                                       (varying length)              */

        } Qdb_Qddfdfco_t;

    /*****************************************************************/
    /*                                                               */
    /*          IDDU/SQL DICTIONARY ADDITIONAL FIELD INFORMATION.    */
    /*                                 (QQ)  QUERY:  Y               */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfdicd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfdicf {           /* IDDU/SQL Dictionary
                                       Additional Field Information  */

       char       Qddfdfch[16];     /* Reserved                      */

       Qdb_Qddfdfco_t    Qddfdfco;  /* Field Definition Long Comment */

     } Qdb_Qddfdicf_t;


 /********************************************************************/
 /*                                                                  */
 /* These are type definitions which are needed for a UNION in the   */
 /*  Header Section                                                  */
 /*                                                                  */
 /********************************************************************/

   typedef _Packed struct
        Qdb_Qddfdvof{               /* Field Operand Entry           */

       char       Qddfdvon[30];     /* Field Name
                                       The external name of the
                                       field.                        */

       short      Qddfdvjr;         /* Join Reference (JREF)
                                       Relative file number of the
                                       physical file containing the
                                       external field referenced.
                                       0 = The fields previously
                                           defined in this format
                                           will be searched for the
                                           external name.  If the
                                           field is not found, the
                                           based on file formats
                                           will be searched.  If the
                                           field name is found in
                                           more than one file format,
                                           an error is signalled.
                                       n = The external field name
                                           is located in the file
                                           format referenced by
                                           using this value as a
                                           join reference index into
                                           the file list.            */

       short      Qddfdvo1;         /* Starting Position
                                       The starting position in the
                                       external field, of the
                                       substring (SST) specified.    */

       short      Qddfdvo2;         /* Ending Position
                                       The ending position in the
                                       external field, of the
                                       substring (SST) specified.    */

       short      Qddfqdtnum;       /* QDT from which this
                                       Only applicable for SQL       */

       char       Reserved_89[20];  /* Reserved                      */

     } Qdb_Qddfdvof_t;

/*********************************************************************/
/*                   CONSTANT OPERAND DECLARATIONS                   */
/*********************************************************************/
    /**   Constant Attributes  ***************************************/
     typedef _Packed struct
                         Qdb_Qca {  /* Constant Attributes           */

          unsigned  Qddfdvci:1;     /* DBCS Constant
                                       0 = This constant is NOT a
                                           DBCS - OPEN literal.
                                       1 = This constant is a DBCS -
                                           OPEN literal.             */

          unsigned  Reserved_90:1;  /* Reserved                      */

          unsigned  Qddfdvcc:1;     /* Character Constant Type
                                       0 = The constant is a quoted
                                           character string,
                                           bracketed by single
                                           quotes.  Imbedded quotes
                                           are represented with two
                                           single quotes.
                                       1 = The constant is an
                                           unquoted
                                           character string, NOT
                                           bracketed by single
                                           quotes.  Imbedded quotes
                                           are represented with a
                                           single quote.             */

           unsigned  Qddfdvac:1;    /* Assume Character Constant
                                       0 = The system will NOT
                                           assume this is a
                                           character constant.
                                       1 = The system will assume
                                           this is a character
                                           constant.                 */

           unsigned  Qddfdvco:1;    /* DBCS - ONLY Literal
                                       Note:  Before using this
                                              field, you should
                                              check Qddfdvci, if it
                                              is not on, then this
                                              field is not valid.
                                       0 = This constant is a DBCS -
                                           OPEN literal.
                                       1 = This constant is a DBCS -
                                           ONLY literal.             */

           unsigned  Qddfdvsr:1;    /* Special register
                                       0 = This constant operand is
                                           not a special register.
                                       1 = This constant operand is
                                           a special register,
                                           defined by Qddfdvrc       */

           unsigned  Qddfdvnl:1;    /* Null Indicator
                                       0 = This constant is NOT a
                                           null literal.
                                       1 = This constant is a null
                                           literal.                  */

           unsigned  Reserved_91:1; /* Reserved                      */

         } Qdb_Qca_t;

    /**   Constant Flags  ********************************************/
     typedef _Packed struct
                    Qdb_Qddfcflg {  /* Constant Flags                */

         unsigned Reserved_93:2;    /* Reserved                      */

         unsigned Qddfglit:1;       /* If on, this indicates that
                                       this is a graphics literal.   */

         unsigned Reserved_94:5;    /* Reserved                      */

       } Qdb_Qddfcflg_t;

    /**   Constant Operand Header  ***********************************/
     typedef _Packed struct
                    Qdb_Qddfdvoh {  /* Constant Operand Header       */

         long       Qddfdvol;       /* Length of Constant Qddfdvov   */

         Qdb_Qca_t            Qca;  /* Constant Attributes           */

         char        Qddfdvrc;      /* Special register constant
                                       Defined by special register
                                       constants, can only be
                                       specified if Qddfdvsr is on.  */

         char        Qddfdvft;      /* Date Constant Format (DATFMT)
                                       The format of the date
                                       constant.
                                       'FE'X = The date format
                                               associated with the
                                               job is used.
                                       'FF'X = The date format
                                               associated with the
                                               QDT is used.
                                       '01'X = *USA (IBM USA
                                               Standard) format is
                                               used.
                                               e.g. mm/dd/yyyy
                                       '03'X = *ISO (International
                                               Standards
                                               Organization) format
                                               is used.
                                               e.g. yyyy-mm-dd
                                       '05'X = *EUR (IBM European
                                               Standard) format is
                                               used.
                                               e.g. dd.mm.yyyy
                                       '07'X = *JIS Japanese
                                               Industrial Standard
                                               Christian Era) format
                                               is used.
                                               e.g. yyyy-mm-dd
                                       '17'X = *MDY (Month/Day/Year)
                                               format is used.
                                               e.g. mm/dd/yy
                                       '18'X = *DMY (Day/Month/Year)
                                               format is used.
                                               e.g. dd/mm/yy
                                       '19'X = *YMD (Year/Month/Day)
                                               format is used.
                                               e.g. yy/mm/dd
                                       '1A'X = *JUL (Julian) format
                                               is used.
                                               e.g. yy/ddd
                                       or...
                                       Time Constant Format (TIMFMT)
                                       The format of the time
                                       constant.
                                       'FE'X = The time format
                                               associated with the
                                               job is used.
                                       'FF'X = The time format
                                               associated with the
                                               QDT is used.
                                       '01'X = *USA (IBM USA
                                               Standard) format is
                                               used.
                                               e.g. hh:mm AM or
                                                    hh:mm PM
                                       '03'X = *ISO (International
                                               Standards
                                               Organization) format
                                               is used.
                                               e.g. hh.mm.ss
                                       '05'X = *EUR (IBM European
                                               Standard) format is
                                               used.
                                               e.g. hh.mm.ss
                                       '07'X = *JIS Japanese
                                               Industrial Standard
                                               Christian Era) format
                                               is used.
                                               e.g. hh:mm:ss
                                       '09'X = The SAA timestamp is
                                               used.
                                       '1B'X = *HMS (Hour/Minute/
                                               Second) format is
                                               used.
                                               e.g. hh:mm:ss         */

         char      Qddfdvsp;        /* Date Constant Separator
                                       (DATSEP)
                                       The separator character to be
                                       used with the date constant.
                                       or...
                                       Time Constant Separator
                                       (TIMSEP)
                                       The separator character to be
                                       used with the time constant.
                                       '00'X = The default separator
                                               associated with the
                                               job is to be used.
                                       'EE'X = The implied separator
                                               is to be used.
                                       '/'   = The slash separator
                                               is to be used.
                                       '-'   = The dash separator
                                               is to be used.
                                       '.'   = The period separator
                                               is to be used.
                                       ','   = The comma separator
                                               is to be used.
                                       ' '   = The blank separator
                                               is to be used.
                                       ':'   = The colon separator
                                               is to be used.        */

         char      Reserved_92[2];  /* Reserved                      */

         unsigned short Qddfdvcd;   /* Constant Coded Character Set
                                       Identifier.
                                       nnnnn = The coded character
                                               set identifier
                                               (CCSID) for this
                                               constant.             */

         Qdb_Qddfcflg_t  Qddfcflg;  /* Constant Flags                */

         char     Reserved_95[29];  /* Reserved                      */

       } Qdb_Qddfdvoh_t;


  typedef _Packed struct
           Qdb_Qddfdvoc {           /* Constant Operand Entry        */

         Qdb_Qddfdvoh_t  Qddfdvoh;  /* Constant Operand Header       */

       /*char       Qddfdvov[];*/   /* Derived Constant
                                       The external form of the
                                       constant. (varying length)    */

       } Qdb_Qddfdvoc_t;


/*********************************************************************/
/*                    OPERATOR ENTRY DECLARATIONS                    */
/*********************************************************************/
    /**   Translation Table Index  ***********************************/
     typedef _Packed struct
                  Qdb_Qddfdvxnum {  /* Translation Table Index
                                       Index into the translation
                                       table.
                                       or
                                       Index into the case selection
                                       specification
                                       Note:  Before using this
                                              field, you should
                                              check Qddfdvop, if it
                                              is not '0B'X or '3E'X,
                                              then this field is not
                                              valid.                 */

         char       Qddfdvdtfmt;    /* Operator Date Format Index    */

         char       Qddfdvdtsep;    /* Operator Date Separator Index */

       } Qdb_Qddfdvxnum_t;

    /**   Operator attributes  ***************************************/
     typedef _Packed struct
                         Qdb_Qoa {  /* Operator attributes           */

        unsigned  Reserved_96:1;    /* Reserved                      */

        unsigned  Qddfdvdttm:1;     /* Operator Date Format and
                                       Separator Source
                                       1 = Qddfdvdtfmt & Qddfdvdtsep
                                           are to be used as the
                                           date format & separator
                                           for the CHAR operator.
                                           Similarly, Qddfdvfm &
                                           Qddfdvsa are to be used
                                           as the time format &
                                           separator for the CHAR
                                           operator.
                                       0 = Process only Qddfdvfm &
                                           Qddfdvsa as the format &
                                           separator for the CHAR
                                           operator.                 */

        unsigned  Reserved_113:1;   /* Reserved                      */

        unsigned  Qddfdvdf:1;       /* May only be set for
                                       group by operators.
                                       1 = Do not include duplicate
                                           field values in group by
                                           operation.
                                       0 = Include duplicate field
                                           values in group by
                                           operation.                */
        unsigned  Reserved_97:1;    /* Reserved                      */
        unsigned  Qddffunc_char:1;  /* Number of characters
                                       operator option.
                                       0 = Result is computed for
                                           this operator based on
                                           number of bytes.
                                       1 = Result is computed for
                                           this operator based on
                                           number of characters.
                                       Applicable only when Qddfdvop
                                       is POSSTR '41'X, LENGTH '23'X
                                       or SUBSTRING '27'X and either
                                       of the arguments is IGC.      */
        unsigned  Reserved_115:2;   /* Reserved                      */

      } Qdb_Qoa_t;

   typedef _Packed struct
            Qdb_Qddfdvo {           /* Operator Entry                */

       char       Qddfdvop;         /* Derived Operator
                                       The type of operation to be
                                       performed on the operand/s.

                                        Associciated with each value,
                                        is a list of what operand
                                        attributes are valid with
                                        that value.
                                        N = ALL NUMERIC OPERANDS AR
                                        C = CHARACTER OPERANDS ARE
                                        Z = ZONED OPERANDS ARE VAL
                                        L = DATE OPERANDS ARE VALI
                                        T = TIME OPERANDS ARE VALI
                                        S = TIMESTAMP OPERANDS ARE
                                        LD = DATE DURATION OPERAND
                                        TD = TIME DURATION OPERAND
                                        SD = TIMESTAMP DURATION OP
                                        A = ANY OPERANDS ARE VALID
                                        G = GRAPHIC OPERANDS ARE VALID

                                       - Operators that require
                                         three operands:
                                         '27'X = SUBSTRING (C)
                                       - Operators that require
                                         two operands:
                                       '01'X = CONCATENATION (C)
                                       '04'X = ADDITION (N,L,LD,T,
                                               TD,S,SD)
                                       '05'X = SUBTRACTION (N,L,LD,
                                               T,TD,S,SD)
                                       '06'X = MULTIPLICATION (N)
                                       '07'X = DIVISION (N)
                                       '08'X = MINIMUM (A)
                                       '09'X = MAXIMUM (A)
                                       '1A'X = X TO THE Y POWER (N)
                                       '1B'X = BINARY OR (C)
                                       '1C'X = BINARY XOR (C)
                                       '1D'X = BINARY AND  (C)
                                       '24'X = STRIP LEADING (C)
                                       '25'X = STRIP TRAILING(C)
                                       '26'X = STRIP BOTH (C)
                                       '35'X = COMPUTE     (N,L,LD,
                                               T,TD,S,SD)
                                       '80'X = REMAINDER (N)
                                       '41'X = POSSTR(C,G)
                                       - Operators that require
                                         one operand:
                                       '02'X = MAP (A)
                                       '03'X = DIRECT MAP
                                       '0A'X = ABSOLUTE VALUE (N)
                                       '0B'X = TRANSLATE (C)
                                       '0C'X = NATURAL LOGARITHM (N)
                                       '0D'X = EXPONENTIAL (N)
                                       '0E'X = SINE (N)
                                       '0F'X = COSINE (N)
                                       '10'X = TANGENT (N)
                                       '11'X = COTANGENT (N)
                                       '12'X = ARC SINE (N)
                                       '13'X = ARC COSINE (N)
                                       '14'X = ARC TANGENT (N)
                                       '15'X = HYPERBOLIC SINE (N)
                                       '16'X = HYPERBOLIC COSINE (N)
                                       '17'X = HYPERBOLIC TANGENT(N)
                                       '18'X = HYPERBOLIC ARCTAN (N)
                                       '19'X = SQUARE ROOT (N)
                                       '1E'X = BINARY NOT (C)
                                       '1F'X = NEGATION (N)
                                       '23'X = LENGTH (A)
                                       '29'X = YEAR (L,S,LD,SD)
                                       '2A'X = MONTH (L,S,LD,SD)
                                       '2B'X = DAY (L,S,LD,SD)
                                       '2C'X = DAYS (S,L,N,C)
                                       '2D'X = HOUR (T,S,TD,SD)
                                       '2E'X = MINUTE (T,S,TD,SD)
                                       '2F'X = SECOND (T,S,TD,SD)
                                       '30'X = MICROSECOND (S,SD)
                                       '31'X = DATE (S,N)
                                       '32'X = TIME (S,T,C)
                                       '34'X = HEX (A)
                                       '36'X = Test-translate CSID
                                       '37'X = TRANSLATE (Monocase)
                                       '3C'X = NODENUMBER
                                       '3D'X = CAST (A)
                                       '47'X = PARTITION
                                       '48'X = NODENAME
                                       '83'X = LOG (BASE 10) (N)
                                       '84'X = ANTI LOG (BASE 10)(N)
                                       '85'X = DIGITS (N)
                                       '86'X = CHAR (L,T,S)
                                       '8F'X = VARGRAPHIC (C,G)
                                       '90'X = VARCHAR (C,G)
                                       '91'X = FLOOR (N)
                                       - Label duration operators:
                                       '87'X = Year
                                       '88'X = Month
                                       '89'X = Day
                                       '8A'X = Hour
                                       '8B'X = Minute
                                       '8C'X = Second
                                       '8D'X = Microsecond
                                       - Operators that require
                                         two to many operands:
                                       '28'X = NULL VALUES (A)
                                               Returns the first
                                               non-null value.
                                       '3E'X = CASE Expression (A)
                                       - Operators that require
                                         one to many operands:
                                       '3A'X = HASH
                                       - Operators that require
                                         one, or two, operands:
                                       '33'X = TIMESTAMP
                                       - Group by operators:
                                         All require one operand,
                                         except COUNT, which
                                         requires no operands.
                                       'A1'X = COUNT
                                       'A3'X = SUM (N)
                                       'A4'X = MINIMUM (A)
                                       'A5'X = MAXIMUM (A)
                                       'B0'X = AVERAGE (N)
                                       'B1'X = STANDARD DEVIATION(N)
                                       'B2'X = VARIANCE (N)          */

       Qdb_Qddfdvxnum_t Qddfdvxnum; /* Translation Table Index       */

       char       Qddfdvfm;         /* Operator Date Format (DATFMT)
                                       The format of the date
                                       operator.
                                       Note:  Before using this
                                              field, you should
                                              check Qddfdvop, if it
                                              is not '31'X, then
                                              this field is not
                                              valid.
                                       'FE'X = The date format
                                               associated with the
                                               job is used.
                                       'FF'X = The date format
                                               associated with the
                                               QDT is used.
                                       '01'X = *USA (IBM USA
                                               Standard) format is
                                               used.
                                               e.g. mm/dd/yyyy
                                       '03'X = *ISO (International
                                               Standards
                                               Organization) format
                                               is used.
                                               e.g. yyyy-mm-dd
                                       '05'X = *EUR (IBM European
                                               Standard) format is
                                               used.
                                               e.g. dd.mm.yyyy
                                       '07'X = *JIS Japanese
                                               Industrial Standard
                                               Christian Era) format
                                               is used.
                                               e.g. yyyy-mm-dd
                                       '17'X = *MDY (Month/Day/Year)
                                               format is used.
                                               e.g. mm/dd/yy
                                       '18'X = *DMY (Day/Month/Year)
                                               format is used.
                                               e.g. dd/mm/yy
                                       '19'X = *YMD (Year/Month/Day)
                                               format is used.
                                               e.g. yy/mm/dd
                                       '1A'X = *JUL (Julian) format
                                               is used.
                                               e.g. yy/ddd
                                       or...
                                       Operator Time Format (TIMFMT)
                                       The format of the time
                                       operator.
                                       'FE'X = The time format
                                               associated with the
                                               job is used.
                                       'FF'X = The time format
                                               associated with the
                                               QDT is used.
                                       '01'X = *USA (IBM USA
                                               Standard) format is
                                               used.
                                               e.g. hh:mm AM or
                                                    hh:mm PM
                                       '03'X = *ISO (International
                                               Standards
                                               Organization) format
                                               is used.
                                               e.g. hh.mm.ss
                                       '05'X = *EUR (IBM European
                                               Standard) format is
                                               used.
                                               e.g. hh.mm.ss
                                       '07'X = *JIS Japanese
                                               Industrial Standard
                                               Christian Era) format
                                               is used.
                                               e.g. hh:mm:ss
                                       '09'X = The SAA timestamp is
                                               used.
                                       '1B'X = *HMS (Hour/Minute/
                                               Second) format is
                                               used.
                                               e.g. hh:mm:ss         */

       char       Qddfdvsa;         /* Operator Date Separator
                                       (DATSEP)
                                       The separator character to be
                                       used with the date operator.
                                       or...
                                       Operator Time Separator
                                       (TIMSEP)
                                       The separator character to be
                                       used with the time operator.
                                       '00'X = The default separator
                                               associated with the
                                               job is to be used.
                                       'EE'X = The implied separator
                                               is to be used.
                                       '/'   = The slash separator
                                               is to be used.
                                       '-'   = The dash separator
                                               is to be used.
                                       '.'   = The period separator
                                               is to be used.
                                       ','   = The comma separator
                                               is to be used.
                                       ' '   = The blank separator
                                               is to be used.
                                       ':'   = The colon separator
                                               is to be used.        */

       short      Qddfdvno;         /* Number of Operands            */

       Qdb_Qoa_t              Qoa;  /* Operator attributes           */

       char       Reserved_98[2];   /* Reserved                      */
       char       Qddfd_decptchar;  /* Specifies the character to use
                                       for the decimal point,
                                       if the operation is a CAST and
                                       one of the operands is numeric
                                       and the other is character.
                                       Also used for CHAR operator
                                       when the first operand is
                                       a decimal expression.  Only
                                       used for these two operator
                                       types.                        */
       unsigned long Qddfdo_func_def; /* Offset to function referenced
                                       information.
                                       0 - Reference information not
                                           given. Use derived operator
                                       specified above.
                                       <>0 - function reference section
                                       is provided. It is located at
                                       this offset from the beginning
                                       of this derived entry.        */
       char       Reserved_101[11]; /* Reserved                      */

     } Qdb_Qddfdvo_t;

    /*****************************************************************/
    /*                                                               */
    /* This is the function reference information. If the derived    */
    /* operator section specifies that a function reference is       */
    /* specified, this structure defines that reference.             */
    /*                                                               */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfunc_def {        /* Defines the structure of a
                                       function reference.           */
       char       Reserved_120[20]; /* Reserved                      */
       char       Qddfunc_libname[10]; /* Library name of function   */
                                    /*  - x'40's                     */
                                    /*    Use path to determine      */
                                    /*    function.                  */
                                    /*  - name                       */
                                    /*    search only specified      */
                                    /*    library for function       */
       unsigned short Qddfunc_namelen;  /* Length of function name   */
       char       Qddfunc_funcname[128]; /* Function name            */
     } Qdb_Qddfunc_def_t;

    /*****************************************************************/
    /*                                                               */
    /*          DERIVED FIELD DESCRIPTION INFORMATION                */
    /*                                                               */
    /* The derived field structure is a stack of operators and       */
    /* operands in Reverse Polish Notation.  For example:            */
    /*                                                               */
    /*    A + B would be:                                            */
    /*                                                               */
    /*      A  B  +                                                  */
    /*                                                               */
    /*    ((A * B) + 14)/(X - Y) would be:                           */
    /*                                                               */
    /*      A  B  *  14  +  X  Y  -  /                               */
    /*                                                               */
    /* NOTE:  Numeric operands and character operands can not be     */
    /* mixed in one derived field description.  If numeric operands  */
    /* are specified, the resulting field attributes must be         */
    /* numeric.  If character operands are specified, the resulting  */
    /* field attributes must be character or DBCS.  Character and    */
    /* DBCS only fields cannot be mixed in one derived field         */
    /* description.                                                  */
    /*                                                               */
    /* Substringing DBCS fields will be allowed, although the data   */
    /* will be treated as character data, i.e. there is no true      */
    /* Double-Byte substring support.  This applies to query formats */
    /* only.                                                         */
    /*                                                               */
    /*                                    (QQ)  QUERY:  Y            */
    /*****************************************************************/
    /* This section can be located with the offset Qddfderd, which   */
    /* is located in the Field header section.                       */
    /*****************************************************************/

  typedef _Packed struct
           Qdb_Qddfderv {           /* Derived Field Information     */

       long       Qddfdvtl;         /* Length of Derived Field
                                       Information Qddfderv          */

       short      Qddfdvnume;       /* Number of Derived Field
                                       Entries. Zero indicates it is
                                       a concatenated field.         */

       long       Qddfdvot;         /* Offset from start of Derived
                                       field header to derived field
                                       text description (or to the
                                       concatenated field text
                                       description) (Qddfdvtx).      */

       char       Reserved_88[6];   /* Reserved                      */

     /*char       Qddfdven[];*/     /* Derived Field Entry Array
                                       (varying length)              */

     } Qdb_Qddfderv_t;

  typedef _Packed struct
           Qdb_Qddfdvst {           /* Derived Field Entry           */

       long       Qddfdvln;         /* Length of Derived Field Entry
                                       Qddfdvst                      */

       short      Qddfdtyp;         /* Derived Field Entry Type
                                       0 = Field Operand
                                       1 = Constant Operand
                                       2 = Operator                  */

       union Qddfdv {               /* Field Operand, Constant
                                       Operand, or Operator Entry    */

         Qdb_Qddfdvof_t Qddfdvofu;  /* Field Operand Entry           */

         Qdb_Qddfdvoc_t Qddfdvocu;  /* Constant Operand Entry        */

         Qdb_Qddfdvo_t Qddfdvou;    /* Operator Entry                */

       } Qddfdv_t;                  /* End of Union.                 */

     } Qdb_Qddfdvst_t;

    /*****************************************************************/
    /*                                                               */
    /*          DERIVED FIELD TEXT DESCRIPTION                       */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfdvot, which   */
    /* is located in the Derived field header section.               */
    /*****************************************************************/


  typedef _Packed struct
           Qdb_Qddfdvtx {           /* Derived Field Text
                                       Information
                                       Text description of the
                                       derived field.                */

       short      Qddfdvlt;         /* Length of Derived Field Text
                                       information or concatenated
                                       field text information.
                                       (Qddfdvtx)                    */

     /*char       Qddfdtxt[];*/     /* Derived Field Text
                                       Description (varying length)
                                       or concatenated field text
                                       description.                  */
     } Qdb_Qddfdvtx_t;

/*********************************************************************/
/*                  TRANSLATION TABLE DECLARATIONS                   */
/*********************************************************************/
    /**   Translation Table Array  ***********************************/
     typedef _Packed struct
                    Qdb_Qddfxarr {  /* Translation Table Array       */

        char       Qddfxtnm[10];    /* Translation Table Name        */

        char       Qddfxtln[10];    /* Translation Table Library     */

        unsigned short Qddfxcid;    /* Translation Table Constant
                                       Coded Character Set
                                       Identifier
                                       nnnnn = The coded character
                                               set identifier
                                               (CCSID) for this
                                               translation table.    */

        char       Reserved_99[10]; /* Reserved                      */

        char       Qddfxtbl[256];   /* Translation Table             */

      } Qdb_Qddfxarr_t;

    /*****************************************************************/
    /*                                                               */
    /*          TRANSLATE TABLE SPECIFICATION.                       */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfxlto, which   */
    /* is located in the FMTD header section.                        */
    /*****************************************************************/

    typedef _Packed struct
             Qdb_Qddfxl {           /* Translation Table Information */

       short      Qddfxlnum;        /* Number of Elements In The
                                       Translation Table Array       */

       Qdb_Qddfxarr_t    Qddfxarr;  /* Translation Table Array       */

     } Qdb_Qddfxl_t;

    /***************************************************************/
    /*                                                             */
    /* This is the CASE Selection specification table.  If this    */
    /* specification exists it will be found after all the field   */
    /* definitions using offset Qddfrcao.                          */
    /*                                                             */
    /***************************************************************/

    typedef _Packed struct
                    Qdb_Qddfcsl {   /* This structure contains the
                                       CASE Selection specification
                                       table information             */
        short Qddfcsnum;            /* Number of selection
                                       specifications.               */
        long  Qddfcln;              /* Length of this table plus the
                                       the length of all selection
                                       specifications                */
        char Reserved[10];          /* Reserved                      */
        long Qddfcao[99];           /* Offset to the selection
                                       specifications. Offset is from
                                       the beginning of Qdb_Qddfcsl.
                                       For the selection specs
                                       see QDBQS_T in QQQQRY         */
    } Qdb_qddfcsl_t;

/*********************************************************************/
/*                   IDDU DICTIONARY DECLARATIONS                    */
/*********************************************************************/
    /**   Format Definition Long  ************************************/
     typedef _Packed struct
                    Qdb_Qddfdicm {  /* Format Definition Long
                                       Comment Information           */

        short      Qddfdilt;        /* Length of Format Definition
                                       Long Comment Information
                                       Qddfdilt                      */

      /*char       Qddfditx[];*/    /* Format Definition Long
                                       Comment (varying length)      */
      } Qdb_Qddfdicm_t;

    /*****************************************************************/
    /*                                                               */
    /*          IDDU/SQL DICTIONARY FORMAT INFORMATION.              */
    /*                                                               */
    /*****************************************************************/
    /* This section can be located with the offset Qddfdico, which   */
    /* is located in the FMTD header section.                        */
    /*****************************************************************/

   typedef _Packed struct
            Qdb_Qddfdic {           /* IDDU/SQL Dictionary Record
                                       Format Information            */

       char       Reserved_100[32]; /* Reserved                      */

       Qdb_Qddfdicm_t    Qddfdicm;  /* Format Definition Long        */

     } Qdb_Qddfdic_t;

/*********************************************************************/
/*      Record Structure for QDBRTVFD FILD0300 format                */
/*********************************************************************/

/*********************************************************************/
/*                                                                   */
/* Note: Each file may contain multiple record format and each       */
/*       format may contain multiple key fields                      */
/*********************************************************************/

/*********************************************************************/
/* The following structure contains record format information and    */
/* can appears multiple times depending on the number of record      */
/* formats specified for the request file                            */
/*********************************************************************/

     typedef _Packed struct
                     Qdb_Qdbwhrec { /* Record Key Information        */

          char    Rec_Name[10];     /* Record Name                   */

          char    Reserved1[2];     /* Reserved                      */

          short   Num_Of_Keys;      /* Number of Keys                */

          char    Reserved2[14];    /* Reserved                      */

          long    Key_Info_Offset;  /* Key Information Offset        */

        } Qdb_Qdbwhrec_t;

/*********************************************************************/
/* The following structure provides file level information for the   */
/* request file                                                      */
/*********************************************************************/

  typedef _Packed struct
                     Qdb_Qdbwh  {   /* File level information        */

      long     Byte_Ret;            /* Bytes Returned                */

      long     Byte_Avail;          /* Bytes Available               */

      short    Max_Key_Len;         /* Maximum Key Length            */

      short    Key_Count;           /* Key Count                     */

      char     Reserved[10];        /* Reserved                      */

      short    Fmt_Counts;          /* Formats Counts                */

      Qdb_Qdbwhrec_t Rec_Key_Info[32]; /* Record Key Information     */

    } Qdb_Qdbwh_t;

/*********************************************************************/
/* The following structure maps to the returned key_attr data to     */
/* provide field attributes information                              */
/*********************************************************************/

 typedef _Packed struct Qdb_Qdbwhkattr {

      int Descending:1;             /* 0 = the key field is an
                                           ascending sequence key
                                       1 = The key field is a
                                           decending sequence key    */

      int Numeric:2;                /* B'00' = The numberic key field
                                               will sequence as a
                                               string of unsigned
                                               binary data.
                                       B'01' = The numeric key field
                                               will ignore the sign of
                                               the field and sequence
                                               as absolute value data
                                       B'10' = The numeric key field
                                               will consider the signs
                                               of the field and
                                               sequence as signed
                                               value data.           */

      int Reserved:1;               /* Reserved                      */

      int Alt_Collating:1;          /* 0 = The alternative collating
                                           sequence table does NOT
                                           apply to this key field.
                                       1 = The alternative collating
                                           sequence table does apply
                                           to this key field.
                                       If this file does NOT have an
                                       alternative collating sequence
                                       table, then this field is NOT
                                       applicable.                   */

      int Force_Zone:1;             /* 0 = The zone portion of the key
                                           field will NOT be zeroed.
                                       1 = The zone portion of the key
                                           field will be zeroed so
                                           that only the digit portions
                                           (farthest right 4 bits) of
                                           the key values will be used
                                           in the key sequencing.    */

      int Force_Digit:1;            /* 0 = The digit portion of the key
                                           field will NOT be zeroed.
                                       1 = The digit portion of the key
                                           field will be zeroed so
                                           that only the zone portions
                                           (farthest left 4 bits) of
                                           the key values will be used
                                           in the key sequencing.    */

      int Statement_Format:1;       /* 0 = The key statement field name
                                           is an internal record format
                                           name.
                                       1 = The key statement field name
                                           is an external record format
                                           name.                     */

    } Qdb_Qdbwhkattr_t;

/*********************************************************************/
/* The following structure maps to the additional key field          */
/* attributes.                                                       */
/*********************************************************************/

 typedef _Packed struct Qdb_Qdbwhkatt1 {

      int Null_Value:1;             /* Allow Null Value (ALWNULL)
                                       0 = the null value is NOT
                                           allowed for this field.
                                       1 = the null value is allowed
                                           for this field.           */
      int Alt_Name_Exists:1;        /* Alternative Name Indicator
                                       0 = the key field does not have
                                           an alternative name.
                                       1 = the key field has an
                                           alternative name. This
                                           will be 1 even if the length
                                           of the alternative name is
                                           greater than 30.      @AHA*/

      int Reserved:6;               /* Reserved.                 @AHC*/

    } Qdb_Qdbwhkatt1_t;                                      /*      */

/*********************************************************************/
/* The following structure provides key field information for each   */
/* key field in a record format. This structure can appear multiple  */
/* times depending on the number of key fields defined in the        */
/* associated record format                                          */
/*********************************************************************/
  typedef _Packed struct Qdb_Qdbwhkey {

      char    Int_Field_Name[10];   /* Internal Field Name           */

      char    Ext_Field_Name[10];   /* External Field Name           */

      short   Data_Type;            /* The data type of the field
                                       X'0000' = BINARY
                                       X'0001' = FLOAT
                                       X'0002' = ZONED DECIMAL
                                       X'0003' = PACKED DECIMAL
                                       X'0004' = CHARACTER
                                       X'8004' = VAR CHARACTER
                                       X'0005' = GRAPHIC
                                       X'8005' = VAR GRAPHIC
                                       X'0006' = DBCS CAPABLE
                                       X'8006' = VAR DBCS-CAPABLE
                                       X'000B' = DATE
                                       X'000C' = TIME
                                       X'000D' = TIMESTAMP           */

      short       Field_Len;        /* Field Length                  */

      short       Num_Of_Digs;      /* Number of Digits
                                       - For numeric fields, this is
                                         the number of digits.
                                       - For graphic data fields,
                                         this is the number of DBCS
                                         characters the field can
                                         contain.
                                       (This field is applicable only
                                       to numeric and graphic fields)
                                                                     */

      short       Dec_Pos;          /* Decimal Position              */

      Qdb_Qdbwhkattr_t  key_attr;   /* Key Attributes                */

      short       Alt_Name_Len;     /* Alternate Name Length         */

      char        Alt_Name[30];     /* Alternate Name                */

      char        Reserved1;        /* Reserved                      */

      Qdb_Qdbwhkatt1_t  Qdbwhkatt1; /* Additional Key Attributes     */

      char        Reserved2;        /* Reserved                      */

    } Qdb_Qdbwhkey_t;


/*********************************************************************/
/*      Record Structure for QDBRTVFD FILD0400 format                */
/*********************************************************************/
 /*         -----------------------------------------------          */
 /*         |                                             |          */
 /*         | TRIGGER SPACE HEADER                        |          */
 /*         |   fixed length                              |          */
 /*         |                                             |          */
 /*         | Total # of trigger entries                  |          */
 /*         |                                             |          */
 /*     +---| Offset to first trigger entry               |          */
 /*     |   |                                             |          */
 /*     |   | # of SQL Trigger entries                    |          */
 /*     |   | # of System entries                         |          */
 /*     |   | # of INSERT/BEFORE Trigger entries          |          */
 /*     |   | # of INSERT/AFTER  Trigger entries          |          */
 /*     |   | # of DELETE/BEFORE Trigger entries          |          */
 /*     |   | # of DELETE/AFTER  Trigger entries          |          */
 /*     |   | # of UPDATE/BEFORE Trigger entries          |          */
 /*     |   | # of UPDATE/AFTER  Trigger entries          |          */
 /*     |   | # of READ/AFTER    Trigger entries          |          */
 /*     |   | # of INSERT/INSTEADOF Trigger entries       |          */
 /*     |   | # of DELETE/INSTEADOF Trigger entries       |          */
 /*     |   | # of UPDATE/INSTEADOF Trigger entries       |          */
 /*     |   |                                             |          */
 /*     +-->|---------------------------------------------|          */
 /*         | Trigger Entry # 1                           |          */
 /*         |---------------------------------------------|          */
 /*         | Trigger Entry # 2                           |          */
 /*         |---------------------------------------------|          */
 /*         |                      .                      |          */
 /*         |                      .                      |          */
 /*         |                      .                      |          */
 /*         |---------------------------------------------|          */
 /*         | Trigger Entry # n                           |          */
 /*         -----------------------------------------------          */
 /********************************************************************/

     typedef _Packed struct
                     Qdb_Qdbftrg_Head {
                                    /* Trigger Header Structure  @ADA*/

          unsigned long Qdb_Qdbftrg_Bytes_Returned;
                                    /* Bytes Returned            @ADA*/

          unsigned long Qdb_Qdbftrg_Bytes_Avail;
                                    /* Bytes Available           @ADA*/

          char Qdb_Qdbftrg_Reserved1[52];
                                    /* Reserved.                 @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Trgs;
                                    /* Number of trigger definitions.*/
                                    /*                           @ADA*/

          char Qdb_Qdbftrg_Reserved2[8];
                                    /* Reserved.                 @ADA*/

          unsigned long Qdb_Qdbftrg_Off_Ent_Num1;
                                    /* Offset to first entry.    @ADA*/

          unsigned long Qdb_Qdbftrg_Off_Ins_Grp;
                                    /* Offset to the beginning of    */
                                    /* the insert group.             */
                                    /* 0 => Either no INSERT         */
                                    /*      triggers or this is an   */
                                    /*      an add of a trigger and  */
                                    /*      QDBADDTR will order the  */
                                    /*      group correctly.         */
                                    /*                               */

          unsigned long Qdb_Qdbftrg_Off_Upd_Grp;
                                    /* Offset to the beginning of    */
                                    /* the update group.             */
                                    /* 0 => Either no UPDATE         */
                                    /*      triggers or this is an   */
                                    /*      an add of a trigger and  */
                                    /*      QDBADDTR will order the  */
                                    /*      group correctly.         */
                                    /*                               */

          unsigned long Qdb_Qdbftrg_Off_Del_Grp;
                                    /* Offset to the beginning of    */
                                    /* the delete group.             */
                                    /* 0 => Either no DELETE         */
                                    /*      triggers or this is an   */
                                    /*      an add of a trigger and  */
                                    /*      QDBADDTR will order the  */
                                    /*      group correctly.         */
                                    /*                               */

          unsigned long Qdb_Qdbftrg_Off_Read_Grp;
                                    /* Offset to the beginning of    */
                                    /* the read group.               */
                                    /* 0 => Either no READ           */
                                    /*      triggers or this is an   */
                                    /*      an add of a trigger and  */
                                    /*      QDBADDTR will order the  */
                                    /*      group correctly.     @ADA*/
                                    /*                               */

          char Qdb_Qdbftrg_Reserved36[28];
                                    /* Reserved.                 @ADA*/
          unsigned long Qdb_Qdbftrg_Num_Sql_Trgs;
                                       /* Number of SQL Triggers @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Ntv_Trgs;
                                    /* Number of system Triggers @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Insb_Trg;
                                    /* Number of Insert/Before       */
                                    /* triggers                  @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Insa_Trg;
                                    /* Number of Insert/After        */
                                    /* triggers                  @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Delb_Trg;
                                    /* Number of Delete/Before       */
                                    /* triggers                  @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Dela_Trg;
                                    /* Number of Delete/After        */
                                    /* triggers                  @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Updb_Trg;
                                    /* Number of Update/Before       */
                                    /* triggers                  @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Upda_Trg;
                                    /* Number of Update/After        */
                                    /* triggers                  @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Reada_Trg;
                                    /* Number of Read/After          */
                                    /* triggers                  @ADA*/

          unsigned long Qdb_Qdbftrg_Num_Insi_Trg;
                                    /* Number of Insert/Instead OF   */
                                    /* triggers                  @0DA*/

          unsigned long Qdb_Qdbftrg_Num_Deli_Trg;
                                    /* Number of Delete/Instead OF   */
                                    /* triggers                  @0DA*/

          unsigned long Qdb_Qdbftrg_Num_Updi_Trg;
                                    /* Number of Update/Instead OF   */
                                    /* triggers                  @0DA*/

          char Qdb_Qdbftrg_Reserved3[536];
                                    /* Reserved                  @0DC*/

        } Qdb_Qdbftrg_Head_t;

/*********************************************************************/
/* The following structure provides header information for the       */
/* trigger definition.  It can appear multiple times depending on    */
/* the number of triggers defined for the file                       */
/*********************************************************************/
 /*        Trigger Entry - Variable Length                           */
 /*         -----------------------------------------------          */
 /*         |                                             |          */
 /*         | TRIGGER DEFINITION HEADER - Fixed Length    |          */
 /*         |                                             |          */
 /*         | Total length of this trigger definition.    |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   trigger definition header will get        |          */
 /*         |   addressability to the next trigger        |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Length of the trigger definition header.    |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Trigger attributes                          |          */
 /*         |   - TYPE - System or SQL                    |          */
 /*         |   - ORIENTATION - Column, Row, Statement    |          */
 /*         |   - TIME - Before/After                     |          */
 /*         |   - EVENT - Insert/Update/Delete/Read       |          */
 /*         |   - STATE - Enabled/Disabled                |          */
 /*         |                                             |          */
 /*         | Trigger program name and library            |          */
 /*         |                                             |          */
 /*         | Offsets to appended trigger areas for       |          */
 /*         |  this trigger definition. These offsets     |          */
 /*         |  are relative to the beginning of this      |          */
 /*         |  trigger definition header.                 |          */
 /*         |  - Trigger name area                        |          */
 /*         |  - SQL Path area                            |          */
 /*         |  - List of Update Columns                   |          */
 /*         |  - List of WHEN Referenced Columns          |          */
 /*         |  - List of BODY Referenced Columns          |          */
 /*         |  - List of Dependent Objects area           |          */
 /*         |  - Transition area                          |          */
 /*         |  - SQL Trigger STMT area                    |          */
 /*         |  - Trigger Text                             |          */
 /*         |                                             |          */
 /*         |  NOTE: A SYSTEM TRIGGER will have a         |          */
 /*         |        trigger header and a                 |          */
 /*         |        trigger name area. The text section  |          */
 /*         |        can only be added via the COMMENT    |          */
 /*         |        ON SQL statement and is therefore    |          */
 /*         |        optional. All other sections are     |          */
 /*         |        not applicable to a system trigger.  |          */
 /*         |                                             |          */
 /*         |        An SQL TRIGGER may have all of the   |          */
 /*         |        above structures with the following  |          */
 /*         |        restrictions/dependencies:           |          */
 /*         |        1 - The trigger definition header,   |          */
 /*         |            the trigger name area, the SQL   |          */
 /*         |            path, and the SQL trigger STMT   |          */
 /*         |            are all required.                |          */
 /*         |        2 - Only an SQL trigger with an      |          */
 /*         |            Update event will have a list of |          */
 /*         |            update columns.                  |          */
 /*         |        3 - The list of WHEN columns, the    |          */
 /*         |            list of BODY columns, the list   |          */
 /*         |            of dependent objects, and the    |          */
 /*         |            transition area are optional.    |          */
 /*         |            More correctly, they are         |          */
 /*         |            dependent on if there is any     |          */
 /*         |            of that type of information to   |          */
 /*         |            be included in the trigger       |          */
 /*         |            definition entry.                |          */
 /*         |        4 - The text section can only be     |          */
 /*         |            added via the COMMENT ON SQL     |          */
 /*         |            statement and is therefore       |          */
 /*         |            optional.                        |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | TRIGGER NAME AREA - Fixed Length            |          */
 /*         |                                             |          */
 /*         | Length of the TRIGGER NAME AREA.            |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Library name                                |          */
 /*         | Trigger name - fixed length                 |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | SQL PATH AREA - Variable Length             |          */
 /*         |                                             |          */
 /*         | Length of the SQL PATH Area.                |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | LIST OF UPDATE COLUMNS AREA - Var Length    |          */
 /*         |   This is the list of the columns specified |          */
 /*         |   for an Update event trigger.              |          */
 /*         |                                             |          */
 /*         | Length of the LIST OF UPDATE COLUMNS Area.  |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Number of Columns in List                   |          */
 /*         | Array of Column names                       |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | LIST OF WHEN COLUMNS AREA                   |          */
 /*         |   Variable length.                          |          */
 /*         |   This is the list of the columns in the    |          */
 /*         |   WHEN portion of the CREATE TRIGGER        |          */
 /*         |   statement.                                |          */
 /*         |                                             |          */
 /*         | Length of the LIST OF WHEN COLUMNS area     |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Number of Columns in WHEN List              |          */
 /*         | Array of WHEN Column names                  |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | LIST OF BODY COLUMNS AREA                   |          */
 /*         |   Variable length.                          |          */
 /*         |   This is the list of the columns in the    |          */
 /*         |   BODY portion of the CREATE TRIGGER        |          */
 /*         |   statement.                                |          */
 /*         |                                             |          */
 /*         | Length of the LIST OF BODY COLUMNS area     |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Number of Columns in BODY List              |          */
 /*         | Array of BODY Column names                  |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | LIST OF DEPENDENT OBJECTS AREA - Var Length |          */
 /*         |                                             |          */
 /*         | NOTE: This is not the actual list but a     |          */
 /*         |       set of offsets into the SQL CREATE    |          */
 /*         |       TRIGGER STMT that will position one   |          */
 /*         |       to a dependent object.                |          */
 /*         |                                             |          */
 /*         | Length of the LIST of DEP OBJs Area.        |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Number of objects in List                   |          */
 /*         | Array of Object information                 |          */
 /*         |   - Offsets to dependent object             |          */
 /*         |   - Type of object (table, UDT, UDF, etc)   |          */
 /*         |   - Attributes (eg library qualified)       |          */
 /*         |                                             |          */
 /*         | NOTE: All offsets are relative to the       |          */
 /*         |       beginning of the CREATE TRIGGER       |          */
 /*         |       string located in the TRIGGER SQL     |          */
 /*         |       STMT AREA.                            |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | TRANSITION AREA - Variable Length           |          */
 /*         |                                             |          */
 /*         | This area contains the old/new correlation  |          */
 /*         | names and the old/new transition            |          */
 /*         | table names that can be used by the action  |          */
 /*         | to reference the affected rows.             |          */
 /*         |                                             |          */
 /*         | Length of the TRANSITION Area.              |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Old Correlation variable name               |          */
 /*         | New Correlation variable name               |          */
 /*         | Old Transition Table name                   |          */
 /*         | New Transition Table name                   |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | SQL TRIGGER STMT AREA - Variable Length     |          */
 /*         |                                             |          */
 /*         | Length of the SQL TRIGGER STMT Area.        |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Length of the SQL CREATE TRIGGER STMT       |          */
 /*         | Length of the SQL WHEN CLAUSE               |          */
 /*         | Offset to the SQL WHEN CLAUSE relative to   |          */
 /*         |   the start of the SQL CREATE TRIGGER STMT  |          */
 /*         | Length of the SQL TRIGGER BODY              |          */
 /*         | Offset to the SQL TRIGGER BODY relative to  |          */
 /*         |   the start of the SQL CREATE TRIGGER STMT  |          */
 /*         | SQL CREATE TRIGGER STMT                     |          */
 /*         |                                             |          */
 /*         |---------------------------------------------|          */
 /*         |                                             |          */
 /*         | SQL TRIGGER TEXT AREA - Variable Length     |          */
 /*         |                                             |          */
 /*         | Length of the SQL TRIGGER TEXT Area.        |          */
 /*         |   This length plus the offset to this       |          */
 /*         |   substructure will get addressability to   |          */
 /*         |   the next substructure in this trigger     |          */
 /*         |   definition.                               |          */
 /*         |                                             |          */
 /*         | Length of the SQL TEXT                      |          */
 /*         | SQL TRIGGER TEXT                            |          */
 /*         |                                             |          */
 /*         | NOTE: The text for a trigger can only be    |          */
 /*         |       added via the COMMENT ON Statement.   |          */
 /*         |                                             |          */
 /*         -----------------------------------------------          */
 /*                                                                  */
 /*                                                                  */
 /********************************************************************/

/*********************************************************************/
/* This section can be located using offset Qdb_qdbftrg_off_ent_#1   */
/*********************************************************************/

  typedef _Packed struct
                     Qdb_Qdbftrg_Def_Head  {
                                    /* Trigger definition header     */
                                    /*                           @ADA*/

      char     Qdb_Qdbftrg_Reserved4[20];
                                    /* Reserved.                 @ADA*/


      unsigned long     Qdb_Qdbftrg_Def_Len;
                                    /* Length of the trigger         */
                                    /* definition entry.             */
                                    /* This includes all structures. */
                                    /* NOTE: This length will also   */
                                    /* include any padding needed    */
                                    /* to get a length divisable by  */
                                    /* 16. This is done in order to  */
                                    /* get the next trigger          */
                                    /* definition entry on a 16 byte */
                                    /* boundary.                     */
                                    /*                               */
                                    /*                           @ADA*/

      unsigned long     Qdb_Qdbftrg_Head_Len;
                                    /* Length of the trigger         */
                                    /* definition header -           */
                                    /* Qdb_qdbftrg_def_head      @ADA*/

      char     Qdb_Qdbftrg_Reserved5[52];
                                    /* Reserved                  @ADA*/

      char     Qdb_Qdbftrg_Def_Pgm[10];
                                    /* Trigger program name      @ADA*/

      char     Qdb_Qdbftrg_Def_Lib[10];
                                    /* Trigger program library   @ADA*/

      char     Qdb_Qdbftrg_Reserved6[4];
                                    /* Reserved                  @ADA*/


      unsigned long Qdb_Qdbftrg_Def_Ord_Num;
                                    /* Trigger ordinal number.   @ADA*/

      char     Qdb_Qdbftrg_Def_State[1];
                                    /* Trigger state.            @ADA*/
                                    /* 'E' = Enabled                 */
                                    /* 'D' = Disabled                */
                                    /* Value restricted to enabled.  */
                                    /* Disabled is not yet supported.*/
                                    /*                               */

      char     Qdb_Qdbftrg_Def_Operative[1];
                                    /* Trigger is operative.     @ADA*/
                                    /* 'O' = Operative Trigger.      */
                                    /* 'I' = Inoperative Trigger.    */
                                    /*                               */
                                    /* An Operative trigger indicates*/
                                    /* the trigger can be fired.     */
                                    /* An Inoperative trigger cannot */
                                    /* be fired.                     */
                                    /*                               */

      char     Qdb_Qdbftrg_Def_Type[1];
                                    /* Trigger type                  */
                                    /* 'N' = Native/System (added    */
                                    /*       using ADDPFTRG)         */
                                    /* 'S' = SQL (added using CREATE */
                                    /*       TRIGGER)            @ADA*/

      char     Qdb_Qdbftrg_Def_Mode[1];
                                    /* Trigger mode.             @ADA*/
                                    /* Used only when the trigger    */
                                    /* type QDBFTRG_DEF_TYPE is set  */
                                    /* to an SQL trigger.            */
                                    /* The mode is used to determine */
                                    /* the I/O model used during     */
                                    /* the trigger program           */
                                    /* execution.                    */
                                    /* '00'X = Not applicable.       */
                                    /* '01'X = DB2 SQL.              */
                                    /* '02'X = DB2 Row.              */

      char     Qdb_Qdbftrg_Def_Orient[1];
                                    /* Trigger orientation           */
                                    /* 'R' = Row trigger             */
                                    /* 'C' = Column trigger      @ADA*/

      char     Qdb_Qdbftrg_Def_Time[1];
                                    /* Trigger time                  */
                                    /* '1' = After                   */
                                    /* '2' = Before              @ADA*/
                                    /* '3' = Instead Of              */

      char     Qdb_Qdbftrg_Def_Event[1];
                                    /* Trigger event                 */
                                    /* '1' = Insert                  */
                                    /* '2' = Delete                  */
                                    /* '3' = Update                  */
                                    /* '4' = Read                @ADA*/

      char     Qdb_Qdbftrg_Reserved7[45];
                                    /* Reserved                  @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Trg_Name;
                                    /* Offset to the trigger name    */
                                    /* structure.                @ADA*/

      unsigned long     Qdb_Qdbftrg_Reserved8;
                                    /* Reserved.                 @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Sql_Path;
                                    /* Offset to the SQL path.   @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Upd_Cols;
                                    /* Offset to the update columns  */
                                    /* structure.                @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_When_Cols;
                                    /* Offset to the structure       */
                                    /* containing the list of        */
                                    /* columns referenced in the     */
                                    /* WHEN condition.           @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Body_Cols;
                                    /* Offset to the structure       */
                                    /* containing the list of        */
                                    /* columns referenced in the     */
                                    /* trigger body.             @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Dep_Objs;
                                    /* Offset to the structure       */
                                    /* containing the list of        */
                                    /* dependent objects referenced  */
                                    /* in the trigger body.      @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Transition;
                                    /* Offset to the structure       */
                                    /* containing the transition     */
                                    /* tables.                   @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Trg_Stmt;
                                    /* Offset to the structure       */
                                    /* containing the CREATE TRIGGER */
                                    /* statement.                @ADA*/

      unsigned long     Qdb_Qdbftrg_Def_Off_Trg_Long;
                                    /* Offset to the structure       */
                                    /* containing the trigger long   */
                                    /* comment area.  The long       */
                                    /* comment can only be added     */
                                    /* via the COMMENT ON statement. */
                                    /* 0 => No Trigger Long Comment. */
                                    /*                           @ADA*/

      char     Qdb_Qdbftrg_Reserved9[64];
                                    /* Reserved                  @ADA*/

      char    Qdb_Qdbftrg_Def_Updcond[1];
                                    /* Trigger update condition. For
                                       system/native triggers only.
                                       This field is only valid for
                                       UPDATE event. This field will
                                       be ignored for INSERT or
                                       DELETE or READ events.
                                       '1' = Always calls the trigger
                                             when updating the file.
                                       '2' = Only calls the trigger
                                             when the updated values
                                             are changed.        @ADA*/

      char     Qdb_Qdbftrg_Def_Allow_Repchg[1];
                                    /* Allow repeated change.
                                       '00'X = *NO (not allowed)
                                       '01'X = *YES (allows change)
                                                                 @ADA*/

      char     Qdb_Qdbftrg_Def_Threadsafe[1];
                                    /* Threadsafe indicator.
                                       X'00' = *UNKNOWN (Threadsafe
                                               status is not known)
                                       X'01' = *NO (Not threadsafe)
                                       X'10' = *YES (Threadsafe)
                                                                 @ADA*/

      char     Qdb_Qdbftrg_Def_Multijob[1];
                                    /* Multithreaded Job Action
                                       Indicator
                                       X'00' = *SYSVAL (default)
                                       X'01' = *MSG (Run, diagnostic)
                                       X'10' = *NORUN (Escape)
                                       X'11' = *RUN (Run, no message)
                                                                 @ADA*/

      char     Qdb_Qdbftrg_Def_Old_Tvar[1];
                                    /* Old transition variable       */
                                    /* indicator                     */
                                    /* X'00' = No                    */
                                    /* X'01' = Yes                   */
                                    /* For SQL triggers only     @ADA*/

      char     Qdb_Qdbftrg_Def_New_Tvar[1];
                                    /* New transition variable       */
                                    /* indicator                     */
                                    /* X'00' = No                    */
                                    /* X'01' = Yes                   */
                                    /* For SQL triggers only     @ADA*/

      char     Qdb_Qdbftrg_Def_Old_Ttable[1];
                                    /* Old transition table          */
                                    /* indicator                     */
                                    /* X'00' = No                    */
                                    /* X'01' = Yes                   */
                                    /* For SQL triggers only     @ADA*/

      char     Qdb_Qdbftrg_Def_New_Ttable[1];
                                    /* New transition table          */
                                    /* indicator                     */
                                    /* X'00' = No                    */
                                    /* X'01' = Yes                   */
                                    /* For SQL triggers only     @ADA*/

      char     Qdb_Qdbftrg_Def_Self_Ref[1];
                                    /* Indicates if this trigger is  */
                                    /* self-referencing. That is,    */
                                    /* did the user explicitly       */
                                    /* specify this file's name in   */
                                    /* the trigger body.             */
                                    /* X'00' => Not self-referencing */
                                    /* X'01' => Self-referencing     */
                                    /*                           @ADA*/

      char     Qdb_Qdbftrg_Def_Crt_Ts[13];
                                    /* Trigger creation timestamp    */
                                    /*                           @ADA*/

      char     Qdb_Qdbftrg_Def_Crt_User[10];
                                    /* User profile that created the */
                                    /* trigger                   @ADA*/

      char     Qdb_Qdbftrg_Def_Pgm_Owner[10];
                                    /* User profile that owns the    */
                                    /* trigger program           @ADA*/
                                    /* For SQL triggers only         */

      unsigned long    Qdb_Qdbftrg_Def_Trg_Ccsid;
                                    /* CCSID that the trigger        */
                                    /* statement was created with.   */
                                    /*                           @ADA*/

      char     Qdb_Qdbftrg_Reserved34[1];
                                    /* Reserved.                 @ADA*/

      char     Qdb_Qdbftrg_Def_Mod_Tvar[1];
                                    /* Indicates if the trigger      */
                                    /* contains a SET statement that */
                                    /* modifies the new correlation  */
                                    /* variable.                     */
                                    /* X'00' = No                    */
                                    /* X'01' = Yes                   */
                                    /* For SQL Before Update triggers*/
                                    /* only.                     @ADA*/


      char     Qdb_Qdbftrg_Reserved10[152];
                                    /* Reserved                  @ADA*/

    } Qdb_Qdbftrg_Def_Head_t;

/*********************************************************************/
/* The following structure maps the trigger name area                */
/*********************************************************************/

 typedef _Packed struct Qdb_Qdbftrg_name_area {

      char Qdb_Qdbftrg_Reserved11[20];
                                    /* Reserved.                 @ADA*/

      unsigned long Qdb_Qdbftrg_Name_Area_Tot_Len;
                                    /* Total length of the trigger   */
                                    /* name area.                @ADA*/

      unsigned long Qdb_Qdbftrg_Name_Lib_Len;
                                    /* Length of the trigger library */
                                    /* name.                     @ADA*/

      unsigned long Qdb_Qdbftrg_Name_Len;
                                    /* Length of the trigger     @ADA*/
                                    /* name.                         */

      char Qdb_Qdbftrg_Name_Sysgen[1];
                                    /* Trigger name generated by     */
                                    /* the system.                   */
                                    /* X'00' => User GENed name.     */
                                    /* X'01' => Originally, user     */
                                    /*          GENed name but       */
                                    /*          collision occured    */
                                    /*          and system Re-GENed  */
                                    /*          the name.            */
                                    /* X'02' => System GENed name.   */
                                    /*                           @ADA*/

      char Qdb_Qdbftrg_Name_Delim[1];
                                    /* Trigger name is a delimited   */
                                    /* name. If a delimited name,    */
                                    /* then the name will contain    */
                                    /* double quotes.                */
                                    /* X'00' => Not delimited name.  */
                                    /* X'01' => Is a delimited name. */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_Lib_Delim[1];
                                    /* Trigger library is a delimited*/
                                    /* name. If delimited,           */
                                    /* then the name will contain    */
                                    /* double quotes.                */
                                    /* X'00' => Not delimited name.  */
                                    /* X'01' => Is a delimited name. */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_Name_Type[1];
                                    /* Trigger naming convention.    */
                                    /* X'00' => System naming.       */
                                    /* X'01' => SQL naming.      @ADA*/
      char     Qdb_Qdbftrg_Reserved12[58];
                                    /* Reserved                  @ADA*/

      char     Qdb_Qdbftrg_Name_Qual[268];
                                    /* Qualified trigger name.       */
                                    /* The trigger name and library  */
                                    /* are in 2 parts.               */
                                    /* The first part contains the   */
                                    /* trigger library name (10      */
                                    /* characters).                  */
                                    /* The second part contains the  */
                                    /* trigger name (258 characters).*/
                                    /* Qdb_Qdbftrg_Name_Len contains */
                                    /* the length of the trigger     */
                                    /* name.                         */
                                    /*                               */
                                    /* The trigger name may be a     */
                                    /* delimited name (double        */
                                    /* quotes).                      */
                                    /* Qdb_Qdbftrg_Name_Delim        */
                                    /* indicates whether it is       */
                                    /* delimited.  If it is          */
                                    /* delimited, the the name in    */
                                    /* this field does contain       */
                                    /* double quotes.                */
                                    /*                               */
                                    /* The trigger library may be a  */
                                    /* delimited name (double        */
                                    /* quotes).                      */
                                    /* Qdb_Qdbftrg_Lib_Delim         */
                                    /* indicates whether it is       */
                                    /* delimited.                @ADA*/

    } Qdb_Qdbftrg_Name_Area_t;

/*********************************************************************/
/* The following structure maps the SQL path structure               */
/*********************************************************************/

 typedef _Packed struct Qdb_Qdbftrg_Path_Area {

       char Qdb_Qdbftrg_Reserved13[20];
                                    /* Reserved.                 @ADA*/

      unsigned long Qdb_Qdbftrg_Path_Tot_Len;
                                    /* Length of the trigger path    */
                                    /* area.                     @ADA*/

      unsigned long Qdb_Qdbftrg_Path_Len;
                                    /* Length of the path structure. */
                                    /*                           @ADA*/

      char     Qdb_Qdbftrg_Reserved14[36];
                                    /* Reserved                  @ADA*/

    /*char Qdb_Qdbftrg_Path[];*/    /* SQL Path (varying length). */
                                    /*                        @ADA*/
    } Qdb_Qdbftrg_Path_Area_t;
 /********************************************************************/
 /*                                                                  */
 /* List of Update Columns                                           */
 /*                                                                  */
 /* This is the list of columns specified for an Update trigger.     */
 /* The columns in this list must be present in the file's record    */
 /* format. The list will contain both the short and long column     */
 /* names.                                                           */
 /*                                                                  */
 /* A seperate structure will be used to reference the column        */
 /* names since the long name can be variable length.                */
 /*                                                                  */
 /* NOTE: Each column entry name is unique. There will not be any    */
 /*       duplicate name entries.                                    */
 /*                                                                  */
 /********************************************************************/
 /********************************************************************/
 /* The following structure maps the UPDATE columns list entry       */
 /********************************************************************/
 typedef _Packed struct Qdbf_Qdbftrg_Updc_List_Ent {

       unsigned long  Qdb_Qdbftrg_Updc_Le_Len;
                                    /* List Entry Length.            */
                                    /* Addressability to this entry  */
                                    /* plus this length gets         */
                                    /* addressability to the next    */
                                    /* column list entry.        @ADA*/
                                    /*                               */
       char Qdb_Qdbftrg_Updc_Le_Short_Name[10];
                                    /* Short name of the column.     */
                                    /*                           @ADA*/
       char Qdb_Qdbftrg_Updc_Le_Short_Del[1];
                                    /* Short name is delimited.      */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/
       char Qdb_Qdbftrg_Updc_Le_Long_Del[1];
                                    /* Long name is delimited.       */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/
       char Qdb_Qdbftrg_Updc_Le_Long_Same[1];
                                    /* Short name and long name are  */
                                    /* the same.                     */
                                    /* X'00' => Names are different. */
                                    /* X'01' => Names are the same.  */
                                    /*                           @ADA*/

       unsigned long Qdb_Qdbftrg_Updc_Le_Long_Len;
                                    /* Length of the long name -     */
                                    /* qdbfTRG_UPDC_LE_LONG_NAME     */
                                    /*                           @ADA*/
       char Qdb_Qdbftrg_Reserved17[27];
                                    /* Reserved                  @ADA*/

    /*char Qdb_Qdbftrg_Updc_Le_Long_Name[];*/
                                    /* Long name of the column       */
                                    /* (varying length).             */
                                    /*                           @ADA*/
                                    /*                               */

    } Qdb_Qdbftrg_Updc_List_Ent_t;
 /*********************************************************************/
 /* The following structure maps the UPDATE columns structure         */
 /*********************************************************************/
 typedef _Packed struct Qdb_Qdbftrg_Updc_Area {

       char Qdb_Qdbftrg_Reserved15[20];
                                    /* Reserved.                 @ADA*/

      unsigned long Qdb_Qdbftrg_Updc_Tot_Len;
                                    /* Length of the update columns  */
                                    /* area.                     @ADA*/

      unsigned long Qdb_Qdbftrg_Updc_Num_Cols;
                                    /* Number of columns in the list.*/
                                    /*                           @ADA*/

      char Qdb_Qdbftrg_Reserved16[52];
                                    /* Reserved                  @ADA*/

    /*char Qdb_Qdbftrg_Updc_List_Struc[];*/
                                    /* Update column list structure  */
                                    /* (varying length).         @ADA*/

    } Qdb_Qdbftrg_Updc_Area_t;



/*********************************************************************/
/* List of WHEN Reference Columns                                    */
/*                                                                   */
/* This is the list of the columns in the WHEN portion of the        */
/* CREATE TRIGGER statement. Actually, the name is NOT part of the   */
/* list. Rather, there is an offset to the column name in the WHEN   */
/* statement of the expanded CREATE TRIGGER string.                  */
/*                                                                   */
/* Each WHEN column entry consists of a set of offsets into the      */
/* CREATE TRIGGER expanded string. The following is an example       */
/* of the offsets.                                                   */
/*                                                                   */
/*          Given Table T1 in LIB1 with columns COL1 and COL2        */
/*          SQL will generate correlation variables X and Y.         */
/*                                                                   */
/*          If the user codes the following:                         */
/*                                                                   */
/*          CREATE TRIGGER ...                                       */
/*            AFTER INSERT ON T1 ...                                 */
/*              WHEN(COL1 = COL2) ...                                */
/*                                                                   */
/*          The expanded string will be in the form:                 */
/*                                                                   */
/*          CREATE TRIGGER ...                                       */
/*            AFTER INSERT ON LIB1.T1 X ...                          */
/*              WHEN(X.COL1 = X.COL2) ...                            */
/*                                                                   */
/*          The correlation variable X is used to qualify the        */
/*          column names with the library and file. The table in     */
/*          the expanded string are qualified with the library       */
/*          name.                                                    */
/*                                                                   */
/*          The list entries will have offsets into the expanded     */
/*          CREATE TRIGGER string.                                   */
/*                                                                   */
/*          ---------------------                                    */
/*          | WHEN entry 1      |                                    */
/*          | Offset to col ----|--------------+                     */
/*          | Offset to file ---|--------+     |                     */
/*   +------| Offset to lib     |        |     |                     */
/*   |      |-------------------|        |     |                     */
/*   |      | WHEN entry 2      |        |     |                     */
/*   |      | Offset to col ----|--------|-----|--------+            */
/*   |      | Offset to file ---|----+   |     |        |            */
/*   |   +--| Offset to lib     |    |   |     |        |            */
/*   |   |  ---------------------    |   |     |        |            */
/*   |   |                           |   |     |        |            */
/*   |   |                           |   |     |        |            */
/*   +-->+---------------+    +------+<--+     |        |            */
/*                       |    |                |        |            */
/* CREATE TRIGGER string V    V                V        V            */
/* ----------------------------------------------------------------  */
/* | ... AFTER INSERT ON LIB1.T1 X ... WHEN(X.COL1 = X.COL2) ...  |  */
/* ----------------------------------------------------------------  */
/*                                                                   */
/* NOTE: The list of WHEN columns will identify all instances of a   */
/*       column in the list. That is, there may be multiple          */
/*       entries for the same column name. The first entry flag      */
/*       can be used to differentiate between the first occurrence   */
/*       of a column in the list and subsequent entries.             */
/*                                                                   */
/*********************************************************************/
/* The following structure maps the WHEN columns array entry         */
/*********************************************************************/

 typedef _Packed struct Qdb_Qdbftrg_When_Array {

      unsigned long Qdb_Qdbftrg_When_Col_Off;
                                    /* WHEN column name offset into  */
                                    /* the WHEN portion of the CREATE*/
                                    /* TRIGGER statement.        @ADA*/

      unsigned long Qdb_Qdbftrg_When_Col_Len;
                                    /* WHEN column name length.  @ADA*/

      unsigned long Qdb_Qdbftrg_When_File_Off;
                                    /* Offset to the column's file   */
                                    /* name.                     @ADA*/

      unsigned long Qdb_Qdbftrg_When_File_Len;
                                    /* Length of the column's file   */
                                    /* name in the trigger string.   */
                                    /*                           @ADA*/

      unsigned long Qdb_Qdbftrg_When_Lib_Off;
                                    /* Offset to the column's file   */
                                    /* library name.             @ADA*/

      unsigned long Qdb_Qdbftrg_When_Lib_Len;
                                    /* Length of the column's file   */
                                    /* library name.             @ADA*/

      char Qdb_Qdbftrg_When_1st_Entry[1];
                                    /* Indicates if the column name  */
                                    /* is the first in the list of   */
                                    /* entries.                      */
                                    /* X'00' => Column is 2nd or     */
                                    /*          greater occurance    */
                                    /*          in the list.         */
                                    /* X'01' => Column is the first  */
                                    /*          in the list.     @ADA*/

      char Qdb_Qdbftrg_When_This_File[1];
                                    /* Indicates if the column name  */
                                    /* is in this FILE. That is,     */
                                    /* the column name is in the     */
                                    /* same file as the trigger.     */
                                    /* X'00' => Column not in THIS   */
                                    /*          FILE.                */
                                    /* X'01' => Column in THIS FILE. */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_When_Col_Long[1];
                                    /* Indicates if the column name  */
                                    /* is a short or long name.      */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_When_Col_Del[1];
                                    /* Indicates if the column name  */
                                    /* is a delimited name.          */
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_When_File_Long[1];
                                    /* Indicates if the column's FILE*/
                                    /* name is a short or long name. */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_When_File_Del[1];
                                    /* Indicates if the column's     */
                                    /* FILE name is a delimited name.*/
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_When_Lib_Long[1];
                                    /* Indicates if the column's LIB */
                                    /* name is a short or long name. */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_When_Lib_Del[1];
                                    /* Indicates if the column's     */
                                    /* LIB name is a delimited name. */
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/
      char Qdb_Qdbftrg_Reserved20[32];
                                    /* Reserved                  @ADA*/

    } Qdb_Qdbftrg_When_Array_t;

/*********************************************************************/
/* The following structure maps the WHEN columns structure           */
/*********************************************************************/

 typedef _Packed struct Qdb_Qdbftrg_When_Area {

       char Qdb_Qdbftrg_Reserved18[20];
                                    /* Reserved.                 @ADA*/

      unsigned long Qdb_Qdbftrg_When_Tot_Len;
                                    /* Length of the WHEN            */
                                    /* referenced columns area.  @ADA*/

      unsigned long Qdb_Qdbftrg_When_Num_Cols;
                                    /* Number of columns in the list.*/
                                    /*                           @ADA*/

      char Qdb_Qdbftrg_When_Self_Ref[1];
                                    /* Indicates columns in the      */
                                    /* WHEN list belong to this file.*/
                                    /* That is, this is a self-      */
                                    /* referencing dependency.       */
                                    /* X'00' => All self-referencing.*/
                                    /*          All columns belong   */
                                    /*          to the ON table.     */
                                    /* X'01' => Self-referencing.    */
                                    /*          Some of the columns  */
                                    /*          belong to the ON     */
                                    /*          table.               */
                                    /* X'02' => Not self-referencing.*/
                                    /*          None of the columns  */
                                    /*          belong to the ON     */
                                    /*          table.               */
                                    /*                               */

      char Qdb_Qdbftrg_Reserved19[51];
                                    /* Reserved                  @ADA*/

      Qdb_Qdbftrg_When_Array_t Qdb_Qdbftrg_When_Array;
                                    /* WHEN column list array.   @ADA*/

    } Qdb_Qdbftrg_When_Area_t;

/*********************************************************************/
/* The following structure maps the BODY columns structure           */
/*                                                                   */
/* List of Columns referenced in the BODY                            */
/*                                                                   */
/* This is the list of the columns in the BODY portion of the        */
/* CREATE TRIGGER statement.                                         */
/*                                                                   */
/* The columns in this list may be in this file or another file.     */
/*                                                                   */
/* NOTE: This is not the actual list but a set of offsets into the   */
/*       SQL CREATE TRIGGER stmt that will position one to a         */
/*       column name in the BODY.                                    */
/*                                                                   */
/*       See the WHEN columns prologue for an example of how         */
/*       column entry offsets are tied to the CREATE TRIGGER string. */
/*                                                                   */
/* NOTE: The list of BODY columns will identify all instances of a   */
/*       column in the list. That is, there may be multiple          */
/*       entries for the same column name. The first entry flag      */
/*       can be used to differentiate between the first occurrence   */
/*       of a column in the list and subsequent entries.             */
/*                                                                   */
/*********************************************************************/
/* The following structure maps the BODY column array entry          */
/*********************************************************************/
 typedef _Packed struct Qdb_Qdbftrg_Body_Array {

                                    /* Individual BODY Column Entry. */
                                    /* Note: This structure does     */
                                    /* not contain the name of a     */
                                    /* column in the trigger body,   */
                                    /* but an offest into the        */
                                    /* trigger body where the        */
                                    /* column is referenced.         */
                                    /* Each entry is 64 bytes long.  */
                                    /*                           @ADA*/

    unsigned long Qdb_Qdbftrg_Body_Col_Off;
                                    /* BODY Column Name offset into  */
                                    /* the BODY portion of the       */
                                    /* CREATE TRIGGER statement. @ADA*/

    unsigned long Qdb_Qdbftrg_Body_Col_Len;
                                    /* Length of the column name in  */
                                    /* the trigger string.       @ADA*/

    unsigned long Qdb_Qdbftrg_Body_File_Off;
                                    /* Offset to the column's file   */
                                    /* name.                     @ADA*/

    unsigned long Qdb_Qdbftrg_Body_File_Len;
                                    /* Length of the column's file   */
                                    /* name in the trigger string.   */
                                    /*                           @ADA*/

    unsigned long Qdb_Qdbftrg_Body_Lib_Off;
                                    /* Offset to the column's library*/
                                    /* name.                     @ADA*/

    unsigned long Qdb_Qdbftrg_Body_Lib_Len;
                                    /* Length of the column's library*/
                                    /* name in the trigger string.   */
                                    /*                           @ADA*/

    char Qdb_Qdbftrg_Body_1st_Entry[1];
                                    /* Indicates if the column name  */
                                    /* is the first in the list of   */
                                    /* entries.                      */
                                    /* X'00' => Column is 2nd or     */
                                    /*          greater occurance    */
                                    /*          in the list.         */
                                    /* X'01' => Column is the first  */
                                    /*          in the list.     @ADA*/

     char Qdb_Qdbftrg_Body_This_File[1];
                                    /* Indicates if the column name  */
                                    /* is in this FILE. That is,     */
                                    /* the column name is in the     */
                                    /* same file as the trigger.     */
                                    /* X'00' => Column not in THIS   */
                                    /*          FILE.                */
                                    /* X'01' => Column in THIS FILE. */
                                    /*                           @ADA*/

     char Qdb_Qdbftrg_Body_Col_Long[1];
                                    /* Indicates if the column name  */
                                    /* is a short or long name.      */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/

     char Qdb_Qdbftrg_Body_Col_Del[1];
                                    /* Indicates if the column name  */
                                    /* is a delimited name.          */
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

      char Qdb_Qdbftrg_Body_File_Long[1];
                                    /* Indicates if the column's FILE*/
                                    /* name is a short or long name. */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/

      char Qdb_Qdbftrg_Body_File_Del[1];
                                    /* Indicates if the column's     */
                                    /* FILE name is a delimited name.*/
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

      char Qdb_Qdbftrg_Body_Lib_Long[1];
                                    /* Indicates if the column's LIB */
                                    /* name is a short or long name. */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/

      char Qdb_Qdbftrg_Body_Lib_Del[1];
                                    /* Indicates if the column's     */
                                    /* LIB name is a delimited name. */
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

       char Qdb_Qdbftrg_Reserved23[32];
                                    /* Reserved area-future use. @ADA*/

    } Qdb_Qdbftrg_Body_Array_t;
 /*********************************************************************/
 /* The following structure maps the BODY columns structure           */
 /*********************************************************************/

 typedef _Packed struct Qdb_Qdbftrg_Body_Area {

        char Qdb_Qdbftrg_Reserved21[20];
                                    /* Reserved.                 @ADA*/

        unsigned long Qdb_Qdbftrg_Body_Tot_Len;
                                    /* Total length of the list of   */
                                    /* WHEN reference columns        */
                                    /* substructure                  */
                                    /* Qdb_qdbftrg_body_area.    @ADA*/

        unsigned long Qdb_Qdbftrg_Body_Num_Cols;
                                    /* Number of columns in the list.*/
                                    /* 0 = No columns in the list.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Body_Self_Ref[1];
                                    /* Indicates columns in the      */
                                    /* BODY list belong to this file.*/
                                    /* That is, this is a self-      */
                                    /* referencing dependency.   @ADA*/
                                    /* X'00' => All self-referencing.*/
                                    /* X'01' => Some self-referencing*/
                                    /* X'10' => Not self-referencing.*/

        char Qdb_Qdbftrg_Reserved22[51];
                                    /* Reserved.                 @ADA*/

        Qdb_Qdbftrg_Body_Array_t Qdb_Qdbftrg_Body_Array;
                                    /* Array used to access the list */
                                    /* of BODY referenced columns.   */
                                    /*                           @ADA*/
    } Qdb_Qdbftrg_Body_Area_t;

 /********************************************************************/
 /*                                                                  */
 /* List of Dependent Objects for the WHEN/BODY clauses.             */
 /*                                                                  */
 /* NOTE: This is not the actual list but a set of offsets into the  */
 /*       SQL CREATE TRIGGER stmt that will position one to a        */
 /*       dependent object.                                          */
 /*                                                                  */
 /* NOTE: All offsets in this list are relative to the beginning of  */
 /*       the CREATE TRIGGER string located in the TRIGGER SQL STMT  */
 /*       variable Qdb_qdbftrg_stmt_crt_trg.                         */
 /*                                                                  */
 /* NOTE: The list of dependent objects will identify all instances  */
 /*       of an object in the list. That is, there may be multiple   */
 /*       entries for the same object name. The first entry flag     */
 /*       can be used to differentiate between the first occurrence  */
 /*       of an object in the list and subsequent entries.           */
 /*                                                                  */
 /********************************************************************/

/*********************************************************************/
/* The following structure maps the dependent objects array entry    */
/*********************************************************************/

   typedef _Packed struct Qdbf_Qdbftrg_Depo_Array {

        char Qdb_Qdbftrg_Depo_Type[2];
                                    /* Type of dependent object.     */
                                    /* TB = Table                    */
                                    /* PF = Physical File            */
                                    /* VW = View                     */
                                    /* LF = Logical File             */
                                    /* IX = Index                    */
                                    /* UF = UDF                      */
                                    /* UT = UDT                      */
                                    /* PR = Procedure                */
                                    /* AL = Alias                @ADA*/

         unsigned long Qdb_Qdbftrg_Depo_Off;
                                    /* Offset to the dependent       */
                                    /* object - relative to the      */
                                    /* beginning of the CREATE       */
                                    /* TRIGGER string                */
                                    /* Qdb_qdbftrg_stmt_crt_trg      */
                                    /*                           @ADA*/

         unsigned long Qdb_Qdbftrg_Depo_Len;
                                    /* Length of the dependent       */
                                    /* object's name.            @ADA*/

         unsigned long Qdb_Qdbftrg_Depo_Lib_Off;
                                    /* Offset to the qualifying      */
                                    /* library name of the dependent */
                                    /* object.                       */
                                    /* Offset relative from start of */
                                    /* Qdb_qdbftrg_stmt_crt_trg      */
                                    /* 0 => No qualifying library.   */
                                    /*                           @ADA*/

          unsigned long Qdb_Qdbftrg_Depo_Lib_Len;
                                    /* Length of the qualifying      */
                                    /* library name of the dependent */
                                    /* object.                       */
                                    /* 0 => No qualifying library.   */
                                    /*                           @ADA*/

          char Qdb_Qdbftrg_Depo_1st_Entry[1];
                                    /* Indicates if the object name  */
                                    /* is the first in the list of   */
                                    /* entries. Criteria is based on */
                                    /* object name, library name and */
                                    /* object type.                  */
                                    /* X'00' => Object is 2nd or     */
                                    /*          greater occurance    */
                                    /*          in the list.         */
                                    /* X'01' => Object is the first  */
                                    /*          in the list.     @ADA*/

        char Qdb_Qdbftrg_Depo_This_File[1];
                                    /* Indicates if the object is    */
                                    /* this FILE.                    */
                                    /* X'00' => Object Not THIS FILE.*/
                                    /* X'01' => Object is THIS FILE. */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Depo_Obj_Long[1];
                                    /* Indicates if the object name  */
                                    /* is a short or long name.      */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Depo_Obj_Del[1];
                                    /* Indicates if the object name  */
                                    /* is a delimited name.          */
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Depo_Lib_Long[1];
                                    /* Indicates if the object's LIB */
                                    /* name is a short or long name. */
                                    /* X'00' => Name is short name.  */
                                    /* X'01' => Name is long name.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Depo_Lib_Del[1];
                                    /* Indicates if the object's     */
                                    /* LIB name is a delimited name. */
                                    /* X'00' => Name non-delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Reserved26[40];
                                    /* Reserved.                 @ADA*/

    } Qdb_Qdbftrg_Depo_Array_t;

/*********************************************************************/
/* The following structure maps the dependent objects area           */
/*********************************************************************/
   typedef _Packed struct Qdbf_Qdbftrg_Depo_Area {

         char Qdb_Qdbftrg_Reserved24[20];
                                    /* Reserved.                 @ADA*/

         unsigned long Qdb_Qdbftrg_Depo_Tot_Len;
                                    /* Total length of the list of   */
                                    /* dependent objects             */
                                    /* substructure                  */
                                    /* Qdb_qdbftrg_depo_area.    @ADA*/

         unsigned long Qdb_Qdbftrg_Depo_Num_Off;
                                    /* Number of dependent object    */
                                    /* offsets in the following      */
                                    /* array.                    @ADA*/

         char Qdb_Qdbftrg_Depo_Self_Ref[1];
                                    /* Indicates this file is        */
                                    /* referenced at least once      */
                                    /* somewhere in the WHEN or      */
                                    /* BODY. That is, this is a      */
                                    /* self-referencing dependency.  */
                                    /* X'00' => Not self-referencing.*/
                                    /* X'01' => Is self-referencing. */
                                    /*                           @ADA*/

         char Qdb_Qdbftrg_Reserved25[51];
                                    /* Reserved.                 @ADA*/

         Qdb_Qdbftrg_Depo_Array_t Qdb_Qdbftrg_Depo_Array;
                                    /* Array used to access the list */
                                    /* of dependent objects offsets. */
                                    /*                           @ADA*/
    } Qdb_Qdbftrg_Depo_Area_t;

 /********************************************************************/
 /*                                                                  */
 /* TRANSITION AREA for OLD/NEW Correlation Variable names and       */
 /*                     OLD/NEW Transistion Table names.             */
 /*                                                                  */
 /* This area contains the old/new correlation variable names and the*/
 /* old/new transition table names that can be used by the action to */
 /* reference the affected rows.                                     */
 /*                                                                  */
 /********************************************************************/

   typedef _Packed struct Qdbf_Qdbftrg_Trns_Area {
                                    /* Transition area.          @ADA*/

        char Qdb_Qdbftrg_Reserved27[20];
                                    /* Reserved.                 @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Tot_Len;
                                    /* Total length of the transition*/
                                    /* area substructure             */
                                    /* Qdb_qdbftrg_trns_area;    @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Oldvar_Len;
                                    /* Old correlation variable name */
                                    /* length.                   @ADA*/
                                    /* 0 => No old transition var.   */

        unsigned long Qdb_Qdbftrg_Trns_Newvar_Len;
                                    /* New correlation variable name */
                                    /* length.                       */
                                    /* 0 => No new correlation var.  */
                                    /*                           @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Oldtbl_Len;
                                    /* Old transition table name     */
                                    /* length.                       */
                                    /* 0 => No old transition table. */
                                    /*                           @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Newtbl_Len;
                                    /* New transition table name     */
                                    /* length.                       */
                                    /* 0 => No new transition table. */
                                    /*                           @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Oldvar_Off;
                                    /* Offset to the Old correlation */
                                    /* variable name.                */
                                    /* This offset is relative to    */
                                    /* the beginning of the names    */
                                    /* variable                      */
                                    /* Qdb_qdbftrg_Trns_Names.       */
                                    /* 0 => No Old correlation var.  */
                                    /*                           @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Newvar_Off;
                                    /* Offset to the New correlation */
                                    /* variable name.                */
                                    /* This offset is relative to    */
                                    /* the beginning of the names    */
                                    /* variable                      */
                                    /* Qdb_qdbftrg_Trns_Names.       */
                                    /* 0 => No New transition var.   */
                                    /*                           @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Oldtbl_Off;
                                    /* Offset to the Old transition  */
                                    /* table name.                   */
                                    /* This offset is relative to    */
                                    /* the beginning of the names    */
                                    /* variable                      */
                                    /* Qdb_qdbftrg_Trns_Names.       */
                                    /* 0 => No Old transition table. */
                                    /*                           @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Newtbl_Off;
                                    /* Offset to the New transition  */
                                    /* table name.                   */
                                    /* This offset is relative to    */
                                    /* the beginning of the names    */
                                    /* variable                      */
                                    /* Qdb_qdbftrg_Trns_Names.       */
                                    /* 0 => No New transition table. */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Trns_Oldvar_Del[1];
                                    /* Old correlation variable name */
                                    /* is delimited.                 */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Trns_Newvar_Del[1];
                                    /* New correlation variable name */
                                    /* is delimited.                 */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Trns_Oldtbl_Del[1];
                                    /* Old transition table name     */
                                    /* is delimited.                 */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Trns_Newtbl_Del[1];
                                    /* New transition table name     */
                                    /* is delimited.                 */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        unsigned long Qdb_Qdbftrg_Trns_Names_Len;
                                    /* Total length of the transition*/
                                    /* names in the structure        */
                                    /* Qdb_Qdbftrg_Trns_Names.   @ADA*/


        char Qdb_Qdbftrg_Reserved28[48];
                                    /* Reserved.                 @ADA*/

      /*char Qdb_Qdbftrg_Trns_Names[];*/
                                    /* Old/new transition        @ADA*/
                                    /* variable/table names reside   */
                                    /* here. See offsets for         */
                                    /* substringing the names        */
                                    /* (varying length).         @ADA*/
    } Qdb_Qdbftrg_Trns_Area_t;
                                    /*                           @ADA*/
 /********************************************************************/
 /*                                                                  */
 /* SQL TRIGGER STMT AREA                                            */
 /*                                                                  */
 /* NOTE: This is the complete CREATE TRIGGER statement and expanded */
 /*       to include library information.                            */
 /*                                                                  */
 /* NOTE: All offsets are relative to the beginning of the CREATE    */
 /*       TRIGGER string.                                            */
 /*                                                                  */
 /* DESIGN NOTE: The expanded string for the CREATE TRIGGER will be  */
 /*        library qualified for both SQL names and system names.    */
 /*        That is, for those object names not library qualified,    */
 /*        one will be added before the object name. All names       */
 /*        (short, long, delimited, non-delimited) will be left as   */
 /*        the user specified them.                                  */
 /*                                                                  */
 /*        The design point will be to store the image of what the   */
 /*        user defined but with all names library qualified.        */
 /*                                                                  */
 /*        For column names, correlation variables will be used      */
 /*        for each column to qualify the names.                     */
 /*                                                                  */
 /*        For example:                                              */
 /*                                                                  */
 /*          Given Table T1 in LIB1 with columns COL1 and COL2       */
 /*          Given Table T2 in LIB2 with columns COL3 and COL4       */
 /*          SQL will generate correlation variables X and Y         */
 /*                                                                  */
 /*          If the user codes the following:                        */
 /*                                                                  */
 /*          CREATE TRIGGER ... SELECT * FROM T1, T2 WHEN COL1 = 10  */
 /*                                                                  */
 /*          The expanded string will be in the form:                */
 /*                                                                  */
 /*          CREATE TRIGGER ...                                      */
 /*            SELECT X.COL1, X.COL2, Y.COL3, Y.COL4                 */
 /*              FROM LIB1.T1 X, LIB2.T2 Y                           */
 /*                WHEN X.COL1 = 10                                  */
 /*                                                                  */
 /*          The correlation variables X and Y are used to qualify   */
 /*          the column names with the library and file. The tables  */
 /*          in the expanded string are qualified with the library   */
 /*          name.                                                   */
 /*                                                                  */
 /********************************************************************/

 typedef _Packed struct Qdb_Qdbftrg_Stmt_Area {
                                    /* SQL Trigger statement area.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Reserved29[20];
                                    /* Reserved.                 @ADA*/

        unsigned long Qdb_Qdbftrg_Stmt_Tot_Len;
                                    /* Total length of the SQL       */
                                    /* Trigger statement area -      */
                                    /* substructure                  */
                                    /* Qdb_Qdbftrg_Stmt_Area.    @ADA*/
        unsigned long Qdb_Qdbftrg_Stmt_Onfile_Off;
                                    /* Offset to the user specified  */
                                    /* file/table name in the        */
                                    /* CREATE TRIGGER STMT.          */
                                    /* This is the ON table-name     */
                                    /* that specifies the table      */
                                    /* the trigger is being added    */
                                    /* to. See the prologue of this  */
                                    /* structure for the layout of   */
                                    /* the data.                 @ADA*/
                                    /*                               */
        unsigned long Qdb_Qdbftrg_Stmt_Onfile_Len;
                                    /* Length of the qualified       */
                                    /* library.file name of the      */
                                    /* ON file/table name. This is   */
                                    /* not the MAX length but the    */
                                    /* actual lenght of the name.    */
                                    /* This name also takes into     */
                                    /* accout the period seperator.  */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Stmt_Onfile_Del[1];
                                    /* The ON table/file name is     */
                                    /* delimited.                    */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Stmt_Onlib_Del[1];
                                    /* The ON table-file name is     */
                                    /* delimited.                    */
                                    /* X'00' => Name not delimited.  */
                                    /* X'01' => Name is delimited.   */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Stmt_Onfile_Long[1];
                                    /* The ON table-file name is     */
                                    /* a long name.                  */
                                    /* X'00' => Name not long name.  */
                                    /* X'01' => Name is a long name. */
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Reserved30[1];
                                    /* Reserved.                 @ADA*/

        unsigned long Qdb_Qdbftrg_Stmt_Crt_Trg_Len;
                                    /* Length of the SQL CREATE      */
                                    /* TRIGGER string in variable    */
                                    /* Qdb_Qdbftrg_stmt_crt_trg  @ADA*/

        unsigned long Qdb_Qdbftrg_Stmt_When_Len;
                                    /* Length of the WHEN clause     */
                                    /* for the SQL CREATE TRIGGER    */
                                    /* string in variable            */
                                    /* Qdb_qdbftrg_stmt_crt_trg  @ADA*/

        unsigned long Qdb_Qdbftrg_Stmt_When_Off;
                                    /* Offset to the WHEN clause     */
                                    /* of the SQL CREATE TRIGGER     */
                                    /* string in variable            */
                                    /* Qdb_qdbftrg_stmt_crt_trg  @ADA*/
                                    /* This offset is relative to    */
                                    /* the beginning of variable     */
                                    /* WDBFTRG_STMT_CRT_TRG          */

        unsigned long Qdb_Qdbftrg_Stmt_Body_Len;
                                    /* Length of the BODY portion    */
                                    /* of the SQL CREATE TRIGGER     */
                                    /* string in variable            */
                                    /* Qdb_qdbftrg_stmt_crt_trg  @ADA*/

        unsigned long Qdb_Qdbftrg_Stmt_Body_Off;
                                    /* Offset to the BODY portion    */
                                    /* of the SQL CREATE TRIGGER     */
                                    /* string in variable            */
                                    /* Qdb_qdbftrg_stmt_crt_trg      */
                                    /* This offset is relative to    */
                                    /* the beginning of variable     */
                                    /* Qdb_qdbftrg_stmt_crt_trg  @ADA*/

        char Qdb_Qdbftrg_Stmt_Reserved31[56];
                                    /* Reserved.                 @ADA*/

      /*char Qdb_Qdbftrg_Stmt_Crt_Trg[];*/
                                    /* SQL CREATE TRIGGER string     */
                                    /* (varying length).         @ADA*/

    } Qdb_Qdbftrg_Stmt_Area_t;

 /********************************************************************/
 /*                                                                  */
 /* SQL TRIGGER LONG COMMENT AREA                                    */
 /*                                                                  */
 /* NOTE: The Trigger Long comment can only be added via the         */
 /*       COMMENT ON SQL statement.                                  */
 /*                                                                  */
 /********************************************************************/

    typedef _Packed struct Qdb_Qdbftrg_Long_Area {
                                    /* SQL Trigger Long Comment area.*/
                                    /*                           @ADA*/

        char Qdb_Qdbftrg_Reserved32[20];
                                    /* Reserved.                 @ADA*/

        unsigned long Qdb_Qdbftrg_Long_Tot_Len;
                                    /* Total length of the SQL       */
                                    /* Trigger long comment area     */
                                    /* substructure                  */
                                    /* Qdb_qdbftrg_long_area     @ADA*/

        unsigned long Qdb_Qdbftrg_Long_Len;
                                    /* Length of the Trigger Long    */
                                    /* comment area which is located */
                                    /* in variable                   */
                                    /* Qdb_qdbftrg_long_comment  @ADA*/

        unsigned short Qdb_Qdbftrg_Long_Ccsid;
                                    /* Text CCSID.               @ADA*/

        char Qdb_Qdbftrg_Reserved33[34];
                                    /* Reserved.                 @ADA*/

      /*char Qdb_Qdbftrg_Long_Comment[];*/
                                    /* Trigger long comment (varying */
                                    /* length).                  @ADA*/

    } Qdb_Qdbftrg_Long_Area_t;

 /********************************************************************/
 /*                                                                  */
 /* SQL Materialized Query Table Dependency Entry.                   */
 /*                                                                  */
 /* This section contains information about the files that           */
 /* are referenced in the select-statement of a SQL materialized     */
 /* query table.                                                     */
 /*                                                                  */
 /********************************************************************/
 /* This section repeats in the dependency array for the number      */
 /* of depended-on files (Qdbfmqtd_num_deps) defined in structure    */
 /* Qdb_Qdbfmqtd_Head.  The first dependency entry follows the       */
 /* dependency header Qdb_Qdbfmqtd_Head.  Use length Qdbfmqtd_len    */
 /* to get to the next dependency entry.                             */
 /********************************************************************/

   typedef _Packed struct
             Qdb_Qdbfmqtd {         /* SQL Materialized Query Table  */
                                    /* Dependency Entry.             */
        char Reserved_117[16];      /* Reserved.                     */

        unsigned long Qdbfmqt_len;  /* Length, in bytes, of this     */
                                    /* dependency entry.  Use this   */
                                    /* length to get to the next     */
                                    /* entry.                        */

        char Qdbfmqtd_file[10];     /* Name of depended-on file.     */
        char Qdbfmqtd_lib[10];      /* Name of depended-on file's    */
                                    /* library.                      */

        char Reserved_116[56];      /* Reserved.                     */


     } Qdb_Qdbfmqtd;


 /********************************************************************/
 /*                                                                  */
 /* SQL Materialized Query Table Dependency Header.                  */
 /*                                                                  */
 /* This section contains information about the files that           */
 /* are referenced in the select-statement of a SQL materialized     */
 /* query table.                                                     */
 /*                                                                  */
 /********************************************************************/
 /* This section can be located with the offset Qdbfmqtd_o, which    */
 /* is located in the SQL Area, Qdb_Qdbfv.  This structure exists    */
 /* only if the file is a SQL materialized query table.              */
 /********************************************************************/

    typedef _Packed struct
             Qdb_Qdbfmqtd_Head {    /* SQL Materialized Query Table  */
                                    /* Dependency Header.            */

        unsigned long Qdbfmqt_len_sum;
                                    /* Total length, in bytes, of    */
                                    /* the dependency area.  This    */
                                    /* includes both the dependency  */
                                    /* header and the dependency     */
                                    /* array.                        */

        unsigned long Qdbfmqt_num_deps;
                                    /* Number of file entries in the */
                                    /* dependency array.             */

        char Reserved_16[56];       /* Reserved.                     */

      /*char Qdb_Qdbfmqtd_array[];*//* Dependency array.             */

    } Qdb_Qdbfmqtd_Head;


 /********************************************************************/
 /*                                                                  */
 /* SQL Partitioned Table Header Area.                               */
 /*                                                                  */
 /* This section contains information about the files that           */
 /* are SQL Partitioned Tables.                                      */
 /*                                                                  */
 /*                                                                  */
 /********************************************************************/
 /* This section can be located with the offset Qdbfoff_sqpt         */
 /* This structure exists only if the file is a SQL Partitioned      */
 /* Table.                                                           */
 /********************************************************************/

    typedef _Packed struct
             Qdb_Qdbfsqpt_Head {    /* SQL Partitoned Table          */
                                    /* Header.                       */

        unsigned long Qdbfsqpt_Len_Sum;
                                    /* Total length, in bytes, of    */
                                    /* the partitioned table area.   */
                                    /* This includes all structures  */
                                    /* that follow.                  */

        unsigned long Qdbfsqpt_Sqloptions_Reserved4;/* Reserved.     */

        char Qdbfsqpt_Ran_Hh[1];    /* 'R' = Range Partitioning.     */
                                    /* 'H' = Hash  Partitioning.     */

        char Qdbfsqpt_Lfld[1];      /* 'Y' = Field has long name.    */
                                    /* 'N' = No long name.           */


        char Qdbfsqpt_Reserved230[230]; /* Reserved.                 */


        unsigned long Qdbfsqpt_Num_Parts;
                                    /* Number of file partitions.    */
                                    /* This is the number of         */
                                    /* Qdb_Qdbfsqpt_Part structures  */
                                    /* that follow.                  */

        unsigned long Qdbfsqpt_Part_Offset;
                                    /* The offset to the first       */
                                    /* partition.                    */
                                    /* This offset is relative to    */
                                    /* the beginning of variable     */
                                    /* Qdb_Qdbfsqpt_Head.            */

        unsigned long Qdbfsqpt_Hk_Offset;
                                    /* The offset to the partition   */
                                    /* key structure if hash         */
                                    /* partitioning is specified.    */
                                    /* This offset is relative to    */
                                    /* the beginning of variable     */
                                    /* Qdb_Qdbfsqpt_Head.            */

        unsigned long Qdbfsqpt_Sqlpath_Reserved4;/* Reserved.        */
        unsigned long Qdbfsqpt_Headnxt_Reserved4;/* Reserved.        */
        unsigned long Qdbfsqpt_Fldinfo_Reserved4;/* Reserved.        */

        char Qdbfsqpt_Reserved_88[88];/* Reserved.                   */

      /*char Qdb_Qdbfsqpt_head_hash_array[];*/
                                     /* Header Hash key array.       */
      /*char Qdb_Qdbfsqpt_part_array[];*/   /* Partition array.      */

    } Qdb_Qdbfsqpt_Head;


 /********************************************************************/
 /*                                                                  */
 /* SQL Partition Area.                                              */
 /*                                                                  */
 /* This section contains information about the partitions           */
 /* of a Partitioned Table.                                          */
 /*                                                                  */
 /********************************************************************/
 /* This section repeats for the number of partitons.                */
 /* The next partition can be addressed by the total length of the   */
 /* partition. The total length of the partition includes all        */
 /* sub-structures that can be included.                             */
 /*                                                                  */
 /********************************************************************/

   typedef _Packed struct
             Qdb_Qdbfsqpt_Part {    /* SQL Partitioned  Table        */
                                    /* Partition Structure.          */

        unsigned long Qdbfsqpt_Part_Len;
                                    /* Length, in bytes of this      */
                                    /* partition and all sub-structs.*/
                                    /* Use this length to get to the */
                                    /* next partition.               */

        unsigned long Qdbfsqpt_Part_DSN; /* The partition data       */
                                    /* space number.                 */

        unsigned long Qdbfsqpt_Part_Num; /* The partition number.    */

        unsigned long Qdbfsqpt_Pname_Len;
                                    /* Length of the partition name. */

        char Qdbfsqpt_Pname[128];   /* Name of the partition.        */

        char Qdbfsqpt_Mbr_Reserved80[80];/* Reserved.                */

        unsigned long Qdbfsqpt_Num_Keys;
                                    /* Number of range keys.         */
                                    /* If the partitioning is range, */
                                    /* this is the number of range   */
                                    /* key structures that will      */
                                    /* follow. If hash partitioning  */
                                    /* was being done, this value is */
                                    /* 0.                            */

        unsigned long Qdbfsqpt_Range_Offset;
                                    /* Offset to the first range     */
                                    /* key structure. If hash        */
                                    /* partitioning was being done,  */
                                    /* this value will be 0.         */
        char Qdbfsqpt_Reserved8[8]; /* Reserved.                     */

      /*char Qdb_Qdbfsqpt_Range_array[];*/   /* Range array.         */
     } Qdb_Qdbfsqpt_Part;


 /********************************************************************/
 /*                                                                  */
 /* SQL Range Key Area.                                              */
 /*                                                                  */
 /* This section contains information about the partitions           */
 /* range key(s).                                                    */
 /*                                                                  */
 /********************************************************************/
 /* This section repeats for the number of range keys.               */
 /* The next range key structure can be addressed by the total length*/
 /* of the range key information.                                    */
 /*                                                                  */
 /********************************************************************/

   typedef _Packed struct
             Qdb_Qdbfsqpt_Range {   /* SQL Partitioned  Table        */
                                    /* Range Key Structure.          */

        unsigned long Qdbfsqpt_Range_Len;
                                    /* Length, in bytes of this      */
                                    /* structure and all sub-structs.*/
                                    /* Use this length to get to the */
                                    /* next range key structure.     */
        char Qdbfsqpt_Reserved12[12];/* Reserved.                    */
        char Qdbfsqpt_Range_Key[10];/* Range key name.               */
                                    /*********************************/
        unsigned short Qdbfsqpt_Range_Reserved;
                                    /* Element.                      */
                                    /*********************************/
        char Qdbfsqpt_Rmin[1];      /* Range minimum value:          */
                                    /* Start value minimum:          */
                                    /* 'Y' = Yes.                    */
                                    /* 'N' = No.                     */

        char Qdbfsqpt_Rmax[1];      /* Range maximum value:          */
                                    /* End value maximum:            */
                                    /* 'Y' = Yes.                    */
                                    /* 'N' = No.                     */

        char Qdbfsqpt_Rsin[1];      /* Range start value inclusive:  */
                                    /* Start inclusive to value:     */
                                    /* 'Y' = Yes, include value.     */
                                    /* 'N' = No, do not include.     */
        char Qdbfsqpt_Rein[1];      /* Range end value inclusive:    */
                                    /* End inclusive to value:       */
                                    /* 'Y' = Yes, include value.     */
                                    /* 'N' = No, do not include.     */
        char Qdbfsqpt_reserved15[15]; /* Reserved.                   */

        char Qdbfsqpt_Rnull[1];     /* Range null option:            */
                                    /* 'Y' = Yes, include value.     */
                                    /* 'N' = No, do not include.     */
        unsigned long Qdbfsqpt_Rslen; /* Length in bytes of the      */
                                    /* starting range value string.  */

        unsigned long Qdbfsqpt_Relen; /* Length in bytes of the      */
                                    /* ending range value string.    */

        unsigned long Qdbfsqpt_Rstart_Offset;
                                    /* Offset to the                 */
                                    /* starting range value string.  */

        unsigned long Qdbfsqpt_Rend_Offset;
                                    /* Offset to the                 */
                                    /* ending range value string.    */
        char Qdbfsqpt_Reserved14[14]; /* Reserved.                   */

        unsigned short  Qdbfsqpt_Rccsid;
                                    /* Coded Character Set           */
                                    /* Identifier, CCSID, For        */
                                    /* the range start-end           */
                                    /* values string.                */

     /*char Qdb_Qdbfsqpt_Range_Start_array[];*/ /*Start value string.*/
     /*char Qdb_Qdbfsqpt_Range_End_array[];  */ /*End   value string.*/

     } Qdb_Qdbfsqpt_Range;


 /********************************************************************/
 /*                                                                  */
 /* SQL Head Hash Key Area.                                          */
 /*                                                                  */
 /* This section contains information about the partitions           */
 /* hash key(s).                                                     */
 /*                                                                  */
 /********************************************************************/
 /* The following structure provides hash key field information for  */
 /* each key that will be hashed.                                    */
 /* This structure can appear multiple times depending on the number */
 /* of key fields used for hashing.                                  */
 /*                                                                  */
 /********************************************************************/
  typedef _Packed struct
   Qdb_Qdbfsqpt_Head_Hash {
                                    /* SQL Partitioned  Table        */
                                    /* Header Hash Key Structure.    */
      unsigned long  Qdbfsqpt_Head_Hash_Len;
                                    /* Total length of the header    */
                                    /* and all entries.              */

      signed long    Qdbfsqpt_Head_Num_Keys;
                                    /* Total number of keys,         */
                                    /* or entries that follow.       */

      char Head_Reserved_56[56];    /* Reserved.                     */
   /*char Qdb_Qdbfsqpt_Hash_Array[];*/   /* Hash Partition Key Array.*/


    } Qdb_Qdbfsqpt_Head_Hash;


 /********************************************************************/
 /*                                                                  */
 /* SQL Hash Key Area.                                               */
 /*                                                                  */
 /* This section contains the hash key information about the         */
 /* partitions hash key(s).                                          */
 /*                                                                  */
 /********************************************************************/
 /* The following structure provides hash key field information for  */
 /* each key that will be hashed.                                    */
 /* This structure can appear multiple times depending on the number */
 /* of key fields used for hashing.                                  */
 /*                                                                  */
 /********************************************************************/
  typedef _Packed struct
   Qdb_Qdbfsqpt_Hash {
                                    /* SQL Partitioned  Table        */
                                    /* Hash Key Structure.           */
      char Qdbfsqpt_Hash_Key[10];   /* Hash key name.                */
      char Qdbfsqpt_Hash_Reserved_22[22]; /* Reserved.               */
    } Qdb_Qdbfsqpt_Hash;


 /********************************************************************/
 /*                                                                  */
 /* SQL Field Format Information                                     */
 /*                                                                  */
 /* This section contains the format information about each          */
 /* partition key field. The information is the same that is stored  */
 /* in the format for the file.                                      */
 /*                                                                  */
 /********************************************************************/
  typedef _Packed struct
   Qdb_Qdbfsqpt_Fldinfo {
                                    /* SQL Partitioned Field Format  */
                                    /* Information Structure.        */
     unsigned long  Qdbfsqpt_Fldinfo_Reserve4;/* Reserved.           */
     char           Qdbfsqpt_Fldinfo_Name[10];/* Field name.         */
     unsigned short Qdbfsqpt_Fldinfo_Number;  /* Field number.       */
     signed short   Qdbfsqpt_Fldinfo_Type;    /* Field type.         */
     signed short   Qdbfsqpt_Fldinfo_Boffset; /* Field buffer offset.*/
     unsigned short Qdbfsqpt_Fldinfo_Fldlen;  /* Field length, bytes.*/
     unsigned short Qdbfsqpt_Fldinfo_Flddigit;/* Field digits.       */
     signed short   Qdbfsqpt_Fldinfo_Fldpre;  /* Field precision.    */
     char           Qdbfsqpt_Fldinfo_Kbs[1];  /* Field KBS.          */
     char           Qdbfsqpt_Fldinfo_Varlen[1];/* Field varlen, Y/N. */
     char           Qdbfsqpt_Fldinfo_Null[1];  /* Field null,   Y/N. */
     char           Qdbfsqpt_Fldinfo_Rowid[1]; /* Field rowid,  Y/N. */
     char           Qdbfsqpt_Fldinfo_Ident[1]; /* Field ident,  Y/N. */
     char           Qdbfsqpt_Fldinfo_UTF816[1];/* Field UTF8/16 Y/N. */
     char           Qdbfsqpt_Fldinfo_DTFMT[1]; /* Field date format. */
     char           Qdbfsqpt_Fldinfo_DTSEP[1]; /* Field seperator.   */
     unsigned short Qdbfsqpt_Fldinfo_Ccsid;    /* Field Ccsid.       */
     unsigned short Qdbfsqpt_Fldinfo_Lfld;     /* Long field length. */
     char           Qdbfsqpt_Fldinfo_Lname[30];/* Long name.         */
     char           Qdbfsqpt_Fldinfo_Reserve76[76];/* Reserved.      */

    } Qdb_Qdbfsqpt_Fldinfo;




#if (__OS400_TGTVRM__>=510)         /*                           @AEA*/
#pragma datamodel(pop)              /*                           @AEA*/
#endif                              /*                           @AEA*/

/* #ifndef __ILEC400__ } @RKR*/
#ifndef __ILEC400__
   }
#endif


#endif

