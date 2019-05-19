/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
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
 /* Header File Name: H/QUSEPT                                     */
 /*                                                                */
 /* Descriptive Name: API Function Prototypes                      */
 /*                                                                */
 /* Description: Include header file for access to APIs found      */
 /*              in System Entry Point Table                       */
 /*                                                                */
 /* Restriction: This header file should never be included         */
 /*              directly.  Its intended use is via header file    */
 /*              QLIEPT.                                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: All AS/400 APIs which can be located  */
 /*                          via System Entry Point Table          */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QUSEPT_h
 #define QUSEPT_h
 #ifndef __ILEC400__
   #include <bcd.h>
 #endif
 #include <pointer.h>
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#define QALGENA EPT_CALL(QALGENA)
#ifdef __ILEC400__
 #pragma linkage(QALGENA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QALGENA_T(
               void *,         /* Receiver Variable                 */
               int   ,         /* Receiver Variable Length          */
               int  *,         /* Size of Alert                     */
               void *,         /* Qualified Alert Table Name        */
               char *,         /* Message ID                        */
               void *,         /* Message Data                      */
               int   ,         /* Message Data Length               */
               void *);        /* Error Code                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QALRTVA EPT_CALL(QALRTVA)
#ifdef __ILEC400__
 #pragma linkage(QALRTVA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QALRTVA_T(
               void *,              /* Receiver Variable             */
               int   ,              /* Length of Receiver Variable   */
               char *,              /* Format                        */
               char *,              /* Alert Log Identifier          */
               void *);             /* Error Code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QALSNDA EPT_CALL(QALSNDA)
#ifdef __ILEC400__
 #pragma linkage(QALSNDA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QALSNDA_T(
              void *,           /* Alert Major Vector              */
              int   ,           /* Alert Major Vector Length       */
              char *,           /* Local / Received indicator      */
              char *,           /* Origin                          */
              void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QBNLPGMI EPT_CALL(QBNLPGMI)
#ifdef __ILEC400__
 #pragma linkage(QBNLPGMI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNLPGMI_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified ILE program name     */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QBNLSPGM EPT_CALL(QBNLSPGM)
#ifdef __ILEC400__
 #pragma linkage(QBNLSPGM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNLSPGM_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified service program name */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QBNRSPGM EPT_CALL(QBNRSPGM)
#ifdef __ILEC400__
 #pragma linkage(QBNRSPGM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNRSPGM_T(
               void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified service program name       */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QCAPCMD EPT_CALL(QCAPCMD)
#ifdef __ILEC400__
 #pragma linkage(QCAPCMD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCAPCMD_T(
               void *,          /* Source command string          */
               int,             /* Length of source command string*/
               void *,          /* Options control block          */
               int,             /* Options control block length   */
               char *,          /* Options control block format   */
               void *,          /* Changed command string         */
               int,             /* Length available for changed   */
                                /* command string                 */
               int *,           /* Length changed for changed     */
                                /* command string                 */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QCDRCMDI EPT_CALL(QCDRCMDI)
#ifdef __ILEC400__
 #pragma linkage(QCDRCMDI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCDRCMDI_T(
               void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified command name               */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLRDTAQ EPT_CALL(QCLRDTAQ)
#ifdef __ILEC400__
 #pragma linkage(QCLRDTAQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLRDTAQ_T(
               char *,           /* Data queue name                */
               ...);             /* Optional parameter group 1:
                                     char *        Key order
                                     _Decimal(3,0)  Length of key
                                                      data
                                     void *        Key data
                                     void *        Error code      */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLRPGAS EPT_CALL(QCLRPGAS)
#ifdef __ILEC400__
 #pragma linkage(QCLRPGAS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLRPGAS_T(
                void *,        /* Output Data Buffer                */
                int   ,        /* Length of Output Data Buffer      */
                void *,        /* Qualified Program Name            */
                int   ,        /* Call Stack Counter                */
                void *,        /* Data Handle                       */
                int  *,        /* Length of Data Available          */
                void *);       /* Error Code                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLRPGMI EPT_CALL(QCLRPGMI)
#ifdef __ILEC400__
 #pragma linkage(QCLRPGMI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLRPGMI_T(
               void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified program name               */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLSCAN EPT_CALL(QCLSCAN)
#ifdef __ILEC400__
 #pragma linkage(QCLSCAN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLSCAN_T(
                  void *,        /* Character string               */
                  _Decimal(3,0), /* Length of character string     */
                  _Decimal(3,0), /* Start position                 */
                  void *,        /* Character pattern              */
                  _Decimal(3,0), /* Length of character pattern    */
                  char *,        /* Translate                      */
                  char *,        /* Trim                           */
                  char *,        /* Wild card                      */
                  _Decimal(3,0) *); /* Character string result     */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLSPGAS EPT_CALL(QCLSPGAS)
#ifdef __ILEC400__
 #pragma linkage(QCLSPGAS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLSPGAS_T(
                void *,        /* Input Data Buffer                 */
                int   ,        /* Length of Input Data Buffer       */
                void *,        /* Qualified Program Name            */
                int   ,        /* Call Stack Counter                */
                void *,        /* Data Handle                       */
                void *);       /* Error Code                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QCMDCHK EPT_CALL(QCMDCHK)
#ifdef __ILEC400__
 #pragma linkage(QCMDCHK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCMDCHK_T(
                  void *,        /* Command string                 */
                  _Decimal(15, 5),/* Length of command string      */
                  ...);          /* Optional parameter:
                                      IGC process control          */
#ifdef __ILEC400__
#else
 }
#endif
#define QCMDEXC EPT_CALL(QCMDEXC)
#ifdef __ILEC400__
 #pragma linkage(QCMDEXC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCMDEXC_T(
                  void *,        /* Command string                 */
                  _Decimal(15, 5),/* Length of command string      */
                  ...);          /* Optional Parameter:
                                      IGC process control          */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBLDBR EPT_CALL(QDBLDBR)
#ifdef __ILEC400__
 #pragma linkage(QDBLDBR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBLDBR_T(
             void *,               /* Qualified user space name     */
             char *,               /* Format name                   */
             void *,               /* File and library name         */
             char *,               /* Member name                   */
             char *,               /* Record format name            */
             void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBRTVFD EPT_CALL(QDBRTVFD)
#ifdef __ILEC400__
 #pragma linkage(QDBRTVFD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBRTVFD_T(
              void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              void *,               /* Returned file and library name*/
              char *,               /* Format name                   */
              void *,               /* File and library name         */
              char *,               /* Record format name            */
              char *,               /* Overrride processing          */
              char *,               /* System                        */
              char *,               /* Format type                   */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCLCFGD EPT_CALL(QDCLCFGD)
#ifdef __ILEC400__
 #pragma linkage(QDCLCFGD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCLCFGD_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* Configuration description type */
                void *,          /* Object qualifier               */
                void *,          /* Status qualifier               */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRCFGS EPT_CALL(QDCRCFGS)
#ifdef __ILEC400__
 #pragma linkage(QDCRCFGS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRCFGS_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Configuration description type */
                char *,          /* Configuration description name */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRCTLD EPT_CALL(QDCRCTLD)
#ifdef __ILEC400__
 #pragma linkage(QDCRCTLD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRCTLD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Controller name                */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRDEVD EPT_CALL(QDCRDEVD)
#ifdef __ILEC400__
 #pragma linkage(QDCRDEVD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRDEVD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Line name                      */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRLIND EPT_CALL(QDCRLIND)
#ifdef __ILEC400__
 #pragma linkage(QDCRLIND_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRLIND_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Line name                      */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCXLATE EPT_CALL(QDCXLATE)
#ifdef __ILEC400__
 #pragma linkage(QDCXLATE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCXLATE_T(
               _Decimal(5,0) *,/* Length of data being converted  */
               char *,         /* Conversion data                 */
               char *,         /* SBCS conversion table name      */
               ...);           /* Optionals:
                                    SBCS conversion table library
                                    Output data
                                    Length of output buffer
                                    Length of converted data
                                    DBCS Language
                                    Shift-out and shift-in chars
                                    Type of conversion            */
#ifdef __ILEC400__
#else
 }
#endif
#define QDFRTVFD EPT_CALL(QDFRTVFD)
#ifdef __ILEC400__
 #pragma linkage(QDFRTVFD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDFRTVFD_T(
               void *,           /* Receiver Variable            */
               int   ,           /* Length of receiver variable  */
               char *,           /* Format name                  */
               void *,           /* Qualified file name          */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QDMRTVFO EPT_CALL(QDMRTVFO)
#ifdef __ILEC400__
 #pragma linkage(QDMRTVFO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDMRTVFO_T(
              void *,               /* Override information          */
              int,                  /* Length of override information*/
              char *,               /* Override information format   */
              char *,               /* Override information file name*/
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QD0ENDTS EPT_CALL(QD0ENDTS)
#ifdef __ILEC400__
 #pragma linkage(QD0ENDTS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QD0ENDTS_T(
               void *,           /* Translation session handle   */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QD0STRTS EPT_CALL(QD0STRTS)
#ifdef __ILEC400__
 #pragma linkage(QD0STRTS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QD0STRTS_T(
               void *,           /* Translation session handle   */
               char *,           /* Display device name          */
               char *,           /* Default screen size          */
               char *,           /* Alternate screen size        */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QD0TRNDS EPT_CALL(QD0TRNDS)
#ifdef __ILEC400__
 #pragma linkage(QD0TRNDS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QD0TRNDS_T(
               void *,           /* Translation session handle   */
               void *,           /* To buffer                    */
               int   ,           /* To buffer output length      */
               int   ,           /* To buffer length             */
               char *,           /* To buffer type               */
               void *,           /* From buffer                  */
               int   ,           /* From buffer length           */
               char *,           /* From buffer type             */
               char * ,          /* Operation                    */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QEARMVBM EPT_CALL(QEARMVBM)
#ifdef __ILEC400__
 #pragma linkage(QEARMVBM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEARMVBM_T(
                char *,        /* Course ID                        */
                void *);       /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QECCVTEC EPT_CALL(QECCVTEC)
#ifdef __ILEC400__
 #pragma linkage(QECCVTEC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QECCVTEC_T(
               void *,          /* Edit mask                       */
               int  *,          /* Edit mask length                */
               int  *,          /* Receiver variable length        */
               char *,          /* Zero balance fill character     */
               char *,          /* Edit code                       */
               char *,          /* Fill or floating currency indic */
               int,             /* Source variable precision       */
               int,             /* Source variable decimal position*/
               void *);         /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QECCVTEW EPT_CALL(QECCVTEW)
#ifdef __ILEC400__
 #pragma linkage(QECCVTEW_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QECCVTEW_T(
               void *,          /* Edit mask                       */
               int  *,          /* Edit mask length                */
               int  *,          /* Receiver variable length        */
               void *,          /* Edit word                       */
               int,             /* Edit word length                */
               void *,          /* Error code                      */
               ...);            /* Optional parameters:            */
                                /*   Source length     int *       */
                                /*   Currency symbol   char *      */
#ifdef __ILEC400__
#else
 }
#endif
#define QECEDT EPT_CALL(QECEDT)
#ifdef __ILEC400__
 #pragma linkage(QECEDT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QECEDT_T(
             void *,            /* Receiver variable               */
             int,               /* Receiver variable length        */
             void *,            /* source variable                 */
             char *,            /* Source variable class           */
             int,               /* Source variable precision       */
             void *,            /* Edit mask                       */
             int,               /* Edit mask length                */
             char *,            /* Zero balance fill character     */
             void *);           /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QESRSRVA EPT_CALL(QESRSRVA)
#ifdef __ILEC400__
 #pragma linkage(QESRSRVA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QESRSRVA_T(
              void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              long,                 /* Number of service attributes  */
                                    /*   to retrieve                 */
              void *,               /* Service attribute keys        */
              void *                /* Error code                    */
             );
#ifdef __ILEC400__
#else
 }
#endif
#define QEZAST EPT_CALL(QEZAST)
#ifdef __ILEC400__
 #pragma linkage(QEZAST_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZAST_T(
            );                   /* No parms                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZBCHJB EPT_CALL(QEZBCHJB)
#ifdef __ILEC400__
 #pragma linkage(QEZBCHJB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZBCHJB_T(
              );                 /* No parms                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZLSGNU EPT_CALL(QEZLSGNU)
#ifdef __ILEC400__
 #pragma linkage(QEZLSGNU_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZLSGNU_T(
               void *,           /* Qualified user space name    */
               char *,           /* Format name                  */
               char *,           /* User name                    */
               char *,           /* Display station name         */
               char *,           /* Include disconnected jobs and
                                    suspended group jobs         */
               char *,           /* Include signed-off users with
                                    output waiting to print      */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZMAIN EPT_CALL(QEZMAIN)
#ifdef __ILEC400__
 #pragma linkage(QEZMAIN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZMAIN_T(
             );                  /* No parms                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZMSG EPT_CALL(QEZMSG)
#ifdef __ILEC400__
 #pragma linkage(QEZMSG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZMSG_T(
            );                   /* No parms                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZOUTPT EPT_CALL(QEZOUTPT)
#ifdef __ILEC400__
 #pragma linkage(QEZOUTPT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZOUTPT_T(
              );                 /* No parms                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZSAVIN EPT_CALL(QEZSAVIN)
#ifdef __ILEC400__
 #pragma linkage(QEZSAVIN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZSAVIN_T(
              );                 /* No parms                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZSNDMG EPT_CALL(QEZSNDMG)
#ifdef __ILEC400__
 #pragma linkage(QEZSNDMG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZSNDMG_T(
              );                 /* No required parameters.
                                    Optional Parameter Group 1:
                                      Message type
                                      Delivery mode
                                      Message text
                                      Length of message text
                                      List of user profiles
                                      Number of user profiles
                                      Message sent indicator
                                      Function requested
                                      Error code
                                    Optional Parameter Group 2:
                                      Show send a message disp
                                      Qualified message queue
                                      Name type indicator        */
#ifdef __ILEC400__
#else
 }
#endif
#define QFVADDA EPT_CALL(QFVADDA)
#ifdef __ILEC400__
 #pragma linkage(QFVADDA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFVADDA_T(
               void *,           /* Change request description     */
               char *,           /* Activity                       */
               char *,           /* Activity type                  */
               char *,           /* Destination format             */
               void *,           /* Destination                    */
               int,              /* Number of destinations         */
               void *,           /* Condition list                 */
               int,              /* Number of conditions           */
               void *,           /* Start time                     */
               char *,           /* Hold                           */
               char *,           /* Function parameters            */
               int,              /* Function parameters length     */
               char *,           /* Text                           */
               char *,           /* Replace                        */
               char *,           /* Activity added                 */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFVLSTA EPT_CALL(QFVLSTA)
#ifdef __ILEC400__
 #pragma linkage(QFVLSTA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFVLSTA_T(
               void *,           /* User Space Name                */
               char *,           /* Format                         */
               void *,           /* Change Request Description     */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFVLSTNL EPT_CALL(QFVLSTNL)
#ifdef __ILEC400__
 #pragma linkage(QFVLSTNL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFVLSTNL_T(
                void *,           /* Qualified User Space Name       */
                char *,           /* Format Name                     */
                void *,           /* Qualified Node List Name        */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QFVRMVA EPT_CALL(QFVRMVA)
#ifdef __ILEC400__
 #pragma linkage(QFVRMVA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFVRMVA_T(
               void *,           /* Change request description     */
               char *,           /* Activity                       */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFVRTVCD EPT_CALL(QFVRTVCD)
#ifdef __ILEC400__
 #pragma linkage(QFVRTVCD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFVRTVCD_T(
                void *,          /* Receiver Variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format                         */
                void *,          /* Change Request Description     */
                char *,          /* Activity                       */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFCHGAT EPT_CALL(QHFCHGAT)
#ifdef __ILEC400__
 #pragma linkage(QHFCHGAT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFCHGAT_T(
               void *,           /* Path name                      */
               int,              /* Path name length               */
               void *,           /* Attribute information table    */
               int,              /* Length of attribute info table */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFCHGFP EPT_CALL(QHFCHGFP)
#ifdef __ILEC400__
 #pragma linkage(QHFCHGFP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFCHGFP_T(
               void *,           /* Open file handle               */
               char *,           /* Move information               */
               int,              /* Distance to move               */
               unsigned int *,   /* New offset                     */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFCLODR EPT_CALL(QHFCLODR)
#ifdef __ILEC400__
 #pragma linkage(QHFCLODR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFCLODR_T(
               void *,           /* Open directory handle          */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFCLOSF EPT_CALL(QHFCLOSF)
#ifdef __ILEC400__
 #pragma linkage(QHFCLOSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFCLOSF_T(
               void *,           /* Open directory handle          */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFCPYSF EPT_CALL(QHFCPYSF)
#ifdef __ILEC400__
 #pragma linkage(QHFCPYSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFCPYSF_T(
               void *,           /* Source file path name          */
               int,              /* Source file path name length   */
               char *,           /* Copy information               */
               void *,           /* Target file path name          */
               int,              /* Target file path name length   */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFCRTDR EPT_CALL(QHFCRTDR)
#ifdef __ILEC400__
 #pragma linkage(QHFCRTDR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFCRTDR_T(
               void *,           /* Path name                      */
               int,              /* Length of path name            */
               void *,           /* Attribute information table    */
               int,              /* Length of attribute info table */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFCTLFS EPT_CALL(QHFCTLFS)
#ifdef __ILEC400__
 #pragma linkage(QHFCTLFS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFCTLFS_T(
               void *,           /* Open file handle               */
               char *,           /* File system name               */
               void *,           /* Input data buffer              */
               int,              /* Input data buffer length       */
               void *,           /* Output data buffer             */
               int,              /* Output data buffer length      */
               int *,            /* Length of data returned        */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFDLTDR EPT_CALL(QHFDLTDR)
#ifdef __ILEC400__
 #pragma linkage(QHFDLTDR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFDLTDR_T(
               void *,           /* Path name                      */
               int,              /* Length of path name            */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFDLTSF EPT_CALL(QHFDLTSF)
#ifdef __ILEC400__
 #pragma linkage(QHFDLTSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFDLTSF_T(
               void *,           /* Path name                      */
               int,              /* Length of path name            */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFDRGFS EPT_CALL(QHFDRGFS)
#ifdef __ILEC400__
 #pragma linkage(QHFDRGFS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFDRGFS_T(
               char *,           /* File system name               */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFFRCSF EPT_CALL(QHFFRCSF)
#ifdef __ILEC400__
 #pragma linkage(QHFFRCSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFFRCSF_T(
               void *,           /* Files to force                 */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFGETSZ EPT_CALL(QHFGETSZ)
#ifdef __ILEC400__
 #pragma linkage(QHFGETSZ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFGETSZ_T(
               void *,           /* Open file handle               */
               unsigned int *,   /* File size                      */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFLSTFS EPT_CALL(QHFLSTFS)
#ifdef __ILEC400__
 #pragma linkage(QHFLSTFS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFLSTFS_T(
               void *,           /* Qualified user space name      */
               char *,           /* Format name                    */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFLULSF EPT_CALL(QHFLULSF)
#ifdef __ILEC400__
 #pragma linkage(QHFLULSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFLULSF_T(
               void *,           /* Open file handle               */
               char *,           /* Lock information               */
               unsigned int,     /* File offset where lock begins  */
               unsigned int,     /* Bytes to lock                  */
               unsigned int,     /* File offset where unlock begins*/
               unsigned int,     /* Bytes to unlock                */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFMOVSF EPT_CALL(QHFMOVSF)
#ifdef __ILEC400__
 #pragma linkage(QHFMOVSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFMOVSF_T(
               void *,           /* Source file path name          */
               int,              /* Source file path name length   */
               void *,           /* Target file path name          */
               int,              /* Target file path name length   */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFOPNDR EPT_CALL(QHFOPNDR)
#ifdef __ILEC400__
 #pragma linkage(QHFOPNDR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFOPNDR_T(
               void *,           /* Directory handle               */
               void *,           /* Path name                      */
               int,              /* Path name length               */
               char *,           /* Open information               */
               void *,           /* Attribute selection table      */
               int,              /* Length of attr selection table */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFOPNSF EPT_CALL(QHFOPNSF)
#ifdef __ILEC400__
 #pragma linkage(QHFOPNSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFOPNSF_T(
               void *,           /* File handle                    */
               void *,           /* Path name                      */
               int,              /* Path name length               */
               char *,           /* Open information               */
               void *,           /* Attribute information table    */
               int,              /* Length of attribute info table */
               char *,           /* Action taken                   */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFRDDR EPT_CALL(QHFRDDR)
#ifdef __ILEC400__
 #pragma linkage(QHFRDDR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFRDDR_T(
              void *,            /* Open directory handle          */
              void *,            /* Data buffer                    */
              int,               /* Data buffer length             */
              int,               /* Num directory entries to read  */
              int *,             /* Number directory entries read  */
              int *,             /* Length of data returned        */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFRDSF EPT_CALL(QHFRDSF)
#ifdef __ILEC400__
 #pragma linkage(QHFRDSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFRDSF_T(
              void *,            /* Open file handle               */
              void *,            /* Data buffer                    */
              int,               /* Bytes to read                  */
              int *,             /* Bytes actually read            */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFRGFS EPT_CALL(QHFRGFS)
#ifdef __ILEC400__
 #pragma linkage(QHFRGFS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFRGFS_T(
              char *,            /* File system name               */
              char *,            /* Version                        */
              char *,            /* Registration information       */
              void *,            /* Qualified exit program names   */
              void *,            /* File system description        */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFRNMDR EPT_CALL(QHFRNMDR)
#ifdef __ILEC400__
 #pragma linkage(QHFRNMDR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFRNMDR_T(
               void *,           /* Path name                      */
               int,              /* Path name length               */
               void *,           /* New directory name             */
               int,              /* New directory name length      */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFRNMSF EPT_CALL(QHFRNMSF)
#ifdef __ILEC400__
 #pragma linkage(QHFRNMSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFRNMSF_T(
               void *,           /* Path name                      */
               int,              /* Path name length               */
               void *,           /* New file name                  */
               int,              /* New file name length           */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFRTVAT EPT_CALL(QHFRTVAT)
#ifdef __ILEC400__
 #pragma linkage(QHFRTVAT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFRTVAT_T(
               void *,           /* Path name                      */
               int,              /* Path name length               */
               void *,           /* Attribute selection table      */
               int,              /* Length of attr selection table */
               void *,           /* Attribute information table    */
               int,              /* Length of attribute info table */
               int *,            /* Length of data returned        */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFSETSZ EPT_CALL(QHFSETSZ)
#ifdef __ILEC400__
 #pragma linkage(QHFSETSZ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFSETSZ_T(
               void *,           /* Open file handle               */
               unsigned int,     /* File size                      */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QHFWRTSF EPT_CALL(QHFWRTSF)
#ifdef __ILEC400__
 #pragma linkage(QHFWRTSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHFWRTSF_T(
               void *,           /* Open file handle               */
               void *,           /* Data buffer                    */
               int,              /* Bytes to write                 */
               int *,            /* Bytes actually written         */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QJORJIDI EPT_CALL(QJORJIDI)
#ifdef __ILEC400__
 #pragma linkage(QJORJIDI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QJORJIDI_T(
                void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                void *,          /* Qualified journal name         */
                char *,          /* Journal identifier (JID) value */
                char *,          /* Format name                    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QJOSJRNE EPT_CALL(QJOSJRNE)
#ifdef __ILEC400__
 #pragma linkage(QJOSJRNE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QJOSJRNE_T(
                void *,          /* Qualified Journal Name         */
                void *,          /* Journal Entry Information      */
                void *,          /* Entry Data                     */
                int,             /* Length of Entry Data           */
                void *,          /* Error Code                     */
                ...);            /* Optional parameters:
                                    Receiver variable
                                    Length of receiver variable
                                    Format of receiver variable
                                    Minimum length of entry data
                                         returned             @A2A*/
