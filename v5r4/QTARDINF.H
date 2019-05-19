 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTARDINF                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Device Information QTARDINF desc    */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Device Information  (QTARDINF) API   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTARDINF                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  P3634292     3P70  112596 HOOVEY    Creation              */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTARDINF_h
 #define QTARDINF_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Retrieve Device Capabilities (QTARDINF)  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARDINF,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTARDINF (char *,            /* Receiver variable            */
                int,               /* Len of receiver variable     */
                char *,            /* Device name                  */
                char *,            /* Format name                  */
                void *);           /* Error code                   */


 /******************************************************************/
 /* Type Definition for the TADS0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_TADS0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Number_Active;

    } Qta_TADS0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
