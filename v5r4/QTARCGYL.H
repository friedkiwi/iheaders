 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTARCGYL                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Category List QTARCGYL              */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2004                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Retrieve Category List (QTARCGYL) API             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTARCGYL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D99239.2     5D30  020707 ROCH      Creation              */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QTARCGYL_h
 #define QTARCGYL_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Retrieve Category List  (QTARCGYL)       */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARCGYL,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTARCGYL (char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                void *);           /* Error code                     */


 /******************************************************************/
 /* Type Definition for the RCGY0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_RCGY0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_to_category_list;
       int  Number_of_category_entries;
       int  Length_of_category_entry;
    } Qta_RCGY0100_t;

 typedef _Packed struct Qta_category_list
    {
     char Category_name[10];
     char Category_system[8];
    } Qta_category_list_t;


 /******************************************************************/
 /* Constant for format name                                       */
 /******************************************************************/
 #define RCGY0100 "RCGY0100"

 #pragma datamodel(pop)
 #endif

