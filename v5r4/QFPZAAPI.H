#ifndef _qfpzaapi_h_
#define _qfpzaapi_h_
/********************************************************************/
/*                                                                  */
/* Header File Name: qfpzaapi.H                                     */
/*                                                                  */
/* Header File Description:                                         */
/*   This header file defines prototypes for the NetWare server     */
/*   authentication APIs.  These functions deal with authentication */
/*   entries in the user profile, and authenticated connections to  */
/*   NetWare servers.                                               */
/*                                                                  */
/*   Prototypes:                                                    */
/*     - QfpzAddNtwAutE:  Add Authentication Entry                  */
/*     - QfpzChgNtwAutE:  Change Authentication Entry               */
/*     - QfpzRmvNtwAutE:  Remove Authentication Entry               */
/*     - QfpzListNtwAutE: List Authentication Entries               */
/*     - QfpzVfyAutE:     Verify authentication entry on a server   */
/*                                                                  */
/*     - QfpzStrNtwCnn:   Start authenticated connection to server  */
/*     - QfpzEndNtwCnn:   End authenticated connection to server    */
/*                                                                  */
/* 5716-SS1,5722-SS1 (C) COPYRIGHT IBM CORP. 1996,1996,2001         */
/* ALL RIGHTS RESERVED.                                             */
/* US GOVERNMENT USERS RESTRICTED RIGHTS -                          */
/* USE, DUPLICATION OR DISCLOSURE RESTRICTED                        */
/* BY GSA ADP SCHEDULE CONTRACT WITH IBM CORP.                      */
/*                                                                  */
/* LICENSED MATERIALS-PROPERTY OF IBM                               */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG  REASON  VERS  DATE  PGMR      COMMENTS                     */
/* ---- -------- ---- ------ -------   ---------------------------- */
/*  $A0=D94085.1 3D70 960108 JAM     : New file                     */
/*  $A1=D98212.2 v5r1m0 010300 gchaney: Teraspace stage 2           */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*  Additional notes about the Change Activity                      */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/********************************************************************/

#include <qusec.h>
#include <qusgen.h>

#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(P128)                                  /* @A1A*/
#endif                                                       /* @A1A*/

/******************************************
   Type definitions and structures
 *****************************************/

typedef char Qfpz_usrprf_t[10];         /* AS/400 user profile name */

typedef char Qfpz_formatName_t[8];      /* API format names         */

typedef char Qfpz_serverType_t[10];     /* *NETWARE3, *NDS          */

typedef _Packed struct {
    int         offset; /* in bytes from start of format */
    int         length; /* in bytes */
} Qfpz_Vstring_t;

/*********** Constants used in the formats **************/

/* *CURRENT value for the user profile name */
const Qfpz_usrprf_t QFPZ_USRPRF_CURRENT = {
    '*','C','U','R','R','E','N','T',' ',' ' };

/* *USRPRF value for the NetWare user name */
const char QFPZ_NTWUSR_USRPRF[] = {
    '*','U','S','R','P','R','F' };
const int QFPZ_LEN_NTWUSR_USRPRF = 7;

/* *NONE value for password */
const char QFPZ_PWD_NONE[] = {
    '*','N','O','N','E' };
const int QFPZ_LEN_PWD_NONE = 5;

/* *STRNTWCNN value for password */
const char QFPZ_PWD_STRNTWCNN[] = {
    '*','S','T','R','N','T','W','C','N','N' };
const int QFPZ_LEN_PWD_STRNTWCNN = 10;

/* *ALL value for server name */
const char QFPZ_SERVER_ALL[] = {
    '*','A','L','L' };
const int QFPZ_LEN_SERVER_ALL = 4;

/* *ANY value for server name */
const char QFPZ_SERVER_ANY[] = {
    '*','A','N','Y' };
const int QFPZ_LEN_SERVER_ANY = 4;

/* *SAME value for various variable length fields */
const char QFPZ_SAME[] = {
    '*','S','A','M','E' };
const int QFPZ_LEN_SAME = 5;

/* *AUTE value for various variable length fields */
const char QFPZ_AUTE[] = {
    '*','A','U','T','E' };
const int QFPZ_LEN_AUTE = 5;

/* *NWSUSRA value for various variable length fields */
const char QFPZ_NWSUSRA[] = {
    '*','N','W','S','U','S','R','A' };
const int QFPZ_LEN_NWSUSRA = 8;

/* *NETWARE3 value for server type field */
const Qfpz_serverType_t QFPZ_SVRTYPE_NETWARE3 = {
    '*','N','E','T','W','A','R','E','3',' ' };
/* *NDS value for server type field */
const Qfpz_serverType_t QFPZ_SVRTYPE_NDS = {
    '*','N','D','S',' ',' ',' ',' ',' ',' ' };

/********************************************************************
 Common Structures for QfpzAddNtwAutE, QfpzChgNtwAutE, QfpzRmvAutE,
 and QfpzListNtwAutE.
********************************************************************/

