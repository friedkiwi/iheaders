 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFPADOLU                                   */
 /*                                                                */
 /* Descriptive Name: Open List Network Server Users               */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000,2003                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List Network Server Users                */
 /*              (QFPADOLU) API retrieves a list of network server */
 /*              users and related user enrollment information.    */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qfp_DOLU0100_t (Enrollment record)             */
 /*                 Qfp_DOLU0150_t (Enrollment record w/Win user)  */
 /*                 Qfp_DOLU0200_t (Basic Enrollment record)       */
 /*                 Qfp_DOLU_List_Information_t (List information) */
 /*                                                                */
 /* Function Prototype List: QFPADOLU                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D97705     5D10  990915 MEADEN  :   New Include           */
 /* $R3= D99492     5D30  082602 MEADEN  :   V5R3 changes          */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFPADOLU_h
 #define QFPADOLU_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Open List Network Server Users           */
 /* (QFPADOLU) API                                                 */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPADOLU,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QFPADOLU (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* List information               */
                int,             /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Profile type                   */
                char *,          /* AS/400 profile                 */
                char *,          /* Windows domain name qualifier  */
                int,             /* Length of Windows domain name  */
                                 /*   qualifier                    */
                char *,          /* Windows server name qualifier  */
                int,             /* Length of Windows server name  */
                                 /*   qualifier                    */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the DOLU0100 format - User enrollment info.*/
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLU0100
    {
       int  Disp_to_Next_Record;
       int  Length_of_Record;
       int  Record_Type;
       int  Num_Rec_to_Next_Rec_Same_Level;
       int  Num_Rec_Next_Lower_Level;
       int  Disp_to_Name;
       int  Length_of_Name;
       int  Server_Type;
       int  Enrollment_Reason;
       int  Member_Enrollment;
       int  Profile_Status;
       char Profile_Description[50];
       char Enrollment_Error_Code[6];
       char Message_File[10];
       char Primary_Message_File_Library[10];
       char Message_ID[7];
     /*char Name[];*/               /* Varying length */
    } Qfp_DOLU0100_t;

 /******************************************************************/
 /* Type Definition for the DOLU0150 format - User enrollment info.*/
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLU0150               /* @R3A*/
    {                                              /* @R3A*/
       int  Disp_to_Next_Record;                   /* @R3A*/
       int  Length_of_Record;                      /* @R3A*/
       int  Record_Type;                           /* @R3A*/
       int  Num_Rec_to_Next_Rec_Same_Level;        /* @R3A*/
       int  Num_Rec_Next_Lower_Level;              /* @R3A*/
       int  Disp_to_Name;                          /* @R3A*/
       int  Length_of_Name;                        /* @R3A*/
       int  Server_Type;                           /* @R3A*/
       int  Enrollment_Reason;                     /* @R3A*/
       int  Member_Enrollment;                     /* @R3A*/
       int  Profile_Status;                        /* @R3A*/
       char Profile_Description[50];               /* @R3A*/
       char Enrollment_Error_Code[6];              /* @R3A*/
       char Message_File[10];                      /* @R3A*/
       char Primary_Message_File_Library[10];      /* @R3A*/
       char Message_ID[7];                         /* @R3A*/
       char Reserved1[1];                          /* @R3A*/
       int  Disp_to_Windows_Name;                  /* @R3A*/
       int  Length_of_Windows_Name;                /* @R3A*/
     /*char Name[];*/               /* Varying length @R3A*/
     /*char Windows_Name[];*/       /* Varying length @R3A*/
    } Qfp_DOLU0150_t;                              /* @R3A*/

 /******************************************************************/
 /* Type Definition for the DOLU0200 format - User enrollment info.*/
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLU0200               /* @R3A*/
    {                                              /* @R3A*/
       int  Disp_to_Next_Record;                   /* @R3A*/
       int  Length_of_Record;                      /* @R3A*/
       int  Record_Type;                           /* @R3A*/
       int  Num_Rec_to_Next_Rec_Same_Level;        /* @R3A*/
       int  Num_Rec_Next_Lower_Level;              /* @R3A*/
       int  Disp_to_Name;                          /* @R3A*/
       int  Length_of_Name;                        /* @R3A*/
       int  Server_Type;                           /* @R3A*/
       int  Enrollment_Reason;                     /* @R3A*/
       int  Member_Enrollment;                     /* @R3A*/
       int  Profile_Status;                        /* @R3A*/
     /*char Name[];*/               /* Varying length @R3A*/
    } Qfp_DOLU0200_t;                              /* @R3A*/

 /******************************************************************/
 /* Type Definition for List Information                            */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLU_List_Information
    {
       int  Total_Records;
       int  Records_Returned;
       char Request_Handle[4];
       int  Record_Length;
       char Information_Complete;
       char Date_Time_Created[13];
       char List_Status;
       char Reserved;
       int  Information_Length;
       int  First_Record_In_Buffer;
       char Reserved2[40];
    } Qfp_DOLU_List_Information_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif
