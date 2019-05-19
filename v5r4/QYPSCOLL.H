/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
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
 /* Header File Name: H/QYPSCOLL                                   */
 /*                                                                */
 /* Descriptive Name: YPS Collector ILE APIs                       */
 /*                                                                */
 /* Structure List: Qyps_STAQ_t                                    */
 /*                 Qyps_BEGIN_PARMS_t                             */
 /*                 Qyps_RSCI0100_t                                */
 /*                 Qyps_USER_CAT_ATTR_t                           */
 /*                 Qyps_USER_CAT_PROGRAM_ATTR_t                   */
 /*                                                                */
 /* Function Prototype List: QypsAddCollectorNotification          */
 /*                          QypsChgCollectorCatAttributes         */
 /*                          QypsChgSysCollectorAttributes         */
 /*                          QypsCycleCollector                    */
 /*                          QypsEndCollector                      */
 /*                          QypsOverrideCollectorCategory     @A1A*/
 /*                          QypsRmvCollectorNotification          */
 /*                          QypsRtvCollectorCatAttributes         */
 /*                          QypsRtvSysCollectorAttributes         */
 /*                          QypsStartCollector                    */
 /*                          QypsRtvSysCollectorInfo           @A3A*/
 /*                          QypsRegCollectorDataCategory      @B0A*/
 /*                          QypsDeregCollectorDataCategory    @B0A*/
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D            4D40  980901 ROCH:     New Include           */
 /* $A1= P3697377     5D10  990629           Add support for       */
 /*                                            category override   */
 /* $A3               5D10  991201           Add support for       */
 /*                                          RtvSysCollectorInfo   */
 /* $B0               5D20  010510           Register category api */
 /* $JP  P9A32189     5P10  030612           Fix support for       */
 /*                                          RtvSysCollectorInfo   */
 /* $A4  P9A98703     5D40  050526           fix errors            */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QYPSCOLL_h
#define  QYPSCOLL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*******************************************************************/
/*  Prototype for calling YPS Collector APIs (QYPSCOLL).           */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma argument (QypsAddCollectorNotification,OS,nowiden)
     #pragma argument (QypsChgCollectorCatAttributes,OS,nowiden)
     #pragma argument (QypsChgSysCollectorAttributes,OS,nowiden)
     #pragma argument (QypsCycleCollector,OS,nowiden)
     #pragma argument (QypsEndCollector,OS,nowiden)
     #pragma argument (QypsOverrideCollectorCategory,OS,nowiden)
     #pragma argument (QypsRmvCollectorNotification,OS,nowiden)
     #pragma argument (QypsRtvCollectorCatAttributes,OS,nowiden)
     #pragma argument (QypsRtvSysCollectorAttributes,OS,nowiden)
     #pragma argument (QypsAddStartCollector,OS,nowiden)
     #pragma argument (QypsRtvSysCollectorInfo,OS,nowiden)
     #pragma argument (QypsRegCollectorDataCategory,OS,nowiden)
     #pragma argument (QypsDeregCollectorDataCategory,OS,nowiden)
