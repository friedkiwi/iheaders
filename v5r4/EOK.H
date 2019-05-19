 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EOK                                        */
 /*                                                                */
 /* Descriptive Name: Office Exit Program Common Information.      */
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
 /* Description: This format used by both the                      */
 /*              Directory Supplier Exit Programs and              */
 /*              Directory Verification Exit Programs.             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Eok_Common_0100_t                              */
 /*                 Eok_Common_0200_t                              */
 /*                 Eok_Common_0300_t                              */
 /*                 Eok_User_Defined_t                             */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940422 DWC:      New Common Include    */
 /* $A1= D95344.2     4D20  970331 NRM:      Add new SDD field for */
 /*      Allow Synchronization in the Qok_Common_0100 structure in */
 /*      the Reserved character before the UDF information.        */
 /*      This is XPF OK support for NTSI D95046.                   */
 /* $A2= D94424.1     4D30  970804 NRM:      Add new SDD field for */
 /*      DLO Owner in the Qok_Common_0100 structure at the very end*/
 /*      of the structure (after Number_UserDef_Fields).           */
 /* $A3= P9934931     5D10  001009 SKR:      Add changes to not use*/
 /*      teraspace pointers
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef EOK_h
#define EOK_h
#if (__OS400_TGTVRM__>=510)                                  /*@A3A*/
  #pragma datamodel(P128)                                    /*@A3A*/
