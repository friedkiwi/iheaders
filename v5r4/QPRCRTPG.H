 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPRCRTPG                                   */
 /*                                                                */
 /* Descriptive Name: Create Program API                           */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Create Program API converts the symbolic      */
 /*              representation of a machine interface program into*/
 /*              an OPM program object.                            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QPRCRTPG                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D            3D10  940403 SHAWNB:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QPRCRTPG_h
 #define QPRCRTPG_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Create Program API QPRCRTPG              */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QPRCRTPG,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QPRCRTPG (void *,          /* Intermediate representation of */
                                 /* program                        */
                int,             /* Length of intermediate         */
                                 /* representation of program      */
                void *,          /* Qulaified program name         */
                void *,          /* Program text                   */
                void *,          /* Qualified source file name     */
                char *,          /* Source file member information */
                void *,          /* Source file last changed date  */
                                 /* and time information           */
                void *,          /* Qualified printer file name    */
                int,             /* Starting page number           */
                char *,          /* Public authority               */
                void *,          /* Option template                */
                int,             /* Number of option template      */
                                 /* entries                        */
                ...);            /* Optional Parameter:
                                       Error code                  */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
