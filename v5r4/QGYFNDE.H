 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYFNDE                                    */
 /*                                                                */
 /* Descriptive Name: Find Entry Number in List                    */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1996,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYFNDE API returns the number of the entry   */
 /*              in a list of information for a given key value.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QGYFNDE                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960530 DPW       New Include           */
 /* $A1= P3626467     3P70  960920 BUDNIK:   Make entry number an  */
 /*                                          int * instead of an   */
 /*                                          int.                  */
 /* $A2= D98212.5    v5r1m0 010300 gchaney:  Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYFNDE_h
 #define QGYFNDE_h

 #if (__OS400_TGTVRM__>=510)                                /* @A2A*/
     #pragma datamodel(P128)                                /* @A2A*/
 #endif                                                     /* @A2A*/

 /******************************************************************/
 /* Prototype                                                      */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYFNDE,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYFNDE   (char *,     /* Request handle                    */
                   int   ,     /* Number of keys                    */
                   void *,     /* Key field information             */
                   void *,     /* Key field values                  */
                   int  *,     /* Entry number                      */
                   char *,     /* Key found                         */
                   void *      /* Error code                        */
                  );

 #if (__OS400_TGTVRM__>=510)                                /* @A2A*/
     #pragma datamodel(pop)                                 /* @A2A*/
 #endif                                                     /* @A2A*/

 #endif

