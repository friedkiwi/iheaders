 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYPSSRVS                                   */
 /*                                                                */
 /* Descriptive Name: YPS Services ILE APIs                        */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Describe your function here.                      */
 /*                                                                */
 /* Header Files Included: H/OPM-API-name or Service-pgm-name      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QypsStartTask                         */
 /*                          QypsRetrieveTaskStatus                */
 /*                          QypsRemoveTask                        */
 /*                          QypsListSystemGroups                  */
 /*                          QypsListSystems                       */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D            4D40  980901 ROCH:     New Include           */
 /* $A1= D            5D10  001012 ROCH:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QYPSSRVS_h
#define  QYPSSRVS_h

#if(__OS400_TGTVRM__>=510)                                   /*@A1A*/
  #pragma datamodel(P128)                                    /*@A1A*/
#endif                                                       /*@A1A*/

/*******************************************************************/
/*  Prototype for calling YPS Services APIs (QYPSSRVS).            */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma argument (QypsStartTask,OS,nowiden)
     #pragma argument (QypsRetrieveTaskStatus,OS,nowiden)
     #pragma argument (QypsRemoveTask,OS,nowiden)
     #pragma argument (QypsListSystemGroups,OS,nowiden)
     #pragma argument (QypsListSystems,OS,nowiden)
#else
     extern "C" {
#endif

void QypsStartTask(int *,        /* Task ID                        */
                   int *,        /* Recurring indicator            */
                   int *,        /* Started task ID                */
                   void *);      /* Error code                     */

void QypsRetrieveTaskStatus(int *,    /* Task ID                   */
                            int *,    /* Status                    */
                            void *);  /* Error code                */

void QypsRemoveTask(int *,       /* Task ID                        */
                    void *);     /* Error code                     */

void QypsListSystemGroups(char *,   /* Owner name                  */
                          char *,   /* Qualified user space name   */
                          char *,   /* Format                      */
                          void *);  /* Error code                  */

void QypsListSystems(char *,     /* System group name              */
                     char *,     /* System group owner             */
                     char *,     /* Qualified user space name      */
                     char *,     /* Format                         */
                     void *);    /* Error code                     */

/*******************************************************************/
/* Typedefs for List APIs.                                         */
/*******************************************************************/
typedef struct Qyps_SYSG0100
{
    char systemGroupName[256];   /* System group name              */
    int  publicAccess;           /* Public access                  */
    char ownerName[10];          /* Owner name                     */
    char description[256];       /* Description                    */
} Qyps_SYSG0100_t;

typedef struct Qyps_SYSI0100
{
    char systemGroupName[256];   /* System name                    */
    char ipAddress[25];          /* Dotted decimal IP address      */
    char description[256];       /* Description                    */
    char releaseLevel[10];       /* Release level                  */
    char operatingSystem[50];    /* Operating system               */
} Qyps_SYSI0100_t;

#ifndef __ILEC400__
     }
#endif

#if(__OS400_TGTVRM__>=510)                                   /*@A1A*/
  #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                       /*@A1A*/


#endif
