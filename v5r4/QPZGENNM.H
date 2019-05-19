 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZGENNM                                   */
 /*                                                                */
 /* Descriptive Name: Generate PTF Name                            */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Generate PTF Name API generates a save file   */
 /*              or cover letter member name for a PTF.            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpz_PTF_Info_t                                 */
 /*                 Qpz_PTFG0100_t                                 */
 /*                 Qpz_PTFG0200_t                                 */
 /*                                                                */
 /* Function Prototype List: QPZGENNM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPZGENNM_h
#define QPZGENNM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for calling Software Product API QPZGENNM             */
/********************************************************************/
#ifdef __ILEC400__
   #pragma linkage (QPZGENNM, OS, nowiden)
#else
   extern "OS"
#endif
void QPZGENNM (void *,            /* Receiver variable              */
               int,               /* Length receiver variable       */
               void *,            /* PTF information                */
               char *,            /* Format name                    */
               void *);           /* Error code                     */

/********************************************************************/
/*  Structure for PTF Information Format                            */
/********************************************************************/
typedef _Packed struct Qpz_PTF_Info
   {
                 char PTF_ID[7];
                 char PID[7];
                 char Rls[6];
                 char Reserved[14];
                 char NLV[4];
                 char Reserved2[12];
   }Qpz_PTF_Info_t;

/********************************************************************/
/*  Structure for PTFG0100 format                                   */
/********************************************************************/
typedef _Packed struct Qpz_PTFG0100
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 char Fil_Nam[10];
                 char Lib_Nam[10];
   }Qpz_PTFG0100_t;

/********************************************************************/
/*  Structure for PTFG0200 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/
typedef _Packed struct Qpz_PTFG0200
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 char Fil_Nam[10];
                 char Lib_Nam[10];
                 char Mbr_Nam[10];
               /*char Reserved; */          /* varying length field */
   }Qpz_PTFG0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
