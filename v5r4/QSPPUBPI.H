/*** START HEADER FILE SPECIFICATIONS ***************************/
/*                                                              */
/* Header File Name: H/QSPPUBPI                                 */
/*                                                              */
/* Descriptive Name: Publish Printer Information.               */
/*                                                              */
/* 5722-SS1(C) Copyright IBM Corp. 2001,2001                    */
/* All rights reserved.                                         */
/* US Government Users Restricted Rights -                      */
/* Use, duplication or disclosure restricted                    */
/* by GSA ADP Schedule Contract with IBM Corp.                  */
/*                                                              */
/* Licensed Materials-Property of IBM                           */
/*                                                              */
/*                                                              */
/* Description: The Publish Printer Information API             */
/*              publishes information about printer objects     */
/*              in an LDAP directory.                           */
/*                                                              */
/*                                                              */
/* Header Files Included: None.                                 */
/*                                                              */
/* Macros List: None.                                           */
/*                                                              */
/* Structure List: None                                         */
/*                                                              */
/* Function Prototype List: QSPPUBPI.                           */
/*                                                              */
/* Change Activity:                                             */
/*                                                              */
/* CFD List:                                                    */
/*                                                              */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ ----- ------ --------- --------------------*/
/* $A0= D9731400     5D10  000310 KJV:      New Include         */
/*                                                              */
/* End CFD List.                                                */
/*                                                              */
/*  Additional notes about the Change Activity                  */
/* End Change Activity.                                         */
/*** END HEADER FILE SPECIFICATIONS *****************************/

 #ifndef QSPPUBPI_h
 #define QSPPUBPI_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPPUBPI,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for calling Publish Printer Information API        */
 /*  QSPPUBPI                                                    */
 /****************************************************************/
 void QSPPUBPI (int *,          /* Publishing Action            */
                void *,          /* Print Information            */
                int *,           /* Length of Print Information  */
                char *,          /* Format name                  */
                void *);         /* Error code                   */




#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
