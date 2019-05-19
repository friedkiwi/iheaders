 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRGFA1                                   */
 /*                                                                */
 /* Descriptive Name: Registration Facility APIs.                  */
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
 /* Description: APIs that are in the QUSRGFA1 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qusreg                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Formats stored in QUSREG Include)      */
 /*                                                                */
 /* Function Prototype List: QusRegisterExitPoint                  */
 /*                          QusDeregisterExitPoint                */
 /*                          QusAddExitProgram                     */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940327 LUPA:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QUSRGFA1_h
 #define QUSRGFA1_h

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qus.h>
 #include <qusreg.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Register Exit Point API.                 */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QusRegisterExitPoint,OS,nowiden)
 #else
    extern "C"
 #endif
    void QusRegisterExitPoint
                          (void *,   /* Exit Point Name            */
                           char *,   /* Exit Point Format Name     */
                           void *,   /* Exit Point Controls        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Deregister Exit Point API.               */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QusDeregisterExitPoint,OS,nowiden)
 #else
    extern "C"
 #endif
    void QusDeregisterExitPoint
                          (void *,   /* Exit Point Name            */
                           char *,   /* Exit Point Format Name     */
                           void *);  /* Error Code                 */


 /******************************************************************/
 /* Prototype for calling Add Exit Program API.                    */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QusAddExitProgram,OS,nowiden)
    void QusAddExitProgram
                          (void *,   /* Exit Point Name            */
                           char *,   /* Exit Point Format Name     */
                           int   ,   /* Exit Program Number        */
                           void *,   /* Qualified Exit Prog Name   */
                           void *,   /* Exit Program Data          */
                           int   ,   /* Length Exit Program Data   */
                           void *,   /* Exit Program Attributes    */
                           void *);  /* Error Code                 */
 #else
    extern "C"
    void QusAddExitProgram
                          (void *,   /* Exit Point Name            */
                           char *,   /* Exit Point Format Name     */
                           int  *,   /* Exit Program Number        */
                           void *,   /* Qualified Exit Prog Name   */
                           void *,   /* Exit Program Data          */
                           int  *,   /* Length Exit Program Data   */
                           void *,   /* Exit Program Attributes    */
                           void *);  /* Error Code                 */
 #endif

 /******************************************************************/
 /* Prototype for calling Remove Exit Program API.                 */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QusRemoveExitProgram,OS,nowiden)
    void QusRemoveExitProgram
                          (void *,   /* Exit Point Name            */
                           char *,   /* Exit Point Format Name     */
                           int   ,   /* Exit Program Number        */
                           void *);  /* Error Code                 */
 #else
    extern "C"
    void QusRemoveExitProgram
                          (void *,   /* Exit Point Name            */
                           char *,   /* Exit Point Format Name     */
                           int  *,   /* Exit Program Number        */
                           void *);  /* Error Code                 */
 #endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
