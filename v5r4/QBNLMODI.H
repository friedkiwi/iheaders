 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QBNLMODI                                   */
 /*                                                                */
 /* Descriptive Name: List Module Information                      */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The List Module Information API gives information */
 /*              about modules, similar to the Display Module      */
 /*              command.                                          */
 /*              Note that the parameters passed to QBNLMODI API   */
 /*              must be in uppercase.                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qbn_LMODI_Input_Section_t                      */
 /*                 Qbn_LMODI_Header_Section_t                     */
 /*                 Qbn_LMODI_MODL0100_t                           */
 /*                 Qbn_LMODI_MODL0200_t                           */
 /*                 Qbn_LMODI_MODL0300_t                           */
 /*                 Qbn-LMODI_MODL0400_t                           */
 /*                 Qbn_LMODI_MODL0500_t                           */
 /*                                                                */
 /* Function Prototype List: QBNLMODI.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* LEVEL:                                                         */
 /* ------                                                         */
 /* V3R6M0                                                         */
 /* V4R2M0                                                         */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QBNLMODI_h
 #define QBNLMODI_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Binder API QBNLMODI                      */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QBNLMODI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QBNLMODI (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified module name          */
                void *);         /* Error code                     */

 /******************************************************************/
 /* User Space Input Section                                       */
 /******************************************************************/
 typedef _Packed struct Qbn_LMODI_Input_Section
    {
       char User_Space[10];
       char User_Space_Lib[10];
       char Format[8];
       char Module_Name[10];
       char Module_Library[10];
    }  Qbn_LMODI_Input_Section_t;

 /******************************************************************/
 /* User Space Header Section                                      */
 /******************************************************************/
 typedef _Packed struct Qbn_LMODI_Header_Section
    {
       char User_Space[10];
       char User_Space_Lib[10];
    }  Qbn_LMODI_Header_Section_t;

 /******************************************************************/
 /* Type definition for the MODL0100                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LMODI_MODL0100
    {
       int  Entry_Size;
       char Module_Name[10];
       char Module_Library_Name[10];
       char Exported_Symbol_Type;
       char Reserved[3];
       int  Exported_Symbol_Offset;
       int  Exported_Symbol_Length;
       char Exported_Symbol_ArgOpt[10];
    }  Qbn_LMODI_MODL0100_t;

 /******************************************************************/
 /* Type definition for the MODL0200                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LMODI_MODL0200
    {
       int  Entry_Size;
       char Module_Name[10];
       char Module_Library_Name[10];
       char Imported_Symbol_Type;
       char Reserved[3];
       int  Imported_Symbol_Offset;
       int  Imported_Symbol_Length;
       char Imported_Symbol_ArgOpt[10];
    }  Qbn_LMODI_MODL0200_t;

 /******************************************************************/
 /* Type definition for the MODL0300                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LMODI_MODL0300
    {
       int  Entry_Size;
       char Module_Name[10];
       char Module_Library_Name[10];
       char Procedure_Type;
       char Reserved[3];
       int  Procedure_Name_Offset;
       int  Procedure_Name_Length;
       char Procedure_ArgOpt[10];
    }  Qbn_LMODI_MODL0300_t;


 /******************************************************************/
 /* Type definition for the MODL0400                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LMODI_MODL0400
    {
       int  Entry_Size;
       char Module_Name[10];
       char Module_Library_Name[10];
       char Object_Type[10];
       char Object_Library_Name[10];
       int  Object_Name_Offset;
       int  Object_Name_Length;
    }  Qbn_LMODI_MODL0400_t;


 /******************************************************************/
 /* Type definition for the MODL0500                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LMODI_MODL0500
    {
       int  Entry_Size;
       char Module_Name[10];
       char Module_Library_Name[10];
       int  Copyright_Offset;
       int  Copyright_Length;
    }  Qbn_LMODI_MODL0500_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif
