 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: CMC.H                                   @A4C */
 /*                                                                */
 /* Descriptive Name: CPI-Communications header file          @A4C */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 1994,2002               @A4C */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: This header contains the declarations needed for  */
 /*              the C programmer using the cross-compiler who     */
 /*              needs to use CPI-Communications. It sets up the   */
 /*              correct linkage and also provides constants.      */
 /*                                                           @A4C */
 /*                                                                */
 /* Header Files Included: None.                              @A4C */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                     @A4C */
 /*                                                                */
 /* Function Prototype List:                                  @A4C */
 /*                           CMACCP,                              */
 /*                           CMALLC,                              */
 /*                           CMCFM,                               */
 /*                           CMCFMD,                              */
 /*                           CMCNVI,                              */
 /*                           CMCNVO,                              */
 /*                           CMDEAL,                              */
 /*                           CMECS,                               */
 /*                           CMECT,                               */
 /*                           CMEMBS,                              */
 /*                           CMEMN,                               */
 /*                           CMEPLN,                              */
 /*                           CMESL,                               */
 /*                           CMESUI,                              */
 /*                           CMFLUS,                              */
 /*                           CMINIT,                              */
 /*                           CMPTR,                               */
 /*                           CMRCV,                               */
 /*                           CMRTS,                               */
 /*                           CMSEND,                              */
 /*                           CMSERR,                              */
 /*                           CMSCSP,                              */
 /*                           CMSCST,                              */
 /*                           CMSCSU,                              */
 /*                           CMSCT,                               */
 /*                           CMSDT,                               */
 /*                           CMSED,                               */
 /*                           CMSF,                                */
 /*                           CMSLD,                               */
 /*                           CMSMN,                               */
 /*                           CMSPLN,                              */
 /*                           CMSPTR,                              */
 /*                           CMSRT,                               */
 /*                           CMSRC,                               */
 /*                           CMSST,                               */
 /*                           CMSSL,                               */
 /*                           CMSTPN,                              */
 /*                           CMTRTS,                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= Dxxxxx00     3D10  940504 KEECH     Updated for ILE-C     */
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /* $A2=D98289    V5R1M0 000301 jgaytan: New Return Code           */
 /* $A3=D98825    V5R2M0 010504 AXELO  : Add a new optional parame-*/
 /*                                      ter (Security_password_   */
 /*                                      CCSID) to CMSCSP.         */
 /* $A4=P9A15833  V5R3M0 020902 AXELO  : Update include information*/
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef __cmc_h
  #define __cmc_h

  #if (__OS400_TGTVRM__>=510)                                /*@A1A*/
      #pragma datamodel(P128)                                /*@A1A*/
  #endif                                                     /*@A1A*/


/*********************************************************************/
/*            CPI Communications Enumerated Constants                */
/*********************************************************************/

