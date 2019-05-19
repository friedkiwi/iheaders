 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsyvldl.h                                    */
 /*                                                                */
 /* Descriptive Name: Validation List processing                   */
 /*                                                                */
 /* 5769-SS1, 5722-SS1(C) Copyright IBM Corp. 1997, 2000.          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This include is a CUE.                       */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers,  */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Description: The Validation List processing include provides   */
 /*              the definitions for working with the validation   */
 /*              list objects.                                     */
 /*                                                                */
 /* Header Files Included: sys/types.h                             */
 /*                        qsy.h                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Entry_ID_Info_T                            */
 /*                 Qsy_Encr_Data_Info_T                           */
 /*                 Qsy_Entry_Data_Info_T                          */
 /*                 Qsy_Rtn_Vld_Lst_Ent_T                          */
 /*                 Qsy_Attr_Info_T                                */
 /*                 Qsy_Attr_Descr_T                               */
 /*                 Qsy_In_VLDL_T                                  */
 /*                 Qsy_Rtn_VLDL_Attr_T                            */
 /*                 Qsy_Rtn_Entry_Usage_Attr_T                     */
 /*                                                                */
 /* Function Prototype List: QsyAddValidationLstEntry              */
 /*                          QsyChangeValidationLstEntry           */
 /*                          QsyRemoveValidationLstEntry           */
 /*                          QsyVerifyValidationLstEntry           */
 /*                          QsyFindFirstValidationLstEntry        */
 /*                          QsyFindNextValidationLstEntry         */
 /*                          QsyFindValidationLstEntry             */
 /*                          QsyFindValidationLstEntryAttrs        */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS DATE   PGMR  COMMENTS                    */
 /*    ---- -------- ---- ------ ----  --------------------------- */
 /*    $A0= D9512700 4D10 970108 ROCH: New.                        */
 /*    $01= P3639553 4D10 970211 ROCH: Fix Qsy_Rtn_Vld_Lst_Ent_T   */
 /*    $02= D9502400 4D20 980521 ROCH: Add attribute support.      */
 /*    $03= D9817000 4D10 991205 ROCH: Add Qsy_Rtn_Entry_Usage_Attr*/
 /*                                    _T.                         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QSYVLDL_H
 #define _QSYVLDL_H


 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <sys/types.h>
 #include <qsy.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Defined constants                                                */
 /********************************************************************/
 #define QSY_MAX_ENTRY_ID_LEN       100
 #define QSY_MAX_ENCR_LEN           600
 #define QSY_MAX_DATA_LEN          1000

 /********************************************************************/
 /* Data type definitions                                            */
 /********************************************************************/
 typedef struct Qsy_Entry_ID_Info
 {
   int            Entry_ID_Len;              /* Length of entry ID.  */
   unsigned int   Entry_ID_CCSID;            /* CCSID of entry ID.   */
   unsigned char  Entry_ID[QSY_MAX_ENTRY_ID_LEN]; /* Entry ID value. */
 } Qsy_Entry_ID_Info_T;

 typedef struct Qsy_Entry_Encr_Data_Info
 {
   int            Encr_Data_Len;             /* Length of data field.*/
   unsigned int   Encr_Data_CCSID;           /* CCSID of encryption  */
                                             /*   data.              */
   unsigned char  Encr_Data[QSY_MAX_ENCR_LEN];    /* Data value.     */
 } Qsy_Entry_Encr_Data_Info_T;

 typedef struct Qsy_Entry_Data_Info
 {
   int            Entry_Data_Len;            /* Length of data field.*/
   unsigned int   Entry_Data_CCSID;          /* CCSID of entry data. */
   unsigned char  Entry_Data[QSY_MAX_DATA_LEN];   /* Data value.     */
 } Qsy_Entry_Data_Info_T;

 typedef struct Qsy_Rtn_Vld_Lst_Ent
 {
   Qsy_Entry_ID_Info_T      Entry_ID_Info;   /* Entry ID information.*/
   Qsy_Entry_Encr_Data_Info_T Encr_Data_Info;/* Encryption data info.*/
   Qsy_Entry_Data_Info_T    Entry_Data_Info; /* Entry data info.     */
   char                     Reserved[4];     /* Reserved - alignment */
   void                    *Entry_More_Info; /* Pointer to more entry*/
                                             /* info - NULL for now. */
 } Qsy_Rtn_Vld_Lst_Ent_T;

 /********************************************************************/
 /* Data type definitions for validation list attributes             */
 /********************************************************************/
 typedef _Packed struct Qsy_In_VLDL
 {
   int                    Attr_CCSID;
   int                    Attr_Len;
   union {
     unsigned char        Res_1[8];
   } Attr_Res;
   void                  *Attr_Value;
 } Qsy_In_VLDL_T;

 typedef _Packed struct Qsy_Attr_Descr
 {
   int                    Attr_Location;
   int                    Attr_Type;
   union {
     unsigned char        Res_1[8];
   } Attr_Res;
   char                  *Attr_ID;
   union {
     char                 Res_1[32];
   } Attr_Other_Descr;
   union {
     Qsy_In_VLDL_T        Attr_VLDL;
     union {
       char               Res_1[96];
     } Attr_In_Other;
   } Attr_Data_Info;
   union {
     char                 Res_1[32];
   } Attr_Other_Data;
 } Qsy_Attr_Descr_T;

 typedef _Packed struct Qsy_Attr_Info
 {
   int                     Number_Attrs;
   char                    Res_Align[12];  /* for alignment only */
  /*Qsy_Attr_Descr_T       Attr_Desc[];*/  /* varying length.  */
 } Qsy_Attr_Info_T;

 typedef struct Qsy_Rtn_VLDL_Attr_T
 {
   int                    Bytes_Returned;
   int                    Bytes_Available;
   int                    Attr_Len;
   int                    Attr_CCSID;
 /*unsigned char          Attr_Data[]; */ /* varying length  */
 } Qsy_Rtn_VLDL_Attr_T;

 typedef struct Qsy_Rtn_Entry_Usage_Attr_T
 {
   char                   Create_Date[8];
   char                   Last_Used_Date[8];
   char                   Encr_Data_Chg_Date[8];
   int                    Not_Valid_Verify_Count;
 } Qsy_Rtn_Entry_Usage_Attr_T;

 /********************************************************************/
 /* Prototype definitions                                            */
 /********************************************************************/
 QBFC_EXTERN int QsyAddValidationLstEntry(
                    Qsy_Qual_Name_T             *Validation_Lst,
                    Qsy_Entry_ID_Info_T         *Entry_ID,
                    Qsy_Entry_Encr_Data_Info_T  *Encrypt_Data,
                    Qsy_Entry_Data_Info_T       *Entry_Data,
                    void                        *Attribute_Info);

 QBFC_EXTERN int QsyChangeValidationLstEntry(
                    Qsy_Qual_Name_T             *Validation_Lst,
                    Qsy_Entry_ID_Info_T         *Entry_ID,
                    Qsy_Entry_Encr_Data_Info_T  *Encrypt_Data,
                    Qsy_Entry_Data_Info_T       *Entry_Data,
                    void                        *Attribute_Info);

 QBFC_EXTERN int QsyRemoveValidationLstEntry(
                    Qsy_Qual_Name_T      *Validation_Lst,
                    Qsy_Entry_ID_Info_T  *Entry_ID);

 QBFC_EXTERN int QsyVerifyValidationLstEntry(
                    Qsy_Qual_Name_T             *Validation_Lst,
                    Qsy_Entry_ID_Info_T         *Entry_ID,
                    Qsy_Entry_Encr_Data_Info_T  *Encrypt_Data);

 QBFC_EXTERN int QsyFindFirstValidationLstEntry(
                    Qsy_Qual_Name_T        *Validation_Lst,
                    Qsy_Rtn_Vld_Lst_Ent_T  *First_Entry);

 QBFC_EXTERN int QsyFindNextValidationLstEntry(
                    Qsy_Qual_Name_T        *Validation_Lst,
                    Qsy_Entry_ID_Info_T    *Entry_ID,
                    Qsy_Rtn_Vld_Lst_Ent_T  *Next_Entry);

 QBFC_EXTERN int QsyFindValidationLstEntry(
                    Qsy_Qual_Name_T        *Validation_Lst,
                    Qsy_Entry_ID_Info_T    *Entry_ID,
                    Qsy_Rtn_Vld_Lst_Ent_T  *Entry);

 QBFC_EXTERN int QsyFindValidationLstEntryAttrs(
                    Qsy_Qual_Name_T        *Validation_Lst,
                    Qsy_Entry_ID_Info_T    *Entry_ID,
                    Qsy_Rtn_Vld_Lst_Ent_T  *Rtn_Entry,
                    Qsy_Attr_Info_T        *Rtn_Attributes);

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif /* _QSYVLDL_H */
