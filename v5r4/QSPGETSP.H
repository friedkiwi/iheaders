/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPGETSP                                  */
/*                                                               */
/* Descriptive Name: Get Spooled File Data                       */
/*                                                               */
/* 5763-SS1, 5722-SS1(C) Copyright IBM Corp. 1994,2001           */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Get Spooled File Data API gets data from     */
/*              an existing spooled file.                        */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: Qsp_SPFRH_t                                   */
/*                 Qsp_SPFRB_t                                   */
/*                 Qsp_SPFRG_t                                   */
/*                 Qsp_SPFRP_t                                   */
/*                                                               */
/* Function Prototype List: QSPGETSP                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- -------------------- */
/* $A0= D2862000     3D10  940324 XZS2523:  New Include          */
/* $A1= D98212.4     5D10  991228 GCHANEY: Compiler directive for*/
/*                                         16 byte pointers.     */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPGETSP_h
 #define QSPGETSP_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPGETSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Get Spooled File Data API QSPGETSP        */
 /*                                                              */
 /****************************************************************/
 void QSPGETSP (int,             /* Spooled file handle          */
                void *,          /* Qualified user space name    */
                char *,          /* Format name                  */
                int,             /* Number of buffer to be read  */
                char *,          /* End of open spooled file     */
                void *);         /* Error code                   */

/*****************************************************************/
/* Structure for Generic Header Section                          */
/*****************************************************************/

typedef _Packed struct Qsp_SPFRH {
     char User_Data[64];
     int  Header_Size;
     char Struc_Level[4];
     char Spooled_File_Level[6];
     char Format_Name[8];
     char Info_Complete_Ind[1];
     char Reserved1;
     int  User_Space_Used;
     int  Offset_First_Buffer;
     int  Buffers_Requested;
     int  Buffers_Returned;
     int  Size_Print_Data300;
     int  Nbr_Comp_Pages;
     int  First_Page_Nbr;
     int  Offset_First_Page;
     char Reserved2[8];
} Qsp_SPFRH_t;

/*****************************************************************/
/* Structure for Generic Header Section                          */
/*****************************************************************/

typedef _Packed struct Qsp_SPFRB {
     int  Length_Buffer_Info;
     int  Buffer_Number;
     int  Offset_General_Info;
     int  Size_General_Info;
     int  Offset_Page_Data;
     int  Size_Page_Data;
     int  Number_Page_Entries;
     int  Size_Page_Entry;
     int  Offset_Print_Data;
     int  Size_Print_Data;
} Qsp_SPFRB_t;

/*****************************************************************/
/* Structure for General Data Section                            */
/*****************************************************************/

typedef _Packed struct Qsp_SPFRG {
     int  Nbr_Nonblank_Lines;
     int  Nonblank_Lines_Page1;
     int  Error_Buffer_Number;
     int  Offset_Error_Recovery;
     int  Print_Data_Size;
     char State[10];
     char Last_Page_Continues[1];
     char Advanced_Print_Func[1];
     char LAC_Array_in_Buffer[1];
     char LAC_in_Any_Buffer[1];
     char LAC_in_Error_Info[1];
     char Error_Recovery_Info[1];
     char Zero_Pages[1];
     char Load_Font[1];
     char IPDS_Data[1];
     char Reserved[5];
} Qsp_SPFRG_t;

/*****************************************************************/
/* Structure for Page Data Section                               */
/*****************************************************************/

typedef _Packed struct Qsp_SPFRP {
     int  Text_Data_Start;
     int  Any_Data_Start;
     int  Page_Offset;
} Qsp_SPFRP_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
