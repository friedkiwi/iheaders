/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1997, 2007                                */
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
/* ----------------------------------------------------------------- */

#ifndef JNI_MD_H
#define JNI_MD_H

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif
#if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__) &&\
     !defined(__OS400_JNI_P128))
    #pragma datamodel(LLP64)
#endif

#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*
 * @(#)jni_md.h	1.10 98/09/15
 *
 * (c) Copyright Sun Microsystems Inc, 1992-1998. All rights reserved.
 *
 * This product is based in part on the work of the Independent JPEG group.
 *
 * The Java(tm) technology is owned and exclusively licensed by
 * Sun Microsystems Inc.  Java is a trademark of Sun Microsystems Inc. in
 * the U.S. and other countries.
 *
 * US Govt Users Restricted Rights - Use duplication or disclosure
 * restricted by GSA ADP Schedule Contract with IBM Corp.
 */

/******************************************************************************
 * JNI Interface changes were made in accordance with correspondence from
 * JavaSoft, and are Copyright (c) 1997 IBM Corporation.
 *****************************************************************************/

#define JNIEXPORT

#ifdef OS400_JVM_12
#define JNIIMPORT					// New for 1.2
#endif /* OS400_JVM_12 */

#define JNICALL

#define _JNI_IMPLEMENTATION_

#define __ppc

#define JNI_TYPES_ALREADY_DEFINED_IN_JNI_MD_H

typedef long jint;

#if ((__OS400_TGTVRM__ >= 530) && defined(__OS400_NATIVE_JLONG))

/* This struct is similar to the original definition of jlong. This
   is provided for API compatibility. Since a struct return value is
   returned by address, all APIs which returned an earlier jlong
   definition (with "high" and "low" fields) will need to use this
   definition in order to maintain compatibility with original
   client code. This is not needed if all clients are known and
   may be recompiled with the new definition of jlong. */
typedef struct _JavaLong {
    long long ll;
} _JavaLong;

/* jlong definition which may be used in V5R3 and later. */
typedef long long jlong;

/* jlong functions defined by Sun */
#define jlong_high(a)	((jint)((a)>>32))
#define jlong_low(a)	((jint)(a))
#define jlong_add(a, b)	((a) + (b))
#define jlong_and(a, b)	((a) & (b))
#define jlong_div(a, b)	((a) / (b))
#define jlong_mul(a, b)	((a) * (b))
#define jlong_neg(a)	(-(a))
#define jlong_not(a)	(~(a))
#define jlong_or(a, b)	((a) | (b))
#define jlong_shl(a, n)	((a) << (n))
#define jlong_shr(a, n)	((a) >> (n))
#define jlong_ushr(a, n) (((unsigned long long)(a)) >> (n))
#define jlong_sub(a, b)	((a) - (b))
#define jlong_xor(a, b)	((a) ^ (b))
#define jlong_rem(a,b)	((a) % (b))

/* comparison operators */
#define jlong_ltz(ll)	((ll)<0)
#define jlong_gez(ll)	((ll)>=0)
#define jlong_gtz(ll)	((ll)>0)
#define jlong_eqz(a)	((a) == 0)
#define jlong_eq(a, b)	((a) == (b))
#define jlong_ne(a,b)	((a) != (b))
#define jlong_ge(a,b)	((a) >= (b))
#define jlong_le(a,b)	((a) <= (b))
#define jlong_lt(a,b)	((a) < (b))
#define jlong_gt(a,b)	((a) > (b))

#define jlong_zero()	((jlong) 0)
#define jlong_one()	((jlong) 1)
#define jlong_minus_one() ((jlong) -1)

#define jlong_to_ptr(a) ((void *__ptr64)(a))
#define ptr_to_jlong(a) ((jlong)(void *__ptr64)(a))
#define jint_to_jlong(a)	((jlong)(a))
#define jlong_to_jint(a)	((jint)(a))

#define jlong_to_int(a)     ((int)(a))
#define int_to_jlong(a)     ((jlong)(a))
#define jlong_to_uint(a)    ((unsigned int)(a))
#define uint_to_jlong(a)    ((jlong)(a))
#define jlong_to_size(a)    ((size_t)(a))
#define size_to_jlong(a)    ((jlong)(a))
#define long_to_jlong(a)    ((jlong)(a))
#define jlong_to_long(_jl)     ((long)_jl)
#define longlong_to_jlong(a)   ((jlong)(a))
#define jlong_to_longlong(_jl) ((long long)_jl)

/* get jlong value from arbitrary pointer */
#define get_jlong(_p)       (*((jlong*)p))

/* Additional macros provided for compatibility with
   original jlong definition. */
#define JavaL2I(_ll,_i) _i = (int)_ll;
#define JavaI2L(_i,_ll) _ll = (long long)_i;
#define JavaL2HL(_ll,_hi,_lo) _hi = (int)(_ll >> 32); _lo = (int)_ll;
#define JavaHL2L(_hi,_lo,_ll) _ll = (((long long)_hi) << 32) + (long long)_lo;


#else /* V5R2M0 and prior or not __OS400_NATIVE_JLONG */

#ifdef __OS400_USE_LONGLONG_JAVALONG	/* @A2A */
/* A hybrid representation of jlong which is still implemented
   as a C struct. Not recommended. */
typedef struct JavaLong0 {
    signed int   high;
    unsigned int low;
} JavaLong0;			/* @A2A */

typedef union JavaLong {
    long long          ll;
    unsigned long long unsigned_ll;
    JavaLong0          jl;
} JavaLong;			/* @A2A */

typedef JavaLong jlong;		/* @A2A */

/* jlong functions defined by Sun */ /* @A2A */
#define jlong_high(a)	(a.jl.high)
#define jlong_low(a)	(a.jl.low)

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_add)
#endif
static jlong jlong_add(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll + b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_sub)
#endif
static jlong jlong_sub(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll - b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_mul)
#endif
static jlong jlong_mul(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll * b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_div)
#endif
static jlong jlong_div(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll / b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_rem)
#endif
static jlong jlong_rem(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll % b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_neg)
#endif
static jlong jlong_neg(jlong a) {
    jlong jl;
    jl.ll = -a.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_not)
