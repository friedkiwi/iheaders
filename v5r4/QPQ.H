 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPQ                                        */
 /*                                                                */
 /* Descriptive Name: Common structures for use by QPQ APIs        */
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
 /* Description: Common structures for use by QPQ APIs             */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                 Qafp_CharSetCodePagePair_t                     */
 /*                 Qafp_CodedFont_t                               */
 /*                 Qafp_PHFCSEntry_t                              */
 /*                 Qafp_HPFCSEntry_t                              */
 /*                 Qafp_HPCPEntry_t                               */
 /*                 Qafp_PHCPEntry_t                               */
 /*                 Qafp_PPFCSEntry_t                              */
 /*                                                                */
 /* Function Prototype List: None                                  */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QPQ_h
#define QPQ_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/*******************************************************************/
/* Structure for font character set and code page pairs            */
/*******************************************************************/
typedef _Packed struct Qafp_CharSetCodePagePair {
     char FontCharacterSet[10];
     char HostCodePage[10];
     char ResidentFont[10];
     char Reserved[2];
} Qafp_CharSetCodePagePair_t;

/*******************************************************************/
/* Structure for coded fonts                                       */
/*******************************************************************/
typedef _Packed struct Qafp_CodedFont {
     char CodedFontName[10];
     char CodedFontLibrary[10];
     char Text[50];
     char Reserved[2];
} Qafp_CodedFont_t;


/*******************************************************************/
/* Structure for Printer to Host Font Character Set Entry          */
/*******************************************************************/
typedef _Packed struct Qafp_PHFCSEntry {
     int  PrinterFontID;
     char Width[10];
     char Attribute[12];
     char GraphicCharacterSet[10];
     char PointSize[10];
     char HostFontCharacter[10];
     char HostFontCharacter1[10];
     char HostFontCharacter2[10];
     char Type[10];
     char Reserved[2];
} Qafp_PHFCSEntry_t;

/*******************************************************************/
/* Structure for Host to Printer Font Character Set Entry          */
/*******************************************************************/
typedef _Packed struct Qafp_HPFCSEntry {
     char HostFontCharacter[10];
     char Type[10];
     int  PrinterFontID;
     char Width[10];
     char Attribute[12];
     char GraphicCharacterSet[10];
     char PointSize[10];
     char Reserved[2];
} Qafp_HPFCSEntry_t;

/*******************************************************************/
/* Structure for Printer to Host Code Page Entry                   */
/*******************************************************************/
typedef _Packed struct Qafp_PHCPEntry {
     char GraphicCharacterSet[10];
     char CodePage[10];
     char HostCodePage[10];
     char HostCodePage1[10];
     char HostCodePage2[10];
     char Reserved[3];
} Qafp_PHCPEntry_t;

/*******************************************************************/
/* Structure for Host to Printer Code Page Entry                   */
/*******************************************************************/
typedef _Packed struct Qafp_HPCPEntry {
     char HostCodePage[10];
     char GraphicCharacterSet[10];
     char CodePage[5];
     char Reserved[3];
} Qafp_HPCPEntry_t;


/*******************************************************************/
/* Structure for Printer to Printer Font Character Set Entry       */
/*******************************************************************/
typedef _Packed struct Qafp_PPFCSEntry {
     int  FromPrinterFontID;
     char FromPointSize[10];
     char Reserved1[2];
     int  ToPrinterFontID;
     char ToPointSize[10];
     char Reserved2[2];
} Qafp_PPFCSEntry_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif


#endif
