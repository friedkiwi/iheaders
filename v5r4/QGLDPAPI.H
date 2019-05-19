#ifndef _qgldpapi_h_
#define _qgldpapi_h_

#ifdef __cplusplus
#pragma info(none)
#else
#pragma nomargins nosequence
#pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: qgldpapi.h                                   */
/*                                                                */
/* Descriptive Name: Directory Publishing APIs                    */
/*                                                                */
/* 5769-SS1,5722-SS1  (C) Copyright IBM Corp. 1998,2002           */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: This file provides structure definitions and      */
/*              function prototypes for the Directory Publishing  */
/*              APIs.  These APIs are contained in service        */
/*              program QSYS/QGLDPAPI.                            */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:                                                */
/*    QgldPubDirObj_POBJ0100                                      */
/*    QgldPubDirObj_POBJ0200                                      */
/*    QgldPubDirObj_POBJ0300                                      */
/*    QgldPubDirObj_POBJ0400                                      */
/*                                                                */
/* Function Prototype List:                                       */
/*    QgldPubDirSvrObj - Publish Directory Object                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/*    FLAG REASON   VERS DATE   PGMR  COMMENTS                    */
/*    ---- -------- ---- ------ ----  --------------------------- */
/*    $A0= D97183   4D40 980419 PAW : New header file.            */
/*    $A1= D98212.2 5D10 000103 GAC : Teraspace stage 2           */
/*    $A2= D97314   5D10 000404 PAW : Publish print shares.       */
/*    $A3= D98684   5D20 010828 PAW : TCP/IP Quality of Service.  */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#if (__OS400_TGTVRM__>=510)                                /* @A1A*/
    #pragma datamodel(P128)                                /* @A1A*/
#endif                                                     /* @A1A*/

/*******************************************
 * Includes
 *******************************************/


/*******************************************
 * Type definitions and structures
 *******************************************/

static const char GLD_PUB_AGENT_AS400_USERS[] = "*AS400_USERS";

/* UCS-2 encoding of *AS400_USERS */
static const unsigned short GLD_UCS2_PUB_AGENT_AS400_USERS[] =
{0x2A, 0x41, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x55, 0x53, 0x45, 0x52, 0x53};

/* UTF-16 encoding of *AS400_USERS */
static const unsigned short GLD_UTF16_PUB_AGENT_AS400_USERS[] =
{0x2A, 0x41, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x55, 0x53, 0x45, 0x52, 0x53};

static const char GLD_PUB_AGENT_AS400_COMPUTERS[] = "*AS400_COMPUTERS";

/* UCS-2 encoding of *AS400_COMPUTERS */
static const unsigned short GLD_UCS2_PUB_AGENT_AS400_COMPUTERS[] =
{0x2A, 0x41, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x43, 0x4F, 0x4D, 0x50, 0x55, 0x54,
0x45, 0x52, 0x53};

/* UTF-16 encoding of *AS400_COMPUTERS */
static const unsigned short GLD_UTF16_PUB_AGENT_AS400_COMPUTERS[] =
{0x2A, 0x41, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x43, 0x4F, 0x4D, 0x50, 0x55, 0x54,
0x45, 0x52, 0x53};

static const char GLD_PUB_AGENT_AS400_PRINTSHARES[] = "*AS400_PRINTSHARES";

/* UCS-2 encoding of *AS400_COMPUTERS */
static const unsigned short GLD_UCS2_PUB_AGENT_AS400_PRINTSHARES[] =
{0x2A, 0x41, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x50, 0x52, 0x49, 0x4E, 0x54, 0x53,
0x48, 0x41, 0x52, 0x45, 0x53};

/* UTF-16 encoding of *AS400_COMPUTERS */
static const unsigned short GLD_UTF16_PUB_AGENT_AS400_PRINTSHARES[] =
{0x2A, 0x41, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x50, 0x52, 0x49, 0x4E, 0x54, 0x53,
0x48, 0x41, 0x52, 0x45, 0x53};

static const char GLD_PUB_AGENT_OS400_TC1_QOS[] = "*OS400_TC1_QOS";

/* UCS-2 encoding of *OS400_TC1_QOS */
static const unsigned short GLD_UCS2_PUB_AGENT_OS400_TC1_QOS[] =
{0x2A, 0x4F, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x54, 0x43, 0x31, 0x5F, 0x51, 0x4F,
0x53};

/* UTF-16 encoding of *OS400_TC1_QOS */
static const unsigned short GLD_UTF16_PUB_AGENT_OS400_TC1_QOS[] =
{0x2A, 0x4F, 0x53, 0x34, 0x30, 0x30, 0x5F, 0x54, 0x43, 0x31, 0x5F, 0x51, 0x4F,
0x53};

#define GLD_POBJ0100 "POBJ0100"
#define GLD_POBJ0200 "POBJ0200"
#define GLD_POBJ0300 "POBJ0300"
#define GLD_POBJ0400 "POBJ0400"

#define GLD_CHANGE_TYPE_ADD                         1
#define GLD_CHANGE_TYPE_DELETE                      2
#define GLD_CHANGE_TYPE_REPLACE                     3
#define GLD_CHANGE_TYPE_ADD_IF_DOES_NOT_EXIST       4
#define GLD_CHANGE_TYPE_ADD_VALUE_IF_DOES_NOT_EXIST 5
#define GLD_CHANGE_TYPE_DELETE_IF_EXISTS            6
#define GLD_CHANGE_TYPE_DELETE_VALUE_IF_EXISTS      7

