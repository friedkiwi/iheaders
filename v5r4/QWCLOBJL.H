 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCLOBJL                                   */
 /*                                                                */
 /* Descriptive Name: List Object Lock API                         */
 /*                                                                */
 /* 5763-SS1, 5769-SS1                                             */
 /* (C) Copyright IBM Corp. 1994,2002                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Object Lock API will return a list of    */
 /*              locks for an object or a database member.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_LOBJL_Input_T                              */
 /*                 Qwc_OBJL0100_T                                 */
 /*                 Qwc_LOBJL_Header_T                             */
 /*                                                                */
 /* Function Prototype List: QWCLOBJL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR   CHANGE DESCRIPTION       */
 /* ---- ------------ ----- ------ ------ -------------------------*/
 /* $A0= D2862000     3D10  940508 ROCH:  New Include              */
 /* $A1= D9586703     4D40  980603 ROCH:  Add lock scope and       */
 /*                                       thread identifier.       */
 /* $A2= D9860301   v5r2m0  010223 ROCH:  Add IASP support         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCLOBJL_h
 #define QWCLOBJL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling List Object Locks  (QWCLOBJL) API        */
 /******************************************************************/
 #ifdef __ILEC400__
       #pragma linkage(QWCLOBJL,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCLOBJL (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified object name          */
                char *,          /* Object type                    */
                char *,          /* Member name                    */
                void *,          /* Error code                     */
                  ...);          /* Optional Parameter Group 1:
                                      char *   path name
                                      int      Length of the path
                                                   name            */
                                 /* Optional Parameter Group 2:
                                      char*    ASP device name     */


 /******************************************************************/
 /* Type Definition for the Format OBJL0100.                       */
 /*                                                                */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef struct Qwc_LOBJL_Input
    {
       char  User_Space_Name[10];
       char  User_Space_Library[10];
       char  Format_Name[10];
       char  Object_Name[10];
       char  Object_Library[10];
       char  Object_Type[10];
       char  Member_Name[10];
       int   Offset_PathName;
       int   Length_PathName;
       char  Object_Library_ASP_Name[10];
     /*char  Path_Name[1];*//* Varing Length                       */
    } Qwc_LOBJL_Input_T;

 /******************************************************************/
 /* Header structure for QWCLOBJL                                  */
 /******************************************************************/
 typedef struct Qwc_LOBJL_Header
    {
       char  User_Space_Name_Used[10];
       char  User_Space_Library_Used[10];
       char  Object_Name_Used[10];
       char  Object_Library_Used[10];
       char  Object_Type_Returned[10];
       char  Extended_Object_Attr[10];
       char  Shared_File_Name[10];
       char  Shared_File_Library[10];
       int   Offset_PathName_Used;
       int   Length_PathName_Used;
       char  Object_ASP_Name_Used[10];
       char  Object_Library_ASP_Name_Used[10];
     /*char  Path_Name_Used[1];*//* Varing Length                  */
    } Qwc_LOBJL_Header_T;


 /******************************************************************/
 /* Type Definition for the Format OBJL0100.                       */
 /******************************************************************/
 typedef struct Qwc_OBJL0100_List
    {
       char  Job_Name[10];
       char  Job_User_Name[10];
       char  Job_Number[6];
       char  Lock_State[10];
       int   Lock_Status;
       int   Lock_Type;
       char  Member_Name[10];
       char  Share;
       char  Lock_Scope;
       char  Thread_Identifier[8];
    } Qwc_OBJL0100_List_T;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
