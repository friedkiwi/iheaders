/***   START OF HEADER FILE SPECIFICATIONS   ************************/
/*                                                                  */
/* Header File Name: H/QCSTCTL1                                     */
/*                                                                  */
/* Descriptive Name: Cluster Control APIs.                          */
/*                                                                  */
/* 5769-SS1, 5722-SS1                                               */
/* (C) Copyright IBM Corp. 1999,2001                                */
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
/* Header Files Included: qcst.h                                    */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qcst_List_Cluster_Input_t                        */
/*                 Qcst_List_Cluster_Header_t                       */
/*                 Qcst_List_Node_Entry_t                           */
/*                 Qcst_LCTI0100_t                                  */
/*                 Qcst_RCLI0100_t                                  */
/*                 Qcst_RCRS0100_t                                  */
/*                 Qcst_List_Device_Domain_Input_t                  */
/*                 Qcst_List_Device_Domain_Header_t                 */
/*                 Qcst_List_Device_Domain_Entry_t                  */
/*                 Qcst_LDDI0100_t                                  */
/*                 Qcst_LDDI0200_t                                  */
/*                                                                  */
/* Function Prototype List: QcstListClusterInfo                     */
/*                          QcstRetrieveClusterInfo                 */
/*                          QcstListDeviceDomainInfo                */
/*                          QcstRetrieveCRSInfo                     */
/*                                                                  */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- ----- ------ --------- --------------------------- */
/* $A0= D9570800 4D40  980722 ROCH:     New Include                 */
/* $A1= D97869.2 5D10  990914 ROCH:     Added Retrieve Cluster Info */
/* $A2= D97869.3 5D10  990917 ROCH:	Updated List Node Entry	    */
/*                                      format and added List Device*/
/*                                      Domain Info API             */
/* $A3= D9786904 5D10  991031 ROCH:     Cluster versioning.         */
/* $A4=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2           */
/* $A5= D9786909 5D10  000306 ROCH:     RetrieveCRSInfo API         */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*   Additional notes about the Change Activity                     */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/***   END OF HEADER FILE SPECIFICATIONS   **************************/

#ifndef _QCSTCTL1_h
#define _QCSTCTL1_h

#if (__OS400_TGTVRM__>=510)                                   /*@A4A*/
    #pragma datamodel(P128)                                   /*@A4A*/
#endif                                                        /*@A4A*/

#include <qcst.h>
#include <qcstctl.h>
#include <qcstctl2.h>

/********************************************************************/
/* Prototype for List Cluster Information API.                      */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstListClusterInfo,OS,nowiden)
#else
    extern "C"
#endif
void QcstListClusterInfo   (char *,  /* Qualified user space name   */
                            char *,  /* Cluster name                */
                            char *,  /* Format name                 */
                            char *,  /* Node id                     */
                            void *); /* Error code                  */

/*------------------------------------------------------------------*/
/* Input Parameter Section.                                         */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Cluster_Input {
    char UserSpaceName[10];
    char UserSpaceLibName[10];
    char ClusterName[10];
    char FormatName[8];
    char NodeId[8];
} Qcst_List_Cluster_Input_t;

/*------------------------------------------------------------------*/
/* Header Section.                                                  */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Cluster_Header {
    char InfoStatus;
    char Reserved[3];
    int  CurrentClusterVersion;
    int  CurrentClusterModLevel;
} Qcst_List_Cluster_Header_t;

/*------------------------------------------------------------------*/
/* Structure for List Node Entry format.                            */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Node_Entry {
    int  LengthOfNodeEntry;
    char NodeId[8];
    int  NodeStatus;
    int  OffsetToFirstInterface;
    int  NumberOfInterfaces;
    int  PotentialNodeVersion;
    int  PotentialNodeModLevel;
    char DeviceDomainName[10];
  /*char InterfaceAddress[][16];*/     /* varying length            */
} Qcst_List_Node_Entry_t;

/*------------------------------------------------------------------*/
/* Structure for LCTI0100 format.                                   */
/*------------------------------------------------------------------*/
/* typedef _Packed struct Qcst_LCTI0100 {
     Qcst_List_Node_Entry_t [];           varying length
} Qcst_LCTI0100_t;                                                  */


