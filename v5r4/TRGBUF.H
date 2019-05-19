 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: TRGBUF                                       */
 /*                                                                */
 /* Descriptive Name: Trigger Buffer Exit Program.                 */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The input trigger buffer structure for the user's */
 /*              trigger program.                                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdb_Trigger_Buffer_t                           */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= D9496000     4D10  961205 ROCH:     Add RRN Support       */
 /* $A2= D9772500     4D50  990323 ROCH:     Double RRN capacity   */
 /* $A3=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDBTRGB_h
 #define QDBTRGB_h

 #if (__OS400_TGTVRM__>=510)                              /*@A3A*/
     #pragma datamodel(P128)                              /*@A3A*/
 #endif                                                   /*@A3A*/

/****************************************************************/
/* Format for the Trigger Buffer                                */
/****************************************************************/
/*   Note: The following type definition only defines the fixed */
/*         portion of the format. The data area of the original */
/*         record, null byte map of the original record, the    */
/*         new record, and the null byte map of the new record  */
/*         is varying length and immediately follows what is    */
/*         defined here.                                        */
/****************************************************************/
 typedef _Packed struct Qdb_Trigger_Buffer {
           char  File_Name[10];
           char  Library_Name[10];
           char  Member_Name[10];
           char  Trigger_Event[1];
           char  Trigger_Time[1];
           char  Commit_Lock_Level[1];
           char  Reserved_1[3];
           int   Data_Area_Ccsid;
           unsigned long  Current_Rrn;
           char  Reserved_2[4];
           int   Old_Record_Offset;
           int   Old_Record_Len;
           int   Old_Record_Null_Byte_Map;
           int   Old_Record_Null_Byte_Map_Len;
           int   New_Record_Offset;
           int   New_Record_Len;
           int   New_Record_Null_Byte_Map;
           int   New_Record_Null_Byte_Map_Len;
                 } Qdb_Trigger_Buffer_t;

  #if (__OS400_TGTVRM__>=510)                           /*@A3A*/
      #pragma datamodel(pop)                            /*@A3A*/
  #endif                                                /*@A3A*/


 #endif
