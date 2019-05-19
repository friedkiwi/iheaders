 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGY                                        */
 /*                                                                */
 /* Descriptive Name: Common structures for use by QGY API's.      */
 /*                   List                                         */
 /*                                                                */
 /* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1998, 2001         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The common structures for use by QGY API's.       */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_Date_T                                     */
 /*                 Qgy_Time_T                                     */
 /*                 Qgy_Date_Time_T                                */
 /*                 Qgy_Qual_Name_T                                */
 /*                 Qgy_Path_Info_T                                */
 /*                 Qgy_List_Info_T                                */
 /*                                                                */
 /* Function Prototype List: None                                  */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9540100     4D20  970421 ROCH:     New Include.          */
 /* $A1= P9934931     5D10  001107 ROCH:     Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGY_h
 #define QGY_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/

/*******************************************************************/
/* Structures for date and time                                    */
/*******************************************************************/
 typedef struct Qgy_Date
    {
       char  Year[2];
       char  Month[2];
       char  Day[2];
    } Qgy_Date_T;

 typedef struct Qgy_Time
    {
       char  Hour[2];
       char  Minutes[2];
       char  Seconds[2];
    } Qgy_Time_T;

 typedef struct Qgy_Date_Time
    {
       char  Century;
       Qgy_Date_T Date;
       Qgy_Time_T Time;
    } Qgy_Date_Time_T;

/*******************************************************************/
/* Structure for qualified name                                    */
/* *****************************************************************/
 typedef struct Qgy_Qualified_Name
    {
       char  Name[10];
       char  Library[10];
    } Qgy_Qual_Name_T;

/*******************************************************************/
/* Structure for Path Information                                  */
/****                                                           ****/
/* *****************************************************************/
/* NOTE:  The following type definition only defines the fixed     */
/*        portion of the format. Any varying length field will     */
/*        have to be defined by the user.                          */
/*******************************************************************/
 typedef _Packed struct Qgy_Path_Info
    {
       int   CCSID;
       char  Cntryid[2];
       char  Langid[3];
       char  Reserved[3];
       int   Flag;
       int   Numbytes;
       char  Delimiter[2];
       char  Reserved2[10];
     /*char Qgy_Path_Name[]; */  /* Varying length                 */
    } Qgy_Path_Info_T;

 /******************************************************************/
 /* List information structure                                     */
 /******************************************************************/
 typedef struct Qgy_List_Info
    {
       int       Total_Records;
       int       Records_Returned;
       char      Request_Handle[4];
       int       Record_Length;
       char      Info_Complete;
       Qgy_Date_Time_T    Date_Time;
       char      List_Status_Indicator;
       char      Reserved;
       int       Returned_Info_Length;
       int       First_Buffer_Record;
       char      Reserved2[40];
    } Qgy_List_Info_T;

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

 #endif
