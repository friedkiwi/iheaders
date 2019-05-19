 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLIEPT                                     */
 /*                                                                */
 /* Descriptive Name: Access to entry point table.                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /*                                                                */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Include header file for access to APIs in the     */
 /*              entry point table (EPT).                          */
 /*                                                                */
 /* Warning:     When using this header file with other header     */
 /*              files from QSYSINC, this header file needs to     */
 /*              be included last.                                 */
 /*                                                                */
 /* Header Files Included: <pointer.h>                             */
 /*                        <qliepti.h>                             */
 /*                        <qusept.h>                              */
 /*                        <mih/sysept.h>                          */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28436       3D10  940522 CEMAROLT: New include           */
 /* $01= P3960223     3D10  940701 CEMAROLT: Changes for including */
 /*                                          header files when not */
 /*                                          ILE C.                */
 /* $02= P3960818     3D60  950120 CEMAROLT: Change to use sysept  */
 /*                                          and bcd header files. */
 /* $03= P3986355     3D60  950407 CEMAROLT: Change to use .h      */
 /*                                          version of header     */
 /*                                          files.                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLIEPT_h
  #define QLIEPT_h

  #include <pointer.h>
  #include <qliepti.h>
  #include <qusept.h>
  #include <mih/sysept.h>                                   /* @02A*/

 #endif
