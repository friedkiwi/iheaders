#ifndef __new_h
   #define __new_h

   #pragma info(none)
   #ifndef __CHKHDR__
      #pragma report(level, E)
   #endif
   #pragma info(restore)

   #if (__OS400_TGTVRM__ >= 510)
   #  if defined(__LLP64_RTBND__)
   #    pragma datamodel(LLP64)
   #  else
   #    pragma datamodel(P128)
   #  endif
   #endif

   /********************************************************************/
   /*  <new.h> header file                                             */
   /*                                                                  */
   /*  VisualAge C++ Professional, Version 6.0                         */
   /*    Licensed Material - Property of IBM                           */
   /*                                                                  */
   /*  5801-AAR and Other Materials                                    */
   /*                                                                  */
   /*  (c) Copyright IBM Corp 1991, 2002. All rights reserved.         */
   /*                                                                  */
   /*  US Government Users Restricted Rights - Use, duplication or     */
   /*  disclosure restricted by GSA ADP Schedule Contract with         */
   /*  IBM Corp.                                                       */
   /*                                                                  */
   /********************************************************************/

#if (__IBMCPP__ >= 400) && (defined(__EXTENDED__) || defined(__ANSI__))
   #pragma namemangling(ansi)
   #pragma object_model (compat)

   #include <new>

   using std::exception;
   using std::bad_exception;
   using std::uncaught_exception;

   #ifndef __BUILD_RT__
   using std::terminate;
   using std::unexpected;
   using std::set_new_handler;
   using std::set_terminate;
   using std::set_unexpected;
   using std::terminate_handler;
   using std::unexpected_handler;
     #if defined (__MULTI__) && !defined(__TOS_AIX__) && !defined(__ia64)
     using std::_set_mt_terminate;
     using std::_set_mt_unexpected;
     #endif /* __MULTI__ */
   #endif  /* __BUILD_RT__ */

   #pragma object_model (pop)
   #pragma namemangling()
#else
   #include <stddef.h>

   #define _THROW0()
   #define _THROW1(a)

   // Definition of C++ storage management -- new & delete

   void (*set_new_handler (void(*)()))();
   #ifdef __MULTI__
      void (*_set_mt_new_handler (void(*)()))();
   #endif

   // The standard favourites

   #ifndef __DEBUG_ALLOC__
      void *operator new(size_t size);
      void *operator new(size_t size, void *location);

      void *operator new[](size_t size);
      void *operator new[](size_t size, void *location);

      void operator delete(void *location);

      void operator delete[](void *location);
   #else
      #include <stdlib.h>

      void *operator new(size_t size, const char *filename, size_t lineno);
      void *operator new(size_t size, const char *filename, size_t lineno,
                         void *location);

      void *operator new[](size_t size, const char *filename, size_t lineno);
      void *operator new[](size_t size, const char *filename, size_t lineno,
                           void *location);

      void operator delete(void *location, const char *filename, size_t lineno);

      void operator delete[](void *location, const char *filename,
                             size_t lineno);
   #endif

#endif

   #if (__OS400_TGTVRM__ >= 510)
      #pragma datamodel(pop)
   #endif

   #pragma info(none)
   #ifndef __CHKHDR__
      #pragma report(pop)
   #endif
   #pragma info(restore)

#endif /* __new_h */
