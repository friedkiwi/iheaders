 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRDQM                                    */
 /*                                                                */
 /* Descriptive Name: Retrieve Data Queue Message API.             */
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
 /* Description: The Retrieve Data Queue Message API retrieves one */
 /*              or more messages from a data queue.               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rdqm_Message_Entry_t                       */
 /*                 Qmh_Rdqm_RDQM0100_t                            */
 /*                 Qmh_Rdqm0200_Message_Entry_t                   */
 /*                 Qmh_Rdqm_RDQM0200_t                            */
 /*                 Qmh_Rdqm_RDQS0100_t                            */
 /*                 Qmh_Rdqm_RDQS0200_t                            */
 /*                                                                */
 /* Function Prototype List: QMHRDQM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON: New Include           */
 /* $A1= D98417       5D10  000709 LLENTZ:   Add type def for      */
 /*                                          new format RDQM0200   */
 /* $B1= D98212       5D10  000103 MTNELSON: Teraspace             */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRDQM_h
 #define QMHRDQM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRDQM              */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHRDQM,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHRDQM (void *,           /* Retrieve message information   */
               int,              /* Size of retrieve message info  */
               char *,           /* Format of retrieve message info*/
               void *,           /* Data queue name and library    */
               void *,           /* Message selection information  */
               int,              /* Size of message selection info */
               char *,           /* Format of message selection inf*/
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the RDQM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields for each    */
 /*       message returned are each varying length and immediately */
 /*       follow what is defined here.                             */
 /******************************************************************/
 typedef _Packed struct Qmh_Rdqm_Message_Entry
    {
       int  Offset_Next_Entry;
       char Message_Date_Time[8];
     /*char Message_Key[];       *//* Varying length               */
     /*char Message_Text[];      *//* Varying length               */
     /*char Reserved2[];         *//* Varying length               */
    } Qmh_Rdqm_Message_Entry_t;

 typedef _Packed struct Qmh_Rdqm_RDQM0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Number_Messages_Returned;
       int  Number_Messages_Available;
       int  Message_Length_Returned;
       int  Message_Length_Available;
       int  Text_Length_Returned;
       int  Text_Length_Available;
       int  Entry_Length_Returned;
       int  Entry_Length_Available;
       int  Offset_First_Entry;
       char Return_Library_Name[10];
     /*char Reserved[];          *//* Varying length               */
     /*Qmh_Rdqm_Message_Entry_t Message_Entry[];*//* Varying length*/
    } Qmh_Rdqm_RDQM0100_t;

 /******************************************************************/
 /* Type Definition for the RDQM0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields for each    */
 /*       message returned are each varying length and immediately */
 /*       follow what is defined here.                             */
 /******************************************************************/
 typedef _Packed struct Qmh_Rdqm0200_Message_Entry
    {
       int  Offset_Next_Entry;
       char Message_Date_Time[8];
       int  Enqueued_Message_Entry_Length;
     /*char Message_Key[];       *//* Varying length               */
     /*char Message_Text[];      *//* Varying length               */
     /*char Reserved2[];         *//* Varying length               */
    } Qmh_Rdqm0200_Message_Entry_t;

 typedef _Packed struct Qmh_Rdqm_RDQM0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Number_Messages_Returned;
       int  Number_Messages_Available;
       int  Key_Length_Returned;
       int  Key_Length_Available;
       int  Max_Msg_Text_Length_Requested;
       int  Max_Msg_Text_Length_Available;
       char Reserved[8];
       int  Offset_First_Entry;
       char Return_Library_Name[10];
     /*char Reserved1[];         *//* Varying length               */
     /*Qmh_Rdqm0200_Message_Entry_t Message_Entry[];*//*
                                                     Varying length*/
    } Qmh_Rdqm_RDQM0200_t;

 /******************************************************************/
 /* Type Definition for the RDQS0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qmh_Rdqm_RDQS0100
    {
       char Type[1];
       char Reserved[3];
       int  Number_Text_Bytes_Retrieve;
    } Qmh_Rdqm_RDQS0100_t;

 /******************************************************************/
 /* Type Definition for the RDQS0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The key field is a varying length*/
 /*       field and immediately follows what is defined here.      */
 /******************************************************************/
 typedef _Packed struct Qmh_Rdqm_RDQS0200
    {
       char Type[1];
       char Search_Order[2];
       char Reserved[1];
       int  Number_Text_Retrieve;
       int  Number_Key_Retrieve;
       int  Key_Length;
     /*char Key[];*/              /* Varying length                */
    } Qmh_Rdqm_RDQS0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
