#ifndef _QTOQMONAPI_H
#define _QTOQMONAPI_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/**********************************************************************/
/*                                                                    */
/* Header File Name:  qtoqMonAPI.cleinc		                      */
/*                                                                    */
/* Header File Description:   Service program for QoS Monitor         */
/*                            qtoqMonAPI.C                            */
/*                                                                    */
/* 5722-SS1        (C) Copyright IBM Corp. 2000, 2003                 */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication, or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* This header file is an external product interface, all             */
/* modifications must be upward compatible.                           */
/*                                                                    */
/* Macros List:                                                       */
/*                                                                    */
/* Structure/Type List:                                               */
/*                                                                    */
/* Function Prototype List:                                           */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* FLAG REASON   LEVEL  DATE    CHANGE    DESCRIPTION                 */
/* ---- -------- ----   -----   --------  -----------                 */
/* $A0= D97927	 5D10   110300  DALEL     NEW PART  C++               */
/* $A1  D98677   5D20   062101  DALEL	  Additional API/Monitor func.*/
/*                                                                    */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/**********************************************************************/

#ifndef QTOQ_EXTERN
#ifdef __ILEC400__
#define QTOQ_EXTERN extern
#else
#define QTOQ_EXTERN extern "C"
#endif
#endif


/********************************************************************/
/* Type Definition for Input Parameter - Filter parameter section   */
/********************************************************************/
typedef _Packed struct QtoqOpnLstQoSMonData_filter
{
    unsigned int  Filter_Size;          /* Size of Filter struct*/
    unsigned int  Filter_Flag;          /* 0=off 1=on           */
    unsigned char Start_Time[14];       /* YYYYMMDDHHMMSS       */
    unsigned char End_Time[14];         /* YYYYMMDDHHMMSS       */
    unsigned int  Policy_Flag;          /* 0=off 1=on           */
    unsigned int  System_Aggregation;   /* 0=off 1=on           */
    unsigned char Policy_Name[128];     /* Name of policy       */
    unsigned char Saved_Collected_Name[10]; /*Name of Saved data*/
};

/********************************************************************/
/* Type Definition for the QOSM0100 format of the user space.       */
/* This format is used for non-aggregate data of IntServ Guarantied */
/* rate and can be used for either trace data or stack data         */
/********************************************************************/
typedef _Packed struct Format_QOSM0100
{
    unsigned char Policy_Name[128];
    unsigned char Time_Stamp[14];
    unsigned char Reserved1[2];
    unsigned long Protocol;
    unsigned char Source_IP_Start[15];
    unsigned char Destination_IP_Start[15];
    unsigned char Source_IP_End[15];
    unsigned char Destination_IP_End[15];
    unsigned long Source_Port_Start;
    unsigned long Destination_Port_Start;
    unsigned long Source_Port_End;
    unsigned long Destination_Port_End;
    unsigned long Token_Bucket_Rate;
    unsigned long Token_Bucket_Depth;
    unsigned long Peak_Data_Rate;
    unsigned long Minimum_Policed_Unit;
    unsigned long Maximum_Packet_Size;
    unsigned long Total_Connections_Serviced;
    unsigned long Total_Packets_Transmitted;
    unsigned long Total_Bytes_Transmitted;
    unsigned long Total_In_Profile_Packets;
    unsigned long Total_In_Profile_Bytes;
} Format_QOSM0100_t;

/********************************************************************/
/* Type Definition for the QOSM0150 format of the user space.       */
/* This format is used for non-aggregate data of IntServ Guarantied */
/* rate and can be used for either trace data or stack data.        */
/* This format also contains 8-byte counters                        */
/********************************************************************/
typedef _Packed struct Format_QOSM0150
{
    unsigned char Policy_Name[128];
    unsigned char Time_Stamp[14];
    unsigned char Reserved1[2];
    unsigned long Protocol;
    unsigned char Source_IP_Start[15];
    unsigned char Destination_IP_Start[15];
    unsigned char Reserved2[2];
    unsigned long Source_Port_Start;
    unsigned long Destination_Port_Start;
    unsigned long Token_Bucket_Rate;
    unsigned long Token_Bucket_Depth;
    unsigned long Peak_Data_Rate;
    unsigned long Minimum_Policed_Unit;
    unsigned long Maximum_Packet_Size;
    unsigned long long Total_Packets_Transmitted;
    unsigned long long Total_Kbits_Transmitted;
    unsigned long long Total_In_Profile_Packets;
    unsigned long long Total_In_Profile_Kbits;
    unsigned long Duration;
    unsigned long Policy_Handle_Identifier;
    unsigned long Offset_to_Additional_Info;
    unsigned long Length_of_Additional_Info;
} Format_QOSM0150_t;


