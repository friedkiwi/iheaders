 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCCCFGD                                   */
 /*                                                                */
 /* Descriptive Name: change configuration description             */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994, 2000              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The change config description (QDCCCFGD) API      */
 /*              changes information about various descriptions.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QDCCCFGD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0                            muras     initial part          */
 /* $A1= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCCCFGD_h
 #define QDCCCFGD_h

 #if (__OS400_TGTVRM__>=510)                               /* @A1A */
     #pragma datamodel(P128)                               /* @A1A */
 #endif                                                    /* @A1A */

 /******************************************************************/
 /* Prototype for calling change config description API (QDCCCFGD) */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCCCFGD,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QDCCCFGD (char *,          /* configuration name ex: PRT01   */
                  char *,          /* configuration type ex: *DEVD   */
                  void *,          /* requested changes: struct below*/
                  void *);         /* Error code                     */


typedef _Packed struct QDCCCFGD_Req_Chg
   {
      int  Number_of_Records;          /*total number of variable    */
                                       /*length records              */

     /* ------------------------------------------------------------ */
     /* the following 3 field repeat for each variable length record */
     /* ------------------------------------------------------------ */

      int  Key;                        /*the numeric key used to     */
                                       /*identify which field to     */
                                       /*change ex: 201 for USRDFNDTA*/

      int  Length_of_New_Value;        /*the length of the new value */

      char New_Value[5000];            /*the new value of the field  */
                                       /*note that the length may    */
                                       /*need to be changed.         */
   } QDCCCFGD_Req_Chg;

 #if (__OS400_TGTVRM__>=510)                                 /* @A1A */
     #pragma datamodel(pop)                                  /* @A1A */
 #endif                                                      /* @A1A */

 #endif
