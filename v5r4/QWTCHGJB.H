 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWTCHGJB                                   */
 /*                                                                */
 /* Descriptive Name: Change job API                               */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 1997,2002                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Change job API will change various attributes */
 /*              of jobs on the system                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_Cjob_Input_t                               */
 /*                 Qus_JOBC0100_t                                 */
 /*                 Qus_Cjob_Key_Fields_t                          */
 /*                 Qus_JOBC0300_t                                 */
 /*                 Qwc_JIDF0100_t                                 */
 /*    *Note - Qwc_JIDF0100_t is defined in H/QWCATTR header file  */
 /*                 Qwc_JIDF0200_t                                 */
 /*    *Note - Qwc_JIDF0200_t is defined in H/QWCATTR header file  */
 /*                                                                */
 /* Function Prototype List: QWTCHGJB                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
 /* ---- -------- ----- ------ --------- --------------------------*/
 /* $A0= D54738   4D20  970314 ROCHESTER: New Include              */
 /* $A1= D98578  v5r2m0 011113 ROCHESTER: Add new parms for threads*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWTCHGJB_h
 #define QWTCHGJB_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for QWTCHGJB API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWTCHGJB,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWTCHGJB(void *,           /* Qualified job name             */
              void *,            /* Internal job identifier        */
              void *,            /* Format name                    */
              void *,            /* Job change information         */
              void *,            /* Error code                     */
              ...);              /* Optional Parameter 1:
                                    Job/Thread identification info
                                                               @A1A*/
                                 /* Optional Parameter 2:
                                    Format of job identification
                                                               @A1A*/


 /******************************************************************/
 /* Type Definition for Job Change Information                     */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qus_Job_Change_Information
    {
       int  Number_Fields_Enterd;
     /*Qus_JOBC0100_t or Qus_JOBC0300_t;*//* Varying length */
    } Qus_Job_Change_Information_t;

 /******************************************************************/
 /* Type Definition for the JOBC0100, JOBC0200, and JOBC0400       */
 /*       formats                                                  */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_JOBC0100
    {
       int  Length_Field_Info_;
       int  Key_Field;
       char Type_Of_Data;
       char Reserved[3];
       int  Length_Data;
     /*char Data[];*/          /* Varying length                 */
     /*char Reserved[]*/       /* Varying length                 */
    } Qus_JOBC0100_t;


 /******************************************************************/
 /* Type Definition for the JOBC0300 format                        */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct  Qus_JOBC0300
    {
       int  Key_Field;
       char Data[10];
       char Reserved2[2];
    } Qus_JOBC0300_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
