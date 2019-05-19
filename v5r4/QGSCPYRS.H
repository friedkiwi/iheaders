 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGSCPYRS                                   */
 /*                                                                */
 /* Descriptive Name: Copy AFPDS resource                          */
 /*                                                                */
 /* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1996,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Copy AFPDS Resource API:                      */
 /*              - Puts a AFPDS data stream equivalent of the      */
 /*                specified AFPDS resource into the specified     */
 /*                user space.                                     */
 /*                                                                */
 /* Header Files Included: H/QGSCPYRS                              */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qgs_CPYR_I_t                                   */
 /*                 Qgs_CPYR_H_t                                   */
 /*                 Qgs_CPYR_Res_Info_t                            */
 /*                                                                */
 /* Function Prototype List: QGSCPYRS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710.1     3D70  941202 RJOHNSON: New Include           */
 /* $A1= D98212.2    v5r1m0 010300 gchaney:  Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QGSCPYRS_h
#define QGSCPYRS_h

#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(P128)                                  /* @A1A*/
#endif                                                       /* @A1A*/

  #ifdef __ILEC400__
       #pragma linkage (QGSCPYRS,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QGSCPYRS                                  */
/********************************************************************/

void QGSCPYRS(void *,               /* User space qualified name.    */
              char *,               /* Format of information returned*/
              void *,               /* Resource qualified name.      */
              void *,               /* Resource object type.         */
              void *);              /* Error code                    */

/********************************************************************/
/*  Structure for Input parameter section.                          */
/********************************************************************/

typedef _Packed struct Qgs_CPYR_I {
        char User_Space_Name[10];
        char User_Space_Library[10];
        char Format[8];
        char Resource_Name[10];
        char Resource_Library[10];
        char Resource_Object_Type[10];
      } Qgs_CPYR_I_t;

/********************************************************************/
/*  Structure for Header Section.                                   */
/********************************************************************/

typedef _Packed struct Qgs_CPYR_H {
        char User_Space_Name[10];
        char User_Space_Library[10];
        char Resource_Name[10];
        char Resource_Library[10];
        char Resource_Object_Type[10];
        char Reserved[2];
        int  Offset_To_Resource_Info;
        int  Size_Of_Resource_Info;
        int  Offset_To_Resource_Data_Stream;
        int  Size_Of_Resource_Data_Stream;
      } Qgs_CPYR_H_t;

/********************************************************************/
/*  Structure for Resource Information Section.                     */
/********************************************************************/

typedef _Packed struct Qgs_CPYR_Res_Info {
        char Pel_Density;
        char Font_Resource_Subtype[10];
      } Qgs_CPYR_Res_Info_t;

#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
    #pragma datamodel(pop)                                   /* @A1A*/
#endif                                                       /* @A1A*/

#endif
