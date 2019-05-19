 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QDMRTVFO                                     */
 /*                                                                */
 /* Descriptive Name: Retrieve File Override Information           */
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
 /* Description: The Retrieve File Override Information API returns*/
 /*              the name of the file, library, member and final   */
 /*              type of override that result from processing      */
 /*              TOFILE or MBR overrides for the user specified    */
 /*              file name.                                        */
 /*                                                                */
 /* Header Files Included: h/qusec                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdm_OVRL0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QDMRTVFO                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940118 LWMCEWEN: New Include           */
 /* $01= P3985228     3D60  950315 BRATAGER: Change lude           */
 /* $02= D98212.1    v5r1m0 112199 gchaney:  Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QDMRTVFO_h
#define QDMRTVFO_h

#ifndef Qus_Error_Code_h
 #include <qusec.h>                                         /* @01C*/

#endif

#if (__OS400_TGTVRM__>=510)                               /* @02A */
    #pragma datamodel(P128)                               /* @02A */
#endif                                                    /* @02A */

/********************************************************************/
/*  Prototype for calling QDMRTVFO                                  */
/********************************************************************/

 #ifdef  __ILEC400__
       #pragma linkage (QDMRTVFO, OS,nowiden)
 #else
       extern "OS"
 #endif
void QDMRTVFO(void *,               /* Override information          */
              int,                  /* Length of override information*/
              char *,               /* Override information format   */
              char *,               /* Override information file name*/
              void *);              /* Error code                    */

/********************************************************************/
/*  Structure for OVRL0100 extract file override information.       */
/********************************************************************/


typedef _Packed struct Qdm_OVRL0100 {
       int Bytes_Returned;
       int Bytes_Available;
       char File_Name_Used[10];
       char Library_Name_Used[10];
       char Member_Name_Used[10];
       char Final_Override_Type[10];
     } Qdm_OVRL0100_t;

#if (__OS400_TGTVRM__>=510)                               /* @02A */
    #pragma datamodel(pop)                                /* @02A */
#endif                                                    /* @02A */

#endif
