#ifndef _QYASRDMS_H
#define _QYASRDMS_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QYASRDMS                               */
/*                                                                   */
/* Descriptive Name       : Retreive DASD Management Status API      */
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
/*                          prototype for the Retreive DASD          */
/*                          Management Status API.                   */
/*                                                                   */
/* Macros List            : None                                     */
/*                                                                   */
/* Structure List         : Qdm_Error_Data_Rec_t     / QYASPSTS      */
/*                          Qjo_DMST0100_t           / QYASPSTS      */
/*                                                                   */
/* Function Prototype List: QYASRDMS                                 */
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
/* $A0= D9753800     4D50  990304 4a4a      New Include              */
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
typedef long int  Qdm_Percentage_Complete_t;
typedef long int  Qdm_Session_Status_t;

/*********************************************************************/
/*********************************************************************/
/* Defines                                                           */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/* Valid Format Names                                                */
/*********************************************************************/
#define QDM_DMST0100                   "DMST0100"

/*********************************************************************/
/* Valid values for session status for QYASPSTS API.                 */
/*********************************************************************/
#define QDM_SESSION_ACTIVE_NO_OP       0  /*Session Active and is not*/
                                          /*performing an operation  */
#define QDM_SESSION_ENDED              1  /*Session was ended        */
#define QDM_SESSION_ACTIVE_PERF_OP     2  /*Session Active and is    */
                                          /*performing an operation  */
#define QDM_SESSION_IN_ERROR           3  /*Session in Error         */

/*********************************************************************/
/* Additional values for session status operation key                */
/*********************************************************************/
#define QDM_DST_SERVICE_TOOLS       5000 /*DST/Service Tools         */
                                         /*operations                */
#define QDM_NO_OPERATIONS_PERFORMED 5001 /*No operations performed   */
#define QDM_HANDLE_NOT_PERF_OP      5002 /*Specified Handle is not   */
                                         /* performing an operation  */

/*********************************************************************/
/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/*  Type Definition for the Repeating Error Data Records             */
/*   portion of the DMST0100 format                                  */
/*********************************************************************/
typedef _Packed struct Qdm_Error_Data_Rec
{
   Qdm_Exception_ID_t              Qdm_Exception_ID;
   Qdm_Exception_Data_t            Qdm_Exception_Data;
} Qdm_Error_Data_Rec_t;

/*********************************************************************/
/*  Type Definition for the DMST0100 format of the QYASPSTS API.     */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will have   */
/*       to be defined by the user.                                  */
/*********************************************************************/
typedef _Packed struct Qdm_DMST0100
{
   Qdm_Bytes_Returned_t            Qdm_Bytes_Returned;
   Qdm_Bytes_Available_t           Qdm_Bytes_Available;
   Qdm_Session_Status_t            Qdm_Session_Status;
   Qdm_Operation_Key_t             Qdm_Operation_Key;
   Qdm_Percentage_Complete_t       Qdm_Percentage_Complete;
   Qdm_Offset_t                    Qdm_Offset_To_Error_Recs;
   Qdm_Num_Of_Recs_t               Qdm_Num_Of_Error_Recs;
   Qdm_Size_Of_Recs_t              Qdm_Size_Of_Error_Recs;
   long int                        Reserved;
 /*Qdm_Error_Data_Rec_t            Qdm_Error_Data_Recs[];*//*        */
                                  /* Varying length data             */
} Qdm_DMST0100_t;

/*********************************************************************/
/*********************************************************************/
/* Function Prototype                                                */
/*********************************************************************/
/*********************************************************************/

#ifdef __ILEC400__
      #pragma linkage(QYASRDMS, OS, nowiden)
#else
      extern "OS"
#endif

void QYASRDMS
(
   /* Required parameters */
   void     *,      /* Receiver variable                 */
   long int *,      /* Length of receiver variable       */
   char     *,      /* Format name of receiver variable  */
   char     *,      /* Session Handle                    */
   void     *       /* Error code                        */
);

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*_QYASRDMS_H*/
