 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGSLRSC                                    */
 /*                                                                */
 /* Descriptive Name: List Spooled File AFPDS Resources            */
 /*                                                                */
 /* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1996,2003           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Spooled File AFPDS Resources             */
 /*              - Generates a list of the AFPDS resources found   */
 /*                in the specified spooled file and returns the   */
 /*                list in a user space.                           */
 /*                                                                */
 /* Header Files Included: H/QGSLRSC                               */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qgs_LRSC0100_t                                 */
 /*                 Qgs_LRSC0200_t                                 */
 /*                 Qgs_LRSC0300_t                                 */
 /*                 Qgs_LRSC_I_t                                   */
 /*                 Qgs_LRSC_H_t                                   */
 /*                 Qgs_LRSC0400_t                                 */
 /*                 Qgs_LRSC0500_t                                 */
 /*                 Qgs_LRSE0100_t                                 */
 /*                 Qgs_LRSE0200_t                                 */
 /*                 Qgs_LRSS0100_t                                 */
 /*                 Qgs_LRSS0200_t                                 */
 /*                                                                */
 /* Function Prototype List: QGSLRSC                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710.1     3D70  941202 RJOHNSON: New Include           */
 /* $A1= D98212.2    v5r1m0 010300 gchaney: Teraspace stage 2      */
 /* $A2= D97260       5D20  010109 ROCH:     Decouple Splf from Job*/
 /* $A3= D99375       5D30  020530 ROCH:     Imbedded objects      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QGSLRSC_h
#define QGSLRSC_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QGSLRSC,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QGSLRSC                                   */
/********************************************************************/

void QGSLRSC(void *,                /* User space qualified name.    */
             char *,                /* Format of information returned*/
             void *,                /* Qualified job name.           */
             char *,                /* Internal job identifier.      */
             char *,                /* Internal spooled file id.     */
             char *,                /* Spooled file name             */
             int,                   /* Spooled file number           */
             char *,                /* Resource name                 */
             char *,                /* Resource object type          */
             char *,                /* Pel Density                   */
             void *,                /* Error code                    */
	     ...);                  /* Optional Parameter Group 1:
                                          Job system name
				          Spooled file create date
                                          Spooled file create time
                                       Optional Parmater Group 2:
                                          Length of resource name
                                          CCSID of resource name    */
/********************************************************************/
/*  Structure for Input parameter section.                          */
/********************************************************************/

typedef _Packed struct Qgs_LRSC_I {
        char User_Space_Name[10];
        char User_Space_Library[10];
        char Format[8];
        char Qualified_Job_Name[26];
        char Internal_Job_Identifier[16];
        char Internal_Spool_Identifier[16];
        char Spool_File_Name[10];
        int  Spool_File_Number;
        char Resource_Name[10];
        char Resource_Object_Type[10];
        char Pel_Density;
        char Job_System_Name[8];
        char Splf_Create_Date[7];
        char Splf_Create_Time[6];
	char Reserved[2];
	int  Dsp_Resource_Name;
	int  Length_Resource_Name;
	int  CCSID_Resource_Name;
        /*char Long_Resource_Name[]; */ /* Varying length */
      } Qgs_LRSC_I_t;

/********************************************************************/
/*  Structure for Header Section.                                   */
/********************************************************************/

typedef _Packed struct Qgs_LRSC_H {
        char User_Space_Name[10];
        char User_Space_Library[10];
        char Qualified_Job_Name[26];
        char Spool_File_Name[10];
        int  Spool_File_Number;
        char Job_System_Name[8];
        char Splf_Create_Date[7];
        char Splf_Create_Time[6];
	char Reserved[3];
	int  CCSID_of_Rsc_Returned;
      } Qgs_LRSC_H_t;

/********************************************************************/
/*  Structure for LRSC0100.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0100 {
        char Resource_Name[10];
        char Resource_Library[10];
        char Resource_Object_Type[10];
        char Where_Resource_Referenced;
        char Resource_Availability;
        char Source_Object[10];
        char Source_Object_Library[10];
        char Source_Object_Type[10];
      } Qgs_LRSC0100_t;

/********************************************************************/
/*  Structure for LRSC0200.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0200 {
        char Resource_Library[10];
      } Qgs_LRSC0200_t;

/********************************************************************/
/*  Structure for LRSC0300.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0300 {
        char Resource_Name[10];
        char Resource_Library[10];
        char Resource_Object_Type[10];
        char Reserved;
        char Resource_Availability;
      } Qgs_LRSC0300_t;

/********************************************************************/
/*  Structure for LRSS0100.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSS0100 {
        char Source_Object[10];
        char Source_Object_Library[10];
        char Source_Object_Type[10];
      } Qgs_LRSS0100_t;

/********************************************************************/
/*  Structure for LRSS0200.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSS0200 {
	int  Dsp_to_Src_Obj_Name;
	int  Len_of_Src_Obj_Name;
	int  Dsp_to_Src_Obj_Path_Name;
	int  Len_of_Src_Obj_Path_Name;
	/*char Src_Obj_Name[]; */      /* Varying Length */
	/*char Src_Obj_Path_Name[]; */ /* Varying Length */
      } Qgs_LRSS0200_t;

/********************************************************************/
/*  Structure for LRSE0100.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSE0100 {
        char Resource_Name[10];
        char Resource_Library[10];
        char Resource_Object_Type[10];
        char Where_Resource_Referenced;
        char Resource_Availability;
        char Source_Object[10];
        char Source_Object_Library[10];
        char Source_Object_Type[10];
      } Qgs_LRSE0100_t;

/********************************************************************/
/*  Structure for LRSE0200.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSE0200 {
        char Resource_Availability;
	char Reserved[3];
	int  Dsp_to_Rsc_Name;
	int  Len_of_Rsc_Name;
	int  Dsp_to_Path_Name;
	int  Len_of_Path_Name;
	int  Dsp_to_Src_Obj;
	int  Len_of_Src_Obj;
	char Format[8];
        /*char Resource_Name[];*/      /* Varying Length */
	/*char Path_Name[]; */     /* Varying Length */
        /*Qgs_LRSS0100_t Source_Object;*/
        /*         or                   */
	/*Qgs_LRSS0200_t Source_Object;*/
      } Qgs_LRSE0200_t;

/********************************************************************/
/*  Structure for LRSC0400.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0400 {
        int Entry_Length;
	int Dsp_to_Name;
	int Length_of_Name;
	char Format[8];
	/*Qgs_LRSE0100_t Name; */
        /*        or            */
	/*Qgs_LRSE0200_t Name; */
      } Qgs_LRSC0400_t;

/********************************************************************/
/*  Structure for LRSC0500.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0500 {
        int Entry_Length;
        char Resource_Availability;
	char Reserved[3];
	int Dsp_to_Rsc_Name;
	int Len_of_Rsc_Name;
	int Dsp_to_Path_Name;
	int Len_of_Path_Name;
	/*char Resource_Name[]; */ /* Varying Length */
	/*char Path_Name[]; */     /* Varying Length */
      } Qgs_LRSC0500_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
