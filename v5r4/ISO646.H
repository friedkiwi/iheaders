#ifndef  __iso646
  #define __iso646 1

#if (! defined (__cplusplus)) || (__IBMCPP__ < 500)

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif
 /********************************************************************/
 /*                                                                  */
 /*  Header File Name: iso646.h                                      */
 /*                                                                  */
 /*  Header File Description: Alternative spellings                  */
 /*                                                                  */
 /*  5722-SS1 (C) Copyright IBM Corp. 2001, 2004                     */
 /*  All rights reserved.                                            */
 /*  US Government Users Restricted Rights -                         */
 /*  Use, duplication or disclosure restricted                       */
 /*  by GSA ADP Schedule Contract with IBM Corp.                     */
 /*                                                                  */
 /*  Licensed Materials-Property of IBM                              */
 /*                                                                  */
 /*                                                                  */
 /*  CHANGE ACTIVITY:                                                */
 /*  Flag Reason   Level  Date   Pgmr      Change description        */
 /*  ---- -------- ------ -----  --------- --------------------------*/
 /*  $A0= D97633   V5R1   000305 ROCH      Created                   */
 /*                                                                  */
 /*  End CFD List.                                                   */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /*                                                                  */
 /*  END CHANGE ACTIVITY                                             */
 /********************************************************************/

   #define  or      ||
   #define  bitor   |
   #define  or_eq   |=
   #define  xor     ^
   #define  xor_eq  ^=
   #define  compl   ~
   #define  and     &&
   #define  bitand  &
   #define  and_eq  &=
   #define  not     !
   #define  not_eq  !=


 #ifdef __cplusplus
  #pragma info(restore)
  }
 #else
  #pragma checkout(resume)
 #endif

#endif          /* (! defined (__cplusplus)) || (__IBMCPP__ < 500) */

#endif          /* #ifndef __iso646  */
