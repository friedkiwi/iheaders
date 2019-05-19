 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/QTACJMA                                      */
 /*                                                                  */
 /* Descriptive Name: Change Job Media Library Attributes            */
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
 /* Description: The Change Job Media Library Attributes             */
 /*              (QTACJMA) API provides the capability of            */
 /*              changing a job's media library (MLB)                */
 /*              attribute information.                              */
 /*                                                                  */
 /* Header Files Included: None.                                     */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List: Qta_CJMA0100_t                                   */
 /*                 Qta_Chg_Device_Entry_t                           */
 /*                                                                  */
 /* Function Prototype List: QTACJMA                                 */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
 /* ---- ------------ ----- ------ --------- ----------------------  */
 /* $A0  D95561       4D30  971106 XZZ1017   New Include             */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/

 #ifndef QTACJMA_h
 #define QTACJMA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Prototype for calling Change MLB Attributes (QTACJMA)            */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTACJMA,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QTACJMA ( void *,             /* Attribute description         */
                int,                /* Length of attribute desc      */
                char *,             /* Format name                   */
                void *,             /* Qualified job name            */
                void *,             /* Internal job identifier       */
                void *);            /* Error code                    */

 /********************************************************************/
 /* Type Definition for the CJMA0100 format.                         */
 /********************************************************************/
 typedef _Packed struct Qta_Chg_Device_Entry
    {
       char Device_Name[10];
       char Reserved1[6];
       int  Resource_Allocation_Priority;
       int  Initial_Mount_Wait;
       int  EOV_Mount_Wait;
       char Reserved2[4];
    } Qta_Chg_Device_Entry_t;

 typedef _Packed struct Qta_CJMA0100
    {
       char Option[10];
       char Reserved1[2];
       int  NumberEntries;
     /*Qta_Chg_Device_Entry_t Device_Entry;*/  /* Varying length     */
    } Qta_CJMA0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