#endif                                                       /*@A3A*/

 /******************************************************************/
 /* Format for the Common 0100 formats.                            */
 /******************************************************************/

 typedef _Packed struct Qok_Common_0100
    {
       char User_ID_Address[16];
       char System_Name_Group[16];
       char User_Profile[10];
       char Network_User_ID[47];
       char New_User_ID_Address[16];
       char Old_User_To_Forward[16];
       char Indirect_User[1];
       char Print_Person_Mail[1];
       char Reserved_01_[3];
       char Description[50];
       int  Character_Set_01;
       int  Code_Page_01;
       char Last_Name[40];
       int  Character_Set_02;
       int  Code_Page_02;
       char First_Name[20];
       int  Character_Set_03;
       int  Code_Page_03;
       char Middle_Mame[20];
       int  Character_Set_04;
       int  Code_Page_04;
       char Preferred_Name[20];
       int  Character_Set_05;
       int  Code_Page_05;
       char Reserved_02_[2];
       char Full_Name[50];
       int  Character_Set_06;
       int  Code_Page_06;
       char Reserved_03_[2];
       char Department[10];
       int  Character_Set_07;
       int  Code_Page_07;
       char Reserved_04_[2];
       char Job_Title[50];
       int  Character_Set_08;
       int  Code_Page_08;
       char Reserved_05_[2];
       char Company[50];
       int  Character_Set_09;
       int  Code_Page_09;
       char Reserved_06_[2];
       char Telephone_Num_01_[26];
       int  Character_Set_10;
       int  Code_Page_10;
       char Reserved_07_[2];
       char Telephone_Num_02_[26];
       int  Character_Set_11;
       int  Code_Page_11;
       char Location[40];
       int  Character_Set_12;
       int  Code_Page_12;
       char Building[20];
       int  Character_Set_13;
       int  Code_Page_13;
       char Office[16];
       int  Character_Set_14;
       int  Code_Page_14;
       char Mailing_Addr_01_[40];
       int  Character_Set_15;
       int  Code_Page_15;
       char Mailing_Addr_02_[40];
       int  Character_Set_16;
       int  Code_Page_16;
       char Mailing_Addr_03_[40];
       int  Character_Set_17;
       int  Code_Page_17;
       char Mailing_Addr_04_[40];
       int  Character_Set_18;
       int  Code_Page_18;
       char Reserved_08_[2];
       char Text[50];
       int  Character_Set_19;
       int  Code_Page_19;
       char Print_Cover_Page[1];
       char Mail_Notification[1];
       char X400_Country[3];
       char X400_Admin_Domain[16];
       char X400_Private_Domain[16];
       char X400_Org[64];
       char X400_Surname[40];
       char X400_Given_Name[16];
       char X400_initials[5];
       char X400_Generation_Qualifier[3];
       char X400_Org_Unit_1_[32];
       char X400_Org_Unit_2_[32];
       char X400_Org_Unit_3_[32];
       char X400_Org_Unit_4_[32];
       char X400_Domain_Attr_Type_1_[8];
       char X400_Domain_Attr_Value_1_[128];
       char X400_Domain_Attr_Type_2_[8];
       char X400_Domain_Attr_Value_2_[128];
       char X400_Domain_Attr_Type_3_[8];
       char X400_Domain_Attr_Value_3_[128];
       char X400_Domain_Attr_Type_4_[8];
       char X400_Domain_Attr_Value_4_[128];
       char Reserved_9_[3];
       char Fax_Telephone_Number[32];
       int  Character_Set_20;
       int  Code_Page_20;
       char Mail_Service_Lvl[17];
       char Preferred_Address[29];
       char CC_Address[255];
       char CC_Comment[126];
       char Allow_Synchronization[1];
       int  Offset_UserDef_Fields;
       int  Number_UserDef_Fields;
       char DLO_Owner[10];
    } Qok_Common_0100_t;

 /******************************************************************/
 /* Format for the User Defined Fields.                            */
 /******************************************************************/

 typedef _Packed struct Qok_User_Defined
    {
       int  Disp_Next_Element;
       char Field_Name[10];
       char Product_ID[7];
       char Reserved_01[3];
       int  Character_Set;
       int  Code_Page;
       int  Length_Field_Returned;
     /*char Field_Value[];*/     /* Varying length                 */
    } Qok_User_Defined_t;

 /******************************************************************/
 /* Format for the Common 0200 formats.                            */
 /******************************************************************/

 typedef _Packed struct Qok_Common_0200
    {
       char Reserved_01_[2];
       char Department[10];
       int  Character_Set_01;
       int  Code_Page_01;
       char Reserved_02_[2];
       char Title[50];
       int  Character_Set_02;
       int  Code_Page_02;
       char Reserved_03_[2];
       char Reports_To_Dept[10];
       int  Character_Set_03;
       int  Code_Page_03;
       char Manager_User_ID_Addr[16];
       char Reserved_04_[2];
       char Old_Dept[10];
       int  Character_Set_04;
       int  Code_Page_04;
    } Qok_Common_0200_t;

 /******************************************************************/
 /* Format for the Common 0300 formats.                            */
 /******************************************************************/

 typedef _Packed struct Qok_Common_0300
    {
       char Location[40];
       int  Character_Set_01;
       int  Code_Page_01;
       char Reserved_01_[2];
       char Location_Line_1_[30];
       int  Character_Set_02;
       int  Code_Page_02;
       char Reserved_02_[2];
       char Location_Line_2_[30];
       int  Character_Set_03;
       int  Code_Page_03;
       char Reserved_03_[2];
       char Location_Line_3_[30];
       int  Character_Set_04;
       int  Code_Page_04;
       char Reserved_04_[2];
       char Location_Line_4_[30];
       int  Character_Set_05;
       int  Code_Page_05;
       char Reserved_05_[2];
       char Location_Line_5_[30];
       int  Character_Set_06;
       int  Code_Page_06;
       char Reserved_06_[2];
       char Location_Line_6_[30];
       int  Character_Set_07;
       int  Code_Page_07;
       char Location_Changed_To[40];
       int  Character_Set_08;
       int  Code_Page_08;
       char Old_Location[40];
       int  Character_Set_09;
       int  Code_Page_09;
    } Qok_Common_0300_t;

#if (__OS400_TGTVRM__>=510)                                 /*@A3A*/
  #pragma datamodel(pop)                                    /*@A3A*/
#endif                                                      /*@A3A*/

#endif

