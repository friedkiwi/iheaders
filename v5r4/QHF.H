 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHF                                        */
 /*                                                                */
 /* Descriptive Name: Common structures for HFS Includes.          */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Contains the Attribute Information and Attribute  */
 /*              Selection Tables for use by the HFS APIs.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:    Qhf_Attr_Info_Desc_t                        */
 /*                    Qhf_Attr_Info_Tbl_t                         */
 /*                    Qhf_Attr_Selec_Desc_t                       */
 /*                    Qhf_Attr_Selec_Tbl_t                        */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QHF_h
 #define QHF_h

 /******************************************************************/
 /* Type Definition for the Attribute Information Table.           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qhf_Attr_Info_Desc
    {
       int  Length_Attr_Name;
       int  Length_Attr_Value;
       int  Reserved;
     /*char Attribute_Name[];*/           /*Varying length         */
     /*char Attribute_Value[];*/          /*Varying length         */
    } Qhf_Attr_Info_Desc_t;

 typedef _Packed struct Qhf_Attr_Info_Tbl
    {
       int  Number_Attributes;
       int  Offset_First_Attr;
     /*int  Offset_Remaining_Attrs[];*/   /*Varying length         */
     /*Qhf_Attr_Info_Desc_t Array[];*/    /*Varying length         */
    } Qhf_Attr_Info_Tbl_t;

 /******************************************************************/
 /* Type Definition for the Attribute Selection Table.             */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qhf_Attr_Selec_Desc
    {
       int  Length_Attr_Name;
     /*char Attribute_name[];*/           /*Varying length         */
    } Qhf_Attr_Selec_Desc_t;

 typedef _Packed struct Qhf_Attr_Selec_Tbl
    {
       int  Number_Attributes;
       int  Offset_First_Attr;
     /*int  Offset_Remaining_Attrs[];*/   /*Varying length         */
     /*Qhf_Attr_Selec_Desc_t Array[];*/   /*Varying length         */
    } Qhf_Attr_Selec_Tbl_t;

 #endif
