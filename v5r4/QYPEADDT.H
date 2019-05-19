/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QYPEADDT                                     */
/*                                                                  */
/* Descriptive Name: header file for Add Trace Point API            */
/*                                                                  */
/* 5722-SS1  (C) Copyright IBM Corp. 2001                           */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: This file contains declarations and definitions     */
/*              used by callers of Add Trace Point API              */
/*                                                                  */
/* Function Prototype List: QYPEADDT                                */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ --------- ----------------------  */
/*      D98668.8     5D20  010905 AP:       New file                */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*  Additional notes about the Change Activity                      */
/* End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS *********************************/


#ifndef  __QYPEADDT_H
  #define  __QYPEADDT_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/********************************************************************/
/*  Add User-defined Trace Point API                                */
/********************************************************************/

#ifdef __ILEC400__

     #pragma linkage  (QYPEADDT,OS,nowiden)

#else
  extern "OS" {
#endif

void QYPEADDT
          ( char          *,     /* application ID                  */
            void          *,     /* OS event subtype                */
            void          *,     /* trace data (upto 3986 bytes)    */
            unsigned int  *,     /* length of trace data            */
            void          *      /* Error code                      */
          );

#ifndef __ILEC400__
             }
#endif



#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