#ifdef  __ILEC400__
  #define CM_ENTRY extern void

  #pragma linkage (CMACCP, OS,NOWIDEN)
  #pragma linkage (CMALLC, OS,NOWIDEN)
  #pragma linkage (CMCFM,  OS,NOWIDEN)
  #pragma linkage (CMCFMD, OS,NOWIDEN)
  #pragma linkage (CMCNVI, OS,NOWIDEN)
  #pragma linkage (CMCNVO, OS,NOWIDEN)
  #pragma linkage (CMDEAL, OS,NOWIDEN)
  #pragma linkage (CMECS,  OS,NOWIDEN)
  #pragma linkage (CMECT,  OS,NOWIDEN)
  #pragma linkage (CMEMBS, OS,NOWIDEN)
  #pragma linkage (CMEMN,  OS,NOWIDEN)
  #pragma linkage (CMEPLN, OS,NOWIDEN)
  #pragma linkage (CMESL,  OS,NOWIDEN)
  #pragma linkage (CMESUI, OS,NOWIDEN)
  #pragma linkage (CMFLUS, OS,NOWIDEN)
  #pragma linkage (CMINIT, OS,NOWIDEN)
  #pragma linkage (CMPTR,  OS,NOWIDEN)
  #pragma linkage (CMRCV,  OS,NOWIDEN)
  #pragma linkage (CMRTS,  OS,NOWIDEN)
  #pragma linkage (CMSEND, OS,NOWIDEN)
  #pragma linkage (CMSERR, OS,NOWIDEN)
  #pragma linkage (CMSCSP, OS,NOWIDEN)
  #pragma linkage (CMSCST, OS,NOWIDEN)
  #pragma linkage (CMSCSU, OS,NOWIDEN)
  #pragma linkage (CMSCT,  OS,NOWIDEN)
  #pragma linkage (CMSDT,  OS,NOWIDEN)
  #pragma linkage (CMSED,  OS,NOWIDEN)
  #pragma linkage (CMSF,   OS,NOWIDEN)
  #pragma linkage (CMSLD,  OS,NOWIDEN)
  #pragma linkage (CMSMN,  OS,NOWIDEN)
  #pragma linkage (CMSPLN, OS,NOWIDEN)
  #pragma linkage (CMSPTR, OS,NOWIDEN)
  #pragma linkage (CMSRT,  OS,NOWIDEN)
  #pragma linkage (CMSRC,  OS,NOWIDEN)
  #pragma linkage (CMSST,  OS,NOWIDEN)
  #pragma linkage (CMSSL,  OS,NOWIDEN)
  #pragma linkage (CMSTPN, OS,NOWIDEN)
  #pragma linkage (CMTRTS, OS,NOWIDEN)
#else
  #define CM_ENTRY extern "OS" void
#endif

#define CM_INT32 signed long int


#define CM_PTR *

typedef CM_INT32 CM_CONVERSATION_SECURITY_TYPE;
typedef CM_INT32 CM_CONVERSATION_STATE;
typedef CM_INT32 CM_CONVERSATION_TYPE;
typedef CM_INT32 CM_DATA_RECEIVED_TYPE;
typedef CM_INT32 CM_DEALLOCATE_TYPE;
typedef CM_INT32 CM_ERROR_DIRECTION;
typedef CM_INT32 CM_FILL;
typedef CM_INT32 CM_PREPARE_TO_RECEIVE_TYPE;
typedef CM_INT32 CM_RECEIVE_TYPE;
typedef CM_INT32 CM_REQUEST_TO_SEND_RECEIVED;
typedef CM_INT32 CM_RETURN_CODE;
typedef CM_INT32 CM_RETURN_CONTROL;
typedef CM_INT32 CM_SEND_TYPE;
typedef CM_INT32 CM_STATUS_RECEIVED;
typedef CM_INT32 CM_SYNC_LEVEL;

/*  conversation_state values  */

#define CM_INITIALIZE_STATE              (CM_CONVERSATION_STATE) 2
#define CM_SEND_STATE                    (CM_CONVERSATION_STATE) 3
#define CM_RECEIVE_STATE                 (CM_CONVERSATION_STATE) 4
#define CM_CONFIRM_STATE                 (CM_CONVERSATION_STATE) 6
#define CM_CONFIRM_SEND_STATE            (CM_CONVERSATION_STATE) 7
#define CM_CONFIRM_DEALLOCATE_STATE      (CM_CONVERSATION_STATE) 8
#define CM_DEFER_RECEIVE_STATE           (CM_CONVERSATION_STATE) 9
#define CM_DEFER_DEALLOCATE_STATE        (CM_CONVERSATION_STATE) 10
#define CM_SYNC_POINT_STATE              (CM_CONVERSATION_STATE) 11
#define CM_SYNC_POINT_SEND_STATE         (CM_CONVERSATION_STATE) 12
#define CM_SYNC_POINT_DEALLOCATE_STATE   (CM_CONVERSATION_STATE) 13

/*  conversation_type values  */

#define CM_BASIC_CONVERSATION            (CM_CONVERSATION_TYPE) 0
#define CM_MAPPED_CONVERSATION           (CM_CONVERSATION_TYPE) 1


