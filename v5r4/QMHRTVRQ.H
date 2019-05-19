 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QMHRTVRQ                                     */
 /*                                                                */
 /* Descriptive Name: Retrieve Request Message API.                */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Request Message API retrieves request*/
 /*              messages from the current job's job message queue.*/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rtvrq_RTVQ0100_t                           */
 /*                 Qmh_Rtvrq_RTVQ0200_t                           */
 /*                                                                */
 /* Function Prototype List: QMHRTVRQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= D91766       3D60  950215 ROCH:     Support long receiving*/
 /*                                          procedure names on    */
 /*                                          format RTVQ0200.      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRTVRQ_h
 #define QMHRTVRQ_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRTVRQ             */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHRTVRQ,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHRTVRQ (void *,          /* Message information            */
                int,             /* Length of message information  */
                char *,          /* Format name                    */
                char *,          /* Message type                   */
                void *,          /* Message key                    */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the RTVQ0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvrq_RTVQ0100
    {
       int  Bytes_Return;
       int  Bytes_Available;
       char Message_Key[4];
       char Reserved[20];
       int  Length_Text_Returned;
       int  Length_Text_Available;
     /*char Request_Message_Text[];*/ /* Varying length            */
    } Qmh_Rtvrq_RTVQ0100_t;

 /******************************************************************/
 /* Type Definition for the RTVQ0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvrq_RTVQ0200
    {
       int  Bytes_Return;
       int  Bytes_Available;
       char Message_Key[4];
       char Program_Name[10];
       char Stack_Entry_Type[1];
       char Module_Name[10];
       char Procedure_Name[256];
       char Reserved[11];
       int  Offset_Long_Procedure_Name;
       int  Length_Long_Procedure_Name;
       int  Length_Text_Returned;
       int  Length_Text_Available;
     /*char Request_Message_Text[];*/ /* Varying length            */
     /*char Long_Procedure_Name[]; */ /* Varying length            */
    } Qmh_Rtvrq_RTVQ0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
