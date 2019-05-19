  #ifndef __qp0zdipc_h
  #define __qp0zdipc_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QP0ZDIPC                                     */
 /*                                                                */
 /* Descriptive Name: Delete one or more interprocess              */
 /*                   communications objects.                      */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1997,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QP0ZDIPC API deletes one or more IPC objects  */
 /*              specified by the parameter passed in.             */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This macro/include is a CUE.                 */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                  Qp0z_Dipc_DeleteEntry_t                       */
 /*                  Qp0z_Dipc_DeleteControl_t                     */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QP0ZDIPC                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95191       4D20  970401 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 /******************************************************************/
 /* Prototype for call to QP0ZDIPC API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
 #pragma linkage(QP0ZDIPC,OS,nowiden)
 #else
 extern "OS"
 #endif

   void   QP0ZDIPC  (void *,     /* Delete Control                 */
                     void *      /* Error code                     */
                     );



 /*******************************************************************/
 /* Type Definition for one IPC object to delete                    */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Dipc_DeleteEntry
 {
     char                  Ipc_Type;
     char                  Reserved[3];
     int                   Identifier;
 } Qp0z_Dipc_DeleteEntry_t;
 /*******************************************************************/
 /* Type Definition for delete control                              */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Dipc_DeleteControl
 {
     int                     Num_Deletions;
   /*Qp0z_Dipc_DeleteEntry_t DList[1];*/          /* VARYING LENGTH */
 } Qp0z_Dipc_DeleteControl_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif

