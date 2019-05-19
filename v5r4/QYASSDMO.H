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

#ifndef _QYASSDMO_H
#define _QYASSDMO_H
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QYASDMO                                */
/*                                                                   */
/* Descriptive Name       : Start DASD Management Operation API      */
/*                                                                   */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/*                                                                   */
/* Description            : Include header file containing the       */
/*                          structure definitions and prototype      */
/*                          for the Start DASD Management            */
/*                          Operation API.                           */
/*                                                                   */
/* Macros List            : None                                     */
/*                                                                   */
/* Structure List         : Qdm_DMOP0100_t                           */
/*                          Qdm_DMOP0200_t                           */
/*                          Qdm_DMOP0300_t                           */
/*                          Qdm_DMOP0400_t                           */
/*                          Qdm_DMOP0500_t                           */
/*                          Qdm_DMOP0600_t                           */
/*                          Qdm_DMOP0700_t                       @A1A*/
/*                                                                   */
/* Function Prototype List: QYASSDMO                                 */
/*                                                                   */
/* Restrictions           :                                          */
/*    WARNING: Variables that are declared in this include must be   */
/*             no longer than 30 characters in length!!!!!!!!!!!!!   */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -----------------------  */
/* $A0= D9753800     4D50  990304 roch      New Include              */
/* $A1= D93276       5D40  050131 jgr       Add DMOP0700 format      */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the change activity                       */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#include <qyasdm.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*********************************************************************/
/*********************************************************************/
/* Type Definitions                                                 .*/
/*********************************************************************/
/*********************************************************************/
typedef long int  Qdm_ASP_Num_t;
typedef long int  Qdm_ASP_Storage_Threshold_t;
typedef char      Qdm_Balance_DU_t;
typedef char      Qdm_Device_Position_t[5];

/*********************************************************************/
/*********************************************************************/
/* Defines                                                           */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/* Valid Format Names                                                */
/*********************************************************************/
#define QDM_DMOP0100                   "DMOP0100"
#define QDM_DMOP0200                   "DMOP0200"
#define QDM_DMOP0300                   "DMOP0300"
#define QDM_DMOP0400                   "DMOP0400"
#define QDM_DMOP0500                   "DMOP0500"
#define QDM_DMOP0600                   "DMOP0600"
#define QDM_DMOP0700                   "DMOP0700"              /*@A1A*/
#define QDM_NO_FORMAT                  "        "

/*********************************************************************/
/* Valid values for Balance Disk Units flag                          */
/*********************************************************************/
#define QDM_DONT_BALANCE_DU           '0' /*Don't apply the ASP      */
                                          /*balancing function       */
#define QDM_BALANCE_DU                '1' /*Apply the ASP balancing  */
                                          /*function                 */

/*********************************************************************/
/* Valid values for Qdm_Operation_Option in Qdm_DMOP0700             */
/*********************************************************************/
#define QDM_OP_OPTION_NONE              0 /*No specificaton          */
#define QDM_OP_OPTION_TRACK             1 /*Tracking                 */
#define QDM_OP_OPTION_NOTRACK           2 /*No tracking              */

/*********************************************************************/
/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/*  Type Definition for the DMOP0100 format                          */
/*********************************************************************/
typedef _Packed struct Qdm_DMOP0100
{
   Qdm_ASP_Num_t                   Qdm_ASP_Num;
   Qdm_ASP_Storage_Threshold_t     Qdm_ASP_Storage_Threshold;
} Qdm_DMOP0100_t;

/*********************************************************************/
/*  Type Definition for the DMOP0200 format                          */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will have   */
/*       to be defined by the user.                                  */
/*********************************************************************/
typedef _Packed struct Qdm_DMOP0200
{
   Qdm_ASP_Num_t                   Qdm_ASP_Num;
   Qdm_Balance_DU_t                Qdm_Balance_DU;
   char                            Reserved[3];
   Qdm_Offset_t                    Qdm_Offset_To_DU_Resrc_Names;
   Qdm_Num_Of_Recs_t               Qdm_Num_Of_Resrc_Names;
   long int                        Reserved_2;
 /*Qdm_Disk_Unit_Resrc_Name_t      Qdm_Disk_Unit_Resrc_Names[];*//*  */
                                  /* Varying length data             */
} Qdm_DMOP0200_t;

/*********************************************************************/
/*  Type Definition for the DMOP0300 format                          */
/*********************************************************************/
typedef _Packed struct Qdm_DMOP0300
{
   Qdm_Disk_Unit_Resrc_Name_t      Qdm_Disk_Unit_Resrc_Name;
} Qdm_DMOP0300_t;

/*********************************************************************/
/*  Type Definition for the DMOP0400 format                          */
/*********************************************************************/
typedef _Packed struct Qdm_DMOP0400
{
   Qdm_Offset_t                    Qdm_Offset_To_DU_Resrc_Names;
   Qdm_Num_Of_Recs_t               Qdm_Num_Of_Resrc_Names;
   long int                        Reserved;
 /*Qdm_Disk_Unit_Resrc_Name_t      Qdm_Disk_Unit_Resrc_Names[];*//*  */
                                  /* Varying length data             */
} Qdm_DMOP0400_t;

/*********************************************************************/
/*  Type Definition for the DMOP0500 format                          */
/*********************************************************************/
typedef _Packed struct Qdm_DMOP0500
{
   Qdm_Disk_Unit_Resrc_Name_t      Qdm_Old_Disk_Unit_Resrc_Name;
   Qdm_Disk_Unit_Resrc_Name_t      Qdm_New_Disk_Unit_Resrc_Name;
} Qdm_DMOP0500_t;

/*********************************************************************/
/*  Type Definition for the DMOP0600 format                          */
/*********************************************************************/
typedef _Packed struct Qdm_DMOP0600
{
   Qdm_Disk_Unit_Resrc_Name_t      Qdm_Disk_Unit_Resrc_Name;
   Qdm_Tower_Number_t              Qdm_Tower_Num;
   Qdm_Device_Position_t           Qdm_Device_Position;
} Qdm_DMOP0600_t;

/*********************************************************************/
/*  Type Definition for the DMOP0700 format                      @A1A*/
/*********************************************************************/
typedef _Packed struct Qdm_DMOP0700
{
   Qdm_Offset_t                    Qdm_Offset_To_ASP_Num;
   Qdm_Num_Of_Recs_t               Qdm_Num_Of_ASP_Nums;
   long int                        Qdm_Operation_Option;
   long int                        Reserved;
 /*Qdm_ASP_Num_t                   Qdm_ASP_Num[];*/              /*  */
                                  /* Varying length data             */
} Qdm_DMOP0700_t;

/*********************************************************************/
/*********************************************************************/
/* Function Prototypes.                                              */
/*********************************************************************/
/*********************************************************************/

#ifdef __ILEC400__
      #pragma linkage(QYASSDMO, OS, nowiden)
#else
      extern "OS"
#endif

void QYASSDMO
(
   /* Required parameters */
   char     *,      /* Session Handle                     */
   long int *,      /* Operation Key                      */
   void     *,      /* Operation variable                 */
   long int *,      /* Length of operation variable       */
   char     *,      /* Format name of operation variable  */
                    /*  operation variable                */
   void     *       /* Error code                         */
);


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*_QYASSDMO_H*/