#ifdef __ILEC400__
#else
 }
#endif
#define QLGCNVCS EPT_CALL(QLGCNVCS)
#ifdef __ILEC400__
 #pragma linkage(QLGCNVCS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGCNVCS_T(
              char *,                   /* Request control block    */
              char *,                   /* Input data               */
              char *,                   /* Output data              */
              long,                     /* Length of data           */
              char *);                  /* Error code               */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGCNVSS EPT_CALL(QLGCNVSS)
#ifdef __ILEC400__
 #pragma linkage(QLGCNVSS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGCNVSS_T(
               char *,    /* Converted sort sequence table        */
               char *,    /* Type of returned sort sequence table */
               char *,    /* Substitution values encountered      */
               char *,    /* Source sort sequence table           */
               int,       /* CCSID of source table                */
               int,       /* CCSID of converted table             */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGRTVLC EPT_CALL(QLGRTVLC)
#ifdef __ILEC400__
 #pragma linkage(QLGRTVLC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGRTVLC_T(
                  void *,                /* Receiver Variable      */
                  int   ,                /* Length Receiver Var    */
                  char *,                /* Format Name            */
                  void *,                /* Locale Path Name       */
                  int   ,                /* Locale category key    */
                  void *);               /* Error Code             */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGRTVLI EPT_CALL(QLGRTVLI)
#ifdef __ILEC400__
 #pragma linkage(QLGRTVLI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGRTVLI_T(
               void *,           /* Reciever variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGRTVSS EPT_CALL(QLGRTVSS)
#ifdef __ILEC400__
 #pragma linkage(QLGRTVSS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGRTVSS_T(
               void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               void *,           /* Qualified table name          */
               char *,           /* Language identifier requested */
               int,              /* CCSID of returned table       */
               char *,           /* Format name                   */
               void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGSCNMX EPT_CALL(QLGSCNMX)
#ifdef __ILEC400__
 #pragma linkage(QLGSCNMX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGSCNMX_T(
               char *,             /* Double-byte indicator       */
               char *,             /* Input data buffer           */
               int,                /* Length of input data buffer */
               void *);            /* Error code                  */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGSORT EPT_CALL(QLGSORT)
#ifdef __ILEC400__
 #pragma linkage(QLGSORT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGSORT_T(
              void *,            /* Request control block         */
              void *,            /* Input data buffer             */
              void *,            /* Output data buffer            */
              int,               /* Length of output data buffer  */
              int *,             /* Length of returned data       */
              void *,            /* Error code                    */
              ...);              /* Optionals:
                                      Returned records feedback
                                      Length of returned records
                                        feedback                  */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGSRTIO EPT_CALL(QLGSRTIO)
#ifdef __ILEC400__
 #pragma linkage(QLGSRTIO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGSRTIO_T(
               void *,           /* Request control block         */
               void *,           /* Input data buffer             */
               void *,           /* Output data buffer            */
               int  *,           /* Length of output data buffer  */
               void *,           /* Output data information       */
               void *,           /* Error Code                    */
               ...);             /* Optionals:
                                      Returned records feedback
                                      Length of returned records
                                        feedback                  */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGTRDTA EPT_CALL(QLGTRDTA)
#ifdef __ILEC400__
 #pragma linkage(QLGTRDTA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGTRDTA_T(
               char *,           /* Output data buffer            */
               int  *,           /* Length of ouput data returned */
               char *,           /* Remaining data buffer         */
               int  *,           /* Remaining data length         */
               char *,           /* Input data buffer             */
               int,              /* Length of buffers             */
               int,              /* Truncate length               */
               int,              /* CCSID of input data           */
               void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGVLID EPT_CALL(QLGVLID)
#ifdef __ILEC400__
 #pragma linkage(QLGVLID_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGVLID_T(
              char *,                 /* Language ID to validate */
              void *);                /* Error code              */
#ifdef __ILEC400__
#else
 }
#endif
#define QLICHGLL EPT_CALL(QLICHGLL)
#ifdef __ILEC400__
 #pragma linkage(QLICHGLL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLICHGLL_T(
               void *,           /* Current library name           */
               void *,           /* First product library          */
               void *,           /* Second product library         */
               void *,           /* User library list names        */
               int,              /* Number of user library names   */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLICOBJD EPT_CALL(QLICOBJD)
#ifdef __ILEC400__
 #pragma linkage(QLICOBJD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLICOBJD_T(
               char *,           /* Returned library name          */
               void *,           /* Qualified object name          */
               char *,           /* Object type                    */
               void *,           /* Changed object information     */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLICVTTP EPT_CALL(QLICVTTP)
#ifdef __ILEC400__
 #pragma linkage(QLICVTTP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLICVTTP_T(
               char *,           /* Conversion                     */
               char *,           /* Symbolic object type           */
               char *,           /* Hexadecimal object type        */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLIRLIBD EPT_CALL(QLIRLIBD)
#ifdef __ILEC400__
 #pragma linkage(QLIRLIBD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLIRLIBD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Library name                   */
                void *,          /* Attributes to retrieve         */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLIRNMO EPT_CALL(QLIRNMO)
#ifdef __ILEC400__
 #pragma linkage(QLIRNMO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLIRNMO_T(
              void *,            /* From qualified object name     */
              char *,            /* Object type                    */
              void *,            /* To qualified object name       */
              char *,            /* Replace object                 */
              void *,            /* Error code                     */
              ...);               /* Optional Parameters:           */
#ifdef __ILEC400__
#else
 }
#endif
#define QLPCDINF EPT_CALL(QLPCDINF)
#ifdef __ILEC400__
 #pragma linkage(QLPCDINF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLPCDINF_T(
                void *,   /* User space Name            */
                char *,   /* User space format          */
                char *,   /* Distribution Setmap ID     */
                int  ,    /* CDROM size in bytes        */
                char *,   /* CDROM volume ID prefix     */
                void *);  /* Error Code                 */
#ifdef __ILEC400__
#else
 }
#endif
#define QLPCDRST EPT_CALL(QLPCDRST)
#ifdef __ILEC400__
 #pragma linkage(QLPCDRST_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLPCDRST_T(
                void *,   /* User space Name            */
                char *,   /* User space format          */
                int  ,    /* Current CD-ROM state       */
                char *,   /* Distribution setmap ID used*/
                int  ,    /* Requested CDROM state      */
                char *,   /* Distribution setmap ID     */
                int  ,    /* Option                     */
                void *);  /* Error Code                 */
#ifdef __ILEC400__
#else
 }
#endif
#define QLPISLNG EPT_CALL(QLPISLNG)
#ifdef __ILEC400__
 #pragma linkage(QLPISLNG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLPISLNG_T(
               char *,            /* NLV language ID                */
               char *,            /* Device                         */
               char *,            /* Interactive mode screen I/O ind*/
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLPLPRDS EPT_CALL(QLPLPRDS)
#ifdef __ILEC400__
 #pragma linkage(QLPLPRDS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLPLPRDS_T(
              void *,              /* Qualified user space name     */
              char *,              /* Format name                   */
              void *,              /* Qualified savefile name       */
              void *);             /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QLRCHGCM EPT_CALL(QLRCHGCM)
#ifdef __ILEC400__
 #pragma linkage(QLRCHGCM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLRCHGCM_T(
                void *);                 /* Error Code             */
#ifdef __ILEC400__
#else
 }
#endif
#define QLRRTVCE EPT_CALL(QLRRTVCE)
#ifdef __ILEC400__
 #pragma linkage(QLRRTVCE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLRRTVCE_T(
                void *,                  /* Exit Program Name      */
                char *,                  /* Scope of Exit Program  */
                void *);                 /* Error Code             */
#ifdef __ILEC400__
#else
 }
#endif
#define QLRSETCE EPT_CALL(QLRSETCE)
#ifdef __ILEC400__
 #pragma linkage(QLRSETCE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLRSETCE_T(
                void *,                  /* Exit Program Name      */
                char *,                  /* Scope of Exit Program  */
                char *,                  /* New Exit Prog Library  */
                void *,                  /* Current Exit Prog Name */
                void *);                 /* Error Code             */
#ifdef __ILEC400__
#else
 }
#endif
#define QLYGETS EPT_CALL(QLYGETS)
#ifdef __ILEC400__
 #pragma linkage(QLYGETS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLYGETS_T(
               char* ,         /* Status String                     */
               void* );        /* Error Structure                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QLYRDBI EPT_CALL(QLYRDBI)
#ifdef __ILEC400__
 #pragma linkage(QLYRDBI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLYRDBI_T(
               void *,               /* Output Buffer              */
               int,                  /* Maximum Size               */
               char *,               /* Read Mode                  */
               int *,                /* Buffer Length              */
               int *,                /* No. of Records             */
               void *);              /* Error Code Structure       */
#ifdef __ILEC400__
#else
 }
#endif
#define QLYSETS EPT_CALL(QLYSETS)
#ifdef __ILEC400__
 #pragma linkage(QLYSETS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLYSETS_T(
                char*,               /* Status Word                */
                void*);              /* Error Code Structure       */
#ifdef __ILEC400__
#else
 }
#endif
#define QLYWRTBI EPT_CALL(QLYWRTBI)
#ifdef __ILEC400__
 #pragma linkage(QLYWRTBI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLYWRTBI_T(
                void*,               /* Input Buffer               */
                int,                 /* Buffer Length              */
                void*);              /* Error code structure       */
#ifdef __ILEC400__
#else
 }
#endif
#define QLZAADDK EPT_CALL(QLZAADDK)
#ifdef __ILEC400__
 #pragma linkage(QLZAADDK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLZAADDK_T(
               void *,            /* License key information        */
               char *,            /* License key info format name   */
               int  *,            /* Number of license key records
                                     added                          */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLZADDLI EPT_CALL(QLZADDLI)
#ifdef __ILEC400__
 #pragma linkage(QLZADDLI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLZADDLI_T(
              void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License information            */
              char *,             /* License info format name       */
              void *,             /* Error code                     */
              ...);               /* Optional Parameters:           */
#ifdef __ILEC400__
#else
 }
#endif
#define QLZAGENK EPT_CALL(QLZAGENK)
#ifdef __ILEC400__
 #pragma linkage(QLZAGENK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLZAGENK_T(
              void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License key input              */
              char *,             /* License key input format name  */
              void *,             /* License key output             */
              int,                /* Length of license key output   */
              char *,             /* License key output format name */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLZAREQ EPT_CALL(QLZAREQ)
#ifdef __ILEC400__
 #pragma linkage(QLZAREQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLZAREQ_T(
              void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License user                   */
              char *,             /* License user format name       */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLZARLS EPT_CALL(QLZARLS)
#ifdef __ILEC400__
 #pragma linkage(QLZARLS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLZARLS_T(
              void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License user                   */
              char *,             /* License user format name       */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLZARTV EPT_CALL(QLZARTV)
#ifdef __ILEC400__
 #pragma linkage(QLZARTV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLZARTV_T(
              void *,             /* Receiver variable              */
              int,                /* Length of receiver variable    */
              char *,             /* Format name for rec variable   */
              void *,             /* Product identification         */
              char *,             /* Produc id format name          */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLZARTVK EPT_CALL(QLZARTVK)
#ifdef __ILEC400__
 #pragma linkage(QLZARTVK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLZARTVK_T(
               void *,            /* Receiver variable              */
               int,               /* Length of receiver variable    */
               char *,            /* Format name for rec variable   */
               void *,            /* Product identification         */
               char *,            /* Produc id format name          */
               void *,            /* System                         */
               char *,            /* System format name             */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMARQSOA EPT_CALL(QMARQSOA)
#ifdef __ILEC400__
 #pragma linkage(QMARQSOA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMARQSOA_T(
                      void *,      /* Output Order ID               */
                      void *,      /* Input Order ID                */
                      int,         /* Send/Receive Option           */
                      void *,      /* Contact Information           */
                      void *,      /* Configuration file            */
                      void *,      /* Network address               */
                      void *,      /* Request Information           */
                      void *,      /* System Information            */
                      void *);     /* Error Code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHCHGEM EPT_CALL(QMHCHGEM)
#ifdef __ILEC400__
 #pragma linkage(QMHCHGEM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHCHGEM_T(
                _INVPTR *,      /* Invocation pointer              */
                int,            /* Call stack counter              */
                void *,         /* Message key                     */
                char *,         /* Modification option             */
                char *,         /* Reply text                      */
                int,            /* Reply text length               */
                void *);        /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHCTLJL EPT_CALL(QMHCTLJL)
#ifdef __ILEC400__
 #pragma linkage(QMHCTLJL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHCTLJL_T(
                void *,          /* Output file name structure     */
                void *,          /* Output file name structure fmt */
                void *,          /* Message filter array           */
                int,             /* Number of message filter array
                                    element                        */
                void *,          /* Qualified error message queue  */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHLJOBL EPT_CALL(QMHLJOBL)
#ifdef __ILEC400__
 #pragma linkage(QMHLJOBL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHLJOBL_T(
                char *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Message selection information  */
                int,             /* Size of message selection info */
                char *,          /* Format message selection info  */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHLSTM EPT_CALL(QMHLSTM)
#ifdef __ILEC400__
 #pragma linkage(QMHLSTM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHLSTM_T(
               char *,           /* Qualified user space name      */
               char *,           /* Format name                    */
               void *,           /* Message selection information  */
               int,              /* Size of message selection info */
               char *,           /* Format message selection info  */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHMOVPM EPT_CALL(QMHMOVPM)
#ifdef __ILEC400__
 #pragma linkage(QMHMOVPM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHMOVPM_T(
                void *,          /* Message key                    */
                void *,          /* Message types                  */
                int,             /* Number of message types        */
                void *,          /* To call stack entry            */
                int,             /* Call stack counter             */
                void *,          /* Error code                     */
                ...);            /* Group 1 Optionals:
                                       Length of call stack entry.
                                       To call stack entry
                                          qualification.
                                    Group 2 Optionals:
                                       To call stack entry data
                                          type.
                                       From call stack entry.
                                       From call stack counter.    */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHPRMM EPT_CALL(QMHPRMM)
#ifdef __ILEC400__
 #pragma linkage(QMHPRMM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHPRMM_T(
               _INVPTR *,        /* Call stack entry pointer       */
               int,              /* Call stack counter             */
               void *,           /* Message key                    */
               char *,           /* Message identifier             */
               void *,           /* Qualified message file name    */
               void *,           /* Message data                   */
               int,              /* Length of message data         */
               char *,           /* Message type                   */
               int,              /* Message severity               */
               char *,           /* Log option                     */
               char *,           /* Priority                       */
               void *,           /* New message key                */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHQRDQD EPT_CALL(QMHQRDQD)
#ifdef __ILEC400__
 #pragma linkage(QMHQRDQD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHQRDQD_T(
                void *,          /* Data queue information         */
                int,             /* Size of data queue information */
                char *,          /* Format of data queue info      */
                void *);         /* Data queue name and library    */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRCVM EPT_CALL(QMHRCVM)
#ifdef __ILEC400__
 #pragma linkage(QMHRCVM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRCVM_T(
               void *,           /* Message information            */
               int,              /* Length of message information  */
               char *,           /* Format name                    */
               void *,           /* Qualified message queue name   */
               char *,           /* Message type                   */
               void *,           /* Message key                    */
               int,              /* Wait time                      */
               char *,           /* Message action                 */
               void *,           /* Error code                     */
               ...   );          /* Optional parameter group:
                                       Coded Character Set Id.     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRCVPM EPT_CALL(QMHRCVPM)
#ifdef __ILEC400__
 #pragma linkage(QMHRCVPM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRCVPM_T(
                void *,          /* Message information            */
                int,             /* Length of message information  */
                char *,          /* Format name                    */
                void *,          /* Call stack entry               */
                int,             /* Call stack counter             */
                char *,          /* Message type                   */
                void *,          /* Message key                    */
                int,             /* Wait time                      */
                char *,          /* Message action                 */
                void *,          /* Error code                     */
                ...);            /* Group 1 Optionals:
                                       Length of call stack entry.
                                       Call stack entry
                                          qualification.
                                    Group 2 Optionals:
                                       Call stack entry data type.
                                       Coded Character Set Id.     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRDQM EPT_CALL(QMHRDQM)
#ifdef __ILEC400__
 #pragma linkage(QMHRDQM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRDQM_T(
               void *,           /* Retrieve message information   */
               int,              /* Size of retrieve message info  */
               char *,           /* Format of retrieve message info*/
               void *,           /* Data queue name and library    */
               void *,           /* Message selection information  */
               int,              /* Size of message selection info */
               char *,           /* Format of message selection inf*/
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRMFAT EPT_CALL(QMHRMFAT)
#ifdef __ILEC400__
 #pragma linkage(QMHRMFAT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRMFAT_T(
                void *,          /* Message file information       */
                int,             /* Message file information length*/
                char *,          /* Format name                    */
                void *,          /* Qualified message file name    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRMQAT EPT_CALL(QMHRMQAT)
#ifdef __ILEC400__
 #pragma linkage(QMHRMQAT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRMQAT_T(
                void *,          /* Message queue information      */
                int,             /* Length of message queue info   */
                char *,          /* Format name                    */
                char *,          /* Qualified message queue name   */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRMVM EPT_CALL(QMHRMVM)
#ifdef __ILEC400__
 #pragma linkage(QMHRMVM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRMVM_T(
               void *,           /* Qualified message queue name   */
               void *,           /* Message key                    */
               char *,           /* Messages to remove             */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRMVPM EPT_CALL(QMHRMVPM)
#ifdef __ILEC400__
 #pragma linkage(QMHRMVPM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRMVPM_T(
                void *,          /* Call stack entry               */
                int,             /* Call stack counter             */
                void *,          /* Message key                    */
                char *,          /* Messages to remove             */
                void *,          /* Error code                     */
                ...);            /* Group 1 Optionals:
                                       Length of call stack entry.
                                       Call stack entry
                                          qualification.
                                       Remove unhandled exceptions.
                                    Group 2 Optionals:
                                       Call stack entry data type  */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRSNEM EPT_CALL(QMHRSNEM)
#ifdef __ILEC400__
 #pragma linkage(QMHRSNEM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRSNEM_T(
                void *,           /* Message key                   */
                void *,           /* Error code                    */
                ...);             /* Optionals:
                                       To call stack entry.
                                       Length of call stack entry
                                          parameter.
                                       Format of call stack entry
                                          parameter.
                                       From call stack entry addr.
                                       From call stack counter.    */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRTVM EPT_CALL(QMHRTVM)
#ifdef __ILEC400__
 #pragma linkage(QMHRTVM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRTVM_T(
               void *,           /* Message information            */
               int,              /* Length of message information  */
               char *,           /* Format name                    */
               char *,           /* Message identifier             */
               void *,           /* Qualified message file name    */
               void *,           /* Message data                   */
               int,              /* Length of message data         */
               char *,           /* Replace substitution values    */
               char *,           /* Return format control          */
               void *,           /* Error Code                     */
               ...   );          /* Optional parameter group:
                                      Retrieve option
                                      Convert to CCSID
                                      Message data CCSID           */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHRTVRQ EPT_CALL(QMHRTVRQ)
#ifdef __ILEC400__
 #pragma linkage(QMHRTVRQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHRTVRQ_T(
                void *,          /* Message information            */
                int,             /* Length of message information  */
                char *,          /* Format name                    */
                char *,          /* Message type                   */
                void *,          /* Message key                    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHSNDBM EPT_CALL(QMHSNDBM)
#ifdef __ILEC400__
 #pragma linkage(QMHSNDBM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHSNDBM_T(
                void *,          /* Message text                   */
                int,             /* Length of message text         */
                char *,          /* Message type                   */
                void *,          /* Qualified message queue list   */
                int,             /* Number of message queues       */
                void *,          /* Qualified reply message queue  */
                void *,          /* Error code                     */
                ...);            /* Optional:
                                       Coded Character Set Id      */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHSNDM EPT_CALL(QMHSNDM)
#ifdef __ILEC400__
 #pragma linkage(QMHSNDM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHSNDM_T(
               char *,           /* Message identifier             */
               void *,           /* Qualified message file name    */
               void *,           /* Message data or text           */
               int,              /* Length of message data or text */
               char *,           /* Message type                   */
               void *,           /* Qualified message queue list   */
               int,              /* Number of message queues       */
               void *,           /* Qualified reply message queue  */
               void *,           /* Message key                    */
               void *,           /* Error code                     */
               ...);             /* Optional:
                                       Coded Character Set Id      */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHSNDPM EPT_CALL(QMHSNDPM)
#ifdef __ILEC400__
 #pragma linkage(QMHSNDPM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHSNDPM_T(
                char *,           /* Message identifier             */
                void *,           /* Qualified message file name    */
                void *,           /* Message data or text           */
                int,              /* Length of message data or text */
                char *,           /* Message type                   */
                void *,           /* Call stack entry               */
                int,              /* Call stack counter             */
                void *,           /* Message key                    */
                void *,           /* Error code                     */
                ...);             /* Group 1 Optionals:
                                        Length of call stack entry.
                                        Call stack entry
                                           qualification.
                                        Display program messages
                                           screen wait time.
                                     Group 2 Optionals:
                                        Call stack entry data type.
                                        Coded Character Set Id.     */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHSNDRM EPT_CALL(QMHSNDRM)
#ifdef __ILEC400__
 #pragma linkage(QMHSNDRM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHSNDRM_T(
                void *,          /* Message key                    */
                void *,          /* Qualified message queue name   */
                char *,          /* Message reply text             */
                int,             /* Length of message reply text   */
                char *,          /* Remove message option          */
                void *,          /* Error code                     */
                ...);            /* Optional:
                                       Coded Character Set Id      */
#ifdef __ILEC400__
#else
 }
#endif
#define QMHSNDSM EPT_CALL(QMHSNDSM)
#ifdef __ILEC400__
 #pragma linkage(QMHSNDSM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QMHSNDSM_T(

        char *,            /* Scope type                      */
        void *,            /* Scope program name              */
        void *,            /* Scope program data              */
        int,               /* Scope program data length       */
        void *,            /* Message key                     */
        void *);           /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMCHGMN EPT_CALL(QNMCHGMN)
#ifdef __ILEC400__
 #pragma linkage(QNMCHGMN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMCHGMN_T(
                int   ,           /* Handle                          */
                char *,           /* Mode Name                       */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMDRGAP EPT_CALL(QNMDRGAP)
#ifdef __ILEC400__
 #pragma linkage(QNMDRGAP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMDRGAP_T(
                int,              /* Handle                          */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMDRGFN EPT_CALL(QNMDRGFN)
#ifdef __ILEC400__
 #pragma linkage(QNMDRGFN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMDRGFN_T(
                void *,           /* Qualified Filter Name           */
                char *,           /* Filter Type                     */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMDRGTI EPT_CALL(QNMDRGTI)
#ifdef __ILEC400__
 #pragma linkage(QNMDRGTI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMDRGTI_T(
                int,              /* Queue Handle                    */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMENDAP EPT_CALL(QNMENDAP)
#ifdef __ILEC400__
 #pragma linkage(QNMENDAP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMENDAP_T(
                int,              /* Handle                          */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMRCVDT EPT_CALL(QNMRCVDT)
#ifdef __ILEC400__
 #pragma linkage(QNMRCVDT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMRCVDT_T(
                int   ,           /* Handle                          */
                void *,           /* Receiver Variable               */
                int   ,           /* Receiver Variable Length        */
                void *,           /* Request Identifier              */
                void *,           /* Remote Application Name         */
                char *,           /* Data Type                       */
                int   ,           /* Wait Time                       */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMRCVOC EPT_CALL(QNMRCVOC)
#ifdef __ILEC400__
 #pragma linkage(QNMRCVOC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMRCVOC_T(
                int   ,           /* Handle                          */
                void *,           /* Request Identifier              */
                void *,           /* Remote Application Name         */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMREGAP EPT_CALL(QNMREGAP)
