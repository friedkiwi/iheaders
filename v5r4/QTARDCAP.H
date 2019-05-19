/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1995, 2005                                */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTARDCAP                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Device Capabilities QTARDCAP desc   */
 /*                                                                */
 /* Description: The Retrieve Device Capabilities (QTARDCAP) API   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTARDCAP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  P3634292     3P70  112596 HOOVEY    Creation              */
 /* $A1  P3634292     4D10  120696 HOOVEY    4D10 D95048.1 changes */
 /* $JS  D95871       4D40  980728 ROCH      Added information     */
 /* $YE  D99880.1     5D40  040502 ROCH      Added WORM support    */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTARDCAP_h
 #define QTARDCAP_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Retrieve Device Capabilities (QTARDCAP)  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARDCAP,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTARDCAP (char *,            /* Receiver variable              */
                int,               /* Len of receiver variable       */
                char *,            /* Format name                    */
                char *,            /* Device or resource: ie TAP01   */
                char *,            /* Indicator: *DEVD or *RSRC      */
                char *,            /* Resource type to include       */
                void *);           /* Error code                     */


 /******************************************************************/
 /* Type Definition for the TAPE0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_TAPE0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Device_name[10];
       char Device_indicator[10];
       char Resource_name[10];
       char Reserved1[3];
       char Media_library_device;
       char Type_of_media_library;
       char Intelligent_tape_device;
       char Device_type[4];
       char Device_model[4];
       int  Maximum_block_length;
       char Logical_block_id;
       char Assign_capability;
       char Overwrite_capability;
       char Read_backwards_capability;
       char Cartridge_checking_capability;
       char Device_class;
       char Hardware_data_compression;
       char Reserved2;
       int  Offset_to_write_densities;
       int  Number_of_write_densities;
       int  Offset_to_read_densities;
       int  Number_of_read_densities;
       int  Offset_to_IDRC_densities;
       int  Number_of_IDRC_densities;
       int  Optimum_block_length;
       char Space_to_end_capability;
       char Space_backwards_capability;
       char Bar_code_media_library;
       char IDRC_capability;
       char Auto_cartridge_facility;
       char Bit_mapping_of_IDRC_densities[2];
       char Bit_mapping_of_write_densities[2];
       char Bit_mapping_of_read_densities[2];
       char Bit_mapping_of_highest_dens[2];
       char Reserved3;
       char Bit_mapping_of_densities[2];
       int  Offset_to_character_densities;
       int  Number_of_character_densities;
       int  Offset_to_resource_list;
       int  Number_of_resources_in_list;
       int  Offset_to_resource_status_list;
       int  Number_of_resource_status_list;
       char Reserved4;
       char Qtactldv_API_supported;                       /* @JSA   */
       char Media_library_with_door;
       char WORM_capability;                              /* @YEA   */
       char Virtual_device;                               /* @YEA   */
       char Reserved6[3];                                 /* @YEC   */
       int  Offset_to_density_capability;
       int  Number_of_density_capability;
       int  Length_of_density_capability;
       int  Offset_to_system_feature_code;
       int  Length_of_system_feature_code;
       int  Acceptable_read_err_thresh;
       int  Acceptable_write_err_thresh;
       int  Instantaneous_performance;
       int  Offset_to_slot_station_info;                  /* @JSA   */
       int  Offset_to_device_text;
       int  Length_of_device_text;
       int  Offset_to_WORM_densities;                     /* @YEA   */
       int  Number_of_WORM_densities;                     /* @YEA   */

    } Qta_TAPE0100_t;

 typedef _Packed struct Qta_dens_capability
    {
     char Density_format[10];
     char Bit_map_rep[2];
     int  Inst_performance;
     int  Max_block_size;
     int  Opt_block_size;
    } Qta_dens_capability_t;

 typedef _Packed struct Qta_IDRC_densities
    {
     char IDRC_density[10];
    } Qta_IDRC_densities_t;

 typedef _Packed struct Qta_write_densities
    {
     char Write_density[10];
    } Qta_write_densities_t;

 typedef _Packed struct Qta_read_densities
    {
     char Read_density[10];
    } Qta_read_densities_t;

 typedef _Packed struct Qta_WORM_densities                /* @YEA   */
    {                                                     /* @YEA   */
     char WORM_density[10];                               /* @YEA   */
    } Qta_WORM_densities_t;                               /* @YEA   */

 typedef _Packed struct Qta_character_densities
    {
     char Character_density[10];
    } Qta_character_densities_t;

 typedef _Packed struct Qta_resource_list
    {
     char Resource_list[10];
    } Qta_resource_list_t;

 typedef _Packed struct Qta_resource_status_list
    {
     char Resource_status_list[15];
    } Qta_resource_status_list_t;

 typedef _Packed struct Qta_slot_station
    {
     int  Total_slots;
     int  Total_stations;
    } Qta_slot_station_t;

 /******************************************************************/
 /* Constants for Media_library_device                             */
 /******************************************************************/

#define QTA_DEVICE_IS_STAND_ALONE     '0'
#define QTA_DEVICE_IS_IN_MLB          '1'
#define QTA_DEVICE_IS_MLB             '2'

 /******************************************************************/
 /* Constants for Type_of_media_library                            */
 /******************************************************************/

#define QTA_NOT_MLB                   '0'
#define QTA_RACL_ROBOT_TYPE           '1'
#define QTA_COMMUNICATION_TYPE        '2'
#define QTA_RACL_TYPE                 '3'

 /******************************************************************/
 /* Constants for capability fields                                */
 /******************************************************************/

#define QTA_NOT_CAPABLE               '0'
#define QTA_CAPABLE                   '1'
#define QTA_NOT_MLB_VALUE             ' '

 /******************************************************************/
 /* Constants for Resource_status_list                             */
 /******************************************************************/

#define QTA_ALLOCATED                 '*ALLOCATED     '
#define QTA_DEALLOCATED               '*DEALLOCATED   '
#define QTA_UNPROTECTED               '*UNPROTECTED   '


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
