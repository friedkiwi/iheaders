 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBRRCDL                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Record Locks API                    */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Record Locks API retrieves           */
 /*              information about the jobs that are holding or    */
 /*              waiting for a specified record.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdb_RcdL0100_Hdr_t                             */
 /*               : Qdb_RcdL0100_t                                 */
 /*               : Qdb_RRcd0100_Hdr_t                             */
 /*               : Qdb_RRcd0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QDBRRCDL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97999       4D50  980701 ROCH:     New API               */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /* $A2= D98824       5D20  061501 ROCH:     Serviceability        */
 /*                                          enhancements          */
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QDBRRCDL_h
#define QDBRRCDL_h

#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(P128)                                   /*@A1A*/
#endif                                                        /*@A1A*/


/*********************************************************************/
/* Prototypes for calling Retrieve Record Lock API QDBRRCDL          */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBRRCDL,OS,nowiden)
#else
     extern "OS"
#endif

void QDBRRCDL(void *,                 /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              char *,               /* Format name                   */
              char *,               /* File and library name         */
              char *,               /* Member name                   */
              unsigned int,         /* Relative record number        */
              void *, ...);         /* Error code                @A2C*/

typedef _Packed struct Qdb_RcdL0100_Hdr {
   int Jobs_Available;
   int Jobs_Returned;
}  Qdb_RcdL0100_Hdr_t;

typedef _Packed struct Qdb_RcdL0100 {
   char Job_Name[10];
   char Job_User_Name[10];
   char Job_Number[6];
   char Lock_Status;                /* 0=Held; 1=Wait                */
   char Lock_Type;                  /* 0=Read; 1=Update              */
} Qdb_RcdL0100_t;

typedef _Packed struct Qdb_RRcd0100_Hdr {
   int Jobs_Available;
   int Jobs_Returned;
   int Job_Information_Offset;
   int Job_Information_Size;
}  Qdb_RRcd0100_Hdr_t;

typedef _Packed struct Qdb_RRcd0100 {
   char         Job_Name[10];
   char         Job_User_Name[10];
   char         Job_Number[6];
   char         Lock_Status;        /* 0=Held; 1=Wait                */
   char         Lock_Type;          /* 0=Read; 1=Update              */
   unsigned int Record_Number;
} Qdb_RRcd0100_t;

typedef _Packed struct Qdb_RRcd0100_Opt {
   char         RRcd0100_Job_Name_Opt[10];
   char         RRcd0100_Job_User_Name_Opt[10];
   char         RRcd0100_Job_Number_Opt[6];
   char         RRcd0100_Lock_Status_Opt;    /* 0=Held; 1=Wait       */
   char         RRcd0100_Lock_State_Opt;     /* 0=Read; 1=Update     */
   unsigned int RRcd0100_Record_Number_Opt;
   char         RRcd0100_Thread_id_Opt[8];
   unsigned int RRcd0100_Thread_handle_Opt;
} Qdb_RRcd0100_Opt_t;                                          /*@A2A*/

typedef _Packed struct Qdb_RRcd0200_Opt {
   char         RRcd0200_Job_Name_Opt[10];
   char         RRcd0200_Job_User_Name_Opt[10];
   char         RRcd0200_Job_Number_Opt[6];
   char         RRcd0200_Lock_Status_Opt;    /* 0=Held; 1=Wait       */
   char         RRcd0200_Lock_State_Opt;     /* 0=Read; 1=Update     */
   unsigned int RRcd0200_Record_Number_Opt;
   char         RRcd0200_Thread_id_Opt[8];
   unsigned int RRcd0200_Thread_handle_Opt;
   char         RRcd0200_Lock_Scope_Opt;
   char         RRcd0200_Holder_Type_Opt;
   char         RRcd0200_Lock_Space_ID_Opt[20];
   char         RRcd0200_Reserved_Opt[2];
} Qdb_RRcd0200_Opt_t;                                          /*@A2A*/

typedef _Packed struct Qdb_RRrc0100 {
   char         RRrc0100_File_Name[10];
   char         RRrc0100_Lib_Name[10];
} Qdb_RRrc0100_t;                                              /*@A2A*/

typedef _Packed struct Qdb_RRrc0200 {
   unsigned int RRrc0200_record_ID;
   char         RRrc0200_File_Name[10];
   char         RRrc0200_Lib_Name[10];
   char         RRrc0200_Member_Name[10];
   char         RRrc0200_Lib_ASP_name[10];
   unsigned int RRrc0200_RRN;
} Qdb_RRrc0200_t;                                              /*@A2A*/

typedef _Packed struct Qdb_RRfl0100 {
   unsigned int RRfl0100_Filter_Size;
   unsigned int RRfl0100_Filter_Lock_State;
   unsigned int RRfl0100_Filter_Lock_Scope;
   unsigned int RRfl0100_Filter_Lock_Status;
} Qdb_RRfl0100_t;                                              /*@A2A*/

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                         /*@A1A*/

#endif
