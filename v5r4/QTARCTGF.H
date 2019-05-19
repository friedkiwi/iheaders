 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTARCTGF                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Cartridge Filter QTARCTGF           */
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
 /* Description: Retrieve Cartridge Filter (QTARCTGF) API          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTARCTGF                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D99488       5D30  021201 ROCH      Creation              */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QTARCTGF_h
 #define QTARCTGF_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Retrieve Cartridge Filter  (QTARCTGF)    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARCTGF,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTARCTGF (char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                void *);           /* Error code                     */


 /******************************************************************/
 /* Type Definition for the RCTG0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_RFTR0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_to_Array;
       int  Number_of_Entries;
       int  Length_of_Array_Entry;
     } Qta_RFTR0100_t;

 /******************************************************************/
 /* Constant for format name                                       */
 /******************************************************************/
 #define RFTR0100 "RFTR0100"

 #pragma datamodel(pop)
 #endif