/********************************************************************/
/* Prototype for Retrieve Cluster Information API.             @A1  */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstRetrieveClusterInfo,OS,nowiden)
#else
    extern "C"
#endif
void QcstRetrieveClusterInfo
                           (void *,  /* Receiver variable           */
                            int  *,  /* Length of Receiver variable */
                            char *,  /* Format name                 */
                            void *); /* Error code                  */

/*------------------------------------------------------------------*/
/* Structure for RCLI0100 format.                              @A1  */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_RCLI0100 {
    int BytesReturned;               /* Bytes of info returned to user*/
    int BytesAvailable;              /* Bytes available to be passed*/
    char ClusterName[10];            /* Cluster name                */
    char RequestingNodeId[8];        /* Id of the requesting node   */
    char Reserved[2];                /* Reserved                    */
    int CurrentVersion;              /* Current node version        */
    int CurrentVersionModLevel;      /* Current node version mod. level */
    int PotentialVersion;            /* Potential node version      */
    int PotentialVersionModLevel;    /* Pot. node version mod. level*/
} Qcst_RCLI0100_t;

/********************************************************************/
/* Prototype for Retrieve Cluster Information API.             @A1  */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstRetrieveCRSInfo,OS,nowiden)
#else
    extern "C"
#endif
void QcstRetrieveCRSInfo
                           (void *,  /* Receiver variable           */
                            int  *,  /* Length of Receiver variable */
			    char *,  /* Cluster name                */
                            char *,  /* Format name                 */
                            void *); /* Error code                  */

/*------------------------------------------------------------------*/
/* Structure for RCRS0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_RCRS0100 {
    int BytesReturned;               /* Bytes of info returned to user*/
    int BytesAvailable;              /* Bytes available to be passed*/
    char Reserved[4];                /* Reserved                    */
    Qcst_CRSC0100_t CrsClass;        /* Class Configuration Parms   */
    Qcst_CRSC0200_t CrsDetailed;     /* Detailed Configuration Parms */
} Qcst_RCRS0100_t;


/********************************************************************/
/* Prototype for List Device Domain Information API                 */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstListDeviceDomainInfo,OS,nowiden)
#else
    extern "C"
#endif
void QcstListDeviceDomainInfo
                           (char *,  /* Qualified user space name   */
                            char *,  /* Cluster name                */
			    char *,  /* Device domain name          */
                            char *,  /* Format name                 */
                            void *); /* Error code                  */

/*------------------------------------------------------------------*/
/* Input parameter section                                          */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Device_Domain_Input {
    char UserSpaceName[10];
    char UserSpaceLibName[10];
    char ClusterName[10];
    char DeviceDomainName[10];
    char FormatName[8];
}  Qcst_List_Device_Domain_Input_t;

/*------------------------------------------------------------------*/
/* Header section                                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Device_Domain_Header {
    char InfoStatus;
}  Qcst_List_Device_Domain_Header_t;

/*------------------------------------------------------------------*/
/* Structure for List Device Domain Entry format                    */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Device_Domain_Entry {
    char NodeId[8];
    int  NodeStatus;
}  Qcst_List_Device_Domain_Entry_t;

/*------------------------------------------------------------------*/
/* Structure for LDDI0100 format                                    */
/*------------------------------------------------------------------*/
/* typedef _Packed struct Qcst_LDDI0100 {
    Qcst_List_Device_Domain_Entry_t [];
}  Qcst_LDDI0100_t;                                                 */

/*------------------------------------------------------------------*/
/* Structure for LDDI0200 format                                    */
/*------------------------------------------------------------------*/
/* typedef _Packed struct Qcst_LDDI0200 {
    char DeviceDomainName[] [10];
}  Qcst_LDDI0200_t;                                                 */

#if (__OS400_TGTVRM__>=510)                                   /*@A4A*/
    #pragma datamodel(pop)                                    /*@A4A*/
#endif                                                        /*@A4A*/

#endif /* _QCSTCTL1_h*/
