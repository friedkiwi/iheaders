 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBBRCDS                                   */
 /*                                                                */
 /* Descriptive Name: Prebring Database Records (QDBBRCDS)         */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Prebring Database Records API asynchronously  */
 /*              prebrings database physical file records into     */
 /*              main storage.                                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QDBBRCDS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9780500     4D50  990414 MJA:      New Include           */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QDBBRCDS_h
#define QDBBRCDS_h

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(P128)                                    /*@A1A*/
#endif                                                         /*@A1A*/

/*********************************************************************/
/* Prototypes for calling Bring Records API QDBBRCDS                 */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBBRCDS,OS,nowiden)
#else
     extern "OS"
#endif

void QDBBRCDS(void *,               /* File and Library name         */
              char *,               /* Member name                   */
              void *,               /* Record number array           */
              unsigned long *,      /* Number of records to prebring */
              ...);                 /* Optional Parameters:          */
                                    /*   Error code                  */

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                         /*@A1A*/

#endif
