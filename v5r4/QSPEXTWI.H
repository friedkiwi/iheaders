 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPEXTWI                                   */
 /*                                                                */
 /* Descriptive Name: Extract Writer Status                        */
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
 /* Description: The Extract Writer Status API:                    */
 /*              - Is used by a driver program to access           */
 /*                information about the writer, the spooled file  */
 /*                the writer is processing, and to determine      */
 /*                if the information for the file has been        */
 /*                changed.  A call to this API should be made by a*/
 /*                driver program after each buffer is sent to the */
 /*                printer.                                        */
 /*                                                                */
 /* Header Files Included: H/QSPEXTWI                              */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qsp_EXTW0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QSPEXTWI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710       3D60  950110 RJOHNSON: New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSPEXTWI_h
#define QSPEXTWI_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPEXTWI,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QSPEXTWI                                  */
/********************************************************************/

void QSPEXTWI(void *,               /* Receiver Variable             */
              int,                  /* Receiver Variable length.     */
              char *,               /* Format of information returned*/
              char *,               /* Writer handle.                */
              char *,               /* Spooled file handle.          */
              void *);              /* Error code                    */

/********************************************************************/
/*  Structure for EXTW0100 format                                   */
/********************************************************************/

typedef _Packed struct Qsp_EXTW0100
{
     int  Bytes_Returned;
     int  Bytes_Available;
     int  Number_Of_Additional_Copies;
     int  Reposition_Page_Number;
     char Stop_Page_End;
     char Stop_End_Of_Cpy;
     char Stop_Page_End_Allow_Restart;
     char Stop_End_Of_Cpy_Allow_Restart;
     char Stop_Page_End_File_Restarted;
     char File_Held_Or_Deleted;
} Qsp_EXTW0100_t;
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
