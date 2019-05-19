/* START HEADER FILE SPECIFICATIONS **********************************/
/*                                                                   */
/* Header File Name: QXDADBBK                                        */
/*                                                                   */
/* Descriptive Name: EDRS Blocking APIs                              */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1998                            */
/* ALL rights reserved.                                              */
/* US Government Users Restricted Rights-                            */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM.                               */
/*                                                                   */
/*                                                                   */
/* Description: The EDRS Blocking APIs provide functions to          */
/*              allow client jobs to be temporarily suspended or     */
/*              switched to run to a backup server system in a       */
/*              client/server environment.  These APIs do not        */
/*              physically block the system, all access must be      */
/*              controlled using the functions provided by the       */
/*              Extended Dynamic Remote Support APIs.                */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qxda_BLKO0100_t                                   */
/*                 Qxda_BLKI0100_t                                   */
/*                                                                   */
/* Function Prototype List: QxdaBlockEDRS                            */
/*                          QxdaCheckEDRSBlock                       */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ -------- --------------------------*/
/* $A0= D97264       4D40  9806   BARBZ    New include               */
/* $A1= P9929306     4P40  0007   CHB      Add QxdaCheckEDRSStatus   */
/*                                                                   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QXDADBBK_h
#define QXDADBBK_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifndef __ILEC400__
  extern "C" {
#endif

/*********************************************************************/
/* Functions                                                         */
/*********************************************************************/
#define QXDA_BLOCK             '1'
#define QXDA_SWITCH_SERVER     '2'
#define QXDA_REGISTER_JOB      '3'
#define QXDA_REMOVE_JOB        '4'
#define QXDA_UNBLOCK           '5'

/*********************************************************************/
/* Server status                                                     */
/*********************************************************************/
/*********************************************************************/
#define QXDA_UNBLOCKED          0
#define QXDA_BLOCKED            1
#define QXDA_SWITCHED           2

/*********************************************************************/
/* Prototype for calling the APIs                                    */
/*********************************************************************/
#ifdef __ILEC400__
#pragma argument (QxdaBlockEDRS, OS, nowiden)
#endif
void QxdaBlockEDRS( void *,            /* Input structure            */
                    char *,            /* Input structure format     */
                    void *);           /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaCheckEDRSBlock, OS, nowiden)
#endif
void QxdaCheckEDRSBlock( void *,       /* Receiver variable          */
                         int *,        /* Length of receiver variable*/
                         char *,       /* Receiver variable format   */
                         char *,       /* EDRS server system name    */
                         void *);      /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaCheckEDRSStatus, OS, nowiden)
#endif
void QxdaCheckEDRSStatus( void *,      /* Receiver variable      @A1A*/
                          int *,       /* Length of receiver variable*/
                          char *,      /* Receiver variable format   */
                          char *,      /* EDRS server system name    */
                          int *,       /* Length of user data        */
                          char *,      /* Job-suspension user data   */
                          void *);     /* Error code                 */

/*********************************************************************/
/* Type Definition for the BLKI0100 format for the QxdaBlockEDRS     */
/* API input format.                                                 */
/*                                                                   */
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will have  */
/*       to be defined by the user.                                  */
/*********************************************************************/
typedef struct Qxda_BLKI0100
{
   char  Function;
   char  Server_Name[256];
   char  Backup_Name[256];
   char  Reserved[7];
   int   Offset_User_Data;
   int   Length_User_Data;
/*char   User_Data[]; */               /* Variable length            */
} Qxda_BLKI0100_t;

/*********************************************************************/
/* Type Definition for the BLKO0100 format for the                   */
/* QxdaCheckEDRSBlock API output format.                             */
/*********************************************************************/
typedef struct Qxda_BLKO0100
{
   int   Bytes_Returned;
   int   Bytes_Available;
   int   Server_Status;
   char  Backup_Name[256];
   int   Offset_User_Data;
   int   Length_User_Data;
/*char   User_Data[]; */               /* Variable length            */
} Qxda_BLKO0100_t;


#ifndef __ILEC400__
  }
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
