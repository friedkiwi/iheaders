 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSGEN                                     */
 /*                                                                */
 /* Descriptive Name: Format structures for User Space.            */
 /*                                                                */
 /* 5763-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994, 2001.         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Contains the Generic Record format headers        */
 /*              for the user space.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_Generic_Header_0100_t                      */
 /*                 Qus_Generic_Header_0300_t                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSGEN_h
 #define QUSGEN_h
 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Type Definition for the User Space Generic Header.             */
 /******************************************************************/
 typedef _Packed struct Qus_Generic_Header_0100
    {
       char User_Area[64];
       int  Size_Generic_Header;
       char Structure_Release_Level[4];
       char Format_Name[8];
       char Api_Used[10];
       char Date_Time_Created[13];
       char Information_Status;
       int  Size_User_Space;
       int  Offset_Input_Parameter;
       int  Size_Input_Parameter;
       int  Offset_Header_Section;
       int  Size_Header_Section;
       int  Offset_List_Data;
       int  Size_List_Data;
       int  Number_List_Entries;
       int  Size_Each_Entry;
       int  CCSID_List_Ent;
       char Country_ID[2];
       char Language_ID[3];
       char Subset_List_Indicator;
       char Reserved[42];
    } Qus_Generic_Header_0100_t;

 /******************************************************************/
 /* Type Definition for the User Space Generic Header, 300 format. */
 /******************************************************************/

 typedef _Packed struct Qus_Generic_Header_0300
    {
       char User_Area[64];
       int  Size_Generic_Header;
       char Structure_Release_Level[4];
       char Format_Name[8];
       char Api_Used[10];
       char Date_Time_Created[13];
       char Information_Status;
       int  Size_User_Space;
       int  Offset_Input_Parameter;
       int  Size_Input_Parameter;
       int  Offset_Header_Section;
       int  Size_Header_Section;
       int  Offset_List_Data;
       int  Size_List_Data;
       int  Number_List_Entries;
       int  Size_Each_Entry;
       int  CCSID_List_Ent;
       char Country_ID[2];
       char Language_ID[3];
       char Subset_List_Indicator;
       char Reserved_1[42];
       char Entry_Point_Name[256];
       char Reserved_2[128];
    } Qus_Generic_Header_0300_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
