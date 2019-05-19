 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFVRTVCD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve CRQD.                               */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve Change Request Description API       */
 /*              retrieves either general change request           */
 /*              description information, or information pertaining*/
 /*              to a single activity withing the change           */
 /*              description.                                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qfv_Rtvcd_CRQD_QName_t                         */
 /*                 Qfv_Rtvcd_CRQD0100_t                           */
 /*                 Qfv_Rtvcd_Node_List_t                          */
 /*                 Qfv_Rtvcd_Dest_Nodes_t                         */
 /*                 Qfv_Rtvcd_Conditions_t                         */
 /*                 Qfv_Rtvcd_CRQD0200_t                           */
 /*                                                                */
 /* Function Prototype List: QFVRTVCD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
 /* ---- --------- ----- ------ --------- -------------------------*/
 /* $A0= PM601636  3D10  940619 HHUGO     New Include              */
 /* $A1= D98212.2 v5r1m0 010300 gchaney : Teraspace stage 2        */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFVRTVCD_h
 #define QFVRTVCD_h

 #if (__OS400_TGTVRM__>=510)                               /* @A1A*/
     #pragma datamodel(P128)                               /* @A1A*/
 #endif                                                    /* @A1A*/

 /******************************************************************/
 /* Prototype for calling Retrieve CRQD API QFVRTVCD               */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QFVRTVCD,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QFVRTVCD (void *,          /* Receiver Variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format                         */
                void *,          /* Change Request Description     */
                char *,          /* Activity                       */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the qualified CRQD name structure          */
 /******************************************************************/
 typedef struct Qfv_Rtvcd_CRQD_QName
    {
       char CRQD_Name[10];
       char CRQD_Library[10];
    }Qfv_Rtvcd_CRQD_QName_t;

 /******************************************************************/
 /* Type Definition for the CRQD0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qfv_Rtvcd_CRQD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       Qfv_Rtvcd_CRQD_QName_t CRQD_Qual_Name;
       char Owner_Profile[10];
       char User_Profile[10];
       char Sequence_Number[6];
       char Problem_ID[10];
       char Problem_Origin[21];
       char CRQD_Text[50];
    } Qfv_Rtvcd_CRQD0100_t;

 /******************************************************************/
 /* Type Definition for the Node List structure                    */
 /******************************************************************/
 typedef _Packed struct Qfv_Rtvcd_Node_List
    {
       char Node_List_Name[10];
       char Node_List_Lib[10];
    } Qfv_Rtvcd_Node_List_t;

 /******************************************************************/
 /* Type Definition for the Destination Nodes structure            */
 /******************************************************************/
 typedef _Packed struct Qfv_Rtvcd_Dest_Nodes
    {
       char Network_ID[8];
       char Control_Point[8];
       char Reserved[4];
    } Qfv_Rtvcd_Dest_Nodes_t;

 /******************************************************************/
 /* Type Definition for the conditions structure                   */
 /******************************************************************/
 typedef _Packed struct Qfv_Rtvcd_Conditions
    {
       char Condition_Activity[10];
       char Condition_Relation[3];
       char Reserved_3[3];
       int  Condition_Code;
       char Condition_Mode[10];
       char Reserved_2[2];
    } Qfv_Rtvcd_Conditions_t;

 /******************************************************************/
 /* Type Definition for the CRQD0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qfv_Rtvcd_CRQD0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       Qfv_Rtvcd_CRQD_QName_t CRQD_Qual_Name;
       char Activity_Name[10];
       char Activity_Type[10];
       char Start_Time[40];
       char Hold[10];
       char Destination_Local[1];
       char Activity_Text[50];
       char Reserved[3];
       int  Activity_Text_CCSID;
       int  Node_List_Offset;
       int  Number_Nodes;
       int  Destination_Nodes_Offset;
       int  Number_Conditions;
       int  Conditions_Offset;
       int  Function_Parameters_Length;
       int  Function_Parameters_Offset;
     /*char Reserved_1[];*/          /* Varying length              */
     /*Qfv_Rtvcd_Node_List_t Node_List_Name[];*//* Varying length   */
     /*Qfv_Rtvcd_Dest_Nodes_t Destinations[];*//* Varying length    */
     /*Qfv_Rtvcd_Conditions_t Conditions_Array[];*//* Varying length*/
     /*char Function_Parameters[];*/ /* Varying length              */
    } Qfv_Rtvcd_CRQD0200_t;

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif
