/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFPADOLS                                   */
 /*                                                                */
 /* Descriptive Name: Open List Network Servers                    */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List Network Servers (QFPADOLS) API      */
 /*              retrieves a list of network servers.              */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This macro/include is a CUE.                 */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qfp_DOLS0100_t           (Windows server info) */
 /*                 Qfp_DOLS0200_t           (Hosted server info)  */
 /*                 Qfp_DOLS_List_Information_t        (List info) */
 /*                 Qfp_DOLS0100_Hot_Fix_t          (Hot fix info) */
 /*                                                                */
 /* Function Prototype List: QFPADOLS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D97488     4D50  990331 MEADEN  :   New Include           */
 /* $A1= D98212.2  v5r1m0 010300 gchaney : Teraspace stage 2       */
 /* $A2= P9946829   5D20  041601 MEADEN  :   V5R2 changes          */
 /* $R3= D99492     5D30  082602 MEADEN  :   V5R3 changes          */
 /* $R4= D93187     5D40  083004 krisd   :   V5R4 changes          */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFPADOLS_h
 #define QFPADOLS_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for calling Open List Network Servers (QFPADOLS) API */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPADOLS,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QFPADOLS (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* List information               */
                int,             /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Server name qualifier          */
                int,             /* Length of server name qualifier*/
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the DOLS0100 format - Hot Fix information  */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLS0100_Hot_Fix                /* @A2A*/
    {                                                       /* @A2A*/
       char Hot_Fix[7];                                     /* @A2A*/
       char Reserved3[1];                                   /* @A2A*/
    } Qfp_DOLS0100_Hot_Fix_t;                               /* @A2A*/

 /******************************************************************/
 /* Type Definition for the DOLS0100 format - Windows server info. */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLS0100
    {
       int  Disp_to_Next_Server_Entry;
       int  Length_of_Server_Entry;
       char Nwsd_Name[8];
       char Server_Status[1];
       char Reserved1[3];
       int  Disp_to_Server_Name;
       int  Length_of_Server_Name;
       int  Disp_to_Domain_Name;
       int  Length_of_Domain_Name;
       int  Disp_to_Server_Description;
       int  Length_of_Server_Description;
       int  Disp_to_DNS_Domain_Name;
       int  Length_of_DNS_Domain_Name;
       char Hardware_Resource_Name[10];                     /* @A2A*/
       char Hardware_Resource_Type[4];                      /* @A2A*/
       char Hardware_Resource_Model[3];                     /* @A2A*/
       char ISeries_Integ_Version[6];                       /* @A2A*/
       char ISeries_Integ_Service_Pack[7];                  /* @A2A*/
       char Reserved2[2];                                   /* @A2A*/
       int  Disp_to_Hot_Fix_List;                           /* @A2A*/
       int  Length_of_Hot_Fix_List_Entries;                 /* @A2A*/
       int  Number_of_Hot_Fix_List_Entries;                 /* @A2A*/
       char Windows_Version[10];                            /* @R3A*/
       char Windows_Build_Number[10];                       /* @R3A*/
       char Windows_Service_Pack_Level[128];                /* @R3A*/
     /*char Server_Name[];*/        /* Varying length */
     /*char Domain_Name[];*/        /* Varying length */
     /*char Server_Description[];*/ /* Varying length */
     /*char DNS_Domain_Name[];*/    /* Varying length */
     /*Qfp_DOLS0100_Hot_Fix_t Hot_Fix_List[]; */ /* Varying len @A2A*/
    } Qfp_DOLS0100_t;

 /******************************************************************/
 /* Type Definition for the DOLS0200 format - Windows, Linux and   */
 /* AIX Server info                                                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLS0200                       /* @R4A */
    {                                                      /* @R4A */
       int  Disp_to_Next_Server_Entry;                     /* @R4A */
       int  Length_of_Server_Entry;                        /* @R4A */
       char Nwsd_Name[8];                                  /* @R4A */
       char Server_Status[1];                              /* @R4A */
       char Reserved1[3];                                  /* @R4A */
       int  Disp_to_Server_Name;                           /* @R4A */
       int  Length_of_Server_Name;                         /* @R4A */
       int  Disp_to_Domain_Name;                           /* @R4A */
       int  Length_of_Domain_Name;                         /* @R4A */
       int  Disp_to_Server_Description;                    /* @R4A */
       int  Length_of_Server_Description;                  /* @R4A */
       int  Disp_to_DNS_Domain_Name;                       /* @R4A */
       int  Length_of_DNS_Domain_Name;                     /* @R4A */
       int  Disp_to_Server_OS_Description;                 /* @R4A */
       int  Length_of_Server_OS_Desc;                      /* @R4A */
       char Hardware_Name[10];                             /* @R4A */
       char Hardware_Type_Model[24];                       /* @R4A */
       char Hardware_Serial_Number[12];                    /* @R4A */
       char Server_OS_Type[10];                            /* @R4A */
       char NWSD_Connect_Type[10];                         /* @R4A */
       char NWSD_Operating_System[10];                     /* @R4A */
       char OS_Integration_Version[6];                     /* @R4A */
       char OS_Integration_Service_Level[7];               /* @R4A */
       char Server_OS_Version[10];                         /* @R4A */
       char Server_OS_BuildID[10];                         /* @R4A */
       char Server_OS_Service_Level[128];                  /* @R4A */
       char Server_Enrollment_Enabled;                     /* @R4A */
       char Domain_Enrollment_Enabled;                     /* @R4A */
       char SBMNWSCMD_Enabled;                             /* @R4A */
       char Server_Statistics_Enabled;                     /* @R4A */
       char Dynamic_Unlink_Enabled;                        /* @R4A */
       char Sync_Integration_Enabled;                      /* @R4A */
       char Hardware_Type_Model_At_Install[24];            /* @R4A */
     /*char Server_Name[];*/             /* Varying length */
     /*char Domain_Name[];*/             /* Varying length */
     /*char Server_Description[];*/      /* Varying length */
     /*char DNS_Domain_Name[];*/         /* Varying length */
     /*char Server_OS_Description[];*/   /* Varying length */

    } Qfp_DOLS0200_t;                                      /* @R4A */

 /******************************************************************/
 /* Type Definition for List Information                           */
 /******************************************************************/

 typedef _Packed struct Qfp_DOLS_List_Information
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
    } Qfp_DOLS_List_Information_t;

 #if (__OS400_TGTVRM__>=510)                               /* @A1A*/
     #pragma datamodel(pop)                                /* @A1A*/
 #endif                                                    /* @A1A*/

 #endif
