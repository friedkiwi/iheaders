/*** START HEADER FILE SPECIFICATIONS ***************************/
/*                                                              */
/* Header File Name: H/QSPCHGOQ                                 */
/*                                                              */
/* Descriptive Name: Change Output Queue.                       */
/*                                                              */
/* 5716-SS1, 5722-SS1 (C) Copyright IBM Corp. 1996,2001         */
/* All rights reserved.                                         */
/* US Government Users Restricted Rights -                      */
/* Use, duplication or disclosure restricted                    */
/* by GSA ADP Schedule Contract with IBM Corp.                  */
/*                                                              */
/* Licensed Materials-Property of IBM                           */
/*                                                              */
/*                                                              */
/* Description: The Change Output Queue API changes various     */
/*              attributes of the output queue,  including      */
/*              the user defined object, user defined data,     */
/*              user defined options, and user defined object.  */
/*                                                              */
/*                                                              */
/* Header Files Included: None.                                 */
/*                                                              */
/* Macros List: None.                                           */
/*                                                              */
/* Structure List: None.                                        */
/*                                                              */
/* Function Prototype List: QSPCHGOQ.                           */
/*                                                              */
/* Change Activity:                                             */
/*                                                              */
/* CFD List:                                                    */
/*                                                              */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ ----- ------ --------- --------------------*/
/* $A0= D9171000     3D60  950111 JCL :     Print openness      */
/* $A1= D98212.4     5D10  991228 GCHANEY:Compiler directive for*/
/*                                        16 byte pointers.     */
/*                                                              */
/* End CFD List.                                                */
/*                                                              */
/*  Additional notes about the Change Activity                  */
/* End Change Activity.                                         */
/*** END HEADER FILE SPECIFICATIONS *****************************/

 #ifndef QSPCHGOQ_h
 #define QSPCHGOQ_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPCHGOQ,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Change Output Queue API                   */
 /*  QSPCHGOQ                                                    */
 /****************************************************************/
 void QSPCHGOQ (void *,          /* Qualified output queue name  */
                void *,          /* Changes                      */
                void *);         /* Error code                   */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
