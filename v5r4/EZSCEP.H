/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EZSCEP                                */
/*                                                                   */
/* Descriptive Name       :  Central Server Exit Program structures  */
/*                                                                   */
/* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1995,2001              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: This include defines the parameter structures for    */
/*              the three exit points defined for the central        */
/*              server.                                              */
/*                                                                   */
/*               1) QIBM_QZSC_LM format ZSCL0100                     */
/*                    Called for license management requests         */
/*                                                                   */
/*               2) QIBM_QZSC_SM format ZSCS0100                     */
/*                    Called for system (or client) management       */
/*                    requests                                       */
/*                                                                   */
/*               3) QIBM_QZSC_NLS format ZSCN0100                    */
/*                    Called for conversion map requests             */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qzsc_Lic_Mgmt_Format_t                            */
/*                 Qzsc_Sys_Mgmt_Format_t                            */
/*                 Qzsc_Nls_Mgmt_Format_t                            */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= P3978167     3D60  950131 ROCHESTER:New Include              */
/* $A1= P9934931     5D10  001105 ROCHESTER:Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EZSCEP_h
 #define EZSCEP_h

 #if (__OS400_TGTVRM__>=510)                                  /*@A1A*/
     #pragma datamodel(P128)                                  /*@A1A*/
 #endif                                                       /*@A1A*/

 /* Server ID constants */

 #define QZSC_CENTRAL_SERVER_ID  "*CNTRLSRV "  /* Central server ID  */

 /* Format name constants */

 #define QZSC_LIC_MGMT_FORMAT  "ZSCL0100" /* License management      */
 #define QZSC_SYS_MGMT_FORMAT  "ZSCS0100" /* System (client) mgmt    */
 #define QZSC_NLS_MGMT_FORMAT  "ZSCN0100" /* Retrieve conversion map */

 /* Function ID constants */

 #define QZSC_REQUEST_LICENSE     0x1001  /* Request license         */
 #define QZSC_RELEASE_LICENSE     0x1002  /* Release license         */
 #define QZSC_RTV_LICENSE_INFO    0x1003  /* Retrieve license info   */
 #define QZSC_SET_CLIENT_ACTIVE   0x1101  /* Set client active       */
 #define QZSC_SET_CLIENT_INACTIVE 0x1102  /* Set client inactive     */
 #define QZSC_RTV_CONVERSION_MAP  0x1201  /* Retrieve conversion map */

 /* Type of license information constants */

 #define QZSC_BASIC_LIC_INFO      0x0000  /* Basic license info      */
 #define QZSC_DETAIL_LIC_INFO     0x0001  /* Detailed license info   */

 /* Node type constants */

 #define QZSC_HOST_ADDRESS        "3"     /* Host address            */

 /* Conversion map type constants */

 #define QZSC_ROUND_TRIP_MAPPING   0x0001 /* Round trip mapping      */
 #define QZSC_SUBSTITUTION_MAPPING 0x0002 /* Substitution mapping    */
 #define QZSC_BEST_FIT_MAPPING     0x0003 /* Best fit mapping        */

 /********************************************************************/
 /*  Typedef for License Management exit point format                */
 /********************************************************************/

 typedef _Packed struct Qzsc_Lic_Mgmt_Format {
       char  User_Profile[10];         /* User profile name          */
       char  Server_ID[10];            /* Server identifier          */
       char  Format_Name[8];           /* User exit format name      */
       int   Function_ID;              /* Requested function id      */
       char  Client_Name[255];         /* Client name                */
       char  User_Handle[8];           /* License user handle        */
       char  Product_ID[7];            /* Product ID                 */
       char  Feature[4];               /* Feature                    */
       char  Release[6];               /* Release                    */
       short Info_Type;                /* Type of license info       */
 } Qzsc_Lic_Mgmt_Format_t;

 /********************************************************************/
 /*  Typedef for System (or Client) Management exit point format     */
 /********************************************************************/

 typedef _Packed struct Qzsc_Sys_Mgmt_Format {
       char  User_Profile[10];         /* User profile name          */
       char  Server_ID[10];            /* Server identifier          */
       char  Format_Name[8];           /* User exit format name      */
       int   Function_ID;              /* Requested function id      */
       char  Client_Name[255];         /* Client name                */
       char  Cmnty_Name[255];          /* Community name             */
       char  Node_Type;                /* Node type                  */
       char  Node_Name[255];           /* Node Name                  */
 } Qzsc_Sys_Mgmt_Format_t;

 /********************************************************************/
 /*  Typedef for Retrieve Conversion Map exit point format           */
 /********************************************************************/

 typedef _Packed struct Qzsc_Nls_Mgmt_Format {
       char  User_Profile[10];         /* User profile name          */
       char  Server_ID[10];            /* Server identifier          */
       char  Format_Name[8];           /* User exit format name      */
       int   Function_ID;              /* Requested function id      */
       int   From_Ccsid;               /* Source data CCSID          */
       int   To_Ccsid;                 /* Target data CCSID          */
       short Conversion_Map_Type;      /* Type of conversion         */
 } Qzsc_Nls_Mgmt_Format_t;

 #if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
     #pragma datamodel(pop)                                    /*@A1A*/
 #endif                                                        /*@A1A*/

#endif
