 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTWAIDSP                                   */
 /*                                                                */
 /* Descriptive Name: Aid Spelling API                             */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Aid Spelling API returns a list of candidate  */
 /*              words that are similar in spelling to the input   */
 /*              word.                                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qtw_Input_Word_Format_t                        */
 /*                 Qtw_Aidsp_AIDW0100_t                           */
 /*                                                                */
 /* Function Prototype List: QTWAIDSP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940330 GREILING: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTWAIDSP_h
 #define QTWAIDSP_h

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Office API QTWAIDSP OPM                  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QTWAIDSP,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTWAIDSP (void *,           /* Receiver variable             */
                int,              /* Length of receiver variable   */
                char *,           /* Format name                   */
                void *,           /* Input word                    */
                int,              /* Length of input word          */
                void *,           /* Input dictionaries            */
                int,              /* Length of input dictionaries  */
                void *,           /* Output dictionaries           */
                int,              /* Length of output dictionaries */
                void *);          /* Error code                    */

/********************************************************************/
/* Type Definition for the Input Word Format.                       */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qtw_Input_Word_Format
{
    int  Offset_Candidate_Word;
    int  Length_Candidate_Word;
    int  Output_Dictionary_Number;
  /*char Reserved_3[]; */                   /* Varying length field */
} Qtw_Input_Word_Format_t;


/********************************************************************/
/* Type Definition for the AIDW0100 format.                         */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qtw_Aidsp_AIDW0100
{
    int  Bytes_Returned;
    int  Bytes_Available;
    int  Words_Returned;
    int  Words_Available;
    int  Offset_Input_Word;
    int  Length_Input_Word;
    char Misspelled[1];
    char Reserved[3];
    int  Offset_First_Word;
    int  Length_Word_Entry;
    int  Reserved2;
  /*Qtw_Input_Word_Format_t Input_Word[]; */ /* Varying length field*/
  } Qtw_Aidsp_AIDW0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
