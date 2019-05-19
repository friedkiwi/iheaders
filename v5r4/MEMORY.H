/**************************************************************************
*                                                                         *
* <memory.h> header file                                                  *
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

#ifndef memory_h
#  define memory_h 1


#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(P128)
  #pragma object_model(compat)
#endif


#  include <string.h>


#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif

#endif
