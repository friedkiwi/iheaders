 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWVOLACT                                   */
 /*                                                                */
 /* Descriptive Name: Open List of activations                     */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1996,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This include is a CUE.                       */
 /*                   This include provides an interface           */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create    */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /******************************************************************/
 /*                                                                */
 /* Description: The QWVOLACT API generates a list of activations. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QWVOLACT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95197       4D20  970603 MTN       New Include           */
 /* $B1= D99214       5D30  021030 AARONA    64-bit marks          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWVOLACT_h
 #define QWVOLACT_h

 /******************************************************************/
 /* Prototype for call to QWVOLACT API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWVOLACT,OS,nowiden)
 #else
       extern "OS"
 #endif

 #if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
 #endif

 void   QWVOLACT (void *,      /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   char *,     /* Format name                       */
                   int   ,     /* Activation group number           */
                   char *,     /* Qualified job name                */
                   char *,     /* Internal job identifier           */
                   void *      /* Error code                        */
#if (__OS400_TGTVRM__ >= 530)
                   , ...       /* Variable portion of arg list      */
#endif
                  );

 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qwv_Olact_ListInfo
   {
    int  Total_Records;
    int  Records_Retd;
    char Request_Handle[4];
    int  Record_Length;
    char Info_Complete[1];
    char Date_Time[13];
    char List_Status[1];
    char Reserved1[1];
    int  Info_Length;
    int  First_Record;
    char Reserved2[40];
    } Qwv_Olact_ListInfo_t;

 /*****************************************************************/
 /* Type Definition for the Receiver Variable                     */
 /*   NOTE:  This definition the RACT0100 format.                 */
 /*****************************************************************/
 typedef _Packed struct Qwv_Olact_Ract0100
 {
    char  AGP_Name[10];
    char  reserved1[6];
    int   AGP_Number;
    char  reserved2[4];
    int   Activation_Number;
    int   Static_Size;
    char  Program_Name[10];
    char  Program_Lib[10];
    char  Program_Type[1];
    char  Reserved[11];
/* If compiled with C++ _LONG_LONG must be defined to get long long interface */
/* The long long interface is available in the ILE C Compiler by default in   */
/* for target releases >= v5r3m0.                                             */
#if ((__OS400_TGTVRM__ >= 530) && \
     ((! defined(__cplusplus)) || defined(_LONG_LONG)))
    unsigned long long AGP_Number_Long;
    unsigned long long Activation_Number_Long;
#endif
  } Qwv_Olact_Ract0100_t;

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif

 #endif
