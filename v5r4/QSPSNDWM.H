 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPSNDWM                                   */
 /*                                                                */
 /* Descriptive Name: Send Writer Message                          */
 /*                                                                */
 /* 5716-SS1, 5722-SS1(C) Copyright IBM Corp. 1996,2001            */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Send Writer Message API:                      */
 /*              - is used by a driver exit program to send either */
 /*                an informational or inquiry message to the      */
 /*                writer's message queue.                         */
 /*                                                                */
 /* Header Files Included: H/QSPSNDWM                              */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qsp_SNDM0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QSPSETWI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710       3D60  950111 RJOHNSON: New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSPSNDWM_h
#define QSPSNDWM_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPSNDWM,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QSPSNDWM                                  */
/********************************************************************/

void QSPSNDWM(void *,               /* Receiver Variable             */
              int,                  /* Length of Receiver Variable   */
              char *,               /* Format name                   */
              char *,               /* Message Identifier            */
              void *,               /* Qualified Message File Name   */
              void *,               /* Message Data                  */
              int,                  /* Message Data Length           */
              char *,               /* Message Type                  */
              int,                  /* Message Wait Timeout          */
              char *,               /* Message Key                   */
              char *,               /* Writer Handle                 */
              int,                  /* Coded Character Set Identifier*/
              void *);              /* Error code                    */

/*******************************************************************/
/*  Structure for SNDM0100 format                                  */
/*******                                                           */
/* NOTE:  The following type definition only defines the fixed     */
/*        portion of the format. Any varying length field will     */
/*        have to be defined by the user.                          */
/*******************************************************************/

typedef _Packed struct Qsp_SNDM0100
{
     int  Bytes_Returned;
     int  Bytes_Available;
     char Message_Key[4];
     char Reserved[16];
     int  Offset_To_Message_Reply_Text;
     int  Len_Of_Msg_Reply_Text_Returned;
     int  Len_Of_Msg_Reply_Text_Avail;
   /*char Message_Reply_Text[]; *//*   Varying length.             */
} Qsp_SNDM0100_t;
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