#endif
static jlong jlong_not(jlong a) {
    jlong jl;
    jl.ll = ~a.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_and)
#endif
static jlong jlong_and(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll & b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_or)
#endif
static jlong jlong_or(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll | b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_xor)
#endif
static jlong jlong_xor(jlong a, jlong b) {
    jlong jl;
    jl.ll = a.ll ^ b.ll;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_shl)
#endif
static jlong jlong_shl(jlong a, int n) {
    jlong jl;
    jl.ll = a.ll << n;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_shr)
#endif
static jlong jlong_shr(jlong a, int n) {
    jlong jl;
    jl.ll = a.ll >> n;
    return jl;
}


#ifdef __cplusplus
inline
#else
#pragma inline(jlong_ushr)
#endif
static jlong jlong_ushr(jlong a, int n) {
    jlong jl;
    jl.unsigned_ll = a.unsigned_ll >> n;
    return jl;
}


/* comparison operators */
#define jlong_ltz(a)	((a.ll) < 0)
#define jlong_gez(a)	((a.ll) >= 0)
#define jlong_gtz(a)	((a.ll) > 0)
#define jlong_eqz(a)	((a.ll) == 0)
#define jlong_eq(a, b)	((a.ll) == (b.ll))
#define jlong_ne(a, b)	((a.ll) != (b.ll))
#define jlong_ge(a, b)	((a.ll) >= (b.ll))
#define jlong_le(a, b)	((a.ll) <= (b.ll))
#define jlong_lt(a, b)	((a.ll) < (b.ll))
#define jlong_gt(a, b)	((a.ll) > (b.ll))

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_zero)
#endif
static jlong jlong_zero() {
    jlong jl;
    jl.ll = (long long) 0;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_one)
