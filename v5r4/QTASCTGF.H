 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTASCTGF                                   */
 /*                                                                */
 /* Descriptive Name: Set Cartridge Filter   QTASCTGF              */
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
 /* Description: Set Cartridge Filter   (QTASCTGF) API             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTASCTGF                              */
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
 #ifndef QTASCTGF_h
 #define QTASCTGF_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Set Cartridge Filter    (QTASCTGF)       */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTASCTGF,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTASCTGF (char *,          /* Cartridge filter             */
                int,               /* Length of cartridge filter   */
                char *,            /* Format Name                  */
                int,               /* Requested action             */
                void *);           /* Error code                   */


 /******************************************************************/
 /* Type Definition for the SCTG0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_SFTR0100
    {
       int  Offset_to_Array;
       int  Number_of_Entries;
       int  Length_of_Array_Entry;
     } Qta_SFTR0100_t;

 /******************************************************************/
 /* Constant for format name                                       */
 /******************************************************************/
 #define SFTR0100 "SFTR0100"

 /******************************************************************/
 /* Constants for requested action                                 */
 /******************************************************************/
 #define QTASCTGF_REPLACE  1
 #define QTASCTGF_APPEND   2
 #define QTASCTGF_CLEAR    3
 #define QTASCTGF_REMOVE   4

 #pragma datamodel(pop)
 #endif

