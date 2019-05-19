#ifndef  __xxfdbk_h
   #define __xxfdbk_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================== */
/*  Header File Name: xxfdbk.h                                       */
/*                                                                    */
/*  This header contains the declaration used by the OS/400 feedback  */
/*  area interface routines.                                          */
/*                                                                    */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1991,2001                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================== */

   #if defined (__EXTENDED__)

     #ifndef    __stdio_h
        #include <stdio.h>
     #endif

     #define _MAX_KEY_SIZE  2000

     /***************************************************************/
     /* D E V I C E   N A M E   L I S T                             */
     /*                                                             */
     /* This structure maps the Device name definition list.        */
     /*                                                             */
     /***************************************************************/

     typedef _Packed struct _XXDEV_LST_T {
        char        pgm_dev_name[10];
        char        reserved1[50];
        char        dev_desc_name[10];
        char        dev_class;
        char        dev_type;
        short       num_rows;
        short       num_columns;

        /* BIT FLAGS...               */

        int         blink_capability_flag    : 1;
        int         dev_location_flag        : 1;
        int         acquire_status_flag      : 1;
        int         invite_status_flag       : 1;
        int         data_avail_status_flag   : 1;
        int         transaction_status_flag  : 1;
        int         requester_dev_flag       : 1;
        int         DBCS_dev_flag            : 1;
        int                                  : 2;    /* reserved   */
        int         DBCS_keyboard_flag       : 1;
        int                                  : 5;    /* reserved   */

        char        synch_level;
        char        conversation_type;
        char        reserved2[50];
     } _XXDEV_LST_T;

     /****************************************************************/
     /*  O P E N   F E E D B A C K   A R E A                         */
     /*                                                              */
     /*  This structure maps the Open feedback area information.     */
     /*                                                              */
     /****************************************************************/
     typedef _Packed struct _XXOPFB_T {
         char        odp_type[2];
         char        file_name[10];
         char        library_name[10];
         char        spool_file_name[10];
         char        spool_lib_name[10];
         short       spool_file_num;
         short       pgm_record_len;
         char        reserved1[2];
         char        member_name[10];
         char        reserved2[8];
         short       file_type;
         char        reserved3[3];
         short       rows;
         short       columns;
         int         num_records;
         char        access_type[2];
         char        dup_key_indic;
         char        src_file_indic;
         char        reserved4[10];
         char        reserved5[10];
         short       vol_label_offset;
         short       max_blocked_recs;
         short       overflow_line_num;
         short       blocked_rec_incr;
         char        reserved6[4];

         /* MISCELLANEOUS FLAGS...     */

         int                                  : 1;    /* reserved   */
         int         file_sharable_flag       : 1;
         int         commit_control_flag      : 1;
         int         commit_lock_level_flag   : 1;
         int         mbr_type_flag            : 1;
         int         field_level_file_flag    : 1;
         int         DBCS_capable_flag        : 1;
         int         EOF_delay_flag           : 1;

         char        requester_dev_name[10];
         short       file_open_count;
         char        reserved7[2];
         short       num_based_pf_mbrs;

         int         mult_mbr_process_flag    : 1;
         int         join_logical_file_flag   : 1;
         int         local_remote_data_flag   : 1;
         int         remote_AS400_S38_flag    : 1;
         int         sep_indic_area_flag      : 1;
         int         user_buffers_flag        : 1;
         int                                  : 2;      /* reserved   */
         char        reserved8[2];
         short       max_rcd_length;
         unsigned short  ccsid;
         int         null_capable             : 1;
         int         varlen_fields_file       : 1;
         int         varlen_record_file       : 1;
         int         ccsid_sub_char           : 1;
         int         reserved9                : 4;
         char        reserved10[4];
         short       max_pgm_devices;
         short       num_pgm_devices;
         _XXDEV_LST_T dev_list_array[250];
     } _XXOPFB_T;


     /***************************************************************/
     /* V O L U M E   L A B E L   F I E L D                         */
     /*                                                             */
     /* This structure maps the Volume label field for              */
     /* diskettes and tapes.                                        */
     /*                                                             */
     /* Add 'vol_label_offset' to the beginning of the open feedback*/
     /* area to get to the volume label field in storage.           */
     /*                                                             */
     /***************************************************************/
     typedef _Packed struct _XXVOL_LAB_T {
         char        vol_label_cur_vol[128];
         char        hdr_label1[128];
         char        hdr_label2[128];
     } _XXVOL_LAB_T;

     /***************************************************************/
     /* C O M M O N   I - O   F E E D B A C K   A R E A             */
     /*                                                             */
     /* This structure maps the common part of the I-O feedback     */
     /* area.                                                       */
     /*                                                             */
     /***************************************************************/
     typedef _Packed struct _XXIOFB_T {
         short       file_dep_fb_offset;
         int         write_count;
         int         read_count;
         int         write_read_count;
         int         other_io_count;
         char        reserved1;
         char        cur_operation;
         char        rec_format[10];
         char        dev_class[2];
         char        dev_name[10];
         int         last_io_rec_len;
         char        reserved2[80];
         short       num_recs_retrieved;
         short       last_io_rec_len2;
         char        reserved3[2];
         int         cur_blk_count;
         char        reserved4[8];
     } _XXIOFB_T;


     /***************************************************************/
     /* P R I N T E R   I - O   F E E D B A C K   A R E A           */
     /*                                                             */
     /* This structure maps the I/O feedback information for        */
     /* system printers.                                            */
     /*                                                             */
     /***************************************************************/
     typedef _Packed struct _XXIOFB_PRT_T {
        short        cur_page_line_num;
        int          cur_page_count;
         char        reserved1[28];
         char        major_ret_code[2];
         char        minor_ret_code[2];
     } _XXIOFB_PRT_T;

     /***************************************************************/
     /* D A T A B A S E   I - O   F E E D B A C K   A R E A         */
     /*                                                             */
     /* This structure maps the I/O feedback information for        */
     /* data base files.                                            */
     /*                                                             */
     /***************************************************************/
     typedef _Packed struct _XXIOFB_DB_T  {
        int          db_fdbk_size;
        char         join_default_flags[4];
        char         reserved1[2];
        short        num_locked_recs;
        short        fields_in_fmt;
        char         reserved2[4];
        char         reserved3;

        /* -------------------------- */
        /* Record deleted indication  */
        /* -------------------------- */
        int                                 : 3;   /* reserved   */
        int          deleted_rec_flag       : 1;
        int          write_op_key_fb_flag   : 1;
        int          file_pos_changed_flag  : 1;
        int                                 : 2;   /* reserved   */

        short        num_key_fields;
        char         reserved4[4];
        short        key_len;
        short        data_mbr_num;
        int          data_mbr_RRN;
        char         key_value[_MAX_KEY_SIZE];
     } _XXIOFB_DB_T;

     /***************************************************************/
     /* D S P / I C F   I - O   F E E D B A C K   A R E A           */
     /*                                                             */
     /* This structure maps the I/O feedback information for        */
     /* display and ICF devices.                                    */
     /*                                                             */
     /***************************************************************/
     typedef _Packed struct _XXIOFB_DSP_ICF_T {

        /* BIT FLAGS...               */
        int          cancel_read_indic      : 1;
        int          data_returned_indic    : 1;
        int          cmd_key_indic          : 1;
        int                                 : 13;   /* reserved   */

        char         AID_byte_indic;
        char         cursor_location[2];
        int          actual_data_len;
        short        subfile_RRN;
        short        subfile_lowest_RRN;
        short        subfile_num_recs;
        char         reserved1[19];
        char         major_ret_code[2];
        char         minor_ret_code[2];
        char         SNA_sense_ret_code[8];
        char         safe_indic;
        char         reserved2;
        char         request_writer;
        char         remote_fmt_name[10];
        char         reserved3[4];
        char         mode_name[8];
        char         reserved4[9];
     } _XXIOFB_DSP_ICF_T;

     /***************************************************************/
     /* D E V I C E   A T T R I B U T E S                           */
     /*                                                             */
     /* This structure maps the device attributes which are         */
     /* obtained when a data management GET-ATTRIBUTE operation     */
     /* is performed.                                               */
     /*                                                             */
     /***************************************************************/
     typedef _Packed struct _XXDEV_ATR_T {
        char         pgm_dev_name[10];
        char         dev_desc_name[10];
        char         user_id[10];
        char         dev_class;
        char         dev_type[6];
        char         requester_dev_indic;
        char         acquire_status_indic;
        char         invite_status_indic;
        char         data_avail_status_indic;
        short        num_rows;
        short        num_columns;
        char         blink_capability_indic;
        char         online_status_indic;
        char         local_remote_indic;
        char         DBCS_dev_indic;
        char         DBCS_keyboard_indic;
        char         conversation_status;
        char         synch_level;
        char         conversation_type;
        char         remote_loc_name[8];
        char         local_lu_name[8];
        char         local_net_id[8];
        char         remote_lu_name[8];
        char         remote_net_id[8];
        char         mode[8];
        char         reserved[43];
        unsigned short
                     remote_num_len;
        char         remote_num_type[2];
        char         remote_num_plan[2];
        char         remote_number[40];
        char         reserved1[4];
        unsigned short
                     subaddr_len;
        char         subaddr_type[2];
        char         remote_subaddr[40];
        char         reserved2;
        char         call_type;
        unsigned short
                     remote_net_addr_len;
        char         remote_net_addr[32];
        char         reserved3[4];
        unsigned short
                     remote_addr_ext_len;
        char         remote_addr_ext_type;
        char         remote_addr_ext[40];
        char         reserved4[4];
        char         x25_call_type;
        char         trans_prog_name[64];
     } _XXDEV_ATR_T;

   #endif  /* ifndef __EXTENDED__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif     /* ifndef __xxfdbk_h */
