 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/LEOD                                       */
 /*                                                                */
 /* Descriptive Name: LE Program or Procedure Call APIs            */
 /*                                                                */
 /* 5716-SS1, 5763-SS1, 5769-SS1, 5722-SS1                         */
 /* (C) Copyright IBM Corp. 1993,2001                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Header Files Included: LETYPE                                  */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function List: CEETSTA                                         */
 /*                CEEDOD                                          */
 /*                CEEGSI                                          */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON	      LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2           2D30  930526 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef __leod_h
#define __leod_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

#include <letype.h>

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(P128)
#endif


  /*-------------------------------------------------------------------
   | Descriptor type constants
   *-------------------------------------------------------------------
  */

  #define descEsc            0x01   /* escape                            */
  #define descElmt           0x02   /* element descriptor                */
  #define descArray          0x03   /* array descriptor                  */
  #define descStruct         0x04   /* structure descriptor              */

  /* Descriptor data type constants */
  #define typeEsc            0x01   /* an element descriptor type which  */
                                    /* is not one of the data types      */
                                    /* defined below                     */
  #define typeChar           0x02   /* a string of SBCS characters       */
  #define typeCharZ          0x03   /* a 0x00 terminated string of SBCS  */
                                    /* characters                        */
  #define typeCharV2         0x04   /* a string of SBCS characters       */
                                    /* prefixed by an unsigned 2-byte    */
                                    /* binary length                     */
  #define typeCharV4         0x05   /* a string of SBCS characters       */
                                    /* prefixed by an unsigned 4-byte    */
                                    /* binary length                     */
  #define typeBit            0x06   /* a string of bits                  */
  #define typeBitV2          0x07   /* a string of bits prefixed by an   */
                                    /* unsigned 2-byte binary length     */
  #define typeBitV4          0x08   /* a string of bits prefixed by an   */
                                    /* unsigned 4-byte binary length     */
  #define typeGChar          0x09   /* a string of DBCS characters       */
  #define typeGCharZ         0x0A   /* a 0x0000 terminated string of     */
                                    /* DBCS characters                   */
  #define typeGCharV2        0x0B   /* a string of DBCS characters       */
                                    /* prefixed by an unsigned 2-byte    */
                                    /* binary length                     */
  #define typeGCharV4        0x0C   /* a string of DBCS characters       */
                                    /* prefixed by an unsigned 4-byte    */
                                    /* binary length                     */
  #define typeSCharV2        0x5C   /* only used in struct descriptors   */
                                    /* for approximating VSTRING.        */
  #define typeSCharV4        0x5E   /* only used in struct descriptors   */
                                    /* for approximating VSTRING.        */


  /*-------------------------------------------------------------------
   |  CSC LE Operational Descriptor AWIs
   *-------------------------------------------------------------------
  */

  #ifdef __cplusplus
    extern "builtin"  {
  #else
    #pragma linkage(CEETSTA, builtin)
    #pragma linkage(CEEDOD, builtin)
    #pragma linkage(CEEGSI, builtin)
  #endif
  /* Test omitted parameters */
  void CEETSTA(_INT4 *, _INT4 *, _FEEDBACK *);

  /* Retrieve first five common fields of an OD */
  void CEEDOD(_INT4 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *,
              _INT4 *, _FEEDBACK *);

  /* Retrieve string information */
  void CEEGSI(_INT4 *, _INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  #ifdef __cplusplus
    }
  #endif

  #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(pop)
  #endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __leod_h */