/*  data_received values  */

#define CM_NO_DATA_RECEIVED              (CM_DATA_RECEIVED_TYPE) 0
#define CM_DATA_RECEIVED                 (CM_DATA_RECEIVED_TYPE) 1
#define CM_COMPLETE_DATA_RECEIVED        (CM_DATA_RECEIVED_TYPE) 2
#define CM_INCOMPLETE_DATA_RECEIVED      (CM_DATA_RECEIVED_TYPE) 3


/*  deallocate_type values  */

#define CM_DEALLOCATE_SYNC_LEVEL         (CM_DEALLOCATE_TYPE) 0
#define CM_DEALLOCATE_FLUSH              (CM_DEALLOCATE_TYPE) 1
#define CM_DEALLOCATE_CONFIRM            (CM_DEALLOCATE_TYPE) 2
#define CM_DEALLOCATE_ABEND              (CM_DEALLOCATE_TYPE) 3


/*  error_direction values  */

#define CM_RECEIVE_ERROR                 (CM_ERROR_DIRECTION) 0
#define CM_SEND_ERROR                    (CM_ERROR_DIRECTION) 1


/*  fill values  */

#define CM_FILL_LL                       (CM_FILL) 0
#define CM_FILL_BUFFER                   (CM_FILL) 1


/*  prepare_to_receive_type values  */

#define CM_PREP_TO_RECEIVE_SYNC_LEVEL    (CM_PREPARE_TO_RECEIVE_TYPE) 0
#define CM_PREP_TO_RECEIVE_FLUSH         (CM_PREPARE_TO_RECEIVE_TYPE) 1
#define CM_PREP_TO_RECEIVE_CONFIRM       (CM_PREPARE_TO_RECEIVE_TYPE) 2


/*  receive_type values  */

#define CM_RECEIVE_AND_WAIT              (CM_RECEIVE_TYPE) 0
#define CM_RECEIVE_IMMEDIATE             (CM_RECEIVE_TYPE) 1


/*  request_to_send_received values  */

#define CM_REQ_TO_SEND_NOT_RECEIVED      (CM_REQUEST_TO_SEND_RECEIVED) 0
#define CM_REQ_TO_SEND_RECEIVED          (CM_REQUEST_TO_SEND_RECEIVED) 1


/*  return_code values  */

