#ifndef _QYASRDI_H
#define _QYASRDI_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QYARDI                                 */
/*                                                                   */
/* Descriptive Name       : Retreive DASD Information API            */
/*                                                                   */
/*                                                                   */
/* OCO Source Materials                                              */
/*                                                                   */
/* The Source code for this program is not published or otherwise    */
/* divested of its trade secrets, irrespective of what has been      */
/* deposited with the U.S. Copyright Office                          */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp.  2000,2000                      */
/*                                   date1,date2                     */
/*                                                                   */
/* NOTE:                                                             */
/*  date1 is the original year the source code is written.           */
/*  date2 is the year any changes to the source code is made.        */
/*                                                                   */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/*                                                                   */
/* Description            : Include header file containing the       */
/*                          structure definitions and the function   */
/*                          prototype  for the Retreive DASD         */
/*                          Information API.                         */
/*                                                                   */
/* Macros List            : None                                     */
/*                                                                   */
/* Structure List         : Qdm_DU_Data_Rec_t                        */
/*                          Qdm_DMIN0100_t                           */
/*                                                                   */
/* Function Prototype List: QYASRDI                                  */
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
typedef char      Qdm_Disk_Unit_Found_Flag_t;
typedef char      Qdm_Tower_Resource_Name_t[10];
typedef long int  Qdm_Capacity_Avail_t;
typedef long int  Qdm_Device_Parity_Set_Num_t;
typedef char      Qdm_DU_Allow_In_New_PS_t;
typedef char      Qdm_DU_Allow_In_Existing_PS_t;

/*********************************************************************/
/*********************************************************************/
/* Defines                                                           */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/* Valid Format Names                                                */
/*********************************************************************/
#define QDM_DMIN0100                   "DMIN0100"

/*********************************************************************/
/* Valid values for disk unit allowed in existing device parity set  */
/* or for disk unit allowed in new device parity set                 */
/*********************************************************************/
#define QDM_DU_CANNOT_BE_ADDED        '0' /*Disk unit cannot be      */
                                          /*added to a new or        */
                                          /*existing device parity   */
                                          /*set                      */
#define QDM_DU_CAN_BE_ADDED           '1' /*Disk unit can be added   */
                                          /*to a new or existing     */
                                          /*device parity set        */

/*********************************************************************/
/* Valid values for disk unit not found flag                         */
/*********************************************************************/
#define QDM_DU_NOT_FOUND              '0' /*Disk unit was not found  */
#define QDM_DU_FOUND                  '1' /*Disk unit was found      */

/*********************************************************************/
/* Valid values for 1st element of disk unit resource name array     */
/*********************************************************************/
#define QDM_ALL_DU          "*ALL      "  /*All Disk Units           */
#define QDM_ALL_UNCFG_DU    "*UNCONFIG "  /*All unconfigured Disk    */
                                          /*units                    */


/*********************************************************************/
/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/*  Type Definition for the Repeating Disk Unit Parity Data Records  */
/*   portion of the DMIN0100 format                                  */
/*********************************************************************/
typedef _Packed struct Qdm_DU_Data_Rec
{
   Qdm_Disk_Unit_Resrc_Name_t      Qdm_Disk_Unit_Resrc_Name;
   Qdm_Disk_Unit_Found_Flag_t      Qdm_Disk_Unit_Found;
   Qdm_Tower_Resource_Name_t       Qdm_Tower_Resource_Name;
   Qdm_Tower_Number_t              Qdm_Tower_Num;
   Qdm_DU_Allow_In_New_PS_t        Qdm_DU_Allow_In_New_PS;
   Qdm_DU_Allow_In_Existing_PS_t   Qdm_DU_Allow_In_Existing_PS;
   char                            Reserved[5];
   Qdm_Device_Parity_Set_Num_t     Qdm_Device_Parity_Set_Num;
   Qdm_Capacity_Avail_t            Qdm_Capacity_Avail;
} Qdm_DU_Data_Rec_t;


/*********************************************************************/
/*  Type Definition ot the DMIN0100 format                           */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will have   */
/*       to be defined by the user.                                  */
/*********************************************************************/
typedef _Packed struct Qdm_DMIN0100
{
   Qdm_Bytes_Returned_t            Qdm_Bytes_Returned;
   Qdm_Bytes_Available_t           Qdm_Bytes_Available;
   Qdm_Offset_t                    Qdm_Offset_To_DU_Data_Recs;
   Qdm_Num_Of_Recs_t               Qdm_Num_Of_DU_Data_Recs;
   Qdm_Size_Of_Recs_t              Qdm_Size_Of_DU_Data_Recs;
   char                            Reserved[4];
 /*Qdm_DU_Data_Rec_t               Qdm_DU_Data_Recs[];*//*           */
                                  /* Varying length data             */
} Qdm_DMIN0100_t;

/*********************************************************************/
/*********************************************************************/
/* Function Prototype.                                               */
/*********************************************************************/
/*********************************************************************/

#ifdef __ILEC400__
      #pragma linkage(QYASRDI, OS, nowiden)
#else
      extern "OS"
#endif

void QYASRDI
(
   /* Required parameters */
   void     *,      /* Receiver variable                  */
   long int *,      /* Length of receiver variable        */
   char     *,      /* Format name of receiver variable   */
   char     *,      /* Disk unit resource name array      */
   long int *,      /* Number of disk unit resource names */
   void     *       /* Error code                         */
);

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*_QYASRDI_H*/