#ifdef __ILEC400__
 #pragma linkage(QNMREGAP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMREGAP_T(
                int   ,           /* Handle                          */
                char *,           /* Catagory                        */
                char *,           /* Application Type                */
                char *,           /* Replace Registration            */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMRGFN EPT_CALL(QNMRGFN)
#ifdef __ILEC400__
 #pragma linkage(QNMRGFN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMRGFN_T(
                void *,           /* Qualified Filter Name           */
                char *,           /* Filter Type                     */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMRGTI EPT_CALL(QNMRGTI)
#ifdef __ILEC400__
 #pragma linkage(QNMRGTI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMRGTI_T(
                int *,           /* Queue handle                     */
                void *,          /* Options                          */
                int,             /* Number options                   */
                char *,          /* Format                           */
                void *,          /* Qualified user space name        */
                void *,          /* Qualified queue name             */
                char *,          /* Queue type                       */
                char *,          /* Replace registration             */
                void *);         /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMRRGF EPT_CALL(QNMRRGF)
#ifdef __ILEC400__
 #pragma linkage(QNMRRGF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMRRGF_T(
               void *,            /* Receiver Variable               */
               int   ,            /* Length of Receiver Variable     */
               char *,            /* Filter Type                     */
               char *,            /* Format                          */
               void *);           /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMRTVMN EPT_CALL(QNMRTVMN)
#ifdef __ILEC400__
 #pragma linkage(QNMRTVMN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMRTVMN_T(
                int   ,           /* Handle                          */
                char *,           /* Mode Name                       */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMSNDER EPT_CALL(QNMSNDER)
#ifdef __ILEC400__
 #pragma linkage(QNMSNDER_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMSNDER_T(
                int   ,           /* Handle                          */
                void *,           /* Request Identifier              */
                char *,           /* Application Error Code.         */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMSNDRP EPT_CALL(QNMSNDRP)
#ifdef __ILEC400__
 #pragma linkage(QNMSNDRP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMSNDRP_T(
                int   ,           /* Handle                          */
                void *,           /* Request Identifier              */
                void *,           /* Send Buffer                     */
                int   ,           /* Send Buffer Length              */
                char *,           /* Reply Type                      */
                int   ,           /* Wait time                       */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMSNDRQ EPT_CALL(QNMSNDRQ)
#ifdef __ILEC400__
 #pragma linkage(QNMSNDRQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMSNDRQ_T(
                int   ,           /* Handle                          */
                void *,           /* Remote Application Name         */
                void *,           /* Request Identifier              */
                void *,           /* Send Buffer                     */
                int   ,           /* Send Buffer Length              */
                char *,           /* Request Type                    */
                char *,           /* Post Reply                      */
                int   ,           /* Wait Time                       */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QNMSTRAP EPT_CALL(QNMSTRAP)
#ifdef __ILEC400__
 #pragma linkage(QNMSTRAP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QNMSTRAP_T(
               int  *,           /* Handle                          */
               char *,           /* Local Application Name          */
               void *,           /* Data Queue                      */
               void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QOCCTLOF EPT_CALL(QOCCTLOF)
#ifdef __ILEC400__
 #pragma linkage(QOCCTLOF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOCCTLOF_T(
                char *,           /* Request type                  */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QOGCHGOE EPT_CALL(QOGCHGOE)
#ifdef __ILEC400__
 #pragma linkage(QOGCHGOE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOGCHGOE_T(
                void *,           /* Document handling exit pgm    */
                char *,           /* Document handling mail flag   */
                void *,           /* Document conversion exit pgm  */
                void *,           /* Error code                    */
                ...);             /*  Optional Parameter Group:
                                     Active app enabler support
                                     Active mail handling support
                                     Active PCFILE id processing   */
#ifdef __ILEC400__
#else
 }
#endif
#define QOGRTVOE EPT_CALL(QOGRTVOE)
#ifdef __ILEC400__
 #pragma linkage(QOGRTVOE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOGRTVOE_T(
                void *,           /* Receiver variable             */
                int   ,           /* Length of receiver variable   */
                char *,           /* Format name                   */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QOKDSPDP EPT_CALL(QOKDSPDP)
#ifdef __ILEC400__
 #pragma linkage(QOKDSPDP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOKDSPDP_T(
                char *,           /* User ID                       */
                char *,           /* User address                  */
                char *,           /* Title                         */
                char *,           /* Function key processing       */
                void *,           /* Message to be displayed       */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QOKDSPX4 EPT_CALL(QOKDSPX4)
#ifdef __ILEC400__
 #pragma linkage(QOKDSPX4_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOKDSPX4_T(
                char *,           /* Function                      */
                char *,           /* Format                        */
                char *,           /* System name                   */
                char *,           /* System group                  */
                char *,           /* User ID                       */
                char *,           /* User address                  */
                char *,           /* Text description              */
                char *,           /* Key code                      */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QOKSCHD EPT_CALL(QOKSCHD)
#ifdef __ILEC400__
 #pragma linkage(QOKSCHD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOKSCHD_T(
               void *,           /* Receiver variable              */
               long int,         /* Length of receiver variable    */
               char *,           /* Format name                    */
               char *,           /* Function                       */
               char *,           /* Resource indicator             */
               void *,           /* Request variable               */
               long int,         /* Length of request variable     */
               char *,           /* Request variable format        */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QOLDLINK EPT_CALL(QOLDLINK)
#ifdef __ILEC400__
 #pragma linkage(QOLDLINK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOLDLINK_T(
                int  *,          /* Return Code                    */
                int  *,          /* Reason Code                    */
                char *,          /* Communications Handle          */
                char *);         /* Vary Option                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QOLELINK EPT_CALL(QOLELINK)
#ifdef __ILEC400__
 #pragma linkage(QOLELINK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOLELINK_T(
                int  *,          /* Return Code                    */
                int  *,          /* Reason Code                    */
                int  *,          /* Data Unit Size                 */
                int  *,          /* Data Units Created             */
                int  *,          /* LAN User Data Size             */
                int  *,          /* X.25 Data Unit Size            */
                void *,          /* Input Buffer                   */
                void *,          /* Input Buffer Descriptor        */
                void *,          /* Output Buffer                  */
                void *,          /* Output Buffer Descriptor       */
                int  *,          /* Key Length                     */
                void *,          /* Key Value                      */
                void *,          /* Qualified Queue Name           */
                char *,          /* Line Description Name          */
                char *,          /* Communications Handle          */
                ...   );         /* Optional Parameters
                                    Optional Parameter Group 1
                char *              Queue Type
                char *              Network Interface Description
                char *              Extended Operations            */
#ifdef __ILEC400__
#else
 }
#endif
#define QOLQLIND EPT_CALL(QOLQLIND)
#ifdef __ILEC400__
 #pragma linkage(QOLQLIND_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOLQLIND_T(
                int  *,          /* Return Code                    */
                int  *,          /* Reason Code                    */
                int  *,          /* Number of Bytes                */
                void *,          /* User Buffer                    */
                char *,          /* Line Description Name          */
                char *,          /* Format                         */
                ...   );         /* Optional Parameters
                                    Optional Parameter Group 1
                int  *              Length of User Buffer
                int  *              Bytes Available                */
#ifdef __ILEC400__
#else
 }
#endif
#define QOLRECV EPT_CALL(QOLRECV)
#ifdef __ILEC400__
 #pragma linkage(QOLRECV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOLRECV_T(
               int  *,           /* Return Code                    */
               int  *,           /* Reason Code                    */
               int  *,           /* UECP ID                        */
               int  *,           /* PCEP ID                        */
               char *,           /* Operation                      */
               int  *,           /* Number of Data Units           */
               char *,           /* Data Available                 */
               void *,           /* Diagnostic Data                */
               char *);          /* Communications Handle          */
#ifdef __ILEC400__
#else
 }
#endif
#define QOLSEND EPT_CALL(QOLSEND)
#ifdef __ILEC400__
 #pragma linkage(QOLSEND_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOLSEND_T(
               int  *,           /* Return Code                    */
               int  *,           /* Reason Code                    */
               void *,           /* Diagnostic Data                */
               int  *,           /* PCEP ID                        */
               int  *,           /* UCEP ID                        */
               int  *,           /* Provider Connection End Point  */
               char *,           /* Communications Handle          */
               char *,           /* Operation                      */
               int  *);          /* Number of Data Units           */
#ifdef __ILEC400__
#else
 }
#endif
#define QOLSETF EPT_CALL(QOLSETF)
#ifdef __ILEC400__
 #pragma linkage(QOLSETF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOLSETF_T(
               int  *,           /* Return Code                    */
               int  *,           /* Reason Code                    */
               int  *,           /* Offset to Error                */
               char *);          /* Communications Handle          */
#ifdef __ILEC400__
#else
 }
#endif
#define QOLTIMER EPT_CALL(QOLTIMER)
#ifdef __ILEC400__
 #pragma linkage(QOLTIMER_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOLTIMER_T(
                int  *,          /* Return Code                    */
                int  *,          /* Reason Code                    */
                char *,          /* Timer Set                      */
                char *,          /* Timer To Cancel                */
                void *,          /* Qualified Queue Name           */
                char *,          /* Operation                      */
                int  *,          /* Interval                       */
                int  *,          /* Establish Count                */
                int  *,          /* Key Length                     */
                void *,          /* Key Value                      */
                void *,          /* User Data                      */
                ...   );         /* Optional Parameters
                                    Optional Parameter Group 1
                char *              Queue Type                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPDLOGER EPT_CALL(QPDLOGER)
#ifdef __ILEC400__
 #pragma linkage(QPDLOGER_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPDLOGER_T(
               char *,            /* Suspected program name         */
               void *,            /* Detection ID                   */
               char *,            /* Message reference key          */
               int,               /* Point of failure               */
               char *,            /* Print job log                  */
               void *,            /* Data items                     */
               void *,            /* Data item offset and length    */
               int,               /* Number of data items           */
               void *,            /* Object name                    */
               int,               /* Number of object names         */
               void *,            /* Error code                     */
               ...);              /* Optional Parameter:
                                     ILE module name                */
#ifdef __ILEC400__
#else
 }
#endif
#define QPDWRKPB EPT_CALL(QPDWRKPB)
#ifdef __ILEC400__
 #pragma linkage(QPDWRKPB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPDWRKPB_T(
               char *,           /* Display Panels                  */
               char *,           /* Problem Id Number               */
               void *,           /* Origin System                   */
               char *,           /* Current Problem Status          */
               void *,           /* Requested Problem Statuses      */
               int   ,           /* Number of Requested Problem S.  */
               char *,           /* Service Provider Network Id     */
               char *,           /* Service Provider control Pt Name*/
               char *,           /* Problem Severity                */
               void *,           /* Error Code                      */
               ...);             /* Optional Parameters:
                                      Note text
                                      Length of Note Text           */
#ifdef __ILEC400__
#else
 }
#endif
#define QPMLPFRD EPT_CALL(QPMLPFRD)
#ifdef __ILEC400__
 #pragma linkage(QPMLPFRD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPMLPFRD_T(
                char *,           /* Type of Resource                */
                int  *,           /* Sequence Number of Collection   */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QPMWKCOL EPT_CALL(QPMWKCOL)
#ifdef __ILEC400__
 #pragma linkage(QPMWKCOL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPMWKCOL_T(
                char *,           /* Type of Action                  */
                char *,           /* Type of Resource                */
                int   ,           /* Time Between Collections        */
                void *,           /* Qualified User Space Name       */
                int  *,           /* First Sequence number           */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QPRCRTPG EPT_CALL(QPRCRTPG)
#ifdef __ILEC400__
 #pragma linkage(QPRCRTPG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPRCRTPG_T(
                void *,          /* Intermediate representation of */
                                 /* program                        */
                int,             /* Length of intermediate         */
                                 /* representation of program      */
                void *,          /* Qulaified program name         */
                void *,          /* Program text                   */
                void *,          /* Qualified source file name     */
                char *,          /* Source file member information */
                void *,          /* Source file last changed date  */
                                 /* and time information           */
                void *,          /* Qualified printer file name    */
                int,             /* Starting page number           */
                char *,          /* Public authority               */
                void *,          /* Option template                */
                int,             /* Number of option template      */
                                 /* entries                        */
                ...);            /* Optional Parameter:
                                       Error code                  */
#ifdef __ILEC400__
#else
 }
#endif
#define QPZCRTFX EPT_CALL(QPZCRTFX)
#ifdef __ILEC400__
 #pragma linkage(QPZCRTFX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPZCRTFX_T(
              void *,             /* PTF information                */
              char *,             /* Development library name       */
              void *,             /* Objects                        */
              int,                /* Number of objects              */
              void *,             /* Documents                      */
              int,                /* Number of documents            */
              void *,             /* Prerequisite PTFs              */
              int,                /* Number of prerequisite PTFs    */
              void *,             /* Exit programs                  */
              int,                /* Number of exit programs        */
              char *,             /* Problem IDs                    */
              int,                /* Number of problem IDs          */
              void *,             /* Cover letters                  */
              int,                /* Number of cover letters        */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPZGENNM EPT_CALL(QPZGENNM)
#ifdef __ILEC400__
 #pragma linkage(QPZGENNM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPZGENNM_T(
               void *,            /* Receiver variable              */
               int,               /* Length receiver variable       */
               void *,            /* PTF information                */
               char *,            /* Format name                    */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPZLOGFX EPT_CALL(QPZLOGFX)
#ifdef __ILEC400__
 #pragma linkage(QPZLOGFX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPZLOGFX_T(
               void *,            /* PTF information                */
               char *,            /* Request type                   */
               void *,            /* Qualified file name            */
               char *,            /* Member name                    */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPZRTVFX EPT_CALL(QPZRTVFX)
#ifdef __ILEC400__
 #pragma linkage(QPZRTVFX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPZRTVFX_T(
              void *,             /* Receiver variable              */
              int,                /* Length of receiver variable    */
              void *,             /* PTF information (Format Below) */
              char *,             /* Format name                    */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QQQQRY EPT_CALL(QQQQRY)
#ifdef __ILEC400__
 #pragma linkage(QQQQRY_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QQQQRY_T(
              char *,            /* Query option                   */
              void *,            /* UFCB                           */
              void *,            /* Query definition template      */
              void *,            /* Literal values                 */
              void *,            /* Access plan control block      */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QRCVDTAQ EPT_CALL(QRCVDTAQ)
#ifdef __ILEC400__
 #pragma linkage(QRCVDTAQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QRCVDTAQ_T(
                   char *,       /* Data queue name                */
                   char *,       /* Library name                   */
                   _Decimal(5,0) *, /* Length of data              */
                   void *,       /* Data                           */
                   _Decimal(5,0),/* Wait time                      */
                   ...);         /* Optional parameter group 1:
                                     char *        Key order
                                     _Decimal(3,0)  Length of key
                                                      data
                                     void *        Key data
                                     _Decimal(3,0) Length of sender
                                                      information
                                     void *        Sender
                                                      information  */
                                 /* Optional parameter group 2:
                                     char *        Remove message
                                                     option
                                     _Decimal(5,0) Length of data
                                                      receiver
                                     void *        Error code      */
#ifdef __ILEC400__
#else
 }
#endif
#define QSNDDTAQ EPT_CALL(QSNDDTAQ)
#ifdef __ILEC400__
 #pragma linkage(QSNDDTAQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSNDDTAQ_T(
                   char *,        /* Data queue name                */
                   char *,        /* Library name                   */
                   _Decimal(5,0), /* Length of data                 */
                   void *,        /* Data                           */
                   ...);          /* Optional Parameters:
                                     _Decimal(3,0)  Length of key
                                                        data
                                      void *        Key data        */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPCLOSP EPT_CALL(QSPCLOSP)
#ifdef __ILEC400__
 #pragma linkage(QSPCLOSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPCLOSP_T(
                int,             /* Spooled file handle          */
                void *);         /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRSPLA EPT_CALL(QUSRSPLA)
#ifdef __ILEC400__
 #pragma linkage(QUSRSPLA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRSPLA_T(
               void *,           /* Receiver variable            */
               int,              /* Length of receiver variable  */
               char *,           /* Format name                  */
               void *,           /* Qualified job name           */
               void *,           /* Internal job identifier      */
               void *,           /* Internal spooled file id     */
               char *,           /* Spooled file name            */
               int,              /* Spooled file number          */
               ...);             /* Optional Parameter:
                                      Error Code                 */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPCRTSP EPT_CALL(QSPCRTSP)
#ifdef __ILEC400__
 #pragma linkage(QSPCRTSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPCRTSP_T(
                int  *,          /* Spooled file handle          */
                void *,          /* Spooled file attributes      */
                void *);         /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPGETSP EPT_CALL(QSPGETSP)
#ifdef __ILEC400__
 #pragma linkage(QSPGETSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPGETSP_T(
                int,             /* Spooled file handle          */
                void *,          /* Qualified user space name    */
                char *,          /* Format name                  */
                int,             /* Number of buffer to be read  */
                char *,          /* End of open spooled file     */
                void *);         /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPMOVJB EPT_CALL(QSPMOVJB)
#ifdef __ILEC400__
 #pragma linkage(QSPMOVJB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPMOVJB_T(
              void *,               /* Function information           */
              int,                  /* Length of function information */
              char *,               /* Function information format    */
              void *);              /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPMOVSP EPT_CALL(QSPMOVSP)
#ifdef __ILEC400__
 #pragma linkage(QSPMOVSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPMOVSP_T(
              void *,               /* Function information          */
              int,                  /* Length of function information*/
              char *,               /* Function information format   */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPOPNSP EPT_CALL(QSPOPNSP)
#ifdef __ILEC400__
 #pragma linkage(QSPOPNSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPOPNSP_T(
                int  *,          /* Spooled file handle          */
                void *,          /* Qualified job name           */
                void *,          /* Internal job id              */
                void *,          /* Internal spooled file id     */
                char *,          /* Spooled file name            */
                int,             /* Spooled file number          */
                int,             /* Number of buffers to get     */
                void *,          /* Error code                   */
                ...);             /* Optional parameter group    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPPUTSP EPT_CALL(QSPPUTSP)
#ifdef __ILEC400__
 #pragma linkage(QSPPUTSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPPUTSP_T(
                int,             /* Spooled file handle          */
                void *,          /* Qualified user space name    */
                void *);         /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPRJOBQ EPT_CALL(QSPRJOBQ)
#ifdef __ILEC400__
 #pragma linkage(QSPRJOBQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPRJOBQ_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Job queue name                 */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPROUTQ EPT_CALL(QSPROUTQ)
#ifdef __ILEC400__
 #pragma linkage(QSPROUTQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPROUTQ_T(
                void *,          /* Receiver variable            */
                int,             /* Length of receiver variable  */
                char *,          /* Format name                  */
                void *,          /* Qualified output queue name  */
                void *);         /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPRWTRI EPT_CALL(QSPRWTRI)
#ifdef __ILEC400__
 #pragma linkage(QSPRWTRI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPRWTRI_T(
                void *,          /* Receiver variable            */
                int,             /* Receiver variable length     */
                char *,          /* Format name                  */
                char *,          /* Printer name                 */
                void *,          /* Error code                   */
                ...);             /* Optional parameter group    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSQCHKS EPT_CALL(QSQCHKS)
#ifdef __ILEC400__
 #pragma linkage(QSQCHKS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSQCHKS_T(
               void *,           /* Source records                 */
               int,              /* Record length of source        */
               int,              /* Number of records in source    */
               char *,           /* Language                       */
               void *,           /* Options                        */
               void *,           /* Statement information          */
               int,              /* Length of statement information*/
               int,              /* Number of records processed    */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSQPRCED EPT_CALL(QSQPRCED)
#ifdef __ILEC400__
 #pragma linkage(QSQPRCED_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSQPRCED_T(
               void *,      /* SQL communications area              */
               void *,      /* SQL descriptor area                  */
               char *,      /* format name                          */
               void *,      /* function template                    */
               void *,      /* error code                           */
               ...);        /* OPTIONAL PARAMETER GROUP 1:
                               SQL DIAGNOSTIC INFORMATION RECEIVER,
                               LENGTH OF SQL DIAGNOSTIC
                               INFORMATION RECEIVER
                               LENGTH OF FIXED FUNCTION TEMPLATE    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSRLSAVF EPT_CALL(QSRLSAVF)
#ifdef __ILEC400__
 #pragma linkage(QSRLSAVF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSRLSAVF_T(
                void *,        /* Qualified user space name        */
                char *,        /* Format name                      */
                void *,        /* Qualified save file name         */
                char *,        /* Object name filter               */
                char *,        /* Object type filter               */
                void *,        /* Continuation handle              */
                void *);       /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QSRSAVO EPT_CALL(QSRSAVO)
#ifdef __ILEC400__
 #pragma linkage(QSRSAVO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSRSAVO_T(
              void *,                /* Qualified user space name  */
              void *);               /* Error code                 */
#ifdef __ILEC400__
#else
 }
#endif
#define QSXFTRPB EPT_CALL(QSXFTRPB)
#ifdef __ILEC400__
 #pragma linkage(QSXFTRPB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSXFTRPB_T(
                void *,           /* Problem Log Identifier          */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCHGPR EPT_CALL(QSYCHGPR)
#ifdef __ILEC400__
 #pragma linkage(QSYCHGPR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCHGPR_T(
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCHGPW EPT_CALL(QSYCHGPW)
#ifdef __ILEC400__
 #pragma linkage(QSYCHGPW_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCHGPW_T(
                char *,          /* User ID                        */
                char *,          /* Current Password               */
                char *,          /* New Password                   */
                void *,          /* Error code                     */
                ...);            /* Optional parameters            */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCUSRA EPT_CALL(QSYCUSRA)
#ifdef __ILEC400__
 #pragma linkage(QSYCUSRA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCUSRA_T(
                char *,          /* Authority Indicator            */
                char *,          /* User ID                        */
                void *,          /* Qualified Object Name          */
                char *,          /* Object Type                    */
                void *,          /* Authority                      */
                int  *,          /* Number of Authorities          */
                int  *,          /* Call Level                     */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCUSRS EPT_CALL(QSYCUSRS)
#ifdef __ILEC400__
 #pragma linkage(QSYCUSRS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCUSRS_T(
                char *,          /* Authority Indicator            */
                char *,          /* User ID                        */
                void *,          /* Special Authority              */
                int  *,          /* Number of Authorities          */
                int  *,          /* Call Level                     */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCVTA EPT_CALL(QSYCVTA)
#ifdef __ILEC400__
 #pragma linkage(QSYCVTA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCVTA_T(
                char *,          /* Converted Authority Value      */
                void *,          /* Authority Special Value        */
                int  *,          /* Number of Authorities          */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYGETPH EPT_CALL(QSYGETPH)
#ifdef __ILEC400__
 #pragma linkage(QSYGETPH_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYGETPH_T(
                char *,          /* User ID                        */
                char *,          /* Password                       */
                void *,          /* Profile Handle                 */
                ...);            /* Optional parameter:
                                       error code.                 */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYLATLO EPT_CALL(QSYLATLO)
#ifdef __ILEC400__
 #pragma linkage(QSYLATLO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYLATLO_T(
                void *,          /* Qualified User Space Name      */
                char *,          /* Format name                    */
                char *,          /* Authorization List             */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYLAUTU EPT_CALL(QSYLAUTU)
#ifdef __ILEC400__
 #pragma linkage(QSYLAUTU_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYLAUTU_T(
                void *,          /* Qualified User Space Name      */
                char *,          /* Format Name                    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYLOBJA EPT_CALL(QSYLOBJA)
#ifdef __ILEC400__
 #pragma linkage(QSYLOBJA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYLOBJA_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* User ID                        */
                char *,          /* Object type                    */
                char *,          /* Returned objects               */
                void *,          /* Continuation handle            */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYLOBJP EPT_CALL(QSYLOBJP)
#ifdef __ILEC400__
 #pragma linkage(QSYLOBJP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYLOBJP_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* User name                      */
                char *,          /* Object type                    */
                void *,          /* Continuation handle            */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYLUSRA EPT_CALL(QSYLUSRA)
