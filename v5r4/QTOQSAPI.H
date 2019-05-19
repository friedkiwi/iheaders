/**************************************************************************/
/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/*                                                                        */
/* Licensed Materials - Property of IBM                                   */
/*                                                                        */
/* Restricted Materials of IBM                                            */
/*                                                                        */
/* (C) COPYRIGHT International Business Machines Corp. 2002               */
/* All Rights Reserved                                                    */
/*                                                                        */
/* US Government Users Restricted Rights - Use, duplication or            */
/* disclosure restricted by GSA ADP Schedule Contract with IBM Corp.      */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */
/*
 *   COMPONENT_NAME: toq.xpf
 *
 *   FUNCTIONS:
 *
 *   ORIGINS: 27
 *
 *   (C) COPYRIGHT International Business Machines Corp. 2002
 *   All Rights Reserved
 *   Licensed Materials - Property of IBM
 *   US Government Users Restricted Rights - Use, duplication or
 *   disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */
/**************************************************************************/
#ifndef _QTOQSAPI_H
#define _QTOQSAPI_H
#include <sys/types.h>
#include <sys/socket.h>  /* for sockaddr */
#include <netinet/in.h>  /* for sockaddr_in */
#include <rapi.h>        /* for flowspec, tspec and adspec. */
/****************************************************/
/* Define the API results that will be returned in  */
/* the "result" field of the qos_req structure.     */
/****************************************************/
#define LOAD_OK                  0
#define ADMISSION_CONTROL_FAILED 1
#define ADMISSION_CONTROL_OK     2
/*****************************************************/
/* Define the types of API requests that can be made */
/*****************************************************/
/* Define the reservation style types.*/
/**************************************/
#define  QOS_RSTYLE_WILDCARD  1   /* STYLE_ID_WF */
#define  QOS_RSTYLE_FIXED     2   /* STYLE_ID_FF */
#define  QOS_RSTYLE_SE        3   /* STYLE_ID_SE */
typedef int qos_styleid_t;
/************************************/
/* Define the API request types.    */
/************************************/
#define    REQ_SIGNAL_RET_EVENTS    1
#define   REQ_SIGNAL_NORET_EVENTS   2
#define    REQ_NOSIGNAL             3
#define    REQ_GET_RSVP_DATA        4
typedef int qos_req_t;
/*****************************************************/
/* Define the spec structures to be used in the      */
/* QoS request.                                      */
/*****************************************************/
/**********************/
/* QoS Spec structure */
/**********************/
/*************************************************************/
/* The following structure describes the Quality of Service  */
/* paramters that can be sent to the API's.                  */
/*************************************************************/
typedef struct
  {
  int               service;
  union
    {
    struct  CL_spec                  /* Controlled-Load service      */
      {
      float         TB_Tspec_r;       /* token bucket rate in bytes/sec  */
      float         TB_Tspec_b;       /* token bucket depth in bytes     */
      float         TB_Tspec_p;       /* token bucket peak in bytes/sec  */
      unsigned long TB_Tspec_m;       /* min policed unit in bytes       */
      unsigned long TB_Tspec_M;       /* max packet size in bytes        */
      } CL_spec;
    struct Guar_spec                  /* Guaranteed service              */
      {
      float         Guar_R;           /* guaranteed rate in bytes/sec    */
      unsigned long Guar_S;           /* slack term in microsecs         */
      } Guar_spec;
    }   spec_u;
} qos_spec_t;

/******************************************************/
/* qos_req data structure for use as the              */
/* input/output area of the qtoq_ioctl() API call.    */
/******************************************************/
typedef struct
  {
  struct  sockaddr        dest;        /* Destination address/port  */
  int                     d_length;    /* Destination address length*/
  struct sockaddr         source;      /* Source address/port       */
  int                     s_length;    /* Source address length     */
  int                     style;       /* Style of Reservation.     */
  qos_spec_t              Spec;        /* Flow info                 */
  unsigned char           result;      /* API status                */
  }  qos_req; /* End of QoS request structure */
/****************************************************/
/* Structure to be used with the qtoq_connect() api */
/****************************************************/
typedef struct
  {
  struct sockaddr         source;      /* Source address/port       */
  int                     s_length;    /* Source address length     */
  int                     style;       /* Style of Reservation.     */
  qos_spec_t              Spec;        /* Flow info                 */
  unsigned char           result;      /* API status                */
  }  qos_conn_req; /* End of QoS connection request structure */
/*******************************************/
/* qtoq_ioctl API Function prototype       */
/*******************************************/
extern "C" int qtoq_ioctl(
          int             descriptor,    /* socket descriptor       */
          int             req_type,      /* request type            */
          qos_req         *qos_data,     /* QoS Data structure      */
          unsigned int    *qos_session,  /* QoS session descriptor  */
          int             *qos_descriptor /* QoS event descriptor    */
               );
/*******************************************/
/* qtoq_connect API Function prototype     */
/*******************************************/

extern "C" int qtoq_connect(
          int                 descriptor,    /* socket descriptor     */
          struct sockaddr     *server_address,
          int                 address_length,
          int                 req_type,       /* Request type.          */
          qos_conn_req        *qos_data,      /* QoS Data structure     */
          unsigned int        *qos_session,   /* QoS session descriptor */
          int                 *qos_descriptor /* QoS event descriptor   */
                  );
/*******************************************/
/* qtoq_accept API Function prototype      */
/*******************************************/
extern "C" int qtoq_accept(
              int                    socket_descriptor,
              int                    req_type,
              struct sockaddr        *address,  // returns addr and port
                                                // of connection request.
              int                    *address_length, // addr length.
              qos_req                *qos_data,
              unsigned int           *qos_session,
              int                    *qos_descriptor
             );
/*******************************************/
/* qtoq_close API Function prototype       */
/*******************************************/
extern "C" int    qtoq_close(
          int          descriptor,     /* socket descriptor       */
          int          qos_descriptor, /* QoS event descriptor   */
          unsigned int qos_session     /* QoS session descriptor */
                  );
#endif /* _QTOQSAPI_H */

