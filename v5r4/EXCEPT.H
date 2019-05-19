/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-CX2                                                      */
/*     5716-CX4                                                      */
/*     5716-CX5                                                      */
/*     5769-CX2                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1991, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
#ifndef   __except_h
  #define __except_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/*  Header File Name: except.h                                       */
/*                                                                   */
/*  This header contains the type definitions and macros used by     */
/*    ILE exception handlers and cancel handlers.                    */
/*                                                                   */
/* ================================================================= */

 #if defined (__EXTENDED__)

  #ifndef __pointer_h
    #include <pointer.h>
  #endif

  #ifndef __milib_h
    #include <milib.h>
  #endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
  /* Constants used for specifying Cancel Reason Mask                */

  #define _EXCP_SENT             0x40000000
  #define _ABNORMAL_TERM         0x00008000
  #define _AG_TERMINATING        0x00004000
  #define _RCLRSC                0x00002000
  #define _PROCESS_TERM          0x00001000
  #define _EXIT_VERB             0x00000800
  #define _UNHANDLED_EXCP        0x00000400
  #define _JUMP                  0x00000200
  #define _JUMP_EXCP             0x00000100

  typedef _Packed struct _CNL_Mask_T {
    int reserved1         : 1;   /* reserved fields                  */
    int Excp_Sent         : 1;   /* Cancelled due to sending exceptn */
    int reserved2         : 14;  /* reserved fields                  */
    int Abnormal          : 1;   /* 0 - normal termination           */
                                 /* 1 - abnormal termination         */
    int AG_Terminating    : 1;   /* Act. Grp. is being terminated    */
    int Rclrsc            : 1;   /* Initiated by RCLRSC              */
    int Process_Term      : 1;   /* Initiated by process termination */
    int Exit_Verb         : 1;   /* Cancelled by an exit verb        */
    int Unhandled_Excp    : 1;   /* Cancelled due to unhandled excp  */
    int Jump              : 1;   /* Cancelled due to long jump       */
    int Jump_Excp         : 1;   /* Cancelled due to a jump due to   */
                                 /* exception processing             */
    int reserved3         : 8;   /* reserved                         */
  } _CNL_Mask_T;

  /* Control actions for exception handlers */
  #define _CTLA_INVOKE          0x00000001
  #define _CTLA_HANDLE          0x00000002
  #define _CTLA_HANDLE_NO_MSG   0x00000003
  #define _CTLA_IGNORE          0x00000083
  #define _CTLA_IGNORE_NO_MSG   0x00000084

  /* Interrupt class flags (first 4 bytes) */
  #define _C1_BINARY_OVERFLOW              0x80000000
  #define _C1_DECIMAL_OVERFLOW             0x40000000
  #define _C1_DECIMAL_DATA_ERROR           0x20000000
  #define _C1_FLOAT_OVERFLOW               0x10000000
  #define _C1_FLOAT_UNDERFLOW              0x08000000
  #define _C1_INVALID_FLOAT_OPERAND        0x04000000
  #define _C1_OTHER_DATA_ERROR             0x02000000
  #define _C1_SPECIFICATION_ERROR          0x01000000
  #define _C1_POINTER_NOT_VALID            0x00800000
  #define _C1_OBJECT_NOT_FOUND             0x00400000
  #define _C1_OBJECT_DESTROYED             0x00200000
  #define _C1_ADDRESS_COMP_ERROR           0x00100000
  #define _C1_SPACE_ALLOC_ERROR            0x00080000
  #define _C1_DOMAIN_OR_STATE_VIOLATION    0x00040000
  #define _C1_AUTHORIZATION_VIOLATION      0x00020000
  #define _C1_JAVA_THROWN_CLASS            0x00010000
  #define _C1_VLIC_RESERVED                0x0000fff8
  #define _C1_OTHER_MI_EXCEPTION           0x00000004
  #define _C1_MI_GEN_FC_OR_MC              0x00000002
  #define _C1_MI_SIGEXP_EXCEPTION          0x00000001

  #define _C1_ALL ( _C1_BINARY_OVERFLOW  |          \
                    _C1_DECIMAL_OVERFLOW |          \
                    _C1_DECIMAL_DATA_ERROR |        \
                    _C1_FLOAT_OVERFLOW |            \
                    _C1_FLOAT_UNDERFLOW |           \
                    _C1_INVALID_FLOAT_OPERAND |     \
                    _C1_OTHER_DATA_ERROR |          \
                    _C1_SPECIFICATION_ERROR |       \
                    _C1_POINTER_NOT_VALID |         \
                    _C1_OBJECT_NOT_FOUND |          \
                    _C1_OBJECT_DESTROYED |          \
                    _C1_ADDRESS_COMP_ERROR |        \
                    _C1_SPACE_ALLOC_ERROR |         \
                    _C1_DOMAIN_OR_STATE_VIOLATION | \
                    _C1_AUTHORIZATION_VIOLATION |   \
                    _C1_JAVA_THROWN_CLASS |         \
                    _C1_VLIC_RESERVED |             \
                    _C1_OTHER_MI_EXCEPTION |        \
                    _C1_MI_GEN_FC_OR_MC |           \
                    _C1_MI_SIGEXP_EXCEPTION )

  /* Interrupt class flags (last 4 bytes) */
  #define _C2_SNDPRMSG_1                   0x80000000
  #define _C2_SNDPRMSG_2                   0x40000000
  #define _C2_SNDPRMSG_3                   0x20000000
  #define _C2_SNDPRMSG_4                   0x10000000
  #define _C2_SNDPRMSG_5                   0x08000000
  #define _C2_SNDPRMSG_6                   0x04000000
  #define _C2_SNDPRMSG_7                   0x02000000
  #define _C2_SNDPRMSG_8                   0x01000000
  #define _C2_MH_ESCAPE                    0x00800000
  #define _C2_MH_NOTIFY                    0x00400000
  #define _C2_MH_STATUS                    0x00200000
  #define _C2_MH_FUNCTION_CHECK            0x00100000
  #define _C2_MH_RESERVED                  0x000f0000
  #define _C2_MH_COMPLETION                0x00008000
  #define _C2_MH_DIAGNOSTIC                0x00004000
  #define _C2_MH_SCOPE                     0x00002000
  #define _C2_MH_INFO                      0x00001000
  #define _C2_MH_INQUIRY                   0x00000800
  #define _C2_MH_SENDER_COPY               0x00000400
  #define _C2_MH_REPLY                     0x00000200
  #define _C2_MH_REQUEST                   0x00000100
  #define _C2_MH_INVOCATION_CONTROL        0x00000080
  #define _C2_MH_COMMAND                   0x00000040
  #define _C2_MH_RESERVED1                 0x0000003f

  #define _C2_ALL  ( _C2_MH_ESCAPE | _C2_MH_NOTIFY | \
                     _C2_MH_STATUS | _C2_MH_FUNCTION_CHECK )

  /* Full interrupt class mask */
  typedef _Packed struct _INTRPT_Mask_T {
    /* Reserved                                 */
    int Binary_Overflow          : 1; /* Binary overflow, divide by 0  */
    int Decimal_Overflow         : 1; /* Decimal overflow, divide by 0 */
    int Decimal_Data_Error       : 1; /* Decimal data error            */
    int Float_Overflow           : 1; /* Float overflow, divide by 0   */
    int Float_Underflow          : 1; /* Float underflow,inexact result*/
    int Invalid_Float_Operand    : 1; /* Invalid float operand         */
    int Other_Data_Error         : 1; /* Other type data other         */
    int Specification_Error      : 1; /* Specification error           */
    int Pointer_Not_Valid        : 1; /* Pointer not set or invalid    */
    int Object_Not_Found         : 1; /* Object not found              */
    int Object_Destroyed         : 1; /* Object destroyed              */
    int Address_Comp_Error       : 1; /* Address computation error     */
    int Space_Alloc_Error        : 1; /* Space allocation error        */
    int Domain_or_State_Violation: 1; /* Domain/state violation        */
    int Authorization_Violation  : 1; /* Authorization violation       */
    int Java_Thrown_Class        : 1; /* Java thrown Class             */
    int reserved                 : 13;

    int Other_MI_Exception       : 1; /* MI exception other than FC    */
    int MI_Gen_FC_or_MC          : 1; /* MI generated FC or machine chk*/
    int MI_SIGEXP_Exception      : 1; /* Excp generated by SIGEXCP MI  */

    /* Reserved                                 */
    int Sndprmsg_1               : 1; /* MI send process message       */
    int Sndprmsg_2               : 1; /* MI send process message       */
    int Sndprmsg_3               : 1; /* MI send process message       */
    int Sndprmsg_4               : 1; /* MI send process message       */
    int Sndprmsg_5               : 1; /* MI send process message       */
    int Sndprmsg_6               : 1; /* MI send process message       */
    int Sndprmsg_7               : 1; /* MI send process message       */
    int Sndprmsg_8               : 1; /* MI send process message       */

    /* Reserved                                 */
    int MH_Escape                : 1; /*  Escape type                  */
    int MH_Notify                : 1; /*  Notify type                  */
    int MH_Status                : 1; /*  Status type                  */
    int MH_Function_Check        : 1; /*  Function check type          */
    int MH_Reserved1             : 4; /*  reserved for future MH use   */
    int MH_Completion            : 1; /*  Completion type              */
    int MH_Diagnostic            : 1; /*  Diagnostic type              */
    int MH_Scope                 : 1; /*  Scope type                   */
    int MH_Info                  : 1; /*  Informational type           */
    int MH_Inquiry               : 1; /*  Inquiry type                 */
    int MH_Sender_copy           : 1; /*  Sender copy type             */
    int MH_Reply                 : 1; /*  Reply type                   */
    int MH_Request               : 1; /*  Request type                 */
    int MH_Invocation_control    : 1; /*  Invocation control type      */
    int MH_Command               : 1; /*  Command type (This msg type  */
                                      /*  is created when CL commands  */
                                      /*  are put in the JMQ because   */
                                      /*  LOGCLPGM(*YES) is used)      */
    int MH_Reserved2             : 6; /*  Reserved for future MH use   */
  } _INTRPT_Mask_T;


  /* Invocation flags */
  typedef struct _INVFLAGS_T {
    struct {                          /* Machine-supplied Attributes   */
      int  Being_Cancelled      : 1;  /* Invocation is being cancelled */
      int  Is_Ending            : 1;  /* Invocation is ending          */
      int  Intrpt_By_Excptn     : 1;  /* Invocation is interrupted by  */
                                      /* an exception                  */
      int  reserved1            : 1;  /* Reserved                      */
      int  Is_Ext_Handler       : 1;  /* Invocation is an external     */
                                      /* exception handler for an      */
                                      /* OMI program                   */
      int  Is_Int_Handler       : 1;  /* Invocation is functioning as  */
                                      /* an internal exception handler */
                                      /* for an OMI program            */
      int  Is_BP_Handler        : 1;  /* Invocation is functioning or  */
                                      /* has functioned as a branch    */
                                      /* point exception handler for   */
                                      /* an OMI program                */
      int  No_Retry             : 1;  /* Retry of interrupted          */
                                      /* instruction is not allowed    */
      int  No_Resume            : 1;  /* Resuming after an interruped  */
                                      /* instruction is not allowed    */
      int  Intrpt_By_RPM        : 1;  /* Invocation is interruped by   */
                                      /* a resume-point-modification   */
      int  Oldest_In_AG         : 1;  /* The Oldest invocation in an AG*/
      int  Is_Ctlbdy            : 1;  /* A control boundary invocation */
      int  Is_First_In_New_AG   : 1;  /* First inv in *NEW act grp     */
      int  reserved2            : 3;  /* reserved                      */
    } System;

    struct {
      int  reserved1            : 1;  /* Reserved                      */
      int  Is_Request_Processor : 1;  /* A request processor invocation*/
      int  reserved2            : 10; /* Reserved                      */
      int  reserved_for_LE      : 2;  /* Reserved for LE               */
      int  Has_No_Return_Code   : 1;  /* Procedure has no return code  */
      int  Is_FPCA_Boundary     : 1;  /* A FPCA boundary invocation    */
    } User;
  } _INVFLAGS_T;

  /* Interrupt handler parameter block */
  typedef _Packed struct {
    unsigned int    Block_Size;       /* Size of the parameter block   */
    _INVFLAGS_T     Tgt_Flags;        /* Target invocation flags       */
    char            reserved[8];      /* reserved                      */
    _INVPTR         Target;           /* Current target invocation     */
    _INVPTR         Source;           /* Source invocation             */
    _SPCPTR         Com_Area;         /* Communications area           */
    char            Compare_Data[32]; /* Compare Data                  */
    char            Msg_Id[7];        /* Message ID                    */
    char            reserved1;        /* 1 byte pad                    */
    _INTRPT_Mask_T  Mask;             /* Interrupt class mask          */
    unsigned int    Msg_Ref_Key;      /* Message reference key         */
    unsigned short  Exception_Id;     /* Exception ID                  */
    unsigned short  Compare_Data_Len; /* Length of Compare Data        */
    char            Signal_Class;     /* Internal signal class         */
    char            Priority;         /* Handler priority              */
    short           Severity;         /* Message severity              */
    char            reserved3[4];     /* reserved                      */
    int             Msg_Data_Len;     /* Len of available message data */
    char            Mch_Dep_Data[10]; /* Machine dependent date        */
    char            Tgt_Inv_Type;     /*Invocation type (in MIMCHOBS.H)*/
    _SUSPENDPTR     Tgt_Suspend;      /* Suspend pointer of target     */
    char            Ex_Data[48];      /* First 48 bytes of excp. data  */
  } _INTRPT_Hndlr_Parms_T;


  /* Cancel handler parameter block */
  typedef _Packed struct {
    unsigned int    Block_Size;       /*Size of the parameter block    */
    _INVFLAGS_T     Inv_Flags;        /* Invocation flags              */
    char            reserved[8];      /* reserved                      */
    _INVPTR         Invocation;       /* Cancelled invocation          */
    _SPCPTR         Com_Area;         /* Communications area           */
    _CNL_Mask_T     Mask;             /* Cancel reason mask            */
  } _CNL_Hndlr_Parms_T;

  #ifdef __cplusplus
    extern "builtin"
  #else
    #pragma linkage(__EXBDY, builtin)
  #endif
  void __EXBDY(const unsigned class1, const unsigned class2);
  #define _EXBDY() __EXBDY(_C1_ALL, _C2_ALL)

  #ifdef __cplusplus
    extern "builtin"
  #else
    #pragma linkage(__VBDY, builtin)
  #endif
  void __VBDY(void);
  #define _VBDY() __VBDY()

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif  /* ifndef __EXTENDED__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif  /* ifndef __except_h */
