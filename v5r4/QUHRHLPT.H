/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUHRHLPT                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Help Text API                          */
/*                                                                   */
/* 5722-SS1  (C) Copyright IBM Corp. 1999,1999                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Retrieve Help Text API retrieves the help text   */
/*              requested and returns it in Xml format.              */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Quh_Receiver_t                                    */
/*                 Quh_RHLP0100_id_t                                 */
/*                 Quh_ids_to_rtv_t                                  */
/*                 Quh_Help_id_txt_t                                 */
/*                                                                   */
/* Function Prototype List: QUHRHLPT                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9796100     5D10  990720 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUHRHLPT_h
 #define QUHRHLPT_h
#if (__OS400_TGTVRM__>=510)  /*@B1A*/
#pragma datamodel(P128)      /*@B1A*/
#endif                       /*@B1A*/

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUHRHLPT       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUHRHLPT,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QUHRHLPT (void *,           /* Receiver variable               */
                int  *,           /* Receiver variable length        */
                char *,           /* Format name                     */
                void *,           /* Help identifiers to be retrieved*/
                int  *,           /* Number of help identifiers      */
                void *,           /* Help identifier text            */
                int  *,           /* Length of help identifier text  */
                void *);          /* Error code                      */


 /* Layout of the receiver variable header */
 typedef _Packed struct Quh_Receiver {
     int  Bytes_Returned;
     int  Bytes_Available;
     char Format[8];
     int  Offset_Help_Ids;
     int  Number_Entries;
     int  Entry_Size;
  /*char data[10000];*/
 } Quh_Receiver_t;

 /* Layout of the receiver variable help identifier array */
 typedef _Packed struct Quh_RHLP0100 {
     char Help_Id[32];
     char Obj_Name[10];
     char Obj_Lib[10];
     char Obj_Typ[10];
     char Help_Id_Found[1];
     char Anchor_Name[96];
     char Reserved[33];
 } Quh_RHLP0100_t;

 /* Format of the help identifiers to be retrieved */
 typedef _Packed struct Quh_Ids_To_Rtv {
     char Help_Id_Name[32];
     char Object_Name[10];
     char Object_Lib[10];
     char Object_Type[10];
     char Reserved[18];
 } Quh_Ids_To_Rtv_t;

 /* Format of the help identifier text */
 typedef _Packed struct Quh_Help_Id_Txt {
     int  Bytes_Returned;
     int  Bytes_Available;
  /*char Data[10000];*/
 } Quh_Help_Id_Txt_t;

#if (__OS400_TGTVRM__>=510)  /*@B1A*/
#pragma datamodel(pop)       /*@B1A*/
#endif                       /*@B1A*/
#endif