#ifdef __ILEC400__
 #pragma linkage(QSYLUSRA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYLUSRA_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified object name          */
                char *,          /* Object type                    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRLSPH EPT_CALL(QSYRLSPH)
#ifdef __ILEC400__
 #pragma linkage(QSYRLSPH_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRLSPH_T(
                char *,          /* Profile Handle                 */
                 ...);           /* Optional Parameter:
                                       Error code                  */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRUSRA EPT_CALL(QSYRUSRA)
#ifdef __ILEC400__
 #pragma linkage(QSYRUSRA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRUSRA_T(
                void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                char *,          /* Format name                    */
                char *,          /* User ID                        */
                void *,          /* Qualified object name          */
                char *,          /* Object type                    */
                void *,          /* Error code                     */
                ...);            /* CHAR * ASP_DEVICE_NAME         */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRUSRI EPT_CALL(QSYRUSRI)
#ifdef __ILEC400__
 #pragma linkage(QSYRUSRI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRUSRI_T(
                void *,          /* Receiver variable              */
               int,              /* Receiver variable length       */
               char *,           /* Format name                    */
               char *,           /* User ID                        */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZCRTPD EPT_CALL(QSZCRTPD)
#ifdef __ILEC400__
 #pragma linkage(QSZCRTPD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZCRTPD_T(
               void *,            /* Qualified product definition
                                     name                           */
               void *,            /* Product definition information */
               void *,            /* Product option list            */
               int,               /* Number of product options      */
               void *,            /* Language load list             */
               int,               /* Number of language loads       */
               void *,            /* Text description               */
               char *,            /* Public authority               */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZCRTPL EPT_CALL(QSZCRTPL)
#ifdef __ILEC400__
 #pragma linkage(QSZCRTPL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZCRTPL_T(
               char *,            /* Product load name              */
               void *,            /* Product load information       */
               char *,            /* Secondary language lib name    */
               void *,            /* Principle library information  */
               void *,            /* Additional library list        */
               int,               /* Number of additional libraries */
               void *,            /* Preoperation exit programs     */
               int,               /* Number of preoccupation exit
                                     programs                       */
               void *,            /* Folder list                    */
               int,               /* Number of folders              */
               void *,            /* Text description               */
               char *,            /* Public authority               */
               void *,            /* Error code                     */
               ...);              /* Optional parameters            */
                                  /* Qsz_DIRI0100                   */
                                  /* Number of directories          */
                                  /* Format of directories          */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZDLTPD EPT_CALL(QSZDLTPD)
#ifdef __ILEC400__
 #pragma linkage(QSZDLTPD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZDLTPD_T(
               void *,            /* Qualified prod definition name */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZDLTPL EPT_CALL(QSZDLTPL)
#ifdef __ILEC400__
 #pragma linkage(QSZDLTPL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZDLTPL_T(
               void *,            /* Qualified prod load name       */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZPKGPO EPT_CALL(QSZPKGPO)
#ifdef __ILEC400__
 #pragma linkage(QSZPKGPO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZPKGPO_T(
              void *,             /* Product option information     */
              char *,             /* Repackage                      */
              char *,             /* Allow object change            */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZRTVPR EPT_CALL(QSZRTVPR)
#ifdef __ILEC400__
 #pragma linkage(QSZRTVPR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZRTVPR_T(
              void *,             /* Receiver variable              */
              int,                /* Length of receiver variable    */
              char *,             /* Format name for rec variable   */
              void *,             /* Product information            */
              void *,             /* Error code                     */
              ...);               /* Optional Parameter Group:
                                       char * Format Name for
                                              product information   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZSLTPR EPT_CALL(QSZSLTPR)
#ifdef __ILEC400__
 #pragma linkage(QSZSLTPR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZSLTPR_T(
               void *,                /* Output list               */
               void *,                /* Input information         */
               char *,                /* Format name               */
               void *,                /* Input list                */
               void *,                /* Output information        */
               void *);               /* Error code                */
#ifdef __ILEC400__
#else
 }
#endif
#define QTERTVPV EPT_CALL(QTERTVPV)
#ifdef __ILEC400__
 #pragma linkage(QTERTVPV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTERTVPV_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               void *,           /* Program variable               */
               void *,           /* Basing pointer                 */
               int,              /* Starting position              */
               int,              /* Length of string               */
               char *,           /* Output format                  */
               char *,           /* Program                        */
               int,              /* Recursion level                */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTNADDCR EPT_CALL(QTNADDCR)
#ifdef __ILEC400__
 #pragma linkage(QTNADDCR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTNADDCR_T(
                int * ,           /* Resource Handle                 */
                char *,           /* Resource Name                   */
                void *,           /* Qualified C&R Exit Program      */
                void *,           /* C&R Exit Program information    */
                char *,           /* IPL Processing Option           */
                void *,           /* Error Code                      */
                ...);             /* Optional Parameter:
                                       Add Resource Options          */
#ifdef __ILEC400__
#else
 }
#endif
#define QTNCHGCO EPT_CALL(QTNCHGCO)
#ifdef __ILEC400__
 #pragma linkage(QTNCHGCO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTNCHGCO_T(
                void *,           /* Commitment options              */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QTNRBRQD EPT_CALL(QTNRBRQD)
#ifdef __ILEC400__
 #pragma linkage(QTNRBRQD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTNRBRQD_T(
                int   ,           /* Resource Handle                 */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QTNRCMTI EPT_CALL(QTNRCMTI)
#ifdef __ILEC400__
 #pragma linkage(QTNRCMTI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTNRCMTI_T(
                void *,           /* Receiver Variable               */
                int   ,           /* Receiver Variable length        */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QTNRMVCR EPT_CALL(QTNRMVCR)
#ifdef __ILEC400__
 #pragma linkage(QTNRMVCR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTNRMVCR_T(
                int   ,           /* Resource Handle                 */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QTQCVRT EPT_CALL(QTQCVRT)
#ifdef __ILEC400__
 #pragma linkage(QTQCVRT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTQCVRT_T(
               int *,            /* CCSID1                         */
               int *,            /* ST1                            */
               char *,           /* S1                             */
               int *,            /* L1                             */
               int *,            /* CCSID2                         */
               int *,            /* ST2                            */
               int *,            /* GCCASN                         */
               int *,            /* L2                             */
               char *,           /* S2                             */
               int *,            /* L3                             */
               int *,            /* L4                             */
               void *);          /* FB                             */
#ifdef __ILEC400__
#else
 }
#endif
#define QTQGCCN EPT_CALL(QTQGCCN)
#ifdef __ILEC400__
 #pragma linkage(QTQGCCN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTQGCCN_T(
               int *,            /* CCSID1                         */
               int *,            /* CCSID2                         */
               int *,            /* CCSIDn                         */
               int *,            /* HINTV                          */
               void *);          /* FB                             */
#ifdef __ILEC400__
#else
 }
#endif
#define QTQGESP EPT_CALL(QTQGESP)
#ifdef __ILEC400__
 #pragma linkage(QTQGESP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTQGESP_T(
               int *,            /* CCSID1                         */
               int *,            /* N1                             */
               int *,            /* N2                             */
               int *,            /* ES                             */
               void *,           /* CSCPL                          */
               void *);          /* FB                             */
#ifdef __ILEC400__
#else
 }
#endif
#define QTQGRDC EPT_CALL(QTQGRDC)
#ifdef __ILEC400__
 #pragma linkage(QTQGRDC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTQGRDC_T(
               int *,            /* CCSID1                         */
               int *,            /* ESIN                           */
               int *,            /* SEL                            */
               int *,            /* CCSIDR                         */
               void *);          /* FB                             */
#ifdef __ILEC400__
#else
 }
#endif
#define QTQSCSP EPT_CALL(QTQSCSP)
#ifdef __ILEC400__
 #pragma linkage(QTQSCSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTQSCSP_T(
               void *,           /* CSCPL                          */
               int *,            /* N1                             */
               int *,            /* ESIN                           */
               int *,            /* CCSIDR                         */
               int *,            /* ESR                            */
               void *);          /* FB                             */
#ifdef __ILEC400__
#else
 }
#endif
#define QTVCLOVT EPT_CALL(QTVCLOVT)
#ifdef __ILEC400__
 #pragma linkage(QTVCLOVT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTVCLOVT_T(
                void *,           /* Virtual terminal handle       */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QTVOPNVT EPT_CALL(QTVOPNVT)
#ifdef __ILEC400__
 #pragma linkage(QTVOPNVT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTVOPNVT_T(
                void *,           /* Virtual terminal handle         */
                char *,           /* Keyboard language type          */
                int,              /* Character set                   */
                int,              /* Code page                       */
                int,              /* Work station type               */
                void *,           /* Data queue name and library     */
                void *,           /* Key value                       */
                int,              /* Key value length                */
                void *,           /* Error code                      */
                ...);             /* Optional group 1: (void *)
                                     Open operation information.
                                     Optional group 2: (void *)
                                     Session initiation info.        */
#ifdef __ILEC400__
#else
 }
#endif
#define QTVRDVT EPT_CALL(QTVRDVT)
#ifdef __ILEC400__
 #pragma linkage(QTVRDVT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTVRDVT_T(
               void *,            /* Virtual terminal handle       */
               char *,            /* Read information              */
               void *,            /* Data buffer                   */
               int,               /* Number of bytes to read       */
               int *,             /* Number of bytes received      */
               void *);           /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QTVSNDRQ EPT_CALL(QTVSNDRQ)
#ifdef __ILEC400__
 #pragma linkage(QTVSNDRQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTVSNDRQ_T(
                void *,           /* Virtual terminal handle       */
                int,              /* Request type                  */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QTVWRTVT EPT_CALL(QTVWRTVT)
#ifdef __ILEC400__
 #pragma linkage(QTVWRTVT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTVWRTVT_T(
                void *,            /* Virtual terminal handle      */
                char *,            /* Write information            */
                void *,            /* Data buffer                  */
                int,               /* Number of bytes to write.    */
                void *);           /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QTWAIDSP EPT_CALL(QTWAIDSP)
#ifdef __ILEC400__
 #pragma linkage(QTWAIDSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTWAIDSP_T(
                void *,           /* Receiver variable             */
                int,              /* Length of receiver variable   */
                char *,           /* Format name                   */
                void *,           /* Input word                    */
                int,              /* Length of input word          */
                void *,           /* Input dictionaries            */
                int,              /* Length of input dictionaries  */
                void *,           /* Output dictionaries           */
                int,              /* Length of output dictionaries */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QTWCHKSP EPT_CALL(QTWCHKSP)
#ifdef __ILEC400__
 #pragma linkage(QTWCHKSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTWCHKSP_T(
                void *,           /* Receiver variable             */
                int,              /* Length of receiver variable   */
                char *,           /* Format name                   */
                void *,           /* Word list                     */
                int,              /* Length of word list           */
                void *,           /* Input dictionaries            */
                int,              /* Length of input dictionaries  */
                void *,           /* Output dictionaries           */
                int,              /* Length of output dictionaries */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QUHDSPH EPT_CALL(QUHDSPH)
#ifdef __ILEC400__
 #pragma linkage(QUHDSPH_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUHDSPH_T(
               void *,           /* Help identifier array           */
               int,              /* Nbr help identifiers            */
               void *,           /* Help type                       */
               void *,           /* Full display title              */
               void *,           /* Qlfd InfoSeeker obj name        */
               char *,           /* Display type                    */
               void *,           /* Upper-left corner               */
               void *,           /* Lower-right corner              */
               void *,           /* Cursor location                 */
               void *,           /* Error code                      */
               ...);             /* Optional Parameter Group:
                                      Help bookshelf name
                                      Border attribute
                                      Border characters             */
#ifdef __ILEC400__
#else
 }
#endif
#define QUHPRTH EPT_CALL(QUHPRTH)
#ifdef __ILEC400__
 #pragma linkage(QUHPRTH_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUHPRTH_T(
               void *,           /* Array of help ids               */
               int,              /* Number of help ids              */
               void *,           /* Default title                   */
               void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIADDLE EPT_CALL(QUIADDLE)
#ifdef __ILEC400__
 #pragma linkage(QUIADDLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIADDLE_T(
                char *,           /* Application handle              */
                void *,           /* Variable buffer                 */
                int,              /* Variable buffer length          */
                char *,           /* Variable record name            */
                char *,           /* List name                       */
                char *,           /* Option                          */
                char *,           /* List entry handle               */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIADDLM EPT_CALL(QUIADDLM)
#ifdef __ILEC400__
 #pragma linkage(QUIADDLM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIADDLM_T(
               char *,           /* Application handle              */
               void *,           /* Variable buffer                 */
               int,              /* Variable buffer length          */
               char *,           /* Variable record name            */
               char *,           /* List name                       */
               char *,           /* Option                          */
               char *,           /* List entry handle               */
               int,              /* Number of records               */
               void *,           /* Record numbers                  */
               int,              /* Record size                     */
               int,              /* Record count                    */
               void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIADDPA EPT_CALL(QUIADDPA)
#ifdef __ILEC400__
 #pragma linkage(QUIADDPA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIADDPA_T(
                char *,           /* Application handle              */
                void *,           /* Qlfd prt file name              */
                char *,           /* Alternative file name           */
                char *,           /* Share open data path            */
                char *,           /* User data                       */
                void *,           /* Error code                      */
                ...);             /* Optional Parameter Group:
                                       Open data receiver
                                       Length of open data receiver
                                       Length of available open data */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIADDPW EPT_CALL(QUIADDPW)
#ifdef __ILEC400__
 #pragma linkage(QUIADDPW_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIADDPW_T(
               char *,           /* Application handle              */
               char *,           /* Pop-up window location          */
               int,              /* Row                             */
               int,              /* Column                          */
               void *,           /* Error code                      */
               ...);             /* Optional Parameter Group:
                                       Depth                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QUICLOA EPT_CALL(QUICLOA)
#ifdef __ILEC400__
 #pragma linkage(QUICLOA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUICLOA_T(
                char *,           /* Application handle              */
                char *,           /* Close option                    */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIDLTL EPT_CALL(QUIDLTL)
#ifdef __ILEC400__
 #pragma linkage(QUIDLTL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIDLTL_T(
                char *,           /* Application handle              */
                char *,           /* List name                       */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIDSPP EPT_CALL(QUIDSPP)
#ifdef __ILEC400__
 #pragma linkage(QUIDSPP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIDSPP_T(
                char *,           /* Application handle              */
                int *,            /* Function requested              */
                char *,           /* Panel name                      */
                char *,           /* Redisplay option                */
                void *,           /* Error code                      */
                ...);             /* Optional Parameter Group 1:
                                       User task
                                       Call stack counter
                                       Call message queue
                                       Message reference key
                                       Cursor position option
                                       Last list entry
                                       Error list entry
                                       Wait time
                                     Optional Parameter Group 2:
                                       Length call message queue name
                                       Call qualification            */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIGETLE EPT_CALL(QUIGETLE)
#ifdef __ILEC400__
 #pragma linkage(QUIGETLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIGETLE_T(
                char *,           /* Application handle              */
                void *,           /* Variable buffer                 */
                int,              /* Variable buffer length          */
                char *,           /* Variable record name            */
                char *,           /* List name                       */
                char *,           /* Positioning option              */
                char *,           /* Copy option                     */
                void *,           /* Selection criteria              */
                char *,           /* Selection handle                */
                char *,           /* Extend option                   */
                char *,           /* List entry handle               */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIGETLM EPT_CALL(QUIGETLM)
#ifdef __ILEC400__
 #pragma linkage(QUIGETLM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIGETLM_T(
               char *,           /* Application handle              */
               void *,           /* Variable buffer                 */
               int,              /* Variable buffer length          */
               char *,           /* Variable record name            */
               char *,           /* List name                       */
               char *,           /* Positioning option              */
               char *,           /* Copy option                     */
               void *,           /* Selection criteria              */
               char *,           /* Selection handle                */
               char *,           /* Extend option                   */
               char *,           /* List entry handle               */
               int,              /* Number of records               */
               int,              /* Record size                     */
               int,              /* Record count                    */
               void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIGETV EPT_CALL(QUIGETV)
#ifdef __ILEC400__
 #pragma linkage(QUIGETV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIGETV_T(
               char *,           /* Application handle              */
               void *,           /* Variable buffer                 */
               int,              /* Variable buffer length          */
               char *,           /* Variable record name            */
               void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIOPNDA EPT_CALL(QUIOPNDA)
#ifdef __ILEC400__
 #pragma linkage(QUIOPNDA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIOPNDA_T(
                char *,           /* Application handle              */
                void *,           /* Qualified panel group name      */
                int,              /* Application scope               */
                int,              /* Exit parameter interface        */
                char *,           /* Full-screen help                */
                void *,           /* Error code                      */
                ...);             /* Optional Parameter Group:
                                       Open data receiver
                                       Length of open data receiver
                                       Length of available open data */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIOPNPA EPT_CALL(QUIOPNPA)
#ifdef __ILEC400__
 #pragma linkage(QUIOPNPA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIOPNPA_T(
                char *,           /* Application handle              */
                void *,           /* Qualified panel group name      */
                int,              /* Application scope               */
                int,              /* Exit parameter interface        */
                void *,           /* Qlfd prt name dev file          */
                char *,           /* Alternative file name           */
                char *,           /* Share open data path            */
                char *,           /* User data                       */
                void *,           /* Error code                      */
                ...);             /* Optional Parameter Group:
                                       Open data receiver
                                       Length of open data receiver
                                       Length of available open data */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIPRTP EPT_CALL(QUIPRTP)
#ifdef __ILEC400__
 #pragma linkage(QUIPRTP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIPRTP_T(
                char *,           /* Application handle              */
                char *,           /* Print panel name                */
                char *,           /* Eject option                    */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIPUTV EPT_CALL(QUIPUTV)
#ifdef __ILEC400__
 #pragma linkage(QUIPUTV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIPUTV_T(
               char *,           /* Application handle              */
               void *,           /* Variable buffer                 */
               int,              /* Variable buffer length          */
               char *,           /* Variable record name            */
               void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIRMVLE EPT_CALL(QUIRMVLE)
#ifdef __ILEC400__
 #pragma linkage(QUIRMVLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIRMVLE_T(
                char *,           /* Application handle              */
                char *,           /* List name                       */
                char *,           /* Extend option                   */
                char *,           /* List entry handle               */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIRMVPA EPT_CALL(QUIRMVPA)
#ifdef __ILEC400__
 #pragma linkage(QUIRMVPA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIRMVPA_T(
                char *,           /* Application handle              */
                char *,           /* Close option                    */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIRMVPW EPT_CALL(QUIRMVPW)
#ifdef __ILEC400__
 #pragma linkage(QUIRMVPW_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIRMVPW_T(
               char *,           /* Application handle              */
               char *,           /* Close option                    */
               void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIRTVLA EPT_CALL(QUIRTVLA)
#ifdef __ILEC400__
 #pragma linkage(QUIRTVLA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIRTVLA_T(
                char *,           /* Application handle              */
                char *,           /* List name                       */
                void *,           /* Receiver                        */
                int,              /* Receiver length                 */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUISETLA EPT_CALL(QUISETLA)
#ifdef __ILEC400__
 #pragma linkage(QUISETLA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUISETLA_T(
                char *,           /* Application handle              */
                char *,           /* List name                       */
                char *,           /* List contents                   */
                char *,           /* Program dialog variable         */
                char *,           /* Display position attribute      */
                char *,           /* Allow trim attribute            */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUISETSC EPT_CALL(QUISETSC)
#ifdef __ILEC400__
 #pragma linkage(QUISETSC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUISETSC_T(
                char *,           /* Application handle              */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUIUPDLE EPT_CALL(QUIUPDLE)
#ifdef __ILEC400__
 #pragma linkage(QUIUPDLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUIUPDLE_T(
                char *,           /* Application handle              */
                void *,           /* Variable buffer                 */
                int,              /* Variable buffer length          */
                char *,           /* Variable record name            */
                char *,           /* List name                       */
                char *,           /* Option                          */
                char *,           /* List entry handle               */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSADDEP EPT_CALL(QUSADDEP)
#ifdef __ILEC400__
 #pragma linkage(QUSADDEP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSADDEP_T(
                void *,        /* Exit Point Name                  */
                char *,        /* Exit Point Format Name           */
                int   ,        /* Exit Program Number              */
                void *,        /* Qualified Exit Prog Name         */
                void *,        /* Exit Program Data                */
                int   ,        /* Length Exit Program Data         */
                void *,        /* Exit Program Attributes          */
                void *);       /* Error Code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSADDUI EPT_CALL(QUSADDUI)
#ifdef __ILEC400__
 #pragma linkage(QUSADDUI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSADDUI_T(
               char *,           /* Returned library name          */
               int *,            /* Number of entries added        */
               void *,           /* Qualified user index name      */
               int,              /* Insert type                    */
               void *,           /* Index entries                  */
               int,              /* Length of index entries        */
               void *,           /* Entry lengths and offsets      */
               int,              /* Number of entries              */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSCHGPA EPT_CALL(QUSCHGPA)
#ifdef __ILEC400__
 #pragma linkage(QUSCHGPA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSCHGPA_T(
               int,              /* System pool identifier         */
               int,              /* New pool size                  */
               int,              /* New pool activity level        */
               ...);             /* Optional Parameter Group 1:
                                      char *   Message logging
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Paging Option       */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSCHGUS EPT_CALL(QUSCHGUS)
#ifdef __ILEC400__
 #pragma linkage(QUSCHGUS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSCHGUS_T(
                char *,           /* Qualified User Space Name       */
                int,              /* Start Position                  */
                int,              /* Length of data                  */
                void *,           /* Input data                      */
                char *,           /* Force Changes                   */
                ...);             /* Optional Parameter:
                                       Error Code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSCMDLN EPT_CALL(QUSCMDLN)
#ifdef __ILEC400__
 #pragma linkage(QUSCMDLN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSCMDLN_T(
              void);             /* No parms                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSCRTUI EPT_CALL(QUSCRTUI)
#ifdef __ILEC400__
 #pragma linkage(QUSCRTUI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSCRTUI_T(
               void *,           /* Qualified user index name      */
               char *,           /* Extended atrribute             */
               char *,           /* Entry length attribute         */
               int,              /* Entry length                   */
               char *,           /* Key insertion                  */
               int,              /* Key length                     */
               char *,           /* Immediate update               */
               char *,           /* Optimization                   */
               char *,           /* Public authority               */
               void *,           /* Text description               */
               ...);             /* Optional Parameter Group 1:
                                      char *   Replace
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Domain              */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSCRTUQ EPT_CALL(QUSCRTUQ)
#ifdef __ILEC400__
 #pragma linkage(QUSCRTUQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSCRTUQ_T(
               void *,           /* Qualified user queue name      */
               char *,           /* Extended attribute             */
               char *,           /* Queue type                     */
               int,              /* Key length                     */
               int,              /* Maximum message size           */
               int,              /* Initial number of messages     */
               int,              /* Additional number of messages  */
               char *,           /* Public authority               */
               void *,           /* Text description               */
               ...);             /* Optional Parameter Group 1:
                                      char *   Replace
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Domain
                                      char *   Pointers            */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSCRTUS EPT_CALL(QUSCRTUS)
#ifdef __ILEC400__
 #pragma linkage(QUSCRTUS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSCRTUS_T(
                void *,           /* Qualified User Space Name       */
                char *,           /* Extended Attribute              */
                int,              /* Initial Size                    */
                char *,           /* Initial Value                   */
                char *,           /* Public Authority                */
                void *,           /* Text Description                */
                ...);             /* Optional Parameter Group 1:
                                       Replace
                                       Error Code
                                     Optional Parameter Group 2:
                                       Domain                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSCUSAT EPT_CALL(QUSCUSAT)
#ifdef __ILEC400__
 #pragma linkage(QUSCUSAT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSCUSAT_T(
                char *,           /* Returned Library name.          */
                void *,           /* Qualified User Space Name.      */
                void *,           /* Attributes to change.           */
                void *);          /* Error Code.                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSDLTUI EPT_CALL(QUSDLTUI)
#ifdef __ILEC400__
 #pragma linkage(QUSDLTUI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSDLTUI_T(
               void *,           /* Qualified user index name      */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSDLTUQ EPT_CALL(QUSDLTUQ)
