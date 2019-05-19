
/***   START OF HEADER FILE SPECIFICATIONS   ************************/
/*                                                                  */
/* Header File Name: H/QCSTCTL                                      */
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
/* Description: Include header file for QCSTCTL service program.    */
/*                                                                  */
/* Header Files Included: qcst.H                                    */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qcst_NODE0100_t                                  */
/*                 Qcst_NODE0200_t                                  */
/*                 Qcst_Create_Node_Entry_t                         */
/*                 Qcst_ADDN0100_t                                  */
/*                 Qcst_RMVN0100_t                                  */
/*                 Qcst_STRN0100_t                                  */
/*                 Qcst_ENDN0100_t                                  */
/*                 Qcst_IFCA0100_t                                  */
/*                 Qcst_IFCR0100_t                                  */
/*                 Qcst_IFCC0100_t                                  */
/*                                                                  */
/* Function Prototype List: QcstCreateCluster                       */
/*                          QcstDeleteCluster                       */
/*                          QcstAddClusterNodeEntry                 */
/*                          QcstRemoveClusterNodeEntry              */
/*                          QcstStartClusterNode                    */
/*                          QcstEndClusterNode                      */
/*                          QcstChangeClusterNodeEntry              */
/*                                                                  */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- ----- ------ --------- --------------------------- */
/* $A0= D9570800 4D40  980617 ROCH:     New Include                 */
/* $A1= D9786904 5D10  991105 ROCH:     Add Qcst_NODE0200_t         */
/* $A2=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2           */
/* $A3= D9786908 5D10  000331 ROCH:     Add new format for Change   */
/*                                      Cluster Node Entry API      */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*   Additional notes about the Change Activity                     */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/***   END OF HEADER FILE SPECIFICATIONS   **************************/

#ifndef _QCSTCTL_h
#define _QCSTCTL_h

#if (__OS400_TGTVRM__>=510)                                   /*@A2A*/
    #pragma datamodel(P128)                                   /*@A2A*/
#endif                                                        /*@A2A*/

#include <qcst.h>

/********************************************************************/
/* Prototype for Create Cluster API.                                */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstCreateCluster,OS,nowiden)
#else
    extern "C"
#endif
void QcstCreateCluster (char *,  /* Request handle                */
                          char *,  /* Cluster name                  */
                          void *,  /* Cluster membership array      */
                          int  *,  /* Number of node entries        */
                          int  *,  /* Start indicator               */
                          char *,  /* Format name                   */
                          void *,  /* Result information            */
                          void *); /* Error code                    */

/*------------------------------------------------------------------*/
/* Structure for NODE0100 format.                                   */
/*------------------------------------------------------------------*/
/*
  typedef _Packed struct Qcst_NODE0100 {
    Qcst_Create_Node_Entry_t [];          varying length
} Qcst_NODE0100_t;                                                  */

/*------------------------------------------------------------------*/
/* Structure for NODE0200 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_NODE0200 {
    int  TargetClusterVersion;
    int  OffsetToFirstNodeEntry;
    int  OffsetToAdditionalFields;
    int  LengthOfAdditionalFields;
  /*Qcst_Create_Node_Entry_t [];*/     /* varying length            */
} Qcst_NODE0200_t;

/*------------------------------------------------------------------*/
/* Structure for ADDN0100 format.                                   */
/*                                                                  */
/* NOTE:  The following type definition only defines the fixed      */
/*        portion of the format. Any varying length field will      */
/*        have to be defined by the user.                           */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_ADDN0100 {
    char NodeId[8];
    int  OffsetToFirstInterface;
    int  NumberOfInterfaces;
  /*char InterfaceAddress[][16];*/     /* varying length            */
} Qcst_ADDN0100_t;

/*------------------------------------------------------------------*/
/* Structure for Create Node Entry format.                          */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_Create_Node_Entry {
    int  LengthOfNodeEntry;
    Qcst_ADDN0100_t Node;
} Qcst_Create_Node_Entry_t;


