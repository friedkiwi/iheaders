 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/UNICHAR                                    */
 /*                                                                */
 /* Descriptive Name: Get control value.                           */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: This file supports 3 functions.                   */
 /*                                                                */
 /*      UniQueryCompCharLen:                                      */
 /*       (Composite character sequence code element count)        */
 /*       function computes the number of the code elements        */
 /*       in the composite character sequence given.               */
 /*                                                                */
 /*      UniNextCompChar:                                          */
 /*       (Advance to next composite character sequence) function  */
 /*       locates the next non-combining character in the          */
 /*       composite character sequence given.                      */
 /*                                                                */
 /*      UniQueryCompChar:                                         */
 /*       (Number of composite character sequences) function       */
 /*       computes the number of composite character sequences     */
 /*       in the code element array given.                         */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Header Files Included: <stddef.h>                              */
 /*                                                                */
 /* Macros List:                                                   */
 /*    #define UNI_SUCCESS      0                                  */
 /*    #define UNI_UNSUPPORTED -1                                  */
 /*    #define UNI_NOMEMORY    -2                                  */
 /*    #define UNI_INVALID     -3                                  */
 /*    #define UNI_BADOBJ      -4                                  */
 /*    #define UNI_NOTOKEN     -5                                  */
 /*    #define UNI_NOMATCH     -6                                  */
 /*    #define UNI_BUFFER_FULL -7                                  */
 /*    #define UNI_RANGE       -8                                  */
 /*    #define UNI_NODATA      -9                                  */
 /*    #define UNI_COMP_FOUND  -10                                 */
 /*    #define UNI_BADADDR     -11                                 */
 /*                                                                */
 /* Structure List:                                                */
 /*              UniChar                                           */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*      UniQueryCompCharLen                                       */
 /*      UniNextCompChar                                           */
 /*      UniQueryCompChar                                          */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3982217     3D60  950216 GORUP     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef UNICHAR_h
 #define UNICHAR_h


  #include <stddef.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  typedef unsigned  short  UniChar;

  #define UNI_SUCCESS      0
  #define UNI_UNSUPPORTED -1
  #define UNI_NOMEMORY    -2
  #define UNI_INVALID     -3
  #define UNI_BADOBJ      -4
  #define UNI_NOTOKEN     -5
  #define UNI_NOMATCH     -6
  #define UNI_BUFFER_FULL -7
  #define UNI_RANGE       -8
  #define UNI_NODATA      -9
  #define UNI_COMP_FOUND  -10
  #define UNI_BADADDR     -11


 /******************************************************************/
 /* Prototype for calling the UniQueryCompCharLen function         */
 /******************************************************************/
 #ifdef __ILEC400__
   #pragma argument (UniQueryCompCharLen,OS,nowiden)
 #else
   extern "C"
 #endif
 int UniQueryCompCharLen(const void *,
                          const UniChar *,
                          size_t *);

 /******************************************************************/
 /* Prototype for calling the UniNextCompChar function             */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma argument (UniNextCompChar,OS,nowiden)
 #else
      extern "C"
 #endif
 int UniNextCompChar(const void * ,
                      UniChar * ,
                      UniChar **);

 /******************************************************************/
 /* Prototype for calling the UniQueryCompChar function            */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma argument (UniQueryCompChar,OS,nowiden)
 #else
    extern "C"
 #endif
 int UniQueryCompChar(const void *,
                      const UniChar *,
                      size_t *);


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif

