 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/QZD                                          */
 /*                                                                  */
 /* Descriptive Name: Common structures for component ZD (SNADS)     */
 /*                   APIs.                                          */
 /*                                                                  */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                      */
 /* All rights reserved.                                             */
 /* US Government Users Restricted Rights -                          */
 /* Use, duplication or disclosure restricted                        */
 /* by GSA ADP Schedule Contract with IBM Corp.                      */
 /*                                                                  */
 /* Licensed Materials-Property of IBM                               */
 /*                                                                  */
 /*                                                                  */
 /* Description: Contains the common parameter definitions for the   */
 /*              SNADS file server APIs - QZDCRFSO, QZDWTFSO,        */
 /*              QZDRDFSO, QZDASNID, QZDRVKID, QZDLSTID, QZDRTVID.   */
 /*                                                                  */
 /* Header Files Included: None.                                     */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List:    Qzd_FS_Name_Str                               */
 /*                    Qzd_FS_UsrSpc                                 */
 /*                                                                  */
 /* Function Prototype List: none.                                   */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* Flag Reason    Level  Date   Pgmr     Comments                   */
 /* ---- -------   ------ ------ -------- -------------------------- */
 /* $D0= D91823    3D60   941208 LAURIEW:  New include for V3R6.     */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/

#ifndef QZD_h
#define QZD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Declaration of parameters used on QZDCRFSO, QZDWTFSO, and        */
 /* QZDRDFSO.                                                        */
 /********************************************************************/
 typedef char Qzd_FS_Handle_t[32];
 typedef long int Qzd_FS_Operation_Req_t;
 typedef long int Qzd_FS_Obj_Data_Length_t;

 typedef _Packed struct Qzd_FS_Name_Struct
 {
   long int Qzd_FS_Name_Len;
   char     Qzd_FS_Name[64];
 } Qzd_FS_Name_t;

 typedef long int Qzd_FS_Resume_Pos_t;

 typedef char *Qzd_FS_Buffer_t;
 typedef long int Qzd_FS_Buffer_Len_t;
 typedef long int Qzd_FS_Buffer_Avail_t;

 /********************************************************************/
 /* Declaration of parameters used on QZDASNID, QZDRVKID, QZDLSTID,  */
 /* and QZDRTVID.                                                    */
 /********************************************************************/
 typedef char Qzd_FS_Correl_t[3000];
 typedef long int Qzd_FS_Correl_Len_t;
 typedef long int Qzd_FS_Correl_Avail_t;

 typedef _Packed struct Qzd_FS_UsrSpc_Struct
 {
   char Qzd_FS_USName[10];
   char Qzd_FS_USLib[10];
 } Qzd_FS_UsrSpc_t;

 typedef char Qzd_FS_Fmt_Name_t[8];
 typedef char Qzd_FS_Product_ID_t[7];
 typedef char Qzd_FS_Access_ID_t[8];

 /********************************************************************/
 /* Following are the valid functions that can be requested on the   */
 /* SNADS File Server APIs (Qzd_FS_Operation_Req_t).                 */
 /********************************************************************/
 #define  QZD_INIT_READ         1
 #define  QZD_READ              2
 #define  QZD_TERM_READ         3
 #define  QZD_INIT_READ_LOC     4
 #define  QZD_WRITE             5
 #define  QZD_TERM_WRITE        6
 #define  QZD_SUSPEND_WRITE     7
 #define  QZD_RESUME_WRITE      8

 /********************************************************************/
 /* Following are the valid format types for QZDLSTID                */
 /* (Qzd_FS_Fmt_Name_t).                                             */
 /********************************************************************/
 #define  QZD_ACCESS_ID_LIST_FMT        "ACID0100"

 /********************************************************************/
 /* Following are the valid file server names for the SNADS File     */
 /* Server APIs (Qzd_FS_Name_t).                                     */
 /********************************************************************/
 #define  QZD_SNADS_GEN_FILE_SERVER     "\x21\xF0\xF0\xF6"
 #define  QZD_DIA_FILE_SERVER           "\x20\xF0\xF0\xF1"
 #define  QZD_ODF_FILE_SERVER           "\x30\xF0\xF0\xF3"

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif  /* QZD_h */
