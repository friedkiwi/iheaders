 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPQRAFPI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve AFP Object Information API          */
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
 /* Description: The Retrieve AFP Object Information API retrieves */
 /*              specific information about a single AFP object    */
 /*              and returns the information to the calling        */
 /*              program in a receiver variable.                   */
 /*                                                                */
 /* Header Files Included: QPQ                                     */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qafp_PSFI0100_t                                */
 /*                 Qafp_DeviceResLiblEntry_t                      */
 /*                 Qafp_PSFDefinedOption_t                        */
 /*                 Qafp_CFNI0100_t                                */
 /*                 Qafp_FCSI0100_t                                */
 /*                 Qafp_FTBI0100_t                                */
 /*                 Qafp_FontTableHeader_t                         */
 /*                 Qafp_PHCS0100_t                                */
 /*                 Qafp_HPCS0100_t                                */
 /*                 Qafp_PHCP0100_t                                */
 /*                 Qafp_HPCP0100_t                                */
 /*                 Qafp_PPCS0100_t                                */
 /*                 Qafp_MailServerNames_t                         */
 /*                 Qafp_GeneratePDFOutputOptions_t                */
 /*                                                                */
 /* Function Prototype List: QPQRAFPI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* A1   D99198       5D30  110602 MRCREEVES Add new PSFCFG Opts.  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QPQRAFPI_h
#define QPQRAFPI_h

//#ifndef QPQ_h
//#include <QPQ.h>
//#endif

#pragma datamodel(P128)

/*********************************************************************/
/* Prototypes for calling QPQRAFPI                                   */
/* Retrieve AFP Object Information API                               */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QPQRAFPI,OS,nowiden)
#else
     extern "OS"
#endif

void QPQRAFPI(void *,               /* Receiver Variable             */
              int,                  /* Receiver Variable Length      */
              char *,               /* Format name                   */
              void *,               /* Qualified AFP Object Name     */
              void *,               /* Format Qualifier              */
              void *);              /* Error code                    */

/*******************************************************************/
/* Structure for device resource library list entry                */
/*******************************************************************/
typedef _Packed struct Qafp_DeviceResLiblEntry{
     char DeviceResLiblEntry[10];
} Qafp_DeviceResLiblEntry_t;

/*******************************************************************/
/* Structure for PSF defined option entry                          */
/*******************************************************************/
typedef _Packed struct Qafp_PSFDefinedOption{
     char PSFDefinedOption[30];
} Qafp_PSFDefinedOption_t;

/*******************************************************************/
/* Structure for mail server name entry                            */
/*******************************************************************/
typedef _Packed struct Qafp_MailServerNames{
     char MailServerName[255];
} Qafp_MailServerNames_t;   /* $A1A */

/*******************************************************************/
/* Structure for additional generate PDF output options            */
/*******************************************************************/
typedef _Packed struct Qafp_GeneratePDFOutputOptions{
     char GeneratePDFOutputOption[10];
} Qafp_GeneratePDFOutputOptions_t;   /* $A1A */



/*******************************************************************/
/* Record structure for QPQRAFPI PSFI0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_PSFI0100 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char PSFConfigName[10];
     char PSFConfigLib[10];
     char Reserved1[2];
     char UserResourceLib[10];
     int  DeviceResLiblOffset;
     int  DeviceResLiblNumberEntries;
     char IPDSPassThru[10];
     char ActivateReleaseTmr[10];
     int  ReleaseTimer;
     int  RestartTimer;
     int  APPCRetries;
     int  APPCRetryDelay;
     char AutoSessionRecovery[10];
     char AutoSessionRecoveryMessage[10];
     int  AckFrequency;
     char BlankPage[10];
     char PageSizeControl[10];
     char ResidentFonts[10];
     char ResourceRetention[10];
     char EdgeOrient[10];
     char UseOutlineFonts[10];
     int  PSFDefinedOptionsOffset;
     int  PSFDefinedOptionsNumberEntries;
     char FontSubstitutionMessage[10];
     char CaptureHostFonts[10];
     char FontResolution[10];
     char FontMappingTableName[10];
     char FontMappingTableLib[10];
     char CutSheetEmulationMode[10];
     char afpCSSimFonts[10];
     char Reserved2[2];
     int  PrinterResponseTimer;
     char GeneratePDF[10];
     char DeviceEmulationType[10];
     char PaperSizeD1[10];
     char PaperSizeD2[10];
     char MultipleFiles[10];
     char DataQueueName[10];
     char DataQueueLib[10];
     char SenderofEMail[10];
     char MailTagMapPgmName[10];
     char MailTagMapPgmLib[10];
     char OutputQueueName[10];
     char OutputQueueLib[10];
     char Directory[256];
     int  DirecotoryCCSID;
     char Text[50];
     char MultipleFiles2[10];
     char PDFfontsInline[10];
     char Reserved[2];
     int  OffsetToMailServerNames;
     int  NumberOfMailServers;
     char MappingObjectName[10];
     char MappingObjectLibrary[10];
     char PDFAdministrator[80];
     int  OffsetToAddtlGenPDFOutputOpts;
     int  NumberAddtlGenPDFOutputOpts;
     char SaveAFPData[10];
     char AFPOutputQueueName[10];
     char AFPOutputQueueLibrary[10];
   /*Qafp_DeviceResLiblEntry_t BASED_ON[];*//* Varying length */
   /*Qafp_PSFDefinedOption_t BASED_ON[];*//* Varying length */
   /*Qafp_MailServerNames_t BASED_ON[];*//* Varying length */
   /*Qafp_GeneratePDFOutputOptions_t BASED_ON[];*//* Varying length */
} Qafp_PSFI0100_t;  /* $A1C */

