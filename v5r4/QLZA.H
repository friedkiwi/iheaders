 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZA                                       */
 /*                                                                */
 /* Descriptive Name: General LZA API Include Structures           */
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
 /* Description: Contains the general format headers for the       */
 /*              LZA APIs.                                         */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     Qlza_LICP0100                                              */
 /*     Qlza_LICP0200                                              */
 /*     Qlza_LICT0100                                              */
 /*     Qlza_LICL0100                                              */
 /*     Qlza_LICL0200                                              */
 /*                                                                */
 /* Function Prototype List: None                                  */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3954178     3D10  940518 M.Miller  New Include           */
 /* $A1= P3606491     3D70  951201 KPS       Add additional user   */
 /*                                          info                  */
 /* $A2= P9934931     5D10  001104 gchaney   Teraspace stage 2     */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLZA_h
#define QLZA_h

#if (__OS400_TGTVRM__>=510)                                 /*@A2A*/
   #pragma datamodel(P128)                                  /*@A2A*/
#endif                                                      /*@A2A*/

/********************************************************************/
/*  Structure for LICP0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qlza_LICP0100
   {
                 char PID[7];
                 char Rls[6];
                 char Feature[4];
   } Qlza_LICP0100_t;

/********************************************************************/
/*  Structure for LICP0200 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qlza_LICP0200
   {
                 int  Struct_Sz;
                 char PID[7];
                 char Rls[6];
                 char Feature[4];
                 char Msg_ID[7];
   } Qlza_LICP0200_t;

/********************************************************************/
/*  Structure for LICT0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qlza_LICT0100
   {
                 char PID[7];
                 char License_Term[6];
                 char Feature[4];
   } Qlza_LICT0100_t;

/********************************************************************/
/*  Structure for LICL0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qlza_LICL0100
   {
                 char User[10];
   }Qlza_LICL0100_t;

/********************************************************************/
/*  Structure for LICL0200 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qlza_LICL0200
   {
                 int  Offset;
                 int  Length;
                 char Usr_Hndl[8];
                 int  Add_Info_Off;
                 int  Add_Info_Len;
                 int  Reserved;
               /*char Reserved_2[];    Varying Length Field */
    }Qlza_LICL0200_t;


#if (__OS400_TGTVRM__>=510)                           /*@A2A*/
   #pragma datamodel(pop)                             /*@A2A*/
#endif                                                /*@A2A*/

#endif
