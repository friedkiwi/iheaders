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
/* (C)Copyright IBM Corp.  1995, 2003                                */
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
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWDLSBSE                                   */
 /*                                                                */
 /* Descriptive Name: List Subsystem Description Entries API       */
 /*                                                                */
 /* Description: List the subsystem description entries, like      */
 /*              routing entries.                                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:   Qwd_Lsbse_Input_t                            */
 /*                   Qwd_Lsbse_Header_t                           */
 /*                   Qwd_SBSE0100_t                               */
 /*                   Qwd_SBSE0200_t                               */
 /*                   Qwd_SBSE0300_t                               */
 /*                   Qwd_SBSE0400_t                               */
 /*                   Qwd_SBSE0500_t                               */
 /*                   Qwd_SBSE0600_t                               */
 /*                   Qwd_SBSE0700_t                               */
 /*                                                                */
 /* Function Prototype List: QWDLSBSE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94464       3D20  960214 ROCH   :  New Include           */
 /* $A1= D94648       3D70  960329 ROCH   :  Added routing entries.*/
 /* $A2= D95108       4D20  970122 ROCH   :  Add formats 0400,     */
 /*                                          500, 600, and 700.    */
 /* $OJ=D9510802      4D20  970123 ROCH   :  New API formats for   */
 /*                                          QWDLSBSE.             */
 /* $0K= D99310     v5r3m0  030413 ROCH   :  add affinity parms    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWDLSBSE_h
 #define QWDLSBSE_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWDLSBSE API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWDLSBSE,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWDLSBSE(void *,           /* Qualified user space name      */
               char *,           /* List format                    */
               void *,           /* Subsystem and library name     */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the input parameter section.               */
 /******************************************************************/
typedef _Packed struct Qwd_Lsbse_Input
    {
       char User_Space_Name[10];
       char User_Space_Lib_Name[10];
       char Format_Name[8];
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
    } Qwd_Lsbse_Input_t;

 /******************************************************************/
 /* Type Definition for the header section.                        */
 /******************************************************************/
 typedef _Packed struct Qwd_Lsbse_Header
    {
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
    } Qwd_Lsbse_Header_t;

 /******************************************************************/
 /* Type Definition for the SBSE0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SBSE0100
    {
       int  Routing_Sequence_nbr;
       char Routing_entry_pgm[10];
       char Routing_entry_pgm_lib[10];
       char Routing_class[10];
       char Routing_class_lib[10];
       int  Routing_steps_Max_active;
       int  Routing_poolid;
       int  Routing_compare_start;
       char Routing_compare_value[80];
       char Routing_thd_rsc_afn_grp[10];                    /* @0KA*/
       char Routing_thd_rsc_afn_lvl[10];                    /* @0KA*/
       char Routing_rsc_affinity_group[10];                 /* @0KA*/
    } Qwd_SBSE0100_t;

 /******************************************************************/
 /* Type Definition for the SBSE0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SBSE0200
    {
       char Comm_device[10];
       char Comm_mode[8];
       char Comm_jobd[10];
       char Comm_jobd_lib[10];
       char Comm_default_user[10];
       int  Comm_max_active_jobs;
    } Qwd_SBSE0200_t;

 /******************************************************************/
 /* Type Definition for the SBSE0300 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SBSE0300
    {
       char Remote_Loc[8];
       char Remote_Loc_mode[8];
       char Remote_Loc_jobd[10];
       char Remote_Loc_jobd_lib[10];
       char Remote_Loc_default_user[10];
       char Remote_Loc_reserved[2];
       int  Remote_Loc_max_active_jobs;
    } Qwd_SBSE0300_t;

 /******************************************************************/
 /* Type Definition for the SBSE0400 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SBSE0400
    {
       char Autostart_job[10];
       char Autostart_jobd[10];
       char Autostart_jobd_lib[10];
    } Qwd_SBSE0400_t;

 /******************************************************************/
 /* Type Definition for the SBSE0500 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SBSE0500
    {
       char Prestart_job_program[10];
       char Prestart_job_program_lib[10];
       char Prestart_user_profile[10];
       char Prestart_start_jobs[1];
       char Prestart_wait_for_job[1];
       int  Prestart_initial_number_jobs;
       int  Prestart_threshold;
       int  Prestart_additional_num_jobs;
       int  Prestart_max_num_jobs;
       int  Prestart_max_num_uses;
       int  Prestart_pool_id;
       char Prestart_job_name[10];
       char Prestart_jobd[10];
       char Prestart_jobd_lib[10];
       char Prestart_reserved[2];
       char Prestart_first_class[10];
       char Prestart_first_class_lib[10];
       int  Prestart_num_first_class_jobs;
       char Prestart_second_class[10];
       char Prestart_second_class_lib[10];
       int  Prestart_num_second_class_jobs;
       char Prestart_thd_rsc_afn_grp[10];                    /* @0KA*/
       char Prestart_thd_rsc_afn_lvl[10];                    /* @0KA*/
       char Prestart_rsc_affinity_group[10];                 /* @0KA*/
    } Qwd_SBSE0500_t;

 /******************************************************************/
 /* Type Definition for the SBSE0600 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SBSE0600
    {
       char Workstation_name[10];
       char Workstation_name_jobd[10];
       char Workstation_name_jobd_lib[10];
       char Workstation_name_cntl_job[10];
       int  Workstation_name_max_act_jobs;
    } Qwd_SBSE0600_t;

 /******************************************************************/
 /* Type Definition for the SBSE0700 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SBSE0700
    {
       char Workstation_type[10];
       char Workstation_type_jobd[10];
       char Workstation_type_jobd_lib[10];
       char Workstation_type_cntl_job[10];
       int  Workstation_type_max_act_jobs;
    } Qwd_SBSE0700_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
