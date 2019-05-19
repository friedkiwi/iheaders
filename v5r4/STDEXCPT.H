/**************************************************************************
*                                                                         *
* <stdexcpt.h> header file                                                *
*                                                                         *
* IBM(R) VisualAge(TM) for C++ for AS/400(R), V3R6M0, V3R7M0              *
*                                                                         *
* (C) Copyright IBM Corporation, 1995, 1996 - All Rights Reserved         *
*                                                                         *
* 5716-CX4, 5716-CX5                                                      *
*                                                                         *
* Licensed Materials - Property of IBM                                    *
*                                                                         *
* US Government Users Restricted Rights - Use, duplication or disclosure  *
* restricted by GSA ADP Schedule Contract with IBM Corp.                  *
*                                                                         *
**************************************************************************/

#ifndef __STDEXCEPT_H
#define __STDEXCEPT_H

#if (__OS400_TGTVRM__ >= 510)
  #if defined(__LLP64_RTBND__)
    #pragma datamodel(LLP64)
  #else
    #pragma datamodel(P128)
  #endif
  #pragma object_model(compat)
#endif


#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   #pragma namemangling(ansi, 64000)

   #include <exception>
   #include <stdexcept>
   #include <typeinfo.h>

   using std::exception;
   using std::bad_exception;
   using std::terminate_handler;
   using std::unexpected_handler;
   using std::uncaught_exception;
   using std::logic_error;
   using std::domain_error;
   using std::invalid_argument;
   using std::length_error;
   using std::out_of_range;
   using std::runtime_error;
   using std::overflow_error;
   using std::underflow_error;
   using std::range_error;
   using std::bad_typeid;

   #ifndef __BUILD_RT__
   using std::terminate;
   using std::unexpected;
   using std::set_new_handler;
   using std::set_terminate;
   using std::set_unexpected;
   using std::terminate_handler;
   using std::unexpected_handler;
     #ifdef __MULTI__
     using std::_set_mt_terminate;
     using std::_set_mt_unexpected;
     #endif /* __MULTI__ */
   #endif  /* __BUILD_RT__ */

   #pragma namemangling()
#else

class exception {
public:
  exception(const char* exceptionName) : desc(exceptionName), alloced(0) { }
  virtual ~exception();
  virtual const char* what() const { return desc; }
protected:
  exception() : desc(0), alloced(0) { }
private:
  const char* desc;
  unsigned int alloced;
};

class logic_error : public exception {
public:
  logic_error(const char* exceptionName) : exception(exceptionName) { }
  virtual ~logic_error();
};

class bad_cast : public logic_error {
public:
  bad_cast(const char* = 0) : logic_error ("bad_cast") { }
  virtual ~bad_cast();
};

class bad_typeid: public logic_error {
public:
  bad_typeid(const char* = 0) : logic_error ("bad_typeid") { }
  virtual ~bad_typeid();
};

#endif

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif


#endif /* __STDEXCEPT_H */
