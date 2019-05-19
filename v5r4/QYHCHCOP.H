/***   START OF HEADER FILE SPECIFICATIONS   ************************/
/*                                                                  */
/* Header File Name: qyhchcop                                       */
/*                                                                  */
/* Descriptive Name: Perform Hardware Configuration API             */
/*                                                                  */
/* 5722-SS1                                                         */
/* (C) Copyright IBM Corp. 2001                                     */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: Include header file for QCSTCTL1 service program.   */
/*                                                                  */
/* Header Files Included: None.                                     */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: None.                                            */
/*                                                                  */
/* Function Prototype List: qyhchcop                                */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- ----- ------ --------- --------------------------- */
/* $A0= D97887   5D10  000722 BRINKER:  New Include                 */
/* End CFD List.                                                    */
/*                                                                  */
/*   Additional notes about the Change Activity                     */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/***   END OF HEADER FILE SPECIFICATIONS   **************************/
#ifndef   QYHCHCOP_h
  #define  QYHCHCOP_h

/********************************************************************/
/* Prototype for QYHCHCOP API                                       */
/********************************************************************/
#ifdef __ILEC400__
    #pragma linkage (QYHCHCOP,OS,nowiden)
#else
    extern "OS"
#endif

void QYHCHCOP(char *,         /* Hardware Configuration Request        */
                unsigned int,   /* Hardware Configuration Request Length */
                unsigned int,   /* Request type                          */
                char *,         /* Receiver variable                     */
                unsigned int,   /* Length of receiver variable           */
                unsigned int *, /* Bytes of return data available        */
                void *          /* Error Code                            */
                );

#endif /* __qyhchcop_h*/
