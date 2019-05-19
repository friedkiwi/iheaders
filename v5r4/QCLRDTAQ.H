 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCLRDTAQ                                   */
 /*                                                                */
 /* Descriptive Name: Clear Data Queue                             */
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
 /* Description: The Clear Data Queue API clears all data from the */
 /*              specified data queue.                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QCLRDTAQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /* $A1= D95775       4D30  971203 LIGGETT:  Add optional parms    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QCLRDTAQ_h
 #define QCLRDTAQ_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QCLRDTAQ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QCLRDTAQ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QCLRDTAQ(char *,           /* Data queue name                */
               char *,           /* Library name               @A1C*/
                   ...);         /* Optional parameter group 1:
                                     char *        Key order
                                     _Decimal(3,0)  Length of key
                                                      data
                                     void *        Key data
                                     void *        Error code  @A1A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
