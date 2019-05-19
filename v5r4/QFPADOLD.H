/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
 /*                                                                */
 /* Description: The Open List Network Server Storage Spaces       */
 /*              (QFPADOLD) API retrieves a list of network server */
 /*              storage spaces and related server link info.      */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qfp_DOLD0100_t          (Storage space info)   */
 /*                 Qfp_DOLD0100_Server_t   (Server information)   */
 /*                 Qfp_DOLD0100_Extent_t   (Extent information)   */
 /*                 Qfp_DOLD0100_Quorum_t   (cluster quorum info)  */
 /*                 Qfp_DOLD_List_Information_t                    */
 /*                                                                */
 /* Function Prototype List: QFPADOLD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D98120     5D10  990902 MEADEN  :   New Include           */
 /* $A1= P9946829   5D20  011030 MEADEN  :   V5R2 changes          */
 /* $B1= D99492.1   5D30  020828 TLHAZE  :   Add disk extent info  */
 /* $C1= D93187.1   5W40  040826 TLHAZE  :   Quorum Disk info      */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFPADOLD_h
 #define QFPADOLD_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Open List Network Server Storage Spaces  */
 /* (QFPADOLD) API                                                 */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPADOLD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QFPADOLD (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* List information               */
                int,             /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Storage space name qualifier   */
                int,             /* Length of storage space name   */
                                 /*   qualifier                    */
                char *,          /* Server name qualifier          */
                int,             /* Length of server name qualifier*/
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the DOLD0100 format - Server information   */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLD0100_Server
    {
       int  Dynamic_Link;
       int  Link_Sequence_Position;
       char Nwsd_Name[8];
       int  Disp_to_Server_Name;
       int  Length_of_Server_Name;
       int  Link_Type;                                     /* @C1A */
       int  Storage_Path;                                  /* @C1A */
       char Nwsh_Name[10];                                 /* @C1A */
     /*char Server_Name[];*/        /* Varying length */
    } Qfp_DOLD0100_Server_t;

 /******************************************************************/
 /* Type Definition for the DOLD0100 format - Extent information   */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLD0100_Extent
    {
       unsigned int  Extent_Capacity;                      /* @B1A */
       unsigned int  Extent_Freespace;                     /* @B1A */
       char Extent_Format[16];                             /* @B1A */
       char Volume_Name[64];                               /* @B1A */
    } Qfp_DOLD0100_Extent_t;                               /* @B1A */

 /******************************************************************/
 /* Type Definition for the DOLD0100 format - Quorum information   */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLD0100_Quorum
    {
       char Cluster_Name[10];                              /* @C1A */
       char Cluster_Domain_Name[15];                       /* @C1A */
       char Cluster_Connection_Port[10];                   /* @C1A */
       char Cluster_IP_address[15];                        /* @C1A */
       char Cluster_Subnet_Mask[15];                       /* @C1A */
    } Qfp_DOLD0100_Quorum_t;                               /* @C1A */

 /******************************************************************/
 /* Type Definition for the DOLD0100 format - Storage space info.  */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLD0100
    {
       int  Disp_to_Next_Storage_Space_Rec;
       int  Length_of_Storage_Space_Rec;
       char Name[10];
       char Description[50];
       int  Capacity;
       int  Percent_Used;
       int  Disk_Pool;
       int  Storage_Space_Format;
       int  Storage_Space_Format_Status;
       int  Access_To_Storage_Space;
       int  Disp_to_Server_List;
       int  Length_of_Server_List_Entries;
       int  Number_of_Server_List_Entries;
       int  Cluster_Quorum_Resource;                     /* @A1A */
       char Disk_Pool_Name[10];                          /* @A1A */
       char Reserved3[2];                                /* @A1A */
       int  Disp_to_Extent_List;                         /* @B1A */
       int  Length_of_Extent_List_Entries;               /* @B1A */
       int  Number_of_Extent_List_Entries;               /* @B1A */
       int  Disp_to_Cluster_Info;                        /* @C1A */
       int  Length_of_Cluster_Info;                      /* @C1A */
     /*Qfp_DOLD0100_Server_t Server_List[]; */ /* Varying length */
     /*Qfp_DOLD0100_Extent_t Extent_List[]; */ /* Varying   @B1A */
     /*Qfp_DOLD0100_Quorum_t Cluster_info[];*/ /* Fixed len @C1A */
    } Qfp_DOLD0100_t;

 /******************************************************************/
 /* Type Definition for List Information                           */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLD_List_Information
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
    } Qfp_DOLD_List_Information_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif
