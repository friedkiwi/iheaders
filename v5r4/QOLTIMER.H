 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOLTIMER                                   */
 /*                                                                */
 /* Descriptive Name: Set Timer                                    */
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
 /* Description: The Set Timer API either sets or cancels a timer. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QOLTIMER                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 VINING:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOLTIMER_h
 #define QOLTIMER_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Set Timer API QOLTIMER                   */
 /******************************************************************/

 #ifdef __ILEC400__
      #pragma linkage (QOLTIMER,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QOLTIMER (int  *,          /* Return Code                    */
                int  *,          /* Reason Code                    */
                char *,          /* Timer Set                      */
                char *,          /* Timer To Cancel                */
                void *,          /* Qualified Queue Name           */
                char *,          /* Operation                      */
                int  *,          /* Interval                       */
                int  *,          /* Establish Count                */
                int  *,          /* Key Length                     */
                void *,          /* Key Value                      */
                void *,          /* User Data                      */
                ...   );         /* Optional Parameters
                                    Optional Parameter Group 1
                char *              Queue Type                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
