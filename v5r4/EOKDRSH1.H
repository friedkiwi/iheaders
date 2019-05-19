 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EOKDRSH1                                   */
 /*                                                                */
 /* Descriptive Name: Directory Search Exit Program.               */
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
 /* Description: The Directory Search exit program allows the      */
 /*              administrator to define a customized search of    */
 /*              directory data.                                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qok_Search_ARRAY_t                             */
 /*                                                                */
 /* Function Prototype List: EOKDRSH1                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940418 DWC:      New Include           */
 /* $A1= P9934931     5D10  001009 SKR:      Add changes to not use*/
 /*                                          teraspace pointers    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef EOKDRSH1_h
 #define EOKDRSH1_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
   #pragma datamodel(P128)                                   /*@A1A*/
 #endif                                                      /*@A1A*/

 /******************************************************************/
 /* Type Definition for the Search function Array.                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qok_Search_ARRAY
    {
       char Selection_Option_Used[1];
       char User_ID[8];
       char User_Address[8];
       char Users_Full_Name_Or_Dscrptn[50];
    } Qok_Search_ARRAY_t;

  /*Qok_Search_ARRAY_t Search_Array[];*//* Varying length          */

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
   #pragma datamodel(pop)                                    /*@A1A*/
 #endif                                                      /*@A1A*/

#endif
