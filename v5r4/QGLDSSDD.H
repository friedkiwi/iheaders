 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* File Name: QGLDSSDD                                            */
 /*                                                                */
 /* Descriptive Name: System Distribution Directory to LDAP        */
 /*                   synchronization API                          */
 /*                                                                */
 /* 5769-SS1,5722-SS1  (C) Copyright IBM Corp. 1997,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: This API will manage the synchronization of the   */
 /*              entries in the System Distribution Directory to   */
 /*              an LDAP directory.                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QGLDSSDD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE   PGMR      CHANGE DESCRIPTION   */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95431       4D30  971203  ROCH:     New Include.         */
 /* $A1= P3661686     4D30  980107  V2KEA41:  Add 2 input parms    */
 /* $A2= P3662886     4D30  980121  V2KEA41:  Add 2 input parms    */
 /*                                           (keyring file)       */
 /* $A3= D98212.2    v5r1m0 010300 gchaney:   Teraspace stage 2    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*                                                                */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGLDSSDD_h
 #define QGLDSSDD_h

 #if (__OS400_TGTVRM__>=510)                                /* @A3A*/
     #pragma datamodel(P128)                                /* @A3A*/
 #endif                                                     /* @A3A*/

 /******************************************************************/
 /* Prototype for calling the "SDD to LDAP" API QGLDSSDD           */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGLDSSDD,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QGLDSSDD ( char *,          /* Input option                 */
                 void *,          /* Distinguished Name for bind  */
                 void *,          /* Password for bind            */
                 void *,          /* Key ring file name           */
                 void *,          /* Key ring file password       */
                 void * );        /* Error code                   */

 #if (__OS400_TGTVRM__>=510)                                /* @A3A*/
     #pragma datamodel(pop)                                 /* @A3A*/
 #endif                                                     /* @A3A*/

 #endif
