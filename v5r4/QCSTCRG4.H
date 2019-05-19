 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCSTCRG4                                   */
 /*                                                                */
 /* Descriptive Name: Cluster Resource Group APIs.                 */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001,2001                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QCSTCRG4 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qcst                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  None                                          */
 /*                                                                */
 /* Function Prototype List: QcstDistributeInformation             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9786905     5D10  991117 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QCSTCRGM4_h
 #define QCSTCRGM4_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qus.h>
 #include <qcst.h>

 /******************************************************************/
 /* RGDD0100 Format                                                */
 /******************************************************************/
 enum QcstMessageDeliveryType {
   QcstTotal = 0,
   QcstFIFO  = 1
 };

 typedef _Packed struct Qcst_RGDD0100 {
     int   Message_Delivery_Type;
     int   Length_Message_Key;
     int   Offset_Message;
     int   Length_Message;
     int   Offset_Array_Node_ID;
     int   Number_Node_ID;
   /*char  Message[];*/              /* varying length            */
   /*Qcst_Node_Id_t
 Node_Id_Array[];*/ /* varying length          */
} Qcst_RGDD0100_t;


 /******************************************************************/
 /* Prototype for calling Distribute Information API.              */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstDistributeInformation,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstDistributeInformation
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Distribute Information     */
                           char *,   /* Format Name                */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */



 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif

