 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBRPLAY.h                                 */
 /*                                                                */
 /* Descriptive Name: Replay Database Operation API.               */
 /*                                                                */
 /* 5722-SS1 (C) Copyright IBM Corp. 2002                          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Replay Database Operation (QDBRPLAY) API      */
 /*              allows the user to replay a database operation    */
 /*              from a single journal entry.                      */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List: Qdb_Rplay_Input_Parms_t                        */
 /*                 Qdb_DBRR0100_t                                 */
 /*                 Qdb_Rename_Exit_Parm_t                         */
 /*                                                                */
 /* Function Prototype List: QDBRPLAY                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   DEPT/PGMR CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9921600     5D30  020620 VPZ MJA:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/
#ifndef QDBRPLAY_h
#define QDBRPLAY_h


/*********************************************************************/
/* Prototypes for calling Replay Database Operation QDBRPLAY         */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBRPLAY,OS,nowiden)
#else
     extern "OS"
#endif

#if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
#endif

void QDBRPLAY(void *,               /* Input template                */
              int  *,               /* Length of input template      */
              char *,               /* Input template format name    */
              void *,               /* Journal entry specific data   */
              int  *,               /* Length of journal entry       */
                                    /* specific data                 */
              void *,               /* Rename exit program scratchpad*/
              void *);              /* Error code                    */


/*********************************************************************/
/* Input structure for QDBRPLAY API header section                   */
/*********************************************************************/

typedef _Packed struct Qdb_Rplay_Input_Parms
      {
                /*char Input_Template[];*/         /* varying length */
                  long Length_Of_Input_Template;
                  char Format_Name[8];
                /*char Journal_Entry_ESD[];*/      /* varying length */
                  long Length_Of_Journal_ESD;
                /*char Rename_Exit_Pgm_Scr[];*/    /* varying length */
                /*char Error_Code[];*/             /* varying length */
      } Qdb_Rplay_Input_Parms_t;


/*********************************************************************/
/* Type Definition for the DBRR0100 format.                          */
/*********************************************************************/
typedef _Packed struct Qdb_DBRR0100
      {
                  char Journal_Code;
                  char Journal_Type[2];
                  char Rename_Exit_Pgm[10];
                  char Rename_Exit_Lib[10];
                  char Disable_Trigger;
                /*char Reserved[];*/               /* varying length */
      } Qdb_DBRR0100_t;


/*********************************************************************/
/* Type Definition for the Rename Exit Program Parameter             */
/*********************************************************************/
typedef _Packed struct Qdb_Rename_Exit_Parm
      {
                  long Length_Rnm;
                  long Length_Object_Name;
                  long Length_Object_Lib;
                  long Object_Type;
                  char Object_Name[258];
                  char Object_Lib[258];
      } Qdb_Rename_Exit_Parm_t;


#if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
#endif

#endif
