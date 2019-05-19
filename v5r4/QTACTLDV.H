 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTACTLDV                                   */
 /*                                                                */
 /* Descriptive Name: Control Device QTACTLDV                      */
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
 /* Description: The Control Device (QTACTLDV) API                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTACTLDV                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D95871       4D40  980728 ROCH      Creation              */
 /* $01  P3682940     4D40  981104 ROCH      Fix typedef, add      */
 /*                                          #defines.             */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTACTLDV_h
 #define QTACTLDV_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Control Device               (QTACTLDV)  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTACTLDV,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTACTLDV (char *,            /* Device name                    */
                int,               /* Requested function             */
                char *,            /* Send buffer                    */
                int,               /* Send buffer length             */
                char *,            /* Receive buffer                 */
                int,               /* Receive buffer length          */
                char *,            /* Command format                 */
                void *,            /* Command data                   */
                int,               /* Command data length            */
                void *);           /* Error code                     */


 /******************************************************************/
 /* Type Definition for the CTLD0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_CTLD0100
    {
       int  Data_transfer_direction;
       int  Requested_transfer_length;
       int  Ignore_length_errors;
       int  Command_timeout;
       int  Type_of_command;
       int  Offset_to_command_string;
       int  Length_of_command_string;
       int  Reserved1;

    } Qta_CTLD0100_t;

 /******************************************************************/
 /* Constants for requested function                               */
 /******************************************************************/

 #define FUNOPEN   1
 #define FUNCMD    2
 #define FUNCLOS   3

 /******************************************************************/
 /* Constants for command format                                   */
 /******************************************************************/

 #define CTLD0100 "CTLD0100"

 /******************************************************************/
 /* Constants for data transfer direction                          */
 /******************************************************************/

 #define  XFRNONE  0                       /* no data transfer       */
 #define  XFRRECV  1                       /* recv data from device  */
 #define  XFRSEND  2                       /* send data to   device  */

 /******************************************************************/
 /* Constants for ignore length errors                             */
 /******************************************************************/

 #define  RPTLERR  0                       /* report length errors   */
 #define  IGNLERR  1                       /* ignore length errors   */

 /******************************************************************/
 /* Constants for type of command                                  */
 /******************************************************************/

 #define  CMDSCSI  0                       /* SCSI command           */
 #define  CMDRESET 1                       /* Reset device           */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
