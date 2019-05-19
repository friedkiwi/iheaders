/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2006, 2006                                */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: EQQQRYGV                                        */
/*                                                                   */
/* Descriptive Name: Query Governor Exit Program                     */
/*                                                                   */
/*                                                                   */
/* Description: The Query Governor Exit Program provides the         */
/*              estimated runtime, the user specified runtime        */
/*              limit, the estimated temporary storage usage,        */
/*              and the user specified temporary storage limit       */
/*              for a query.  If applicable, it also provides        */
/*              the SQL statement text.                              */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: QQQ_QRYGV_QRYG0100_t                              */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= P9B21467 v5r4m0f.xpf 060220 Aldrich: New Include             */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

 #ifndef EQQQRYGV_h
 #define EQQQRYGV_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

/*********************************************************************/
/* Type Definitions for the Query Governor Exit Point information.   */
/*********************************************************************/

typedef _Packed struct QQQ_QRYGV_QRYG0100
   {
      int Header_Size;
      char Format_Name[8];    /* QRYG0100 - Query Governor           */
      char Job_Name[10];      /* Job name of job running the query   */
      char User_Name[10];     /* User name under which the job that is
                                issuing the query request is started */
      char Job_Number[6];     /* Job number of job running the query */
      char Current_User_Name[10]; /* Current user profile that
                                     initiated the query.            */
      int Runtime_Estimated;  /* In seconds                          */
      int Runtime_Limit;      /* In seconds                          */
      int Temp_Storage_Usage_Estimated; /* In megabytes              */
      int Temp_Storage_Usage_Limit;  /* In megabytes                 */
      int Offset_to_SQL_Statement; /* 0, if not SQL query            */
      int Length_of_SQL_Statement; /* 0, if not SQL query            */
    /*char SQL_Statement_Text[1];*/  /* Varying length               */
   } QQQ_QRYGV_QRYG0100_t;

#if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
#endif
#endif

