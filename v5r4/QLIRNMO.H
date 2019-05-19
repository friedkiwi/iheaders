 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLIRNMO                                    */
 /*                                                                */
 /* Descriptive Name: Rename Object API                            */
 /*                                                                */
 /* 5763-SS1, 5722-SS1                                             */
 /* (C) Copyright IBM Corp. 1994,2002                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Rename Object API renames an existing object  */
 /*              to a new object name or new library name or both, */
 /*              and optionally replaces the object.               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLIRNMO                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $C0= D98416.58   v5r2m0 010819 LAW:      Add parms for         */
 /*                                          auxiliary storage     */
 /*                                          pool device name      */
 /*                                          support               */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLIRNMO_h
 #define QLIRNMO_h
#if (__OS400_TGTVRM__>=510)   /*@B1A*/
#pragma datamodel(P128)       /*@B1A*/
#endif                        /*@B1A*/

 /******************************************************************/
 /*  Prototype for QLIRNMO API                                     */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QLIRNMO,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QLIRNMO(void *,            /* From qualified object name     */
              char *,            /* Object type                    */
              void *,            /* To qualified object name       */
              char *,            /* Replace object                 */
              void *,            /* Error code                 @C0C*/
              ...);              /* Optional Parameter Group 1:
                                      void *   From library
                                       auxiliary storage pool
                                       device name
                                      void *   To library
                                       auxiliary storage pool
                                       device name             @C0A*/



#if (__OS400_TGTVRM__>=510)   /*@B1A*/
#pragma datamodel(pop)        /*@B1A*/
#endif                        /*@B1A*/
 #endif
