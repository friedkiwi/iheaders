 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QTAFROBJ                                     */
 /*                                                                */
 /* Descriptive Name: Free Object API.                             */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Free Object API provides the capability       */
 /*              to suspend (free) an object of type *DOC.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qta_FMTO0100_t                                 */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95722       4D30  971126 ROCH      New Include           */
 /* $A1= P3662052     4D30  980218 ROCH      void * for request    */
 /*                                          variable.             */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTAFROBJ_h
 #define QTAFROBJ_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Prototype for calling Free Object (QTAFROBJ)                     */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTAFROBJ,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QTAFROBJ (void *,            /* Request variable             */
                int,               /* Len of request variable      */
                char *,            /* Format name                  */
                void *);           /* Error code                   */

/********************************************************************/
/* Type Definition for the TAFO0100 format of the object            */
/* information in the QTAFROBJ API.                                 */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qta_FMTO0100
      {
         char Object_Name[10];
         char Object_Library[10];
         char Reserved1[10];
         char Object_Type[10];
         int  Path_Offset;
         int  Path_Length;
     /*Qlg_Path_Name_T Path_Name[];*/   /* Varying length            */
      }Qta_FMTO0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
