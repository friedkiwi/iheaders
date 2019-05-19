#ifndef _QTMMSNDM_H
   #define _QTMMSNDM_H
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QTMMSNDM                                     */
/*                                                                  */
/* Descriptive Name: SMTP Send Mail (TMM) API.                      */
/*                                                                  */
/* 5716-SS1  (C) Copyright IBM Corp. 1996                           */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/* Description: Include header file for the structures and          */
/*              constants for the QtmmSendMail API.                 */
/*                                                                  */
/* Header Files Included:                                           */
/*               None.                                              */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List:                                                  */
/*                 Qtmm_ADDT0100_t                                  */
/*                                                                  */
/* Function Prototype List:                                         */
/*                                                                  */
/*                 QtmmSendMail                                     */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ -------   ----------------------- */
/* $A0= P3631187     4D10  960726 HALLMS :   New Include for V4R1   */
/*                                           PTFed to 3.7           */
/* End CFD List.                                                    */
/*                                                                  */
/* Additional notes about the Change Activity                       */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/*** END HEADER FILE SPECIFICATIONS *********************************/

/********************************************************************/
/*                                                                  */
/* WARNING:          This macro/include is a CUE.                   */
/*                   This macro/include provides an interface       */
/*                   that is externally documented to customers.    */
/*                   or is function that any user could create.     */
/*                   Any changes to this part MUST be upward        */
/*                   compatible at compile and run time.            */
/*                   This interface may be generated as in-line     */
/*                   code in customer programs.                     */
/*                                                                  */
/*                   CSTATUS:  OT                                   */
/*                                                                  */
/********************************************************************/

typedef char Qtmm_Format_Name_t[8];

/*------------------------------------------------------------------*/
/** Various Defines                                                **/
/*------------------------------------------------------------------*/

#define  QTMM_ADDRESS_FMT              "ADDR0100"

#define  QTMM_FMT_LENGTH                8
#define  QTMM_MAX_SMTP_ADDR_LENGTH      256
#define  QTMM_MAX_FILENAME_LENGTH       255
/*------------------------------------------------------------------*/
/*****    Different Distribution Types associated with Recipients ***/
/*------------------------------------------------------------------*/

#define  QTMM_DIST_TYPE_NORMAL  0
#define  QTMM_DIST_TYPE_CC      1
#define  QTMM_DIST_TYPE_BCC     2

/********************************************************************/
/* Type Definition for the ADDT0100 Format                          */
/****                                                            ****/
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will      */
/*       have to be defined by the user.                            */
/********************************************************************/

typedef _Packed struct Qtmm_ADDT0100
{
   long int                Next_Addr_Structure_Offset;
   long int                Addr_Length;
   Qtmm_Format_Name_t      Format_Name;
   long int                Dist_Type; /* Normal, BCC, CC recipients*/
   long int                Reserved;
/* char Addr[]; */ /* Variable length SMTP address */
  } Qtmm_ADDT0100_t;

/********************************************************************/
/* Prototype for calling  Send Mail                                 */
/*(QtmmSendMail) API                                                */
/********************************************************************/
#ifndef _QTMMSNDM_C
#ifdef __ILEC400__
   #pragma argument(QtmmSendMail, OS, NOWIDEN)

#else
   extern "C"
#endif

  void QtmmSendMail( /* Message Description Pointer */

                        char *             Filename,
                        long int *         Filename_Length,
                        char *             Originator,
                        long int *         Originator_Length,
                        Qtmm_ADDT0100_t *  First_Recipient,
                        long int  *        Total_Num_Of_Recipients,
                        void  *       /* API Returned Error  */
                        );



#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*_QTMMSNDM_H*/