const Qfpz_formatName_t QFPZ_AUTE0100 = {
    'A','U','T','E','0','1','0','0' };
const Qfpz_formatName_t QFPZ_AUTE0200 = {
    'A','U','T','E','0','2','0','0' };
const Qfpz_formatName_t QFPZ_AUTE0900 = {
    'A','U','T','E','0','9','0','0' };

const Qfpz_formatName_t QFPZ_AUTD0100 = {
    'A','U','T','D','0','1','0','0' };
const Qfpz_formatName_t QFPZ_AUTD0200 = {
    'A','U','T','D','0','2','0','0' };

typedef _Packed struct {
    Qfpz_Vstring_t      serverName;
    Qfpz_usrprf_t       usrprf;
    char                reserved[6];
} Qfpz_AUTE0100_id_t;

typedef _Packed struct {
    Qfpz_Vstring_t      NetWareUsername;
    Qfpz_Vstring_t      password;
    char                reserved[4];
} Qfpz_AUTD0100_data_t;

typedef _Packed struct {
    Qfpz_Vstring_t      ndsTreeName;
    Qfpz_usrprf_t       usrprf;
    char                reserved[6];
} Qfpz_AUTE0200_id_t;

typedef _Packed struct {
    Qfpz_Vstring_t      ndsContext;
    Qfpz_Vstring_t      NetWareUsername;
    Qfpz_Vstring_t      password;
    char                reserved[4];
} Qfpz_AUTD0200_data_t;

typedef _Packed struct {
    Qfpz_usrprf_t       usrprf;
    char                reserved[6];
} Qfpz_AUTE0900_id_t;

/********** Structures for QfpzAddNtwAutE **************/

typedef Qfpz_AUTE0100_id_t Qfpz_ADDAUTE0100_t;
typedef Qfpz_AUTE0200_id_t Qfpz_ADDAUTE0200_t;
typedef Qfpz_AUTD0100_data_t Qfpz_ADDAUTD0100_t;
typedef Qfpz_AUTD0200_data_t Qfpz_ADDAUTD0200_t;

/********** Structures for QfpzChgNtwAutE **************/

typedef Qfpz_AUTE0100_id_t Qfpz_CHGAUTE0100_t;
typedef Qfpz_AUTE0200_id_t Qfpz_CHGAUTE0200_t;
typedef Qfpz_AUTD0100_data_t Qfpz_CHGAUTD0100_t;
typedef Qfpz_AUTD0200_data_t Qfpz_CHGAUTD0200_t;

/********** Structures for QfpzRmvNtwAutE **************/

typedef Qfpz_AUTE0100_id_t Qfpz_RMVAUTE0100_t;
typedef Qfpz_AUTE0200_id_t Qfpz_RMVAUTE0200_t;
typedef Qfpz_AUTE0900_id_t Qfpz_RMVAUTE0900_t;

/********** Structures for QfpzVfyNtwAutE **************/

const Qfpz_formatName_t QFPZ_VFY_AUTE0100 = {
    'A','U','T','E','0','1','0','0' };
const Qfpz_formatName_t QFPZ_VFY_AUTE0200 = {
    'A','U','T','E','0','2','0','0' };

typedef _Packed struct {
    Qfpz_Vstring_t      serverName;
    Qfpz_usrprf_t       usrprf;
    char                reserved[6];
} Qfpz_VFYAUTE0100_t;

typedef _Packed struct {
    Qfpz_Vstring_t      ndsTreeName;
    Qfpz_Vstring_t      serverName;
    Qfpz_usrprf_t       usrprf;
    char                reserved[6];
} Qfpz_VFYAUTE0200_t;

/********** Structures for QfpzListNtwAutE **************/

typedef Qfpz_AUTE0100_id_t Qfpz_LSTAUTE0100_t;
typedef Qfpz_AUTE0200_id_t Qfpz_LSTAUTE0200_t;
typedef Qfpz_AUTE0900_id_t Qfpz_LSTAUTE0900_t;

typedef _Packed struct {
    char        usrspcName[10];
    char        usrspcLibrary[10];
    char        formatName[8];
    int         offsetToInputData;
    int         lengthOfInputData;
} Qfpz_ListAutInputParm_t;

typedef _Packed struct {
    char        usrspcName[10];
    char        usrspcLibrary[10];
    char        usrprf[10];
} Qfpz_ListAutHeader_t;

typedef _Packed struct {
    int                 offsetToNextEntry;
    int                 offsetToServerSpecificData;
    Qfpz_serverType_t   serverType;
    char                reserved[2];
} Qfpz_ListAutEntry_t;

typedef _Packed struct {
    int         offsetToServerName;
    int         lengthOfServerName;
    int         offsetToNetWareUserName;
    int         lengthOfNetWareUserName;
} Qfpz_ListAutNetware3_t;