#ifdef __ILEC400__
 #pragma linkage(QUSDLTUQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSDLTUQ_T(
               void *,           /* Qualified user queue name      */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSDLTUS EPT_CALL(QUSDLTUS)
#ifdef __ILEC400__
 #pragma linkage(QUSDLTUS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSDLTUS_T(
                void *,           /* Qualified User Space Name       */
                void *);          /* Error Code.                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSDRGPT EPT_CALL(QUSDRGPT)
#ifdef __ILEC400__
 #pragma linkage(QUSDRGPT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSDRGPT_T(
                void *,        /* Exit Point Name                  */
                char *,        /* Exit Point Format Name           */
                void *);       /* Error Code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSLFLD EPT_CALL(QUSLFLD)
#ifdef __ILEC400__
 #pragma linkage(QUSLFLD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSLFLD_T(
               void *,      /* user space and library name          */
               char *,      /* format name                          */
               void *,      /* database file name and library       */
               char *,      /* record format name                   */
               char *,      /* override processing                  */
               ...);        /* Optional Parameter:
                                 Error code                         */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSLJOB EPT_CALL(QUSLJOB)
#ifdef __ILEC400__
 #pragma linkage(QUSLJOB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSLJOB_T(
              void *,            /* User space name and library    */
              char *,            /* Format name                    */
              void *,            /* Qualified job name             */
              char *,            /* Status                         */
              ...);              /* Optional Parameter Group 1:
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Job type
                                      int      Number of fields to
                                                   return
                                      void *   Key of fields to
                                                   return          */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSLMBR EPT_CALL(QUSLMBR)
#ifdef __ILEC400__
 #pragma linkage(QUSLMBR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSLMBR_T(
               void *,      /* user space and library name          */
               char *,      /* format name                          */
               void *,      /* database file name and library       */
               char *,      /* member name                          */
               char *,      /* override processing                  */
               ...);        /* Optional Parameter:
                                 Error code                         */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSLOBJ EPT_CALL(QUSLOBJ)
#ifdef __ILEC400__
 #pragma linkage(QUSLOBJ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSLOBJ_T(
              void *,            /* User space name and library    */
              char *,            /* Format name                    */
              void *,            /* Object name and library        */
              char *,            /* Object type                    */
              ...);              /* Optional Parameter Group 1:
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      void *   Authority control
                                      void *   Selection control   */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSLRCD EPT_CALL(QUSLRCD)
#ifdef __ILEC400__
 #pragma linkage(QUSLRCD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSLRCD_T(
               void *,      /* user space and library name          */
               char *,      /* format name                          */
               void *,      /* database file name and library       */
               char *,      /* override processing                  */
               ...);        /* Optional Parameter:
                                 error code                         */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSLSPL EPT_CALL(QUSLSPL)
#ifdef __ILEC400__
 #pragma linkage(QUSLSPL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSLSPL_T(
               void *,           /* User space and library name    */
               char *,           /* Format name                    */
               char *,           /* User name                      */
               void *,           /* Output queue and library name  */
               char *,           /* Form type                      */
               char *,           /* User-specified data            */
               ...);             /* Optional Parameter Group 1:
                                      Error code
                                    Optional Parameter Group 2:
                                      Qualified Job Name
                                      Keys for fields to return
                                      Number of fields to return   */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSPTRUS EPT_CALL(QUSPTRUS)
#ifdef __ILEC400__
 #pragma linkage(QUSPTRUS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSPTRUS_T(
                void *,           /* Qualified User Space Name       */
                void *,           /* Pointer to US.                  */
                ...);             /* Optional Parameter:
                                       Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRGPT EPT_CALL(QUSRGPT)
#ifdef __ILEC400__
 #pragma linkage(QUSRGPT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRGPT_T(
               void *,              /* Exit Point Name               */
               char *,              /* Exit Point Format Name        */
               void *,              /* Exit Point Controls           */
               void *);             /* Error Code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRJOBI EPT_CALL(QUSRJOBI)
#ifdef __ILEC400__
 #pragma linkage(QUSRJOBI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRJOBI_T(
              void *,            /* Receiver variable              */
              int,               /* Length of receiver variable    */
              char *,            /* Format name                    */
              void *,            /* Qualified job name             */
              void *,            /* Internal job identifier        */
              ...);              /* Optional Parameter:
                                      Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRMBRD EPT_CALL(QUSRMBRD)
#ifdef __ILEC400__
 #pragma linkage(QUSRMBRD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRMBRD_T(
              void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              char *,               /* Format name                   */
              void *,               /* File and library name         */
              char *,               /* Member name                   */
              char *,               /* Override processing           */
              ...);                 /* Optional Parameters:
                                         Error code
                                         Find member processing      */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRMVEP EPT_CALL(QUSRMVEP)
#ifdef __ILEC400__
 #pragma linkage(QUSRMVEP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRMVEP_T(
                void *,        /* Exit Point Name                  */
                char *,        /* Exit Point Format Name           */
                int   ,        /* Exit Program Number              */
                void *);       /* Error Code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRMVUI EPT_CALL(QUSRMVUI)
#ifdef __ILEC400__
 #pragma linkage(QUSRMVUI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRMVUI_T(
               int *,            /* Number of entries removed      */
               void *,           /* Entries removed                */
               int,              /* Length of entries removed      */
               void *,           /* Entry lengths and entry offsets*/
               int,              /* Len entry lengths and offsets  */
               char *,           /* Returned library name          */
               void *,           /* Qualified user index name      */
               char *,           /* Format                         */
               int,              /* Maximum number of entries      */
               int,              /* Remove type                    */
               void *,           /* Remove criteria                */
               int,              /* Length remove criteria         */
               int,              /* Remove criteria offset         */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSROBJD EPT_CALL(QUSROBJD)
#ifdef __ILEC400__
 #pragma linkage(QUSROBJD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSROBJD_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Object and library name        */
               char *,           /* Object type                    */
               ...);             /* Optional Parameter Group:
                                      void *   Error code          */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRTVEI EPT_CALL(QUSRTVEI)
#ifdef __ILEC400__
 #pragma linkage(QUSRTVEI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRTVEI_T(
                  void *,                /* Continuation Handle    */
                  void *,                /* Receiver Variable      */
                  int   ,                /* Length Receiver Var    */
                  char *,                /* Format Name            */
                  void *,                /* Exit Point Name        */
                  char *,                /* Exit Point Format Name */
                  int   ,                /* Exit Program Number    */
                  void *,                /* Exit Prog Sel Criteria */
                  void *);               /* Error Code             */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRTVUI EPT_CALL(QUSRTVUI)
#ifdef __ILEC400__
 #pragma linkage(QUSRTVUI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRTVUI_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               void *,           /* Entry lengths and offsets      */
               int,              /* Len entry lengths and offsets  */
               int *,            /* Number entries returned        */
               char *,           /* Returned library name          */
               void *,           /* Qualified user index name      */
               char *,           /* Format                         */
               int,              /* Maximum number of entries      */
               int,              /* Search type                    */
               void *,           /* Search criteria                */
               int,              /* Length search criteria         */
               int,              /* Search criteria offset         */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRTVUS EPT_CALL(QUSRTVUS)
#ifdef __ILEC400__
 #pragma linkage(QUSRTVUS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRTVUS_T(
               void *,           /* Qualified User Space Name       */
               int   ,           /* Starting Position               */
               int   ,           /* Length of Data                  */
               void *,           /* Reciever Variable               */
               ...);             /* Optional Parameter:
                                      Error Code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRUIAT EPT_CALL(QUSRUIAT)
#ifdef __ILEC400__
 #pragma linkage(QUSRUIAT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRUIAT_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Qualified user index name      */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUSRUSAT EPT_CALL(QUSRUSAT)
#ifdef __ILEC400__
 #pragma linkage(QUSRUSAT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUSRUSAT_T(
                void *,           /* Reciever Variable               */
                int,              /* Length of Reciever Variable     */
                char *,           /* Format Name                     */
                void *,           /* Qualified User Space Name       */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QVTRMSTG EPT_CALL(QVTRMSTG)
#ifdef __ILEC400__
 #pragma linkage(QVTRMSTG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QVTRMSTG_T(
                void *,        /* Receiver variable                */
                int,           /* Length of receiver variable      */
                char *,        /* Format name                      */
                void *,        /* Main storage address             */
                char *,        /* Main storage image selector      */
                void *);       /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCCCJOB EPT_CALL(QWCCCJOB)
#ifdef __ILEC400__
 #pragma linkage(QWCCCJOB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCCCJOB_T(
               void *,           /* Changed job information        */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCCHGTN EPT_CALL(QWCCHGTN)
#ifdef __ILEC400__
 #pragma linkage(QWCCHGTN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCCHGTN_T(
               int,              /* System pool identifier         */
               void *,           /* Change request                 */
               int,              /* Length of change request       */
               char *,           /* Format name                    */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCCVTDT EPT_CALL(QWCCVTDT)
#ifdef __ILEC400__
 #pragma linkage(QWCCVTDT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCCVTDT_T(
               void *,             /* Input format                 */
               void *,             /* Input variable               */
               void *,             /* Output format                */
               void *,             /* Output variable              */
               void *,             /* Error code                   */
               ...);               /* OPTIONAL PARAMETER GROUP 1:  */
                                   /*   CHAR 10  INPUT TIME ZONE   */
                                   /*   CHAR 10  OUTPUT TIME ZONE  */
                                   /*   CHAR *   TIME ZONE         */
                                   /*            INFORMATION       */
                                   /*   INT      LENGTH OF TIME    */
                                   /*            ZONE INFORMATION  */
                                   /*   CHAR 1   PRECISION         */
                                   /*            INDICATOR         */
                                   /* OPTIONAL PARAMETER GROUP 2:  */
                                   /*   CHAR 1   INPUT TIME        */
                                   /*            INDICATOR         */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCLASBS EPT_CALL(QWCLASBS)
#ifdef __ILEC400__
 #pragma linkage(QWCLASBS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCLASBS_T(
               void *,           /* Qualified user space name      */
               char *,           /* List format                    */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCLOBJL EPT_CALL(QWCLOBJL)
#ifdef __ILEC400__
 #pragma linkage(QWCLOBJL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCLOBJL_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified object name          */
                char *,          /* Object type                    */
                char *,          /* Member name                    */
                void *,          /* Error code                     */
             ...);               /* Optional Parameters:           */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCLSCDE EPT_CALL(QWCLSCDE)
#ifdef __ILEC400__
 #pragma linkage(QWCLSCDE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCLSCDE_T(
               void *,           /* User space and library name    */
               char *,           /* Format name                    */
               char *,           /* Job schedule entry name        */
               void *,           /* Continuation handle            */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRDTAA EPT_CALL(QWCRDTAA)
#ifdef __ILEC400__
 #pragma linkage(QWCRDTAA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRDTAA_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* Qualified data area name       */
                int,             /* Starting position              */
                int,             /* Length of data                 */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRNETA EPT_CALL(QWCRNETA)
#ifdef __ILEC400__
 #pragma linkage(QWCRNETA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRNETA_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               int,              /* Number of network attributes   */
               void *,           /* Network attribute names        */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRSSTS EPT_CALL(QWCRSSTS)
#ifdef __ILEC400__
 #pragma linkage(QWCRSSTS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRSSTS_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               char *,           /* Reset status statistics        */
               void *,           /* Error code                     */
               ...);             /* Optional Parameters:           */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRSVAL EPT_CALL(QWCRSVAL)
#ifdef __ILEC400__
 #pragma linkage(QWCRSVAL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRSVAL_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               int,              /* Number of system values to rtv */
               void *,           /* System value names             */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWDLSJBQ EPT_CALL(QWDLSJBQ)
#ifdef __ILEC400__
 #pragma linkage(QWDLSJBQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWDLSJBQ_T(
               void *,           /* Qualified user space name      */
               char *,           /* List format                    */
               void *,           /* Subsystem and library name     */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWDRJOBD EPT_CALL(QWDRJOBD)
#ifdef __ILEC400__
 #pragma linkage(QWDRJOBD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWDRJOBD_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Qualified job description name */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWDRSBSD EPT_CALL(QWDRSBSD)
#ifdef __ILEC400__
 #pragma linkage(QWDRSBSD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWDRSBSD_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Subsystem and library name     */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWPZTAFP EPT_CALL(QWPZTAFP)
#ifdef __ILEC400__
 #pragma linkage(QWPZTAFP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWPZTAFP_T(
                void *,          /* Qualified input user space name  */
                int,             /* Length of input data             */
                void *,          /* Qualified output user space name */
                int  *,          /* Size of space used               */
                void *,          /* Output controls table            */
                int,             /* Length of output controls table  */
                void *);         /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QWSQRYWS EPT_CALL(QWSQRYWS)
#ifdef __ILEC400__
 #pragma linkage(QWSQRYWS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWSQRYWS_T(
                char *,        /* Keyboard Buffering               */
                ...);          /* Optional Parameter:              */
#ifdef __ILEC400__
#else
 }
#endif
#define QWSRTVOI EPT_CALL(QWSRTVOI)
#ifdef __ILEC400__
 #pragma linkage(QWSRTVOI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWSRTVOI_T(
                void *,          /* Receiver variable              */
                int   ,          /* Length of receiver variable    */
                char *,          /* Format name                    */
                void *,          /* Qualified job name             */
                void *,          /* Internal job identifier        */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWSSETWS EPT_CALL(QWSSETWS)
#ifdef __ILEC400__
 #pragma linkage(QWSSETWS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWSSETWS_T(
                char,          /* Keyboard Buffering               */
                ...);          /* Optional Parameter:              */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTCTLTR EPT_CALL(QWTCTLTR)
#ifdef __ILEC400__
 #pragma linkage(QWTCTLTR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTCTLTR_T(
                char *,              /* Control Value              */
                ...   );             /* Optional Parameter:
                                        Error code structure       */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTDMPFR EPT_CALL(QWTDMPFR)
#ifdef __ILEC400__
 #pragma linkage(QWTDMPFR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTDMPFR_T(
               );
#ifdef __ILEC400__
#else
 }
#endif
#define QWTDMPLF EPT_CALL(QWTDMPLF)
#ifdef __ILEC400__
 #pragma linkage(QWTDMPLF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTDMPLF_T(
               char *,           /* Device Name                    */
               ...);             /* Optional Parameter Group:
                                      void *   Error code          */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTSETLF EPT_CALL(QWTSETLF)
#ifdef __ILEC400__
 #pragma linkage(QWTSETLF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTSETLF_T(
               char *,           /* Set value                      */
               ...);             /* Optional Parameter:
                                      void *  Error code           */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTSETP EPT_CALL(QWTSETP)
#ifdef __ILEC400__
 #pragma linkage(QWTSETP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTSETP_T(
              void *,           /* Profile handle                  */
              ...);             /* Optional Parameter:
                                   void *   Error code             */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTSETTR EPT_CALL(QWTSETTR)
#ifdef __ILEC400__
 #pragma linkage(QWTSETTR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTSETTR_T(
                char *,              /* Job Name                   */
                char *,              /* User Name                  */
                ...   );             /* Optional Parameter:
                                        Error code structure       */
#ifdef __ILEC400__
#else
 }
#endif
#define QZDASNID EPT_CALL(QZDASNID)
#ifdef __ILEC400__
 #pragma linkage(QZDASNID_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZDASNID_T(

                       void     *,      /* File server object handle */
                       void     *,      /* Correlation information   */
                       long int *,      /* Correlation length        */
                       char     *,      /* Product ID                */
                       char     *,      /* Access ID                 */
                       void     *       /* API Returned Error        */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QZDCRFSO EPT_CALL(QZDCRFSO)
#ifdef __ILEC400__
 #pragma linkage(QZDCRFSO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZDCRFSO_T(

                       void     *,      /* File server object handle */
                       long int *,      /* FSO data length           */
                       void     *,      /* File server name structure*/
                       void     *       /* API Returned Error        */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QZDRDFSO EPT_CALL(QZDRDFSO)
#ifdef __ILEC400__
 #pragma linkage(QZDRDFSO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZDRDFSO_T(

                       void     *,      /* File server object handle */
                       long int *,      /* Operation requested       */
                       long int *,      /* FSO data length           */
                       void     *,      /* File server name structure*/
                       void     *,      /* Pointer to buffer area    */
                       long int *,      /* Bytes provided in buffer  */
                       long int *,      /* Bytes available in buffer */
                       void     *       /* API Returned Error        */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QZDRTVID EPT_CALL(QZDRTVID)
#ifdef __ILEC400__
 #pragma linkage(QZDRTVID_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZDRTVID_T(

                       char     *,      /* Product ID                */
                       char     *,      /* Access ID                 */
                       void     *,      /* File server object handle */
                       void     *,      /* Correlation information   */
                       long int *,      /* Correlation bytes avail   */
                       void     *       /* API Returned Error        */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QZDRVKID EPT_CALL(QZDRVKID)
#ifdef __ILEC400__
 #pragma linkage(QZDRVKID_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZDRVKID_T(

                       char     *,      /* Product ID                */
                       char     *,      /* Access ID                 */
                       void     *       /* API Returned Error        */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QZDWTFSO EPT_CALL(QZDWTFSO)
#ifdef __ILEC400__
 #pragma linkage(QZDWTFSO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZDWTFSO_T(

                       void     *,      /* File server object handle */
                       long int *,      /* Operation requested       */
                       long int *,      /* FSO data length           */
                       void     *,      /* File server name structure*/
                       long int *,      /* Resume position           */
                       void     *,      /* Pointer to buffer area    */
                       long int *,      /* Bytes provided in buffer  */
                       void     *       /* API Returned Error        */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QBNRMODI EPT_CALL(QBNRMODI)
#ifdef __ILEC400__
 #pragma linkage(QBNRMODI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNRMODI_T(
               void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified module name                */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QPASTRPT EPT_CALL(QPASTRPT)
#ifdef __ILEC400__
 #pragma linkage(QPASTRPT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPASTRPT_T(
               void *,          /* Pass-through information       */
               int,             /* Length of pass-through infor   */
               char *,          /* Format name                    */
               char *,          /* User data                      */
               int,             /* Length of user data            */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QUILNGTX EPT_CALL(QUILNGTX)
#ifdef __ILEC400__
 #pragma linkage(QUILNGTX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUILNGTX_T(
               void *,           /* Text string                     */
               int,              /* String length                   */
               char *,           /* Message id                      */
               char *,           /* Message file and library        */
               void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QGSCPYRS EPT_CALL(QGSCPYRS)
#ifdef __ILEC400__
 #pragma linkage(QGSCPYRS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGSCPYRS_T(
              void *,               /* User space qualified name.    */
              char *,               /* Format of information returned*/
              void *,               /* Resource qualified name.      */
              void *,               /* Resource object type.         */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QGSLRSC EPT_CALL(QGSLRSC)
#ifdef __ILEC400__
 #pragma linkage(QGSLRSC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGSLRSC_T(
             void *,                /* User space qualified name.    */
             char *,                /* Format of information returned*/
             void *,                /* Qualified job name.           */
             char *,                /* Internal job identifier.      */
             char *,                /* Internal spooled file id.     */
             char *,                /* Spooled file name             */
             int,                   /* Spooled file number           */
             char *,                /* Resource name                 */
             char *,                /* Resource object type          */
             char *,                /* Pel Density                   */
             void *,                /* Error code                    */
             ...);             /* Optional parameter group    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBLFTSF EPT_CALL(QDBLFTSF)
#ifdef __ILEC400__
 #pragma linkage(QDBLFTSF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBLFTSF_T(
              void *,               /* Receiver name                 */
              long,                 /* Length of long file name      */
              char *,               /* Long file name                */
              void *,               /* Library name                  */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBRTVSN EPT_CALL(QDBRTVSN)
#ifdef __ILEC400__
 #pragma linkage(QDBRTVSN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBRTVSN_T(
              void *,               /* Receiver name                 */
              char *,               /* Long file name                */
              long,                 /* Length of long file name      */
              void *,               /* Library name                  */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QWDLSBSE EPT_CALL(QWDLSBSE)
#ifdef __ILEC400__
 #pragma linkage(QWDLSBSE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWDLSBSE_T(
               void *,           /* Qualified user space name      */
               char *,           /* List format                    */
               void *,           /* Subsystem and library name     */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZCHBKL EPT_CALL(QEZCHBKL)
#ifdef __ILEC400__
 #pragma linkage(QEZCHBKL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZCHBKL_T(
                void *,           /* Input parm structure            */
                int,              /* Size of input parm structure    */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZCHBKS EPT_CALL(QEZCHBKS)
#ifdef __ILEC400__
 #pragma linkage(QEZCHBKS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZCHBKS_T(
                void *,           /* Input parm structure            */
                int,              /* Size of input parm structure    */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZRTBKD EPT_CALL(QEZRTBKD)
#ifdef __ILEC400__
 #pragma linkage(QEZRTBKD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZRTBKD_T(
                void *,           /* Receiver variable               */
                int,              /* Length of receiver variable     */
                char *,           /* Object name                     */
                int,              /* Object name length              */
                char *,           /* Format name                     */
                char *,           /* Object type                     */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZRTBKH EPT_CALL(QEZRTBKH)
#ifdef __ILEC400__
 #pragma linkage(QEZRTBKH_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZRTBKH_T(
                void *,           /* Receiver Variable               */
                int,              /* Length of Receiver Variable     */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZRTBKO EPT_CALL(QEZRTBKO)
#ifdef __ILEC400__
 #pragma linkage(QEZRTBKO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZRTBKO_T(
                void *,           /* Receiver Variable               */
                int,              /* Length of Reciever Variable     */
                char *,           /* Format Name                     */
                char *,           /* Backup option                   */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZRTBKS EPT_CALL(QEZRTBKS)
#ifdef __ILEC400__
 #pragma linkage(QEZRTBKS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZRTBKS_T(
                void *,           /* Receiver Variable               */
                int,              /* Length of Reciever Variable     */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZCHKTG EPT_CALL(QSZCHKTG)
#ifdef __ILEC400__
 #pragma linkage(QSZCHKTG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZCHKTG_T(
               char *,          /* Target release (TGTRLS) value   */
               void *,          /* List of supported OS releases   */
               int,             /* Number of releases in list      */
               char *,          /* Validated TGTRLS value          */
               char *,          /* Equivalent supported OS release */
               void *);         /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRAUTU EPT_CALL(QSYRAUTU)
#ifdef __ILEC400__
 #pragma linkage(QSYRAUTU_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRAUTU_T(
                void *,          /* Receiver variable              */
               int,              /* Receiver variable length       */
               void *,           /* Feedback information           */
               char *,           /* Format name                    */
               char *,           /* Selection criteria             */
               char *,           /* Starting profile name          */
               char *,           /* Starting profile option        */
               char *,           /* Group profile name             */
               void *,           /* Error code                     */
               ...);             /* Optional parameters            */
#ifdef __ILEC400__
#else
 }
#endif
#define QGYRHRI EPT_CALL(QGYRHRI)
#ifdef __ILEC400__
 #pragma linkage(QGYRHRI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYRHRI_T(
             char *,                    /* receiver variable */
             void *,                    /* length of rcvr variable */
             char *,                    /* format name */
             char *,                    /* resource name */
             char *);                   /* error code */
#ifdef __ILEC400__
#else
 }
#endif
#define QGYRHRL EPT_CALL(QGYRHRL)
#ifdef __ILEC400__
 #pragma linkage(QGYRHRL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYRHRL_T(
             char *,                    /* receiver variable */
             void *,                    /* length of receiver variable */
             char *,                    /* format name */
             void *,                    /* resource category */
             char *);                   /* error code */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRTVUA EPT_CALL(QSYRTVUA)