/********************************************************************/
/* Prototype for Delete Cluster API.                                */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstDeleteCluster,OS,nowiden)
#else
    extern "C"
#endif
void QcstDeleteCluster (char *,  /* Request handle                */
                          char *,  /* Cluster name                  */
                          void *,  /* Result information            */
                          void *); /* Error code                    */


/********************************************************************/
/* Prototype for Add Cluser Node Entry API.                         */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstAddClusterNodeEntry,OS,nowiden)
#else
    extern "C"
#endif
void QcstAddClusterNodeEntry(char *,  /* Request handle          */
                                char *,  /* Cluster name            */
                                void *,  /* Node entry              */
                                int  *,  /* Start indicator         */
                                char *,  /* Format name             */
                                void *,  /* Result information      */
                                void *); /* Error code              */


/********************************************************************/
/* Prototype for Remove Cluster Node Entry API.                     */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstRemoveClusterNodeEntry,OS,nowiden)
#else
    extern "C"
#endif
void QcstRemoveClusterNodeEntry
                             (char *,  /* Request handle            */
                              char *,  /* Cluster name              */
                              char *,  /* Node entry                */
                              char *,  /* Format name               */
                              void *,  /* Result information        */
                              void *); /* Error code                */

/*------------------------------------------------------------------*/
/* Structure for RMVN0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_RMVN0100 {
    char NodeId[8];
} Qcst_RMVN0100_t;


/********************************************************************/
/* Prototype for Start Cluster Node API.                            */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstStartClusterNode,OS,nowiden)
#else
    extern "C"
#endif
void QcstStartClusterNode (char *,  /* Request handle             */
                             char *,  /* Cluster name               */
                             char *,  /* Node entry array           */
                             char *,  /* Format name                */
                             void *,  /* Result information         */
                             void *); /* Error code                 */

/*------------------------------------------------------------------*/
/* Structure for STRN0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_STRN0100 {
    char NodeId[8];
} Qcst_STRN0100_t;


/********************************************************************/
/* Prototype for End Cluster Node API.                              */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstEndClusterNode,OS,nowiden)
#else
    extern "C"
#endif
void QcstEndClusterNode (char *,  /* Request handle               */
                           char *,  /* Cluster name                 */
                           void *,  /* Node entry                   */
                           int  *,  /* Option                       */
                           char *,  /* Format name                  */
                           void *,  /* Result information           */
                           void *); /* Error code                   */

/*------------------------------------------------------------------*/
/* Structure for ENDN0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_ENDN0100 {
    char NodeId[8];
} Qcst_ENDN0100_t;


/********************************************************************/
/* Prototype for Change Cluster Node Entry API.                     */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstChangeClusterNodeEntry,OS,nowiden)
#else
    extern "C"
#endif
void QcstChangeClusterNodeEntry
                          (char *,  /* Request handle               */
                           char *,  /* Cluster name                 */
                           char *,  /* Node id                      */
                           char *,  /* Format name                  */
                           char *,  /* Node entry information       */
                           int  *,  /* Length of node entry info    */
                           void *,  /* Result information           */
                           void *); /* Error code                   */

/*------------------------------------------------------------------*/
/* Structure for IFCA0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_IFCA0100 {
    char InterfaceAddress[16];
} Qcst_IFCA0100_t;

/*------------------------------------------------------------------*/
/* Structure for IFCR0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_IFCR0100 {
    char InterfaceAddress[16];
} Qcst_IFCR0100_t;

/*------------------------------------------------------------------*/
/* Structure for IFCC0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_IFCC0100 {
    char OldInterfaceAddress[16];
    char NewInterfaceAddress[16];
} Qcst_IFCC0100_t;

/*------------------------------------------------------------------*/
/* Structure for STSC0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_STSC0100 {
    int newNodeStatus;
} Qcst_STSC0100_t;



#if (__OS400_TGTVRM__>=510)                                   /*@A2A*/
    #pragma datamodel(pop)                                    /*@A2A*/
#endif                                                        /*@A2A*/

#endif /* _QCSTCTL_h*/

