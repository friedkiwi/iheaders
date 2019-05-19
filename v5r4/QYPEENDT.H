/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QYPEENDT                                     */
/*                                                                  */
/* Descriptive Name: header file for End Transaction API            */
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
/*              used by callers of End Transaction API              */
/*                                                                  */
/* Function Prototype List: QYPEENDT                                */
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


#ifndef  __QYPEENDT_H
  #define  __QYPEENDT_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/********************************************************************/
/*  End User-defined Transaction API                                */
/********************************************************************/

#ifdef __ILEC400__

     #pragma linkage  (QYPEENDT,OS,nowiden)

#else
  extern "OS" {
#endif

void QYPEENDT
          ( char          *,     /* application ID/transaction type */
                                 /*   (20 chars)                    */
            unsigned int  *,     /* unique transaction ID           */
            void          *,     /* trace data (upto 3840 bytes)    */
            unsigned int  *,     /* length of trace data            */
            char          *,     /* TOD time of transaction start   */
                                 /*   (8 chars - set by             */
                                 /*    qypeStartTransaction API)    */
            unsigned long        /* Collection Services user data   */
                     long *,     /*   (0 to 16 8-byte counters)     */
            unsigned int  *,     /* Length of Collection Services   */
                                 /*   user data (in bytes)          */
            void          *      /* Error code                      */
          );

#ifndef __ILEC400__
             }
#endif



#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
