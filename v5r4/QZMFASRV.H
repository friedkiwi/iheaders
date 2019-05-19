#ifndef _QZMFASRV_H
   #define _QZMFASRV_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QZMFASRV                                      */
/*                                                                   */
/* Descriptive Name: Mail Server Framework (MSF) APIs.               */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Include header file containing the structure         */
/*              definitions and prototypes for MSF APIs of QZMFASRV  */
/*              Service Program.                                     */
/*                                                                   */
/* Header Files Included:                                            */
/*                        H/QZMF                                     */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                  Qzmf_ADDC0100_t                                  */
/*                  Qzmf_DLTC0100_t                                  */
/*                  Qzmf_LSTC0100_t                                  */
/*                  Qzmf_RCHL0100_t                                  */
/*                  Qzmf_EXCH0100_t                                  */
/*                  Qzmf_CRTA0100_t                                  */
/*                                                                   */
/*                  Qzmf_Rcpt_Hist0100_Msg_Desc_t                    */
/*                  Qzmf_Ext_Hist0100_Msg_Desc_t                     */
/*                  Qzmf_Crtn_Attr0100_Msg_Desc_t                    */
/*                                                                   */
/*                  Qzmf_LSTL0100_t                                  */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*                          QzmfAddMailCfg                           */
/*                          QzmfRmvMailCfg                           */
/*                          QzmfLstMailCfg                           */
/*                          QzmfCrtMailMsg                           */
/*                          QzmfRtvMailMsg                           */
/*                          QzmfChgMailMsg                           */
/*                          QzmfRsvMailMsgId                         */
/*                          QzmfQryMailMsgId                         */
/*                          QzmfRmvRsvMailMsgId                      */
/*                          QzmfCrtCmpMailMsg                        */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------   ------------------------ */
/* $A0= D9129400     3D10  940304 BANER :   New Include for V3R1     */
/* $A1= D91597.1     3D60  941128 BANER :   extern "C" Linkage Dirct */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#include <qzmf.h>      /* MSF structures and constant defines */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*********************************************************************/
/*  Type Definition for the ADDC0100 Format                          */
/*********************************************************************/

typedef _Packed struct Qzmf_ADDC0100
{
   long int                  Param_List_Length;
   Qzmf_Type_Group_t         Type_Group;
   Qzmf_Type_Value_t         Type_Value;
   Qzmf_Type_Name_t          Type_Name;
   char                      Reserved[2];
   Qzmf_CCSID_t              CCSID;
   char                      Type_Text[100];
} Qzmf_ADDC0100_t;


/*********************************************************************/
/*  Type Definition for the DLTC0100 Format                          */
/*********************************************************************/

typedef _Packed struct Qzmf_DLTC0100
{
   long int                  Param_List_Length;
   Qzmf_Type_Group_t         Type_Group;
   Qzmf_Type_Value_t         Type_Value;
   Qzmf_Type_Name_t          Type_Name;
} Qzmf_DLTC0100_t;


/*********************************************************************/
/*  Type Definition for the LSTC0100 Format                          */
/*********************************************************************/

typedef _Packed struct Qzmf_LSTC0100
{
   long int                  Sel_List_Length;
   Qzmf_Type_Group_t         Type_Group;
   Qzmf_Type_Value_t         Type_Value;
   Qzmf_Type_Name_t          Type_Name;
} Qzmf_LSTC0100_t;



/*********************************************************************/
/* Type Definition for the RCHL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_RCHL0100
{
   long int                  Entry_Length;
   long int                  SPIN_Displacement;
   long int                  SPIN_Length;
   long int                  Recipient_Displacement;
   long int                  Addr_Length;
   Qzmf_Type_Value_t         Addr_Type;
   Qzmf_CCSID_t              CCSID;
   Qzmf_Type_Value_t         Msg_Type;
   long int                  Status;
   long int                  Dist_Type;
   long int                  Unique_Id;
   long int                  Recipient_Status_Flag;
   long int                  Parent_Unique_Id;
   long int                  Reserved;
 /*char                      Recipient_Addr[];*/   /* varying length */
 /*char                      SPIN[];*/             /* varying length */
} Qzmf_RCHL0100_t;


/*********************************************************************/
/* Type Definition for the EXCH0100 Format                           */
/*********************************************************************/

typedef _Packed struct Qzmf_EXCH0100
{
   Qzmf_Exit_Point_t         MSF_Exit_Point;
   Qzmf_Exit_Pgm_Lib_Name_t  MSF_Exit_Program;
   long int                  MSF_Exit_Program_Num;
   Qzmf_System_Timestamp_t   Exit_Call_Tmstmp;
   Qzmf_System_Timestamp_t   Exit_Rtn_Tmstmp;
   long int                  Exit_Program_Retcode;
   char                      Change_Indctr;
   char                      Reserved[3];
} Qzmf_EXCH0100_t;


/*********************************************************************/
/* Type Definition for the CRTA0100 Format                           */
/*********************************************************************/

typedef _Packed struct Qzmf_CRTA0100
{
   Qzmf_System_Timestamp_t   Msg_Crtn_Tmstmp;
   Qzmf_Type_Value_t         Crtn_Msg_Type;
} Qzmf_CRTA0100_t;