/*******************************************************************/
/* Record structure for QPQRAFPI CFNI0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_CFNI0100 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char CodedFontName[10];
     char CodedFontLib[10];
     char Text[50];
     char Reserved1[2];
     int  EntryOffset;
     int  NumberEntries;
     int  LengthEntry;
   /*Qafp_CharSetCodePagePair_t BASED_ON[];*//* Varying length */
} Qafp_CFNI0100_t;


/*******************************************************************/
/* Record structure for QPQRAFPI FCSI0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_FCSI0100 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char FontCharacterSet[10];
     char Reserved1[2];
     int  EntryOffset;
     int  NumberEntries;
     int  LengthEntry;
   /*Qafp_CodedFont_t BASED_ON[];*//* Varying length */
} Qafp_FCSI0100_t;


/*******************************************************************/
/* Record structure for QPQRAFPI FTBI0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_FTBI0100 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char FontTableName[10];
     char FontTableLibrary[10];
     char Text[50];
     char FontTableType[10];
     int  NumberEntries;
     int  MaxLengthEntry;
} Qafp_FTBI0100_t;

/*******************************************************************/
/* Structure for font table header                                 */
/*******************************************************************/
typedef _Packed struct Qafp_FontTableHeader{
     int  Bytes_Returned;
     int  Bytes_Available;
     char FontTableName[10];
     char FontTableLibrary[10];
     char Text[50];
     char Reserved[2];
     int  EntryOffset;
     int  NumberEntries;
     int  LengthEntry;
} Qafp_FontTableHeader_t;

/*******************************************************************/
/* Record structure for QPQRAFPI PHCS0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_PHCS0100 {
     Qafp_FontTableHeader_t PHFCSHeader;
   /*Qafp_PHFCSEntry_t BASED_ON[];*//* Varying length */
} Qafp_PHCS0100_t;

/*******************************************************************/
/* Record structure for QPQRAFPI HPCS0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_HPCS0100 {
     Qafp_FontTableHeader_t HPFCSHeader;
   /*Qafp_HPFCSEntry_t BASED_ON[];*//* Varying length */
} Qafp_HPCS0100_t;

/*******************************************************************/
/* Record structure for QPQRAFPI PHCP0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_PHCP0100 {
     Qafp_FontTableHeader_t PHCPHeader;
   /*Qafp_PHCPEntry_t BASED_ON[];*//* Varying length */
} Qafp_PHCP0100_t;

/*******************************************************************/
/* Record structure for QPQRAFPI HPCP0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_HPCP0100 {
     Qafp_FontTableHeader_t HPCPHeader;
   /*Qafp_HPCPEntry_t BASED_ON[];*//* Varying length */
} Qafp_HPCP0100_t;

/*******************************************************************/
/* Record structure for QPQRAFPI PPCS0100 format                   */
/*******************************************************************/
typedef _Packed struct Qafp_PPCS0100 {
     Qafp_FontTableHeader_t PPFCSHeader;
   /*Qafp_PPFCSEntry_t BASED_ON[];*//* Varying length */
} Qafp_PPCS0100_t;


//#pragma datamodel[pop]

#endif
