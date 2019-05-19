 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/QTARJMA                                      */
 /*                                                                  */
 /* Descriptive Name: Retrieve Job Media Library Attributes          */
 /*                                                                  */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1997                      */
 /* All rights reserved.                                             */
 /* US Government Users Restricted Rights -                          */
 /* Use, duplication or disclosure restricted                        */
 /* by GSA ADP Schedule Contract with IBM Corp.                      */
 /*                                                                  */
 /* Licensed Materials-Property of IBM                               */
 /*                                                                  */
 /*                                                                  */
 /* Description: The Retrieve Job Media Library Attributes           */
 /*              (QTARJMA) API provides the capability of            */
 /*              retrieving a job's media library (MLB)              */
 /*              attribute information.                              */
 /*                                                                  */
 /* Header Files Included: None.                                     */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List: Qta_RJMA0100_t                                   */
 /*                 Qta_Rtv_Device_Entry_t                           */
 /*                                                                  */
 /* Function Prototype List: QTARJMA                                 */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
 /* ---- ------------ ----- ------ --------- ----------------------  */
 /* $A0= D95561       4D30  970905 ROCH    : New Include             */
 /* $PC= P3664521     4D30  980205 ROCH    : Add Reserved3           */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/

 #ifndef QTARJMA_h
 #define QTARJMA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Prototype for calling Retrieve MLB Attributes (QTARJMA)          */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARJMA,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QTARJMA ( void *,             /* Receiver variable             */
                int,                /* Length of receiver variable   */
                char *,             /* Format name                   */
                void *,             /* Qualified job name            */
                void *,             /* Internal job identifier       */
                void *);            /* Error code                    */

 /********************************************************************/
 /* Type Definition for the RJMA0100 format.                         */
 /********************************************************************/
 typedef _Packed struct Qta_Rtv_Device_Entry
    {
       char Device_Name[10];
       char Reserved1[6];
       int  Resource_Allocation_Priority;
       int  Initial_Mount_Wait;
       int  EOV_Mount_Wait;
       char Reserved2[4];
    } Qta_Rtv_Device_Entry_t;

 typedef _Packed struct Qta_RJMA0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_To_Device_List;
       int  Number_Of_Device_Entries;
       int  Length_Of_Device_Entry;
       char Reserved3[12];
     /*Qta_Rtv_Device_Entry_t Device_Entry;*/ /* Varying length       */
    } Qta_RJMA0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
