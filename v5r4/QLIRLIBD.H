 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLIRLIBD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Library Description.                */
 /*                                                                */
 /* 5763-SS1, 5716-SS1                                             */
 /* (C) Copyright IBM Corp. 1994,1996                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* This header file is an external product interface, all         */
 /* modifications must be upward compatible.                       */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Library Description API lets you     */
 /*              retrieve attributes for a specific library.       */
 /*                                                                */
 /* Header Files Included: <qus.h>                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qli_Rlibd_Rtn_t                                */
 /*                 Qli_Lib_Size_Info_t                            */
 /*                                                                */
 /* Function Prototype List: QLIRLIBD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940313 CEMAROLT: New include           */
 /* $A1= P3622343     3D70  960612 CEMAROLT: Include changes.      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLIRLIBD_h
 #define QLIRLIBD_h

 #include <qus.h>                                           /* @A1C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Retrieve Library Description API QLIRLIBD*/
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QLIRLIBD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QLIRLIBD (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Library name                   */
                void *,          /* Attributes to retrieve         */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type definition for format of data returned.                   */
 /*                                                                */
 /* The variable length record structure is defined in header      */
 /* file QUS.  It is the type definition for the 4 field variable  */
 /* length record.                                                 */
 /*                                                                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qli_Rlibd_Rtn
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Vlen_Records_Returned;
       int  Vlen_Records_Available;
     /*char Vlen_Record[];*/     /* Varying length                 */
    } Qli_Rlibd_Rtn_t;

 /******************************************************************/
 /* Type definition for Library Size Information key               */
 /******************************************************************/
 typedef _Packed struct Qli_Lib_Size_Info
    {
       int  Lib_Size;
       int  Lib_Size_Mult;
       char Info_Status;
       char Reserved[3];
    } Qli_Lib_Size_Info_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
