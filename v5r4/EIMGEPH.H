/*** START HEADER FILE SPECIFICATIONS *****************************/	
/*                                                                */
/* Header File Name: EIMGEPH                                      */
/*                                                                */
/* Descriptive Name: Convert Image API exit program defines       */
/*                                                                */
/* 5722-SS1  (C) Copyright IBM Corp. 2001,2001                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: Structures passed between the Convert Image       */
/*              API and user-defined exit programs.               */
/*                                                                */
/* Header Files Included:                                         */
/*                                                                */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: None.                                 */
/*                                                                */
/* Change Activity:                                               */
/* CFD List:                                                      */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/*      D97941       5D10  082699 BNK        Created              */
/* $A1= D98212.6    v5r1m0 010400 gchaney:   Teraspace stage 2    */
/* $A2= D98795       5D20  041601 DDH        Writer MsgQ Support. */
/* $A3= D97260       5D20  041601 DDH        Decoupled splf from  */
/*                                           job support.         */
/*                                                                */
/* End CFD List.                                                  */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef EIMGEPH_H
#define EIMGEPH_H

#include <decimal.h>

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/******************************************************************/
/* Data stream defines                                            */
/******************************************************************/
#define DS_STR_TIFF      "TIFF    "    /* Tag Image File Format       */
#define DS_STR_BMP       "BMP     "    /* Bitmap                      */
#define DS_STR_GIF       "GIF     "    /* Graphics Interchange Format */
#define DS_STR_PCL       "PCL     "    /* Printer Control Language    */
#define DS_STR_PS        "PS      "    /* PostScript                  */
#define DS_STR_PDF       "PDF     "    /* Portable Document Format    */
#define DS_STR_AFPDS     "AFPDS   "    /* Advanced Function Printing  */
#define DS_STR_UNKNOWN   "UNKNOWN "    /* unknown/unsupported data str*/

#define DS_INT_TIFF               1    /* Tag Image File Format       */
#define DS_INT_BMP                2    /* Bitmap                      */
#define DS_INT_GIF                6    /* Graphics Interchange Format */
#define DS_INT_AFPDS             20    /* Advanced Function Printing  */
#define DS_INT_PCL               22    /* Printer Control Language    */
#define DS_INT_PS                23    /* PostScript                  */
#define DS_INT_PDF               25    /* Portable Document Format    */
#define DS_INT_UNKNOWN           99    /* unknown/unsupported data str*/

/******************************************************************/
/* Compression type defines                                       */
/******************************************************************/
#define CT_NONE                   1
#define CT_GRP3FAX                3
#define CT_GRP4FAX                4
#define CT_PACKBITS               7
#define CT_IBMMMR                 8

/******************************************************************/
/* Orientation defines                                            */
/******************************************************************/
#define O_PORTRAIT                0
#define O_LANDSCAPE              90
#define O_PORTRAIT180           180
#define O_LANDSCAPE180          270

#define XPARM_VER        "XPRM0100"    /* latest version or XFORM_DATA*/
#define IPARM_VER        "IPRM0100"    /* latest version or IPT_PARM  */

#define QIMG_EXT0100     "XFRM0100"    /* Latest version of exit point*/


typedef _Packed struct {
   char  Version[8];              /* version of this structure        */
   int   Length;                  /* Length of this structure         */
   int   In_Fmt;                  /* input file format: PS, TIFF, etc.*/
   int   Out_Fmt;                 /* output file format: PCL, PS, etc.*/
   int   Invert_Img;              /* invert image: 0=No, 1=invert(b&W)*/
   int   Decmprs;                 /* input decompression value        */
   int   Cmprs;                   /* output compression value         */
   int   Horiz_Res;               /* output x resolution              */
   int   Vert_Res;                /* output y resolution              */
   int   Color_To_Gray;           /*convert color image to gray: 1=Yes*/
   int   Gray_To_Bw;              /* convert gray image to B&W: 1=Yes */
   int   Orient;                  /* output page orientation          */
   int   Horiz_Justify;           /* x justification from left border */
   int   Vert_Justify;            /* y justification from top border  */
   int   Bits_Per_Pixel;          /* bits per pixel for output        */
   int   Ppr_Size;                /* output page size (PCL code)      */
   decimal(15,5) Ppr_Width;       /* paper width                      */
   decimal(15,5) Ppr_Length;      /* paper width                      */
   int   Unprt_Left;              /* left unprintable left area       */
   int   Unprt_Right;             /* right unprintable area           */
   int   Unprt_Top;               /* top unprintable area             */
   int   Unprt_Bottom;            /* bottom unprintable area          */
   char  Reserved1[12];           /* reserved                         */
   char  Splf_Job_Name[10];       /* job name of the spooled file     */
   char  Splf_User_Name[10];      /* user the file was spooled under  */
   char  Splf_Job_Number[6];      /* job number of the spooled file   */
   char  Splf_Name[10];           /* spooled file name                */
   int   Splf_Number;             /* spooled file number              */
   char  Splf_Job_Sys_Name[8];    /* system name                      */
   char  Splf_Create_Date[7];     /* creation date in CYYMMDD format  */
   char  Reserved2;               /* reserved                         */
   char  Splf_Create_Time[6];     /* creation time in HHMMSS format   */
   char  Reserved3[2];            /* reserved                         */
   char  Writer_MsgQ_Name[10];    /* writer message queue name        */
   char  Writer_MsgQ_Lib[10];     /* writer message queue library name*/
   char  Internal_Splf_Id[16];    /* internal spooled file identifier */
   char  Internal_Job_Id[16];     /* internal job identifier          */
   char  Reserved4[28];           /* reserved                         */
} QIMG_XFRM0100;


typedef _Packed struct {
   char          Version[8];     /* version of this structure         */
   int           Length;         /* Length of this structure          */
   int           Proc_Opt;       /* processing option                 */
                                 /*      (20) Process File            */
                                 /*      (30) Transform Data          */
                                 /*      (40) End file                */
                                 /*      (50) Terminate               */
   unsigned long In_Ds_Len;      /* input data stream length          */
   unsigned long Out_Ds_Len;     /* output data stream length         */
   unsigned long Xform_Data_Len; /* length of returned xformed data   */
   char          Trnsfm;         /* transform? 0=can't,1=can,         */
   char          Reserved[3];    /* reserved for padding              */
   int           Done;           /* done? 0=no, 1=yes                 */
} QIMG_IPRM0100;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
