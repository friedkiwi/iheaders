 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLP                                        */
 /*                                                                */
 /* Descriptive Name: Format structures for CDROM premastering     */
 /*                   and structures for mapping returned output   */
 /*                   in the user space.                           */
 /*                                                                */
 /* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2000           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Contains the Generic Record format headers        */
 /*              and headers to map returned output from the       */
 /*              user space for CDROM premastering                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qlp_PCDL0100_t                                 */
 /*                 Qlp_TPFL0100_t                                 */
 /*                 Qlp_Gencd_Input_t                              */
 /*                 Qlp_Hcdst_Input_t                              */
 /*                 Qlp_Header_t                                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9157100     3D60  941016 BLOCKER:  New Include           */
 /* $A1= D9193300     3D60  941209 BLOCKER:  Set volid prefix to 30*/
 /* $A2= P3984880     3D60  950317 BLOCKER:  Add __cplusplus  defs */
 /* $A3= PTH01765     3D60  950816 BLOCKER   restored --> restore  */
 /* $A4= D9934931     5D10  001105 BCHANEY:  Teraspace stage 2     */
 /*                                          reference D98212.1    */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLP_h
 #define QLP_h

 #if (__OS400_TGTVRM__>=510)                                /*@A4A*/
     #pragma datamodel(P128)                                /*@A4A*/
 #endif                                                     /*@A4A*/

 #ifdef __cplusplus
   extern "C" {
   #pragma info(none)
 #endif

 /******************************************************************/
 /* Type Definition for the PCDL0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qlp_PCDL0100
    {
      char Usrspc_Tape_Label[17];      /* Tape File Label           */
      char Usrspc_Cdrom_File[256];     /* CDROM file name           */
      char Usrspc_Volume_Id[32];       /* CDROM Volume Identifier   */
      char Usrspc_Reserved[3];         /* Boundary alignment        */
      int  Usrspc_Volume_Serial;       /* CDROM Volume serial pos.  */
    } Qlp_PCDL0100_t;

 /******************************************************************/
 /* Type Definition for the TPFL0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qlp_TPFL0100
    {
     char Usrspc_Tape_Label[17];      /* Tape File Label           */
    } Qlp_TPFL0100_t;

 /******************************************************************/
 /* Type Definition for the gencd input parameters                 */
 /******************************************************************/
 typedef _Packed struct Qlp_Gencd_Input
   {
     char Input_Space_Name[10];       /* User space name            */
     char Input_Space_Lib[10];        /* User space library         */
     char Input_Space_Format[8];      /* Format of the user space   */
     int  Input_Cdrom_Size;           /* CDROM size in bytes        */
     char Input_Dist_Setmap[10];      /* Distribution set map id    */
     char Input_Volume_Prefix[30];    /* CDROM Volume Id prefix @A1C*/
   }  Qlp_Gencd_Input_t;


 /******************************************************************/
 /* Type Definition for the hcdst input parameters                 */
 /******************************************************************/
 typedef _Packed struct Qlp_Hcdst_Input
   {
     char Input_Space_Name[10];       /* User space name            */
     char Input_Space_Lib[10];        /* User space library         */
     char Input_Space_Format[8];      /* Format of the user space   */
     int  Input_Req_Cdrom;            /* Requested cdrom state      */
     int  Input_Option;               /* Option                     */
     char Input_Dist_Setmap[10];      /* Distribution set map id    */
   }  Qlp_Hcdst_Input_t;


 /******************************************************************/
 /* Type Definition for the common header section for both APIs    */
 /******************************************************************/

 typedef _Packed struct Qlp_Header
   {
     char Usrspc_Name_Used[10];   /* User space name used           */
     char Usrspc_Lib_Used[10];    /* User space library used        */
   }  Qlp_Header_t;

#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#if (__OS400_TGTVRM__>=510)                                  /*@A4A*/
    #pragma datamodel(pop)                                   /*@A4A*/
#endif                                                       /*@A4A*/

#endif                            /* #ifndef QLP_h                  */
