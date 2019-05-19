 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPBSEPP                                   */
 /*                                                                */
 /* Descriptive Name: Build separator pages                        */
 /*                                                                */
 /* 5716-SS1, 5722-SS1  (C) Copyright IBM Corp. 1996,2001          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Build separator pages API                     */
 /*              - Builds a system separator page to be printed    */
 /*                with a spooled file                             */
 /*                                                                */
 /* Header Files Included: none                                    */
 /*                                                                */
 /* Macros List: none                                              */
 /*                                                                */
 /* Structure List: Qsp_SEPP0100                                   */
 /*                                                                */
 /* Function Prototype List: QSPBSEPP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSPBSEPP_h
#define QSPBSEPP_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPBSEPP,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QSPBSEPP                                  */
/********************************************************************/

void QSPBSEPP(void *,               /* Receiver variable             */
              int,                  /* Length of receiver variable   */
              char *,               /* Format of information returned*/
              char *,               /* Printer device name           */
              char *,               /* Printer data stream type      */
              char *,               /* Type of separator page        */
              void *,               /* Separator pgm qualified name  */
              void *,               /* Writer handle                 */
              void *,               /* Spooled file handle           */
              int,                  /* Drawer for separator page     */
              void *);              /* Error code                    */

/*********************************************************************/
/* Structure for format SEPP0100                                     */
/****                                                                */
/*  NOTE:  The following type definition only defines the fixed      */
/*         portion of the format.  Any varying length fields must    */
/*         be defined by the user.                                   */
/*********************************************************************/
typedef _Packed struct Qsp_SEPP0100
{
     int  Bytes_Return;
     int  Bytes_Avail;
     int  Offset_To_Separator;
     int  Size_Of_Separator;
     /*char  Separator_Data[];*/  /* Varying length                */
} Qsp_SEPP0100_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
