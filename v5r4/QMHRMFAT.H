 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRMFAT                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Message File Attributes.            */
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
 /* Description: Include header file for the QMHRMFAT API.         */
 /*                                                                */
 /* Header Files Included: H/QMHRMFAT                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: RMFA0100                                       */
 /*                                                                */
 /* Function Prototype List: QMHRMFAT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /*  $A0=D28620       3D10  940424 RGARVEY:  New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRMFAT_h
 #define QMHRMFAT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 #ifdef __ILEC400__
   #pragma linkage (QMHRMFAT,OS)
 #else
   extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRMFAT             */
 /******************************************************************/
 void QMHRMFAT (void *,          /* Message file information       */
                int,             /* Message file information length*/
                char *,          /* Format name                    */
                void *,          /* Qualified message file name    */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the RMFA0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qmh_Rmfa_RMFA0100
    {
       int  Bytes_Return;
       int  Bytes_Available;
       char Message_File_Name[10];
       char Message_File_Library[10];
       int  Current_Storage_Size;
       int  Increment_Size;
       int  Number_of_Increments;
       int  Maximum_Increments;
       int  Coded_Character_Set_ID;
       char Text_Description[50];
    } Qmh_Rmfa_RMFA0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
