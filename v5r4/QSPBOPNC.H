 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPBOPNC                                   */
 /*                                                                */
 /* Descriptive Name: Build open time commands                     */
 /*                                                                */
 /* 5716-SS1, 5722-SS1 (C) Copyright IBM Corp. 1996,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Build open time commands API                  */
 /*              - Builds a set of open time commands which are    */
 /*                used to provide formatting for a spooled file   */
 /*                                                                */
 /* Header Files Included: none.                                   */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qsp_OPNC0100                                   */
 /*                                                                */
 /* Function Prototype List: QSPBOPNC                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710.1     3D60  941208 KJV     : New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSPBOPNC_h
#define QSPBOPNC_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPBOPNC,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QSPBOPNC                                  */
/********************************************************************/

void QSPBOPNC(void *,               /* Receiver variable             */
              int,                  /* Length of receiver variable   */
              char *,               /* Format of information returned*/
              char *,               /* Printer device name           */
              char *,               /* Printer data stream type      */
              void *,               /* Spooled file attributes       */
              void *);              /* Error code                    */

/*********************************************************************/
/* Structure for format OPNC0100                                     */
/****                                                                */
/*  NOTE:  The following type definition only defines the fixed      */
/*         portion of the format.  Any varying length fields must    */
/*         be defined by the user.                                   */
/*********************************************************************/
typedef _Packed struct Qsp_OPNC0100
{
     int  Bytes_Return;
     int  Bytes_Avail;
     int  Offset_To_Commands;
     int  Size_Of_Commands;
     /*char  Open_Commands[];*/   /* Varying length                */
} Qsp_OPNC0100_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
