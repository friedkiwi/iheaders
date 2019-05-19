/*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/LEAWI                                      */
 /*                                                                */
 /* Descriptive Name: Interfaces to The LE Services                */
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
 /*                        LEHEAP                                  */
 /*                        LEENV                                   */
 /*                        LECOND                                  */
 /*                        LEMATH                                  */
 /*                        LEOD                                    */
 /*                        LEDATE                                  */
 /*                        LEMSG                                   */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function List: None.                                           */
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
#ifndef __leawi_h
#define __leawi_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

#include <letype.h>
#include <leheap.h>
#include <leenv.h>
#include <lecond.h>
#include <lemath.h>
#include <leod.h>
#include <ledate.h>
#include <lemsg.h>

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __leawi_h */
