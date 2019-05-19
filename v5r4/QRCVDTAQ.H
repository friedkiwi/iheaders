 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QRCVDTAQ                                   */
 /*                                                                */
 /* Descriptive Name: Receive Data Queue API                       */
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
 /* Description: The Receive Data Queue API receives data from the */
 /*              specified data queue.                             */
 /*                                                                */
 /* Header Files Included: h/decimal                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmhq_Sender_Information                        */
 /*                                                                */
 /* Function Prototype List: QRCVDTAQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /* $A1= D95775       4D30  971203 LIGGETT:  Add optional parm     */
 /*                                          group 2 (comments     */
 /*                                          only)                 */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QRCVDTAQ_h
 #define QRCVDTAQ_h

 #include <decimal.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QRCVDTAQ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QRCVDTAQ,OS,nowiden)
 #else
    extern "OS"
 #endif
    void QRCVDTAQ (char *,       /* Data queue name                */
                   char *,       /* Library name                   */
                   _Decimal(5,0) *, /* Length of data              */
                   void *,       /* Data                           */
                   _Decimal(5,0),/* Wait time                      */
                   ...);         /* Optional parameter group 1:
                                     char *        Key order
                                     _Decimal(3,0)  Length of key
                                                      data
                                     void *        Key data
                                     _Decimal(3,0) Length of sender
                                                      information
                                     void *        Sender
                                                      information  */
                                 /* Optional parameter group 2:
                                     char *        Remove message
                                                     option
                                     _Decimal(5,0)  Length of data
                                                      receiver
                                     void *        Error code  @A1A*/
 /******************************************************************/
 /* Type Definition for the Sender Information.                    */
 /******************************************************************/
 typedef _Packed struct Qmhq_Sender_Information
    {
       _Decimal(7,0) Bytes_Returned;
       _Decimal(7,0) Bytes_Available;
       char Job_Name[10];
       char User_Name[10];
       char Job_Number[6];
       char User_Profile_Name[10];
    } Qmhq_Sender_Information_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
