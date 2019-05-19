 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCCHGTN                                   */
 /*                                                                */
 /* Descriptive Name: Change Pool Tuning Information API           */
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
 /* Description: The Change Pool Tuning Information API changes    */
 /*              information about tuning being performed by the   */
 /*              system for the different storage pools.           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_TUNI0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QWCCHGTN                              */
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

 #ifndef QWCCHGTN_h
 #define QWCCHGTN_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCCHGTN API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCCHGTN,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCCHGTN(int,              /* System pool identifier         */
               void *,           /* Change request                 */
               int,              /* Length of change request       */
               char *,           /* Format name                    */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the TUNI0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_TUNI0100
    {
       char Type_Of_Tuning;
       char Change_Page_Handling;
       int  Block_Non_Database_Objects;
       char Allow_Exchange_Class1;
       char Type_Of_Transfer_Class1;
       int  Block_Database_Objects_Class1;
       char Allow_Exchange_Class2;
       char Type_Of_Transfer_Class2;
       int  Block_Database_Objects_Class2;
       char Allow_Exchange_Class3;
       char Type_Of_Transfer_Class3;
       int  Block_Database_Objects_Class3;
       char Allow_Exchange_Class4;
       char Type_Of_Transfer_Class4;
       int  Block_Database_Objects_Class4;
    } Qwc_TUNI0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
