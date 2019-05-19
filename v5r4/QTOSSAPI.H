#pragma nomargins nosequence
#pragma checkout(suspend)
/*********************************************************************/
/*                                                                   */
/* Header File Name:  qtossapi.h                                     */
/*                                                                   */
/* Descriptive Name:  SNMP Subagent API declarations                 */
/*                                                                   */
/*                                                                   */
/* 5716-SS1 (C) Copyright IBM Corp. 1993, 1995                       */
/* All rights reserved.                                              */
/* US Goverment Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used by the SNMP subagent developer     */
/*          to create a SNMP subagent.                               */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          (none)                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          DPI_PACKET_LEN()                                         */
/*                                                                   */
/*                                                                   */
/* Function list:                                                    */
/*                                                                   */
/*          connectSNMP()                                            */
/*          disconnectSNMP()                                         */
/*          debugDPI()                                               */
/*          fDPIparse()                                              */
/*          fDPIset()                                                */
/*          mkDPIAreYouThere()                                       */
/*          mkDPIclose()                                             */
/*          mkDPIopen()                                              */
/*          mkDPIregister()                                          */
/*          mkDPIresponse()                                          */
/*          mkDPIset()                                               */
/*          mkDPItrap()                                              */
/*          mkDPIunregister()                                        */
/*          pDPIpacket()                                             */
/*          receiveDPIpacket()                                       */
/*          sendDPIpacket()                                          */
/*          waitDPIpacket()                                          */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          snmp_dpi_hdr                                             */
/*          snmp_dpi_open_packet                                     */
/*          snmp_dpi_close_packet                                    */
/*          snmp_dpi_reg_packet                                      */
/*          snmp_dpi_ureg_packet                                     */
/*          snmp_dpi_get_packet                                      */
/*          snmp_dpi_next_packet                                     */
/*          snmp_dpi_bulk_packet                                     */
/*          snmp_dpi_set_packet                                      */
/*          snmp_dpi_resp_packet                                     */
/*          snmp_dpi_trap_packet                                     */
/*          sa_dataq_msg                                             */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D91705       3D60  930818  ROCH     New include.           */
/*                                                                   */
/*                                                                   */
/*   End CFD List.                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*********************************************************************/

#ifndef QTOSSAPI_h
#define QTOSSAPI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


/*---------------------------------------------------------------------
|
|   constants used in subagent API
|
*/
#ifndef SNMP_DPI_BUFSIZE
#define SNMP_DPI_BUFSIZE    32768     /* max size of a DPI packet   */
#endif



/* These are the codes for the SNMP_DPI packet types. */
#define SNMP_DPI_GET            1
#define SNMP_DPI_GETNEXT        2
#define SNMP_DPI_SET            3
#define SNMP_DPI_TRAP           4
#define SNMP_DPI_RESPONSE       5
#define SNMP_DPI_REGISTER       6
#define SNMP_DPI_UNREGISTER     7
#define SNMP_DPI_OPEN           8
#define SNMP_DPI_CLOSE          9
#define SNMP_DPI_COMMIT        10
#define SNMP_DPI_UNDO          11
#define SNMP_DPI_GETBULK       12
#define SNMP_DPI_TRAPV2        13
#define SNMP_DPI_INFORM        14
#define SNMP_DPI_ARE_YOU_THERE 15


/* We support DPI Version 2 Release 0. */
#define SNMP_DPI_PROTOCOL   2
#ifndef SNMP_DPI_VERSION
#define SNMP_DPI_VERSION    2
#endif
#ifndef SNMP_DPI_RELEASE
#define SNMP_DPI_RELEASE    0
#endif


/* DPI types */
#define SNMP_TYPE_MASK           0x7f
#define SNMP_TYPE_Integer32    (128|1)
#define SNMP_TYPE_OCTET_STRING      2
#define SNMP_TYPE_OBJECT_IDENTIFIER 3
#define SNMP_TYPE_NULL              4
#define SNMP_TYPE_IpAddress         5
#define SNMP_TYPE_Counter32    (128|6)
#define SNMP_TYPE_Gauge32      (128|7)
#define SNMP_TYPE_TimeTicks    (128|8)
#define SNMP_TYPE_DisplayString     9
#define SNMP_TYPE_BIT_STRING        10
#define SNMP_TYPE_NsapAddress       11
#define SNMP_TYPE_UInteger32   (128|12)
#define SNMP_TYPE_Counter64         13
#define SNMP_TYPE_Opaque            14
#define SNMP_TYPE_noSuchObject      15
#define SNMP_TYPE_noSuchInstance    16
#define SNMP_TYPE_endOfMibView      17

