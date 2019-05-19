#pragma nomargins nosequence
#pragma checkout(suspend)
/*********************************************************************/
/*                                                                   */
/* Header File Name:  qtomeapi.h                                     */
/*                                                                   */
/* Descriptive Name:  SNMP Manager API declarations                  */
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
/*          structures to be used by the SNMP Managment developer.   */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          (none)                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          (none)                                                   */
/*                                                                   */
/*                                                                   */
/* Function list:                                                    */
/*          snmpGet()                                                */
/*          snmpSet()                                                */
/*          snmpGetnext()                                            */
/*                                                                   */
/* Structure List:                                                   */
/*          _varBind                                                 */
/*          snmppdu                                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D91706       3D60  940818  ROCH     New include.           */
/*                                                                   */
/*   End CFD List.                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*********************************************************************/

#ifndef QTOMEAPI_h
#define QTOMEAPI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*--------------------------------------------------------------------*/
/* SNMP Error Status                                                  */
/*--------------------------------------------------------------------*/
#define API_SNMP_ERROR_noError             0
#define API_SNMP_ERROR_tooBig              1
#define API_SNMP_ERROR_noSuchName          2
#define API_SNMP_ERROR_badValue            3
#define API_SNMP_ERROR_genErr              5

/*--------------------------------------------------------------------*/
/* API return codes                                                   */
/*--------------------------------------------------------------------*/
#define API_RC_OK                               0
#define API_RC_OUT_OF_MEMORY                   -4
#define API_RC_OUT_OF_BUFFER                   -5
#define API_RC_OUT_OF_VARBINDS                 -6
#define API_RC_SNMP_OUT_OF_VARBINDS            -7
#define API_RC_SNMP_INVALID_OID                -9
#define API_RC_INVALID_VALUE                   -10
#define API_RC_INVALID_VALUE_REP               -11
#define API_RC_DECODE_ERROR                    -12
#define API_RC_ENCODE_ERROR                    -13
#define API_RC_TIMEOUT                         -18
#define API_RC_INVALID_PDU_TYPE                -21
#define API_RC_INVALID_IP_ADDRESS              -103
#define API_RC_INVALID_COMMUNITY_NAME_LENGTH   -104
#define API_RC_INVALID_TIMEOUT_PARM            -108
#define API_RC_UNKNOWN_HOST                    -110
#define API_RC_INVALID_OID                     -112
#define API_RC_INVALID_PDU_POINTER             -113
#define API_RC_INVALID_HOST_POINTER            -114
#define API_RC_INVALID_COMMUNITY_POINTER       -115
#define API_RC_SOCKET_ERROR                    -201
#define API_RC_NOT_OK                          -202

#define API_RC_DOMAIN_ERROR                     241
#define API_RC_INVALID_POINTER                  242
#define API_RC_INVALID_PTR_TYPE                 243

/*--------------------------------------------------------------------*/
/* API return codes ( Warnings )                                      */
/*--------------------------------------------------------------------*/
#define API_RC_VAL_LEN_LESS_THAN_RETURNED_VAL_LEN        1

/*--------------------------------------------------------------------*/
/* ASN types                                                          */
/*--------------------------------------------------------------------*/
#define API_ASN_UNKNOWN             0x00

#define API_ASN_INTEGER             0x02
#define API_ASN_OCTET_STRING        0x04
#define API_ASN_NULL                0x05
#define API_ASN_OBJECT_IDENTIFIER   0x06
#define API_ASN_IpAddress           0x40
#define API_ASN_Counter             0x41
#define API_ASN_Gauge               0x42
#define API_ASN_TimeTicks           0x43
#define API_ASN_Opaque              0x44

/*--------------------------------------------------------------------*/
/* PDU types                                                          */
/*--------------------------------------------------------------------*/

#define GET_PDU_TYPE           0xa0
#define GETNEXT_PDU_TYPE       0xa1
#define SET_PDU_TYPE           0xa3

/*--------------------------------------------------------------------*/
/* Trap Data-Varbind structures for ZCA interface to data queue.      */
/*--------------------------------------------------------------------*/

typedef struct Qzca_Ext_Header {
      char Trap_Hdr[10];
      char Trap_Hdr_Type[2];
}Qzca_Ext_header;

typedef struct Qzca_Ext_Varbind {
      int Name_Len;
      int Name_Displacement;
      int Value_Length;
      int Value_Displacement;
      int Value_Type;
}Qzca_Ext_Varbind;

typedef struct Qzca_Ext_TrapData {
      int Vers;
      int Community_Length;
      int Community_Displacement;
      int Enterprise_Length;
      int Enterprise_Displacement;
      int Agent_Length;
      int Agent_Displacement;
      int Trap_Type;
      int Specific_Trap;
      int Timestamp;
      int Varbind_Num;
      int Varbind_Displacement;
      /* Qzca_Ext_Varbind Ext_FirstVarbind[]; */  /* varying length */
}Qzca_Ext_TrapData;

/*--------------------------------------------------------------------*/
/* Other defines                                                      */
/*--------------------------------------------------------------------*/

#define API_MAX_OID_SIZE        1500
#define API_MAX_VALUE_SIZE      32767

typedef struct _varBind{
   struct _varBind * next;
   char   *oid;                                 /* NULL terminated    */
   unsigned char asn_type;
   int    val_len;
   union {
      int  * int_val;
      char * str_val;
   } val;
};

typedef struct _varBind varBind;

typedef struct {
   unsigned char pdu_type;
   int     error_status;
   int     error_index;
   varBind * varbind;
} snmppdu;

/*--------------------------------------------------------------------*/
/* Prototypes                                                         */
/*--------------------------------------------------------------------*/

#ifndef __ILEC400__
extern "C" {
#endif

int snmpGet(snmppdu          *,
            char             *,              /* ip address */
            unsigned long int ,              /* time out   */
            char *            ,              /* comm name  */
            unsigned long int );             /* comm len   */


int snmpGetnext(snmppdu          *,
                char             *,          /* ip address */
                unsigned long int ,          /* time out   */
                char *            ,          /* comm name  */
                unsigned long int );         /* comm len   */

int snmpSet(snmppdu          *,
            char             *,              /* ip address */
            unsigned long int ,              /* time out   */
            char *            ,              /* comm name  */
            unsigned long int );             /* comm len   */


#ifndef __ILEC400__
}
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* QTOMEAPI */
