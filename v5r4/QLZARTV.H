 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZARTV                                    */
 /*                                                                */
 /* Descriptive Name: Retrieve License Information                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve License Information API returns      */
 /*              license information about a software product.     */
 /*                                                                */
 /* Header Files Included: H/QLZA                                  */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     Qlza_LICR0100_t                                            */
 /*     Qlza_LICR0200_t                                            */
 /*                                                                */
 /* Function Prototype List: QLZARTV                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /* $A1= P3985168     3D60  950316 KPS       Change include linkage*/
 /* $A2= P3606491     3D70  951201 KPS       Add LICR0300 format   */
 /* $A3= P9944260     5D20  010228 KPS       Add *PROCESSOR fields */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLZARTV_h
#define QLZARTV_h

/********************************************************************/
/*  Header Included.                                                */
/********************************************************************/
#include <qlza.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QLZARTV              */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QLZARTV, OS, nowiden)
#else
  extern "OS"
#endif
void QLZARTV (void *,             /* Receiver variable              */
              int,                /* Length of receiver variable    */
              char *,             /* Format name for rec variable   */
              void *,             /* Product identification         */
              char *,             /* Produc id format name          */
              void *);            /* Error code                     */

/********************************************************************/
/*  Structure for LICR0100 format                                   */
/********************************************************************/

typedef _Packed struct Qlza_LICR0100
   {
                 int  Usg_Lmt;
                 int  Usg_Cnt;
                 char Usg_Type[2];
                 char Compliance_Type[2];
                 char Lic_Term[6];
                 char Rls_Lvl[6];
    }Qlza_LICR0100_t;

/********************************************************************/
/*  Structure for LICR0200 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qlza_LICR0200
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 int  Usg_Lmt;
                 int  Usg_Cnt;
                 char Usg_Type[2];
                 char Compliance_Type[2];
                 char Lic_Term[6];
                 char Rls_Lvl[6];
                 int  Thresh_Val;
                 int  Grc_Prd;
                 char Grc_Prd_Exp[7];
                 char Proc_Grp[3];
                 char Reserved[2];
                 int  Peak_Usg;
                 char Exp_Dat[7];
                 char Vnd_Dta[8];
                 char Handle[16];
                 char Reserved_2;
                 int  Ofst_Msg_Q;
                 int  Num_Msg_Qs;
                 int  Ofst_Usr_Lst;
                 int  Num_Usrs;
                 int  Len_Usr_Rec;
		 int  Proc_Usg_Cnt;
		 int  Proc_Peak_Usg;
		 char Lst_Peak_Dat_Time[13];
		 char Lst_Update_Dat_Time[13];
               /*char Reserved_2[];*/         /* Varying length field*/
               /*char Qualified_Msg_Queue[];*//* Varying length field*/
               /*char List_Cur_Lic_Users[];*/ /* Varying length field*/
    }Qlza_LICR0200_t;

/********************************************************************/
/*  Structure for LICR0300 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qlza_LICR0300
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 int  Usg_Lmt;
                 int  Usg_Cnt;
                 char Usg_Type[2];
                 char Compliance_Type[2];
                 char Lic_Term[6];
                 char Rls_Lvl[6];
                 int  Thresh_Val;
                 int  Grc_Prd;
                 char Grc_Prd_Exp[7];
                 char Proc_Grp[3];
                 char Reserved[2];
                 int  Peak_Usg;
                 char Exp_Dat[7];
                 char Vnd_Dta[8];
                 char Handle[16];
                 char Reserved_2;
                 int  Ofst_Msg_Q;
                 int  Num_Msg_Qs;
                 int  Ofst_Usr_Lst;
                 int  Num_Usrs;
                 int  Len_Usr_Rec;
                 int  Len_Lic_Usr;
		 int  Proc_Usg_Cnt;
		 int  Proc_Peak_Usg;
		 char Lst_Peak_Dat_Time[13];
		 char Lst_Update_Dat_Time[13];
               /*char Reserved_2[];*/         /* Varying length field*/
               /*char Qualified_Msg_Queue[];*//* Varying length field*/
               /*char List_Cur_Lic_Users[];*/ /* Varying length field*/
    }Qlza_LICR0300_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
