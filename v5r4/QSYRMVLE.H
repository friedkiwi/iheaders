 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsyrmvle.h                                   */
 /*                                                                */
 /* Descriptive Name: Remove Validation List Entry                 */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Remove Validation List Entry include          */
 /*              provides the definitions for changing validation  */
 /*              list entries.                                     */
 /*                                                                */
 /* Header Files Included: sys/types.h                             */
 /*                        qsy.h                                   */
 /*                        qsyvldl.h                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: From qsyvldl.h:                                */
 /*                   Qsy_Entry_ID_Info_T                          */
 /*                 From qsy.h:                                    */
 /*                   Qsy_Qual_Name_T                              */
 /*                                                                */
 /* Function Prototype List: QSYRMVLE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS DATE   PGMR COMMENTS                     */
 /*    ---- -------- ---- ------ ---- ---------------------------- */
 /*    $A0= D9540200 4D20 970310 KAS: New.                         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QSYRMVLE_H
 #define _QSYRMVLE_H


 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <sys/types.h>
 #include <qsy.h>
 #include <qsyvldl.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYRMVLE                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRMVLE,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRMVLE (void         *,  /* Validation list name - ptr to  */
                                 /*   Qsy_Qual_Name_T.             */
                void         *,  /* Entry ID information - ptr to  */
                                 /*   Qsy_Entry_ID_Info_T          */
                void         *); /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif /* _QSYRMVLE_H */
