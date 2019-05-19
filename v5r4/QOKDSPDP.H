 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOKDSPDP                                   */
 /*                                                                */
 /* Descriptive Name: Display Directory Panels                     */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Display Directory Panels API has the ability  */
 /*              to display the Change Directory Information       */
 /*              display.                                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Message_Displayed                              */
 /*                                                                */
 /* Function Prototype List: QOKDSPDP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940401 GREILING: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOKSDPDP_h
 #define QOKDSPDP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Office API QOKDSPDP OPM                  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QOKDSPDP,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QOKDSPDP (char *,           /* User ID                       */
                char *,           /* User address                  */
                char *,           /* Title                         */
                char *,           /* Function key processing       */
                void *,           /* Message to be displayed       */
                void *);          /* Error code                    */

 /******************************************************************/
 /* Type Definition for the Message_Displayed format.              */
 /******************************************************************/
 typedef struct Qok_Message_Displayed {
     short int Message_Size;
     char      Message_ID[7];
     char      Message_File[8];
     char      Message_Type[4];
     short int Length_Message_Data;
   /*char    Message_Data[ ]; */   /* Varying length               */
  } Qok_Message_Displayed_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
