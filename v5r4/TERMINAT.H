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
#ifndef __TERMINATE_H
  #define __TERMINATE_H

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

   using std::terminate;
   using std::set_terminate;
   using std::terminate_handler;
     #ifdef __MULTI__
     using std::_set_mt_terminate;
     #endif /* __MULTI__ */

   #pragma namemangling()
#else

  extern void (*set_terminate (void(*)()))();
  extern void (*_set_mt_terminate (void(*)()))();

  extern void terminate();

#endif


#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif


#endif /* __TERMINATE_H */
