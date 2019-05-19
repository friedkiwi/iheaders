 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOKCHGDP                                   */
 /*                                                                */
 /* Descriptive Name: Change a Department in the System Directory  */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Change Department API has the ability to      */
 /*              change a department without going through the Work*/
 /*              with Directory interface.                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QOKCHGDP                              */
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

 #ifndef QOKCHGDP_h
 #define QOKCHGDP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Office API QOKCHGDP OPM                  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QOKCHGDP,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QOKCHGDP (char *,           /* Department                    */
                char *,           /* Title                         */
                char *,           /* Manager                       */
                char *,           /* Reports to Department         */
                char *,           /* New Department                */
                char *,           /* Allow Duplicates              */
                void *);          /* Error code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
