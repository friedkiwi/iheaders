 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPTRTVPO                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Prompt Override API                 */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Process Commands API is used to perform       */
 /*              command analyzer processing on command strings.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpt_RTVPO_RTVP0100_t                           */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*  LEVEL                                                         */
 /*  -----                                                         */
 /*  5D10                                                          */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QPTRTVPO_h
  #define QPTRTVPO_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  /*****************************************************************/
  /* Prototype for calling API QPTRTVPO                            */
  /*****************************************************************/
  #ifdef  __ILEC400__
     #pragma linkage(QPTRTVPO,OS,nowiden)
  #else
     extern "OS"
  #endif
 void QPTRTVPO (void *,         /* Receiver variable              */
                int,            /* Length of receiver variable    */
                char *,         /* Format name                    */
                void *,         /* Command string                 */
                int,            /* Length of command string       */
                void *);        /* Error code                     */

 /******************************************************************/
 /* Type definition for the RTVP0100 format                        */
 /******************************************************************/
 typedef _Packed struct Qpt_RTVPO_RTVP0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Pmt_Ovr_Pgm_Name[10];
       char Pmt_Ovr_Pgm_Lib_Name[10];
       int  Pmt_Ovr_Pgm_Rtn_Cmd_Offset;
       int  Pmt_Ovr_Pgm_Rtn_Cmd_Length;
     /*char Pmt_Ovr_Pgm_Rtn_Cmd[];*/
    }  Qca_PCMD_CPOP0100_t;


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
