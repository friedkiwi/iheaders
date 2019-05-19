/******************************************************************/
/* 5716-CX4, 5716-CX5, 5799-GDW                                   */
/* (C) Copyright IBM Corp. 1995,1998                              */
/* ALL rights reserved.                                           */
/* US Government Users Restricted Rights-                         */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM.                            */
/******************************************************************/
#ifndef __UNEXPECTED_H
  #define __UNEXPECTED_H

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

   using std::unexpected;
   using std::set_unexpected;
   using std::unexpected_handler;
     #ifdef __MULTI__
     using std::_set_mt_unexpected;
     #endif /* __MULTI__ */

   #pragma namemangling()
#else
  extern void (*set_unexpected (void(*)()))();
  extern void (*_set_mt_unexpected (void(*)()))();

  extern void __unexpected();

  inline void unexpected()
  {
    __unexpected();
  }
#endif


#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif


#endif /* __UNEXPECTED_H */
