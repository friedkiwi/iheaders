 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYOLUC                                    */
 /*                                                                */
 /* Descriptive Name: Open List of Certificates                    */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1998                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List of Certificates API put the list    */
 /*              of a user's certificates into a receiver variable */
 /*                                                                */
 /* Header Files Included: qgy.h                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_CERT0100_List_T                            */
 /*                 Qsy_CERT0200_List_T                            */
 /*                 Qsy_OLUC_List_Info_T                           */
 /*                                                                */
 /* Function Prototype List: QSYOLUC                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3667880     4P30  980325 ROCH   :  New Include.          */
 /* $A1= D97880       5D10  000510 ROCH   :  Add email             */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYOLUC_h
 #define QSYOLUC_h

 #include <qgy.h>                                            /*@A1A*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #ifdef __ILEC400__
       #pragma linkage (QSYOLUC,OS,nowiden)
  #else
       extern "OS"
  #endif

 /******************************************************************/
 /* Prototype for calling API QSYOLUC                              */
 /******************************************************************/
 void QSYOLUC  (void *,          /* Receiver variable              */
                int   ,          /* Receiver variable length       */
                void *,          /* List information               */
                int   ,          /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* User name                      */
                void *);         /* Error code                     */

 /******************************************************************/
 /* List information structure for QSYOLUC                         */
 /******************************************************************/
 typedef struct Qsy_OLUC_List_Info
    {
       int       Total_Records;
       int       Records_Returned;
       char      Request_Handle[4];
       int       Record_Length;
       char      Info_Complete;
       Qgy_Date_Time_T    Date_Time;
       char      List_Status_Indicator;
       char      Reserved;
       int       Returned_Info_Length;
       int       First_Buffer_Record;
       char      Reserved2[36];
    } Qsy_OLUC_List_Info_T;

 /******************************************************************/
 /* Record structure for CERT0100 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field must    */
 /*        be defined by the user.                                 */
 /******************************************************************/
 typedef struct Qsy_CERT0100_List
    {
     int Returned_Length;         /* returned length          */
     int Available_Length;        /* available length         */
     int Certif_Handle_Ofs;       /* offset to certif hdl     */
     int Certif_Handle_Len;       /* length of certif hdl     */
     int Certif_Ofs;              /* offset to certificate    */
     int Certif_Length;           /* certificate length       */
   /*char Certificate_Text[1];   */ /* Varying length           */
    } Qsy_CERT0100_List_T;

 /******************************************************************/
 /* Record structure for CERT0200 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field must    */
 /*        be defined by the user.                                 */
 /******************************************************************/

 typedef struct Qsy_CERT0200_List
    {
     int Returned_Length;         /* returned length          */
     int Available_Length;        /* available length         */
     int Certif_Handle_Ofs;       /* offset to certif hdl     */
     int Certif_Handle_Len;       /* length of certif hdl     */
     int Version_Ofs;             /* offset to version        */
     int Version_Len;             /* length of version        */
     int Ser_No_Ofs;              /* offset to Serial Num     */
     int Ser_No_Len;              /* length of Serial Num     */
     int Iss_Cmn_Nam_Ofs;         /* offset to Iss Cmn Nm     */
     int Iss_Cmn_Nam_Len;         /* length of Iss Cmn Nm     */
     int Iss_Country_Ofs;         /* offset to Iss Cntry      */
     int Iss_Country_Len;         /* length of Iss Cntry      */
     int Iss_State_Ofs;           /* offset to State          */
     int Iss_State_Len;           /* length of State          */
     int Iss_Locality_Ofs;        /* offset to Locality       */
     int Iss_Locality_Len;        /* length of Locality       */
     int Iss_Org_Ofs;             /* offset to Organization   */
     int Iss_Org_Len;             /* length of Organization   */
     int Iss_OrgUnit_Ofs;         /* offset to OrgUnit        */
     int Iss_OrgUnit_Len;         /* length of OrgUnit        */
     int Iss_Postal_Code_Ofs;     /* offset to Postal Code    */
     int Iss_Postal_Code_Len;     /* length of Postal Code    */
     int Valid_Period_Str_Ofs;    /* offset to valid period   */
     int Valid_Period_Str_Len;    /* length of valid period   */
     int Valid_Period_End_Ofs;    /* offset to valid period   */
     int Valid_Period_End_Len;    /* length of valid period   */
     int Subj_Cmn_Nam_Ofs;        /* offset to Subj CmnName   */
     int Subj_Cmn_Nam_Len;        /* length of Subj CmnName   */
     int Subj_Country_Ofs;        /* offset to Subj Country   */
     int Subj_Country_Len;        /* length of Subj Country   */
     int Subj_State_Ofs;          /* offset to Subj State     */
     int Subj_State_Len;          /* length of Subj State     */
     int Subj_Locality_Ofs;       /* offset to Subj Locality  */
     int Subj_Locality_Len;       /* length of Subj Locality  */
     int Subj_Org_Ofs;            /* offset to Subj Org       */
     int Subj_Org_Len;            /* length of Subj Org       */
     int Subj_OrgUnit_Ofs;        /* offset to SubjOrgUnt     */
     int Subj_OrgUnit_Len;        /* length of SubjOrgUnt     */
     int Subj_Postal_Code_Ofs;    /* offset to Postal Code    */
     int Subj_Postal_Code_Len;    /* length of Postal Code    */
     int Subj_PKAlg_Ofs;          /* offset to SubjPubKyAlg   */
     int Subj_PKAlg_Len;          /* length of SubjPubKyAlg   */
     int Iss_Unique_ID_Ofs;       /* offset to Iss Unq ID     */
     int Iss_Unique_ID_Len;       /* length of Iss Unq ID     */
     int Subj_Unique_ID_Ofs;      /* offset to Subj UnqID     */
     int Subj_Unique_ID_Len;      /* length of Subj UnqID     */
     int Iss_email_Ofs;           /* offset to Iss email      */
     int Iss_email_Len;           /* length of Iss email      */
     int Subj_email_Ofs;          /* offset to Subj email     */
     int Subj_email_Len;          /* length of Subj email     */
   /*char Certificate_Text[1];  */ /* Varying length           */
    } Qsy_CERT0200_List_T;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
