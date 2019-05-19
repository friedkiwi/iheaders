 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBRJBRL                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Record Locks API                */
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
 /* Description: The Retrieve Job Record Locks API retrieves       */
 /*              information about the record locks that a job is  */
 /*              holding or waiting for and returns the            */
 /*              information to the calling program in a receiver  */
 /*              variable.                                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdb_JobL0100_Hdr_t                             */
 /*               : Qdb_JobL0100_t                                 */
 /*               : Qdb_Rjbl0100_Hdr_t                             */
 /*               : Qdb_Rjbl0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QDBRJBRL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97999       4d50  990614 ROCH:     Documented interface  */
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

#ifndef QDBRJBRL_h
#define QDBRJBRL_h

#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(P128)                                   /*@A1A*/
#endif                                                        /*@A1A*/

/*********************************************************************/
/* Prototypes for calling Retrieve Job Record Lock API QDBRJBRL      */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBRJBRL,OS,nowiden)
#else
     extern "OS"
#endif

void QDBRJBRL(void *,                 /* Receiver Variable             */
               long,                /* Receiver Variable Length      */
               char *,              /* Format name                   */
               char *,              /* Qualified Job name            */
               void *, ...);        /* Error code                @A2C*/

typedef _Packed struct Qdb_JobL0100_Hdr {
   int Locks_Available;
   int Locks_Returned;
}  Qdb_JobL0100_Hdr_t;

typedef _Packed struct Qdb_JobL0100 {
   char         Db_File_Name[10];
   char         Db_File_Lib[10];
   char         Member_Name[10];
   unsigned int Row_Number;
   char         Lock_Status;        /* 0=Held; 1=Waiting             */
} Qdb_JobL0100_t;

typedef _Packed struct Qdb_Rjbl0100_Hdr {
   int Locks_Available;
   int Locks_Returned;
   int Lock_Information_Offset;
   int Lock_Information_Size;
}  Qdb_Rjbl0100_Hdr_t;

typedef _Packed struct Qdb_Rjbl0100 {
   char         Db_File_Name[10];
   char         Db_File_Lib[10];
   char         Member_Name[10];
   char         Lock_Status;        /* 0=Held; 1=Waiting             */
   char         Reserved;
   unsigned int Row_Number;
} Qdb_Rjbl0100_t;

typedef _Packed struct Qdb_Rjbl0100_Opt {
   char         Db_File_Name_Opt[10];
   char         Db_File_Lib_Opt[10];
   char         Member_Name_Opt[10];
   char         Lock_Status_Opt;      /* 0=Held; 1=Waiting             */
   char         Lock_State_Opt;
   unsigned int Row_Number_Opt;
   char         Db_File_ASP_Name[10];
   char         Db_File_Lib_ASP_Opt[10];
   unsigned int Db_File_ASP_Number;
   unsigned int Db_File_Lib_ASP_Number;
   char         Thread_ID_Opt[8];
   unsigned int Thread_Handle_Opt;
   char         Lock_Space_ID_Opt[20];
   char         Lock_Scope_Opt;
   char         Reserved_Opt[3];
} Qdb_Rjbl0100_Opt_t;                                          /*@A2A*/

typedef _Packed struct Qdb_Jidf0100 {
   char         Jidf0100_Job_Name[10];
   char         Jidf0100_User_Name[10];
   char         Jidf0100_Job_number[6];
   char         Jidf0100_Internal_Job_ID[16];
   char         Jidf0100_Reserved[2];
   unsigned int Jidf0100_Thread_Indicator;
   char         Jidf0100_thread_ID[8];
} Qdb_Jidf0100_t;                                              /*@A2A*/

typedef _Packed struct Qdb_Jidf0200 {
   char         Jidf0200_Job_Name[10];
   char         Jidf0200_User_Name[10];
   char         Jidf0200_Job_number[6];
   char         Jidf0200_Internal_Job_ID[16];
   char         Jidf0200_Reserved[2];
   unsigned int Jidf0200_Thread_Handle;
   char         Jidf0200_thread_ID[8];
} Qdb_Jidf0200_t;                                              /*@A2A*/

typedef _Packed struct Qdb_Rjfl0100 {
   unsigned int Rjfl0100_Filter_Size;
   unsigned int Rjfl0100_Filter_Lock_State;
   unsigned int Rjfl0100_Filter_Lock_Scope;
   unsigned int Rjfl0100_Filter_Lock_Status;
   char         Rjfl0100_Filter_File[10];
   char         Rjfl0100_Filter_File_member[10];
   char         Rjfl0100_Filter_File_lib[10];
   char         Rjfl0100_Filter_File_lib_ASP[10];
} Qdb_Rjfl0100_t;                                              /*@A2A*/

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                         /*@A1A*/

#endif
