 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOCOMMON                                 */
 /*                                                                */
 /* Descriptive Name: Common data structures needed by YDO APIs.   */
 /*                                                                */
 /* 5722-SS1                                                       */
 /* (C) Copyright IBM Corp. 2002,2002                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE   PGMR      CHANGE DESCRIPTION   */
 /* ---- ------------ -----  ------ --------- ---------------------*/
 /* $A0= D98608       v5r2m0 010821 ROCH:     New Include          */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QYDOCOMMON_h
#define QYDOCOMMON_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


   /*--------------------------------------------*/
   /* Data structures to sign and verify objects */
   /*--------------------------------------------*/


   typedef _Packed struct Qydo_Multi_Objects_T {
       char Subdirectories;               /* span subdirectories,
					   0=only one directory,
					   1=all subdirectories        */
       char Stop_On_First_Error;          /* 0=continue even with errors,
					   1=stop on first object with
					     an error                  */
       char Sign_only_core_object;        /* 0=sign the entire object,
					   1=sign only the core part of
					      the object           @A1A*/
       char Reserved[5];                  /*                         @A1C*/
       int  Offset_To_Results_Path_Name;  /* offset from top of
					   Multi Objects structure     */
       int  Length_Of_Results_Path_Name;  /* 0=no results file will be
					     used (default),
					   1 or more = there is a file,
					      see name below           */
       char Results_Path_Format_Name[8];  /* 'OBJN0100' = simple path name,
					   'OBJN0200' = LG path name   */
       char Results_Contents_Format_Name[8]; /*
					   'RSLT0100' = basic info     */
   } Qydo_Multi_Objects_T;


   /*--------------------------------------------*/
   /* Data structures to sign and verify buffers */
   /*--------------------------------------------*/


   typedef _Packed struct Qydo_data_description {
                                   /* array element describing a
                                      series of bytes to be signed or
                                      verified                     */
     int Offset_To_Start;          /* offset in buffer to first
                                      byte to process              */
     int Length_Of_Buffer;         /* how many bytes to process
                                      (including the first byte)   */
 } Qydo_data_description_T;

 typedef _Packed struct Qydo_SGNB0100_format {
     int    Offset_To_Signature;   /* offset to first byte of
                                      signature                    */
     int    Length_Of_Signature;   /* how many bytes in signature
                                      (including the first byte)   */
    /* char   Signature[]   */
 } Qydo_SGNB0100_format_T;

 typedef _Packed struct Qydo_SGNB0200_format {
     int    Offset_To_Signature;   /* offset to first byte of
                                      signature                    */
     int    Length_Of_Signature;   /* how many bytes in signature
                                      (including the first byte)   */
     int    Offset_To_Certificate_Label;/* offset to first byte of
                                           certificate label       */
     int    Length_Of_Certificate_Label;/* how many bytes in
                                           certificate label
                                        (including the first byte) */
    /* char   Signature[]   */
    /* char   Certificate_Label[] */
 } Qydo_SGNB0200_format_T;

 typedef _Packed struct Qydo_SGNB0300_format {
     int    Offset_To_Signature;   /* offset to first byte of
                                      signature                     */
     int    Length_Of_Signature;   /* how many bytes in signature
                                      (including the first byte)    */
     int    Offset_To_Certificate; /* offset to first byte of
                                      certificate                   */
     int    Length_Of_Certificate; /* how many bytes in certificate */
    /* char   Signature[]   */
    /* char   Certificate[] */
 } Qydo_SGNB0300_format_T;

 typedef _Packed struct Qydo_SGNB0400_format {
     int    Offset_To_Signature;   /* offset to first byte of
                                      signature                     */
     int    Length_Of_Signature;   /* how many bytes in signature
                                      (including the first byte)    */
     int    Offset_To_Distinguished_Name; /* offset to first byte of
                                             distinguished name     */
     int    Length_Of_Distinguished_Name; /* how many bytes in
                                             distinguished name     */
    /* char   Signature[]   */
    /* char   Distinguished_Name[] */
 } Qydo_SGNB0400_format_T;



#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif
#endif
