/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
#ifndef qsyjrnl_h
#define qsyjrnl_h
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  qsyjrnl.H                                      */
/*                                                                   */
/* Descriptive Name:  Header for working with the                    */
/*                    ZO (Create Object), ZP (Primary Group), ZT     */
/*                    (Auditing Change), and ZA (Authority Change)   */
/*                    journal entries                                */
/*                                                                   */
/*                Note: These entries are NOT used for DB files      */
/*                                                                   */
/*********************************************************************/
/*                                                                   */
/*                                                                   */
/*  CHANGE ACTIVITY:                                                 */
/* FLG REASON    RLSE&LEVEL    YYMMDD USERID  : COMMENTS             */
/* --- ------    ----------    ------ ------    -------------------- */
/* $A0 D9995107  v5r4m0.xpf    040607 LIEBL :   Initial creation     */
/*********************************************************************/

#pragma pack(1)

#define QSY_ZP_AUTS_T_SIZE 32
#define QSY_ZA_AUTS_T_SIZE 13

/*-------------------------------------------------------------------*/
/*    ZO (Ownership Change) Journal Entries                          */
/*-------------------------------------------------------------------*/
typedef _Packed struct Qsy_ZO_Own {
  char           syzo_Old_Owner[10];  /* Name of old owner           */
  char           syzo_New_Owner[10];  /* Name of new owner           */
} Qsy_ZO_Own_t;


/*-------------------------------------------------------------------*/
/*    ZP (Primary Group Change) Journal Entries                      */
/*-------------------------------------------------------------------*/
typedef _Packed struct Qsy_ZP_Auts {
  struct {                          /* Object rights                 */
    char syzp_Object_Existence;     /* 'Y' = object existence        */
    char syzp_Object_Management;    /* 'Y' = object management       */
    char syzp_Object_Operational;   /* 'Y' = object operational      */
    char syzp_Object_Alter;         /* 'Y' = object alter            */
    char syzp_Object_Reference;     /* 'Y' = object reference        */
    char reserved[10];              /* Reserved                      */
  } syzp_Objr;

  char syzp_Auth_List_Mgmt;         /* 'Y' = authorization list MGT  */

  struct {                          /* Data rights                   */
    char syzp_Read;                 /* 'Y' = read                    */
    char syzp_Add;                  /* 'Y' = add                     */
    char syzp_Update;               /* 'Y' = update                  */
    char syzp_Delete;               /* 'Y' = delete                  */
    char syzp_Execute;              /* 'Y' = execute                 */
    char reserved[10];              /* Reserved                      */
  } syzp_Dtar;
  char syzp_Exclude;                /* 'Y' = exclude                 */

} Qsy_ZP_Auts_t ;

typedef _Packed struct Qsy_ZP_PGP {

  char           syzpOldGroup[10];  /* Name of old primary group     */
  char           syzpNewGroup[10];  /* Name of new primary group     */
  union {
    Qsy_ZP_Auts_t    authorities;   /* new primary group authority   */
    char          all_Authorities[QSY_ZP_AUTS_T_SIZE];
  } syzp_Auts;
  char            syzp_Revoke;      /* 'Y' = Revoke old primary group*/

} Qsy_ZP_PGP_t;

/*-------------------------------------------------------------------*/
/*   ZT (Auditing Change)  Entries                                   */
/*-------------------------------------------------------------------*/
typedef _Packed struct Qsy_ZT_Aud {
  char           syzt_Object_Aud_Value[10]; /* Object audit value    */
} Qsy_ZT_Aud_t ;

/*-------------------------------------------------------------------*/
/*   ZA (Authority Changes)  Journal Entries                         */
/*-------------------------------------------------------------------*/
typedef _Packed struct Qsy_ZA_Auts {
  struct {                          /* Object rights                 */
    char syza_Object_Existence;     /* 'Y' = object existence        */
    char syza_Object_Management;    /* 'Y' = object management       */
    char syza_Object_Operational;   /* 'Y' = object operational      */
  } syza_Objr;

  char  syza_Auth_List_Mgmt;        /* 'Y' = authorization list MGT  */
  char  syza_Auth_LisT_Auth;        /* 'Y' = *AUTL authority         */

  struct {                          /* Data rights                   */
    char syza_Read;                 /* 'Y' = read                    */
    char syza_Add;                  /* 'Y' = add                     */
    char syza_Update;               /* 'Y' = update                  */
    char syza_Delete;               /* 'Y' = delete                  */
  } syzadtar;

  char syza_Exclude;                /* 'Y' = exclude                 */
  char syza_Execute;                /* 'Y' = execute                 */
  char syza_Alter;                  /* 'Y' = object alter            */
  char syza_Reference;              /* 'Y' = object reference        */

} Qsy_ZA_Auts_t;

typedef _Packed struct Qsy_ZA_Chgaut {
  char           syza_User[10];     /* User profile name or REFUSER  */
                                    /* on GRTUSRAUT command          */
  char           syza_Auth_List[10];/* Authorization list name       */
  union {                           /* Authority fields              */
   Qsy_ZA_Auts_t authorities;       /* Individual authority fields   */
   char all_Authorities[QSY_ZA_AUTS_T_SIZE];/* Auth. fields as group */
  } Qsy_ZA_Auts ;
  char           reserved[4];       /* Reserved                      */
  char           syza_Command[3];   /* Command                       */
} Qsy_ZA_Chgaut_t;


#pragma pack(reset)


#endif /* qsyjrnl_h */

