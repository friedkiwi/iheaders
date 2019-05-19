 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTWCHKSP                                   */
 /*                                                                */
 /* Descriptive Name: Check Spelling                               */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Check Spelling API accepts a list of one or   */
 /*              more words in the word list parameter, and        */
 /*              returns one word array entry in the receiver      */
 /*              variable for every word with an indication if it  */
 /*              is a valid word.                                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qtw_Word_Info_Entry_t                          */
 /*                 Qtw_Chksp_CHKW0100_t                           */
 /*                 Qtw_Chksp_CHKW0200_t                           */
 /*                 Qtw_Dict_Entry_Format_t                        */
 /*                 Qtw_Input_Dictionary_t                         */
 /*                 Qtw_Output_Dictionary_t                        */
 /*                                                                */
 /* Function Prototype List: QTWCHKSP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940331 GREILING: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTWCHKSP_h
 #define QTWCHKSP_h

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Office API QTWAIDSP OPM                  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QTWCHKSP,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QTWCHKSP (void *,           /* Receiver variable             */
                int,              /* Length of receiver variable   */
                char *,           /* Format name                   */
                void *,           /* Word list                     */
                int,              /* Length of word list           */
                void *,           /* Input dictionaries            */
                int,              /* Length of input dictionaries  */
                void *,           /* Output dictionaries           */
                int,              /* Length of output dictionaries */
                void *);          /* Error code                    */

/********************************************************************/
/* Type Definition for the Word Information Entry Format.           */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qtw_Word_Info_Entry
{
    int  Offset_Word;
    int  Length_Word;
    char Misspelled[1];
  /*char Reserved2[]; */                     /* Varying length field*/
  } Qtw_Word_Info_Entry_t;
/********************************************************************/
/* Type Definition for the CHKW0100 format.                         */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qtw_Chksp_CHKW0100
{
    int  Bytes_Returned;
    int  Bytes_Available;
    int  Words_Returned;
    int  Words_Available;
    int  Offset_First_Word;
    int  Length_Word_Info_Entry;
    int  Reserved;
  /*Qtw_Word_Info_Entry_t Word_Entry[ ]; */  /* Varying length field*/
  /*char Word[];*/                           /* Varying length field*/
  } Qtw_Chksp_CHKW0100_t;

/********************************************************************/
/* Type Definition for the CHKW0200 format.                         */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qtw_Chksp_CHKW0200
{
    int  Bytes_Returned;
    int  Bytes_Available;
    int  Words_Returned;
    int  Words_Available;
    int  Offset_First_Word;
    int  Length_Word_Info_Entry;
    int  Reserved;
  /*Qtw_Word_Info_Entry_t Word_Entry[]; */   /* Varying length field*/
  /*char Word[];*/                           /* Varying length field*/
  } Qtw_Chksp_CHKW0200_t;

/********************************************************************/
/* Type Definition for the Dictionare Entries Format.               */
/*                                                                  */
/********************************************************************/
typedef _Packed struct Qtw_Dict_Entry_Format
{
    char Dict_Name[10];
    char Dict_Library_Name[10];
  } Qtw_Dict_Entry_Format_t;

/********************************************************************/
/* Type Definition for the Input Dictionaries Format.               */
/*                                                                  */
/********************************************************************/
typedef _Packed struct Qtw_Input_Dictionary
{
    int  Offset_Dict_Entry;
    int  Number_Dict_Entries;
    int  Reserved;
  /*Qtw_Dict_Entry_Format_t Dict_Entry[];*/  /* Varying length field*/
  } Qtw_Input_Dictionary_t;

/********************************************************************/
/* Type Definition for the Output Dictionaries Format.              */
/*                                                                  */
/********************************************************************/
typedef _Packed struct Qtw_Output_Dictionary
{
    int  Dict_Returned;
    int  Dict_Available;
  /*Qtw_Dict_Entry_Format_t Dict_Entry[];*/  /* Varying length field*/
  } Qtw_Output_Dictionary_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
