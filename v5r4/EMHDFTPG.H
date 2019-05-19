 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: EMHDFTPG                                     */
 /*                                                                */
 /* Descriptive Name: Default handling exit program's parameter    */
 /*                   structure for receiving program information  */
 /*                                                                */
 /* 5716-SS1,5722-SS1 (C) Copyright IBM Corp. 1995,2001            */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The ADDMSGD (add message description) command     */
 /*              or CHGMSGD (change message description) command   */
 /*              can be used to identify that a user-written       */
 /*              program should be called.                         */
 /*              The program is called when the particular message */
 /*              is sent as an escape message and the program or   */
 /*              procedure that the message was sent to was not    */
 /*              monitoring for the message.                       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Receiving_Program_Info_t                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3980706     3D60  950215 ROCH:     New Include           */
 /* $A1=P9934931  v5r1m0 001013  ROCH: Teraspace stage 2           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EMHDFTPG_h
  #define EMHDFTPG_h

  #if (__OS400_TGTVRM__>=510)                               /*@A1A*/
     #pragma datamodel(P128)                                /*@A1A*/
 #endif                                                     /*@A1A*/


 /******************************************************************/
 /* Type Definition for the Receiving Program Information parameter*/
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Receiving_Program_Info
    {
       char Receiving_Program_Name[10];
       char Receiving_Module_Name[10];
       char Receiving_Procedure_Name[256];
       char Receiving_Program_Type[1];
       char Reserved1[3];
       int  Offset_Long_Rcv_Procedure;
       int  Length_Long_Rcv_Procedure;
     /*char Reserved2[];*/                       /* Varying length */
     /*char Long_Rcv_Procedure[];*/              /* Varying length */
    } Qmh_Receiving_Program_Info_t;
  #if (__OS400_TGTVRM__>=510)                                /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/


 #endif
