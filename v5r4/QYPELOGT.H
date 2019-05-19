/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QYPELOGT                                     */
/*                                                                  */
/* Descriptive Name: header file for Log Transaction API            */
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
/*              used by callers of Log Transaction API              */
/*                                                                  */
/* Function Prototype List: QYPELOGT                                */
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


#ifndef  __QYPELOGT_H
  #define  __QYPELOGT_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/********************************************************************/
/*  Log User-defined Transaction API                                */
/********************************************************************/

#ifdef __ILEC400__

     #pragma linkage  (QYPELOGT,OS,nowiden)

#else
  extern "OS" {
#endif

void QYPELOGT
          ( char          *,     /* application ID/transaction type */
                                 /*   (20 chars)                    */
            unsigned int  *,     /* unique transaction ID           */
            void          *,     /* trace data (upto 3840 bytes)    */
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
