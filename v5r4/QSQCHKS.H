 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSQCHKS                                    */
 /*                                                                */
 /* Descriptive Name: Syntax Check DB2/400 SQL statement API.      */
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
 /* Description: Syntax checks a DB2/400 SQL statement.  Returns   */
 /*              information for SQL statements found within a     */
 /*              block of records.  Syntax errors are returned.    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsq_Options_t                                  */
 /*                 Qsq_Vlen_Option_t                              */
 /*                 Qsq_Statement_Info_t                           */
 /*                 Qsq_Statement_I_t                              */
 /*                                                                */
 /* Function Prototype List: QSQCHKS                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D31502       3D10  940513 KLPASSE:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSQCHKS_h
 #define QSQCHKS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Syntax Check API QSQCHKS                 */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QSQCHKS,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QSQCHKS (void *,           /* Source records                 */
               int,              /* Record length of source        */
               int,              /* Number of records in source    */
               char *,           /* Language                       */
               void *,           /* Options                        */
               void *,           /* Statement information          */
               int,              /* Length of statement information*/
               int,              /* Number of records processed    */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the Qsq_Options.                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qsq_Options
    {
       int  Number_Of_Keys;
     /*char Options[];*/         /* Varying length                 */
    } Qsq_Options_t;


 /******************************************************************/
 /* Type Definition for the Qsq_Vlen_Option.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qsq_Vlen_Option
    {
       int  Key;
       int  Length_Vlen_Option;
     /*char Data[];*/            /* Varying length                 */
    } Qsq_Vlen_Option;


 /******************************************************************/
 /* Type Definition for the Qsq_Statement_I.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qsq_Statement_I
    {
       int  Length_Statement_Info;
       int  Record_Statement_Begin;
       int  Column_Statement_Begin;
       int  Record_Statement_End;
       int  Column_Statement_End;
       int  Record_Statement_Error;
       int  Column_Statement_Error;
       char Message_Id[7];
       char Sqlstate[5];
       int  Length_Message_Data;
     /*char Message_Data[];*/    /* Varying length                 */
    } Qsq_Statement_I_t;

 /******************************************************************/
 /* Type Definition for the Qsq_Statement_Info.                    */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qsq_Statement_Info
    {
       char Message_File_Name[10];
       char Message_File_Library_Name[10];
       int  Number_of_Statements_Processed;
     /*Qsq_Statement_I_t Statement[];*/       /* Varying length    */
    } Qsq_Statement_Info_t;


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