#define CM_OK                            (CM_RETURN_CODE) 0
#define CM_ALLOCATE_FAILURE_NO_RETRY     (CM_RETURN_CODE) 1
#define CM_ALLOCATE_FAILURE_RETRY        (CM_RETURN_CODE) 2
#define CM_CONVERSATION_TYPE_MISMATCH    (CM_RETURN_CODE) 3
#define CM_PIP_NOT_SPECIFIED_CORRECTLY   (CM_RETURN_CODE) 5
#define CM_SECURITY_NOT_VALID            (CM_RETURN_CODE) 6
#define CM_SYNC_LVL_NOT_SUPPORTED_LU     (CM_RETURN_CODE) 7
#define CM_SYNC_LVL_NOT_SUPPORTED_PGM    (CM_RETURN_CODE) 8
#define CM_TPN_NOT_RECOGNIZED            (CM_RETURN_CODE) 9
#define CM_TP_NOT_AVAILABLE_NO_RETRY     (CM_RETURN_CODE) 10
#define CM_TP_NOT_AVAILABLE_RETRY        (CM_RETURN_CODE) 11
#define CM_DEALLOCATED_ABEND             (CM_RETURN_CODE) 17
#define CM_DEALLOCATED_NORMAL            (CM_RETURN_CODE) 18
#define CM_PARAMETER_ERROR               (CM_RETURN_CODE) 19
#define CM_PRODUCT_SPECIFIC_ERROR        (CM_RETURN_CODE) 20
#define CM_PROGRAM_ERROR_NO_TRUNC        (CM_RETURN_CODE) 21
#define CM_PROGRAM_ERROR_PURGING         (CM_RETURN_CODE) 22
#define CM_PROGRAM_ERROR_TRUNC           (CM_RETURN_CODE) 23
#define CM_PROGRAM_PARAMETER_CHECK       (CM_RETURN_CODE) 24
#define CM_PROGRAM_STATE_CHECK           (CM_RETURN_CODE) 25
#define CM_RESOURCE_FAILURE_NO_RETRY     (CM_RETURN_CODE) 26
#define CM_RESOURCE_FAILURE_RETRY        (CM_RETURN_CODE) 27
#define CM_UNSUCCESSFUL                  (CM_RETURN_CODE) 28
#define CM_DEALLOCATED_ABEND_SVC         (CM_RETURN_CODE) 30
#define CM_DEALLOCATED_ABEND_TIMER       (CM_RETURN_CODE) 31
#define CM_SVC_ERROR_NO_TRUNC            (CM_RETURN_CODE) 32
#define CM_SVC_ERROR_PURGING             (CM_RETURN_CODE) 33
#define CM_SVC_ERROR_TRUNC               (CM_RETURN_CODE) 34
/*The New Return Code CM_OPERATION INCOMPLETE          @A2*/
#define CM_OPERATION_INCOMPLETE          (CM_RETURN_CODE) 35
#define CM_PARM_VALUE_NOT_SUPPORTED      (CM_RETURN_CODE) 49
#define CM_TAKE_BACKOUT                  (CM_RETURN_CODE) 100
#define CM_DEALLOCATED_ABEND_BO          (CM_RETURN_CODE) 130
#define CM_DEALLOCATED_ABEND_SVC_BO      (CM_RETURN_CODE) 131
#define CM_DEALLOCATED_ABEND_TIMER_BO    (CM_RETURN_CODE) 132
#define CM_RESOURCE_FAIL_NO_RETRY_BO     (CM_RETURN_CODE) 133
#define CM_RESOURCE_FAILURE_RETRY_BO     (CM_RETURN_CODE) 134

/*  return_control values  */

#define CM_WHEN_SESSION_ALLOCATED        (CM_RETURN_CONTROL) 0
#define CM_IMMEDIATE                     (CM_RETURN_CONTROL) 1


/*  send_type values  */

#define CM_BUFFER_DATA                   (CM_SEND_TYPE) 0
#define CM_SEND_AND_FLUSH                (CM_SEND_TYPE) 1
#define CM_SEND_AND_CONFIRM              (CM_SEND_TYPE) 2
#define CM_SEND_AND_PREP_TO_RECEIVE      (CM_SEND_TYPE) 3
#define CM_SEND_AND_DEALLOCATE           (CM_SEND_TYPE) 4


/*  status_received values  */

#define CM_NO_STATUS_RECEIVED            (CM_STATUS_RECEIVED) 0
#define CM_SEND_RECEIVED                 (CM_STATUS_RECEIVED) 1
#define CM_CONFIRM_RECEIVED              (CM_STATUS_RECEIVED) 2
#define CM_CONFIRM_SEND_RECEIVED         (CM_STATUS_RECEIVED) 3
#define CM_CONFIRM_DEALLOC_RECEIVED      (CM_STATUS_RECEIVED) 4
#define CM_TAKE_COMMIT                   (CM_STATUS_RECEIVED) 5
#define CM_TAKE_COMMIT_SEND              (CM_STATUS_RECEIVED) 6
#define CM_TAKE_COMMIT_DEALLOCATE        (CM_STATUS_RECEIVED) 7

/*  sync_level values  */

#define CM_NONE                          (CM_SYNC_LEVEL) 0
#define CM_CONFIRM                       (CM_SYNC_LEVEL) 1
#define CM_COMMIT                        (CM_SYNC_LEVEL) 2


/*  conversation_security_type values */