/********************************************************************/
/* Type Definition for the QOSM0200 format of the user space.       */
/* This format is used for non-aggregate data of IntServ Guarantied */
/* rate and can be used for either trace data or stack data         */
/********************************************************************/
typedef _Packed struct Format_QOSM0200
{
    Format_QOSM0100_t QOSM0100;
    unsigned long Guaranteed_Rate;
    unsigned long Slack_Term;
} Format_QOSM0200_t;

/********************************************************************/
/* Type Definition for the QOSM0250 format of the user space.       */
/* This format is used for non-aggregate data of IntServ Guarantied */
/* rate and can be used for either trace data or stack data         */
/* This format uses 8-byte counters                                 */
/********************************************************************/
typedef _Packed struct Format_QOSM0250
{
    Format_QOSM0150_t QOSM0150;
    unsigned long Guaranteed_Rate;
    unsigned long Slack_Term;
} Format_QOSM0250_t;

/********************************************************************/
/* Type Definition for the QOSM0300 format of the user space.       */
/* This format is used for non-aggregate data of DiffServ PHB.	    */
/* Can be used for either trace data or stack data                  */
/********************************************************************/
typedef _Packed struct Format_QOSM0300
{
    unsigned char Policy_Name[128];
    unsigned char Time_Stamp[14];
    unsigned char Reserved1[2];
    unsigned long Priority;
    unsigned long Protocol;
    unsigned char Source_IP_Start[15];
    unsigned char Destination_IP_Start[15];
    unsigned char Source_IP_End[15];
    unsigned char Destination_IP_End[15];
    unsigned long Source_Port_Start;
    unsigned long Destination_Port_Start;
    unsigned long Source_Port_End;
    unsigned long Destination_Port_End;
    unsigned long Token_Bucket_Rate;
    unsigned long Token_Bucket_Depth;
    unsigned long Peak_Data_Rate;
    unsigned char In_Field_DSCP;
    unsigned char Out_Field_DSCP;
    unsigned char Reserved2[2];
    unsigned long Total_Packets_Transmitted;
    unsigned long Total_Bytes_Transmitted;
    unsigned long Total_In_Profile_Packets;
    unsigned long Total_In_Profile_Bytes;
    unsigned long Total_Active_Connections;
    unsigned long Traffic_Profile;
} Format_QOSM0300_t;

/********************************************************************/
/* Type Definition for the QOSM0350 format of the user space.       */
/* This format is used for non-aggregate data of DiffServ PHB.	    */
/* Can be used for either trace data or stack data                  */
/* This format uses 8-byte counters                                 */
/********************************************************************/
typedef _Packed struct Format_QOSM0350
{
    unsigned char Policy_Name[128];
    unsigned char Time_Stamp[14];
    unsigned char Reserved1[2];
    unsigned long Priority;
    unsigned long Protocol;
    unsigned char Source_IP_Start[15];
    unsigned char Destination_IP_Start[15];
    unsigned char Source_IP_End[15];
    unsigned char Destination_IP_End[15];
    unsigned long Source_Port_Start;
    unsigned long Destination_Port_Start;
    unsigned long Source_Port_End;
    unsigned long Destination_Port_End;
    unsigned long Token_Bucket_Rate;
    unsigned long Token_Bucket_Depth;
    unsigned long Peak_Data_Rate;
    unsigned char In_Field_DSCP;
    unsigned char Out_Field_DSCP;
    unsigned char Reserved2[2];
    unsigned long long Total_Packets_Transmitted;
    unsigned long long Total_Kbits_Transmitted;
    unsigned long long Total_In_Profile_Packets;
    unsigned long long Total_In_Profile_Kbits;
    unsigned long long Total_Active_Connections;
    unsigned long Traffic_Profile;
    unsigned long Duration;
    unsigned long Policy_Handle_Identifier;
} Format_QOSM0350_t;

/********************************************************************/
/* Type Definition for the AGGR0100 format of the user space.       */
/* This format is used for aggregate data of IntServ Controlled Load*/
/* and InServ Controlled Load with DiffServ marking                 */
/********************************************************************/
typedef _Packed struct Format_AGGR0100
{
    unsigned char Policy_Name[128];
    unsigned long Token_Bucket_Rate;
    unsigned long Total_Connections_Serviced;
    unsigned long Total_Packets_Transmitted;
    unsigned long Total_Bytes_Transmitted;
    unsigned long Total_In_Profile_Packets;
    unsigned long Total_In_Profile_Bytes;
    unsigned char Start_Time[14];
    unsigned char End_Time[14];
} Format_AGGR0100_t;

