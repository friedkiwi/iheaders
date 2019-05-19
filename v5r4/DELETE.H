/**************************************************************************
* -delete.h                                                               *
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

#ifndef __delete_h
 #define __delete_h

#if (__OS400_TGTVRM__ >= 510)
  #if defined(__LLP64_RTBND__)
    #pragma datamodel(LLP64)
  #else
    #pragma datamodel(P128)
  #endif
  #pragma object_model(compat)
#endif


#if (__IBMCPP__ >= 400)
   void operator delete(void *) throw();
#else
   void operator delete(void *);
#endif


#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif


#endif
