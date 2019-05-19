/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS ******************************/
/*                                                                 */
/* Header File Name: H/QPMLPMGT                                    */
/*                                                                 */
/* Descriptive Name:  DLPAR Management API header file             */
/*                                                                 */
/* Description: This file contains declarations and definitions    */
/*              used by callers of the DLPAR Management APIs.      */
/*              Declarations are included for the following APIs:  */
/*              - Retrieve Partition Information                   */
/*                (dlpar_get_info)                                 */
/*              - Modify Partition Attributes                      */
/*                (dlpar_set_resources)                            */
/*                                                                 */
/*                                                                 */
/* Structure List: dlpar_info_format1_t                            */
/*                 dlpar_info_format2_t                            */
/*                                                                 */
/* Function Prototype List: dlpar_get_info()                       */
/*                          dlpar_set_resources()                  */
/*                                                                 */
/*                                                                 */
/* Change Activity:                                                */
/*                                                                 */
/* CFD List:                                                       */
/*                                                                 */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION     */
/* ---- ------------ ----- ------ --------- ---------------------- */
/* $A0= D99641       5D30  030527 ROCH:     New Include            */
/* $A1= P45724       5D30  031031 JLV:      Updates to APIs        */
/* $LU  D99941       5P30  041012 AP:       Updates to APIs        */
/* End CFD List.                                                   */
/*                                                                 */
/*  Additional notes about the Change Activity                     */
/* End Change Activity.                                            */
/*** END HEADER FILE SPECIFICATIONS ********************************/
#ifndef  QPMLPMGT_h
#define  QPMLPMGT_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling  DLPAR MANAGEMENT APIs (QPMLPMGT).       */
/*******************************************************************/
#ifndef __ILEC400__
   extern "C" {
#endif

int dlpar_get_info( void *,   /* Receiver Variable                 */
                    int,      /* Format of data to return          */
                    int );    /* Receiver variable length          */

int dlpar_set_resources( void *, /* Configuration attribute value  */
                         int );  /* Configuration attribute ID     */

/*******************************************************************/
/* Attribute Ids for dlpar_set_resources() API                     */
/*******************************************************************/
#define DLPAR_CFG_CAPACITY          1 /* Processing Capacity       */
#define DLPAR_CFG_VAR_WEIGHT        2 /* Variable capacity weight  */
#define DLPAR_CFG_INTERACT_CAPACITY 3 /* Interactive capacity      */
#define DLPAR_CFG_VIRT_PROC         4 /* Virtual Processors        */
#define DLPAR_CFG_MEM_SIZE          5 /* Memory size               */

/*******************************************************************/
/* Data format Ids for dlpar_get_info() API                        */
/*******************************************************************/
#define dlpar_info_format1_ID  1          /* Format 1              */
#define dlpar_info_format2_ID  2          /* Format 2              */


/*******************************************************************/
/*    Flags used in lpar_flags field of dlpar_info_format1_t       */
/*******************************************************************/
#define LPAR_DEDICATED   0x01 /* 1/0 : Dedicated/Shared            */
#define LPAR_SMTBOUND    0x02 /* 1/0 : Threads bound/not bound     */


/*******************************************************************/
/*    Flags used in lpar_flags field of dlpar_info_format2_t       */
/*******************************************************************/
#define LPAR_AUTH_PIC  0x01   /* 1/0 : Yes/No Authority for        */
                              /* shared pool data                  */
#define LPAR_SMT       0x02   /* 1/0 : Hardware                    */
                              /* multi-threading Enabled/Disabled  */
#define LPAR_CAPPED    0x04   /* 1/0 : Capped/Uncapped             */


#define LPAR_NAME_LEN  256


/*******************************************************************/
/*    Return codes from dlpar_get_info() API                    @LU*/
/*******************************************************************/
#define LPAR_GET_BAD_FORMAT             -1
#define LPAR_GET_BAD_LENGTH             -2
#define LPAR_GET_BAD_ADDRESS            -3
#define LPAR_GET_UNEXPECTED_ERROR       -4
#define LPAR_GET_OMITTED_PARM           -5

/*******************************************************************/
/*    Return codes from dlpar_set_resources() API               @LU*/
/*******************************************************************/
#define LPAR_SET_SUCCESS                 0
#define LPAR_SET_BAD_PARM               -1
#define LPAR_SET_REJECTED               -2
#define LPAR_SET_HW_FAULT               -3
#define LPAR_SET_NO_AUTHORITY           -4
#define LPAR_SET_UNEXPECTED_ERROR       -5


/*******************************************************************/
/* Typedefs for data formats used in APIs.                         */
/*******************************************************************/
typedef struct dlpar_info_format1_t {

  unsigned int version;       /* Version of Dlpar_Info_Format 1    */

  char         resf1[4];      /* Reserved for allignment purposes  */
  unsigned long long max_memory;   /* Max memory size (MB)         */
  unsigned long long min_memory;   /* Min memory size (MB)         */
  unsigned long long memory_region;/* Increment (MB) of mem size   */

  unsigned long long dispatch_wheel_time; /* Hypervisor dispatch   */
                              /* wheel time (nanoseconds)          */
  unsigned int  lpar_number;  /* Assigned LPAR identifier          */
  unsigned int  lpar_flags;   /* LPAR flags (see defines above)    */

  unsigned int  max_pcpus_in_sys; /* Max physical CPUs in system   */
  unsigned int  min_cpus;         /* Min virtual CPUs              */
  unsigned int  max_cpus;         /* Max virtual CPUs              */

  unsigned int  minimum_capacity; /* Min processing capacity       */
                                  /* (1/100s of a processor)       */
  unsigned int  maximum_capacity; /* Maximum processing capacity   */
                                  /* (1/100s of a processor)       */
  unsigned int  capacity_increment; /* increment for processing    */
                                    /* capacity change             */

  unsigned int  min_inter_cap;  /* Min interactive capacity        */
                                /* (1/100s of 1 percent of total)  */
  unsigned int  max_inter_cap;  /* Max interactive capacity        */
                                /* (1/100s of 1 percent of total)  */

  unsigned short smt_threads; /* If SMT enabled, number of         */
                              /* threads per CPU                   */
  char    reserved[6];        /* Reserved for alignment purposes   */

  char    lpar_name[LPAR_NAME_LEN]; /* LPAR name assigned via HMC  */

  /* new fields                                                 @LU*/
  unsigned int  def_capacity;    /* Defined processing capacity    */
                                 /* (1/100s of a processor)        */
  unsigned int  def_cpus;        /* Defined # of virtual CPUs      */
  unsigned long long def_mem;    /* Defined memory size (MB)       */
  unsigned int  def_var_weight;  /* Defined var capacity weight    */
  unsigned int  def_inter_cap;   /* Defined interactive capacity   */
                                 /* (1/100s of 1 percent of total) */

} dlpar_info_format1_t;



typedef struct dlpar_info_format2_t {

  unsigned int version;       /* Version of Dlpar_Info_Format 2    */

  char    resf2[4];           /* Reserved for alignment purposes   */
  unsigned long long online_memory; /* Usable memory size (MB)     */
  unsigned long long tot_dispatch_time; /* Total CPU time used     */
                                        /* since IPL (nanoseconds) */
  unsigned long long tot_inter_time; /* Interactive CPU time used  */
                                     /* since IPL (nanoseconds)    */
  unsigned long long tot_inter_exceeded; /* Interactive CPU time   */
                                     /* above threshold since IPL  */
                                     /* (nanoseconds)              */
  unsigned long long pool_idle_time; /* Unused CPU time in a       */
                                     /* shared pool (nanoseconds)  */
  unsigned long long dispatch_latency; /* Max latency between      */
                              /* dispatches of this LPAR on        */
                              /* physical CPUs (nanoseconds)       */
  unsigned int  lpar_flags;   /* LPAR flags (see defines above)    */

  unsigned int  pcpus_in_sys; /* Current active physical CPUs in   */
                              /* system                            */
  unsigned int  online_cpus;  /* Current virtual CPUs in this LPAR */
  unsigned int  pcpus_in_pool;/* Current physical CPUs in a        */
                              /* shared pool                       */
  unsigned int  unalloc_capacity;  /* Unallocated processing       */
                              /* capacity in a partition group  @LU*/
                              /* (1/100s of a processor)           */

  unsigned int  entitled_capacity; /* Usable processing capacity   */
                              /* (1/100s of a processor)           */
  unsigned int  variable_weight;/* Variable capacity weight        */
  unsigned int  unalloc_weight; /* Unallocated variable capacity   */
                                /* weight in a partition group     */
  unsigned int  min_req_capacity; /* Minimum processing capacity   */
                                  /* required by OS                */
                                  /* (1/100s of a processor)       */

  unsigned int  cur_inter_cap; /* Usable interactive capacity      */
                               /* (1/100s of 1 percent of total)   */

  unsigned int  cur_slm_cap;   /* Max licensed capacity            */
                               /* (1/100s of a processor)          */
  unsigned short group_id;     /* ID of an LPAR group/aggregation  */
  unsigned short pool_id;      /* ID of a shared pool              */
  unsigned short interactive_threshold;/* Percentage of partition  */
                              /* processing capacity allowed to    */
                              /* be used by interactive workloads  */
                              /* (1/100s of 1 percent)             */

  char    reserved[2];        /* Reserved for alignment purposes@LU*/

  unsigned int unalloc_inter_cap;  /* Unallocated interactive   @LU*/
                               /* capacity in a partition group    */
                               /* (1/100s of 1 percent of total)   */

 } dlpar_info_format2_t;



#ifndef __ILEC400__
     }
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
