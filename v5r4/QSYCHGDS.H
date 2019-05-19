 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYCHGDS                                   */
 /*                                                                */
 /* Descriptive Name: Change DST Profiles.                         */
 /*                                                                */
 /* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1998,2000          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: This module provides a callable API interface that*/
 /*          can be invoked by user programs to change the profile */
 /*          or password (or both) for DST profiles.              */
 /*                                                                */
 /* Header Files Included: H/QSYCHGDS                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QSYCHGDS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3652324     4D20  970820 ROCH:     New Include           */
 /* $A1= D98311       5D10  000903 ROCH:     Additional parms      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYCHGDS_h
 #define QSYCHGDS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYCHGDS                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYCHGDS,OS,nowiden)
  #else
       extern "OS"
  #endif

 void QSYCHGDS (char *,           /* Requesting DST profile        */
                char *,           /* Requesting DST profile password
                                                                   */
                char *,           /* DST profile to be changed     */
                char *,           /* New DST profile               */
                char *,           /* New DST profile password      */
                void *,           /* Error code                    */
                ...);             /* Optional parameters:
                                     Length of requesting DST profile
                                     Length of requesting DST profile
                                        password
                                     CCSID of requesting DST profile
                                        password
                                     Length of new DST profile
                                     Length of new DST profile
                                         password
                                     CCSID of new DST profile
                                         password                  */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
