 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBLDBR                                    */
 /*                                                                */
 /* Descriptive Name: List Database Relations API.                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Database Releations API gives relational */
 /*              information about database files.                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdb_Ldbr_Input_Parms_t                         */
 /*                 Qdb_Dbrl0100_t                                 */
 /*                 Qdb_Dbrl0200_t                                 */
 /*                 Qdb_Dbrl0300_t                                 */
 /*                                                                */
 /* Function Prototype List: QDBLDBR                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940102 ROCH:     New Include           */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QDBLDBR_h
#define QDBLDBR_h

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(P128)                                    /*@A1A*/
#endif                                                         /*@A1A*/

/*********************************************************************/
/* Prototypes for calling Retrieve Member Description API QDBLDBR    */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBLDBR,OS,nowiden)
#else
     extern "OS"
#endif

void QDBLDBR(void *,               /* Qualified user space name     */
             char *,               /* Format name                   */
             void *,               /* File and library name         */
             char *,               /* Member name                   */
             char *,               /* Record format name            */
             void *);              /* Error code                    */


/*******************************************************************/
/* Input structure for QDBLDBR API header section                  */
/*******************************************************************/

typedef _Packed struct Qdb_Ldbr_Input_Parms {
                 char Usr_Space_Name[10];
                 char Usr_Space_Library_Name[10];
                 char Format_Name[8];
                 char File_Name_Specified[20];
                 char File_Name_Library_Specified[20];
                 char File_Member_Name_Specified[10];
                 char File_Record_Format_Name_Specified[10];
               } Qdb_Ldbr_Input_Parms_t;

/*******************************************************************/
/* Record structure for QDBLDBR DBRL0100 format                    */
/*******************************************************************/
typedef _Packed struct Qdb_Dbrl0100 {
                 char File_Name[10];
                 char Library_Name[10];
                 char Dependent_File_Name[10];
                 char Dependent_File_Library_Name[10];
                 char Dependency_Type[1];
                 char Reserved[3];
                 long Join_Reference_Number;
                 char Constraint_Library_Name[10];
                 long Constraint_Name_Length;
                 char Constraint_Name[258];
               } Qdb_Dbrl0100_t;

/*******************************************************************/
/* Record structure for QDBLDBR DBRL0200 format                    */
/*******************************************************************/
typedef _Packed struct Qdb_Dbrl0200 {
                 char File_Name[10];
                 char Library_Name[10];
                 char Member_Name[10];
                 char Dependent_File_Name[10];
                 char Dependent_File_Library_Name[10];
                 char Dependent_File_Member_Name[10];
                 char Dependency_Type[1];
                 char Reserved[3];
                 long Join_Reference_Number;
                 long Join_Filenumber;
                 char Constraint_Library_Name[10];
                 long Constraint_Name_Length;
                 char Constraint_Name[258];
              } Qdb_Dbrl0200_t;

/*******************************************************************/
/* Record structure for QDBLDBR DBRL0300 format                    */
/*******************************************************************/
typedef _Packed struct Qdb_Dbrl0300 {
                 char File_Name[10];
                 char Library_Name[10];
                 char Record_Format_Name[10];
                 char Dependent_File_Name[10];
                 char Dependent_File_Library_Name[10];
               } Qdb_Dbrl0300_t;


#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(pop)                                    /*@A1A*/
#endif                                                        /*@A1A*/

#endif