#define CM_SECURITY_NONE              (CM_CONVERSATION_SECURITY_TYPE) 0
#define CM_SECURITY_SAME              (CM_CONVERSATION_SECURITY_TYPE) 1
#define CM_SECURITY_PROGRAM           (CM_CONVERSATION_SECURITY_TYPE) 2
#define CM_SECURITY_PROGRAM_STRONG    (CM_CONVERSATION_SECURITY_TYPE) 5

/*********************************************************************/
/*   lower case call name definitions to enable portability          */
/*********************************************************************/

#define cmaccp CMACCP                /* Accept_Conversation          */
#define cmallc CMALLC                /* Allocate                     */
#define cmcfm  CMCFM                 /* Confirm                      */
#define cmcfmd CMCFMD                /* Confirmed                    */
#define cmcnvi CMCNVI                /* Convert_Incoming             */
#define cmcnvo CMCNVO                /* Convert_Outgoing             */
#define cmdeal CMDEAL                /* Deallocate                   */
#define cmecs  CMECS                 /* Extract_Conversation_State   */
#define cmect  CMECT                 /* Extract_Conversation_Type    */
#define cmemn  CMEMN                 /* Extract_Mode_Name            */
#define cmembs CMEMBS                /* Extract_Maximum_Buffer_size  */
#define cmepln CMEPLN                /* Extract_Partner_LU_Name      */
#define cmesl  CMESL                 /* Extract_Sync_Level           */
#define cmesui CMESUI                /* Extract_Security_User_ID     */
#define cmflus CMFLUS                /* Flush                        */
#define cminit CMINIT                /* Initialize_Conversation      */
#define cmptr  CMPTR                 /* Prepare_To_Receive           */
#define cmrcv  CMRCV                 /* Receive                      */
#define cmrts  CMRTS                 /* Request_To_Send              */
#define cmsend CMSEND                /* Send_Data                    */
#define cmserr CMSERR                /* Send_Error                   */
#define cmscsp CMSCSP                /* Set_Conversation_Sec_Password*/
#define cmscst CMSCST                /* Set_Conversation_Sec_Type    */
#define cmscsu CMSCSU                /* Set_Conversation_Sec_User_ID */
#define cmsct  CMSCT                 /* Set_Conversation_Type        */
#define cmsdt  CMSDT                 /* Set_Deallocate_Type          */
#define cmsed  CMSED                 /* Set_Error_Direction          */
#define cmsf   CMSF                  /* Set_Fill                     */
#define cmsld  CMSLD                 /* Set_Log_Data                 */
#define cmsmn  CMSMN                 /* Set_Mode_Name                */
#define cmspln CMSPLN                /* Set_Partner_LU_Name          */
#define cmsptr CMSPTR                /* Set_Prepare_To_Receive_Type  */
#define cmsrt  CMSRT                 /* Set_Receive_Type             */
#define cmsrc  CMSRC                 /* Set_Return_Control           */
#define cmsst  CMSST                 /* Set_Send_Type                */
#define cmssl  CMSSL                 /* Set_Sync_Level               */
#define cmstpn CMSTPN                /* Set_TP_Name                  */
#define cmtrts CMTRTS                /* Test_Request_To_Send         */


/*********************************************************************/
/*           CPI Communications routine prototypes                   */
/*********************************************************************/