/********************************************************************/
/* Type Definition for the AGGR0150 format of the user space.       */
/* This format is used for aggregate data of IntServ Controlled Load*/
/* and InServ Controlled Load with DiffServ marking                 */
/* This format uses 8-byte counters                                 */
/********************************************************************/
typedef _Packed struct Format_AGGR0150
{
    unsigned char Policy_Name[128];
    unsigned long Token_Bucket_Rate;
    unsigned long Total_Connections_Serviced;
    unsigned long long Total_Packets_Transmitted;
    unsigned long long Total_Kbits_Transmitted;
    unsigned long long Total_In_Profile_Packets;
    unsigned long long Total_In_Profile_Kbits;
    unsigned char Start_Time[14];
    unsigned char End_Time[14];
    unsigned long Offset_to_Additional_Info;
    unsigned long Length_of_Additional_Info;
} Format_AGGR0150_t;

/********************************************************************/
/* Type Definition for the AGGR0200 format of the user space.       */
/* This format is used for aggregate data of IntServ Guarantied Rate*/
/* and InServ Guarantied Rate with DiffServ marking                 */
/********************************************************************/
typedef _Packed struct Format_AGGR0200
{
    Format_AGGR0100_t AGGR0100;
    unsigned long Guaranteed_Rate;
    unsigned long Actual_Calculated_Rate;
} Format_AGGR0200_t;

/********************************************************************/
/* Type Definition for the AGGR0250 format of the user space.       */
/* This format is used for aggregate data of IntServ Guarantied Rate*/
/* and InServ Guarantied Rate with DiffServ marking                 */
/********************************************************************/
typedef _Packed struct Format_AGGR0250
{
    Format_AGGR0150_t AGGR0150;
    unsigned long Guaranteed_Rate;
    unsigned long Actual_Calculated_Rate;
} Format_AGGR0250_t;


/********************************************************************/
/* Type Definition for the AGGR0300 format of the user space.       */
/* This format is used for aggregate data of DiffServ PHB           */
/********************************************************************/
typedef _Packed struct Format_AGGR0300
{
    unsigned char Policy_Name[128];
    unsigned long Token_Bucket_Rate;
    unsigned long Token_Bucket_Depth;
    unsigned char In_Field_DSCP;
    unsigned char Out_Field_DSCP;
    unsigned char Reserved1[2];
    unsigned long Total_Active_Connections;
    unsigned long Total_Packets_Transmitted;
    unsigned long Total_Bytes_Transmitted;
    unsigned long Total_In_Profile_Packets;
    unsigned long Total_In_Profile_Bytes;
    unsigned long Traffic_Profile;
    unsigned char Start_Time[14];
    unsigned char End_Time[14];
} Format_AGGR0300_t;

/********************************************************************/
/* Type Definition for the AGGR0350 format of the user space.       */
/* This format is used for aggregate data of DiffServ PHB           */
/********************************************************************/
typedef _Packed struct Format_AGGR0350
{
    unsigned char Policy_Name[128];
    unsigned long Token_Bucket_Rate;
    unsigned long Token_Bucket_Depth;
    unsigned char In_Field_DSCP;
    unsigned char Out_Field_DSCP;
    unsigned char Reserved1[2];
    unsigned long long Total_Active_Connections;
    unsigned long long Total_Packets_Transmitted;
    unsigned long long Total_Kbits_Transmitted;
    unsigned long long Total_In_Profile_Packets;
    unsigned long long Total_In_Profile_Kbits;
    unsigned long Traffic_Profile;
    unsigned char Start_Time[14];
    unsigned char End_Time[14];
} Format_AGGR0350_t;

/********************************************************************/
/* Type Definition for the INBC0100 format of the user space.       */
/* This format is used for non-aggregate data for Inbound IP policy */
/* Can be used for either trace data or stack data                  */
/* This format uses 8-byte counters                                 */
/********************************************************************/
typedef _Packed struct Format_INBC0100
{
    unsigned char Policy_Name[128];
    unsigned char Time_Stamp[14];
    unsigned char Reserved1[2];
    unsigned long Priority;
    unsigned char Source_IP_Start[15];
    unsigned char Destination_IP_Start[15];
    unsigned char Source_IP_End[15];
    unsigned char Destination_IP_End[15];
    unsigned long Source_Port_Start;
    unsigned long Destination_Port_Start;
    unsigned long Source_Port_End;
    unsigned long Destination_Port_End;
    unsigned long Average_Connection_Rate;
    unsigned long Connection_Burst;
    unsigned long Peak_Connection_Rate;
    unsigned long Prioritized_Queue;
    unsigned long long Total_Connections_Transmitted;
    unsigned long long Total_In_Profile_Connections;
    unsigned long Duration;
    unsigned long Policy_Handle_Identifier;
} Format_INBC0100_t;

