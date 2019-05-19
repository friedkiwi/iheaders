   /********************************************************************/
   /*  <cxxabi.h> header file                                          */
   /*                                                                  */
   /*  VisualAge C++, Version 6.0                                      */
   /*    Licensed Material - Property of IBM                           */
   /*                                                                  */
   /*  (c) Copyright IBM Corp 2003. All rights reserved.               */
   /*                                                                  */
   /*  US Government Users Restricted Rights - Use, duplication or     */
   /*  disclosure restricted by GSA ADP Schedule Contract with         */
   /*  IBM Corp.                                                       */
   /*                                                                  */
   /********************************************************************/

#if !defined(__CXXABI_H)
#define __CXXABI_H

#include <cstddef>
#include <typeinfo>

namespace __cxxabiv1 {

#if __TOS_OS400__
// iSeries: ptrdiff_t is declared as 4 byte int in c headers.
//   c runtime still use 16 byte pointers.
//   we have to use long long instead.
typedef long long _Ptrdiff_t;
#else
typedef std::ptrdiff_t _Ptrdiff_t;
#endif

// RTTI related declarations and function.
class __fundamental_type_info : public std::type_info
    {
public:
    ~__fundamental_type_info();
    };

class __array_type_info : public std::type_info
    {
public:
    ~__array_type_info();
    };

class __function_type_info : public std::type_info
    {
public:
    ~__function_type_info();
    };

class __enum_type_info : public std::type_info
    {
public:
    ~__enum_type_info();
    };

class __class_type_info : public std::type_info
    {
public:
    ~__class_type_info();
public: // implementation specifics
    class __PolymorphicType;
    virtual void *dynamicCast(const __PolymorphicType *,
                              const __class_type_info *,
                              const __class_type_info *,
                              bool&) const
                              { return 0; }
    };

class __si_class_type_info : public __class_type_info {
public:
    ~__si_class_type_info();
    const __class_type_info *__base_type;
public: // implementation specifics
    virtual void *dynamicCast(const __PolymorphicType *,
                              const __class_type_info *,
                              const __class_type_info *,
                              bool&) const;
    };

struct __base_class_type_info
    {
public:
//    ~__base_class_type_info();
    const __class_type_info *__base_type;
    long __offset_flags;

    enum __offset_flags_masks
        {
        __virtual_mask = 0x1,
        __public_mask = 0x2,
        __offset_shift = 8   // supplied for gcc object model compatibility
        };

    // implementation defined functions
    bool isVirtual() const { return (__offset_flags & __virtual_mask) != 0; }
    bool isPublic() const { return (__offset_flags & __public_mask) != 0; }

    // From the Itanium C++ ABI [RTTI Layout] 2.9.5/6c:
    // All but the lower 8 bits of __offset_flags are a signed offset.
    // For a non-virtual base, this is the offset in the object of the
    // base subobject.
    // For a virtual base, this is the offset in the virtual table of
    // the virtual base offset for the virtual base referenced (negative).
    _Ptrdiff_t getOffset() const { return (__offset_flags >> __offset_shift); }
    };

class __vmi_class_type_info : public __class_type_info
    {
public:
    ~__vmi_class_type_info();
    unsigned int __flags;
    unsigned int __base_count;
    __base_class_type_info __base_info[1];

    enum __flags_masks
        {
        __non_diamond_repeat_mask = 0x1,
        __diamond_shaped_mask = 0x2,

        // the following are for gcc compatibilty
        non_public_base_mask = 0x4,
        public_base_mask = 0x8,

        __flags_unknown_mask = 0x10
        };
public: // implementation specifics
    virtual void *dynamicCast(const __PolymorphicType *,
                              const __class_type_info *,
                              const __class_type_info *,
                              bool&) const;
    };

class __pbase_type_info : public std::type_info
    {
public:
    ~__pbase_type_info();
    unsigned int __flags;
    const std::type_info *__pointee;

    enum __masks
        {
        __const_mask = 0x1,
        __volatile_mask = 0x2,
        __restrict_mask = 0x4,
        __incomplete_mask = 0x8,
        __incomplete_class_mask = 0x10
        };
    };

class __pointer_type_info : public __pbase_type_info
    {
public:
    ~__pointer_type_info();
    };

class __pointer_to_member_type_info : public __pbase_type_info
    {
public:
    ~__pointer_to_member_type_info();
    const __class_type_info *__context;
    };

extern "C"
void* __dynamic_cast ( const void *sub,
                       const __class_type_info *src,
                       const __class_type_info *dst,
                       _Ptrdiff_t src2dst_offset);
/* sub: source address to be adjusted; nonnull, and since the
 *      source object is polymorphic, *(void**)sub is a virtual
 pointer.
 * src: static type of the source object.
 * dst: destination type (the "T" in "dynamic_cast<T>(v)").
 * src2dst_offset: a static hint about the location of the
 *    source subobject with respect to the complete object;
 *    special negative values are:
 *       -1: no hint
 *       -2: src is not a public base of dst
 *       -3: src is a multiple public base type but never a
 *           virtual base type
 *    otherwise, the src type is a unique public nonvirtual
 *    base type of dst at offset src2dst_offset from the
 *    origin of dst.
 */

// array allocation/deallocation
extern "C" void * __cxa_vec_new (
           size_t element_count,
           size_t element_size,
           size_t padding_size,
           void (*constructor) ( void *this_pointer),
           void (*destructor) ( void *this_pointer ) );

extern "C" void * __cxa_vec_new2 (
           size_t element_count,
           size_t element_size,
           size_t padding_size,
           void (*constructor) ( void *this_pointer ),
           void (*destructor) ( void *this_pointer ),
           void* (*alloc) ( size_t size ),
           void (*dealloc) ( void *obj ) );

extern "C" void * __cxa_vec_new3 (
           size_t element_count,
           size_t element_size,
           size_t padding_size,
           void (*constructor) ( void *this_pointer ),
           void (*destructor) ( void *this_pointer ),
           void* (*alloc) ( size_t size ),
           void (*dealloc) ( void *obj, size_t size ) );

extern "C" void __cxa_vec_ctor (
           void *array_address,
           size_t element_count,
           size_t element_size,
           void (*constructor) ( void *this_pointer ),
           void (*destructor) ( void *this_pointer ) );

extern "C" void __cxa_vec_dtor (
           void *array_address,
           size_t element_count,
           size_t element_size,
           void (*destructor) ( void *this_pointer ) );

extern "C" void __cxa_vec_cleanup (
           void *array_address,
           size_t element_count,
           size_t element_size,
           void (*destructor) ( void *this_pointer ) );

extern "C" void __cxa_vec_delete (
           void *array_address,
           size_t element_size,
           size_t padding_size,
           void (*destructor) ( void *this_pointer ) );

extern "C" void __cxa_vec_delete2 (
           void *array_address,
           size_t element_size,
           size_t padding_size,
           void (*destructor) ( void *this_pointer ),
           void (*dealloc) ( void *obj ) );

extern "C" void __cxa_vec_delete3 (
           void *array_address,
           size_t element_size,
           size_t padding_size,
           void (*destructor) ( void *this_pointer ),
           void (*dealloc) ( void *obj, size_t size ) );

extern "C" void __cxa_vec_cctor (
           void *dest_array,
           void *src_array,
           size_t element_count,
           size_t element_size,
           void (*constructor) (void *destination, void *source),
           void (*destructor) (void *));

// demangler api
extern "C" char* __cxa_demangle (const char* mangled_name,
                                 char* buf,
                                 size_t* n,
                                 int* status);
};

namespace abi = __cxxabiv1;

#endif
