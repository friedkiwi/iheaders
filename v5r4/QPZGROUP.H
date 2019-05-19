 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZGROUP                                   */
 /*                                                                */
 /* Descriptive Name: PTF Group APIs                               */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001,2003                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The APIs defined in the QPZGROUP *SRVPGM          */
 /*              provide the ability to create and manage PTF      */
 /*              Groups on the system.                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                Qpz_GRPI0100_t                                  */
 /*                Qpz_GRPI0200_t                                  */
 /*                Qpz_GRPI0100_Rec_t                              */
 /*                Qpz_GRPI0100_Hdr_t                              */
 /*                Qpz_GRPC0100_t                                  */
 /*                Qpz_LstPtfGrps_Input_t                          */
 /*                Qpz_LstPtfGrps_Header_t                         */
 /*                Qpz_LSTG0100_t                                  */
 /*                Qpz_LstPtfGrpDtls_Info_t                        */
 /*                Qpz_LstPtfGrpDtls_Input_t                       */
 /*                Qpz_LstPtfGrpDtls_Header_t                      */
 /*                Qpz_GRPR0200_t                                  */
 /*                Qpz_GRPR0300_t                                  */
 /*                Qpz_GRPR0500_t                                  */
 /*                                                                */
 /* Function Prototypes:                                           */
 /*                 QpzCreatePtfGroup                              */
 /*                 QpzDeletePtfGroup                              */
 /*                 QpzListPtfGroups                               */
 /*                 QpzListPtfGroupDetails                         */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
 /* ---- ---------- ----- ------ --------- ------------------------*/
 /* $A0= D98720     5D20  010902 ROCH      New Include             */
 /* $B1= D99308     5D30  020707 ROCH    : Add spc hdling PTF date */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPZGROUP_h
#define QPZGROUP_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Prototypes for calling QpzCreatePtfGroup API                   */
/******************************************************************/

#ifdef __ILEC400__
#pragma argument (QpzCreatePtfGroup,OS,nowiden)
   void QpzCreatePtfGroup(
			  void *,   /* Group information              */
			  char *,   /* Group information format name  */
			  void *,   /* Input variable                 */
			  char *,   /* Input variable format name     */
			  void *,   /* Related PTF Groups             */
			  int   ,   /* Number of related PTF Groups   */
			  int   ,   /* CCSID                          */
			  void *);  /* Error code                     */
#else
   extern "C"
     void QpzCreatePtfGroup(
			    void *, /* Group information              */
			    char *, /* Group information format name  */
			    void *, /* Input variable                 */
			    char *, /* Input variable format name     */
			    void *, /* Related PTF Groups             */
			    int  *, /* Number of related PTF Groups   */
			    int  *, /* CCSID                          */
			    void *); /* Error code                    */
#endif

/********************************************************************/
/*  Structure for Input variables for GRPI0100 format               */
/********************************************************************/
  typedef _Packed struct Qpz_GRPI0100
  {
      char Usr_SPC_Name[10];
      char Usr_SPC_Lib_Name[10];
  } Qpz_GRPI0100_t;

/********************************************************************/
/*  Structure for Input variables for GRPI0200 format               */
/********************************************************************/
  typedef _Packed struct Qpz_GRPI0200
  {
      char File_Name[10];
      char File_Lib_Name[10];
      char File_Mbr_Name[10];
  } Qpz_GRPI0200_t;

/********************************************************************/
/*  Structure for GRPI0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

  typedef _Packed struct Qpz_GRPI0100_Rec
  {
      char PTF_ID[7];
      char PID[7];
      char Rls_Lvl[6];
      char Prd_Opt[4];
      char Lod_ID[4];
      char Minimum_Level[2];
      char Maximum_Level[2];
      /*char Reserved[];*/          /* Varying length      */
  } Qpz_GRPI0100_Rec_t;

  typedef _Packed struct Qpz_GRPI0100_Hdr
  {
      int Ofst_Ptf_Rec;
      int Num_Ptf_Recs;
      int Length_Ptf_Rec;
      /*Qpz_GRPI0100_Rec_t GRPI0100Rec[];*/  /* Varying length      */
  } Qpz_GRPI0100_Hdr_t;

/********************************************************************/
/*  Structure for GRPC0100 format                                   */
/********************************************************************/

  typedef _Packed struct Qpz_GRPC0100
  {
      int  Length;
      char Name[60];
      char Description[100];
      int  Level;
      char Replace;
  } Qpz_GRPC0100_t;


/******************************************************************/
/* Prototypes for calling QpzDeletePtfGroup API                   */
/******************************************************************/

#ifdef __ILEC400__
#pragma argument (QpzDeletePtfGroup,OS,nowiden)
  void QpzDeletePtfGroup(
			 char *,     /* PTF Group name                 */
			 int   ,     /* PTF Group level                */
			 char *,     /* Delete related PTF Groups      */
			 int   ,     /* CCSID                          */
			 void *);    /* Error code                     */
#else
  extern "C"
    void QpzDeletePtfGroup(
			   char *,   /* PTF Group name                 */
			   int  *,   /* PTF Group level                */
			   char *,   /* Delete related PTF Groups      */
			   int  *,   /* CCSID                          */
			   void *);  /* Error code                     */
#endif

/******************************************************************/
/* Prototypes for calling QpzListPtfGroups API                    */
/******************************************************************/