#else
     extern "C" {
#endif

void QypsAddCollectorNotification(char *,   /* Collector name      */
                                  char *,   /* Data queue name     */
                                  int *,    /* Notification type   */
                                  char *,   /* Category list       */
                                  int *,    /* Category count      */
                                  void *);  /* Error code          */

void QypsChgCollectorCatAttributes(char *,  /* Collector name      */
                                   char *,  /* Category name       */
                                   int *,   /* State               */
                                   int *,   /* Collection interval */
                                   int *,   /* Collect at beginning*/
                                   int *,   /* Collect at ending   */
                                   void *,  /* Beginning parameters*/
                                   void *); /* Error code          */

void QypsChgSysCollectorAttributes(char *,  /* Collector name      */
                                   int  *,  /* Default interval    */
                                   char *,  /* Library             */
                                   int *,   /* Retention period    */
                                   int *,   /* Cycle time          */
                                   int *,   /* Cycle interval      */
                                   int *,   /* Companion user job  */
                                   char *,  /* Default definition  */
                                   void *); /* Error code          */

void QypsCycleCollector(char *,             /* Collector name      */
                        void *);            /* Error code          */

void QypsEndCollector(char *,               /* Collector name      */
                      void *);              /* Error code          */

void QypsOverrideCollectorCategory(char *, /* Collector name       */
                                   char *, /* Category list        */
                                   int *,  /* Category count       */
                                   int *,  /* Category intrval     */
                                   void *, /* Error code           */
                                   char *);/* thread ID            */

void QypsRmvCollectorNotification(char *,   /* Collector name      */
                                  char *,   /* Data queue name     */
                                  int *,    /* Notification type   */
                                  char *,   /* Category list       */
                                  int *,    /* Category count      */
                                  void *);  /* Error code          */

void QypsRtvCollectorCatAttributes(char *,  /* Collector name      */
                                   char *,  /* Definition name     */
                                   char *,  /* Category name       */
                                   int *,   /* State               */
                                   int *,   /* Collection interval */
                                   int *,   /* Collect at beginning*/
                                   int *,   /* Collect at ending   */
                                   void *,  /* Beginning parameters*/
                                   void *); /* Error code          */

void QypsRtvSysCollectorAttributes(char *,  /* Collector name      */
                                   int  *,  /* Default interval    */
                                   char *,  /* Library             */
                                   int *,   /* Retention period    */
                                   int *,   /* Cycle time          */
                                   int *,   /* Cycle interval      */
                                   int *,   /* Companion user job  */
                                   char *,  /* Default definition  */
                                   char *,  /* Current definition  */
                                   void *); /* Error code          */

void QypsStartCollector(char *,             /* Collector name      */
                        char *,             /* Collector definition*/
                        void *);            /* Error code          */

                                            /*        Start    @A3A*/
void QypsRtvSysCollectorInfo( char *,       /* Collector name      */
                              char *,       /* Receiver variable   */
                              int  *,       /* Receiver variable   */
                                            /*    length           */
                              char *,       /* Format name         */
                              void *);      /* Error code          */
                                            /*        End      @A3A*/

                                            /*        Start    @B0A*/
void QypsRegCollectorDataCategory( char *,  /* Collector name      */
                                   char *,  /* Category name       */
                                   char *,  /* Collector definition*/
                                   int  *,  /* CCSID               */
                                   char *,  /* Data collection pgm */
                                            /* attributes          */
                                   char *,  /* Category attributes */
                                   void *); /* Error code          */
                                            /*        End      @B0A*/

                                            /*        Start    @B0A*/
void QypsDeregCollectorDataCategory( char *,/* Collector name      */
                                     char *,/* Category name       */
                                     void *);  /* Error code       */
                                            /*        End      @B0A*/



/*******************************************************************/
/* Typedefs for APIs.                                              */
/*******************************************************************/

/* QypsAddCollectorNotification response format*/
typedef struct Qyps_DTAQ
{
    char entryType[10];          /* Entry type: "*COLNOT   "       */
    char entryId[2];             /* Entry identifier               */
    char collectorObject[10];    /* Collector object name          */
    char collectorLibrary[10];   /* Collector object library       */
    char sequence[8];            /* Sequence number                */
    char category[10];           /* Category                       */
    char reserved[30];           /* Reserved                       */
} Qyps_STAQ_t;                   /* Data Queue Notification Record */

typedef struct Qyps_BEGIN_PARMS
{
    int  length;                 /* Length of character data       */
                                 /* followed by character data     */
} Qyps_BEGIN_PARMS_t;            /* Beginning parameters data      */


                                            /*        Start    @A3A*/
 /*  data format for QypsRtvSysCollectorInfo  */
typedef _Packed struct Qyps_RSCI0100
{
    int  bytesReturned         ;       /* Bytes returned from API  */
    int  bytesAvailable        ;       /* Bytes available from API */
    int  defaultInterval       ;       /* Default interval         */
    int  retentionPeriod       ;       /* Retention period         */
    int  cycleTime             ;       /* Cycle time               */
    int  cycleInterval         ;       /* Cycle interval           */
    int  companionUserJob      ;       /* Companion user job       */
    char defaultDefinition[10] ;       /* Default definition       */
    char currentDefinition[10] ;       /* Current definition       */
    char activeMgtcolName[10]  ;       /* Active MGTCOL Name       */
    char activeMgtcolibrary[10];       /* Active MGTCOL library    */
    char collectorStartTime[14];       /* Collector Start Time     */
    char collectionLibrary[10];        /* Configured library       */

} Qyps_RSCI0100_t;
                                            /*        End      @A3A*/
                                            /*      Start      @B0A*/
 /* QypsRegCollectorDataCategory structures */
typedef struct Qyps_USER_CAT_PROGRAM_ATTR
{
    int fixedPortionSize ;       /* The size in bytes of the fixed */
                                 /* portion of the structure       */
    char programType[10];        /* Program type                   */
    char parameterFormat[8];     /* Parameter format id            */
    char ownerUserId[10];        /* Owning user id                 */
    char jobDescription[20];     /* Job description                */
    char qualPgmSrvpgmName[20];  /* Qualified program/srvpgm name  */
    int  workAreaSize;           /* Size of work area              */
    int  srvpgmEntrypointOffset; /* Offset in bytes to the the     */
                                 /* service program entrypoint     */
    int  srvpgmEntrypointLength; /* Length of srvpgm entrypoint    */

    int  javaClassNameOffset;    /* Offset in bytes to the java    */
                                 /* class name                     */
    int  javaClassNameLength;    /* Length of java class name      */

    int  javaClasspathOffset;    /* Offset in bytes to the java    */
                                 /* class path                     */
    int  javaClasspathLength;    /* Length of java classpath       */

    int  categoryParameterOffset;/* Offset in bytes to the         */
                                 /* category parameter string      */
    int  categoryParameterLength;/* Length of the category         */
                                 /* parameter string               */
    int  javaOptionsOffset;      /* Offset in bytes to the Java    */
                                 /* Options Array                  */
    int  javaOptionsNumber;      /* Number of Java options in array*/
    char rsvd[4];                /* Reserved for future use        */

} Qyps_USER_CAT_PROGRAM_ATTR_t;  /* Category Program Attributes    */


typedef struct Qyps_USER_CAT_ATTR
{
    int  structureSize;          /* Size in bytes of the structure */
    int  minCollectionInterval;  /* Minimum collection interval    */
    int  maxCollectionInterval;  /* Maximum collection interval    */
    int  defaultCollectionInterval; /* Default collection interval */

    char qualifiedMsgId[27];     /* The library qualified message  */
                                 /* file and message id for the    */
                                 /* description text               */
    char categoryDesc[50];       /* Category description text      */
    char reserved[3];            /* Reserved for future use        */
} Qyps_USER_CAT_ATTR_t;          /* Category Attributes            */
                                 /* End                        @B0A*/


#ifndef __ILEC400__
     }
#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