/********************************************************************/
/* Type Definition for the INBC0200 format of the user space.       */
/* This format is used for non-aggregate data for Inbound URI policy*/
/* Can be used for either trace data or stack data                  */
/* This format uses 8-byte counters                                 */
/********************************************************************/
typedef _Packed struct Format_INBC0200
{
    unsigned char Policy_Name[128];
    unsigned char Time_Stamp[14];
    unsigned char Reserved1[2];
    unsigned long Priority;
    unsigned char Destination_IP_Start[15];
    unsigned char Destination_IP_End[15];
    unsigned char Reserved2[2];
    unsigned long Destination_Port_Start;
    unsigned long Average_URI_Rate;
    unsigned long URI_Burst;
    unsigned long Peak_URI_Rate;
    unsigned long Prioritized_Queue;
    unsigned long long Total_URIs_Transmitted;
    unsigned long long Total_In_Profile_URIs;
    unsigned long Duration;
    unsigned long Policy_Handle_Identifier;
    unsigned char URI_Name[128];
} Format_INBC0200_t;


/********************************************************************/
/* Type Definition for the QTOQ0100 format of the user space.       */
/* This format is used for returning a list of all QTOQ* objects    */
/* found in QUSRSYS on the AS400                                    */
/********************************************************************/
typedef _Packed struct Format_QTOQ0100                  /*@A1A*/
{                                                       /*@A1A*/
    unsigned char Object_Name[10];                      /*@A1A*/
    unsigned char Object_Description_Text[50];          /*@A1A*/
} Format_QTOQ0100_t;                                    /*@A1A*/

/********************************************************************/
/* External Functional Prototype                                    */
/********************************************************************/
#ifdef __ILEC400__
  #pragma argument(QgyOpenListQoSMonitorData,OS,nowiden)
#endif
QTOQ_EXTERN void QgyOpenListQoSMonitorData(char *, /* reciever var    */
                                           int  *, /* reciever length */
                                           char *, /* List information*/
                                           int  *, /* num records     */
                                           char *, /* format name     */
                                           char *, /* filter structure*/
                                           char *);/* error code      */
#ifdef __ILEC400__
     #pragma argument(QtoqEndQoSMonitor,OS,nowiden)
#endif
QTOQ_EXTERN void QtoqEndQoSMonitor(void *);        /* error code      */

#ifdef __ILEC400__
     #pragma argument(QtoqStartMonitor,OS,nowiden)
#endif
QTOQ_EXTERN void QtoqStartQoSMonitor(int *,        /* wrap buffer     */
                                     int *,        /* buffer size     */
                                     int *,        /* granularity     */
                                     void * );     /* error code      */

/**********************************************************************/
/* New function for Saving/Listing QoS Monitor Data               @A1A*/
/**********************************************************************/
#ifdef __ILEC400__                                              /*@A1A*/
  #pragma argument(QtoqListSavedQoSMonitorData,OS,nowiden)      /*@A1A*/
#endif                                                          /*@A1A*/
QTOQ_EXTERN void QtoqListSavedQoSMonitorData(char *, /* reciever var    @A1A*/
                                             int  *, /* reciever length @A1A*/
                                             char *, /* List information@A1A*/
                                             int  *, /* num records     @A1A*/
                                             char *, /* format name     @A1A*/
                                             char *);/* error code      @A1A*/

#ifdef __ILEC400__                                              /*@A1A*/
  #pragma argument(QtoqSaveQoSMonitorData,OS,nowiden)           /*@A1A*/
#endif                                                          /*@A1A*/

QTOQ_EXTERN void QtoqSaveQoSMonitorData(char *,      /*retruned name    @A1A*/
                                        char *,      /* description text@A1A*/
                                        char *);     /* Error code      @A1A*/

#ifdef __ILEC400__                                              /*@A1A*/
  #pragma argument(QtoqDeleteQoSMonitorData,OS,nowiden)         /*@A1A*/
#endif                                                          /*@A1A*/

QTOQ_EXTERN void QtoqDeleteQoSMonitorData(char *,    /* Array of objects@A1A*/
                                          int  *,    /* Num objects     @A1A*/
                                          char *);   /* Error code      @A1A*/


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif /* _QTOQMONAPI_H */
