 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOGCHGOE                                   */
 /*                                                                */
 /* Descriptive Name: Change Office Program                        */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Change Office Program API allows you to set   */
 /*              or change the document handling and document      */
 /*              conversion exit programs.                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QOGCHGOE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940431 GREILING: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOGCHGOE_h
 #define QOGCHGOE_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


 /******************************************************************/
 /* Prototype for calling Office API QTWAIDSP OPM                  */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QOGCHGOE,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QOGCHGOE (void *,           /* Document handling exit pgm    */
                char *,           /* Document handling mail flag   */
                void *,           /* Document conversion exit pgm  */
                void *,           /* Error code                    */
                ...);             /*  Optional Parameter Group:
                                     Active app enabler support
                                     Active mail handling support
                                     Active PCFILE id processing   */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