#ifdef __ILEC400__
 #pragma linkage(QSYRTVUA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRTVUA_T(
                void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                void *,          /* Feedback information           */
                int,             /* Length of Feedback information */
                char *,          /* Format name                    */
                char *,          /* Object name                    */
                int,             /* Length of object name          */
                void *,          /* Error code                     */
                 ...);           /* Optional parameters            */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRUPWD EPT_CALL(QSYRUPWD)
#ifdef __ILEC400__
 #pragma linkage(QSYRUPWD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRUPWD_T(
                void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                char *,          /* Format name                    */
                char *,          /* User ID                        */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYSUPWD EPT_CALL(QSYSUPWD)
#ifdef __ILEC400__
 #pragma linkage(QSYSUPWD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYSUPWD_T(
                void *,          /* Receiver variable              */
                char *,          /* Format name                    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTQSMXC EPT_CALL(QTQSMXC)
#ifdef __ILEC400__
 #pragma linkage(QTQSMXC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTQSMXC_T(
               int *,            /* Code page in                   */
               int *,            /* Encoding Scheme in             */
               int *,            /* CCSID value out                */
               int *,            /* Encoding Scheme out            */
               void *);          /* FB                             */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCCCFGD EPT_CALL(QDCCCFGD)
#ifdef __ILEC400__
 #pragma linkage(QDCCCFGD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCCCFGD_T(
                char *,          /* configuration name ex: PRT01   */
                  char *,          /* configuration type ex: *DEVD   */
                  void *,          /* requested changes: struct below*/
                  void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QOKADDDP EPT_CALL(QOKADDDP)
#ifdef __ILEC400__
 #pragma linkage(QOKADDDP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOKADDDP_T(
                char *,           /* Department                    */
                char *,           /* Title                         */
                char *,           /* Manager                       */
                char *,           /* Reports to Department         */
                char *,           /* Allow Duplicates              */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QOKCHGDP EPT_CALL(QOKCHGDP)
#ifdef __ILEC400__
 #pragma linkage(QOKCHGDP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOKCHGDP_T(
                char *,           /* Department                    */
                char *,           /* Title                         */
                char *,           /* Manager                       */
                char *,           /* Reports to Department         */
                char *,           /* New Department                */
                char *,           /* Allow Duplicates              */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QOKRMVDP EPT_CALL(QOKRMVDP)
#ifdef __ILEC400__
 #pragma linkage(QOKRMVDP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QOKRMVDP_T(
                char *,           /* Department                    */
                void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTRTVPX EPT_CALL(QWTRTVPX)
#ifdef __ILEC400__
 #pragma linkage(QWTRTVPX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTRTVPX_T(
              void *,               /* Receiver variable             */
              int,                  /* Length of receiver variable   */
              char *,               /* Format of information returned*/
              char *,               /* User ID name                  */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTSETPX EPT_CALL(QWTSETPX)
#ifdef __ILEC400__
 #pragma linkage(QWTSETPX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTSETPX_T(
              int,                  /* Number of flags               */
              void *,               /* Exit program flags            */
              char *,               /* Format of information returned*/
              char *,               /* User ID name                  */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QPZLSTFX EPT_CALL(QPZLSTFX)
#ifdef __ILEC400__
 #pragma linkage(QPZLSTFX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPZLSTFX_T(
              void *,             /* qualified user space name      */
              void *,             /* PRD information (Format Below) */
              char *,             /* Format name                    */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTARDCAP EPT_CALL(QTARDCAP)
#ifdef __ILEC400__
 #pragma linkage(QTARDCAP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARDCAP_T(
                char *,            /* Receiver variable              */
                int,               /* Len of receiver variable       */
                char *,            /* Format name                    */
                char *,            /* Device or resource: ie TAP01   */
                char *,            /* Indicator: *DEVD or *RSRC      */
                char *,            /* Resource type to include       */
                void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTCTJBS EPT_CALL(QWTCTJBS)
#ifdef __ILEC400__
 #pragma linkage(QWTCTJBS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTCTJBS_T(
              int,                  /* Number of temporary on system */
              int,                  /* Number of permanent on system */
              int,                  /* Number of temp to create      */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QpzListPTF EPT_CALL(QpzListPTF)
#ifdef __ILEC400__
 #pragma linkage(QpzListPTF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QpzListPTF_T(
                void *,           /* qualified user space name      */
              void *,             /* PRD information (Format Below) */
              char *,             /* Format name                    */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTADMPDV EPT_CALL(QTADMPDV)
#ifdef __ILEC400__
 #pragma linkage(QTADMPDV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTADMPDV_T(
                char *,            /* Device name                  */
                char *,            /* Information type             */
                char *,            /* Problem identifier           */
                void *);           /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QTARDINF EPT_CALL(QTARDINF)
#ifdef __ILEC400__
 #pragma linkage(QTARDINF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARDINF_T(
                char *,            /* Receiver variable            */
                int,               /* Len of receiver variable     */
                char *,            /* Device name                  */
                char *,            /* Format name                  */
                void *);           /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGRLNGI EPT_CALL(QLGRLNGI)
#ifdef __ILEC400__
 #pragma linkage(QLGRLNGI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGRLNGI_T(
               void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               void *,           /* NLV selection information     */
               char *,           /* Format name                   */
               void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QBNLMODI EPT_CALL(QBNLMODI)
#ifdef __ILEC400__
 #pragma linkage(QBNLMODI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNLMODI_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified module name          */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPBOPNC EPT_CALL(QSPBOPNC)
#ifdef __ILEC400__
 #pragma linkage(QSPBOPNC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPBOPNC_T(
              void *,               /* Receiver variable             */
              int,                  /* Length of receiver variable   */
              char *,               /* Format of information returned*/
              char *,               /* Printer device name           */
              char *,               /* Printer data stream type      */
              void *,               /* Spooled file attributes       */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPBSEPP EPT_CALL(QSPBSEPP)
#ifdef __ILEC400__
 #pragma linkage(QSPBSEPP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPBSEPP_T(
              void *,               /* Receiver variable             */
              int,                  /* Length of receiver variable   */
              char *,               /* Format of information returned*/
              char *,               /* Printer device name           */
              char *,               /* Printer data stream type      */
              char *,               /* Type of separator page        */
              void *,               /* Separator pgm qualified name  */
              void *,               /* Writer handle                 */
              void *,               /* Spooled file handle           */
              int,                  /* Drawer for separator page     */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPCHGOQ EPT_CALL(QSPCHGOQ)
#ifdef __ILEC400__
 #pragma linkage(QSPCHGOQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPCHGOQ_T(
                void *,          /* Qualified output queue name  */
                void *,          /* Changes                      */
                void *);         /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QTQGCTL EPT_CALL(QTQGCTL)
#ifdef __ILEC400__
 #pragma linkage(QTQGCTL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTQGCTL_T(
               int *,            /* CCSID to use                   */
               int *,            /* Control selection value        */
               int *,            /* N1 value                       */
               int *,            /* N2 value                       */
               int *,            /* Control information area       */
               void *);          /* FB                             */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRJBST EPT_CALL(QWCRJBST)
#ifdef __ILEC400__
 #pragma linkage(QWCRJBST_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRJBST_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               void *,           /* Job Identifier                 */
               char *,           /* Format of Job Identifier       */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWPZHPTR EPT_CALL(QWPZHPTR)
#ifdef __ILEC400__
 #pragma linkage(QWPZHPTR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWPZHPTR_T(
               int  *,           /* Process Option               */
               void *,           /* Option specific information  */
               int  *,           /* Length of option specific
                                    information                  */
               void *,           /* Spooled file data buffer     */
               int  *,           /* Length of spooled file data
                                    buffer                       */
               void *,           /* Option specific output info  */
               int  *,           /* Length of option specific
                                    output information           */
               int  *,           /* Length of option specific
                                    output information available */
               void *,           /* Transformed data buffer      */
               int  *,           /* Length of transformed data
                                    buffer                       */
               int  *,           /* Length of transformed data
                                    available                    */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRNWSD EPT_CALL(QDCRNWSD)
#ifdef __ILEC400__
 #pragma linkage(QDCRNWSD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRNWSD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Line name                      */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QIMGCVTI EPT_CALL(QIMGCVTI)
#ifdef __ILEC400__
 #pragma linkage(QIMGCVTI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QIMGCVTI_T(
               void *,        /* Control structure               */
               void *,        /* Input Image structure           */
               void *,        /* Main storage input image        */
               void *,        /* Output image structure          */
               void *,        /* Main storage output image       */
               void *,        /* Feedback structure              */
               void *);       /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRTVSE EPT_CALL(QSYRTVSE)
#ifdef __ILEC400__
 #pragma linkage(QSYRTVSE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRTVSE_T(
                void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                void *,          /* Feedback information           */
                char *,          /* Format name                    */
                char *,          /* Starting server name           */
                int,             /* Starting server name length    */
                char *,          /* Starting server option         */
                char *,          /* User profile name              */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRIPLA EPT_CALL(QWCRIPLA)
#ifdef __ILEC400__
 #pragma linkage(QWCRIPLA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRIPLA_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRTVCA EPT_CALL(QWCRTVCA)
#ifdef __ILEC400__
 #pragma linkage(QWCRTVCA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRTVCA_T(
              void *,           /* Receiver variable              */
	       int ,             /* Length of receiver variable    */
	       char *,           /* Format name                    */
	       int ,             /* Number of fields to return     */
	       void *,           /* Keys of fields to be returned  */
	       void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTCHGJB EPT_CALL(QWTCHGJB)
#ifdef __ILEC400__
 #pragma linkage(QWTCHGJB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTCHGJB_T(
               void *,           /* Qualified job name             */
              void *,            /* Internal job identifier        */
              void *,            /* Format name                    */
              void *,            /* Job change information         */
              void *,            /* Error code                     */
              ...);             /* Optional parameter groups       */
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSADFS EPT_CALL(QZLSADFS)
#ifdef __ILEC400__
 #pragma linkage(QZLSADFS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSADFS_T(
               char *ShareName,
               char *PathName,
               int  *PathNameLen,
               int  *CCSIDEncoding,
               char *TextDescription,
               int  *Permissions,
               int  *MaxUsers,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSADPS EPT_CALL(QZLSADPS)
#ifdef __ILEC400__
 #pragma linkage(QZLSADPS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSADPS_T(
               char *ShareName,
               char *PathName,
               char *TextDescription,
               int  *SpoolFileType,
               char *PrintDriverType,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSCHFS EPT_CALL(QZLSCHFS)
#ifdef __ILEC400__
 #pragma linkage(QZLSCHFS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSCHFS_T(
               char *ShareName,
               char *PathName,
               int  *PathNameLen,
               char *TextDescription,
               int  *Permissions,
               int  *MaxUsers,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSCHPS EPT_CALL(QZLSCHPS)
#ifdef __ILEC400__
 #pragma linkage(QZLSCHPS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSCHPS_T(
               char *ShareName,
               char *PathName,
               char *TextDescription,
               int  *SpoolFileType,
               char *PrintDriverType,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSCHSG EPT_CALL(QZLSCHSG)
#ifdef __ILEC400__
 #pragma linkage(QZLSCHSG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSCHSG_T(
               char *GuestName,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSCHSI EPT_CALL(QZLSCHSI)
#ifdef __ILEC400__
 #pragma linkage(QZLSCHSI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSCHSI_T(
               char *RequestVar,
               int  *RequestVarLen,
               char *Format,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSCHSN EPT_CALL(QZLSCHSN)
#ifdef __ILEC400__
 #pragma linkage(QZLSCHSN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSCHSN_T(
               char *ServerName,
               char *DomainName,
               char *TextDescription,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSENDS EPT_CALL(QZLSENDS)
#ifdef __ILEC400__
 #pragma linkage(QZLSENDS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSENDS_T(
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSENSS EPT_CALL(QZLSENSS)
#ifdef __ILEC400__
 #pragma linkage(QZLSENSS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSENSS_T(
               char *WorkstationName,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSLSTI EPT_CALL(QZLSLSTI)
#ifdef __ILEC400__
 #pragma linkage(QZLSLSTI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSLSTI_T(
               char *RequestVar,
               int  *RequestVarLength,
               char *Format,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSRMS EPT_CALL(QZLSRMS)
#ifdef __ILEC400__
 #pragma linkage(QZLSRMS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSRMS_T(
              char *ShareName,
              char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSSTRS EPT_CALL(QZLSSTRS)
#ifdef __ILEC400__
 #pragma linkage(QZLSSTRS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSSTRS_T(
               char *Reset,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QP0ZDIPC EPT_CALL(QP0ZDIPC)
#ifdef __ILEC400__
 #pragma linkage(QP0ZDIPC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0ZDIPC_T(
                     void *,     /* Delete Control                 */
                     void *      /* Error code                     */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QP0ZRIPC EPT_CALL(QP0ZRIPC)
#ifdef __ILEC400__
 #pragma linkage(QP0ZRIPC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0ZRIPC_T(
                     void *,     /* Receiver variable              */
                     int   ,     /* Length of receiver variable    */
                     char *,     /* Format name                    */
                     int   ,     /* Identifier                     */
                     void *      /* Error code                     */
                     );
#ifdef __ILEC400__
#else
 }
#endif
#define QZLSOLST EPT_CALL(QZLSOLST)
#ifdef __ILEC400__
 #pragma linkage(QZLSOLST_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZLSOLST_T(
               char *ReceiverVar,
               int  *ReceiverVarLength,
               char *ListInformation,
               char *Format,
               char *Qualifier,
               char *ErrorCode);
#ifdef __ILEC400__
#else
 }
#endif
#define QSYADVLE EPT_CALL(QSYADVLE)
#ifdef __ILEC400__
 #pragma linkage(QSYADVLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYADVLE_T(
                void         *,  /* Validation list name - ptr to  */
                                 /*   Qsy_Qual_Name_T.             */
                void         *,  /* Entry ID information - ptr to  */
                                 /*   Qsy_Entry_ID_Info_T          */
                void         *,  /* Encrypted data info - ptr to   */
                                 /*   Qsy_Entry_Encr_Data_Info_T   */
                void         *,  /* Entry data info - ptr to       */
                                 /*   Qsy_Entry_Data_Info_T        */
                void         *,  /* Attribute information - ptr to */
                                 /*   Qsy_OPM_Attr_Info_T          */
                void         *); /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCHVLE EPT_CALL(QSYCHVLE)
#ifdef __ILEC400__
 #pragma linkage(QSYCHVLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCHVLE_T(
                void         *,  /* Validation list name - ptr to  */
                                 /*   Qsy_Qual_Name_T.             */
                void         *,  /* Entry ID information - ptr to  */
                                 /*   Qsy_Entry_ID_Info_T          */
                void         *,  /* Encrypted data info - ptr to   */
                                 /*   Qsy_Entry_Encr_Data_Info_T   */
                void         *,  /* Entry data info - ptr to       */
                                 /*   Qsy_Entry_Data_Info_T        */
                void         *,  /* Attribute information - ptr to */
                                 /*   Qsy_OPM_Attr_Info_T          */
                void         *); /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYFDVLE EPT_CALL(QSYFDVLE)
#ifdef __ILEC400__
 #pragma linkage(QSYFDVLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYFDVLE_T(
                void         *,  /* Validation list name - ptr to  */
                                 /*   Qsy_Qual_Name_T.             */
                void         *,  /* Entry ID information - ptr to  */
                                 /*   Qsy_Entry_ID_Info_T          */
                void         *,  /* Attribute information - ptr to */
                                 /*   Qsy_Req_Attr_Info_T          */
                void         *,  /* Return data information - ptr  */
                                 /*   to Qsy_Rtn_Vld_Lst_Ent_T     */
                void         *,  /* Return attribute info - ptr to */
                                 /*   Qsy_Rtn_Attr_Info_T          */
                void         *); /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRMVLE EPT_CALL(QSYRMVLE)
#ifdef __ILEC400__
 #pragma linkage(QSYRMVLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRMVLE_T(
                void         *,  /* Validation list name - ptr to  */
                                 /*   Qsy_Qual_Name_T.             */
                void         *,  /* Entry ID information - ptr to  */
                                 /*   Qsy_Entry_ID_Info_T          */
                void         *); /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYADDUC EPT_CALL(QSYADDUC)
#ifdef __ILEC400__
 #pragma linkage(QSYADDUC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYADDUC_T(

              char *,         /* User profile                  */
              char *,         /* Certificate                   */
              int   ,         /* Type                          */
              int   ,         /* Length of certificate         */
              void *);        /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYADDVC EPT_CALL(QSYADDVC)
#ifdef __ILEC400__
 #pragma linkage(QSYADDVC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYADDVC_T(

              char *,       /*  Validation list pathname     */
              int   ,       /*  Length of path               */
              char *,       /*  Certificate                  */
              int   ,       /*  Type                         */
              int   ,       /*  Length of certificate        */
              void *);      /*  Error_code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCHKVC EPT_CALL(QSYCHKVC)
#ifdef __ILEC400__
 #pragma linkage(QSYCHKVC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCHKVC_T(

              char  *,       /*  Vldl pathname             */
              int    ,       /*  Length of path            */
              char  *,       /*  Certificate               */
              int    ,       /*  Type                      */
              int    ,       /*  Length of certificate     */
              int   *,       /*  Return code               */
              void  *);      /*  Error code                */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYFNDCU EPT_CALL(QSYFNDCU)
#ifdef __ILEC400__
 #pragma linkage(QSYFNDCU_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYFNDCU_T(

                char *,        /*  Certificate             */
                int   ,        /*  Type                    */
                int   ,        /*  Length of certificate   */
                char *,        /*  User                    */
                void *);       /*  Error code              */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYLSTUC EPT_CALL(QSYLSTUC)
#ifdef __ILEC400__
 #pragma linkage(QSYLSTUC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYLSTUC_T(

             char *,   /* User space name              */
             char *,   /* User profile                 */
             char *,   /* Format name                  */
             char *,   /* Selection control - ptr to   */
                       /*     Qsy_Sel_Ctrl_T           */
             void *);  /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYLSTVC EPT_CALL(QSYLSTVC)
#ifdef __ILEC400__
 #pragma linkage(QSYLSTVC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYLSTVC_T(

              char *,        /* User space name             */
              char *,        /* Validation list pathname    */
              int   ,        /* Length of path              */
              char *,        /* Format name                 */
              char *,        /* Selection control - ptr to  */
                             /*     Qsy_Sel_Ctrl_T          */
              void *);       /* Error code                  */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYPARSC EPT_CALL(QSYPARSC)
#ifdef __ILEC400__
 #pragma linkage(QSYPARSC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYPARSC_T(

              char * ,       /*  Certificate                   */
              int    ,       /*  Type                          */
              int    ,       /*  Length of certificate         */
              char * ,       /*  Format name                   */
              char * ,       /*  Receiver variable             */
              int    ,       /*  Length of receiver            */
              void *);       /*  Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRMVUC EPT_CALL(QSYRMVUC)
#ifdef __ILEC400__
 #pragma linkage(QSYRMVUC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRMVUC_T(

              char *,        /*   User profile           */
              char *,        /*   Certificate            */
              int   ,        /*   Type                   */
              int   ,        /*   Length of certificate  */
              void *);       /*   Error code             */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRMVVC EPT_CALL(QSYRMVVC)
#ifdef __ILEC400__
 #pragma linkage(QSYRMVVC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRMVVC_T(

              char *,         /*  Vldl pathname                */
              int   ,         /*  Length of path               */
              char *,         /*  Certificate                  */
              int   ,         /*  Type                         */
              int   ,         /*  Length of certificate        */
              void *);        /*  Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCHGDS EPT_CALL(QSYCHGDS)
#ifdef __ILEC400__
 #pragma linkage(QSYCHGDS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCHGDS_T(
                char *,          /* DST security capability user id*/
                char *,          /* DST security capability pwd    */
                char *,          /* Type of DST profile to be      */
                                 /* changed                        */
                char *,          /* New user id                    */
                char *,          /* New password                   */
                void *,          /* Error code                     */
                ...);            /* Optional parameters            */
#ifdef __ILEC400__
#else
 }
#endif
#define QZNFRTVE EPT_CALL(QZNFRTVE)
#ifdef __ILEC400__
 #pragma linkage(QZNFRTVE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QZNFRTVE_T(
                void *,          /* Receiver variable              */
                unsigned int,    /* Length of Receiver variable    */
                void *,          /* Feedback information - ptr to  */
                                 /*   Qznf_EXPE_Feedback_Info_T    */
                char *,          /* Format Name                    */
                char *,          /* Object Path Name               */
                unsigned int,    /* Length of Object Path Name     */
                unsigned int,    /* CCSID of Object Path Name      */
                unsigned int,    /* Desired CCSID of the Object    */
                                 /* Path names that are returned.  */
                unsigned int,    /* Handle                         */
                void *);         /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QGLDSSDD EPT_CALL(QGLDSSDD)
#ifdef __ILEC400__
 #pragma linkage(QGLDSSDD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGLDSSDD_T(
                 char *,          /* Input option                 */
                 void * );        /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QTAFROBJ EPT_CALL(QTAFROBJ)
#ifdef __ILEC400__
 #pragma linkage(QTAFROBJ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTAFROBJ_T(
                char *,            /* Request variable             */
                int,               /* Len of request variable      */
                char *,            /* Format name                  */
                void *);           /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QTACJMA EPT_CALL(QTACJMA)
#ifdef __ILEC400__
 #pragma linkage(QTACJMA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTACJMA_T(
                void *,             /* Attribute description         */
                int,                /* Length of attribute desc      */
                char *,             /* Format name                   */
                void *,             /* Qualified job name            */
                void *,             /* Internal job identifier       */
                void *);            /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QTARJMA EPT_CALL(QTARJMA)
#ifdef __ILEC400__
 #pragma linkage(QTARJMA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARJMA_T(
                void *,             /* Receiver variable             */
                int,                /* Length of receiver variable   */
                char *,             /* Format name                   */
                void *,             /* Qualified job name            */
                void *,             /* Internal job identifier       */
                void *);            /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QP0LFLOP EPT_CALL(QP0LFLOP)
#ifdef __ILEC400__
 #pragma linkage(QP0LFLOP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0LFLOP_T(
                unsigned int,    /* File Op                        */
                char *,          /* Input Buf                      */
                unsigned int,    /* Input buf length               */
                char *,          /* Output buf                     */
                unsigned int,    /* Output buf length              */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPARTVDA EPT_CALL(QPARTVDA)
#ifdef __ILEC400__
 #pragma linkage(QPARTVDA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPARTVDA_T(
               void *,          /* Receive variable               */
               int,             /* Length of receiver variable    */
               int  *,          /* Actual length of user data     */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTSJUID EPT_CALL(QWTSJUID)
#ifdef __ILEC400__
 #pragma linkage(QWTSJUID_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTSJUID_T(
              int ,             /* Operation requested           */
             void *);           /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QHSMMOVF EPT_CALL(QHSMMOVF)
#ifdef __ILEC400__
 #pragma linkage(QHSMMOVF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHSMMOVF_T(
                char *,        /* Folder name                      */
                int  *,        /* Target ASP                       */
                void *);       /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QHSMMOVL EPT_CALL(QHSMMOVL)
#ifdef __ILEC400__
 #pragma linkage(QHSMMOVL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QHSMMOVL_T(
                char *,        /* Library name                     */
                int  *,        /* Target ASP                       */
                char *,        /* Check Dependencies               */
                void *,        /* Error code                       */
                ...);          /* Optional Parameters:           */
#ifdef __ILEC400__
#else
 }
#endif
#define QSRCRTMD EPT_CALL(QSRCRTMD)
#ifdef __ILEC400__
 #pragma linkage(QSRCRTMD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSRCRTMD_T(

                  void *,       /* Qualified Media Definition     */
                  void *,       /* Input Data                     */
                  int,          /* Length of Data                 */
                  char *,       /* Format name                    */
                  char *,       /* Public authority               */
                  char *,       /* Text description               */
                  char,         /* Replace existing *MEDDFN       */
                  void *);      /* Error code                 @QFA*/
