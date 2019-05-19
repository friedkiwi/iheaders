 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOKADDDP                                   */
 /*                                                                */
 /* Descriptive Name: Add Department to the System Directory       */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Add Department API has the ability to add a   */
 /*              department to the directory without having to go  */
 /*              through the Work with Directory interface.        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QOKADDDP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3632703     3P10  961106 NRM  :    New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*                                                                */
 /*  Author Legend:                                                */
 /*   NRM   - Norka R. Morales (v2kea41@rchland, Keane Inc.)       */
 /*                                                                */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOKADDDP_h
 #define QOKADDDP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Office API QOKADDDP OPM                  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QOKADDDP,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QOKADDDP (char *,           /* Department                    */
                char *,           /* Title                         */
                char *,           /* Manager                       */
                char *,           /* Reports to Department         */
                char *,           /* Allow Duplicates              */
                void *);          /* Error code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
