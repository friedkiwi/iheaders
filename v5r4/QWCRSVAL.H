 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRSVAL                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve System Values API                   */
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
 /* Description: The Retrieve System Values API lets you retrieve  */
 /*              system values.                                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_Rsval_Sys_Value_Table_t                   */
 /*                  Qwc_Rsval_Data_Rtnd_t                         */
 /*                                                                */
 /* Function Prototype List: QWCRSVAL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRSVAL_h
 #define QWCRSVAL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCRSVAL API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRSVAL,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCRSVAL(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               int,              /* Number of system values to rtv */
               void *,           /* System value names             */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the Format of Data Returned.               */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwc_Rsval_Sys_Value_Table
    {
       char System_Value[10];
       char Type_Data;
       char Information_Status;
       int  Length_Data;
     /*char Data[]; */           /* Varying length                 */
    } Qwc_Rsval_Sys_Value_Table_t;

 typedef _Packed struct Qwc_Rsval_Data_Rtnd
    {
       int  Number_Sys_Vals_Rtnd;
     /*int  Offset_Sys_Val_Table[];*//* Varying length             */
     /*Qwc_Rsval_Sys_Value_Table_t System_Values[];*//* Varying
                                        length                     */
    } Qwc_Rsval_Data_Rtnd_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
