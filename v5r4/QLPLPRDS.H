/****START HEADER FILE SPECIFICATIONS*********************************/
/*                                                                   */
/* Header File Name: H/QLPLPRDS                                      */
/*                                                                   */
/* Descriptive Name: List products in a SAVF                         */
/*                                                                   */
/* LANGUAGE:     C                                                   */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* Us Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* DESCRIPTION:  C header for list product in a savefile API.        */
/*               Contains the API program definition and the         */
/*               output data format structure definition.            */
/*                                                                   */
/* Header Files Included: H/QLPLPRDS                                 */
/*                                                                   */
/* Macros List: NONE                                                 */
/*                                                                   */
/* Structure List:  Qlp_Lprd_Input_Parms                             */
/*                  Qlp_Prdl0100                                     */
/*                                                                   */
/* Function Prototype List: QLPLPRDS                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ -------- ----------------------    */
/* $E1  D28745       3D10  940130 SLS      New Include               */
/* $E2= P3984880     3D60  950317 BLOCKER  Add __cplusplus defs      */
/* $E2= PTH01765     3D60  950816 BLOCKER  restored --> restore      */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/****END HEADER FILE SPECIFICATIONS***********************************/

#ifndef QLPLPRDS_h
#define QLPLPRDS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifdef __cplusplus
  extern "C" {
  #pragma info(none)
#endif

/*********************************************************************/
/* Prototypes for calling List Product in a Savefile API QLPLPRDS    */
/*********************************************************************/
#ifdef __cplusplus
   extern "OS"
#else
   #pragma linkage (QLPLPRDS, OS, nowiden)
#endif
void QLPLPRDS(void *,              /* Qualified user space name     */
              char *,              /* Format name                   */
              void *,              /* Qualified savefile name       */
              void *);             /* Error code                    */


/*******************************************************************/
/* Input structure for QLPLPRDS API header section                 */
/*******************************************************************/

typedef _Packed struct Qlp_Lprd_Input_Parms {
                 char Usr_Space_Used_Name[10];
                 char User_Space_Used_Library[10];
                 char Savefile_Name_Used[10];
                 char Savefile_Library_Used[10];
               } Qlp_Lprd_Input_Parms_t;

/*******************************************************************/
/* Record structure for QLPLPRDS PRDL0100 format                   */
/*******************************************************************/
typedef _Packed struct Qlp_Prdl0100 {
                 char Product_Id[7];
                 char Product_Vrm[6];
                 char Product_Option[4];
                 char Load_Type[10];
                 char Load_Id[4];
               } Qlp_Prdl0100_t;


#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif                          /* #ifndef QLPLPRDS_h             */
