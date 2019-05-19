 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFRDDR                                    */
 /*                                                                */
 /* Descriptive Name: Read Directory Entries API.                  */
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
 /* Description: The Read Directory Entries API reads one or more  */
 /*              directory entries from a directory opened with    */
 /*              the Open Directory API.                           */
 /*                                                                */
 /* Header Files Included: H/QHF                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qhf_Data_Buffer_t                              */
 /*                                                                */
 /* Function Prototype List: QHFRDDR                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QHFRDDR_h
 #define QHFRDDR_h

 /******************************************************************/
 /* Includes for structures used by API                            */
 /******************************************************************/
 #include <qhf.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QHFRDDR API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFRDDR,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFRDDR(void *,            /* Open directory handle          */
              void *,            /* Data buffer                    */
              int,               /* Data buffer length             */
              int,               /* Num directory entries to read  */
              int *,             /* Number directory entries read  */
              int *,             /* Length of data returned        */
              void *);           /* Error code                     */

 /******************************************************************/
 /* Type Definition for the data buffer.                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qhf_Data_Buffer
    {
       int  Number_Of_Entries_Rtnd;
       int  Offset_First_Entry;
     /*int  Offset_Remaining_Entries[];*/ /*Varying length         */
     /*Qhf_Attr_Info_Tbl_t Array[];*/     /*Varying length         */
    } Qhf_Data_Buffer_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
