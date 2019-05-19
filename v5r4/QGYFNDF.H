 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYFNDF                                    */
 /*                                                                */
 /* Descriptive Name: Find Field Numbers in List                   */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1996,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYFNDF API returns the number of the entries */
 /*              in a list of information and the value of that    */
 /*              entry whenever the value of that field changes.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_Fndf_Field_Info_t                          */
 /*                 Qgy_Fndf_FieldSpec_0100_t                      */
 /*                 Qgy_Fndf_RecdInfo_0100_t                       */
 /*                 Qgy_Fndf_RecdInfo_0200_t                       */
 /*                 Qgy_Fndf_RecVar_0100_t                         */
 /*                 Qgy_Fndf_RecVar_0200_t                         */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QGYFNDF                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960531 DPW       New Include           */
 /* $A1= D98212.5    v5r1m0 010300 gchaney:  Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYFNDF_h
 #define QGYFNDF_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for call to QGYFNDF API                              */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYFNDF,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYFNDF   (char *,     /* Request handle                    */
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Format name                       */
                   void *,     /* Field specification               */
                   int   ,     /* Total number returned             */
                   int   ,     /* Record number                     */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definition for Field Information section                   */
 /*******************************************************************/
 typedef _Packed struct Qgy_Fndf_Field_Info
 {
   int  Field_Offset;
   int  Field_Length;
 }  Qgy_Fndf_Field_Info_t;

 /*******************************************************************/
 /* Type Definition for Field Specification for Format FNDF0100     */
 /*   NOTE:  This type definition only defines portions of fixed    */
 /*          length.  Any varying length field must be defined by   */
 /*          the user.                                              */
 /*******************************************************************/
 typedef _Packed struct Qgy_Fndf_FieldSpec_0100
 {
   int                    Num_Search_Fields;
 /*Qgy_Fndf_Field_Info_t  Field_Info[];*/        /*VARYING LENGTH*/
 }  Qgy_Fndf_FieldSpec_0100_t;

 /*******************************************************************/
 /* Type Definition for Field Specification for Format FNDF0200     */
 /*******************************************************************/
 typedef _Packed struct Qgy_Fndf_FieldSpec_0200
 {
    int  Num_Fields;
 } Qgy_Fndf_FieldSpec_0200_t;

 /*******************************************************************/
 /* Type Definition for Received Information for Format FNDF0100    */
 /*   NOTE:  This type definition only defines portions of fixed    */
 /*          length.  Any varying length field must be defined by   */
 /*          the user.                                              */
 /*******************************************************************/
 typedef _Packed struct Qgy_Fndf_RecdInfo_0100
 {
   int  Rec_Number;
 /*char Field_Value[];*/     /* VARYING LENGTH */
 /*char Padding[];*/         /* VARYING LENGTH */
 } Qgy_Fndf_RecdInfo_0100_t;

 /*******************************************************************/
 /* Type Definition for Received Information for Format FNDF0200    */
 /*   NOTE:  This type definition only defines portions of fixed    */
 /*          length.  Any varying length field must be defined by   */
 /*          the user.                                              */
 /*******************************************************************/
 typedef _Packed struct Qgy_Fndf_RecdInfo_0200
 {
   int  Rec_Number;
   char Output_Q_Name[10];
   char Output_Q_Lib[10];
   char Prtr_Assigned_Val;
   char Dev_Name[10];
 /*char Padding[];*/        /* VARYING LENGTH */
 } Qgy_Fndf_RecdInfo_0200_t;

 /******************************************************************/
 /* Type Definition for Receiver Variable, Format FNDF0100         */
 /*   NOTE:  This type definition only defines portions of fixed   */
 /*          length.  Any varying length field must be defined by  */
 /*          the user.                                             */
 /******************************************************************/
 typedef _Packed struct Qgy_Fndf_RecVar_0100
 {
   int                       Rec_Size;
 /*Qgy_Fndf_RecdInfo_0100_t  Qgy_Fndf_RecdInfo[];*/  /* VARYING LENGTH */
 } Qgy_Fndf_RecVar_0100_t;

 /******************************************************************/
 /* Type Definition for Receiver Variable, Format FNDF0200         */
 /*   NOTE:  This type definition only defines portions of fixed   */
 /*          length.  Any varying length field must be defined by  */
 /*          the user.                                             */
 /******************************************************************/
 typedef _Packed struct Qgy_Fndf_RecVar_0200
 {
   int                       Rec_Size;
 /*Qgy_Fndf_RecdInfo_0200_t  Qgy_Fndf_RecdInfo[];*/  /* VARYING LENGTH */
 } Qgy_Fndf_RecVar_0200_t;


 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif

