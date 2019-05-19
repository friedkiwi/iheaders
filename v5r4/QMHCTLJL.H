 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHCTLJL                                   */
 /*                                                                */
 /* Descriptive Name: Control Job Log Output.                      */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Control Job Log Output API controls the       */
 /*              production of a job log when the related job ends */
 /*              or when the job message queue becomes full and    */
 /*              the print-wrap option is in effect for the job.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_CTLJ0100_t                                 */
 /*                 Qmh_Msg_File_Element_t                         */
 /*                                                                */
 /* Function Prototype List: QMHCTLJL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91411       3D10  940408 FBENSON   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHCTLJL_h
 #define QMHCTLJL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 #ifdef __ILEC400__
      #pragma linkage (QMHCTLJL,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling Message Handler API QMHCTLJL             */
 /******************************************************************/
 void QMHCTLJL (void *,          /* Output file name structure     */
                void *,          /* Output file name structure fmt */
                void *,          /* Message filter array           */
                int,             /* Number of message filter array
                                    element                        */
                void *,          /* Qualified error message queue  */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the Output file names structure parameter, */
 /* Format CTLJ0100.                                               */
 /******************************************************************/
 typedef _Packed struct Qmh_CTLJ0100
 {
    int  Struct_Length;         /* Structure length                */
    char Primary_Outfile[20];   /* Qualified primary file name     */
    char Primary_Member[10];    /* Primary file member name        */
    char Secondary_Outfile[20]; /* Qualified secondary file name   */
    char Secondary_Member[10];  /* Secondary file member name      */
    char Member_Replace[1];     /* Member replace option           */
 } Qmh_CTLJ0100_t;

 /******************************************************************/
 /* Type Definition for the structure of an Message Filter Array   */
 /* Element.                                                       */
 /******************************************************************/
 typedef _Packed struct Qmh_Msg_File_Element
 {
    char Reserved1[4];          /* Reserved field                  */
    int  Msg_Sev;               /* Message severity                */
    char Msg_Type[10];          /* Message type                    */
    char Msg_Id[7];             /* Message ID                      */
    char Reserved2[3];          /* Reserved field                  */
 } Qmh_Msg_File_Element_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
