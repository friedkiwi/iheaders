/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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
/* Header File Name: EDBOPNDB                                     */
/*                                                                */
/* Descriptive Name: Open Database Exit Program                   */
/*                                                                */
/*  5722-SS1  (C) Copyright IBM Corp. 2003                        */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Open Database File exit program provides      */
/*              the Exit Program with a list of files referenced  */
/*              in the open and their open options.               */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: QDBE_Opn_DB_File_Array_Entry_t                 */
/*                 QDBE_Open_DBOP0100_t                           */
/*                                                                */
/* Function Prototype List: None.                                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D94085.6     5D30  030931 KEBAKER:  New Include           */
/* $A1= P9A47712 v5r3m0.xpf 031121 Aldrich: Add current user name */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EDBOPNDB_h
 #define EDBOPNDB_h

 #if (__OS400_TGTVRM__>=530)
     #pragma datamodel(P128)
 #endif

/******************************************************************/
/* Type Definitions for the Open Database File exit point         */
/* information.                                                   */
/******************************************************************/

typedef _Packed struct QDBE_Opn_DB_File_Array_Entry
   {
      char QDBE_File_Name[10];
      char QDBE_Library_Name[10];
      char QDBE_Member_Name[10];
      char QDBE_Reserved[2];
      int  QDBE_DB_File_Type;
      int  QDBE_Underlying_Physical;
      char QDBE_Open_Input_Opt[1];
      char QDBE_Open_Output_Opt[1];
      char QDBE_Open_Update_Opt[1];
      char QDBE_Open_Delete_Opt[1];
    /*char Reserved[];*/                        /* Varying Length */

   } QDBE_Opn_DB_File_Array_Entry_t;

typedef _Packed struct QDBE_Open_DBOP0100
   {
      int QDBE_Header_Size;
      char QDBE_Format_Name[8];
      int QDBE_Offset_to_File_Array;
      int QDBE_File_Count;
      int QDBE_Length_File_Array_Entry;
      char QDBE_Job_Name[10];
      char QDBE_User_Name[10];
      char QDBE_Job_Number[6];
      char QDBE_Current_User_Name[10]; /* Current user profile
                                          opening the file      @A1A*/
    /*QDBE_Opn_DB_File_Array_Entry_t File_Info[];*//* Varying Length */

   } QDBE_Open_DBOP0100_t;



#if (__OS400_TGTVRM__>=530)
     #pragma datamodel(pop)
#endif
#endif

