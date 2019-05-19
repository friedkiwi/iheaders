/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:  lber.h                                        */
/*                                                                   */
/*  Descriptive Name:  lber header file                              */
/*                                                                   */
/*  Description:  Defines variables, structures, and function        */
/*                prototypes for ldap.                               */
/*                                                                   */
/* 5769-SS1,5722-SS1 (C) COPYRIGHT IBM CORP. 1997,2001               */
/* ALL RIGHTS RESERVED.                                              */
/* US GOVERNMENT USERS RESTRICTED RIGHTS -                           */
/* USE, DUPLICATION OR DISCLOSURE RESTRICTED                         */
/* BY GSA ADP SCHEDULE CONTRACT WITH IBM CORP.                       */
/*                                                                   */
/* LICENSED MATERIALS-PROPERTY OF IBM                                */
/*                                                                   */
/* Copyright (c) 1990 Regents of the University of Michigan.         */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms are permitted   */
/* provided that this notice is preserved and that due credit is     */
/* given to the University of Michigan at Ann Arbor. The name of the */
/* University may not be used to endorse or promote products         */
/* derived from this software without specific prior written         */
/* permission.  This software is provided ``as is'' without express  */
/* or implied warranty.                                              */
/*                                                                   */
/*  Header Files Included : None                                     */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List :                                                       */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D9543.1      4D30  070997  ROCH      New Include            */
/*  $A1= D98212.2    v5r1m0 010300 gchaney:  Teraspace stage 2       */
/*  $A2= P9931180    v5r1m0 082800  ROCH      New Ber functions/     */
/*                                             OIDs                  */
/*  $A3= D98606      v5r2m0 123101  ROCH      v5r2 changes           */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _LBER_H
#define _LBER_H


#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(P128)                                  /* @A1A*/
#endif                                                       /* @A1A*/

/* Start of Changes @A2A */
typedef long ber_slen_t;
typedef unsigned long ber_len_t;
typedef unsigned long ber_tag_t;
typedef int ber_int_t;
typedef unsigned int ber_uint_t;
/* end of typedefs added under change flag @A2          */

/* structure for returning a sequence of octet strings + length */
struct berval {
	unsigned long	bv_len;
	char		*bv_val;
};

/*
 * structure representing a Ber element
 */
typedef struct berelement BerElement;


#define NULLBER	((BerElement *) 0)

/* Start of Changes @A2A */

#define LBER_ERROR              ((ber_tag_t)-1)
#define LBER_DEFAULT            ((ber_tag_t)-1)

/* New ber functions used in conjunction with Extended Operations */
void ber_bvfree ( struct berval *bv );
void ber_bvecfree ( struct berval **bv );
struct berval *ber_bvdup ( const struct berval *bv );
void ber_free ( BerElement *ber, int freebuf );
BerElement *ber_alloc_t ( int options );
int ber_printf ( BerElement *ber, const char *fmt, ... );
int ber_flatten ( const BerElement *ber, struct berval **bv );
void ber_init ( BerElement *ber, int options );
BerElement *ber_init2 ( const struct berval *bv);
ber_tag_t ber_scanf ( BerElement *ber, const char *fmt, ... );
ber_tag_t ber_get_tag ( BerElement *ber );
ber_tag_t ber_peek_tag ( BerElement *ber, ber_len_t *len );
ber_tag_t ber_skip_tag ( BerElement *ber, ber_len_t *len );
ber_tag_t ber_first_element ( BerElement *ber,
	ber_len_t *len, char **last );
ber_tag_t ber_next_element ( BerElement *ber,
	ber_len_t *len, char *last );
int ber_skip_element ( BerElement *ber);

/* end api prototypes added under change flag @A2          */

/* Start of Changes @A3A */

#define LBER_BOOLEAN            0x01L
#define LBER_INTEGER            0x02L
#define LBER_BITSTRING          0x03L
#define LBER_OCTETSTRING        0x04L
#define LBER_NULL               0x05L
#define LBER_ENUMERATED         0x0aL
#define LBER_SEQUENCE           0x30L   /* constructed */
#define LBER_SET                0x31L   /* constructed */

#define LBER_USE_DER            0x01
#define LBER_USE_INDEFINITE_LEN 0x02
#define LBER_TRANSLATE_STRINGS  0x04

/* End of Changes @A3A */

#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(pop)                                   /* @A1A*/
#endif                                                       /* @A1A*/

#endif /* _LBER_H */
