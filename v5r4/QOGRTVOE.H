 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOGRTVOE                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Office Programs                     */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve Office Programs API retrieves the    */
 /*              programs that are used for office document        */
 /*              requests and document conversion requests.        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qog_Rtvoe_OGOE0100_t                           */
 /*                                                                */
 /* Function Prototype List: QOGRTVOE                              */
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

 #ifndef QOGRTVOE_h
 #define QOGRTVOE_h

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Office API QOGRTVOE .                    */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QOGRTVOE,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QOGRTVOE (void *,           /* Receiver variable             */
                int   ,           /* Length of receiver variable   */
                char *,           /* Format name                   */
                void *);          /* Error code                    */
/********************************************************************/
/* Type Definition for the OGOE0100 format.                         */
/********************************************************************/
typedef _Packed struct Qog_Rtvoe_OGOE0100
{
    int  Bytes_Returned;
    int  Bytes_Available;
    char Document_Handling_Name[10];
    char Document_Handling_Lib_Name[10];
    char Document_Handling_Mail_Flag[1];
    char Document_Conversion_Name[10];
    char Document_Conversion_Lib_Name[10];
    char Application_Active_Flag[1];
    char Mail_Handling_Active_Flag[1];
    char PCFILE_Active_Flag[1];
    char App_Enabler_Activated_Flag[1];
    char Mail_Handling_Activated_Flag[1];
    char PCFILE_Activated_Flag[1];
    char App_Enabler_Activating_Flag[1];
    char Mail_Handling_Activating_Flag[1];
    char PCFILE_Activating_Flag[1];
  } Qog_Rtvoe_OGOE0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
