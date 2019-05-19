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
#ifndef   __mallocinfo_h
  #define __mallocinfo_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif
/* ================================================================= */
/* Header File Name: mallocinfo.h                                    */
/*                                                                   */
/* This header contains data structures and prototypes for           */
/* _C_TS_malloc_info and _C_TS_malloc_debug                          */
/*                                                                   */
/* ================================================================= */

/* If _LONG_LONG  */
#if ((__OS400_TGTVRM__ >= 520) && defined(_LONG_LONG))
#pragma datamodel(P128)

#ifndef   __size_t
  #define __size_t
  typedef unsigned int size_t;
#endif

    /*
     * The following structure is used to return information
     * from the _C_TS_malloc_info routine.  The fields are:
     *   total_bytes        - bytes allocated from system
     *                        (high water mark)
     *   allocated_bytes    - number of allocated bytes
     *   unallocated_bytes  - number of unallocated bytes
     *   allocated_blocks   - number of allocated blocks
     *   unallocated_blocks - number of unallocated blocks
     *   requested_bytes    - bytes actually requested from malloc
     *   pad_bytes          - bytes used to pad allocation length
     *                        to a multiple of 16
     *   overhead_bytes     - bytes used for malloc overhead
     */
     typedef struct _C_mallinfo_t {
     unsigned long long int    total_bytes;
     unsigned long long int    allocated_bytes;
     unsigned long long int    unallocated_bytes;
     unsigned long long int    allocated_blocks;
     unsigned long long int    unallocated_blocks;
     unsigned long long int    requested_bytes;
     unsigned long long int    pad_bytes;
     unsigned long long int    overhead_bytes;
     } _C_mallinfo_t;

     int _C_TS_malloc_info(struct _C_mallinfo_t*, size_t);

     int _C_TS_malloc_debug(unsigned int dump_level,
                            unsigned int verify_level,
                            struct _C_mallinfo_t*, size_t);
/* The following are possible values for the dump_level parameter */
#define _C_NO_DUMPS     0
#define _C_DUMP_TOTALS  1  /* Dumps the _C_mallinfo_t structure  */
#define _C_DUMP_CHUNKS  2  /* Does a hex dump of all allocated
                              chunks of teraspace storage, this
                              is the entire 512K chunk of storage
                              that the run time allocs and carves
                              up for each malloc.                */
#define _C_DUMP_NODES   3  /* Dumps each of the allocated nodes
                              There is a node for each malloc
                              performed with the header associated
                              with that malloc                   */
#define _C_DUMP_TREE    4  /* Dumps the cartesian tree used to
                              keep track of the freed nodes      */
#define _C_DUMP_ALL     9999

/* The following are possible values for the verify_level parameter */
#define _C_NO_CHECKS       0
#define _C_CHECK_TOTALS    1
#define _C_CHECK_CHUNKS    2
#define _C_CHECK_NODES     3
#define _C_CHECK_TREE      4
#define _C_CHECK_ALL       9998
#define _C_CHECK_ALL_AND_ABORT 9999 /* Will call abort() if
                                 verification fails */

#pragma datamodel(pop)

#endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __mallocinfo_h */