CM_ENTRY CMACCP(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMALLC(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMCFM(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* request_to_send_received  */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMCFMD(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMCNVI(unsigned char CM_PTR,   /* buffer                    */
                CM_INT32 CM_PTR,        /* buffer_length             */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMCNVO(unsigned char CM_PTR,   /* buffer                    */
                CM_INT32 CM_PTR,        /* buffer_length             */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMDEAL(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMECS(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* conversation_state        */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMECT(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* conversation_type         */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMEMBS(CM_INT32 CM_PTR,        /* maximum_buffer_size       */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMEMN(unsigned char CM_PTR,    /* conversation_ID           */
               unsigned char CM_PTR,    /* mode_name                 */
               CM_INT32 CM_PTR,         /* mode_name_length          */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMEPLN(unsigned char CM_PTR,   /* conversation_ID           */
                unsigned char CM_PTR,   /* partner_lu_name           */
                CM_INT32 CM_PTR,        /* partner_lu_name_length    */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMESL(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* sync_level                */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMESUI(unsigned char CM_PTR,   /* conversation_ID           */
               unsigned char CM_PTR,    /* security_user_ID          */
               CM_INT32 CM_PTR,         /* security_user_ID_length   */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMFLUS(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMINIT(unsigned char CM_PTR,   /* conversation_ID           */
                unsigned char CM_PTR,   /* sym_dest_name             */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMPTR(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMRCV(unsigned char CM_PTR,    /* conversation_ID           */
               unsigned char CM_PTR,    /* buffer                    */
               CM_INT32 CM_PTR,         /* requested_length          */
               CM_INT32 CM_PTR,         /* data_received             */
               CM_INT32 CM_PTR,         /* received_length           */
               CM_INT32 CM_PTR,         /* status_received           */
               CM_INT32 CM_PTR,         /* request_to_send_received  */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMRTS(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSEND(unsigned char CM_PTR,   /* conversation_ID           */
                unsigned char CM_PTR,   /* buffer                    */
                CM_INT32 CM_PTR,        /* send_length               */
                CM_INT32 CM_PTR,        /* request_to_send_received  */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMSERR(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR,        /* request_to_send_received  */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMSCSP(unsigned char CM_PTR,   /* conversation_ID           */
                unsigned char CM_PTR,   /* security_password         */
                CM_INT32 CM_PTR,        /* security_password_length  */
                CM_INT32 CM_PTR,        /* return_code               */
                ...);                   /* security_password_ccsid   */
                                                             /* @A3A */
CM_ENTRY CMSCST(unsigned char CM_PTR,   /* conversation_ID           */
               CM_INT32 CM_PTR,         /* conversation_security_type*/
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSCSU(unsigned char CM_PTR,   /* conversation_ID           */
                unsigned char CM_PTR,   /* security_user_ID          */
                CM_INT32 CM_PTR,        /* security_user_ID_length   */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMSCT(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* conversation_type         */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSDT(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* deallocate_type           */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSED(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* error_direction           */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSF(unsigned char CM_PTR,     /* conversation_ID           */
              CM_INT32 CM_PTR,          /* fill                      */
              CM_INT32 CM_PTR);         /* return_code               */
CM_ENTRY CMSLD(unsigned char CM_PTR,    /* conversation_ID           */
               unsigned char CM_PTR,    /* log_data                  */
               CM_INT32 CM_PTR,         /* log_data_length           */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSMN(unsigned char CM_PTR,    /* conversation_ID           */
               unsigned char CM_PTR,    /* mode_name                 */
               CM_INT32 CM_PTR,         /* mode_name_length          */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSPLN(unsigned char CM_PTR,   /* conversation_ID           */
                unsigned char CM_PTR,   /* partner_lu_name           */
                CM_INT32 CM_PTR,        /* partner_lu_name_length    */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMSPTR(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR,        /* prepare_to_receive_type   */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMSRT(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* receive_type              */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSRC(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* return_control            */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSST(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* send_type                 */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSSL(unsigned char CM_PTR,    /* conversation_ID           */
               CM_INT32 CM_PTR,         /* sync_level                */
               CM_INT32 CM_PTR);        /* return_code               */
CM_ENTRY CMSTPN(unsigned char CM_PTR,   /* conversation_ID           */
                unsigned char CM_PTR,   /* tp_name                   */
                CM_INT32 CM_PTR,        /* tp_name_length            */
                CM_INT32 CM_PTR);       /* return_code               */
CM_ENTRY CMTRTS(unsigned char CM_PTR,   /* conversation_ID           */
                CM_INT32 CM_PTR,        /* request_to_send_received  */
                CM_INT32 CM_PTR);       /* return_code               */

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(pop)                                     /*@A1A*/
#endif                                                         /*@A1A*/

#endif                                  /* #ifndef __cmc_h           */
