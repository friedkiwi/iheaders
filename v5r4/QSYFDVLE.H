 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsyfdvle.h                                   */
 /*                                                                */
 /* Descriptive Name: Find Validation List Entry                   */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Find Validation List Entry include provides   */
 /*              the definitions for finding an entry in a         */
 /*              validation list.                                  */
 /*                                                                */
 /* Header Files Included: sys/types.h                             */
 /*                        qsy.h                                   */
 /*                        qsyvldl.h                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: From qsyvldl.h:                                */
 /*                   Qsy_Entry_ID_Info_T                          */
 /*                   Qsy_Rtn_Vld_Lst_Ent_T                        */
 /*                 From qsy.h:                                    */
 /*                   Qsy_Qual_Name_T                              */
 /*                 Qsy_Rtn_Attr_Info_T                            */
 /*                 Qsy_Req_Attr_Info_T                            */
 /*                 Qsy_Req_Attr_Desc_T                            */
 /*                                                                */
 /* Function Prototype List: QSYFDVLE                              */
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

 #ifndef _QSYFDVLE_H
 #define _QSYFDVLE_H


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

 /********************************************************************/
 /* Data definitions                                                 */
 /********************************************************************/
 typedef struct Qsy_Req_Attr_Desc
 {
   int                     Entry_Length;
   int                     Attr_Location;
   int                     Attr_Type;
   int                     Displacement_to_Attr_ID;
   int                     Length_of_Attr_ID;
   int                     Bytes_Provided;
 /*char                    Attr_ID[]; */ /* varying length.      */
 } Qsy_Req_Attr_Desc_T;

 typedef struct Qsy_Req_Attr_Info
 {
   int                  Number_Attrs;
 /*Qsy_Req_Attr_Desc_T  Attr_Desc[]; */ /* varying length.      */
 } Qsy_Req_Attr_Info_T;

 typedef struct Qsy_Rtn_Attr_Info
 {
   int                     Entry_Length;
   int                     Bytes_Returned;
   int                     Bytes_Available;
   int                     Attribute_Len;
   unsigned int            Attribute_CCSID;
 /*char                    Attr_Value[]; */ /* varying length.      */
 } Qsy_Rtn_Attr_Info_T;


 /******************************************************************/
 /* Prototype for calling Security API QSYFDVLE                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYFDVLE,OS,nowiden)
  #else
       extern "OS"
  #endif

 void QSYFDVLE (void         *,  /* Validation list name - ptr to  */
                                 /*   Qsy_Qual_Name_T.             */
                void         *,  /* Entry ID information - ptr to  */
                                 /*   Qsy_Entry_ID_Info_T          */
                void         *,  /* Attribute information - ptr to */
                                 /*   Qsy_Req_Attr_Info_T          */
                void         *,  /* Return data information - ptr  */
                                 /*   to Qsy_Rtn_Vld_Lst_Ent_T     */
                void         *,  /* Return attribute info - ptr to */
                                 /*   Qsy_Rtn_Attr_Info_T          */
                void         *); /* Error Code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif /* _QSYFDVLE_H */
