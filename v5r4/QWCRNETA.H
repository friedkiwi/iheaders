 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRNETA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Network Attributes API              */
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
 /* Description: The Retrieve Network Attributes API lets you      */
 /*              retrieve network attributes.                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_Rneta_Attr_Table_t                        */
 /*                  Qwc_Rneta_Data_Rtnd_t                         */
 /*                                                                */
 /* Function Prototype List: QWCRNETA                              */
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

 #ifndef QWCRNETA_h
 #define QWCRNETA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCRNETA API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRNETA,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCRNETA(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               int,              /* Number of network attributes   */
               void *,           /* Network attribute names        */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the Format of Data Returned.               */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwc_Rneta_Attr_Table
    {
       char Network_Attribute[10];
       char Type_Data;
       char Information_Status;
       int  Length_Data;
     /*char Data[];*/            /* Varying length                 */
    } Qwc_Rneta_Attr_Table_t;

 typedef _Packed struct Qwc_Rneta_Data_Rtnd
    {
       int  Number_Attributes_Rtnd;
     /*int  Offset_Attribute_Table[];*//* Varying length           */
     /*Qwc_Rneta_Attr_Table_t Array[];*//* Varying length          */
    } Qwc_Rneta_Data_Rtnd_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
