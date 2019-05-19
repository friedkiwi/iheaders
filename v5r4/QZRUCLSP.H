 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZRUCLSP                                   */
 /*                                                                */
 /* Descriptive Name: Call Service Program Procedure               */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Call Service Program procedure API allows     */
 /*              a call to be made to a procedure within a service */
 /*              program without an explicit binding.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZRUCLSP                              */
 /******************************************************************/
 /*                                                                */
 /* WARNING:    This macro/include is a CUE.                       */
 /*             This macro/include provides an interface           */
 /*             that is externally documented to customers,        */
 /*             or is function that any user could create.         */
 /*             Any changes to this part MUST be upwardly          */
 /*             compatible at compile and run-time.                */
 /*             This interface may be generated as in-line         */
 /*             code in customer programs.                         */
 /*                                                                */
 /*             CUESTATUS: OT                                      */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9728100     4D40  980515 BOUTCHER: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QZRUCLSP_h
 #define QZRUCLSP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define QZRU_PARM_VOID     0
#define QZRU_PARM_INT      1
#define QZRU_PARM_PTR      2
#define QZRU_PARM_ERRNO    3

 /******************************************************************/
 /* Prototype for calling QZRUCLSP                                 */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage(QZRUCLSP,OS,nowiden)
#else
     extern "OS"
#endif
 void QZRUCLSP (char *,           /* Qualified service program name */
                char *,           /* Exported Procedure name        */
                int,              /* Return Value Format            */
                int *,            /* Parameter Format Array         */
                int,              /* Number of Parameters           */
                char *,           /* Error Code                     */
                ...);             /* Optional parameters            */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
