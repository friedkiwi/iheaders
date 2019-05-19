 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZSLTPR                                   */
 /*                                                                */
 /* Descriptive Name: Select Product.                              */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Select Product (QSZSLTPR) API displays a list */
 /* of products.  Alternatively, it can return a list of products  */
 /* without displaying it.                                         */
 /*                                                                */
 /* Header Files Included:                                         */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: QSZ_PRDS0100_t                                 */
 /*                 QSZ_PRDS0200_t                                 */
 /*                 Qsz_Input_Information_t                        */
 /*                 Qsz_Input_List_t                               */
 /*                 Qsz_Output_Information_t                       */
 /*                                                                */
 /* Function Prototype List: QSZSLTPR                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940222 MASANZ:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSZSLTPR_h
 #define QSZSLTPR_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for calling Select Product API (QSZSLTPR)           */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QSZSLTPR,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QSZSLTPR(void *,                /* Output list               */
               void *,                /* Input information         */
               char *,                /* Format name               */
               void *,                /* Input list                */
               void *,                /* Output information        */
               void *);               /* Error code                */

 /******************************************************************/
 /* Type Definition for the PRDS0100 format.                       */
 /******************************************************************/
 typedef struct QSZ_PRDS0100 {
                  char Product_Id[7];
                  char Product_Option[5];
                  char Release_Level[6];
                  char Reserved[2];
                  char Message_Id[7];
                  char Message_File_Object_Name[10];
                  char Description_Text[46];
                } QSZ_PRDS0100_t;

 /******************************************************************/
 /* Type Definition for the PRDS0200 format.                       */
 /******************************************************************/
 typedef struct QSZ_PRDS0200 {
                  char Product_Id[7];
                  char Product_Option[5];
                  char Release_Level[6];
                  char Reserved[2];
                  char Message_Id[7];
                  char Message_File_Object_Name[10];
                  char Message_File_Library_Name[10];
                  char Installed_Flag[1];
                  char Supported_Flag[1];
                  char Registration_Type[2];
                  char Registration_Value[14];
                  char Description_Text[132];
                } QSZ_PRDS0200_t;


 /******************************************************************/
 /* Type Definition for the Input Information parameter            */
 /******************************************************************/
 typedef struct Qsz_Input_Information {
                  long int Number_Records_To_Return;
                  char Products_To_Select[10];
                  char Initial_View[1];
                  char Allow_Exit[1];
                  char Options_To_Display[10];
                  char Product[10];
                  long int Number_Records_Input;
                } Qsz_Input_Information_t;

 /******************************************************************/
 /* Type Definition for the Input List parameter                   */
 /******************************************************************/
 typedef struct Qsz_Input_List {
                  char Product_Id[7];
                  char Product_Option[5];
                  char Release_Level[6];
                } Qsz_Input_List_t;

 /******************************************************************/
 /* Type Definition for the Output Information parameter           */
 /******************************************************************/
 typedef struct Qsz_Output_Information {
                  long int Record_Size;
                  long int Records_Available;
                  long int Action;
                } Qsz_Output_Information_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
