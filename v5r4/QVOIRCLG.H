/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
 /* Header File Name: H/QVOIRCLG                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Image Catalogs                      */
 /*                                                                */
 /* Description: Retrieve Image Catalogs (QVOIRCLG) API            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QVOIRCLG                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL   DATE   PGMR CHANGE DESCRIPTION           */
 /* ---- -------- ------  ------ ---- ---------------------------- */
 /* $A0  D99794   V5R4M0  040331 CRW: New Include                  */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QVOIRCLG_h
 #define QVOIRCLG_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Retrieve Image Catalogs (QVOIRCLG)       */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QVOIRCLG,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QVOIRCLG (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Image catalog type             */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the RCLG0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qvoi_Catalog_Entry_Info
    {
     char Catalog_Name[10];
     char Catalog_Library[10];
     char Catalog_Type[1];
     char Catalog_Status[1];
     char Catalog_Text[50];
     char Virtual_Device[10];
     int  Virtual_Device_Status;
     char Reference_Catalog_Indicator[1];
     char Dependent_Catalog_Indicator[1];
     char Reference_Catalog[10];
     char Reference_Catalog_Library[10];
     /*char Reserved[]; */                       /* Varying length */
    } Qvoi_Catalog_Entry_Info_t;

 typedef _Packed struct Qvoi_RCLG0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_To_Catalog_List;
       int  Number_Of_Catalogs_Returned;
       int  Image_Catalog_Entry_Length;
       int  Number_Of_Catalogs;
       /*char Reserved[]; */                     /* Varying length */
       /*Qvoi_Catalog_Entry_Info_t  Array[]; */  /* Varying length */
     } Qvoi_RCLG0100_t;

 /******************************************************************/
 /* Constant for format name                                       */
 /******************************************************************/
 #define RCLG0100 "RCLG0100"

 #pragma datamodel(pop)
 #endif