#ifdef __ILEC400__
#else
 }
#endif
#define QSRRTVMD EPT_CALL(QSRRTVMD)
#ifdef __ILEC400__
 #pragma linkage(QSRRTVMD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSRRTVMD_T(

                  void *,       /* Qualified Media Definition     */
                  void *,       /* Input Data                     */
                  int,          /* Length of Data                 */
                  char *,       /* Format name                    */
                  void *);      /* Error code                 @QFA*/
#ifdef __ILEC400__
#else
 }
#endif
#define QSRDLTMD EPT_CALL(QSRDLTMD)
#ifdef __ILEC400__
 #pragma linkage(QSRDLTMD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSRDLTMD_T(

                  void *,       /* Qualified Media Definition     */
                  void *);      /* Error code                 @QFA*/
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRCLSI EPT_CALL(QWCRCLSI)
#ifdef __ILEC400__
 #pragma linkage(QWCRCLSI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRCLSI_T(
                   void *,        /* Receiver variable            */
                  int,            /* Length of receiver variable  */
                  void *,         /* Format name                  */
                  void *,         /* Qualified class name         */
                  void *);        /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QWDCSBSE EPT_CALL(QWDCSBSE)
#ifdef __ILEC400__
 #pragma linkage(QWDCSBSE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWDCSBSE_T(
                   void *,        /* Subsystem description name   */
                  void *,         /* Format name                  */
                  void *,         /* Entry Identifier             */
                  void *,         /* Change Information           */
                  void *);        /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSZSPTPR EPT_CALL(QSZSPTPR)
#ifdef __ILEC400__
 #pragma linkage(QSZSPTPR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSZSPTPR_T(
              void *,             /* Product information list       */
              int,                /* Length of product information  */
              void *,             /* Product information format name*/
              int,                /* Requested action               */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPZCPYSV EPT_CALL(QPZCPYSV)
#ifdef __ILEC400__
 #pragma linkage(QPZCPYSV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPZCPYSV_T(
              void *,             /* Product information            */
              char *,             /* Product information format name*/
              char *,             /* Device name                    */
              void *);            /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTACTLDV EPT_CALL(QTACTLDV)
#ifdef __ILEC400__
 #pragma linkage(QTACTLDV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTACTLDV_T(
                char *,            /* Device name                    */
                int,               /* Requested function             */
                char *,            /* Send buffer                    */
                int,               /* Send buffer length             */
                char *,            /* Receive buffer                 */
                int,               /* Receive buffer length          */
                char *,            /* Command format                 */
                void *,            /* Command data                   */
                int,               /* Command data length            */
                void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTOCLPPJ EPT_CALL(QTOCLPPJ)
#ifdef __ILEC400__
 #pragma linkage(QTOCLPPJ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTOCLPPJ_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* Point-to-Point profile name    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QYASEDMO EPT_CALL(QYASEDMO)
#ifdef __ILEC400__
 #pragma linkage(QYASEDMO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYASEDMO_T(

   /* Required parameters */
   char     *,      /* Session Handle      */
   void     *       /* Error code          */
);
#ifdef __ILEC400__
#else
 }
#endif
#define QYASEDMS EPT_CALL(QYASEDMS)
#ifdef __ILEC400__
 #pragma linkage(QYASEDMS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYASEDMS_T(

   /* Required parameters */
   char     *,      /* Session Handle      */
   void     *       /* Error code          */
);
#ifdef __ILEC400__
#else
 }
#endif
#define QYASRDI EPT_CALL(QYASRDI)
#ifdef __ILEC400__
 #pragma linkage(QYASRDI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYASRDI_T(

   /* Required parameters */
   void     *,      /* Receiver variable   */
   long int *,      /* Length of receiver  */
                    /*  variable           */
   char     *,      /* Format name of      */
                    /*  receiver variable  */
   char     *,      /* Disk unit resource  */
                    /*  name array         */
   long int *,      /* Number of disk unit */
                    /*  resource names     */
   void     *       /* Error code          */
);
#ifdef __ILEC400__
#else
 }
#endif
#define QYASRDMS EPT_CALL(QYASRDMS)
#ifdef __ILEC400__
 #pragma linkage(QYASRDMS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYASRDMS_T(

   /* Required parameters */
   void     *,      /* Receiver variable   */
   long int *,      /* Length of receiver  */
                    /*  variable           */
   char     *,      /* Format name of      */
                    /*  receiver variable  */
   char     *,      /* Session Handle      */
   void     *       /* Error code          */
);
#ifdef __ILEC400__
#else
 }
#endif
#define QYASSDMO EPT_CALL(QYASSDMO)
#ifdef __ILEC400__
 #pragma linkage(QYASSDMO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYASSDMO_T(

   /* Required parameters */
   char     *,      /* Session Handle      */
   long int *,      /* Operation Key       */
   void     *,      /* Operation variable  */
   long int *,      /* Length of operation */
                    /*  variable           */
   char     *,      /* Format name of      */
                    /*  operation variable */
   void     *       /* Error code          */
);
#ifdef __ILEC400__
#else
 }
#endif
#define QYASSDMS EPT_CALL(QYASSDMS)
#ifdef __ILEC400__
 #pragma linkage(QYASSDMS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYASSDMS_T(

   /* Required parameters */
   char     *,      /* Session Handle      */
   void     *       /* Error code          */
);
#ifdef __ILEC400__
#else
 }
#endif
#define QFPADRNI EPT_CALL(QFPADRNI)
#ifdef __ILEC400__
 #pragma linkage(QFPADRNI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPADRNI_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* NWSD server name               */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGRTVCD EPT_CALL(QLGRTVCD)
#ifdef __ILEC400__
 #pragma linkage(QLGRTVCD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGRTVCD_T(
               void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               int,              /* Request Type                  */
               int,              /* Encoding Scheme               */
               void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGRTVCI EPT_CALL(QLGRTVCI)
#ifdef __ILEC400__
 #pragma linkage(QLGRTVCI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGRTVCI_T(
               void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBRJBRL EPT_CALL(QDBRJBRL)
#ifdef __ILEC400__
 #pragma linkage(QDBRJBRL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBRJBRL_T(
              void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              char *,               /* Format name                   */
              char *,               /* Qualified Job name            */
              void *,               /* Error code                    */
              ...);            /* OPTIONAL PARAMETERS:            */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBRRCDL EPT_CALL(QDBRRCDL)
#ifdef __ILEC400__
 #pragma linkage(QDBRRCDL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBRRCDL_T(
              void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              char *,               /* Format name                   */
              char *,               /* File and library name         */
              char *,               /* Member name                   */
              unsigned int,         /* Relative record number        */
              void *,               /* Error code                    */
              ...);            /* OPTIONAL PARAMETERS:            */
#ifdef __ILEC400__
#else
 }
#endif
#define QUHRHLPT EPT_CALL(QUHRHLPT)
#ifdef __ILEC400__
 #pragma linkage(QUHRHLPT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QUHRHLPT_T(
                void *,           /* Receiver variable               */
                int  *,           /* Receiver variable length        */
                char *,           /* Format name                     */
                void *,           /* Help identifiers to be retrieved*/
                int  *,           /* Number of help identifiers      */
                void *,           /* Help identifier text            */
                int  *,           /* Length of help identifier text  */
                void *);          /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QSQGNDDL EPT_CALL(QSQGNDDL)
#ifdef __ILEC400__
 #pragma linkage(QSQGNDDL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSQGNDDL_T(
              void *,               /* Input Template                */
              int  *,               /* Length of Input Template      */
              char *,               /* Input Template Format Name    */
              void *);              /* Error Code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDMLOPNF EPT_CALL(QDMLOPNF)
#ifdef __ILEC400__
 #pragma linkage(QDMLOPNF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDMLOPNF_T(
               void *,         /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Job identification information */
               char *,           /* Format of job identification   */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRTVSA EPT_CALL(QSYRTVSA)
#ifdef __ILEC400__
 #pragma linkage(QSYRTVSA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRTVSA_T(
                void *,        /* Receiver variable              */
                int,             /* Receiver variable length       */
                char *,          /* Format name                    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFPADPNU EPT_CALL(QFPADPNU)
#ifdef __ILEC400__
 #pragma linkage(QFPADPNU_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPADPNU_T(
                char *,          /* Option                         */
                char *,          /* Profile type                   */
                char *,          /* AS/400 profile                 */
                char *,          /* Windows domain name            */
                int,             /* Length of Windows domain name  */
                char *,          /* Windows server name            */
                int,             /* Length of Windows server name  */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFPADRUA EPT_CALL(QFPADRUA)
#ifdef __ILEC400__
 #pragma linkage(QFPADRUA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPADRUA_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* User profile                   */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWVRCSTK EPT_CALL(QWVRCSTK)
#ifdef __ILEC400__
 #pragma linkage(QWVRCSTK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWVRCSTK_T(
               void *,         /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Job identification information */
               char *,           /* Format of job identification   */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPQRAFPI EPT_CALL(QPQRAFPI)
#ifdef __ILEC400__
 #pragma linkage(QPQRAFPI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPQRAFPI_T(
              void *,               /* Receiver Variable             */
              int,                  /* Receiver Variable Length      */
              char *,               /* Format name                   */
              void *,               /* Qualified AFP Object Name     */
              void *,               /* Format Qualifier              */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QTOCNETC EPT_CALL(QTOCNETC)
#ifdef __ILEC400__
 #pragma linkage(QTOCNETC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTOCNETC_T(
               void *,            /* User space name and library    */
               char *,            /* Format name                    */
               void *,            /* Connection type                */
               void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRJBLK EPT_CALL(QWCRJBLK)
#ifdef __ILEC400__
 #pragma linkage(QWCRJBLK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRJBLK_T(
              void *,          /* Receiver variable              */
	      int,               /* Length of receiver variable    */
	      char *,            /* Format name                    */
	      void *,            /* Job Identification Information */
	      char *,            /* Format of Job ID Information   */
	      void *,            /* Error code                     */
       ...);               /* Optional Parameters:           */
#ifdef __ILEC400__
#else
 }
#endif
#define QPTRTVPO EPT_CALL(QPTRTVPO)
#ifdef __ILEC400__
 #pragma linkage(QPTRTVPO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPTRTVPO_T(
                void *,         /* Receiver variable              */
                int,            /* Length of receiver variable    */
                char *,         /* Format name                    */
                void *,         /* Command string                 */
                int,            /* Length of command string       */
                void *);        /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QCDRCMDD EPT_CALL(QCDRCMDD)
#ifdef __ILEC400__
 #pragma linkage(QCDRCMDD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCDRCMDD_T(
                char *,        /* Qualified Command Name             */
                void *,        /* Destination                        */
                char *,        /* Destination Format                 */
                void *,        /* Receiver Variable                  */
                char *,        /* Receiver Variable Format           */
                void *);       /* Error Code                         */
#ifdef __ILEC400__
#else
 }
#endif
#define QWTRTVTA EPT_CALL(QWTRTVTA)
#ifdef __ILEC400__
 #pragma linkage(QWTRTVTA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTRTVTA_T(
               void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Job identification information */
               char *,           /* Format of job identification   */
               int,              /* Number of fields to return     */
               void *,           /* Keys of fields to be returned  */
               void *,           /* Reset Statistics               */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QYDORTVO EPT_CALL(QYDORTVO)
#ifdef __ILEC400__
 #pragma linkage(QYDORTVO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYDORTVO_T(
                      char *,      /* path name to object          */
                      int  *,      /* length of path name          */
                      char *,      /* format name of object        */
                      char *,      /* Receiver variable            */
                      int  *,      /* Length of Receiver           */
                      char *,      /* Format of Receiver           */
                      void *);     /* error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QLGRTVCT EPT_CALL(QLGRTVCT)
#ifdef __ILEC400__
 #pragma linkage(QLGRTVCT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLGRTVCT_T(
               void *,           /* Receiver variable             */
               int,              /* Length of receiver variable   */
               char *,           /* Format name                   */
               int,              /* CCSID Request type            */
               int,              /* CCSID request type qualifier  */
               void *);          /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QYDOSGNO EPT_CALL(QYDOSGNO)
#ifdef __ILEC400__
 #pragma linkage(QYDOSGNO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYDOSGNO_T(
                  char *,               /*  path name to object        */
		  int  *,               /* length of path name         */
		  char *,               /* format name                 */
		  char *,               /* application identifier (ID) */
		  int  *,               /* length of  application ID   */
		  char *,               /* replace duplicate signature */
		  void *,               /* how to handle multiple
					     objects                   */
		  int  * ,              /* length of multiple objects
					   structure to use
					 (0=no mult.object structure)  */
		  void *);          /* error code                  */
#ifdef __ILEC400__
#else
 }
#endif
#define QTARDSTS EPT_CALL(QTARDSTS)
#ifdef __ILEC400__
 #pragma linkage(QTARDSTS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARDSTS_T(
                char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                char *,            /* Device Description             */
                char *,            /* Resource Name                  */
                void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSPRILSP EPT_CALL(QSPRILSP)
#ifdef __ILEC400__
 #pragma linkage(QSPRILSP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPRILSP_T(
               void *,           /* Receiver variable            */
               int,               /* Length of receiver variable  */
               char *,            /* Format name                  */
               void *);           /* Error Code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRLCKI EPT_CALL(QWCRLCKI)
#ifdef __ILEC400__
 #pragma linkage(QWCRLCKI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRLCKI_T(
              void *,          /* Receiver variable              */
	      int,               /* Length of receiver variable    */
	      char *,            /* Format name                    */
	      char *,            /* Object identification          */
	      char *,            /* Object identification format   */
	      int,               /* Number of fields to return     */
	      int *,             /* Key of fields to return        */
	      char *,            /* Filters                    @A1A*/
              char *,            /* Filter format              @A1A*/
	      void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBSTCRS EPT_CALL(QDBSTCRS)
#ifdef __ILEC400__
 #pragma linkage(QDBSTCRS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBSTCRS_T(

   void         *pInput,
   unsigned int *piInputLen,
   char         *pInputFormat,
   void         *pFeedback,
   unsigned int *piFeedbackLen,
   unsigned int *piFeedbackKeys,
   unsigned int *piFeedbackKeysCount,
   void         *pErrorCode
);
#ifdef __ILEC400__
#else
 }
#endif
#define QDBSTDS EPT_CALL(QDBSTDS)
#ifdef __ILEC400__
 #pragma linkage(QDBSTDS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBSTDS_T(

   void         *pInput,
   unsigned int *piInputLen,
   char         *pInputFormat,
   void         *pFeedback,
   unsigned int *piFeedbackLen,
   unsigned int *piFeedbackKeys,
   unsigned int *piFeedbackKeysCount,
   void         *pErrorCode
);
#ifdef __ILEC400__
#else
 }
#endif
#define QDBSTLDS EPT_CALL(QDBSTLDS)
#ifdef __ILEC400__
 #pragma linkage(QDBSTLDS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBSTLDS_T(

   char         *pUserSpaceName,
   char         *pOutputFormat,
   void         *pInput,
   unsigned int *piInputLen,
   char         *pInputFormat,
   void         *pErrorCode
);
#ifdef __ILEC400__
#else
 }
#endif
#define QDBSTLRS EPT_CALL(QDBSTLRS)
#ifdef __ILEC400__
 #pragma linkage(QDBSTLRS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBSTLRS_T(

   char         *pUserSpaceName,
   char         *pOutputFormat,
   void         *pInput,
   unsigned int *piInputLen,
   char         *pInputFormat,
   void         *pErrorCode
);
#ifdef __ILEC400__
#else
 }
#endif
#define QDBSTLS EPT_CALL(QDBSTLS)
#ifdef __ILEC400__
 #pragma linkage(QDBSTLS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBSTLS_T(

   char         *pUserSpaceName,
   char         *pOutputFormat,
   void         *pInput,
   unsigned int *piInputLen,
   char         *pInputFormat,
   void         *pErrorCode
);
#ifdef __ILEC400__
#else
 }
#endif
#define QDBSTRS EPT_CALL(QDBSTRS)
#ifdef __ILEC400__
 #pragma linkage(QDBSTRS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBSTRS_T(

   void         *pInput,
   unsigned int *piInputLen,
   char         *pInputFormat,
   void         *pFeedback,
   unsigned int *piFeedbackLen,
   unsigned int *piFeedbackKeys,
   unsigned int *piFeedbackKeysCount,
   void         *pErrorCode
);
#ifdef __ILEC400__
#else
 }
#endif
#define QDBSTUS EPT_CALL(QDBSTUS)
#ifdef __ILEC400__
 #pragma linkage(QDBSTUS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBSTUS_T(

   void         *pInput,
   unsigned int *piInputLen,
   char         *pInputFormat,
   void         *pFeedback,
   unsigned int *piFeedbackLen,
   unsigned int *piFeedbackKeys,
   unsigned int *piFeedbackKeysCount,
   void         *pErrorCode
);
#ifdef __ILEC400__
#else
 }
#endif
#define QTHMCTLT EPT_CALL(QTHMCTLT)
#ifdef __ILEC400__
 #pragma linkage(QTHMCTLT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTHMCTLT_T(
               void *receiver,
               int *recieverLength,
               char *receiverFormat,
               char *threadInfo,
               char *threadInfoFormat,
               int *action,
               void *errorCode
              );
#ifdef __ILEC400__
#else
 }
#endif
#define QTRXRLRL EPT_CALL(QTRXRLRL)
#ifdef __ILEC400__
 #pragma linkage(QTRXRLRL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTRXRLRL_T(
               void *receiver,
               int *receiverLength,
               char *receiverFormat,
               char *lockSpaceID,
               void *filter,
               char *filterFormat,
               void *errorCode
              );
#ifdef __ILEC400__
#else
 }
#endif
#define QTRXRLSA EPT_CALL(QTRXRLSA)
#ifdef __ILEC400__
 #pragma linkage(QTRXRLSA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTRXRLSA_T(
               void *receiver,
               int *receiverLength,
               char *receiverFormat,
               char *lockSpaceID,
               void *errorCode
              );
#ifdef __ILEC400__
#else
 }
#endif
#define QTRXRLSL EPT_CALL(QTRXRLSL)
#ifdef __ILEC400__
 #pragma linkage(QTRXRLSL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTRXRLSL_T(
               void *receiver,
               int *receiverLength,
               char *receiverFormat,
               char *lockSpaceID,
               void *filter,
               char *filterFormat,
               void *errorCode
              );
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRLRQI EPT_CALL(QWCRLRQI)
#ifdef __ILEC400__
 #pragma linkage(QWCRLRQI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRLRQI_T(
              void *,        /*   Receiver variable              */
	      int,             /*   Length of receiver variable    */
	      char *,          /*   Format name                    */
	      char *,          /*   Lock request handle            */
	      void *);         /*   Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYGENPT EPT_CALL(QSYGENPT)
#ifdef __ILEC400__
 #pragma linkage(QSYGENPT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYGENPT_T(
                char *,       /* Profile token                    */
               char *,          /* User profile                     */
               char *,          /* User password                    */
               int  *,          /* Time out interval                */
               char *,          /* Profile token type               */
               void *,          /* Error Code                       */
                  ...);         /* Optional parameters:             */
#ifdef __ILEC400__
#else
 }
#endif
#define QSQCHGDC EPT_CALL(QSQCHGDC)
#ifdef __ILEC400__
 #pragma linkage(QSQCHGDC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSQCHGDC_T(
               char *,           /* Dynamic default collection     */
               void *);          /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRMVPT EPT_CALL(QSYRMVPT)
#ifdef __ILEC400__
 #pragma linkage(QSYRMVPT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRMVPT_T(
               char *,              /* Remove option                 */
               void *,              /* Error Code                    */
               ...);                /* Optional parameter:
                                       profile token.                */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCOLTHD EPT_CALL(QWCOLTHD)
#ifdef __ILEC400__
 #pragma linkage(QWCOLTHD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCOLTHD_T(
               void *,         /* Receiver variable              */
                int  *,          /* Length of receiver variable    */
                char *,          /* Format name                    */
                void *,          /* Receiver variable definition   */
                int  *,          /* Length of receiver variable    */
                                 /* definition                     */
                void *,          /* Job identification information */
                char *,          /* Format of job identification   */
                void *,          /* List Information               */
                int  *,          /* Number of records to return    */
                void *,          /* Sort information               */
                int  *,          /* Number of fields to return     */
                void *,          /* Keys of fields to be returned  */
                char  ,          /* Reset status statistics        */
                void *,          /* General return data            */
                int  *,          /* Length of general return data  */
                void *);         /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QP0LROR EPT_CALL(QP0LROR)
#ifdef __ILEC400__
 #pragma linkage(QP0LROR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0LROR_T(
                void *            Receiver_Ptr,
                unsigned int      Receiver_Length,
                char *            Format_Ptr,
                void *            Path_Ptr,
                void *            Error_Code_P);
#ifdef __ILEC400__
#else
 }
#endif
#define QDBRPLAY EPT_CALL(QDBRPLAY)
#ifdef __ILEC400__
 #pragma linkage(QDBRPLAY_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBRPLAY_T(
              void *,               /* Input template                */
              int  *,               /* Length of input template      */
              char *,               /* Input template format name    */
              void *,               /* Journal entry specific data   */
              int  *,               /* Length of journal entry       */
                                    /* specific data                 */
              void *,               /* Rename exit program scratchpad*/
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QP0LCHSG EPT_CALL(QP0LCHSG)
#ifdef __ILEC400__
 #pragma linkage(QP0LCHSG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0LCHSG_T(
         void * ScanKey_Ptr,
         void * ScanSign_Ptr,
         void * Error_Code_Ptr);
#ifdef __ILEC400__
#else
 }
#endif
#define QP0LRTSG EPT_CALL(QP0LRTSG)
#ifdef __ILEC400__
 #pragma linkage(QP0LRTSG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0LRTSG_T(
         void * ScanKey_Ptr,
         void * ScanSign_Ptr,
         void * Error_Code_Ptr);
#ifdef __ILEC400__
#else
 }
#endif
#define QTARCGYL EPT_CALL(QTARCGYL)
#ifdef __ILEC400__
 #pragma linkage(QTARCGYL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARCGYL_T(
                char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTARCTGI EPT_CALL(QTARCTGI)
#ifdef __ILEC400__
 #pragma linkage(QTARCTGI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARCTGI_T(
                char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                char *,            /* Device Description             */
                char *,            /* Requested cartridge ID         */
                char *,            /* Requested category             */
                void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTARTLBL EPT_CALL(QTARTLBL)
#ifdef __ILEC400__
 #pragma linkage(QTARTLBL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARTLBL_T(
                char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                char *,            /* Device description             */
                char *,            /* Request qualifiers             */
                int,               /* Length of request qualifiers   */
                void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTARCTGF EPT_CALL(QTARCTGF)
#ifdef __ILEC400__
 #pragma linkage(QTARCTGF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTARCTGF_T(
                char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTASCTGF EPT_CALL(QTASCTGF)
#ifdef __ILEC400__
 #pragma linkage(QTASCTGF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTASCTGF_T(
                char *,          /* Cartridge filter             */
                int,               /* Length of cartridge filter   */
                char *,            /* Format Name                  */
                int,               /* Requested action             */
                void *);           /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCADJTM EPT_CALL(QWCADJTM)
#ifdef __ILEC400__
 #pragma linkage(QWCADJTM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCADJTM_T(
               void *,           /* Time adjustment variable       */
               int  *,           /* Length of time adjustment var  */
               char *,           /* Time adjustment format name    */
               void *);          /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRTVTM EPT_CALL(QWCRTVTM)
#ifdef __ILEC400__
 #pragma linkage(QWCRTVTM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRTVTM_T(
               void *,           /* Receiver variable              */
               int  *,           /* Length of receiver variable    */
               char *,           /* Format name                    */
               int  *,           /* Number of fields to return     */
               void *,           /* Keys of fields to be returned  */
               void *);          /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWCRTVTZ EPT_CALL(QWCRTVTZ)
