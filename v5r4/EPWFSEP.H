 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EPWFSEP                                    */
 /*                                                                */
 /* Descriptive Name: File Server Exit Program Parameters.         */
 /*                                                                */
 /* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1995,2001.          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The File Server Exit Program Parameters define    */
 /*              the parameters passed to the File Server exit     */
 /*              program.                                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpwfs_Exit_Parms_t                             */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON      LEVEL  DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ---------   -----  ------ --------- ----------------------*/
 /* $A0= D9193500    3D60   950131 ROCHESTER New Include           */
 /* $A1= D98212.1    V5R1M0 001006 ROCH      Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef EPWFSEP_h
 #define EPWFSEP_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/


 /******************************************************************/
 /* Type Definition for the File Server Exit Program Parameters.   */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qpwfs_Exit_Parms
    {
    char           User_Profile[10]; /* User profile.               */
    char           Server_ID[10];    /* Server ID                   */
    unsigned long  Function_ID;      /* Requested Function ID       */
    char           Format_Name[8];   /* Format Name                 */
    char           RD_Open;          /* Read Access                 */
    char           WR_Open;          /* Write Access                */
    char           RD_WR_Open;       /* Read/Write Access           */
    char           Delete_Allowed;   /* Delete Allowed              */
    unsigned long  Filename_Len;     /* File name length            */
  /*char           Filename[];*/     /* File name (varying length)  */
   } Qpwfs_Exit_Parms_t;


 /* Constant value for Server_ID                                   */
 #define QPWFS_SERVER_ID          "*FILESRV  "


 /* Constant values for Function_ID                                */
 #define  QPWFS_CHANGE      0
 #define  QPWFS_CREATE      1
 #define  QPWFS_DELETE      2
 #define  QPWFS_LIST_ATTR   3
 #define  QPWFS_MOVE        4
 #define  QPWFS_OPEN        5
 #define  QPWFS_RENAME      6
 #define  QPWFS_ALLOC_CONV  7


 /* Constant value for Format_Name                                 */
 #define QPWFS_USER_EXIT_FORMAT_100 "PWFS0100"


 /* Constant values for RD_Open,                                  */
 /* WR_Open, RD_WR_Open, and Delete_Allowed.                      */
 #define QPWFS_USER_EXIT_FLAG_ON  (0xF1)
 #define QPWFS_USER_EXIT_FLAG_OFF (0xF0)

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/


#endif
