 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/LEMATH                                     */
 /*                                                                */
 /* Descriptive Name: LE Math APIs                                 */
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
 /* Function List: CEERAN0                                         */
 /*                CEERAN0                                         */
 /*                CEESSLOG                                        */
 /*                CEESDLOG                                        */
 /*                CEESTLOG                                        */
 /*                CEESELOG                                        */
 /*                CEESSLG1                                        */
 /*                CEESDLG1                                        */
 /*                CEESSLG2                                        */
 /*                CEESDLG2                                        */
 /*                CEESSEXP                                        */
 /*                CEESDEXP                                        */
 /*                CEESTEXP                                        */
 /*                CEESEEXP                                        */
 /*                CEESIXPI                                        */
 /*                CEESSXPI                                        */
 /*                CEESDXPI                                        */
 /*                CEESTXPI                                        */
 /*                CEESEXPI                                        */
 /*                CEESJXPJ                                        */
 /*                CEESSXPJ                                        */
 /*                CEESDXPJ                                        */
 /*                CEESTXPJ                                        */
 /*                CEESEXPJ                                        */
 /*                CEESSXPS                                        */
 /*                CEESDXPD                                        */
 /*                CEESTXPT                                        */
 /*                CEESEXPE                                        */
 /*                CEESSASN                                        */
 /*                CEESDASN                                        */
 /*                CEESSACS                                        */
 /*                CEESDACS                                        */
 /*                CEESSATN                                        */
 /*                CEESDATN                                        */
 /*                CEESTATN                                        */
 /*                CEESEATN                                        */
 /*                CEESSAT2                                        */
 /*                CEESDAT2                                        */
 /*                CEESSSIN                                        */
 /*                CEESDSIN                                        */
 /*                CEESTSIN                                        */
 /*                CEESESIN                                        */
 /*                CEESSCOS                                        */
 /*                CEESDCOS                                        */
 /*                CEESTCOS                                        */
 /*                CEESECOS                                        */
 /*                CEESSTAN                                        */
 /*                CEESDTAN                                        */
 /*                CEESTTAN                                        */
 /*                CEESETAN                                        */
 /*                CEESSCTN                                        */
 /*                CEESDCTN                                        */
 /*                CEESSSNH                                        */
 /*                CEESDSNH                                        */
 /*                CEESTSNH                                        */
 /*                CEESESNH                                        */
 /*                CEESSCSH                                        */
 /*                CEESDCSH                                        */
 /*                CEESTCSH                                        */
 /*                CEESECSH                                        */
 /*                CEESSTNH                                        */
 /*                CEESDTNH                                        */
 /*                CEESTTNH                                        */
 /*                CEESETNH                                        */
 /*                CEESSATH                                        */
 /*                CEESDATH                                        */
 /*                CEESTATH                                        */
 /*                CEESEATH                                        */
 /*                CEESSSQT                                        */
 /*                CEESDSQT                                        */
 /*                CEESTSQT                                        */
 /*                CEESESQT                                        */
 /*                CEESSERF                                        */
 /*                CEESDERF                                        */
 /*                CEESSERC                                        */
 /*                CEESDERC                                        */
 /*                CEESSGMA                                        */
 /*                CEESDGMA                                        */
 /*                CEESSLGM                                        */
 /*                CEESDLGM                                        */
 /*                CEESIABS                                        */
 /*                CEESJABS                                        */
 /*                CEESSABS                                        */
 /*                CEESDABS                                        */
 /*                CEESTABS                                        */
 /*                CEESEABS                                        */
 /*                CEESIMOD                                        */
 /*                CEESJMOD                                        */
 /*                CEESSMOD                                        */
 /*                CEESDMOD                                        */
 /*                CEESSINT                                        */
 /*                CEESDINT                                        */
 /*                CEESTIMG                                        */
 /*                CEESEIMG                                        */
 /*                CEESTCJG                                        */
 /*                CEESECJG                                        */
 /*                CEESSNWN                                        */
 /*                CEESDNWN                                        */
 /*                CEESSNIN                                        */
 /*                CEESSNJN                                        */
 /*                CEESDNIN                                        */
 /*                CEESDNJN                                        */
 /*                CEESIDIM                                        */
 /*                CEESJDIM                                        */
 /*                CEESSDIM                                        */
 /*                CEESDDIM                                        */
 /*                CEESISGN                                        */
 /*                CEESJSGN                                        */
 /*                CEESSSGN                                        */
 /*                CEESDSGN                                        */
 /*                CEESTMLT                                        */
 /*                CEESEMLT                                        */
 /*                CEESTDVD                                        */
 /*                CEESEDVD                                        */
 /*                CEE4JNTS                                        */
 /*                CEE4JSTN                                        */
 /*                CEE4SIFAC                                       */
 /*                CEE4SJFAC                                       */
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
#ifndef __lemath_h
#define __lemath_h

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


  /*---------------------------------------------------------------------
   |  CSC LE math AWIs
   *---------------------------------------------------------------------
  */

  /* Additional services */
  void CEERAN0( _INT4 *, _FLOAT8 *, _FEEDBACK *);

  /* Logarithm Base e function */
  void CEESSLOG(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDLOG(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTLOG(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESELOG(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Logarithm Base 10 function */
  void CEESSLG1(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDLG1(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Logarithm Base 2 function */
  void CEESSLG2(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDLG2(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Exponential (base e) function */
  void CEESSEXP(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDEXP(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTEXP(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEEXP(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Exponentiation (x**y) function */
  void CEESIXPI(_INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  void CEESSXPI(_FLOAT4 *, _INT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDXPI(_FLOAT8 *, _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTXPI(_COMPLEX8 *, _INT4 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEXPI(_COMPLEX16 *, _INT4 *, _COMPLEX16 *, _FEEDBACK *);
  void CEESJXPJ(_INT8 *, _INT8 *, _INT8 *, _FEEDBACK *);
  void CEESSXPJ(_FLOAT4 *, _INT8 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDXPJ(_FLOAT8 *, _INT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTXPJ(_COMPLEX8 *, _INT8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEXPJ(_COMPLEX16 *, _INT8 *, _COMPLEX16 *, _FEEDBACK *);
  void CEESSXPS(_FLOAT4 *, _FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDXPD(_FLOAT8 *, _FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTXPT(_COMPLEX8 *, _COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEXPE(_COMPLEX16 *, _COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Arcsine function */
  void CEESSASN(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDASN(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Arccosine function */
  void CEESSACS(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDACS(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Arctangent function */
  void CEESSATN(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDATN(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTATN(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEATN(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Arctangent2 function */
  void CEESSAT2(_FLOAT4 *, _FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDAT2(_FLOAT8 *, _FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Sine function */
  void CEESSSIN(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDSIN(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTSIN(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESESIN(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Cosine function */
  void CEESSCOS(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDCOS(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTCOS(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESECOS(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Tangent function */
  void CEESSTAN(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDTAN(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTTAN(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESETAN(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Cotangent function */
  void CEESSCTN(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDCTN(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Hyperbolic Sine function */
  void CEESSSNH(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDSNH(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTSNH(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESESNH(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Hyperbolic Cosine function */
  void CEESSCSH(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDCSH(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTCSH(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESECSH(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Hyperbolic Tangent function */
  void CEESSTNH(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDTNH(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTTNH(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESETNH(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Hyperbolic Arctangent function */
  void CEESSATH(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDATH(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTATH(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEATH(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Square Root function */
  void CEESSSQT(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDSQT(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTSQT(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESESQT(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Error function */
  void CEESSERF(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDERF(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESSERC(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDERC(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Gamma function */
  void CEESSGMA(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDGMA(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Log Gamma function */
  void CEESSLGM(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDLGM(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Absolute function */
  void CEESIABS(_INT4 *, _INT4 *, _FEEDBACK *);
  void CEESJABS(_INT8 *, _INT8 *, _FEEDBACK *);
  void CEESSABS(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDABS(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);
  void CEESTABS(_COMPLEX8 *, _FLOAT4 *, _FEEDBACK *);
  void CEESEABS(_COMPLEX16 *, _FLOAT8 *, _FEEDBACK *);

  /* Modular function */
  void CEESIMOD(_INT4 *x, _INT4 *y, _INT4 *, _FEEDBACK *);
  void CEESJMOD(_INT8 * x, _INT8 * y, _INT8 *, _FEEDBACK *);
  void CEESSMOD(_FLOAT4 *, _FLOAT4 *y, _FLOAT4 *, _FEEDBACK *);
  void CEESDMOD(_FLOAT8 *, _FLOAT8 *y, _FLOAT8 *, _FEEDBACK *);

  /* Truncation function */
  void CEESSINT(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDINT(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Imaginary part of Complex */
  void CEESTIMG(_COMPLEX8 *, _FLOAT4 *, _FEEDBACK *);
  void CEESEIMG(_COMPLEX16 *, _FLOAT8 *, _FEEDBACK *);

  /* Conjugate of Complex */
  void CEESTCJG(_COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESECJG(_COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Nearest Whole Number */
  void CEESSNWN(_FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDNWN(_FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Nearest Integer */
  void CEESSNIN(_FLOAT4 *, _INT4 *, _FEEDBACK *);
  void CEESSNJN(_FLOAT4 *, _INT8 *, _FEEDBACK *);
  void CEESDNIN(_FLOAT8 *, _INT4 *, _FEEDBACK *);
  void CEESDNJN(_FLOAT8 *, _INT8 *, _FEEDBACK *);

  /* Positive Difference */
  void CEESIDIM(_INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  void CEESJDIM(_INT8 *, _INT8 *, _INT8 *, _FEEDBACK *);
  void CEESSDIM(_FLOAT4 *, _FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDDIM(_FLOAT8 *, _FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Transfer of Sign */
  void CEESISGN(_INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  void CEESJSGN(_INT8 *, _INT8 *, _INT8 *, _FEEDBACK *);
  void CEESSSGN(_FLOAT4 *, _FLOAT4 *, _FLOAT4 *, _FEEDBACK *);
  void CEESDSGN(_FLOAT8 *, _FLOAT8 *, _FLOAT8 *, _FEEDBACK *);

  /* Floating Complex Multiply */
  void CEESTMLT(_COMPLEX8 *, _COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEMLT(_COMPLEX16 *, _COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* Floating Complex Divide */
  void CEESTDVD(_COMPLEX8 *, _COMPLEX8 *, _COMPLEX8 *, _FEEDBACK *);
  void CEESEDVD(_COMPLEX16 *, _COMPLEX16 *, _COMPLEX16 *, _FEEDBACK *);

  /* 64-Bit Conversion */
  void CEE4JNTS(_INT8 *, _INT4 *, _INT4 *, _CHAR *, _FEEDBACK *);
  void CEE4JSTN(_CHAR *, _INT4 *, _INT8 *, _FEEDBACK *);

  /*-------------------------------------------------------------------
   |  AS/400 ILE Specific math functions
   *-------------------------------------------------------------------
  */

  /* Factorial */
  void CEE4SIFAC(_INT4 *, _INT4 *, _FEEDBACK *);
  void CEE4SJFAC(_INT4 *, _INT8 *, _FEEDBACK *);

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __lemath_h */
