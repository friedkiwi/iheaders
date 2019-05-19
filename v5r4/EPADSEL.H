 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: EPADSEL                                      */
 /*                                                                */
 /* Descriptive Name: Device Selection exit program structures     */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /******************************************************************/
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: PDSC0100                                       */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL   DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ---------- ------- ------ --------- ----------------------*/
 /* $A0  P9A18906   V5R2M0F 021204 AXELO     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EPADSEL_h
  #define EPADSEL_h

  #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
  #endif


  /*****************************************************************/
  /* Type definition for PDSC0100                                  */
  /*****************************************************************/

 typedef _Packed struct PDSC0100
    {
       int  Size_Of_Structure;
       int  QPADEVS_Function;
       int  Specific_Name_Requested;
       char Name_For_Requested_Device[10];
       char Format_Of_Returned_Data[8];
       char Reserved[2];
     /*PDSR0100_t Outputs; */
    }  PDSC0100_t;

  /*****************************************************************/
  /* Type definition for PDSR0100                                  */
  /*****************************************************************/

 typedef _Packed struct PDSR0100
    {
       int  Autocreation_Limit;
       char Naming_Pattern_For_Device[6];
       char Controller_Naming_Pattern[6];
       char Addt_Controller_Naming_Pattern[6];
    }  PDSR0100_t;

  #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(pop)
  #endif

 #endif              /* #ifndef EPADSEL_h  */
