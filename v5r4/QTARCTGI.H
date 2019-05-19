 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTARCTGI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Cartridge Information QTARCTGI      */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2004                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Retrieve Cartridge Information (QTARCTGI) API     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTARCTGI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D99239.2     5D30  020707 ROCH      Creation              */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QTARCTGI_h
 #define QTARCTGI_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Retrieve Cartridge Information (QTARCTGI)*/
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARCTGI,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTARCTGI (char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                char *,            /* Device Description             */
                char *,            /* Requested cartridge ID         */
                char *,            /* Requested category             */
                void *);           /* Error code                     */


 /******************************************************************/
 /* Type Definition for the RCTG0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_RCTG0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_to_cartridge_info;
       int  Number_of_cartridge_entries;
       int  Length_of_cartridge_entry;
    } Qta_RCTG0100_t;

 typedef _Packed struct Qta_cartridge_info
    {
     char Cartridge_ID[6];
     char Volume_ID[6];
     char Tape_library_name[10];
     char Category[10];
     char Category_system[8];
     char Density[10];
     char Change_date[7];
     char Change_time[6];
     char Reference_date[7];
     char Reference_time[6];
     char Location[10];
     char Location_indicator[1];
     char Volume_status[2];
     char Owner_ID[17];
     char Write_protection[1];
     char Code[1];
     char Cartridge_ID_source[1];
     char Import_Export_slot[1];
     char Media_type[2];
    } Qta_cartridge_info_t;


 /******************************************************************/
 /* Constant for format name                                       */
 /******************************************************************/
 #define RCTG0100 "RCTG0100"

 #pragma datamodel(pop)
 #endif