#ifdef __ILEC400__
#pragma argument (QpzListPtfGroups,OS,nowiden)
  void QpzListPtfGroups(
			char *,     /* Qualified user space name      */
			char *,     /* Format name                    */
			int   ,     /* CCSID                          */
			void *);    /* Error code                     */
#else
  extern "C"
    void QpzListPtfGroups(
			  char *,   /* Qualified user space name      */
			  char *,   /* Format name                    */
			  int  *,   /* CCSID                          */
			  void *);  /* Error code                     */
#endif

/********************************************************************/
/*  Structure for QpzListPtfGroups input parameter section          */
/********************************************************************/

  typedef _Packed struct Qpz_LstPtfGrps_Input
  {
      char Usr_SPC_Name[10];
      char Usr_SPC_Lib_Name[10];
      char Format_Name[8];
      int  CCSID;
  } Qpz_LstPtfGrps_Input_t;

/********************************************************************/
/*  Structure for QpzListPtfGroups header section                   */
/********************************************************************/

   typedef _Packed struct Qpz_LstPtfGrps_Header
   {
       char Usr_SPC_Name_used[10];
       char Usr_SPC_Lib_Name_used[10];
   } Qpz_LstPtfGrps_Header_t;



/********************************************************************/
/*  Structure for LSTG0100 format                                   */
/********************************************************************/

   typedef _Packed struct Qpz_LSTG0100
   {
       char Name[60];
       char Description[100];
       int  Level;
       int  Status;
   } Qpz_LSTG0100_t;


/******************************************************************/
/* Prototypes for calling QpzListPtfGroupDetails API              */
/******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QpzListPtfGroupDetails,OS,nowiden)
  void QpzListPtfGroupDetails(
			      char *,     /* Qualified user space name      */
			      char *,     /* PTF Group information          */
			      char *,     /* Format name                    */
			      int   ,     /* CCSID for returned information */
			      void *);    /* Error code                     */
#else
  extern "C"
    void QpzListPtfGroupDetails(
				char *,   /* Qualified user space name      */
				char *,   /* PTF Group information          */
				char *,   /* Format name                    */
				int  *,   /* CCSID for returned information */
				void *);  /* Error code                     */
#endif

/********************************************************************/
/*  Structure for PTF Group information                             */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

  typedef _Packed struct Qpz_LstPtfGrpDtls_Info
  {
      int  Length;
      char Name[60];
      int  CCSID;
      char IncludeRelGrps;
      /*char Reserved[];*/          /* Varying length      */
  } Qpz_LstPtfGrpDtls_Info_t;

/********************************************************************/
/*  Structure for QpzListPtfGroupDetails input parameter section    */
/********************************************************************/

   typedef _Packed struct Qpz_LstPtfGrpDtls_Input
   {
       char Usr_SPC_Name[10];
       char Usr_SPC_Lib_Name[10];
       char PTF_Group_Name[60];
       char Format_Name[8];
       int  Input_CCSID;
       int  Return_CCSID;
       char IncludeRelGrps;
   } Qpz_LstPtfGrpDtls_Input_t;

/********************************************************************/
/*  Structure for QpzListPtfGroupDetails header section             */
/********************************************************************/

   typedef _Packed struct Qpz_LstPtfGrpDtls_Header
   {
       char Usr_SPC_Name_used[10];
       char Usr_SPC_Lib_Name_used[10];
       char PTF_Group_Name[60];
       char PTF_Group_Desc[100];
       int  Level;
       int  Status;
       char SpcHdlDate[8];          /* Special hndling PTF date in fmt
                                       yyyymmdd (*NONE allowed) @B1A*/
   } Qpz_LstPtfGrpDtls_Header_t;




/********************************************************************/
/*  Structure for GRPR0200 format                                   */
/********************************************************************/
   typedef _Packed struct Qpz_GRPR0200
   {
       char PTF_ID[7];
       char PID[7];
       char Rls_Lvl[6];
       char Prd_Opt[4];
       char Lod_ID[4];
       char Minimum_Level[2];
       char Maximum_Level[2];
   } Qpz_GRPR0200_t;

/********************************************************************/
/*  Structure for GRPR0300 and GRPR0400 format                      */
/********************************************************************/
   typedef _Packed struct Qpz_GRPR0300
   {
       char PTF_ID[7];
       char PID[7];
       char Rls_Lvl[6];
       char Prd_Opt[4];
       char Lod_ID[4];
       char Minimum_Level[2];
       char Maximum_Level[2];
       char Loaded_Sts;
       char IPL_Act;
       char Act_Pnd;
       char Act_Req;
       char Cvr_Ltr_Sts;
       char On_Order_Sts;
       char Savf_Sts;
       char Fil_Nam[10];
       char Fil_Lib_Nam[10];
       char Supersededby_PTF[7];
       char Superseding_PTF[7];
       char Product_Sts;
       char Omit_Sts;               /* PTF Omit status          @B1A*/
       char PreApply_Sts;           /* PTF Pre-apply status     @B1A*/
   } Qpz_GRPR0300_t;

/********************************************************************/
/*  Structure for GRPR0500 format                                   */
/********************************************************************/
   typedef _Packed struct Qpz_GRPR0500
   {
       char Name[60];
       char Description[100];
       int  Level;
       int  Status;
   } Qpz_GRPR0500_t;


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif                           /* #ifndef QPZGROUP_h             */
