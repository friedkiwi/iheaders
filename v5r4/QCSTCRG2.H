 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCSTCRG2                                   */
 /*                                                                */
 /* Descriptive Name: Cluster Resource Group APIs.                 */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QCSTCRG2 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qcst                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  None                                          */
 /*                                                                */
 /* Function Prototype List: QcstInitiateSwitchOver                */
 /*                          QcstStartClusterResourceGroup         */
 /*                          QcstEndClusterResourceGroup           */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9570800     4D40  971205 ROCH:     New Include           */
 /* $A1= D9821201     5D10  991107 gchaney:  Teraspace stage 2     */
 /* $A2= D9786905     5D10  991117 ROCH:     Added 2 APIs          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QCSTCRGM2_h
 #define QCSTCRGM2_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qus.h>
 #include <qcst.h>

 /******************************************************************/
 /* Prototype for calling Initiate SwitchOver API.                 */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstInitiateSwitchOver,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstInitiateSwitchOver
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Exit Program Data          */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Start Cluster Resource Group API.        */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstStartClusterResourceGroup,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstStartClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Exit Program Data          */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling End Cluster Resource Group API.          */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstEndClusterResourceGroup,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstEndClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Exit Program Data          */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif

