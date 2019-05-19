 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYOLAFP                                   */
 /*                                                                */
 /* Descriptive Name: Open list of AFP Information                 */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open list of AFP information API lists        */
 /*              entries from a font mapping table or lists font   */
 /*              character set/code page information from a coded  */
 /*              font.  The number of entries may be specified.    */
 /*                                                                */
 /* Header Files Included: QPQ                                     */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                 Qafp_CFNI0100_t                                */
 /*                 Qafp_FCSI0100_t                                */
 /*                 Qafp_FTBI0100_t                                */
 /*                 Qafp_PHCS0100_t                                */
 /*                 Qafp_HPCS0100_t                                */
 /*                 Qafp_PHCP0100_t                                */
 /*                 Qafp_HPCP0100_t                                */
 /*                 Qafp_PPCS0100_t                                */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QGYOLAFP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QGYOLAFP_h
#define QGYOLAFP_h

#ifndef QPQ_h
#include <QPQ.h>

#pragma datamodel(P128)

/*********************************************************************/
/* Prototypes for calling QGYOLAFP                                   */
/* Open list of AFP Object Information API                           */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QGYOLAFP,OS,nowiden)
#else
     extern "OS"
#endif

void QGYOLAFP(void *,               /* Receiver Variable             */
              int,                  /* Receiver Variable Length      */
              void *,               /* List information              */
              int,                  /* Number of records to return   */
              char *,               /* Format name                   */
              void *,               /* Qualified AFP Object Name     */
              void *,               /* Format Qualifier              */
              void *);              /* Error code                    */



/*******************************************************************/
/* Record structure for QGYOLAFP CFNI0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_CFNI0100 {
     Qafp_CharSetCodePagePair_t  CharSetCodePagePair;
} Qafp_CFNI0100_t;

/*******************************************************************/
/* Record structure for QGYOLAFP FCSI0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_FCSI0100 {
     Qafp_CodedFont_t  CodedFontEntry;
} Qafp_FCSI0100_t;


/*******************************************************************/
/* Record structure for QGYOLAFP PHCS0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_PHCS0100 {
     Qafp_PHFCSEntry_t  PHFCSEntry;
} Qafp_PHCS0100_t;


/*******************************************************************/
/* Record structure for QGYOLAFP HPCS0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_HPCS0100 {
     Qafp_HPFCSEntry_t  HPFCSEntry;
} Qafp_HPCS0100_t;

/*******************************************************************/
/* Record structure for QGYOLAFP PHCP0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_PHCP0100 {
     Qafp_PHCPEntry_t  PHCPEntry;
} Qafp_PHCP0100_t;

/*******************************************************************/
/* Record structure for QGYOLAFP HPCP0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_HPCP0100 {
     Qafp_HPCPEntry_t  HPCPEntry;
} Qafp_HPCP0100_t;

/*******************************************************************/
/* Record structure for QGYOLAFP PPCS0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_PPCS0100 {
     Qafp_PPFCSEntry_t  PPFCSEntry;
} Qafp_PPCS0100_t;


#pragma datamodel[pop]