/*********************************************************************/
/* Type Definition for the RCHL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Rcpt_Hist0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t   Msg_Desc_Hdr;
 /*Qzmf_RCHL0100_t           Recipient_History[];*/  /*varying length*/
} Qzmf_Rcpt_Hist0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the EXCH0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Ext_Hist0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t   Msg_Desc_Hdr;
 /*Qzmf_EXCH0100_t           User_Exit_Call_Hist[];*//*varying length*/
} Qzmf_Ext_Hist0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the CRTA0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Crtn_Attr0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t   Msg_Desc_Hdr;
 /*Qzmf_CRTA0100_t           Creation_Attribute[];*/ /*varying length*/
 } Qzmf_Crtn_Attr0100_Msg_Desc_t;




/*********************************************************************/
/* Prototype for calling Add Mail Server Framework Configuration     */
/* (QzmfAddMailCfg) API                                              */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfAddMailCfg, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfAddMailCfg(
                             void     *,      /* Type Configuration  */
                             char     *,      /* Format Name         */
                             void     *       /* API Returned Error  */
                          );

/*********************************************************************/
/* Prototype for calling Remove Mail Server Framework Configuration  */
/* (QzmfRmvMailCfg) API                                              */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfRmvMailCfg, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfRmvMailCfg(
                             void     *,      /* Type Configuration  */
                             char     *,      /* Format Name         */
                             void     *       /* API Returned Error  */
                          );

/*********************************************************************/
/* Prototype for calling List Mail Server Framework Configuration    */
/* (QzmfLstMailCfg) API                                              */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfLstMailCfg, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfLstMailCfg(
                             void     *,      /* User Space Name     */
                             char     *,      /* List Format Name    */
                             char     *,      /* Format Name         */
                             void     *,      /* Type Configuration  */
                             void     *       /* API Returned Error  */
                          );



/*********************************************************************/
/* Type Definition for the LSTL0100 Format                           */
/*********************************************************************/

typedef _Packed struct Qzmf_LSTL0100
{
   Qzmf_Type_Group_t         Type_Group;
   Qzmf_Type_Value_t         Type_Value;
   Qzmf_Type_Name_t          Type_Name;
   char                      Reserved[2];
   Qzmf_CCSID_t              CCSID;
   char                      Type_Text[100];
} Qzmf_LSTL0100_t;


/*********************************************************************/
/* Prototype for calling Create Mail Message (QzmfCrtMailMsg) API    */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfCrtMailMsg, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfCrtMailMsg(
                             void     *,      /* Mail Messge Ident.  */
                             void     *,      /* Reservd Mail Msg Id */
                             char     *,      /* Creation Msg. Type  */
                             void     *,      /* Msg Desc Attr List  */
                             long int *,      /* Num Msg Desc Attrbts*/
                             char     *,      /* Format Name         */
                             void     *       /* API Returned Error  */
                          );

/*********************************************************************/
/* Prototype for calling Retrieve Mail Message (QzmfRtvMailMsg) API  */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfRtvMailMsg, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfRtvMailMsg(
                             void     *,      /* Mail Messge Ident.  */
                             void     *,      /* Msg Desc Attr List  */
                             long int *,      /* Num Msg Desc Attrbts*/
                             char     *,      /* Format Name         */
                             void     *       /* API Returned Error  */
                          );

/*********************************************************************/
/* Prototype for calling Change Mail Message (QzmfChgMailMsg) API    */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfChgMailMsg, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfChgMailMsg(
                             void     *,      /* Mail Messge Ident.  */
                             void     *,      /* Msg Desc Attr List  */
                             long int *,      /* Num Msg Desc Attrbts*/
                             char     *,      /* Format Name         */
                             void     *       /* API Returned Error  */
                          );

/*********************************************************************/
/* Prototype for calling Reserve Mail Message Identifier             */
/* (QzmfRsvMailMsgId) API                                            */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfRsvMailMsgId, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfRsvMailMsgId(
                               void   *,      /* Reservd Mail Msg Id */
                               char   *,      /* Format Name         */
                               void   *       /* API Returned Error  */
                            );

/*********************************************************************/
/* Prototype for calling Query Mail Message Identifier               */
/* (QzmfQryMailMsgId) API                                            */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfQryMailMsgId, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfQryMailMsgId(
                               void   *,      /* Mail Message Ident. */
                               char   *,      /* Format Name         */
                               char   *,      /* Status              */
                               void   *       /* API Returned Error  */
                            );

/*********************************************************************/
/* Prototype for calling Remove Reserved Mail Message Identifier     */
/* (QzmfRmvRsvMailMsgId) API                                         */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfRmvRsvMailMsgId, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfRmvRsvMailMsgId(
                                  void  *,    /* Reservd Mail Msg Id */
                                  char  *,    /* Format Name         */
                                  void  *     /* API Returned Error  */
                               );
/*********************************************************************/
/* Prototype for calling Complete Creation Sequence                  */
/*(QzmfCrtCmpMailMsg) API                                            */
/*********************************************************************/

#ifdef __ILEC400__
   #pragma argument(QzmfCrtCmpMailMsg, OS, NOWIDEN)
   extern
#else
   extern "C"
#endif
       void QzmfCrtCmpMailMsg(
                                void  *,      /* Reservd Mail Msg Id */
                                char  *,      /* Format Name         */
                                void  *       /* API Returned Error  */
                             );

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*_QZMFASRV_H*/
