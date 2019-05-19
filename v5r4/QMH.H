 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMH                                        */
 /*                                                                */
 /* Descriptive Name: Constants for Message Handler                */
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
 /* Description: Common information that all MH APIs could use.    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: QMH_MSGT_ANY                                      */
 /*              QMH_MSGT_COMPLETE                                 */
 /*              QMH_MSGT_COPY                                     */
 /*              QMH_MSGT_DIAG                                     */
 /*              QMH_MSGT_ESCAPE                                   */
 /*              QMH_MSGT_FIRST                                    */
 /*              QMH_MSGT_INFO                                     */
 /*              QMH_MSGT_LAST                                     */
 /*              QMH_MSGT_NEXT                                     */
 /*              QMH_MSGT_INQ                                      */
 /*              QMH_MSGT_NOTIFY                                   */
 /*              QMH_MSGT_PRV                                      */
 /*              QMH_MSGT_RPY                                      */
 /*              QMH_MSGT_RQS                                      */
 /*              QMH_MSGT_STATUS                                   */
 /*              QMH_FMT_RTVM0100                                  */
 /*              QMH_FMT_RTVM0200                                  */
 /*              QMH_FMT_RCVM0100                                  */
 /*              QMH_FMT_RCVM0200                                  */
 /*              QMH_FMT_RCVM0300                                  */
 /*              QMH_MSGACT_OLD                                    */
 /*              QMH_MSGACT_REMOVE                                 */
 /*              QMH_MSGACT_SAME                                   */
 /*              QMH_ALRT_DEFER                                    */
 /*              QMH_ALRT_IMMED                                    */
 /*              QMH_ALRT_NO                                       */
 /*              QMH_ALRT_UNATTEND                                 */
 /*              QMH_MSGTV_COMPLETE                                */
 /*              QMH_MSGTV_DIAG                                    */
 /*              QMH_MSGTV_INFO                                    */
 /*              QMH_MSGTV_INQ                                     */
 /*              QMH_MSGTV_SENDER_COPY                             */
 /*              QMH_MSGTV_REQ                                     */
 /*              QMH_MSGTV_REQ_PROMPT                              */
 /*              QMH_MSGTV_NOTIFY_HANDLED                          */
 /*              QMH_MSGTV_ESC_HANDLED                             */
 /*              QmH_MSGTV_NOTIFY_NOT_HANDLED                      */
 /*              QMH_MSGTV_ESC_NOT_HANDLED                         */
 /*              QMH_MSGTV_RPLY_NOT_VAL_CHK                        */
 /*              QMH_MSGTV_RPLY_VAL_CHK                            */
 /*              QMH_MSGTV_RPLY_MSG_DEF_USED                       */
 /*              QMH_MSGTV_RPLY_SYS_DEF_USED                       */
 /*              QMH_MSGTV_RPLY_SYS_RPLYLIST                       */
 /*              QMH_INV_MSG_Q_CURRENT                             */
 /*              QMH_INV_MSG_Q_EXT                                 */
 /*              QMH_INV_MSG_Q_CMD                                 */
 /*              QMH_MOD_HANDLE                                    */
 /*              QMH_MOD_RMVLOG                                    */
 /*              QMH_MOD_REPLY                                     */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862006     3D10  940412 MOREY     New Include           */
 /* $01= P9912826     4D50  000116 LIGGETT:  Correct prefix on     */
 /*                                          QMH_MSTTV_DIAG. add   */
 /*                                          missing defintion     */
 /*                                          for RTVM0300 format   */
 /* $A1= D98055  v5r1m0.xpf 000116 LIGGETT:  Add RTVM0400 format   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef   QMH_h
  #define QMH_h

  /*******************************************************************/
  /*  Types of Messages                                              */
  /*******************************************************************/

  #define QMH_MSGT_ANY             "*ANY      "
  #define QMH_MSGT_COMPLETE        "*COMP     "
  #define QMH_MSGT_COPY            "*COPY     "
  #define QMH_MSGT_DIAG            "*DIAG     "
  #define QMH_MSGT_ESCAPE          "*ESCAPE   "
  #define QMH_MSGT_FIRST           "*FIRST    "
  #define QMH_MSGT_INFO            "*INFO     "
  #define QMH_MSGT_LAST            "*LAST     "
  #define QMH_MSGT_NEXT            "*NEXT     "
  #define QMH_MSGT_INQ             "*INQ      "
  #define QMH_MSGT_NOTIFY          "*NOTIFY   "
  #define QMH_MSGT_PRV             "*PRV      "
  #define QMH_MSGT_RPY             "*RPY      "
  #define QMH_MSGT_RQS             "*RQS      "
  #define QMH_MSGT_STATUS          "*STATUS   "

  /*  Structures returned by the QMHRTVM API                         */

  #define QMH_FMT_RTVM0100         "RTVM0100"
  #define QMH_FMT_RTVM0200         "RTVM0200"
  #define QMH_FMT_RTVM0300         "RTVM0300"                 /* @01A*/
  #define QMH_FMT_RTVM0400         "RTVM0400"                 /* @A1A*/

  /* Structures returned by the QMHRCVM or QMHRCVPM APIs             */

  #define QMH_FMT_RCVM0100         "RCVM0100"
  #define QMH_FMT_RCVM0200         "RCVM0200"
  #define QMH_FMT_RCVM0300         "RCVM0300"

  /* Message Action                                                  */

  #define QMH_MSGACT_OLD           "*OLD      "
  #define QMH_MSGACT_REMOVE        "*REMOVE   "
  #define QMH_MSGACT_SAME          "*SAME     "

  /*                                                                 */

  #define QMH_ALRT_DEFER           "*DEFER   "
  #define QMH_ALRT_IMMED           "*IMMED   "
  #define QMH_ALRT_NO              "*NO      "
  #define QMH_ALRT_UNATTEND        "*UNATTEND"

  /*                                                                 */

  #define QMH_MSGTV_COMPLETE       "01"
  #define QMH_MSGTV_DIAG           "02"                       /* @01C*/
  #define QMH_MSGTV_INFO           "04"
  #define QMH_MSGTV_INQ            "05"
  #define QMH_MSGTV_SENDER_COPY    "06"
  #define QMH_MSGTV_REQ            "08"
  #define QMH_MSGTV_REQ_PROMPT     "10"
  #define QMH_MSGTV_NOTIFY_HANDLED "14"
  #define QMH_MSGTV_ESC_HANDLED    "15"
  #define QmH_MSGTV_NOTIFY_NOT_HANDLED "16"
  #define QMH_MSGTV_ESC_NOT_HANDLED "17"
  #define QMH_MSGTV_RPLY_NOT_VAL_CHK "21"
  #define QMH_MSGTV_RPLY_VAL_CHK   "22"
  #define QMH_MSGTV_RPLY_MSG_DEF_USED "23"
  #define QMH_MSGTV_RPLY_SYS_DEF_USED "24"
  #define QMH_MSGTV_RPLY_SYS_RPLYLIST "25"

  /* NOTE: The following definition is included for compatibility    */
  /* only.  QMH_MSGTV_DIAG should be used instead.                   */

  #define QMH_MSTTV_DIAG           "02"                       /* @01M*/

  /*                                                                 */

  #define QMH_INV_MSG_Q_CURRENT    "*         "
  #define QMH_INV_MSG_Q_EXT        "*EXT      "
  #define QMH_INV_MSG_Q_CMD        "QCMD      "  /* Program QCMD     */

  /*  Change Exception Message API                                   */

  #define QMH_MOD_HANDLE           "*HANDLE   "
  #define QMH_MOD_RMVLOG           "*REMOVE   "
  #define QMH_MOD_REPLY            "*REPLY    "

#endif