#endif
static jlong jlong_one() {
    jlong jl;
    jl.ll = (long long) 1;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(jlong_minus_one)
#endif
static jlong jlong_minus_one() {
    jlong jl;
    jl.ll = (long long) -1;
    return jl;
}

#define jlong_to_ptr(a) ((void *__ptr64)(a.ll))

#ifdef __cplusplus
inline
#else
#pragma inline(ptr_to_jlong)
#endif
static jlong ptr_to_jlong(void* a) {
    jlong ajlong;
    ajlong.ll = (long long)((void *__ptr64)(a));
    return ajlong;
}


/* Useful on machines where jlong and jdouble have different
   endianness. */
#define jlong_to_jdouble_bits(a)
#define jdouble_to_jlong_bits(a)


#define jlong_to_jint(a)	  ((jint)(a.ll))
#define jlong_to_int(a)           ((int)(a.ll))
#define jlong_to_uint(a)          ((unsigned int)(a.ll))
#define jlong_to_size(a)          ((size_t)(a.ll))
#define jlong_to_long(_jl)        ((long)(_jl.ll))
#define jlong_to_longlong(_jl)    (_jl.ll)


#ifdef __cplusplus
inline
#else
#pragma inline(jint_to_jlong)
#endif
static jlong jint_to_jlong(jint ji) {
    jlong jl;
    jl.ll = (long long) ji;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(int_to_jlong)
#endif
static jlong int_to_jlong(int i) {
    jlong jl;
    jl.ll = (long long) i;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(uint_to_jlong)
#endif
static jlong uint_to_jlong(unsigned int u) {
    jlong jl;
    jl.ll = (long long) u;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(size_to_jlong)
#endif
static jlong size_to_jlong(size_t s) {
    jlong jl;
    jl.ll = (long long) s;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(long_to_jlong)
#endif
static jlong long_to_jlong(long l) {
    jlong jl;
    jl.ll = (long long) l;
    return jl;
}

#ifdef __cplusplus
inline
#else
#pragma inline(longlong_to_jlong)
#endif
static jlong longlong_to_jlong(long long ll) {
    jlong jl;
    jl.ll = ll;
    return jl;
}

/* void* p -- points to an arbitrary location which is to be
 returned as a jlong */
#ifdef __cplusplus
inline
#else
#pragma inline(get_jlong)
#endif
static jlong get_jlong(void* p) {
    jlong* jl_ptr = (jlong*) p;
    return *jl_ptr;
}

#else /* not __OS400_USE_LONGLONG_JAVALONG */ /* @A2A */

/* original definition */
typedef struct JavaLong {
    signed   int high;
    unsigned int low;
} JavaLong;
typedef JavaLong jlong;

#define JavaL2I(x,y) y = x.low;
#define JavaI2L(x,y) y.high = (x<0?-1:0); y.low = x;
#define JavaL2HL(x,y,z) y = x.high; z = x.low;
#define JavaHL2L(x,y,z) z.high = x; z.low = y;

#endif /* end not __OS400_USE_LONGLONG_JAVALONG */ /* @A2A */

#endif /* end V5R2M0 and prior or not __OS400_NATIVE_JLONG */

/* <Platform specific typedefs moved from jni.h for V5R2> */

typedef signed char jbyte;

typedef unsigned char	jboolean;
typedef unsigned short	jchar;
typedef short		jshort;
typedef float 		jfloat;
typedef double  	jdouble;

typedef jint            jsize;

/* The typedefs of all reference types have changed to be integer types
 * for OS/400.  This change is transparent to the C programmer;
 * the C++ programmer loses some compile-time subtyping conformance
 * validation, but that is the only impact.
 */
typedef int  jobject;
typedef int  jclass;
typedef int  jthrowable;
typedef int  jstring;
typedef int  jarray;
typedef int  jbooleanArray;
typedef int  jbyteArray;
typedef int  jcharArray;
typedef int  jshortArray;
typedef int  jintArray;
typedef int  jlongArray;
typedef int  jfloatArray;
typedef int  jdoubleArray;
typedef int  jobjectArray;

typedef jobject jweak;

typedef union jvalue {
    jboolean z;
    jbyte    b;
    jchar    c;
    jshort   s;
    jint     i;
    jlong    j;
    jfloat   f;
    jdouble  d;
    jobject  l;
} jvalue;

/* field and method ID values are changed to integers in the OS/400 version */
typedef int jfieldID;
typedef int jmethodID;

typedef enum _jobjectType {
    JNIInvalidRefType    = 0,
    JNILocalRefType      = 1,
    JNIGlobalRefType     = 2,
    JNIWeakGlobalRefType = 3
} jobjectRefType;

/* </Platform specific typedefs moved from jni.h for V5R2> */

/* <Platform specific functions moved from jni.h for V5R2 */

/* Function prototypes for OS/400 specific extensions to JNI.  These
 * functions are exported from the QjvaJNI service program which is
 * in the QJAVA library.
 */

/* JNINativeInterface_ and JNIEnv_ are defined in jni.h */

struct JNINativeInterface_;

struct JNIEnv_;

#ifdef __cplusplus
typedef JNIEnv_ JNIEnv;
#else
typedef const struct JNINativeInterface_ *JNIEnv;
#endif

#ifdef __cplusplus
extern "C"
#endif
void GetPointer(JNIEnv *env, jobject obj, void *ptr);

#ifdef __cplusplus
extern "C"
#endif
void SetPointer(JNIEnv *env, jobject obj, void *ptr);

#ifdef __cplusplus
extern "C"
#endif
/* convert a File Descriptor extracted from the Java Virtual machine to
   a File Descriptor usable in an ILE program */
int ConvertJvmFdToIleFd(JNIEnv *env, int jvmFd);
#if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__) &&\
     !defined(__OS400_JNI_P128))
    #define ConvertJvmAddressToTeraspace ConvertJvmAddressToTeraspace_Ts
    #define ConvertTeraspaceToJvmAddress ConvertTeraspaceToJvmAddress_Ts
#endif

#ifdef __cplusplus
extern "C"
#endif
/* Convert a JVM address to its corresponding Teraspace address */
void* ConvertJvmAddressToTeraspace(JNIEnv *env, jlong jvmAddr);

#ifdef __cplusplus
extern "C"
#endif
/* Convert a teraspace address to its corresponding Jvm address. If the
   teraspace address does not point to Jvm accessable storage, then the
   resulting jlong value is -1 */
jlong ConvertTeraspaceToJvmAddress(JNIEnv *env, void* tsAddr);

#ifdef __cplusplus
extern "C"
#endif
/* Print out the help text for 'java -X' */
int GetXUsage(JNIEnv *env, char *filename);

#define API_NOT_SUPPORTED -99

#ifdef __ILEC400__
  #pragma checkout(resume)
#endif

#if ((__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__) &&\
     !defined(__OS400_JNI_P128))
    #pragma datamodel(pop)
#endif
#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif /*JNI_MD_H*/