typedef _Packed struct {
    int         offsetToNDSTreeName;
    int         lengthOfNDSTreeName;
    int         offsetToNDSContext;
    int         lengthOfNDSContext;
    int         offsetToNetWareUserName;
    int         lengthOfNetWareUserName;
} Qfpz_ListAutNDS_t;

/********** Structures for QfpzStrNtwCnn ****************/

const Qfpz_formatName_t QFPZ_STRCNN_SVRC0100 = {
    'S','V','R','C','0','1','0','0' };
const Qfpz_formatName_t QFPZ_STRCNN_SVRC0200 = {
    'S','V','R','C','0','2','0','0' };

enum {
    QFPZ_CNNTYPE_ALL = -1,
    QFPZ_CNNTYPE_USER = 1,
    QFPZ_CNNTYPE_SAVRST = 2
};   /* values for connection type field */

const int QFPZ_MAX_CNNTYPE_ELEMENTS = 2;

enum {
    QFPZ_AUTJOB_CURJOB = 1,
    QFPZ_AUTJOB_ANY = 2
};   /* values for authorized job field */

enum {
    QFPZ_CNNIDLTIME_NOMAX = -1
};   /* value for connection idle time field */

typedef _Packed struct {
    Qfpz_Vstring_t      serverName;
    Qfpz_Vstring_t      NetWareUsername;
    Qfpz_Vstring_t      password;
    Qfpz_Vstring_t      cnntype;
    int                 autjob;
    int                 connectionIdleTime;
    Qfpz_usrprf_t       usrprf;
    char                reserved[6];
} Qfpz_StrCnn_SVRC0100_t;

typedef _Packed struct {
    Qfpz_Vstring_t      NDSTreeName;
    Qfpz_Vstring_t      serverName;
    Qfpz_Vstring_t      NDSContext;
    Qfpz_Vstring_t      NetWareUsername;
    Qfpz_Vstring_t      password;
    Qfpz_Vstring_t      cnntype;
    int                 autjob;
    int                 connectionIdleTime;
    Qfpz_usrprf_t       usrprf;
    char                reserved[6];
} Qfpz_StrCnn_SVRC0200_t;

/********** Structures for QfpzEndNtwCnn ****************/

const Qfpz_formatName_t QFPZ_ENDCNN_ENDC0100 = {
    'E','N','D','C','0','1','0','0' };
const Qfpz_formatName_t QFPZ_ENDCNN_ENDC0200 = {
    'E','N','D','C','0','2','0','0' };

typedef _Packed struct {
    Qfpz_Vstring_t      serverName;
    char                reserved[4];
} Qfpz_EndCnn_ENDC0100_t;

typedef _Packed struct {
    Qfpz_Vstring_t      serverName;
    int                 connectionNumber;
    char                reserved[4];
} Qfpz_EndCnn_ENDC0200_t;


/******************************************
 Prototypes
 ******************************************/

#ifdef __cplusplus
extern "C" {
#endif

void QfpzAddNtwAutE
  ( const void                  *entryIdentifier,
    int                         lengthOfIdentifier,
    const Qfpz_formatName_t     idFormatName,
    const void                  *entryData,
    int                         lengthOfData,
    const Qfpz_formatName_t     dataFormatName,
    Qus_EC_t                    *errorCode );

void QfpzChgNtwAutE
  ( const void                  *entryIdentifier,
    int                         lengthOfIdentifier,
    const Qfpz_formatName_t     idFormatName,
    const void                  *entryData,
    int                         lengthOfData,
    const Qfpz_formatName_t     dataFormatName,
    Qus_EC_t                    *errorCode );

void QfpzRmvNtwAutE
  ( const void                  *entryIdentifier,
    int                         lengthOfIdentifier,
    const Qfpz_formatName_t     formatName,
    Qus_EC_t                    *errorCode );

void QfpzVfyNtwAutE
  ( const void                  *entryIdentifier,
    int                         lengthOfIdentifier,
    const Qfpz_formatName_t     formatName,
    Qus_EC_t                    *errorCode );

void QfpzListNtwAutE
  ( const char                  userSpace[20],
    const void                  *entryIdentifier,
    int                         lengthOfIdentifier,
    const Qfpz_formatName_t     formatName,
    Qus_EC_t                    *errorCode );

void QfpzStrNtwCnn
  ( const void                  *connectionData,
    int                         lengthOfConnectionData,
    const Qfpz_formatName_t     formatName,
    Qus_EC_t                    *errorCode );

void QfpzEndNtwCnn
  ( const void                  *connectionData,
    int                         lengthOfConnectionData,
    const Qfpz_formatName_t     formatName,
    Qus_EC_t                    *errorCode );

#ifdef __cplusplus
};
#endif

#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(pop)                                   /* @A1A*/
#endif                                                       /* @A1A*/

#endif /* _qfpzaapi_h_ */