/* Codes for the ret_code field of DPI response packet */
#ifndef snmp_baseH
#define SNMP_ERROR_noError             0
#define SNMP_ERROR_tooBig              1
#define SNMP_ERROR_noSuchName          2
#define SNMP_ERROR_badValue            3
#define SNMP_ERROR_readOnly            4
#define SNMP_ERROR_genErr              5
#define SNMP_ERROR_noAccess            6
#define SNMP_ERROR_wrongType           7
#define SNMP_ERROR_wrongLength         8
#define SNMP_ERROR_wrongEncoding       9
#define SNMP_ERROR_wrongValue          10
#define SNMP_ERROR_noCreation          11
#define SNMP_ERROR_inconsistentValue   12
#define SNMP_ERROR_resourceUnavailable 13
#define SNMP_ERROR_commitFailed        14
#define SNMP_ERROR_undoFailed          15
#define SNMP_ERROR_authorizationError  16
#define SNMP_ERROR_notWritable         17
#define SNMP_ERROR_inconsistentName    18
#endif /* ndef snmp_baseH */

#define SNMP_ERROR_DPI_noError                             0
#define SNMP_ERROR_DPI_otherError                        101
#define SNMP_ERROR_DPI_notFound                          102
#define SNMP_ERROR_DPI_alreadyRegistered                 103
#define SNMP_ERROR_DPI_higherPriorityRegistered          104
#define SNMP_ERROR_DPI_mustOpenFirst                     105
#define SNMP_ERROR_DPI_notAuthorized                     106
#define SNMP_ERROR_DPI_viewSelectionNotSupported         107
#define SNMP_ERROR_DPI_getBulkSelectionNotSupported      108
#define SNMP_ERROR_DPI_duplicateSubAgentIdentifier       109
#define SNMP_ERROR_DPI_invalidDisplayString              110
#define SNMP_ERROR_DPI_characterSetSelectionNotSupported 111

/* SNMP DPI UNREGISTER reason codes */
#define SNMP_UNREGISTER_otherReason                1
#define SNMP_UNREGISTER_goingDown                  2
#define SNMP_UNREGISTER_justUnregister             3
#define SNMP_UNREGISTER_newRegistration            4
#define SNMP_UNREGISTER_higherPriorityRegistered   5
#define SNMP_UNREGISTER_byManager                  6
#define SNMP_UNREGISTER_timeout                    7

/* SNMP DPI CLOSE reason codes */
#define SNMP_CLOSE_otherReason                     1
#define SNMP_CLOSE_goingDown                       2
#define SNMP_CLOSE_unsupportedVersion              3
#define SNMP_CLOSE_protocolError                   4
#define SNMP_CLOSE_authenticationFailure           5
#define SNMP_CLOSE_byManager                       6
#define SNMP_CLOSE_timeout                         7
#define SNMP_CLOSE_openError                       8



/* return values from AS/400 communications routines */
#define snmpsa_RC_ok            0
#define snmpsa_RC_err          -1
#define snmpsa_RC_noagent      -2
#define snmpsa_RC_mismatch     -3
#define snmpsa_RC_timedout     -4
#define snmpsa_RC_nonagentmsg  -5
#define snmpsa_RC_dqinvalid    -6
#define snmpsa_RC_parmerr      -7
#define snmpsa_RC_lengtherr    -8
#define snmpsa_RC_buffer       -9
#define snmpsa_RC_duplicate    -10
#define snmpsa_RC_canttrap     -11
#define snmpsa_RC_connectfirst -12
#define snmpsa_RC_alreadyconnected -13
#define snmpsa_RC_sync         -14
#define snmpsa_RC_MAXERR       -100



/*---------------------------------------------------------------------
|   Structures for subagent API.
*/
struct dpi_reg_packet {
  unsigned short          timeout;
  long int                priority;
  char                   *group_p;
  struct dpi_reg_packet  *next_p;
};

struct dpi_ureg_packet {
  char                    reason_code;
  char                   *group_p;
  struct dpi_ureg_packet *next_p;
};

struct dpi_get_packet {
  char                   *object_p;
  char                   *group_p;
  char                   *instance_p;
  struct dpi_get_packet  *next_p;
};

struct dpi_next_packet {
  char                   *object_p;
  char                   *group_p;
  char                   *instance_p;
  struct dpi_next_packet *next_p;
};

struct snmp_dpi_u64 {
  unsigned long high;
  unsigned long low;
};
typedef struct snmp_dpi_u64 snmp_dpi_u64;

struct dpi_set_packet {
  char                   *object_p;
  char                   *group_p;
  char                   *instance_p;
  unsigned char           value_type;
  unsigned short          value_len;
  char                   *value_p;
  struct dpi_set_packet  *next_p;
};

struct dpi_resp_packet {
  char                     error_code;
  unsigned long int        error_index;
  #define  resp_priority   error_index
  struct dpi_set_packet   *varBind_p;
};

struct dpi_trap_packet {
  long int                 generic;
  long int                 specific;
  struct dpi_set_packet   *varBind_p;
  char                    *enterprise_p;
};

struct dpi_open_packet {
  char                 *oid_p;
  char                 *description_p;
  unsigned short        timeout;
  unsigned short        max_varBinds;
  char                  character_set;
  unsigned short        password_len;
  unsigned char        *password_p;
};

struct dpi_close_packet {
  char                  reason_code;
};

