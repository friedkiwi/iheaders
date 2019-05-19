 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTQCVRT                                    */
 /*                                                                */
 /* Descriptive Name: Convert Graphic Character Strings.           */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Convert Graphic Character Strings API is used */
 /*              by any program that needs an application          */
 /*              programming interface to convert a graphic        */
 /*              character data string of one type and one CCSID   */
 /*              to another string type and CCSID.                 */
 /*                                                                */
 /* Header Files Included: H/QTQCVRT                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTQCVRT                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 MOREY:    New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTQCVRT_h
 #define QTQCVRT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 #ifdef __ILEC400__
      #pragma linkage (QTQCVRT,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QTQCVRT API.                             */
 /******************************************************************/
 void QTQCVRT (int *,            /* CCSID1                         */
               int *,            /* ST1                            */
               char *,           /* S1                             */
               int *,            /* L1                             */
               int *,            /* CCSID2                         */
               int *,            /* ST2                            */
               int *,            /* GCCASN                         */
               int *,            /* L2                             */
               char *,           /* S2                             */
               int *,            /* L3                             */
               int *,            /* L4                             */
               void *);          /* FB                             */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
