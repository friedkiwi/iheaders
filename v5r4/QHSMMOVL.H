 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHSMMOVL                                   */
 /*                                                                */
 /* Descriptive Name: Move Library to ASP (QHSMMOVL) API.          */
 /*                                                                */
 /* 5769-SS1,5722-SS1                                              */
 /* (C) Copyright IBM Corp. 1998,2002                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Prototypes for call API QHSMMOVL.                 */
 /*                                                                */
 /* Header Files Included: None                                    */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype: QHSMMOVL                                   */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3664493     4D30  980218 KLG       New Include           */
 /* $A1= D98212.6    v5r1m0 010400 gchaney:  Teraspace stage 2     */
 /* $B0= D98416.58   v5r2m0 010819 LAW:      Add parms for         */
 /*                                          auxiliary storage     */
 /*                                          pool device name      */
 /*                                          support               */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef QHSMMOVL_h
 #define QHSMMOVL_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/



 /******************************************************************/
 /*  Prototype for QHSMMOVL API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QHSMMOVL,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QHSMMOVL (char *,        /* Library name                    */
                int  *,        /* Target auxiliary storage pool
                                  (ASP) number               @B0C */
                char *,        /* Check Dependencies              */
                void *,        /* Error code                 @B0C */
                ...);          /* Optional Parameter Group 1:
                                  void *   Target auxiliary storage
                                  pool (ASP) device name
                                  void *   Source auxiliary storage
                                  pool (ASP) number
                                  void *   Source auxiliary storage
                                  pool (ASP) device name      @B0A */


 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

#endif
