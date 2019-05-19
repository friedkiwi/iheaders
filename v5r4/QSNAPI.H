/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1993, 2003                                */
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
#ifdef __cplusplus
  extern "C" {
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef _qsnapi_h
  #define _qsnapi_h 1

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name:        qsnapi.h                                  */
/*                                                                    */
/* Descriptive Name:        IBM Dynamic Screen Manager Header File    */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ------------------------- */
/* $A0= D1234500     3D10  920411 ROCH    : New include               */
/* $B1= D98256       5D10  000305 ROCH    : Updated Qsn_Ssn_Desc_T    */
/* $B2= D98140       5D20  010619 ROCH    : CCSID-based I/O APIs      */
/* $B3= D99394       5D30  030524 ROCH    : Session CCSID-based I/O   */
/*                                          support.                  */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/* ================================================================= */
/*                                                                   */
/*  Declarations and definitions for the DSM low-level services      */
/*                                                                   */
/* ================================================================= */

    typedef long Q_Bin4;
    typedef unsigned long Q_UBin4;
    typedef short Q_Bin2;
    typedef unsigned short Q_UBin2;
    typedef unsigned char Q_Uchar;

    typedef Q_Bin4 Q_Handle_T;
    #define Q_NO_HANDLE         ((Q_Handle_T)0)

    typedef _Packed struct {
        Q_Bin4 provided;
        Q_Bin4 available;
        char exception_id[7];
        char reserved;
        char exception_data[1];
    } Q_Fdbk_T;

    static const Q_Bin4 QSN_FAIL=-1;

    typedef Q_Handle_T Qsn_Cmd_Buf_T;
    typedef Q_Handle_T Qsn_Inp_Buf_T;
    typedef Q_Handle_T Qsn_Env_T;

    typedef _Packed struct {
        char color_support;
        char CDRA;
        char CDRA_3F;
        char DBCS_support;
        char coexist;
        char alt_help;
        char tgt_dev[10];
        char disp_file[20];
        char invite_active;
        char prevent_override;
    } Qsn_Env_Desc_T;

    typedef _Packed struct {
        Q_Bin4 bytes_returned;
        Q_Bin4 bytes_available;
        char color_support;
        char CDRA;
        char CDRA_3F;
        char DBCS_support;
        char coexist;
        char alt_help;
        char tgt_dev[10];
        char disp_file[20];
        char invite_active;
        char prevent_override;
    } Qsn_Env_Rtv_Desc_T;

    typedef void (*Qsn_Env_Chg_FP) (const Qsn_Env_T *);
    typedef void (*Qsn_Env_Dlt_FP) (const Qsn_Env_T *);

    typedef _Packed struct {
        void *usr_dta_p;
        Qsn_Env_Chg_FP chg_fp;
        Qsn_Env_Dlt_FP dlt_fp;
    } Qsn_Env_Ext_Inf_T;

    typedef enum {
        QSN_ENV_SAME = '0'
    } Qsn_Env_Fld_T;

    typedef enum {
        QSN_COLOR_NO = '1', QSN_COLOR_YES  = '2', QSN_COLOR_SELECT = '3'
    }  Qsn_Env_Color_Sup_T;

    typedef enum {
        QSN_CDRA_STD = '1', QSN_CDRA_CNVT= '2'
    } Qsn_Env_CDRA_T;

    typedef enum {
        QSN_DBCS_STD    = '1', QSN_DBCS_ONLY  = '2',
        QSN_DBCS_EITHER = '3', QSN_DBCS_MIXED = '4'
    } Qsn_Env_DBCS_T;

    typedef enum {
        QSN_COEXIST_YES = '1', QSN_COEXIST_NO = '2'
    } Qsn_Env_Coexist_T;

    typedef enum {
        QSN_ALTHELP_NO = '1'
    } Qsn_Env_Alt_Help_T;

    typedef enum {
        QSN_DSP03 = '3', QSN_DSP04 = '4'
    } Qsn_Modes_T;

    typedef enum {
        QSN_INVITE_NO = '1', QSN_INVITE_YES = '2'
    } Qsn_Invite_T;

    typedef enum {
        QSN_DISPLAY_FILE = 1
    } Qsn_File_Type_T;

    typedef enum {
        QSN_PREVENT_OVERRIDE_NO = '1', QSN_PREVENT_OVERRIDE_YES = '2'
    } Qsn_Override_T;

    typedef _Packed struct {
        char atr_col;
        Q_Bin4 upper_left_row;
        Q_Bin4 upper_left_col;
        Q_Bin4 num_rows;
        Q_Bin4 num_cols;
    } Qsn_Env_Win_Desc_T;


    typedef _Packed struct {
        Q_Bin4 bytes_returned;
        Q_Bin4 bytes_available;
        char win_mode;
        char atr_col;
        Q_Bin4 upper_left_row;
        Q_Bin4 upper_left_col;
        Q_Bin4 num_rows;
        Q_Bin4 num_cols;
    } Qsn_Env_Win_Rtv_Desc_T;


    typedef enum {
        QSN_5250Q_YES  = '1', QSN_5250Q_NO   = '2', QSN_5250Q_FAIL = '3'
    } QSN_5250q_T;

    typedef _Packed struct Qsn_Qry_5250 {
        Q_Bin4  bytes_returned;
        Q_Bin4  bytes_available;
        char    query_status;
        Q_Bin2  hardware_class;
        char    WSC_code_level[3];
        char    reserved[16];
        char    device_type1;
        char    device_type2[4];
        char    device_model[3];
        char    keyboard_id;
        char    ext_keyboard_id;
        char    PC_keyboard_id;
        char    serial_number[4];
        Q_Bin2  num_input_capable;
        char    WSC_support[2];
        char    reserved3[1];
        char    WSC_display[5];    /* use Qsn_WSC_Display_T to overlay */
        char    reserved4[5];
        char    WSC_printer;
        char    reserved5[1];
        char    grid_buffers;
        char    reserved6[9];
        /* Note: this may be expanded in the future */
    } Qsn_Qry_5250_T;

    typedef _Packed struct {
        /* byte 1 */
        int row1_col1           : 2;
        int Read_MDT_Alt        : 1;
        int PA1_PA2             : 1;
        int PA3                 : 1;
        int csr_select          : 1;
        int move_csr_order      : 1;
        int Read_MDT_Imm_Alt    : 1;
        /* byte 2 */
        int scr_size            : 4;
        int light_pen           : 1;
        int mag_stripe          : 1;
        int color               : 2;
        /* byte 3 */
        int text_symbols        : 1;
        int extended_text_atr   : 1;
        int office_editor       : 3;
        int extended_pri_atr_DP : 1;
        int reserved1           : 2;
        /* byte 4 */
        int DBCS                : 3;
        int bi_directional      : 3;
        int SO_SI_storage       : 1;
        int CCSID_support       : 1; /* @B2A */
        /* byte 5 */
        int graphics            : 3;
        int extended_3270       : 1;
        int pointing_device     : 1;
        int GUI_display         : 1;
        int GUI_support         : 1;
        int window_error        : 1;
        /* end of WSC_display */
        int                     : 0;
    } Qsn_WSC_display_T;

    typedef enum {
        QSN_NO_DBCS=0x00, QSN_SCREEN_DBCS=0x01, QSN_PURE_DBCS=0x02
    } Qsn_DBCS_Supp;

    typedef enum {
        QSN_24x80=0x01, QSN_27x132=0x03
    } Qsn_Scr_Sizes;

    typedef _Packed struct {
        Q_Bin4  bytes_returned;
        Q_Bin4  bytes_available;
        char reserved[8];
        char *dta;
        char *fld_dta;
        Q_Bin4 dta_len;
        Q_Bin4 fld_dta_len;
        Q_Bin4 num_flds;
        Q_Bin4 read_len;
        Q_Bin4 read_row;
        Q_Bin4 read_col;
        Q_Uchar AID;
        char reserved2[7];
    } Qsn_Read_Inf_T;

    typedef enum {
        QSN_FLDQ_NORM = '1', QSN_FLDQ_TRANS = '2'
    } Qsn_Fld_Q;

    typedef _Packed struct {
        Q_Bin4  bytes_returned;
        Q_Bin4  bytes_available;
        char type;
        Q_Bin4 row;
        Q_Bin4 col;
        Q_Bin4 len;
        char reserved[11];
        char *data;
    } Qsn_Fld_Inf_T;


    typedef enum {
        QSN_F1=0x31,   QSN_F2=0x32,    QSN_F3=0x33,    QSN_F4=0x34,
        QSN_F5=0x35,   QSN_F6=0x36,    QSN_F7=0x37,    QSN_F8=0x38,
        QSN_F9=0x39,   QSN_F10=0x3A,   QSN_F11=0x3B,   QSN_F12=0x3C,
        QSN_F13=0xB1,  QSN_F14=0xB2,   QSN_F15=0xB3,   QSN_F16=0xB4,
        QSN_F17=0xB5,  QSN_F18=0xB6,   QSN_F19=0xB7,   QSN_F20=0xB8,
        QSN_F21=0xB9,  QSN_F22=0xBA,   QSN_F23=0xBB,   QSN_F24=0xBC,
        QSN_SLP=0x3F,  QSN_FET=0x50,   QSN_PA1=0x6C,   QSN_PA2=0x6E,
        QSN_PA3=0x6B,  QSN_CLEAR=0xBD, QSN_ENTER=0xF1, QSN_HELP=0xF3,
        QSN_ROLLDOWN=0xF4, QSN_ROLLUP=0xF5, QSN_PRINT=0xF6,
        QSN_RECBS=0xF8
    } Qsn_AID_Codes_T;

    #define QSN_PAGEUP              QSN_ROLLDOWN
    #define QSN_PAGEDOWN            QSN_ROLLUP

    #define QSN_CC1_NULL            0x00
    #define QSN_CC1_LOCKBD          0x20
    #define QSN_CC1_MDTNBY          0x40
    #define QSN_CC1_MDTALL          0x60
    #define QSN_CC1_CLRMOD          0x80
    #define QSN_CC1_MDTNBY_CLRALL   0xA0
    #define QSN_CC1_MDTNBY_CLRMOD   0xC0
    #define QSN_CC1_MDTALL_CLRALL   0xE0

    #define QSN_CC2_NULL            0x00
    #define QSN_CC2_NO_IC           0x40
    #define QSN_CC2_RST_CSR_BL      0x20
    #define QSN_CC2_SET_CSR_BL      0x10
    #define QSN_CC2_UNLOCKBD        0x08
    #define QSN_CC2_ALARM           0x04
    #define QSN_CC2_MSG_OFF         0x02
    #define QSN_CC2_MSG_ON          0x01

    #define QSN_NO_SA               0x00
    #define QSN_SA_NORM             0x20
    #define QSN_SA_CS               0x30
    #define QSN_SA_BL               0x28
    #define QSN_SA_UL               0x24
    #define QSN_SA_HI               0x22
    #define QSN_SA_RI               0x21
    #define QSN_SA_ND               0x27

    #define QSN_SA_GRN              0x20
    #define QSN_SA_GRN_RI           0x21
    #define QSN_SA_WHT              0x22
    #define QSN_SA_WHT_RI           0x23
    #define QSN_SA_GRN_UL           0x24
    #define QSN_SA_GRN_UL_RI        0x25
    #define QSN_SA_WHT_UL           0x26
    #define QSN_SA_RED              0x28
    #define QSN_SA_RED_RI           0x29
    #define QSN_SA_RED_BL           0x2A
    #define QSN_SA_RED_RI_BL        0x2B
    #define QSN_SA_RED_UL           0x2C
    #define QSN_SA_RED_UL_RI        0x2D
    #define QSN_SA_RED_UL_BL        0x2E
    #define QSN_SA_ND_2F            0x2F
    #define QSN_SA_TRQ_CS           0x30
    #define QSN_SA_TRQ_CS_RI        0x31
    #define QSN_SA_YLW_CS           0x32
    #define QSN_SA_YLW_CS_RI        0x33
    #define QSN_SA_TRQ_UL           0x34
    #define QSN_SA_TRQ_UL_RI        0x35
    #define QSN_SA_YLW_UL           0x36
    #define QSN_SA_ND_37            0x37
    #define QSN_SA_PNK              0x38
    #define QSN_SA_PNK_RI           0x39
    #define QSN_SA_BLU              0x3A
    #define QSN_SA_BLU_RI           0x3B
    #define QSN_SA_PNK_UL           0x3C
    #define QSN_SA_PNK_UL_RI        0x3D
    #define QSN_SA_BLU_UL           0x3E
    #define QSN_SA_ND_3F            0x3F

    #define QSN_SO                  0x0E
    #define QSN_SI                  0x0F

    #define QSN_NO_FFW                   0x0000
    #define QSN_FFW_BYPASS               0x6000
    #define QSN_FFW_DUP                  0x5000
    #define QSN_FFW_MDT                  0x4800
    #define QSN_FFW_ALPHA_SHIFT          0x4000
    #define QSN_FFW_ALPHA_ONLY           0x4100
    #define QSN_FFW_NUM_SHIFT            0x4200
    #define QSN_FFW_NUM_ONLY             0x4300
    #define QSN_FFW_KATA                 0x4400
    #define QSN_FFW_DIGIT_ONLY           0x4500
    #define QSN_FFW_IO                   0x4600
    #define QSN_FFW_SIGNED_NUMERIC       0x4700
    #define QSN_FFW_AUTO_ENTER           0x4080
    #define QSN_FFW_FER                  0x4040
    #define QSN_FFW_MONOCASE             0x4020
    #define QSN_FFW_ME                   0x4008
    #define QSN_FFW_NOADUST              0x4000
    #define QSN_FFW_RA_ZERO              0x4005
    #define QSN_FFW_RA_BLANK             0x4006
    #define QSN_FFW_MF                   0x4007

    /* don't use the following two macros, for compatibility only */
    #define QSN_FFW_AUTO_FER             0x4040
    #define QSN_FFW_AUTO_MONOCASE        0x4020

    #define QSN_FCW_RESEQ                0x8000
    #define QSN_FCW_MSR                  0x8101
    #define QSN_FCW_SLP                  0x8102
    #define QSN_FCW_MSR_SLP              0x8103
    #define QSN_FCW_SLP_SA               0x8106
    #define QSN_FCW_DBCS_ONLY            0x8200
    #define QSN_FCW_DBCS_PURE            0x8220
    #define QSN_FCW_DBCS_EITHER          0x8240
    #define QSN_FCW_DBCS_OPEN            0x8280
    #define QSN_FCW_DBCS_OPEN_C0         0x82C0
    #define QSN_FCW_TRANSPARENT          0x8400
    #define QSN_FCW_FET                  0x8501
    #define QSN_FCW_CONT_FIRST           0x8601
    #define QSN_FCW_CONT_LAST            0x8602
    #define QSN_FCW_CONT_MIDDLE          0x8603
    #define QSN_FCW_CP                   0x8800
    #define QSN_FCW_HL                   0x8900
    #define QSN_FCW_PDS                  0x8A00
    #define QSN_FCW_MOD11                0xB140
    #define QSN_FCW_MOD10                0xB1A0

    #define QSN_READ_INP                0x42
    #define QSN_READ_MDT                0x52
    #define QSN_READ_IMM                0x72
    #define QSN_READ_MDT_ALT            0x82

    /* Screen Manipulation and Query Function Prototypes */

#ifdef __cplusplus
    extern "ILE nowiden" {
#else
    #pragma argument(QsnCrtEnv, OS, nowiden)
    #pragma argument(QsnDltEnv, OS, nowiden)
    #pragma argument(QsnInzEnvD, OS, nowiden)
    #pragma argument(QsnRtvEnvD, OS, nowiden)
    #pragma argument(QsnChgEnv, OS, nowiden)
    #pragma argument(QsnRtvEnvDta, OS, nowiden)
    #pragma argument(QsnSetEnvWinMod, OS, nowiden)
    #pragma argument(QsnRtvEnvWinMod, OS, nowiden)
    #pragma argument(QsnQry5250, OS, nowiden)
    #pragma argument(QsnQryColorSup, OS, nowiden)
    #pragma argument(QsnRtvScrDim, OS, nowiden)
    #pragma argument(QsnQryModSup, OS, nowiden)
    #pragma argument(QsnRtvMod, OS, nowiden)
    #pragma argument(QsnClrScr, OS, nowiden)
    #pragma argument(QsnSavScr, OS, nowiden)
    #pragma argument(QsnRstScr, OS, nowiden)
    #pragma argument(QsnClrFldTbl, OS, nowiden)
    #pragma argument(QsnRollUp, OS, nowiden)
    #pragma argument(QsnRollDown, OS, nowiden)
    #pragma argument(QsnCrtCmdBuf, OS, nowiden)
    #pragma argument(QsnCrtInpBuf, OS, nowiden)
    #pragma argument(QsnDltBuf, OS, nowiden)
    #pragma argument(QsnClrBuf, OS, nowiden)
    #pragma argument(QsnCpyBuf, OS, nowiden)
    #pragma argument(QsnRtvBufLen, OS, nowiden)
    #pragma argument(QsnRtvBufSiz, OS, nowiden)
    #pragma argument(QsnPutBuf, OS, nowiden)
    #pragma argument(QsnPutGetBuf, OS, nowiden)
    #pragma argument(QsnRtvReadInf, OS, nowiden)
    #pragma argument(QsnRtvReadAdr, OS, nowiden)
    #pragma argument(QsnRtvReadAID, OS, nowiden)
    #pragma argument(QsnRtvFldDtaLen, OS, nowiden)
    #pragma argument(QsnRtvFldDta, OS, nowiden)
    #pragma argument(QsnRtvFldCnt, OS, nowiden)
    #pragma argument(QsnRtvFldInf, OS, nowiden)
    #pragma argument(QsnRtvDtaLen, OS, nowiden)
    #pragma argument(QsnRtvDta, OS, nowiden)
    #pragma argument(QsnRtvReadLen, OS, nowiden)
    #pragma argument(QsnPutInpCmd, OS, nowiden)
    #pragma argument(QsnReadInp, OS, nowiden)
    #pragma argument(QsnReadMDT, OS, nowiden)
    #pragma argument(QsnReadMDTAlt, OS, nowiden)
    #pragma argument(QsnReadImm, OS, nowiden)
    #pragma argument(QsnReadMDTImmAlt, OS, nowiden)
    #pragma argument(QsnReadScr, OS, nowiden)
    #pragma argument(QsnGetAID, OS, nowiden)
    #pragma argument(QsnGetCsrAdr, OS, nowiden)
    #pragma argument(QsnGetCsrAdrAID, OS, nowiden)
    #pragma argument(QsnPutOutCmd, OS, nowiden)
    #pragma argument(QsnWTD, OS, nowiden)
    #pragma argument(QsnSetOutAdr, OS, nowiden)
    #pragma argument(QsnWrtDta, OS, nowiden)
    #pragma argument(QsnWrtDtaCC, OS, nowiden)  /* @B2A */
    #pragma argument(QsnWrtSFMaj, OS, nowiden)
    #pragma argument(QsnWrtSFMin, OS, nowiden)
    #pragma argument(QsnWrtTDta, OS, nowiden)
    #pragma argument(QsnWrtPad, OS, nowiden)
    #pragma argument(QsnWrtPadAdr, OS, nowiden)
    #pragma argument(QsnSetCsrAdr, OS, nowiden)
    #pragma argument(QsnInsCsr, OS, nowiden)
    #pragma argument(QsnBeep, OS, nowiden)
    #pragma argument(QsnSetErr, OS, nowiden)
    #pragma argument(QsnSetFld, OS, nowiden)
    #pragma argument(QsnSetFldCC, OS, nowiden)  /* @B2A */
    #pragma argument(QsnDltFldId, OS, nowiden)
    #pragma argument(QsnReadInvited, OS, nowiden)
    #pragma argument(QsnRtvAvailData, OS, nowiden)
#endif

    Qsn_Env_T QsnCrtEnv(const Qsn_Env_Desc_T *,
                        Q_Bin4,
                        const Qsn_Env_Ext_Inf_T *,
                        Q_Bin4,
                        Qsn_Env_T *,
                        Q_Fdbk_T *);

    Q_Bin4 QsnDltEnv(Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnInzEnvD(Qsn_Env_Desc_T *,
                      Q_Bin4,
                      Q_Fdbk_T *);

    Q_Bin4 QsnRtvEnvD(Qsn_Env_Rtv_Desc_T *,
                      Q_Bin4,
                      Qsn_Env_T,
                      Q_Fdbk_T *);

    Q_Bin4 QsnChgEnv(const Qsn_Env_Desc_T *,
                     Q_Bin4,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    void   *QsnRtvEnvDta(Qsn_Env_T,
                         void *,
                         Q_Fdbk_T *);

    Q_Bin4 QsnSetEnvWinMod(char,
                           char *,
                           const Qsn_Env_Win_Desc_T *,
                           Q_Bin4,
                           Qsn_Env_T,
                           Q_Fdbk_T *);

    Q_Bin4 QsnRtvEnvWinMod(Qsn_Env_Win_Rtv_Desc_T *,
                           Q_Bin4,
                           Qsn_Env_T,
                           Q_Fdbk_T *);

    Q_Bin4 QsnQry5250(Qsn_Qry_5250_T *,
                      Q_Bin4,
                      Q_Fdbk_T *);

    Q_Bin4 QsnQryColorSup(char *,
                          Qsn_Env_T,
                          Q_Fdbk_T *);

    Q_Bin4 QsnRtvScrDim(Q_Bin4 *,
                        Q_Bin4 *,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnQryModSup(char,
                        char *,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    char QsnRtvMod(char *,
                   Qsn_Env_T,
                   Q_Fdbk_T *);

    Q_Bin4 QsnClrScr(char,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Qsn_Cmd_Buf_T QsnSavScr(Qsn_Cmd_Buf_T *,
                            Qsn_Cmd_Buf_T,
                            Qsn_Env_T,
                            Q_Fdbk_T *);

    Q_Bin4 QsnRstScr(Qsn_Inp_Buf_T,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnClrFldTbl(Qsn_Cmd_Buf_T,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnRollUp(Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnRollDown(Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Qsn_Cmd_Buf_T,
                       Qsn_Env_T,
                       Q_Fdbk_T *);

    /* Buffer Manipulation and Query Function Prototypes */

    Qsn_Cmd_Buf_T QsnCrtCmdBuf(Q_Bin4,
                               Q_Bin4,
                               Q_Bin4,
                               Qsn_Cmd_Buf_T *,
                               Q_Fdbk_T *);

    Qsn_Inp_Buf_T QsnCrtInpBuf(Q_Bin4,
                               Q_Bin4,
                               Q_Bin4,
                               Qsn_Inp_Buf_T *,
                               Q_Fdbk_T *);

    Q_Bin4 QsnDltBuf(Q_Handle_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnClrBuf(Q_Handle_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnCpyBuf(Q_Handle_T,
                     Q_Handle_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnRtvBufLen(Q_Handle_T,
                        Q_Bin4 *,
                        Q_Fdbk_T *);

    Q_Bin4 QsnRtvBufSiz(Q_Handle_T,
                        Q_Bin4 *,
                        Q_Fdbk_T *);

    Q_Bin4 QsnPutBuf(Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnPutGetBuf(Qsn_Cmd_Buf_T,
                        Qsn_Inp_Buf_T,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnRtvReadInf(Qsn_Inp_Buf_T,
                         Qsn_Read_Inf_T *,
                         Q_Bin4,
                         Qsn_Env_T,
                         Q_Fdbk_T *);

    Q_Bin4 QsnRtvReadAdr(Qsn_Inp_Buf_T,
                         Q_Bin4 *,
                         Q_Bin4 *,
                         Qsn_Env_T,
                         Q_Fdbk_T *);

    Q_Uchar QsnRtvReadAID(Qsn_Inp_Buf_T,
                          Q_Uchar *,
                          Q_Fdbk_T *);

    Q_Bin4 QsnRtvFldDtaLen(Qsn_Inp_Buf_T,
                           Q_Bin4 *,
                           Q_Fdbk_T *);

    char *QsnRtvFldDta(Qsn_Inp_Buf_T,
                       char **,
                       Q_Fdbk_T *);

    Q_Bin4 QsnRtvFldCnt(Qsn_Inp_Buf_T,
                        Q_Bin4 *,
                        Q_Fdbk_T *);

    Q_Bin4 QsnRtvFldInf(Qsn_Inp_Buf_T,
                        Q_Bin4,
                        Qsn_Fld_Inf_T *,
                        Q_Bin4,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnRtvDtaLen(Qsn_Inp_Buf_T,
                        Q_Bin4 *,
                        Q_Fdbk_T *);

    char *QsnRtvDta(Qsn_Inp_Buf_T,
                    char **,
                    Q_Fdbk_T *);

    Q_Bin4 QsnRtvReadLen(Qsn_Inp_Buf_T,
                         Q_Bin4 *,
                         Q_Fdbk_T *);

    Q_Bin4 QsnRtvAvailData(Qsn_Inp_Buf_T,
                           Q_Bin4 *,
                           Q_Fdbk_T *);


    /* Screen Input Function Prototypes */

    Q_Bin4 QsnPutInpCmd(Q_Uchar,
                        const char *,
                        Q_Bin4,
                        Q_Bin4 *,
                        Qsn_Inp_Buf_T,
                        Qsn_Cmd_Buf_T,
                        Qsn_Env_T,
                        Q_Fdbk_T *fdbk);

    Q_Bin4 QsnReadInp(Q_Uchar,
                      Q_Uchar,
                      Q_Bin4 *,
                      Qsn_Inp_Buf_T,
                      Qsn_Cmd_Buf_T,
                      Qsn_Env_T,
                      Q_Fdbk_T *fdbk);

    Q_Bin4 QsnReadMDT(Q_Uchar,
                      Q_Uchar,
                      Q_Bin4 *,
                      Qsn_Inp_Buf_T,
                      Qsn_Cmd_Buf_T,
                      Qsn_Env_T,
                      Q_Fdbk_T *);

    Q_Bin4 QsnReadMDTAlt(Q_Uchar,
                         Q_Uchar,
                         Q_Bin4 *,
                         Qsn_Inp_Buf_T,
                         Qsn_Cmd_Buf_T,
                         Qsn_Env_T,
                         Q_Fdbk_T *);

    Q_Bin4 QsnReadImm(Q_Bin4 *,
                      Qsn_Inp_Buf_T,
                      Qsn_Cmd_Buf_T,
                      Qsn_Env_T,
                      Q_Fdbk_T *);

    Q_Bin4 QsnReadMDTImmAlt(Q_Bin4 *,
                            Qsn_Inp_Buf_T,
                            Qsn_Cmd_Buf_T,
                            Qsn_Env_T,
                            Q_Fdbk_T *);

    Q_Bin4 QsnReadScr(Q_Bin4 *,
                      Qsn_Inp_Buf_T,
                      Qsn_Cmd_Buf_T,
                      Qsn_Env_T,
                      Q_Fdbk_T *);

    Q_Uchar QsnGetAID(Q_Uchar *,
                      Qsn_Env_T,
                      Q_Fdbk_T *);

    Q_Bin4 QsnGetCsrAdr(Q_Bin4 *,
                        Q_Bin4 *,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnGetCsrAdrAID(Q_Bin4 *,
                           Q_Bin4 *,
                           Q_Uchar *,
                           Qsn_Env_T,
                           Q_Fdbk_T *);

    Q_Bin4 QsnReadInvited(const Qsn_Inp_Buf_T,
                          const Qsn_Cmd_Buf_T,
                          const Qsn_Env_T,
                          Q_Bin4 *,
                          Q_Fdbk_T *);


    /* Screen Output Function Prototypes */

    Q_Bin4 QsnPutOutCmd(Q_Uchar,
                        const char *,
                        Q_Bin4,
                        Qsn_Cmd_Buf_T,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnWTD(Q_Uchar,
                  Q_Uchar,
                  Qsn_Cmd_Buf_T,
                  Qsn_Env_T,
                  Q_Fdbk_T *);

    Q_Bin4 QsnSetOutAdr(Q_Bin4,
                        Q_Bin4,
                        Q_Bin4,
                        Qsn_Cmd_Buf_T,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnWrtDta(const char *,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Uchar,
                     Q_Uchar,
                     Q_Uchar,
                     Q_Uchar,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnWrtDtaCC(const char *,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Uchar,
                       Q_Uchar,
                       Q_Uchar,
                       Q_Uchar,
                       Qsn_Cmd_Buf_T,
                       Qsn_Env_T,
                       Q_Fdbk_T *); /* @B2A */

    Q_Bin4 QsnWrtSFMaj(const char *,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Qsn_Cmd_Buf_T,
                       Qsn_Env_T,
                       Q_Fdbk_T *);

    Q_Bin4 QsnWrtSFMin(const char *,
                       Q_Bin4,
                       Qsn_Cmd_Buf_T,
                       Qsn_Env_T,
                       Q_Fdbk_T *);

    Q_Bin4 QsnWrtTDta(const char *,
                      Q_Bin4,
                      Q_Bin4,
                      Q_Bin4,
                      Q_Bin4,
                      Q_Uchar,
                      Q_Uchar,
                      Q_Uchar,
                      Q_Uchar,
                      Qsn_Cmd_Buf_T,
                      Qsn_Env_T,
                      Q_Fdbk_T *);

    Q_Bin4 QsnWrtPad(char,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnWrtPadAdr(char,
                        Q_Bin4,
                        Q_Bin4,
                        Q_Bin4,
                        Q_Bin4,
                        Qsn_Cmd_Buf_T,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnSetCsrAdr(Q_Bin4,
                        Q_Bin4,
                        Q_Bin4,
                        Qsn_Cmd_Buf_T,
                        Qsn_Env_T,
                        Q_Fdbk_T *);

    Q_Bin4 QsnInsCsr(Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnBeep(Qsn_Cmd_Buf_T,
                   Qsn_Env_T,
                   Q_Fdbk_T *);

    Q_Bin4 QsnSetErr(char *,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Uchar,
                     Q_Uchar,
                     Q_Uchar,
                     Q_Uchar,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnSetFld(Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Q_Bin4,
                     Q_UBin2,
                     const Q_UBin2[],  /* pass an array of Q_UBin2 */
                     Q_Bin4,
                     Q_Uchar,
                     Q_Uchar,
                     Qsn_Cmd_Buf_T,
                     Qsn_Env_T,
                     Q_Fdbk_T *);

    Q_Bin4 QsnSetFldCC(Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_Bin4,
                       Q_UBin2,
                       const Q_UBin2[],  /* pass an array of Q_UBin2 */
                       Q_Bin4,
                       Q_Uchar,
                       Q_Uchar,
                       Qsn_Cmd_Buf_T,
                       Qsn_Env_T,
                       Q_Fdbk_T *); /* @B2A */


    Q_Bin4 QsnDltFldId(Q_Bin4,
                       Q_Fdbk_T *);
#ifdef __cplusplus
    }
#endif


/* ================================================================= */
/*                                                                   */
/*  Declarations and definitions for the DSM window services         */
/*                                                                   */
/* ================================================================= */

  typedef struct {
     Q_Uchar  non_cur_border;
     Q_Uchar  cur_border;
     Q_Uchar  leading;
  } Qsn_Win_Dsp_Atr_T;

  typedef struct {
     Qsn_Win_Dsp_Atr_T  dsp_atr_mono;
     Qsn_Win_Dsp_Atr_T  dsp_atr_color;
  } Qsn_Win_Svcs_Atr_T;

  typedef Qsn_Env_T Qsn_Win_T;

  typedef void (*Qsn_Chg_FP) (const Qsn_Win_T *);
  typedef void (*Qsn_Dlt_FP) (const Qsn_Win_T *);
  typedef void (*Qsn_Chg_Coord_FP) (const Qsn_Win_T *,
                                    const Q_Bin4 *, const Q_Bin4 *,
                                    const Q_Bin4 *, const Q_Bin4 * );
  typedef void (*Qsn_Draw_FP) (const Qsn_Win_T *, const Qsn_Cmd_Buf_T *);
  typedef void (*Qsn_Cur_FP) (const Qsn_Win_T *);

  typedef _Packed struct {
     Q_Bin4              top_row;
     Q_Bin4              left_col;
     Q_Bin4              num_rows;
     Q_Bin4              num_cols;
     Q_Bin4              min_num_rows;
     Q_Bin4              min_num_cols;
     Q_Bin4              max_num_rows;
     Q_Bin4              max_num_cols;
     char                fullscreen;
     Qsn_Win_Dsp_Atr_T   dsp_atr_mono;
     Qsn_Win_Dsp_Atr_T   dsp_atr_color;
     char                show_border;
     char                show_border_atr;
     char                show_leading_atr;
     char                show_right_cont_atr;
     char                msg_line;
     char                upper_left_border_char;
     char                top_border_char;
     char                upper_right_border_char;
     char                left_border_char;
     char                right_border_char;
     char                lower_left_border_char;
     char                bottom_border_char;
     char                lower_right_border_char;
     char                GUI_support;
     char                crt_win_flag_byte_1;
     char                crt_win_flag_byte_2;
     char                crt_win_reserved;
     char                border_flags;
     char                title_flags;
     Q_Uchar             title_atr_mono;
     Q_Uchar             title_atr_color;
     char                title_reserved;
     char                reserved1[3];
     Q_Bin4              title_offset;
     Q_Bin4              title_len;
     Q_Bin4              reserved2;
  } Qsn_Win_Desc_T;

  typedef _Packed struct {
     Q_Bin4              bytes_returned;
     Q_Bin4              bytes_available;
     Q_Bin4              top_row;
     Q_Bin4              left_col;
     Q_Bin4              num_rows;
     Q_Bin4              num_cols;
     Q_Bin4              min_num_rows;
     Q_Bin4              min_num_cols;
     Q_Bin4              max_num_rows;
     Q_Bin4              max_num_cols;
     char                fullscreen;
     Qsn_Win_Dsp_Atr_T   dsp_atr_mono;
     Qsn_Win_Dsp_Atr_T   dsp_atr_color;
     char                show_border;
     char                show_border_atr;
     char                show_leading_atr;
     char                show_right_cont_atr;
     char                msg_line;
     char                upper_left_border_char;
     char                top_border_char;
     char                upper_right_border_char;
     char                left_border_char;
     char                right_border_char;
     char                lower_left_border_char;
     char                bottom_border_char;
     char                lower_right_border_char;
     char                GUI_support;
     char                crt_win_flag_byte_1;
     char                crt_win_flag_byte_2;
     char                crt_win_reserved;
     char                border_flags;
     char                title_flags;
     Q_Uchar             title_atr_mono;
     Q_Uchar             title_atr_color;
     char                title_reserved;
     char                reserved1[3];
     Q_Bin4              title_offset;
     Q_Bin4              title_len;
     Q_Bin4              reserved2;
  } Qsn_Win_Rtv_Desc_T;

  typedef struct {
     void               *usr_dta_p;
     Qsn_Chg_FP          chg_fp;
     Qsn_Dlt_FP          dlt_fp;
     Qsn_Chg_Coord_FP    chg_coord_fp;
     Qsn_Draw_FP         draw_fp;
     Qsn_Cur_FP          cur_fp;
  } Qsn_Win_Ext_Inf_T;

  typedef struct {
     Q_Uchar  initial;
     Q_Uchar  terminating;
  } Qsn_Scr_Atr_T;

  /* Window Manipulation and Query Interfaces */

#ifdef __cplusplus
  extern "ILE nowiden" {
#else
  #pragma argument(QsnSetWinAtr, OS, nowiden)
  #pragma argument(QsnCrtWin, OS, nowiden)
  #pragma argument(QsnStrWin, OS, nowiden)
  #pragma argument(QsnEndWin, OS, nowiden)
  #pragma argument(QsnInzWinD, OS, nowiden)
  #pragma argument(QsnRtvWinD, OS, nowiden)
  #pragma argument(QsnChgWin, OS, nowiden)
  #pragma argument(QsnRtvWinDta, OS, nowiden)
  #pragma argument(QsnMovWin, OS, nowiden)
  #pragma argument(QsnMovWinUsr, OS, nowiden)
  #pragma argument(QsnRszWin, OS, nowiden)
  #pragma argument(QsnRszWinUsr, OS, nowiden)
  #pragma argument(QsnClrWin, OS, nowiden)
  #pragma argument(QsnDspWin, OS, nowiden)
  #pragma argument(QsnPutWinMsg, OS, nowiden)
  #pragma argument(QsnClrWinMsg, OS, nowiden)
  #pragma argument(QsnRtvCurWin, OS, nowiden)
  #pragma argument(QsnSetCurWin, OS, nowiden)
#endif


  Q_Bin4     QsnSetWinAtr ( const Qsn_Win_Svcs_Atr_T *, Q_Bin4,
                            Q_Fdbk_T * );

  Qsn_Win_T  QsnCrtWin ( const Qsn_Win_Desc_T *, Q_Bin4,
                         const Qsn_Win_Ext_Inf_T *, Q_Bin4,
                         char,
                         const Qsn_Env_Desc_T *, Q_Bin4,
                         Qsn_Win_T *, Q_Fdbk_T * );

  Q_Bin4     QsnStrWin ( Qsn_Win_T, char,
                         Q_Fdbk_T * );

  Q_Bin4     QsnEndWin ( Qsn_Win_T, char,
                         Q_Fdbk_T * );

  Q_Bin4     QsnInzWinD ( Qsn_Win_Desc_T *, Q_Bin4,
                          Q_Fdbk_T * );

  Q_Bin4     QsnRtvWinD ( Qsn_Win_T, Qsn_Win_Rtv_Desc_T *,
                          Q_Bin4, Q_Fdbk_T * );

  Q_Bin4     QsnChgWin ( Qsn_Win_T, const Qsn_Win_Desc_T *,
                         Q_Bin4, Q_Fdbk_T * );

  void      *QsnRtvWinDta ( Qsn_Win_T, void **, Q_Fdbk_T * );

  Q_Bin4     QsnMovWin ( Qsn_Win_T, Q_Bin4,
                         Q_Bin4, Q_Fdbk_T * );

  Q_Bin4     QsnMovWinUsr ( Qsn_Win_T, Q_Fdbk_T * );

  Q_Bin4     QsnRszWin ( Qsn_Win_T, Q_Bin4,
                         Q_Bin4, Q_Fdbk_T * );

  Q_Bin4     QsnRszWinUsr ( Qsn_Win_T, Q_Fdbk_T * );

  /* Window I/O Interfaces */

  Q_Bin4     QsnClrWin ( Qsn_Win_T, Q_Fdbk_T * );

  Q_Bin4     QsnDspWin ( Qsn_Win_T, Q_Fdbk_T * );

  Q_Bin4     QsnPutWinMsg ( Qsn_Win_T, const char *,
                            Q_Bin4, char,
                            const char *, const char *,
                            Q_Bin4, Q_Bin4,
                            Q_Uchar, Q_Uchar,
                            Q_Uchar, Q_Uchar,
                            Q_Fdbk_T * );

  Q_Bin4     QsnClrWinMsg ( Qsn_Win_T, Q_Fdbk_T * );

  /* Window Manager Interfaces */

  Qsn_Win_T  QsnRtvCurWin ( Qsn_Win_T *, Q_Fdbk_T * );

  Q_Bin4     QsnSetCurWin ( Qsn_Win_T, Q_Fdbk_T * );
#ifdef __cplusplus
    }
#endif

/* ================================================================= */
/*                                                                   */
/*  Declarations and definitions for the DSM session services        */
/*                                                                   */
/* ================================================================= */

#define QSN_NUMBER_CMD_KEYS     24

#define QSN_CMD_KEY1             0
#define QSN_CMD_KEY2             1
#define QSN_CMD_KEY3             2
#define QSN_CMD_KEY4             3
#define QSN_CMD_KEY5             4
#define QSN_CMD_KEY6             5
#define QSN_CMD_KEY7             6
#define QSN_CMD_KEY8             7
#define QSN_CMD_KEY9             8
#define QSN_CMD_KEY10            9
#define QSN_CMD_KEY11           10
#define QSN_CMD_KEY12           11
#define QSN_CMD_KEY13           12
#define QSN_CMD_KEY14           13
#define QSN_CMD_KEY15           14
#define QSN_CMD_KEY16           15
#define QSN_CMD_KEY17           16
#define QSN_CMD_KEY18           17
#define QSN_CMD_KEY19           18
#define QSN_CMD_KEY20           19
#define QSN_CMD_KEY21           20
#define QSN_CMD_KEY22           21
#define QSN_CMD_KEY23           22
#define QSN_CMD_KEY24           23


  typedef Q_Handle_T        Qsn_Ssn_T;
  typedef Qsn_Win_Ext_Inf_T Qsn_Ssn_Ext_Inf_T;

  typedef void (*Qsn_Cmd_Key_Action_FP) ( const Qsn_Ssn_T *,
                                          const Qsn_Inp_Buf_T *,
                                          char * );

  void QsnDefaultAction( const Qsn_Ssn_T *, const Qsn_Inp_Buf_T *,
                         char * );

  void QsnSameAction( const Qsn_Ssn_T *, const Qsn_Inp_Buf_T *,
                      char * );

  typedef _Packed struct {
     Qsn_Cmd_Key_Action_FP     cmd_key_action[QSN_NUMBER_CMD_KEYS];
     Q_Bin4                    scl_top_row;
     Q_Bin4                    scl_left_col;
     Q_Bin4                    scl_num_rows;
     Q_Bin4                    scl_num_cols;
     Q_Bin4                    scl_dft_roll_amt;
     Q_Bin4                    scl_dft_shift_amt;
     Q_Bin4                    scl_buf_init_size;
     Q_Bin4                    scl_buf_max_size;
     Q_Bin4                    scl_buf_incr;
     Q_Bin4                    num_input_line_rows;
     char                      reserved3;
     char                      wrap;
     char                      reserved4;
     char                      EBCDIC_dsp_cc;
     char                      echo_input;
     char                      scl_line_dsp;
     char                      scl_chr_dsp;
     char                      show_cmd_keys;
     Q_Uchar                   cmd_key_atr_mono;
     Q_Uchar                   cmd_key_atr_color;
     Q_Uchar                   input_line_atr_mono;  /* @B1A*/
     Q_Uchar                   input_line_atr_color; /* @B1A*/
     Q_Bin4                    input_prompt_offset;
     Q_Bin4                    input_prompt_len;
     Q_Bin4                    cmd_key_desc_line_1_offset;
     Q_Bin4                    cmd_key_desc_line_1_len;
     Q_Bin4                    cmd_key_desc_line_2_offset;
     Q_Bin4                    cmd_key_desc_line_2_len;
     Q_Bin4                    reserved2;
     void                      *reserved5;
  } Qsn_Ssn_Desc_T;

  typedef _Packed struct {
     Q_Bin4                    bytes_returned;
     Q_Bin4                    bytes_available;
     char                      reserved9[8];
     Qsn_Cmd_Key_Action_FP     cmd_key_action[QSN_NUMBER_CMD_KEYS];
     Q_Bin4                    scl_top_row;
     Q_Bin4                    scl_left_col;
     Q_Bin4                    scl_num_rows;
     Q_Bin4                    scl_num_cols;
     Q_Bin4                    scl_dft_roll_amt;
     Q_Bin4                    scl_dft_shift_amt;
     Q_Bin4                    scl_buf_init_size;
     Q_Bin4                    scl_buf_max_size;
     Q_Bin4                    scl_buf_incr;
     Q_Bin4                    num_input_line_rows;
     char                      reserved3;
     char                      wrap;
     char                      reserved4;
     char                      EBCDIC_dsp_cc;
     char                      echo_input;
     char                      scl_line_dsp;
     char                      scl_chr_dsp;
     char                      show_cmd_keys;
     Q_Uchar                   cmd_key_atr_mono;
     Q_Uchar                   cmd_key_atr_color;
     Q_Uchar                   input_line_atr_mono;  /* @B1A*/
     Q_Uchar                   input_line_atr_color; /* @B1A*/
     Q_Bin4                    input_prompt_offset;
     Q_Bin4                    input_prompt_len;
     Q_Bin4                    cmd_key_desc_line_1_offset;
     Q_Bin4                    cmd_key_desc_line_1_len;
     Q_Bin4                    cmd_key_desc_line_2_offset;
     Q_Bin4                    cmd_key_desc_line_2_len;
     Q_Bin4                    reserved2;
     void                      *reserved5;
  } Qsn_Ssn_Rtv_Desc_T;

  /* Session Manipulation and Query Interfaces */

#ifdef __cplusplus
  extern "ILE nowiden" {
#else
  #pragma argument(QsnCrtSsn, OS, nowiden )
  #pragma argument(QsnClrScl, OS, nowiden )
  #pragma argument(QsnInzSsnD, OS, nowiden )
  #pragma argument(QsnRtvSsnD, OS, nowiden )
  #pragma argument(QsnChgSsn, OS, nowiden )
  #pragma argument(QsnRtvSsnDta, OS, nowiden )
  #pragma argument(QsnQrySclWrp, OS, nowiden )
  #pragma argument(QsnTglSclWrp, OS, nowiden )
  #pragma argument(QsnRtvSclNumRoll, OS, nowiden )
  #pragma argument(QsnRollSclUp, OS, nowiden )
  #pragma argument(QsnRollSclDown, OS, nowiden )
  #pragma argument(QsnDspSclT, OS, nowiden )
  #pragma argument(QsnDspSclB, OS, nowiden )
  #pragma argument(QsnRtvSclNumShf, OS, nowiden )
  #pragma argument(QsnShfSclL, OS, nowiden )
  #pragma argument(QsnShfSclR, OS, nowiden )
  #pragma argument(QsnReadSsnDta, OS, nowiden )
  #pragma argument(QsnReadSsnDtaCC, OS, nowiden ) /* @B3A */
  #pragma argument(QsnWrtSclLin, OS, nowiden )
  #pragma argument(QsnWrtSclLinCC, OS, nowiden )  /* @B3A */
  #pragma argument(QsnWrtSclChr, OS, nowiden )
  #pragma argument(QsnWrtSclChrCC, OS, nowiden )  /* @B3A */
  #pragma argument(QsnRtvSsnLin, OS, nowiden )
  #pragma argument(QsnSclFF, OS, nowiden )
  #pragma argument(QsnPrtScl, OS, nowiden )
  #pragma argument(QsnSclNL, OS, nowiden )
  #pragma argument(QsnSclBS, OS, nowiden )
  #pragma argument(QsnSclCR, OS, nowiden )
  #pragma argument(QsnSclLF, OS, nowiden )
  #pragma argument(QsnSclTab, OS, nowiden )

#endif

  Qsn_Ssn_T  QsnCrtSsn ( const Qsn_Ssn_Desc_T *, Q_Bin4,
                         const Qsn_Ssn_Ext_Inf_T *, Q_Bin4,
                         char,
                         const Qsn_Win_Desc_T *, Q_Bin4,
                         const Qsn_Env_Desc_T *, Q_Bin4,
                         Qsn_Ssn_T *, Q_Fdbk_T * );

  Q_Bin4     QsnClrScl ( Qsn_Ssn_T, Q_Uchar,
                         Q_Fdbk_T * );

  Q_Bin4     QsnInzSsnD ( Qsn_Ssn_Desc_T *, Q_Bin4,
                          Q_Fdbk_T * );

  Q_Bin4     QsnRtvSsnD ( Qsn_Ssn_T, Qsn_Ssn_Rtv_Desc_T *,
                          Q_Bin4, Q_Fdbk_T * );

  Q_Bin4     QsnChgSsn ( Qsn_Ssn_T, const Qsn_Ssn_Desc_T *,
                         Q_Bin4, Q_Fdbk_T * );

  void      *QsnRtvSsnDta ( Qsn_Ssn_T, void **, Q_Fdbk_T * );

  Q_Bin4     QsnQrySclWrp ( Qsn_Ssn_T, char *, Q_Fdbk_T * );

  Q_Bin4     QsnTglSclWrp ( Qsn_Ssn_T, char *, Q_Fdbk_T * );

  Q_Bin4     QsnRtvSclNumRoll ( Qsn_Ssn_T, Q_Bin4 *,
                                Q_Fdbk_T * );

  Q_Bin4     QsnRollSclUp ( Qsn_Ssn_T, Q_Bin4,
                            Q_Fdbk_T * );

  Q_Bin4     QsnRollSclDown ( Qsn_Ssn_T, Q_Bin4,
                              Q_Fdbk_T * );

  Q_Bin4     QsnDspSclT ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnDspSclB ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnRtvSclNumShf ( Qsn_Ssn_T, Q_Bin4 *, Q_Fdbk_T * )        ;

  Q_Bin4     QsnShfSclL ( Qsn_Ssn_T, Q_Bin4,
                          Q_Fdbk_T * );

  Q_Bin4     QsnShfSclR ( Qsn_Ssn_T, Q_Bin4,
                          Q_Fdbk_T * );

  /* Session I/O Interfaces */

  Q_Bin4     QsnReadSsnDta ( Qsn_Ssn_T, Qsn_Inp_Buf_T,
                             Q_Bin4 *, Q_Fdbk_T * );

  Q_Bin4     QsnReadSsnDtaCC ( Qsn_Ssn_T, Qsn_Inp_Buf_T,
                               Q_Bin4 , Q_Bin4 *, Q_Fdbk_T * ); /* @B3A */

  Q_Bin4     QsnWrtSclLin ( Qsn_Ssn_T, char *,
                            Q_Bin4, Q_Fdbk_T * );

  Q_Bin4     QsnWrtSclLinCC ( Qsn_Ssn_T, char *,
                              Q_Bin4, Q_Bin4, Q_Fdbk_T * );     /* @B3A */

  Q_Bin4     QsnWrtSclChr ( Qsn_Ssn_T, char *,
                            Q_Bin4, Q_Fdbk_T * );

  Q_Bin4     QsnWrtSclChrCC ( Qsn_Ssn_T, char *,
                              Q_Bin4, Q_Bin4, Q_Fdbk_T * );     /* @B3A */

  Q_Bin4     QsnRtvSsnLin ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnSclFF ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnPrtScl ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnSclNL ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnSclBS ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnSclCR ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnSclLF ( Qsn_Ssn_T, Q_Fdbk_T * );

  Q_Bin4     QsnSclTab ( Qsn_Ssn_T, Q_Fdbk_T * );
#ifdef __cplusplus
    }
#endif

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif /* #ifndef _qsnapi_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

