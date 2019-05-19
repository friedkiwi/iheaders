#ifndef QSYSETIDS_h
#define QSYSETIDS_h
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QSYSETID                                   */
/*                                                                */
/* Descriptive Name: setuid/setgid family of API's                */
/*                                                                */
/* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1999,2001          */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: APIs that are in the QSYSETIDS service program.   */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List:        QSYSETID_NOCHANGE                          */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: qsysetuid                             */
/*                          qsyseteuid                            */
/*                          qsysetreuid                           */
/*                          qsysetgid                             */
/*                          qsysetegid                            */
/*                          qsysetregid                           */
/*                          qsygetgroups                          */
/*                          qsysetgroups                          */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D9759700     4D50  990311 ROCH:     New Include           */
/* $01= D9854400     5D20  001200 ROCH:     Add qsygetgroups()    */
/*                                          and qsysetgroups()    */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#include <sys/types.h>              /* uid_t and gid_t types      */


#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
       #define QBFC_EXTERN extern
    #else
       #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#define QSYSETID_NOCHANGE 0xFFFFFFFF

 /******************************************************************/
 /* Prototype for calling Set User ID API                          */
 /******************************************************************/

 QBFC_EXTERN  int  qsysetuid
           (uid_t uid);        /* user id                          */

 /******************************************************************/
 /* Prototype for calling Set Effective User ID API                */
 /******************************************************************/

 QBFC_EXTERN  int  qsyseteuid
           (uid_t uid);        /* user id                          */

 /******************************************************************/
 /* Prototype for calling Set Real and Effective User ID API       */
 /******************************************************************/

 QBFC_EXTERN  int  qsysetreuid
           (uid_t ruid,        /* real uid                         */
            uid_t euid);       /* effective user id                */

 /******************************************************************/
 /* Prototype for calling Set Group ID API                         */
 /******************************************************************/

 QBFC_EXTERN  int  qsysetgid
           (gid_t gid);        /* group id                         */

 /******************************************************************/
 /* Prototype for calling Set Effective Group ID API               */
 /******************************************************************/

 QBFC_EXTERN  int  qsysetegid
           (gid_t gid);        /* group id                         */

 /******************************************************************/
 /* Prototype for calling Set Real and Effective Group ID API      */
 /******************************************************************/

 QBFC_EXTERN  int  qsysetregid
           (gid_t rgid,         /* real group id                   */
            gid_t egid);        /* effective group id              */

 /******************************************************************/
 /* Prototype for calling Get Supplementary Group IDs API          */
 /******************************************************************/

 QBFC_EXTERN  int  qsygetgroups
           (int   gidsize,      /* Number of entries in the        */
                                /* grouplist array.                */
            gid_t grouplist[]); /* supplementary group list        */

 /******************************************************************/
 /* Prototype for calling Set Supplementary Group IDs API          */
 /******************************************************************/

 QBFC_EXTERN  int  qsysetgroups
           (int   gidsize,      /* Number of entries in the        */
                                /* grouplist array.                */
     const  gid_t grouplist[]); /* supplementary group list        */

#endif
