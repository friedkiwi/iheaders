 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTERTVPV                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Program Variable API                */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Contains the prototype and structures for the     */
 /*              QTERTVPV API.                                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qte_Rtvpv                                     */
 /*                                                                */
 /* Function Prototype List: Qte_Rtvpv_Generic_Data_Rtvd_t         */
 /*                          Qte_Rtvpv_Varying_Char_t              */
 /*                          Qte_Rtvpv_Space_Pointer_t             */
 /*                          Qte_Rtvpv_Data_Pointer_t              */
 /*                          Qte_Rtvpv_Instruc_Def_List_t          */
 /*                          Qte_Rtvpv_System_Pointer_t            */
 /*                          Qte_Rtvpv_Machine_Space_Pointer_t     */
 /*                          Qte_Rtvpv_Exception_Desc_t            */
 /*                          Qte_Rtvpv_Sub_Bnds_t                  */
 /*                          Qte_Rtvpv_Receiver_Variable_t         */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3952338     3D10  940508 ROCH:     New Include           */
 /* $A1= D98212.3    v5r1m0 010400 ROCH    : Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTERTVPV_h
 #define QTERTVPV_h
#if (__OS400_TGTVRM__>=510)                                 /* @A1A*/
#pragma datamodel(P128)                                     /* @A1A*/
#endif                                                      /* @A1A*/

 /******************************************************************/
 /*  Prototype for QTERTVPV API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTERTVPV,OS,NOWIDEN)
 #else
       extern "OS"
 #endif
 void QTERTVPV(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               void *,           /* Program variable               */
               void *,           /* Basing pointer                 */
               int,              /* Starting position              */
               int,              /* Length of string               */
               char *,           /* Output format                  */
               char *,           /* Program                        */
               int,              /* Recursion level                */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the formats for Data Retrieved.            */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qte_Rtvpv_Generic_Data_Rtvd
    {
       char Message_ID[7];
       char Reserved;
     /*char Variable_Value[]; */
    } Qte_Rtvpv_Generic_Data_Rtvd_t;

 typedef _Packed struct Qte_Rtvpv_Varying_Char
    {
       char Message_ID[7];
       char Reserved;
       int  Varying_Char_Length;
     /*char Variable_Value[]; */
    } Qte_Rtvpv_Varying_Char_t;

 typedef _Packed struct Qte_Rtvpv_Space_Pointer
    {
       char Message_ID[7];
       char Reserved;
       char Hex_Offset[8];
       char Reserved2[8];
       char Object[30];
       char Library_Name[10];
       char Object_Type[8];
    } Qte_Rtvpv_Space_Pointer_t;

 typedef _Packed struct Qte_Rtvpv_Data_Pointer
    {
       char Message_ID[7];
       char Reserved;
       char Hex_Offset[8];
       char Reserved2[8];
       char Object[30];
       char Library_Name[10];
       char Object_Type[8];
       int  Data_Type;
       int  Data_Length;
       int  Data_Precision;
       int  Data_Str_Length;
       int  Element_Length;
     /*char Data[]; */
    } Qte_Rtvpv_Data_Pointer_t;

 typedef _Packed struct Qte_Rtvpv_Instruc_Def_List
    {
       char Message_ID[7];
       char Reserved;
       char Instruction_Number[8];
       char Reserved2[8];
       char Object[30];
       char Library_Name[10];
       char Object_Type[8];
    } Qte_Rtvpv_Instruc_Def_List_t;

 typedef _Packed struct Qte_Rtvpv_System_Pointer
    {
       char Message_ID[7];
       char Reserved;
       char Authorization[16];
       char Object[30];
       char Library_Name[10];
       char Object_Type[8];
    } Qte_Rtvpv_System_Pointer_t;

 typedef _Packed struct Qte_Rtvpv_Machine_Space_Pointer
    {
       char Message_ID[7];
       char Reserved;
       char Hex_Offset[8];
       char Reserved2[8];
       char Object[30];
       char Library_Name[10];
       char Object_Type[8];
    } Qte_Rtvpv_Machine_Space_Pointer_t;

 typedef _Packed struct Qte_Rtvpv_Exception_Desc
    {
       char Message_ID[7];
       char Reserved;
       char Control;
       char Handler_Type;
       char Instruc_Number[8];
       char Program_Name[10];
       char Library_Name[10];
       char Reserved2[2];
       int  Compare_Str_Length;
       char Compare_Str[28];
       char Job_Log;
       char Message_Type[3];
       int  Number_Msg_IDs;
     /*char Messages[][7]; */
    } Qte_Rtvpv_Exception_Desc_t;

 /******************************************************************/
 /* Type Definition for the Format of the Receiver Variable.       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qte_Rtvpv_Sub_Bnds
    {
       int  Lower_Bound;
       int  Upper_Bound;
    } Qte_Rtvpv_Sub_Bnds_t;

 typedef _Packed struct Qte_Rtvpv_Receiver_Variable
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Variable_Type;
       int  Data_Error;
       char Pointer[16];
       int  Bit_Position;
       int  Variable_Length;
       int  Variable_Precision;
       int  Number_Array_Dimensions;
       int  Number_Array_Elements;
       Qte_Rtvpv_Sub_Bnds_t Subscript_Bounds[15];
       int  Element_Length;
       int  Character_Str_Length;
       char Reserved[64];
     /*char Data_Retrieved[][7]; */
    } Qte_Rtvpv_Receiver_Variable_t;

#if (__OS400_TGTVRM__>=510)                                /* @A1A*/
#pragma datamodel(pop)                                     /* @A1A*/
#endif                                                     /* @A1A*/

 #endif
