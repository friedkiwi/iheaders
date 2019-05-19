 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCLCFGD                                   */
 /*                                                                */
 /* Descriptive Name: List Configuration Descriptions              */
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
 /* Description: The QDCLCFGD API returns a list of configuration  */
 /*              descriptions.  The list elements are all of one   */
 /*              type.                                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_LCFGD_Input-t                              */
 /*                 Qdc_LCFGD_Header_t                             */
 /*                 Qdc_CFGD0100_t                                 */
 /*                 Qdc_CFGD0200_t                                 */
 /*                                                                */
 /* Function Prototype List: QDCLCFGD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940319 MOREY:    New Include           */
 /* $A1= P3624650     4D10  960718 ZUBAIR:   Two fields added in   */
 /*                                          CFGD0100 CFGD0200     */
 /* $A2= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCLCFGD_h
 #define QDCLCFGD_h

 #if (__OS400_TGTVRM__>=510)                               /* @A2A */
     #pragma datamodel(P128)                               /* @A2A */
 #endif                                                    /* @A2A */

 /******************************************************************/
 /* Prototype for calling List Configuration APIQDCLCFGD OPM       */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCLCFGD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QDCLCFGD (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* Configuration description type */
                void *,          /* Object qualifier               */
                void *,          /* Status qualifier               */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the Input Parameter Section.               */
 /******************************************************************/
 typedef _Packed struct Qdc_LCFGD_Input
    {
       char User_Space_Specified[10];
       char User_Space_Lib_Specified[10];
       char Format_Name[8];
       char Config_Desc_Type_Specified[10];
       char Object_Qual_Specified[40];
       char Status_Qual_Specified[20];
       char Reserved[2];
    } Qdc_LCFGD_Input_t;

 /******************************************************************/
 /* Type Definition for the Header Section.                        */
 /******************************************************************/
 typedef _Packed struct Qdc_LCFGD_Header
    {
       char Config_Desc_Type_Used[10];
       char Object_Qual_Used[40];
       char Status_Qual_Used[20];
       char Reserved[2];
       char UsrSpc_Name_Used[10];
       char UsrSpc_Lib_Used[10];
    } Qdc_LCFGD_Header_t;

 /******************************************************************/
 /* Type Definition for the CFGD0100 Format.                       */
 /******************************************************************/
 typedef _Packed struct Qdc_CFGD0100
    {
       char Config_Name[10];
       char Config_Desc_Cat[10];
       char Config_Desc_Fmt[8];             /* @A1A */
       char Config_Desc_Cmd_Sfx[4];         /* @A1A */
    } Qdc_CFGD0100_t;

 /******************************************************************/
 /* Type Definition for the CFGD0200 Format.                       */
 /******************************************************************/
 typedef _Packed struct Qdc_CFGD0200
    {
       int  Current_Status_Numeric;
       char Config_Name[10];
       char Config_Desc_Cat[10];
       char Current_Status_Text[20];
       char Text_Desc[50];
       char Job_Name[10];
       char User_Name[10];
       char Job_Number[6];
       char Pass_Thru_Device[10];
       char Config_Desc_Fmt[8];             /* @A1A */
       char Config_Desc_Cmd_Sfx[4];         /* @A1A */
    } Qdc_CFGD0200_t;

 #if (__OS400_TGTVRM__>=510)                /* @A2A */
     #pragma datamodel(pop)                 /* @A2A */
 #endif                                     /* @A2A */

 #endif