#define GLD_DELETE_DIRECTORY_SUBTREE_NO          0
#define GLD_DELETE_DIRECTORY_SUBTREE_YES         1
#define GLD_DELETE_DIRECTORY_SUBTREE_YES_ROOT_NO 2

#define GLD_DELETE_OLD_RDN_NO  0
#define GLD_DELETE_OLD_RDN_YES 1

#define GLD_ADD_IF_DOES_NOT_EXIST_NO  0
#define GLD_ADD_IF_DOES_NOT_EXIST_YES 1

#define GLD_ATTRIBUTE_VALUE_DATA_TYPE_UCS2    1
#define GLD_ATTRIBUTE_VALUE_DATA_TYPE_UTF16   GLD_ATTRIBUTE_VALUE_DATA_TYPE_UCS2
#define GLD_ATTRIBUTE_VALUE_DATA_TYPE_BINARY  2
#define GLD_ATTRIBUTE_VALUE_DATA_TYPE_INTEGER 3
#define GLD_ATTRIBUTE_VALUE_DATA_TYPE_BOOLEAN 4

#define GLD_MAX_LENGTH_OF_PUB_AGENT_NAME 50

#define GLD_MAX_LENGTH_OF_INPUT_DATA 16776704

typedef _Packed struct QgldPubDirObj_AttributeValue
{
    int Disp_To_Next_Value;
    int Disp_To_Attribute_Value;
    int Length_Of_Attribute_Value;
    char Reserved[4];
} QgldPubDirObj_AttributeValue;

typedef _Packed struct QgldPubDirObj_AttributeEntry
{
    int Disp_To_Next_Entry;
    int Disp_To_Attribute_Name;
    int Length_Of_Attribute_Name;
    int Disp_To_Attribute_Values;
    int Number_Of_Attribute_Values;
    int Attribute_Value_Data_Type;
    char Reserved[8];
    /*QgldPubDirObj_AttributeValue Attribute_Values[]; */
} QgldPubDirObj_AttributeEntry;

typedef _Packed struct QgldPubDirObj_POBJ0100
{
    int Offset_To_Pub_Agent_Name;
    int Length_Of_Pub_Agent_Name;
    int Offset_To_Rdn;
    int Length_Of_Rdn;
    int Offset_To_Attribute_Entries;
    int Number_Of_Attribute_Entries;
    char Reserved[40];
    /*QgldPubDirObj_AttributeEntry Attribute_Entries[]; */
} QgldPubDirObj_POBJ0100;

typedef _Packed struct QgldPubDirObj_POBJ0200
{
    int Offset_To_Pub_Agent_Name;
    int Length_Of_Pub_Agent_Name;
    int Offset_To_Rdn;
    int Length_Of_Rdn;
    int Delete_Directory_Subtree;
    char Reserved[44];
} QgldPubDirObj_POBJ0200;

typedef _Packed struct QgldPubDirObj_ModEntry
{
    int Disp_To_Next_Entry;
    int Change_Type;
    int Disp_To_Attribute_Entries;
    int Number_Of_Attribute_Entries;
    /*QgldPubDirObj_AttributeEntry Attribute_Entries[]; */
} QgldPubDirObj_ModEntry;

typedef _Packed struct QgldPubDirObj_POBJ0300
{
    int Offset_To_Pub_Agent_Name;
    int Length_Of_Pub_Agent_Name;
    int Offset_To_Rdn;
    int Length_Of_Rdn;
    int Offset_To_Modification_Entries;
    int Number_Of_Modification_Entries;
    int Add_If_Does_Not_Exist;
    char Reserved[36];
    /*QgldPubDirObj_ModEntry Modification_Entries[]; */
} QgldPubDirObj_POBJ0300;

typedef _Packed struct QgldPubDirObj_POBJ0400
{
    int Offset_To_Pub_Agent_Name;
    int Length_Of_Pub_Agent_Name;
    int Offset_To_Rdn;
    int Length_Of_Rdn;
    int Offset_To_New_Rdn;
    int Length_Of_New_Rdn;
    int Delete_Old_Rdn;
    char Reserved[36];
} QgldPubDirObj_POBJ0400;


/******************************************
 * Prototypes
 *******************************************/

#ifdef __ILEC400__
#pragma argument (QgldPubDirObj,OS,nowiden)
void QgldPubDirObj
( const void *,	/* input data */
  int,		/* length of input data */
  const char *,	/* format name */
  void *	/* error code structure */
  );
#else
extern "C"
void QgldPubDirObj
( const void *,	/* input data */
  int *,	/* length of input data */
  const char *,	/* format name */
  void *	/* error code structure */
  );
#endif

#ifdef __cplusplus
#pragma info(restore)
#else
#pragma checkout(resume)
#endif

#if (__OS400_TGTVRM__>=510)                                /* @A1A*/
    #pragma datamodel(pop)                                 /* @A1A*/
#endif                                                     /* @A1A*/

#endif /* _qgldpapi_h_ */