#ifdef __ILEC400__
 #pragma linkage(QWCRTVTZ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCRTVTZ_T(
               void *,         /* Receiver variable                */
	         int  *,         /* Length of receiver variable      */
	         char *,         /* Format name                      */
	         char *,         /* Time zone description            */
	         void *);        /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QPQAPME EPT_CALL(QPQAPME)
#ifdef __ILEC400__
 #pragma linkage(QPQAPME_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPQAPME_T(
                  char *,  /* Returned library name           */
		  void *,   /* Qualified PDF map object name   */
		  void *,   /* PDF map entry spooled file attributes */
		  int,      /* Length of PDF map entry spooled file attributes */
		  char *,   /* Format of PDF map entry spooled file attributes */
		  char *,  /* PDF mapping action           */
		  int,     /* Length of PDF mapping action     */
		  int,     /* Add type                         */
		  void *); /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QPQCRTPM EPT_CALL(QPQCRTPM)
#ifdef __ILEC400__
 #pragma linkage(QPQCRTPM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPQCRTPM_T(
                   void *,     /* Qualified PDF Map object name */
		   char *,       /* Public authority              */
		   char *,       /* Text description              */
		   void *);       /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QPQDLTPM EPT_CALL(QPQDLTPM)
#ifdef __ILEC400__
 #pragma linkage(QPQDLTPM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPQDLTPM_T(
                   void *,        /* Qualified PDF Map object name */
		   void *);         /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QPQOLPM EPT_CALL(QPQOLPM)
#ifdef __ILEC400__
 #pragma linkage(QPQOLPM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPQOLPM_T(
                  void *,              /* Receiver Variable             */
		  signed int,           /* Receiver Variable Length      */
		  char *,               /* List information              */
		  signed int,           /* Number of records to return   */
		  char *,               /* Format name                   */
		  char *,               /* Filter information            */
		  char *,               /* Format of  filter information */
		  void *,               /* Qualified AFP Object Name     */
		  void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QP0LRRO EPT_CALL(QP0LRRO)
#ifdef __ILEC400__
 #pragma linkage(QP0LRRO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0LRRO_T(
                  void* Receiver_variable,
                  unsigned int Length_of_receiver_variable,
                  char* Receiver_format_name,
                  void* Job_identification,
                  char* Job_identification_format,
                  void* Error_Code_Ptr);
#ifdef __ILEC400__
#else
 }
#endif
#define QYPSCSCA EPT_CALL(QYPSCSCA)
#ifdef __ILEC400__
 #pragma linkage(QYPSCSCA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYPSCSCA_T(
              char *,            /* Collector name                 */
              int,               /* Default collection interval    */
              char *,            /* Library                        */
              int,               /* Retention period               */
              int,               /* Cycle time                     */
              int,               /* Cycle interval                 */
              int,               /* Companion user job             */
              char *,            /* Default collector definition   */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QYPSCYCC EPT_CALL(QYPSCYCC)
#ifdef __ILEC400__
 #pragma linkage(QYPSCYCC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYPSCYCC_T(
              char *,            /* Collector name                 */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QYPSENDC EPT_CALL(QYPSENDC)
#ifdef __ILEC400__
 #pragma linkage(QYPSENDC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYPSENDC_T(
              char *,            /* Collector name                 */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QYPSRSCA EPT_CALL(QYPSRSCA)
#ifdef __ILEC400__
 #pragma linkage(QYPSRSCA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYPSRSCA_T(
              char *,            /* Collector name                 */
              int,               /* Default collection interval    */
              char *,            /* Library                        */
              int,               /* Retention period               */
              int,               /* Cycle time                     */
              int,               /* Cycle interval                 */
              int,               /* Companion user job             */
              char *,            /* Default collector definition   */
              char *,            /* Current collector definition   */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QYPSSTRC EPT_CALL(QYPSSTRC)
#ifdef __ILEC400__
 #pragma linkage(QYPSSTRC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYPSSTRC_T(
              char *,            /* Collector name                 */
              char *,            /* Collection definition          */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QYPERPEX EPT_CALL(QYPERPEX)
#ifdef __ILEC400__
 #pragma linkage(QYPERPEX_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYPERPEX_T(
                void *,         /* Receiver variable              */
                unsigned int*,   /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* PEX session name               */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QLPRAGR EPT_CALL(QLPRAGR)
#ifdef __ILEC400__
 #pragma linkage(QLPRAGR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QLPRAGR_T(
                void *,      /* Receiver variable                 */
                 int   ,      /* Length of receiver variable       */
                 char *,      /* Format name                       */
                 char *,      /* Product ID                        */
                 char *,      /* Release                           */
                 char *,      /* Option                            */
                 void *       /* Error code                        */
                );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYOLAUS EPT_CALL(QGYOLAUS)
#ifdef __ILEC400__
 #pragma linkage(QGYOLAUS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYOLAUS_T(
                void *,          /* Receiver variable              */
               int *,            /* Receiver variable length       */
               void *,           /* List information               */
               int *,            /* Number of records to return    */
               char *,           /* Format name                    */
               char *,           /* Selection criteria             */
               char *,           /* Group profile name             */
               void *,           /* Error code                     */
               ...);             /* Optional Parameter:            */
#ifdef __ILEC400__
#else
 }
#endif
#define QEZOLBKL EPT_CALL(QEZOLBKL)
#ifdef __ILEC400__
 #pragma linkage(QEZOLBKL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEZOLBKL_T(
                void *,           /* Receiver variable               */
                int,              /* Length of receiver variable     */
                void *,           /* List information structure      */
                int,              /* Number of entries to return     */
                char *,           /* Format name                     */
                char *,           /* List type                       */
                char *,           /* Type of backup to select        */
                void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QFPADOLD EPT_CALL(QFPADOLD)
#ifdef __ILEC400__
 #pragma linkage(QFPADOLD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPADOLD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* List information               */
                int,             /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Storage space name qualifier   */
                int,             /* Length of storage space name   */
                                 /*   qualifier                    */
                char *,          /* Server name qualifier          */
                int,             /* Length of server name qualifier*/
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFPADOLS EPT_CALL(QFPADOLS)
#ifdef __ILEC400__
 #pragma linkage(QFPADOLS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPADOLS_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* List information               */
                int,             /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Server name qualifier          */
                int,             /* Length of server name qualifier*/
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFPADOLU EPT_CALL(QFPADOLU)
#ifdef __ILEC400__
 #pragma linkage(QFPADOLU_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPADOLU_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                void *,          /* List information               */
                int,             /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Profile type                   */
                char *,          /* AS/400 profile                 */
                char *,          /* Windows domain name qualifier  */
                int,             /* Length of Windows domain name  */
                                 /*   qualifier                    */
                char *,          /* Windows server name qualifier  */
                int,             /* Length of Windows server name  */
                                 /*   qualifier                    */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QGYFNDE EPT_CALL(QGYFNDE)
#ifdef __ILEC400__
 #pragma linkage(QGYFNDE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYFNDE_T(
                   char *,     /* Request handle                    */
                   int   ,     /* Number of keys                    */
                   void *,     /* Key field information             */
                   void *,     /* Key field values                  */
                   int  *,     /* Entry number                      */
                   char *,     /* Key found                         */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYFNDF EPT_CALL(QGYFNDF)
#ifdef __ILEC400__
 #pragma linkage(QGYFNDF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYFNDF_T(
                   char *,     /* Request handle                    */
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Format name                       */
                   void *,     /* Field specification               */
                   int   ,     /* Total number returned             */
                   int   ,     /* Record number                     */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYFNDME EPT_CALL(QGYFNDME)
#ifdef __ILEC400__
 #pragma linkage(QGYFNDME_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYFNDME_T(
                   char *,     /* Request handle                    */
                   int   ,     /* Number of keys                    */
                   void *,     /* Key field information             */
                   void *,     /* Key field values                  */
                   int   ,     /* Entry number                      */
                   char *,     /* Key found                         */
                   char *,     /* Message type information          */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYGTLE EPT_CALL(QGYGTLE)
#ifdef __ILEC400__
 #pragma linkage(QGYGTLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYGTLE_T(
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Request handle                    */
                   void *,     /* List information                  */
                   int   ,     /* Number of records to return       */
                   int   ,     /* Starting record                   */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYOLAFP EPT_CALL(QGYOLAFP)
#ifdef __ILEC400__
 #pragma linkage(QGYOLAFP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYOLAFP_T(
              void *,               /* Receiver Variable             */
              int,                  /* Receiver Variable Length      */
              void *,               /* List information              */
              int,                  /* Number of records to return   */
              char *,               /* Format name                   */
              void *,               /* Qualified AFP Object Name     */
              void *,               /* Format Qualifier              */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QGYOLJBL EPT_CALL(QGYOLJBL)
#ifdef __ILEC400__
 #pragma linkage(QGYOLJBL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYOLJBL_T(
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   void *,     /* Message selection information     */
                   int   ,     /* Size of message selection info    */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYOLJOB EPT_CALL(QGYOLJOB)
#ifdef __ILEC400__
 #pragma linkage(QGYOLJOB_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYOLJOB_T(
               void *,           /* Receiver variable              */
              int  *,            /* Length of receiver variable    */
              char *,            /* Format name                    */
              void *,            /* Receiver variable definition   */
              int  *,            /* Length of receiver variable    */
                                 /* definition                     */
              void *,            /* List Information               */
              int  *,            /* Number of records to return    */
              void *,            /* Sort information               */
              void *,            /* Job selection information      */
              int  *,            /* Size of job selection          */
                                 /* information                    */
              int  *,            /* Number of fields to return     */
              void *,            /* Keys of fields to be returned  */
              void *,            /* Error Code                     */
	      ...);              /* Optional Parameters            */
#ifdef __ILEC400__
#else
 }
#endif
#define QGYOLMSG EPT_CALL(QGYOLMSG)
#ifdef __ILEC400__
 #pragma linkage(QGYOLMSG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYOLMSG_T(
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   char *,     /* Sort Information                  */
                   void *,     /* Message selection information     */
                   int   ,     /* Size of message selection info    */
                   void *,     /* User or queue information         */
                   void *,     /* Message queues used               */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYOLOBJ EPT_CALL(QGYOLOBJ)
#ifdef __ILEC400__
 #pragma linkage(QGYOLOBJ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYOLOBJ_T(
                   void *,          /* Receiver variable             */
                   int   ,          /* Length of receiver variable   */
                   void *,          /* List Information              */
                   int   ,          /* Number of records to return   */
                   void *,          /* Sort Information              */
                   void *,          /* Object and Library name       */
                   char *,          /* Object type                   */
                   void *,          /* Authority control             */
                   void *,          /* Selection control             */
                   int   ,          /* Number of fields to return    */
                   void *,          /* Key of fields to return       */
                   void *,          /* Error code                    */
                   ...);            /* Optional Parameter Group 1:
                                       void * Job identification info
                                       void * Fmt job ID info    @A5C
                                       Optional Parameter Group 2:
                                       void * Auxiliary storage
                                       pool (ASP) control        @B0A*/
#ifdef __ILEC400__
#else
 }
#endif
#define QGYOLSPL EPT_CALL(QGYOLSPL)
#ifdef __ILEC400__
 #pragma linkage(QGYOLSPL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYOLSPL_T(
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   void *,     /* Sort Information                  */
                   void *,     /* Filter information                */
                   void *,     /* Qualified job name                */
                   char *,     /* Format of the generated list      */
                   void *,     /* Error code                        */
                   ...);       /* Optional Parameter Group
                                    Filter format                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QGYRATLO EPT_CALL(QGYRATLO)
#ifdef __ILEC400__
 #pragma linkage(QGYRATLO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYRATLO_T(
                void *,          /* Receiver variable              */
                int   ,          /* Receiver variable length       */
                void *,          /* List information               */
                void *,          /* Section information            */
                int   ,          /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Authorization list name        */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QGYRPRTA EPT_CALL(QGYRPRTA)
#ifdef __ILEC400__
 #pragma linkage(QGYRPRTA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYRPRTA_T(
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Format name                       */
                   char *,     /* Device name                       */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYRPRTL EPT_CALL(QGYRPRTL)
#ifdef __ILEC400__
 #pragma linkage(QGYRPRTL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYRPRTL_T(
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   void *,     /* Filter information                */
                   char *,     /* Format name                       */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYRTVSJ EPT_CALL(QGYRTVSJ)
#ifdef __ILEC400__
 #pragma linkage(QGYRTVSJ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYRTVSJ_T(
                   void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Format name                       */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QP0ZOLIP EPT_CALL(QP0ZOLIP)
#ifdef __ILEC400__
 #pragma linkage(QP0ZOLIP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0ZOLIP_T(
                    void *,     /* Receiver variable              */
                    int   ,     /* Length of receiver variable    */
                    void *,     /* List information               */
                    int   ,     /* Number of records to return    */
                    char *,     /* Format name                    */
                    void *,     /* Filter information             */
                    char *,     /* Filter format name             */
                    void *      /* Error code                     */
                    );
#ifdef __ILEC400__
#else
 }
#endif
#define QP0ZOLSM EPT_CALL(QP0ZOLSM)
#ifdef __ILEC400__
 #pragma linkage(QP0ZOLSM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QP0ZOLSM_T(
                    void *,     /* Receiver variable              */
                    int   ,     /* Length of receiver variable    */
                    void *,     /* List information               */
                    int   ,     /* Number of records to return    */
                    char *,     /* Format name                    */
                    int   ,     /* Semaphore set identifier       */
                    void *      /* Error code                     */
                    );
#ifdef __ILEC400__
#else
 }
#endif
#define QSPOLJBQ EPT_CALL(QSPOLJBQ)
#ifdef __ILEC400__
 #pragma linkage(QSPOLJBQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSPOLJBQ_T(
                  void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
             	   char *,     /* Format of the generated list      */
                   void *,     /* List Information                  */
                   void *,     /* Filter information                */
                   void *,     /* Sort Information                  */
                   int   ,     /* Number of records to return       */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QSYOLUC EPT_CALL(QSYOLUC)
#ifdef __ILEC400__
 #pragma linkage(QSYOLUC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYOLUC_T(
                void *,          /* Receiver variable              */
                int   ,          /* Receiver variable length       */
                void *,          /* List information               */
                int   ,          /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* User name                      */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYOLVLE EPT_CALL(QSYOLVLE)
#ifdef __ILEC400__
 #pragma linkage(QSYOLVLE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYOLVLE_T(
                void *,          /* Receiver variable              */
                int   ,          /* Receiver variable length       */
                void *,          /* List information - ptr to      */
                                 /* Qgy_List_Info_T                */
                int   ,          /* Number of records to return    */
                void *,          /* Format name                    */
                void *,          /* Qualified validation list name */
                                 /* ptr to Qgy_Qual_Name_T         */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QWVOLACT EPT_CALL(QWVOLACT)
#ifdef __ILEC400__
 #pragma linkage(QWVOLACT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWVOLACT_T(
                  void *,      /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   char *,     /* Format name                       */
                   int   ,     /* Activation group number           */
                   char *,     /* Qualified job name                */
                   char *,     /* Internal job identifier           */
                   void *      /* Error code                        */
#if (__OS400_TGTVRM__ >= 530)
                   , ...       /* Variable portion of arg list      */
#endif
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QWVOLAGP EPT_CALL(QWVOLAGP)
#ifdef __ILEC400__
 #pragma linkage(QWVOLAGP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWVOLAGP_T(
                  void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   char *,     /* Format name                       */
                   char *,     /* Qualified job name                */
                   char *,     /* Internal job identifier           */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QYASPOL EPT_CALL(QYASPOL)
#ifdef __ILEC400__
 #pragma linkage(QYASPOL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYASPOL_T(
              void *,           /* Receiver variable              */
              int  *,            /* Length of receiver variable    */
              void *,            /* List information               */
              int  *,            /* Number of records to return    */
              int  *,            /* Number of filters              */
              void *,            /* Filter information             */
              char *,            /* Format name                    */
              void *,            /* Error Code                     */
              ...);              /* Optional: sort information @A2A*/
#ifdef __ILEC400__
#else
 }
#endif
#define QGYCHGSJ EPT_CALL(QGYCHGSJ)
#ifdef __ILEC400__
 #pragma linkage(QGYCHGSJ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYCHGSJ_T(
                   int,        /* Number of aux server jobs allowed */
                   void *      /* Error code                        */
                  );
#ifdef __ILEC400__
#else
 }
#endif
#define QGYCLST EPT_CALL(QGYCLST)
#ifdef __ILEC400__
 #pragma linkage(QGYCLST_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QGYCLST_T(
                char *,          /* Request handle                 */
                void *           /* Error code                     */
               );
#ifdef __ILEC400__
#else
 }
#endif
#define QWTRMVJL EPT_CALL(QWTRMVJL)
#ifdef __ILEC400__
 #pragma linkage(QWTRMVJL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWTRMVJL_T(
               void *,           /* Job selection information      */
              char *,            /* Job selection format name      */
              void *);           /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFPRLNWS EPT_CALL(QFPRLNWS)
#ifdef __ILEC400__
 #pragma linkage(QFPRLNWS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPRLNWS_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* NWS configuration name         */
                char *,          /* Configuration type             */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QFPRRNWS EPT_CALL(QFPRRNWS)
#ifdef __ILEC400__
 #pragma linkage(QFPRRNWS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QFPRRNWS_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* NWS configuration name         */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSRRSTO EPT_CALL(QSRRSTO)
#ifdef __ILEC400__
 #pragma linkage(QSRRSTO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSRRSTO_T(
              void *,                /* Qualified user space name  */
              void *);               /* Error code                 */
#ifdef __ILEC400__
#else
 }
#endif
#define QVOIRCLD EPT_CALL(QVOIRCLD)
#ifdef __ILEC400__
 #pragma linkage(QVOIRCLD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QVOIRCLD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format Name                    */
                char *,          /* Image Catalog Name             */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QVOIRCLG EPT_CALL(QVOIRCLG)
#ifdef __ILEC400__
 #pragma linkage(QVOIRCLG_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QVOIRCLG_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format Name                    */
                char *,          /* Image Catalog Type             */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSCEWCH EPT_CALL(QSCEWCH)
#ifdef __ILEC400__
 #pragma linkage(QSCEWCH_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSCEWCH_T(
               char *,          /* Session ID                     */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSCSWCH EPT_CALL(QSCSWCH)
#ifdef __ILEC400__
 #pragma linkage(QSCSWCH_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSCSWCH_T(
               char *,          /* Session ID                     */
               char *,          /* Started Session ID             */
               void *,          /* Watch program                  */
               void *,          /* Watch for message              */
               void *,          /* Watch for LIC log              */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPDETCVT EPT_CALL(QPDETCVT)
#ifdef __ILEC400__
 #pragma linkage(QPDETCVT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPDETCVT_T(
               char*, /* Receiver Variable                */
               int,    /* Length Of Receiver Variable      */
               char*,  /* FormatOf Receiver Variable       */
               char*,  /* InformationTo Convert            */
               char* , /* Format O f Information ToConvert */
               void*   /* Error code   */
               );
#ifdef __ILEC400__
#else
 }
#endif
#define QPDETPOL EPT_CALL(QPDETPOL)
#ifdef __ILEC400__
 #pragma linkage(QPDETPOL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPDETPOL_T(

                         char*, /*  Policy Data */
                         int,   /* Length Of Policy Data */
                         char*, /* Format Of Policy Data */
                         void*  /*Error code */
                         );
#ifdef __ILEC400__
#else
 }
#endif
#define QPDETSND EPT_CALL(QPDETSND)
#ifdef __ILEC400__
 #pragma linkage(QPDETSND_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPDETSND_T(

                        char*, /* Request Data           */
                        int ,  /* Length Of Request Data */
                        char*, /* FormatOfRequestData    */
                        void*  /* Error code             */
                       );
#ifdef __ILEC400__
#else
 }
#endif
#define QWCJBITP EPT_CALL(QWCJBITP)
#ifdef __ILEC400__
 #pragma linkage(QWCJBITP_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QWCJBITP_T(
               void *,             /* Input variable                 */
               char *,             /* Input variable format          */
               void *);            /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSCRXMLI EPT_CALL(QSCRXMLI)
#ifdef __ILEC400__
 #pragma linkage(QSCRXMLI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSCRXMLI_T(
               void *,          /* Destination Information        */
               char *,          /* Destination Format Name        */
               void *,          /* Receiver Variable              */
               char *,          /* Receiver Format Name           */
               void *,          /* Service Selection Information  */
               char *,          /* Service Selection Format Name  */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QPDETRTV EPT_CALL(QPDETRTV)
#ifdef __ILEC400__
 #pragma linkage(QPDETRTV_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QPDETRTV_T(

                         char*, /* Receiver variable */
                         int,   /* Length of receiver variable */
                         char*, /* Format of name */
                         void*  /* Error code */
                         );
#ifdef __ILEC400__
#else
 }
#endif
#define QYKMGDKI EPT_CALL(QYKMGDKI)
#ifdef __ILEC400__
 #pragma linkage(QYKMGDKI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QYKMGDKI_T(

                  char *,          /* Certificate store path and
                                      file name                      */
                  int *,           /* Length of certificate store
                                      path and file name             */
                  char *,          /* Format of certificate store
                                      path and file name             */
                  char *,          /* default certificate label      */
                  int *,           /* Length of default certificate
                                      label                          */
                  void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYCVTVL EPT_CALL(QSYCVTVL)
#ifdef __ILEC400__
 #pragma linkage(QSYCVTVL_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYCVTVL_T(
                void *,         /* Qualified validation list name */
                 void *);        /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QEDCHGIN EPT_CALL(QEDCHGIN)
#ifdef __ILEC400__
 #pragma linkage(QEDCHGIN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEDCHGIN_T(
                void *,       /* Contact information */
                int,            /* Length of contact information */
                void *,         /* Format name */
                void *);        /* Error Code */
#ifdef __ILEC400__
#else
 }
#endif
#define QEDRTVCI EPT_CALL(QEDRTVCI)
#ifdef __ILEC400__
 #pragma linkage(QEDRTVCI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEDRTVCI_T(
                void *,       /* Receiver variable */
                int,            /* Length of receiver variable */
                void *,         /* Format name */
                void *);        /* Error Code */
#ifdef __ILEC400__
#else
 }
#endif
#define QITDRSTS EPT_CALL(QITDRSTS)
#ifdef __ILEC400__
 #pragma linkage(QITDRSTS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QITDRSTS_T(
                void *,        /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* NWS configuration name         */
                int,             /* Timeout variable               */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTOCC4IF EPT_CALL(QTOCC4IF)
#ifdef __ILEC400__
 #pragma linkage(QTOCC4IF_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTOCC4IF_T(
               void *,           /* Interface information          */
               char *,           /* Format name                    */
               void *);          /* Error Code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QTOCCVTI EPT_CALL(QTOCCVTI)
#ifdef __ILEC400__
 #pragma linkage(QTOCCVTI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QTOCCVTI_T(
               char *,              /* receiver variable            */
               unsigned long *,     /* receiver variable length     */
               char *,              /* format name                  */
               char *,              /* interface request            */
               unsigned long *,     /* interface request CCSID      */
               char *);             /* error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QSYRTVAI EPT_CALL(QSYRTVAI)
#ifdef __ILEC400__
 #pragma linkage(QSYRTVAI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QSYRTVAI_T(
                void *,          /* Receiver variable              */
                int *,           /* Receiver variable length       */
                char *,          /* Format name                    */
                char *,          /* Authorization list name        */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QESCPTFO EPT_CALL(QESCPTFO)
#ifdef __ILEC400__
 #pragma linkage(QESCPTFO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QESCPTFO_T(
               void *,          /* PTF Order Information          */
               int  *,          /* Length of PTF order information*/
               char *,          /* Format of PTF order information*/
               void *,          /* Contact Information            */
               int  *,          /* Length of contact information  */
               char *,          /* Format of contact information  */
               void *,          /* Receiver Variable              */
               int  *,          /* Length of Receiver Variable    */
               char *,          /* Format of Receiver Variable    */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
