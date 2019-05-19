 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRDTAA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Data Area API                       */
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
 /* Description: The Retrieve Data Area API allows you to retrieve */
 /*              the contents of a data area.                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_Format_Data_Returned_t                     */
 /*                                                                */
 /* Function Prototype List: QWCRDTAA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940213 MOREY:    New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRDTAA_h
 #define QWCRDTAA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Retrieve Data Area (QWCRDTAA) API        */
 /******************************************************************/
 #ifdef __ILEC400__
       #pragma linkage(QWCRDTAA,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCRDTAA (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* Qualified data area name       */
                int,             /* Starting position              */
                int,             /* Length of data                 */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the Format of Data Returned.               */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwc_Rdtaa_Data_Returned
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Type_Value_Returned[10];
       char Library_Name[10];
       int  Length_Value_Returned;
       int  Number_Decimal_Positions;
     /*char Value[];*/           /* Varying length                 */
    } Qwc_Rdtaa_Data_Returned_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