typedef struct snmp_dpi_hdr             snmp_dpi_hdr;
typedef struct dpi_open_packet          snmp_dpi_open_packet;
typedef struct dpi_close_packet         snmp_dpi_close_packet;
typedef struct dpi_reg_packet           snmp_dpi_reg_packet;
typedef struct dpi_ureg_packet          snmp_dpi_ureg_packet;
typedef struct dpi_get_packet           snmp_dpi_get_packet;
typedef struct dpi_next_packet          snmp_dpi_next_packet;
typedef struct dpi_set_packet           snmp_dpi_set_packet;
typedef struct dpi_resp_packet          snmp_dpi_resp_packet;
typedef struct dpi_trap_packet          snmp_dpi_trap_packet;

#define snmp_dpi_hdr_NULL_p             ((snmp_dpi_hdr *)0)
#define snmp_dpi_open_packet_NULL_p     ((snmp_dpi_open_packet *)0)
#define snmp_dpi_close_packet_NULL_p    ((snmp_dpi_close_packet *)0)
#define snmp_dpi_get_packet_NULL_p      ((snmp_dpi_get_packet *)0)
#define snmp_dpi_next_packet_NULL_p     ((snmp_dpi_next_packet *)0)
#define snmp_dpi_set_packet_NULL_p      ((snmp_dpi_set_packet *)0)
#define snmp_dpi_resp_packet_NULL_p     ((snmp_dpi_resp_packet *)0)
#define snmp_dpi_trap_packet_NULL_p     ((snmp_dpi_trap_packet *)0)
#define snmp_dpi_reg_packet_NULL_p      ((snmp_dpi_reg_packet *)0)
#define snmp_dpi_ureg_packet_NULL_p     ((snmp_dpi_ureg_packet *)0)

struct snmp_dpi_hdr {
  unsigned char  proto_major;
  unsigned char  proto_version;
  #define        proto_minor proto_version
  unsigned char  proto_release;
  unsigned short packet_id;
  unsigned char  packet_type;
  union {
     snmp_dpi_reg_packet      *reg_p;
     snmp_dpi_ureg_packet     *ureg_p;
     snmp_dpi_get_packet      *get_p;
     snmp_dpi_next_packet     *next_p;
     snmp_dpi_set_packet      *set_p;
     snmp_dpi_resp_packet     *resp_p;
     snmp_dpi_trap_packet     *trap_p;
     snmp_dpi_open_packet     *open_p;
     snmp_dpi_close_packet    *close_p;
     unsigned char            *any_p;
  } data_u;
};



/*  AS/400 subagent data queue (DTAQ) struct */
typedef struct  {
    char    msgid[10],
            fun_code[2],
            msgdata[68];
    } sa_dataq_msg;




/*---------------------------------------------------------------------
|
|    SNMP Subagent API entry point prototypes
|
*/
#ifndef __ILEC400__
extern "C" {
#endif

void                  debugDPI(
  int                   level);


snmp_dpi_hdr         *pDPIpacket(
  unsigned char        *packet_p);

void                  fDPIparse(
  snmp_dpi_hdr         *hdr_p);

void                  fDPIset(
  snmp_dpi_set_packet  *packet_p);

unsigned char        *mkDPIopen(
  char                 *oid_p,
  char                 *description_p,
  unsigned long         timeout,
  unsigned long         max_varBinds,
  char                  character_set,
  #define DPI_NATIVE_CSET  0
  #define DPI_ASCII_CSET   1
  unsigned long         password_len,
  unsigned char        *password_p);

unsigned char        *mkDPIclose(
  char                  reason_code);

unsigned char        *mkDPIregister(
  unsigned short        timeout,
  long int              priority,
  char                 *group_p,
  char                  bulk_select);
  #define DPI_BULK_NO   0
  #define DPI_BULK_YES  1

unsigned char        *mkDPIunregister(
  char                  reason_code,
  char                 *group_p);

#define               mkDPIAreYouThere mkDPIayt
unsigned char        *mkDPIayt(void);

unsigned char        *mkDPIresponse(
  snmp_dpi_hdr         *hdr_p,
  long int              ret_code,
  long int              ret_index,
  snmp_dpi_set_packet  *packet_p);

unsigned char        *mkDPItrap(
  long int              generic,
  long int              specific,
  snmp_dpi_set_packet  *packet_p,
  char                 *enterprise_p);

snmp_dpi_set_packet  *mkDPIset(
  snmp_dpi_set_packet  *packet_p,
  char                 *group_p,
  char                 *instance_p,
  int                   value_type,
  int                   value_len,
  void                 *value_p);


/* AS/400 communication function prototypes
*/
int  connectSNMP(       char*,
                        char*,
                        long int             ),
     disconnectSNMP(    char*,
                        char*,
                        long int             ),
     receiveDPIpacket(  sa_dataq_msg*,
                        void*,
                        unsigned long int *  ),
     sendDPIpacket(     void*,
                        int                  ),
     waitDPIpacket(     long int,
                        void*,
                        unsigned long int*   );


#ifndef __ILEC400__
}
#endif


#define DPI_PACKET_LEN(packet) (((packet) == (void *)0) ? 0 : \
                               (*((unsigned char *)(packet)) * 256 + \
                               *(((unsigned char *)(packet))+1)) + 2 )

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* QTOSSAPI_h */


