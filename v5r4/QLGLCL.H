 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLGLCL                                     */
 /*                                                                */
 /* Descriptive Name: Standard Locale Structures.                  */
 /*                                                                */
 /* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1995,2002           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: All of the structures that are used by the        */
 /*              retrieve locale API.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List:    LG_LC_ALL     -1                               */
 /*                 LG_LC_CTYPE    1                               */
 /*                 LG_LC_COLLATE  2                               */
 /*                 LG_LC_TIME     3                               */
 /*                 LG_LC_NUMERIC  4                               */
 /*                 LC_MESSAGES    5                               */
 /*                 LG_LC_MONETARY 6                               */
 /*                 LG_LC_TOD      7                               */
 /*                                                                */
 /* Structure List: Qlg_LOCI0100_t                                 */
 /*                 Qlg_SB_CTYPE_t                                 */
 /*                 Qlg_DB_CTYPE_t                                 */
 /*                 Qlg_MB_CTYPE_t                                 */
 /*                 Qlg_QB_CTYPE_t                                 */
 /*                 Qlg_SB_COLLATE_t                               */
 /*                 Qlg_DB_COLLATE_t                               */
 /*                 Qlg_MB_COLLATE_t                               */
 /*                 Qlg_QB_COLLATE_t                               */
 /*                 Qlg_Multi_Char_t                               */
 /*                 Qlg_One_To_Many_t                              */
 /*                 Qlg_LC_TIME_t                                  */
 /*                 Qlg_LC_NUMERIC_t                               */
 /*                 Qlg_LC_MESSAGES_t                              */
 /*                 Qlg_LC_MONETARY_t                              */
 /*                 Qlg_LC_TOD_t                                   */
 /*                 Qlg_LC_ALL_t                                   */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2870900     3D60  941204 ROCH:     New Include           */
 /* $A1= PTH01812     3P70  960801 ROCH:     Add Max bytes collate */
 /* $A2= PTH01812     3P70  960801 ROCH:     Add Len 1 to many     */
 /* $C1= D99230     V5R3M0  020723 ROCH:     Add 4 byte structures */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLGLCL_h
 #define QLGLCL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 #define LG_LC_ALL     -1
 #define LG_LC_CTYPE    1
 #define LG_LC_COLLATE  2
 #define LG_LC_TIME     3
 #define LG_LC_NUMERIC  4
 #define LG_LC_MESSAGES 5
 #define LG_LC_MONETARY 6
 #define LG_LC_TOD      7

 /******************************************************************/
 /* Format structure for the LOCI0100 Format for the               */
 /* QusRetrieveLocaleInformation API.                              */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LOCI0100 {
    int  Bytes_Returned;
    int  Bytes_Available;
    int  Locale_Cat_Key;
    int  Offset_Cat_Information;
    int  Length_Cat_Information;
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_LOCI0100_t;

 /******************************************************************/
 /* Structures for the LC_CTYPE locale category.                   */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_SB_CTYPE {
    int  CCSID_of_Data;
    int  Data_Type;
    char SB_Upper_Case[256];
    char SB_Lower_Case[256];
    unsigned short SB_Char_Class[256];
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_SB_CTYPE_t;

 typedef _Packed struct Qlg_DB_CTYPE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Offset_DB_Upper_Case;
    int  Offset_DB_Lower_Case;
    int  Offset_DB_Char_Class;
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_DB_CTYPE_t;

 typedef _Packed struct Qlg_MB_CTYPE {
    int  CCSID_of_Data;
    int  Data_Type;
    char SB_Upper_Case[256];
    char SB_Lower_Case[256];
    unsigned short SB_Char_Class[256];
    int  Offset_DB_Upper_Case;
    int  Offset_DB_Lower_Case;
    int  Offset_DB_Char_Class;
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_MB_CTYPE_t;

 typedef _Packed struct Qlg_QB_CTYPE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Offset_QB_Upper_Case;
    int  Offset_QB_Lower_Case;
    int  Offset_QB_Char_Class;
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_QB_CTYPE_t;                                          /* @C1A*/

 /******************************************************************/
 /* Structures for the LC_COLLATE locale category.                 */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_SB_COLLATE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Number_Weights_Sort_Rules;
    int  Offset_Sort_Rules;
    int  Offset_SB_Collate_Table;
    int  Offset_Multi_Chars;
    int  Offset_SB_One_To_Many;
    int  Bytes_Used_In_Weights;                              /*@A1A*/
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_SB_COLLATE_t;

 typedef _Packed struct Qlg_DB_COLLATE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Number_Weights_Sort_Rules;
    int  Offset_Sort_Rules;
    int  Offset_DB_Collate_Table;
    int  Offset_Multi_Chars;
    int  Offset_DB_One_To_Many;
    int  Bytes_Used_In_Weights;                              /*@A1A*/
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_DB_COLLATE_t;

 typedef _Packed struct Qlg_MB_COLLATE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Number_Weights_Sort_Rules;
    int  Offset_Sort_Rules;
    int  Offset_SB_Collate_Table;
    int  Offset_DB_Collate_Table;
    int  Offset_Multi_Chars;
    int  Offset_SB_One_To_Many;
    int  Offset_DB_One_To_Many;
    int  Bytes_Used_In_Weights;                              /*@A1A*/
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_MB_COLLATE_t;

 typedef _Packed struct Qlg_QB_COLLATE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Number_Weights_Sort_Rules;
    int  Offset_Sort_Rules;
    int  Offset_QB_Collate_Table;
    int  Offset_Multi_Chars;
    int  Offset_QB_One_To_Many;
    int  Bytes_Used_In_Weights;
 /* char Reserved[];*/                    /* Varying length        */
 } Qlg_QB_COLLATE_t;                                        /* @C1A*/


 typedef _Packed struct Qlg_Multi_Char {
    int  Offset_Collate_Element;
    int  Length_Collate_Element;
    int  Offset_Order_Weights;
    int  Offset_Next_Element;
 } Qlg_Multi_Char_t;

 typedef _Packed struct Qlg_One_To_Many {
    int  Offset_Collate_Element;
    int  Length_Collate_Element;                            /*@A2A*/
    int  Length_Replacement_String;
    int  Number_Replacement_Strings;
    int  Offset_Replacement_String;
    int  Offset_Next_Element;
 } Qlg_One_To_Many_t;

 /******************************************************************/
 /* Structures for the LC_TIME locale category.                    */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LC_TIME {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Offset_Date_Time;
    int  Length_Date_Time;
    int  Offset_Date;
    int  Length_Date;
    int  Offset_Time;
    int  Length_Time;
    int  Offset_AM_PM;
    int  Length_AM_PM;
    int  Offset_Time_12_Hour_clock;
    int  Length_Time_12_Hour_clock;
    int  Offset_Abbrev_Weekdays;
    int  Length_Abbrev_Weekdays;
    int  Offset_Full_Weekdays;
    int  Length_Full_Weekdays;
    int  Offset_Abbrev_Months;
    int  Length_Abbrev_Months;
    int  Offset_Full_Months;
    int  Length_Full_Months;
    int  Offset_Era;
    int  Length_Era;
    int  Offset_Era_Date_Format;
    int  Length_Era_Date_Format;
    int  Offset_Era_Time_Format;
    int  Length_Era_Time_Format;
    int  Offset_Era_Date_Time_Format;
    int  Length_Era_Date_Time_Format;
    int  Offset_Alternate_Digits;
    int  Length_Alternate_Digits;
  /*char Date_Time_Data[];*/              /* Varying length        */
 } Qlg_LC_TIME_t;

 /******************************************************************/
 /* Structures for the LC_NUMERIC locale category.                 */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LC_NUMERIC {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Offset_Decimal_Delimiter;
    int  Length_Decimal_Delimiter;
    int  Offset_Thousands_Sep;
    int  Length_Thousands_Sep;
    int  Offset_Digit_Grouping;
    int  Number_Digit_Groupings;
  /*char Numeric_Formatting_Data[];*/     /* Varying length        */
 } Qlg_LC_NUMERIC_t;

 /******************************************************************/
 /* Structures for the LC_MESSAGES locale category.                */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LC_MESSAGES {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Offset_Affirmative_Exp;
    int  Length_Affirmative_Exp;
    int  Offset_Negative_Exp;
    int  Length_Negative_Exp;
    int  Offset_Affirmative_String;
    int  Length_Affirmative_String;
    int  Offset_Negative_String;
    int  Length_Negative_String;
  /*char Message_Response_Data[];*/       /* Varying length        */
 } Qlg_LC_MESSAGES_t;

 /******************************************************************/
 /* Structures for the LC_MONETARY locale category.                */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LC_MONETARY {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Inter_Fractional_Digits;
    int  Fractional_Digits;
    int  Cur_Sym_Position_Non_Neg;
    int  Cur_Sym_Position_Neg;
    int  Cur_Sym_Separator_Non_Neg;
    int  Cur_Sym_Separator_Neg;
    int  Pos_Sign_Position;
    int  Neg_Sign_Position;
    int  Offset_Inter_Cur_Symbol;
    int  Length_Inter_Cur_Symbol;
    int  Offset_Local_Cur_Symbol;
    int  Length_Local_Cur_Symbol;
    int  Offset_Decimal_Delimiter;
    int  Length_Decimal_Delimiter;
    int  Offset_Thousands_Sep;
    int  Length_Thousands_Sep;
    int  Offset_Digit_Grouping;
    int  Number_Digit_Groupings;
    int  Offset_Positive_Sign;
    int  Length_Positive_Sign;
    int  Offset_Negative_Sign;
    int  Length_Negative_Sign;
  /*char Monetary_Formatting_Data[];*/    /* Varying length        */
 } Qlg_LC_MONETARY_t;

 /******************************************************************/
 /* Structures for the LC_TOD locale category.                     */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LC_TOD {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Start_Daylight_Svgs_Time[4];
    int  End_Daylight_Svgs_Time[4];
    int  Time_Difference;
    int  Daylight_Svgs_Time_Shift;
    int  Offset_Time_Zone_Name;
    int  Length_Time_Zone_Name;
    int  Offset_Daylight_Svgs_Time_Name;
    int  Length_Daylight_Svgs_Time_Name;
  /*char Time_Zone_Data[];*/              /* Varying length        */
 } Qlg_LC_TOD_t;

 /******************************************************************/
 /* Structures for the LC_ALL locale category.                     */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LC_ALL {
    int  Offset_LC_CTYPE;
    int  Offset_LC_COLLATE;
    int  Offset_LC_TIME;
    int  Offset_LC_NUMERIC;
    int  Offset_LC_MESSAGES;
    int  Offset_LC_MONETARY;
    int  Offset_LC_TOD;
  /*char Category_Information[];*/        /* Varying length        */
 } Qlg_LC_ALL_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
