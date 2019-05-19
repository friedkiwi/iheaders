 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/LEDATE                                     */
 /*                                                                */
 /* Descriptive Name: LE Date and Time APIs                        */
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
 /*                                                                */
 /* Description: This file includes all the header files that      */
 /*              enable the LE Services.                           */
 /*                                                                */
 /* Header Files Included: LETYPE                                  */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function List: CEEDAYS                                         */
 /*                CEEDATE                                         */
 /*                CEESECS                                         */
 /*                CEEDATM                                         */
 /*                CEEISEC                                         */
 /*                CEESECI                                         */
 /*                CEEDYWK                                         */
 /*                CEEFMTM                                         */
 /*                CEEFMDT                                         */
 /*                CEEFMDA                                         */
 /*                CEEUTC                                          */
 /*                CEEGMT                                          */
 /*                CEEUTCO                                         */
 /*                CEELOCT                                         */
 /*                CEESCEN                                         */
 /*                CEEQCEN                                         */
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
#ifndef __ledate_h
#define __ledate_h

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
   |  CSC LE Date/Time AWIs
   *---------------------------------------------------------------------
  */
  void CEEDAYS( char *, char *, _INT4 *, _FEEDBACK *);
  #pragma descriptor ( void CEEDAYS( "", "", void, void ) )

  void CEEDATE( _INT4 *, char *, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEDATE( void, "", "", void ) )

  void CEESECS( char *, char *, _FLOAT8 *, _FEEDBACK *);
  #pragma descriptor ( void CEESECS( "", "", void, void ) )

  void CEEDATM( _FLOAT8 *, char *, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEDATM( void, "", "", void ) )

  void CEEISEC( _INT4 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *,
                _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEESECI( _FLOAT8 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *,
                _INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  void CEEDYWK( _INT4 *, _INT4 *, _FEEDBACK *);
  void CEEFMTM( _CHAR2, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEFMTM( void, "", void ) )

  void CEEFMDT( _CHAR2, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEFMDT( void, "", void ) )

  void CEEFMDA( _CHAR2, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEFMDA( void, "", void ) )

  void CEEUTC ( _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEEGMT ( _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEEUTCO( _INT4 *, _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEELOCT( _INT4 *, _FLOAT8 *, _CHAR23, _FEEDBACK *);
  void CEESCEN( _INT4 *, _FEEDBACK *);
  void CEEQCEN( _INT4 *, _FEEDBACK *);

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __ledate_h */
