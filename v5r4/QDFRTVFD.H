/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QDFRTVFD                                  */
/*                                                               */
/* Descriptive Name: Header file for QDFRTVFD API.               */
/*                                                               */
/* Description: Header file for the QDFRTVFD API.                */
/*                                                               */
/* Header Files Included: none.                                  */
/*                                                               */
/* Macros List: none.                                            */
/*                                                               */
/* Structure List:                                               */
/*                 QDFFBASE                                      */
/*                 QDFFSCRA                                      */
/*                 QDFFSSEQ                                      */
/*                 QDFFINFO                                      */
/*                 QDFFDPDD                                      */
/*                 QDFARFTE                                      */
/*                 QDFFSEQT                                      */
/*                 QDFFRINF                                      */
/*                 QDFFRDPD                                      */
/*                 QDFFXRDP                                      */
/*                 QDFFSFCR                                      */
/*                 QDFFSFSRU                                     */
/*                 QDFFSFERU                                     */
/*                 QDFFSFH2U                                     */
/*                 QDFFSFHR                                      */
/*                 QDFFSFCREXT                                   */
/*                 QDFFRCTB                                      */
/*                 QDFFRCTE                                      */
/*                 QDFFNTB                                       */
/*                 QDFFOT                                        */
/*                 QDFFFITB                                      */
/*                 QDFFFINF                                      */
/*                 QDFFFCON                                      */
/*                 QDFFFNAM                                      */
/*                 QDFFFDPD                                      */
/*                 QDFFFDIC                                      */
/*                 QDFFXFDP                                      */
/*                 QDFFSELT                                      */
/*                 QDFFSTBL                                      */
/*                 QDFFCOSA                                      */
/*                 QDFFCCOA                                      */
/*                 QDFKFILK                                      */
/*                 QDFKFLPM                                      */
/*                 QDFKFLPP                                      */
/*                 QDFKFLSZ                                      */
/*                 QDFKICVP                                      */
/*                 QDFKHARD                                      */
/*                 QDFKHXPS                                      */
/*                 QDFKHDOC                                      */
/*                 QDFKSIDX                                      */
/*                 QDFKFALX                                      */
/*                 QDFKFALK                                      */
/*                 QDFKESFL                                      */
/*                 QDFKBODR                                      */
/*                 QDFKCKKW                                      */
/*                 QDFKCKKE                                      */
/*                 QDFKOVRR                                      */
/*                 QDFKOVRE                                      */
/*                 QDFKOVRP                                      */
/*                 QDFKOLER                                      */
/*                 QDFKOLCL                                      */
/*                 QDFKMSRL                                      */
/*                 QDFKMSAP                                      */
/*                 QDFKMSCP                                      */
/*                 QDFKMSK1                                      */
/*                 QDFKMSK2                                      */
/*                 QDFKMSK3                                      */
/*                 QDFKMSCLN                                     */
/*                 QDFKMSMBDSP                                   */
/*                 QDFK0BPR                                      */
/*                 QDFK0BXWP                                     */
/*                 QDFK0BGATR                                    */
/*                 QDFKHBKPRM                                    */
/*                 QDFKMRPR                                      */
/*                 QDFKMRWP                                      */
/*                 QDFKHSTR                                      */
/*                 QDFKHPRM                                      */
/*                 QDFKHNMS                                      */
/*                 QDFKHPS                                       */
/*                 QDFKHRDC                                      */
/*                 QDFKHARA                                      */
/*                 QDFKHARX                                      */
/*                 QDFKHSEQ                                      */
/*                 QDFKPRTR                                      */
/*                 QDFKPPRM                                      */
/*                 QDFKBRDR                                      */
/*                 QDFKLINU                                      */
/*                 QDFKWDTA                                      */
/*                 QDFKWDWTTL                                    */
/*                 QDFKWTCOLORU                                  */
/*                 QDFKWTDSPAU                                   */
/*                 QDFKWTALIGNU                                  */
/*                 QDFKMB                                        */
/*                 QDFKSCSF                                      */
/*                 QDFKSCCP                                      */
/*                 QDFKSCSM                                      */
/*                 QDFKSCSI                                      */
/*                 QDFKSFLM                                      */
/*                 QDFKSFLS                                      */
/*                 QDFKCSRRRN                                    */
/*                 QDFKMODE                                      */
/*                 QDFKSASA                                      */
/*                 QDFKSAPM                                      */
/*                 QDFKFFWR                                      */
/*                 QDFKCHKP                                      */
/*                 QDFKMFDK                                      */
/*                 QDFKMFDP                                      */
/*                 QDFKMFRS                                      */
/*                 QDFKMFEM                                      */
/*                 QDFKMFSI                                      */
/*                 QDFKMFMV                                      */
/*                 QDFKMFM3                                      */
/*                 QDFKMFM4                                      */
/*                 QDFKDFLD                                      */
/*                 QDFKDFT                                       */
/*                 QDFKDFPM                                      */
/*                 QDFKDFMM                                      */
/*                 QDFKDFHTML                                    */
/*                 QDFKEDTR                                      */
/*                 QDFKEDTP                                      */
/*                 QDFKVAKW                                      */
/*                 QDFKVARL                                      */
/*                 QDFKCKMI                                      */
/*                 QDFKFCPR                                      */
/*                 QDFKFC                                        */
/*                 QDFKCHC                                       */
/*                 QDFKCHCHDREXP                                 */
/*                 QDFKCHCE                                      */
/*                 QDFKCTXT                                      */
/*                 QDFKCACC                                      */
/*                 QDFKCMSG                                      */
/*                 QDFKMBSEPS                                    */
/*                 QDFKCHCX                                      */
/*                 QDFKEFATR                                     */
/*                 QDFKFLDCP                                     */
/*                 QDFKCNTFLD                                    */
/*                 QDFKEDTMSK                                    */
/*                 QDFKEDTSEG                                    */
/*                 QDFKSMSG                                      */
/*                 QDFKGRPR                                      */
/*                 QDFKGRWP                                      */
/*                 QDFKGRDATR                                    */
/*                 QDFKGRDCLR                                    */
/*                 QDFKGRDBOX                                    */
/*                 QDFKGBOXDFM                                   */
/*                 QDFKGRDLIN                                    */
/*                 QDFKGLINDFM                                   */
/*                 QDFWFLEI                                      */
/*                 QDFWRCDI                                      */
/*                 QDFWFLDI                                      */
/*                 QDFWITBE                                      */
/*                 QDFWKWDA                                      */
/*                 QDFWKWIDU                                     */
/*                 QDFWATTR                                      */
/*                 QDFWATYP                                      */
/*                 QDFWBTYP                                      */
/*                 QDFWRSTR                                      */
/*                 QDFFNTBL                                      */
/*                                                               */
/*                                                               */
/* Function Prototype List: QDFRTVFD                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940317 XZS0786:  New Include          */
/* $A1= D9477700     3D70  961214 SHAWNB :  Add HTML keyword     */
/*                                          fields               */
/* $A2= D9516500     4D20  970808 LJAMESON: Year 2000 support    */
/* $A3= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2      */
/* $A4= PSE15414    v5r4m0 040618 trewarth: Closing comment that */
/*                                          didn't comply the C  */
/*                                          language specifications*/
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QDFRTVFD_h
#define QDFRTVFD_h

#if (__OS400_TGTVRM__>=510)                       /* @A3A */
    #pragma datamodel(P128)                       /* @A3A */
#endif                                            /* @A3A */

#ifdef __ILEC400__
    #pragma linkage (QDFRTVFD,OS,NOWIDEN)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for calling Retrieve File Description API QDFRTVFD */
/*****************************************************************/
void QDFRTVFD (void *,           /* Receiver Variable            */
               int   ,           /* Length of receiver variable  */
               char *,           /* Format name                  */
               void *,           /* Qualified file name          */
               void *);          /* Error code                   */

  typedef _Packed struct QDFFBASE {   /* Base File Section (QDFFBASE)  */
                                      /* Base file structure.  This is */
                                      /* the first structure and is    */
                                      /* located at offset zero of the */
                                      /* returned data.                */

       long int WDFFRETN;             /* Length of the returned data.  */

       long int WDFFSIZE;             /* Size of the display file      */
                                      /* description.                  */

       short WDFFINOF;                /* Displacement to file header   */
                                      /* section (see structure        */
                                      /* QDFFINFO)                     */

       short WDFFRCS;                 /* Number of record formats      */
                                      /* specified.  This number       */
                                      /* includes internally generated */
                                      /* record formats.               */

       struct WDFFDPAT {              /* Display attribute bits.       */

         unsigned WDFFSEPI:1;         /* If on, INDARA keyword is      */
                                      /* specified.                    */

         unsigned WDFFDESF:1;         /* If on, ERRSFL keyword is      */
                                      /* specified.  Note: The ERRSFL  */
                                      /* keyword generates additional  */
                                      /* internal records (*ERRSFL).   */

         unsigned RESERVED_1:6;       /* Reserved.                     */

       }WDFFDPAT;

       short WDFFSCR;                 /* Number of valid file screen   */
                                      /* sizes (see structure          */
                                      /* QDFFSCRA,).                   */

       short WDFFSRSQ;                /* Displacement to sort sequence */
                                      /* table (see structure          */
                                      /* QDFFSSEQ).                    */

       unsigned short WDFFACCSID;     /* CCSID of source member used   */
                                      /* to create the device file.    */

     /*char WDFFSCRS[];   */          /* Screen size table.  This area */
                                      /* defines the screen sizes      */
                                      /* valid for externally defined  */
                                      /* files.  This is specified by  */
                                      /* the DSPSIZ keyword.  When not */
                                      /* specified, a default          */
                                      /* DSPSIZ(*DS3) is generated.    */
                                      /* Structure QDFFSCRA defines    */
                                      /* the entries.  The elements    */
                                      /* are in the sequence that the  */
                                      /* DSPSIZ keywords are           */
                                      /* specified.                    */

  }  QDFFBASE_t;



  typedef _Packed struct QDFFSCRA {   /* Screen Size Table (QDFFSCRA)  */
                                      /* Screen ID array.  The number  */
                                      /* of entries in this structure  */
                                      /* is defined by variable        */
                                      /* WDFFSCR in structure          */
                                      /* QDFFBASE.  This structure is  */
                                      /* defined at variable WDFFSCRS  */
                                      /* in structure QDFFBASE.  The   */
                                      /* structure is ARRAY(*).        */

       char WDFFSCIA;                 /* Screen ID.  X'03' is defined  */
                                      /* as *DS3; X'04' is defined as  */
                                      /* *DS4.                         */

       char RESERVED_2[4];            /* Reserved.                     */

  }  QDFFSCRA_t;



  typedef _Packed struct QDFFSSEQ {   /* Sort Sequence Table           */
                                      /* (QDFFSSEQ) Sort sequence      */
                                      /* table information used for    */
                                      /* the ALTSEQ keyword.  The      */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFFBASE is at   */
                                      /* variable WDFFSRSQ in          */
                                      /* QDFFBASE.                     */

       char WDFFSST[256];             /* Sort sequence table.          */

       unsigned int WDFFSSC;          /* CCSID associated with the     */
                                      /* table.                        */

       char WDFFSSN[10];              /* Table name.                   */

       char WDFFSSL[10];              /* Library name.                 */

       struct WDFFSSFL {              /* Indicator flags.              */

         unsigned WDFFSSUS:1;         /* Weighted indicator.  0 is     */
                                      /* defined as shared weighted; 1 */
                                      /* is defined as unique          */
                                      /* weighted.                     */

         unsigned WDFFSSSB:1;         /* Substitution characters       */
                                      /* indicator.  0 is defined as   */
                                      /* having no substitution        */
                                      /* characters; 1 is defined as   */
                                      /* having substitution           */
                                      /* characters.                   */

         unsigned RESERVED_3:14;      /* Reserved.                     */

       }WDFFSSFL;

       char RESERVED_4[26];           /* Reserved.                     */

  }  QDFFSSEQ_t;



  typedef _Packed struct QDFFINFO {   /* File Header Section           */
                                      /* (QDFFINFO) File header        */
                                      /* structure.  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFFBASE is at variable       */
                                      /* WDFFINOF in structure         */
                                      /* QDFFBASE.                     */

       long int WDFFDFLO;             /* Length of the file header     */
                                      /* section.  This includes the   */
                                      /* display-file-level            */
                                      /* device-dependent section.     */
                                      /* This is also the displacement */
                                      /* from structure QDFFINFO to    */
                                      /* the record format table.      */

       long int WDFFWUOF;             /* Displacement to the           */
                                      /* where-used file-level         */
                                      /* information structure from    */
                                      /* structure QDFFINFO.           */

       long int WDFFFMWU;             /* Length of file header section */
                                      /* and the where-used file-level */
                                      /* information structure.        */

       long int WDFFSEQO;             /* Displacement from structure   */
                                      /* QDFFINFO to the sequence      */
                                      /* number table defined by       */
                                      /* structure QDFFSEQT 0, if not  */
                                      /* present.                      */

       short WDFFSFL;                 /* Maximum number of entries in  */
                                      /* the selection tables defined  */
                                      /* by structure QDFFSTBL at the  */
                                      /* record and field levels.      */

       short WDFFSCE;                 /* Maximum number of entries in  */
                                      /* the selection tables for this */
                                      /* file (structure QDFFSTBL).    */
                                      /* at the record levels.         */

       struct WDFFFFLG {              /* File level flag.              */

         unsigned RESERVED_5:1;       /* Reserved.                     */

         unsigned WDFFGRPH:1;         /* If on, the file contains at   */
                                      /* least one field with a        */
                                      /* graphic (G) data type.        */

         unsigned RESERVED_6:14;      /* Reserved.                     */

       }WDFFFFLG;

       char RESERVED_7[12];           /* Reserved.                     */

       short WDFFXDOF;                /* Displacement to               */
                                      /* display-file-level            */
                                      /* device-dependent section from */
                                      /* structure QDFFINFO (see       */
                                      /* structure QDFFDPDD).          */

  }  QDFFINFO_t;



  typedef _Packed struct QDFFDPDD {   /* Display-File-Level            */
                                      /* Device-Dependent Section      */
                                      /* (QDFFDPDD) Display device     */
                                      /* dependent section.  The       */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFFINFO is at   */
                                      /* variable WDFFXDOF in          */
                                      /* QDFFINFO.                     */

       char RESERVED_8[8];            /* Reserved.                     */

       struct WDFFFKWD {              /* Miscellaneous keyword         */
                                      /* indicator.                    */

         unsigned WDFFOPEN:1;         /* If on, OPENPRT keyword        */
                                      /* specified in file.            */

         unsigned WDFFCLRL:1;         /* If on, CLRL keyword specified */
                                      /* in some record format in this */
                                      /* file.                         */

         unsigned WDFFFICV:1;         /* If on, IGCCNV keyword         */
                                      /* specified in file.  Note: The */
                                      /* IGCCNV keyword generates      */
                                      /* additional internal records   */
                                      /* (*IGCFMT).                    */

         unsigned WDFFAGPH:1;         /* If on, ALWGPH keyword         */
                                      /* specified on at least one     */
                                      /* record format in file.        */

         unsigned WDFFXHRD:1;         /* If on, file-level HLPRCD      */
                                      /* keyword is specified.         */

         unsigned WDFFUDMT:1;         /* If on, USRDSPMGT keyword is   */
                                      /* specified.                    */

         unsigned WDFFPRPG:1;         /* If on, PRINT(*PGM) keyword is */
                                      /* specified.                    */

         unsigned WDFFHSIO:1;         /* If on, file-level HLPSCHIDX   */
                                      /* keyword is specified.         */

         unsigned WDFFXHTL:1;         /* If on, file-level HLPTITLE    */
                                      /* keyword is specified.         */

         unsigned WDFFXUIM:1;         /* If on, file-level HLPPNLGRP   */
                                      /* keyword is specified.         */

         unsigned WDFFXHDC:1;         /* If on, file-level HLPDOC      */
                                      /* keyword is specified.         */

         unsigned RESERVED_9:1;       /* Reserved.                     */

         unsigned WDFFALTN:1;         /* If on, at least one ALTNAME   */
                                      /* keyword is specified in file. */

         unsigned WDFFHFUL:1;         /* If on, HLPFULL keyword is     */
                                      /* specified in file.            */

         unsigned WDFFESFL:1;         /* If on, ERRSFL keyword is      */
                                      /* specified in file.  Note: The */
                                      /* ERRSFL keyword generates      */
                                      /* additional internal records   */
                                      /* (*ERRSFL).                    */

         unsigned WDFFWDW:1;          /* If on, WINDOW keyword is      */
                                      /* specified in file.            */

       }WDFFFKWD;

       char RESERVED_10[2];           /* Reserved.                     */

       struct WDFFSHB1 {              /* Start-of-header (SOH) bits.   */

         unsigned WDFFSHCS:1;         /* If on, CHECK(RLTB) keyword is */
                                      /* specified.                    */

         unsigned RESERVED_11:1;      /* Reserved.                     */

         unsigned WDFFAUTO:1;         /* If on, DSPRL keyword is       */
                                      /* specified.                    */

         unsigned RESERVED_12:5;      /* Reserved.                     */

       }WDFFSHB1;

       char RESERVED_13[2];           /* Reserved.                     */

       char WDFFSHRA;                 /* Row address of the message    */
                                      /* line for primary display      */
                                      /* size.                         */

       struct WDFFCKY1 {              /* File-level CA keys 17 through */
                                      /* 24.                           */

         unsigned WDFFCK24:1;         /* If on, CA key 24 is           */
                                      /* specified.                    */

         unsigned WDFFCK23:1;         /* If on, CA key 23 is           */
                                      /* specified.                    */

         unsigned WDFFCK22:1;         /* If on, CA key 22 is           */
                                      /* specified.                    */

         unsigned WDFFCK21:1;         /* If on, CA key 21 is           */
                                      /* specified.                    */

         unsigned WDFFCK20:1;         /* If on, CA key 20 is           */
                                      /* specified.                    */

         unsigned WDFFCK19:1;         /* If on, CA key 19 is           */
                                      /* specified.                    */

         unsigned WDFFCK18:1;         /* If on, CA key 18 is           */
                                      /* specified.                    */

         unsigned WDFFCK17:1;         /* If on, CA key 17 is           */
                                      /* specified.                    */

       }WDFFCKY1;

       struct WDFFCKY2 {              /* File-level CA keys 9 through  */
                                      /* 16.                           */

         unsigned WDFFCK16:1;         /* If on, CA key 16 is           */
                                      /* specified.                    */

         unsigned WDFFCK15:1;         /* If on, CA key 15 is           */
                                      /* specified.                    */

         unsigned WDFFCK14:1;         /* If on, CA key 14 is           */
                                      /* specified.                    */

         unsigned WDFFCK13:1;         /* If on, CA key 13 is           */
                                      /* specified.                    */

         unsigned WDFFCK12:1;         /* If on, CA key 12 is           */
                                      /* specified.                    */

         unsigned WDFFCK11:1;         /* If on, CA key 11 is           */
                                      /* specified.                    */

         unsigned WDFFCK10:1;         /* If on, CA key 10 is           */
                                      /* specified.                    */

         unsigned WDFFCK9:1;          /* If on, CA key 9 is specified. */

       }WDFFCKY2;

       struct WDFFCKY3 {              /* File-level CA keys 1 through  */
                                      /* 8.                            */

         unsigned WDFFCK8:1;          /* If on, CA key 8 is specified. */

         unsigned WDFFCK7:1;          /* If on, CA key 7 is specified. */

         unsigned WDFFCK6:1;          /* If on, CA key 6 is specified. */

         unsigned WDFFCK5:1;          /* If on, CA key 5 is specified. */

         unsigned WDFFCK4:1;          /* If on, CA key 4 is specified. */

         unsigned WDFFCK3:1;          /* If on, CA key 3 is specified. */

         unsigned WDFFCK2:1;          /* If on, CA key 2 is specified. */

         unsigned WDFFCK1:1;          /* If on, CA key 1 is specified. */

       }WDFFCKY3;

       struct WDFFMKWD {              /* Miscellaneous keyword         */
                                      /* indicators.                   */

         unsigned WDFFBRDR:1;         /* If on, file-level WDWBORDER   */
                                      /* keyword is specified.         */

         unsigned RESERVED_14:1;      /* Reserved.                     */

         unsigned WDFFRTCR:1;         /* If on, RTNCSRLOC keyword is   */
                                      /* specified.                    */

         unsigned WDFFFFCP:1;         /* If on, FLDCSRPRG keyword is   */
                                      /* specified.                    */

         unsigned WDFFDSPP:1;         /* If on, DSPATR                 */
                                      /* program-to-system field is    */
                                      /* specified in file.            */

         unsigned WDFFHBKS:1;         /* If on, HLPSHELF keyword is    */
                                      /* specified in file.            */

         unsigned WDFFINLYF:1;        /* If on, CSRINPONLY keyword is  */
                                      /* specified in file.            */

         unsigned WDFFDBCSCNFLD:1;    /* If on, CNTFLD keyword is used */
                                      /* on a DBCS field in the file.  */

       }WDFFMKWD;
       struct WDFFMKW2 {              /* More miscellaneous keywords   */
                                      /*                           @A1A*/

         unsigned WDFFHTML:1;         /* If on, the HTML keyword was   */
                                      /* specified in the file     @A1A*/

         unsigned RESERVED_122:7;     /* Reserved.                 @A1A*/

       }WDFFMKW2;

       char RESERVED_15[3];           /* Reserved.                 @A1C*/

       short WDFFXDOC;                /* Displacement to keyword       */
                                      /* category displacement string  */
                                      /* from structure QDFFINFO (see  */
                                      /* structure QDFFCOSA).  0, if   */
                                      /* no file keyword categories.   */

  }  QDFFDPDD_t;



  typedef _Packed struct QDFARFTE {   /* Record Format Table           */
                                      /* (QDFARFTE) Record format      */
                                      /* table array.  The number of   */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFFRCS   */
                                      /* in structure QDFFBASE.  The   */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFFINFO is at   */
                                      /* variable WDFFDFLO in          */
                                      /* QDFFINFO.  The structure is   */
                                      /* ARRAY(*).                     */

       char WDFARFNM[10];             /* Record format name.  Names    */
                                      /* that begin with * are         */
                                      /* internally generated record   */
                                      /* formats.                      */

       struct WDFARCND {              /* Miscellaneous record          */
                                      /* contents.                     */

         unsigned WDFFRECD:1;         /* If on, RECID keyword          */
                                      /* specified on this format.     */

         unsigned RESERVED_16:15;     /* Reserved.                     */

       }WDFARCND;

       long int WDFARFOF;             /* Displacement to the record    */
                                      /* header section (see structure */
                                      /* QDFFRINF) from structure      */
                                      /* QDFFINFO.                     */

  }  QDFARFTE_t;



  typedef _Packed struct QDFFSEQT {   /* Sequence Number Table         */
                                      /* (QDFFSEQT) Sequence number    */
                                      /* table.  The number of entries */
                                      /* in this structure is defined  */
                                      /* by variable WDFFRCS in        */
                                      /* structure QDFFBASE.  The      */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFFINFO is at   */
                                      /* variable WDFFSEQO in          */
                                      /* QDFFINFO.  The structure is   */
                                      /* ARRAY(*).                     */

       char WDFFSEQ[13];              /* Level-check number for        */
                                      /* format.  There is a           */
                                      /* one-to-one correspondence     */
                                      /* between this array and the    */
                                      /* entries in the record format  */
                                      /* table.                        */

       char RESERVED_17[3];           /* Reserved.                     */

  }  QDFFSEQT_t;



  typedef _Packed struct QDFFRINF {   /* Record Header Section         */
                                      /* (QDFFRINF) Record header      */
                                      /* section.  The displacement to */
                                      /* this structure from the       */
                                      /* beginning of structure        */
                                      /* QDFFINFO is at variable       */
                                      /* WDFARFOF.  in structure       */
                                      /* QDFARFTE.                     */

       long int WDFFRDDO;             /* Length of the record header   */
                                      /* section.  This length         */
                                      /* includes the device-dependent */
                                      /* sections (that is, it is the  */
                                      /* displacement to structure     */
                                      /* QDFFFINF for the first field  */
                                      /* in that record format).       */

       long int WDFFOFIT;             /* The displacement from         */
                                      /* structure QDFFRINF to the     */
                                      /* field indexing table defined  */
                                      /* by structure QDFFFITB.        */

       long int WDFFSTBO;             /* The displacement from         */
                                      /* structure QDFFRINF to the     */
                                      /* selection table defined by    */
                                      /* structure QDFFSELT.  0, if no */
                                      /* selection table present.      */

       struct WDFFRFLG {              /* Miscellaneous record          */
                                      /* contents.                     */

         unsigned WDFFUDDS:1;         /* If on, USRDFN keyword is      */
                                      /* specified.                    */

         unsigned WDFFSFL:1;          /* If on, SFL keyword is         */
                                      /* specified (next record is     */
                                      /* SFLCTL).                      */

         unsigned WDFFSFLC:1;         /* If on, SFLCTL keyword is      */
                                      /* specified (previous record is */
                                      /* SFL).                         */

         unsigned WDFFMSGR:1;         /* If on, SFLMSGRCD keyword is   */
                                      /* specified.                    */

         unsigned WDFFRICV:1;         /* If on, IGCCNV record is       */
                                      /* specified.  Note: The IGCCNV  */
                                      /* keyword generates additional  */
                                      /* internal records.             */

         unsigned RESERVED_18:3;      /* Reserved.                     */

         unsigned WDFFALLH:1;         /* If on, all fields in format   */
                                      /* are hidden.                   */

         unsigned RESERVED_19:1;      /* Reserved.                     */

         unsigned WDFFREXC:1;         /* If on, DBCS data that can be  */
                                      /* processed is specified in     */
                                      /* record.  This occurs when the */
                                      /* O, J, or E data type is       */
                                      /* specified; when DBCS literals */
                                      /* are specified on a DFT,       */
                                      /* DFTVAL, SFLMSG, RECID,        */
                                      /* ERRMSG, or RTGCON keyword.    */

         unsigned WDFFRIDV:1;         /* If on, format requires a DBCS */
                                      /* device.                       */

         unsigned WDFFREXT:1;         /* If on, extractable DBCS data  */
                                      /* is in format.                 */

         unsigned WDFFRALT:1;         /* If on, at least one field in  */
                                      /* format was specified as       */
                                      /* IGCALTTYP.                    */

         unsigned WDFFMEMF:1;         /* If on, CHECK(ME) or CHECK(MF) */
                                      /* specified in at least one     */
                                      /* field in record.              */

         unsigned WDFFNDLC:1;         /* If on, ALWENDLOC keyword is   */
                                      /* specified in record.          */

         unsigned WDFFRGPH:1;         /* If on, graphic fields are     */
                                      /* specified in record.          */

         unsigned WDFFRCL:1;          /* If on, RTNCSRLOC keyword is   */
                                      /* specified in record.          */

         unsigned WDFFMBAR:1;         /* If on, MNUBAR keyword is      */
                                      /* specified in record.          */

         unsigned WDFFPULL:1;         /* If on, PULLDOWN keyword is    */
                                      /* specified in record.          */

         unsigned WDFFPLSI:1;         /* Selection indicators on       */
                                      /* PULLDOWN keyword.  0 is       */
                                      /* defined as *NOSLTIND; 1 is    */
                                      /* defined as *SLTIND (default). */

         unsigned WDFFFCPF:1;         /* If on, FLDCSRPRG specified on */
                                      /* field in record.              */

         unsigned WDFFCNTMCFFLD:1;    /* If on, CNTFLD, MLTCHCFLD, or  */
                                      /* SNGCHCFLD keyword is          */
                                      /* specified on a field within   */
                                      /* this record.                  */

         unsigned WDFFEDTMSK:1;       /* If on, EDTMSK keyword is      */
                                      /* specified in record.          */

         unsigned WDFFGRIDREC:1;      /* If on, GRDRCD keyword is      */
                                      /* specified in record.          */

         unsigned RESERVED_20:7;      /* Reserved.                     */

       }WDFFRFLG;

       short WDFFFLD;                 /* Number of fields in this      */
                                      /* record.                       */

       char RESERVED_21[4];           /* Reserved.                     */

       short WDFFINDO;                /* If INDARA keyword is          */
                                      /* specified and response        */
                                      /* indicators are in this        */
                                      /* record, this is the           */
                                      /* displacement from structure   */
                                      /* QDFFRINF to the response      */
                                      /* indicator keyword array (see  */
                                      /* structure QDFKMSCP) in        */
                                      /* category 4.  0 means the      */
                                      /* INDARA keyword is not         */
                                      /* specified or if INDARA is     */
                                      /* specified, there are no       */
                                      /* response indicators.          */

       char RESERVED_22[4];           /* Reserved.                     */

       short WDFFRAOF;                /* Displacements to              */
                                      /* display-record-level          */
                                      /* device-dependent section and  */
                                      /* subfile control record from   */
                                      /* structure QDFFRINF (see       */
                                      /* structures QDFFRDPD and       */
                                      /* QDFFSFCR).                    */

  }  QDFFRINF_t;



  typedef _Packed struct QDFFRDPD {   /* Display-Record-Level          */
                                      /* Device-Dependent Section      */
                                      /* (QDFFRDPD) Display            */
                                      /* device-dependent section for  */
                                      /* nonsubfile records.           */
                                      /* Structure QDFFSFCR is used    */
                                      /* when subfiles are specified.  */
                                      /* The displacement to this      */
                                      /* structure from the beginning  */
                                      /* of structure QDFFRINF is an   */
                                      /* entry in the table at         */
                                      /* variable WDFFRAOF in          */
                                      /* QDFFRINF.                     */

       long int WDFFDRCO;             /* Displacement to first         */
                                      /* row-column table (QDFFRCTB)   */
                                      /* from structure QDFFRINF.  One */
                                      /* row-column table exists for   */
                                      /* each display size (see        */
                                      /* variable WDFFSCR, in          */
                                      /* structure QDFFBASE).  The     */
                                      /* following may be used to      */
                                      /* access the correct table: let */
                                      /* n = index into screen size    */
                                      /* array QDFFSCRA.  (WDFFDRCO +  */
                                      /* (n - 1) * (WDFFFLD *          */
                                      /* LENGTH(WDFFRC)) +             */
                                      /* LENGTH(WDFFFRTO) ) from       */
                                      /* QDFFRINF.                     */

       short WDFFINCP;                /* Number of input-capable       */
                                      /* fields (that is, total input, */
                                      /* both, and hidden).            */

       short WDFFIBF;                 /* Number of input and both      */
                                      /* fields.                       */

       short WDFFOIS;                 /* Number of option indicators.  */

       char RESERVED_23[2];           /* Reserved.                     */

       struct WDFACKYS {              /* Indicates if a CA or CF key   */
                                      /* is specified.  To determine   */
                                      /* which key (CA or CF) is       */
                                      /* specified, check the          */
                                      /* corresponding WDFFCKnn bit in */
                                      /* structure QDFFDPDD.           */

         struct WDFACKY1 {            /* Keys 1 through 8 without      */
                                      /* option indicators.            */

           unsigned WDFACK1:1;        /* If on, CA/CF key 1 is         */
                                      /* specified.                    */

           unsigned WDFACK2:1;        /* If on, CA/CF key 2 is         */
                                      /* specified.                    */

           unsigned WDFACK3:1;        /* If on, CA/CF key 3 is         */
                                      /* specified.                    */

           unsigned WDFACK4:1;        /* If on, CA/CF key 4 is         */
                                      /* specified.                    */

           unsigned WDFACK5:1;        /* If on, CA/CF key 5 is         */
                                      /* specified.                    */

           unsigned WDFACK6:1;        /* If on, CA/CF key 6 is         */
                                      /* specified.                    */

           unsigned WDFACK7:1;        /* If on, CA/CF key 7 is         */
                                      /* specified.                    */

           unsigned WDFACK8:1;        /* If on, CA/CF key 8 is         */
                                      /* specified.                    */

         }WDFACKY1;

         struct WDFACKY2 {            /* Keys 9 through 16 without     */
                                      /* option indicators.            */

           unsigned WDFACK9:1;        /* If on, CA/CF key 9 is         */
                                      /* specified.                    */

           unsigned WDFACK10:1;       /* if on, CA/CF key 10 is        */
                                      /* specified.                    */

           unsigned WDFACK11:1;       /* If on, CA/CF key 11 is        */
                                      /* specified.                    */

           unsigned WDFACK12:1;       /* If on, CA/CF key 12 is        */
                                      /* specified.                    */

           unsigned WDFACK13:1;       /* If on, CA/CF key 13 is        */
                                      /* specified.                    */

           unsigned WDFACK14:1;       /* If on, CA/CF key 14 is        */
                                      /* specified.                    */

           unsigned WDFACK15:1;       /* If on, CA/CF key 15 is        */
                                      /* specified.                    */

           unsigned WDFACK16:1;       /* If on, CA/CF key 16 is        */
                                      /* specified.                    */

         }WDFACKY2;

         struct WDFACKY3 {            /* Keys 17 through 24 without    */
                                      /* option indicators.            */

           unsigned WDFACK17:1;       /* If on, CA/CF key 17 is        */
                                      /* specified.                    */

           unsigned WDFACK18:1;       /* If on, CA/CF key 18 is        */
                                      /* specified.                    */

           unsigned WDFACK19:1;       /* If on, CA/CF key 19 is        */
                                      /* specified.                    */

           unsigned WDFACK20:1;       /* If on, CA/CF key 20 is        */
                                      /* specified.                    */

           unsigned WDFACK21:1;       /* If on, CA/CF key 21 is        */
                                      /* specified.                    */

           unsigned WDFACK22:1;       /* If on, CA/CF key 22 is        */
                                      /* specified.                    */

           unsigned WDFACK23:1;       /* If on, CA/CF key 23 is        */
                                      /* specified.                    */

           unsigned WDFACK24:1;       /* If on, CA/CF key 24 is        */
                                      /* specified.                    */

         }WDFACKY3;

         struct WDFFCMDK {            /* Other command keys without    */
                                      /* option indicators.            */

           unsigned WDFFRLUP:1;       /* If on, ROLLUP keyword is      */
                                      /* specified.                    */

           unsigned WDFFRLDN:1;       /* If on, ROLLDOWN keyword is    */
                                      /* specified.                    */

           unsigned WDFFPRNT:1;       /* If on, PRINT keyword is       */
                                      /* specified.                    */

           unsigned WDFFHOME:1;       /* If on, HOME keyword is        */
                                      /* specified.                    */

           unsigned WDFFCLR:1;        /* If on, CLEAR keyword is       */
                                      /* specified.                    */

           unsigned WDFFHELP:1;       /* If on, HELP keyword is        */
                                      /* specified.                    */

           unsigned RESERVED_24:2;    /* Reserved.                     */

         }WDFFCMDK;

       }WDFACKYS;

       struct WDFFPUTK {              /* Miscellaneous PUT conditions. */

         unsigned WDFFFSEL:1;         /* If on, field selection.       */

         unsigned WDFFPUTR:1;         /* If on, PUTRETAIN keyword is   */
                                      /* specified on some fields for  */
                                      /* this format.                  */

         unsigned WDFFVSLN:1;         /* If on, SLNO(*VAR) keyword is  */
                                      /* specified.                    */

         unsigned WDFFALRL:1;         /* If on, ALWROL keyword is      */
                                      /* specified.                    */

         unsigned WDFFNOCO:1;         /* Currently set for records     */
                                      /* containing floating point     */
                                      /* fields or DBCS data that      */
                                      /* requires a DBCS device (refer */
                                      /* to WDFFRIDV).                 */

         unsigned WDFFALGP:1;         /* If on, unconditioned ALWGPH   */
                                      /* keyword is specified.         */

         unsigned WDFFRDMD:1;         /* If on, DSPMOD keyword is      */
                                      /* specified.                    */

         unsigned WDFFRMID:1;         /* If on, MSGID keyword is       */
                                      /* specified on field in record. */

         unsigned WDFFRKEY:1;         /* If on, RETKEY keyword is      */
                                      /* specified.                    */

         unsigned WDFFRCKY:1;         /* If on, RETCMDKEY keyword is   */
                                      /* specified.                    */

         unsigned WDFFRDVL:1;         /* If on, DFTVAL keyword is      */
                                      /* specified on field.           */

         unsigned WDFFVSL1:1;         /* If on, SLNO(*VAR) keyword is  */
                                      /* specified and a field in row  */
                                      /* 1, column 1 is specified for  */
                                      /* at least one display size.    */

         unsigned WDFFMSGA:1;         /* If on, unconditioned MSGALARM */
                                      /* keyword is specified.         */

         unsigned WDFFRLST:1;         /* If on, unconditioned          */
                                      /* RETLCKSTS keyword is          */
                                      /* specified.                    */

         unsigned WDFFURDS:1;         /* If on, unconditioned          */
                                      /* USRRSTDSP keyword is          */
                                      /* specified.                    */

         unsigned WDFFRMVW:1;         /* If on, unconditioned RMVWDW   */
                                      /* keyword is specified          */

       }WDFFPUTK;

       struct WDFFGETK {              /* Miscellaneous get conditions. */

         unsigned RESERVED_25:1;      /* Reserved.                     */

         unsigned WDFFLOGN:1;         /* If on, LOGINP keyword is      */
                                      /* specified.                    */

         unsigned WDFFINZR:1;         /* If on, INZRCD keyword is      */
                                      /* specified.                    */

         unsigned WDFFRTND:1;         /* If on, RTNDTA keyword is      */
                                      /* specified.                    */

         unsigned WDFFUNLK:1;         /* If on, UNLOCK keyword is      */
                                      /* specified.                    */

         unsigned WDFFRSET:1;         /* If on, UNLOCK(*MDTOFF)        */
                                      /* keyword specified or UNLOCK   */
                                      /* keyword specified with        */
                                      /* GETRETAIN.                    */

         unsigned WDFFEARS:1;         /* If on, UNLOCK(*ERASE) keyword */
                                      /* specified or UNLOCK keyword   */
                                      /* specified without GETRETAIN.  */

         unsigned WDFFASUM:1;         /* If on, ASSUME keyword is      */
                                      /* specified.                    */

         unsigned WDFFKEEP:1;         /* If on, KEEP keyword is        */
                                      /* specified.                    */

         unsigned RESERVED_26:1;      /* Reserved.                     */

         unsigned WDFFWDWR:1;         /* If on, WINDOW keyword         */
                                      /* specified in record.          */

         unsigned WDFFQILE:1;         /* If on, SFLPGMQ(276) keyword   */
                                      /* is specified.                 */

         unsigned WDFFSFLCHCCTL:1;    /* If on, SFLCHCCTL keyword is   */
                                      /* specified.                    */

         unsigned RESERVED_27:3;      /* Reserved.                     */

       }WDFFGETK;

       short WDFFERRM;                /* Index to first field in index */
                                      /* table with either ERRMSG or   */
                                      /* ERRMSGID keyword.  0, if      */
                                      /* record has no field with      */
                                      /* either keyword.  See          */
                                      /* structure QDFFFITB.           */

       struct WDFFBITS {              /* Miscellaneous flags.          */

         unsigned WDFFERIN:1;         /* If on, unconditioned          */
                                      /* ERASEINP(*MDTON) keyword is   */
                                      /* specified and ERASEINP(*ALL)  */
                                      /* is not specified.             */

         unsigned WDFFMDTO:1;         /* If on, unconditioned          */
                                      /* MDTOFF(*UNPR) is specified    */
                                      /* and MDTOFF(*ALL) is not       */
                                      /* specified.                    */

         unsigned RESERVED_28:6;      /* Reserved.                     */

       }WDFFBITS;

       struct WDFFBITF {              /* Miscellaneous flags.          */

         unsigned RESERVED_29:2;      /* Reserved.                     */

         unsigned WDFFBLKC:2;         /* Blink flags.  X'00' is        */
                                      /* defined as reserved; X'01' is */
                                      /* defined as blink cursor and   */
                                      /* keyword BLINK unconditioned;  */
                                      /* X'10' is defined as reset     */
                                      /* blink cursor and no keyword   */
                                      /* BLINK; X'11' is defined as    */
                                      /* reserved.                     */

         unsigned WDFFNOLK:1;         /* If on, no unconditioned lock. */
                                      /* 0 is defined as lock          */
                                      /* unconditioned (do not unlock  */
                                      /* keyboard); 1 is defined as no */
                                      /* LOCK keyword or conditioned   */
                                      /* lock (unlock keyboard).       */

         unsigned WDFFALRM:1;         /* If on, ALARM keyword          */
                                      /* unconditioned.                */

         unsigned RESERVED_30:2;      /* Reserved.                     */

       }WDFFBITF;

       short WDFFCGRI;                /* Response indicator for        */
                                      /* record-level CHANGE keyword.  */
                                      /* For files with INDARA         */
                                      /* keyword, this is the response */
                                      /* indicator minus 1.  For those */
                                      /* without INDARA keyword, this  */
                                      /* is the response indicator     */
                                      /* input buffer displacement.    */
                                      /* -1 shows keyword is not       */
                                      /* present.                      */

       struct WDFFHFLG {              /* Help flags.                   */

         unsigned WDFFHSEQ:1;         /* If on, HLPSEQ keyword on      */
                                      /* record.                       */

         unsigned WDFFHLP:1;          /* If on, help specifications on */
                                      /* record.                       */

         unsigned WDFFNHLP:1;         /* If on, record cannot be used  */
                                      /* as help text.  It contains    */
                                      /* one of the keywords USRDFN,   */
                                      /* SFL, or SFLCTL.               */

         unsigned WDFFHRTN:1;         /* If on, HLPRTN keyword on      */
                                      /* record.                       */

         unsigned WDFFHTLE:1;         /* If on, HLPTITLE keyword on    */
                                      /* record.                       */

         unsigned WDFFHCLR:1;         /* If on, HLPCLR keyword on      */
                                      /* record.                       */

         unsigned WDFFCHNG:1;         /* If on, no parameter for       */
                                      /* CHANGE keyword.               */

         unsigned WDFFRPGM:1;         /* If on, PRINT keyword on       */
                                      /* record level with *PGM.       */

         unsigned WDFFHLPC:1;         /* If on, HLPCMDKEY keyword on   */
                                      /* record.                       */

         unsigned WDFFRSTCSR:1;       /* If on, *RSTCSR parameter is   */
                                      /* specified on the PULLDOWN     */
                                      /* keyword on the record.        */

         unsigned WDFFINLY:1;         /* If on, CSRINPONLY keyword is  */
                                      /* specified and is unoptioned.  */

         unsigned WDFFNOSEP:1;        /* If on, *NOSEPARATOR parameter */
                                      /* is specified on the MNUBAR    */
                                      /* keyword on this record.       */

         unsigned RESERVED_31:4;      /* Reserved.                     */

       }WDFFHFLG;

       short WDFFXRDO;                /* Displacement to               */
                                      /* display-record-level          */
                                      /* device-dependent extension    */
                                      /* structure from structure      */
                                      /* QDFFRINF (see structure       */
                                      /* QDFFXRDP).                    */

       char RESERVED_32[2];           /* Reserved.                     */

       short WDFFRDOC;                /* Displacement to keyword       */
                                      /* category displacement string  */
                                      /* from structure QDFFRINF.      */
                                      /* (See structure QDFFCOSA.  0,  */
                                      /* if no keyword categories.     */

  }  QDFFRDPD_t;



  typedef _Packed struct QDFFXRDP {   /* Display-Record-Level          */
                                      /* Device-Dependent Section      */
                                      /* Extension S tructure          */
                                      /* (QDFFXRDP) Extension          */
                                      /* structure.  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFFRINF is at variable       */
                                      /* WDFFXRDO in structure         */
                                      /* QDFFRDPD.                     */

       long int WDFFOTO;              /* Displacement to field order   */
                                      /* table from structure QDFFRINF */
                                      /* (see structure QDFFOT.        */

       long int WDFFNRCO;             /* Displacement to first field   */
                                      /* name in row-column order      */
                                      /* table (see variable WDFFDRCO  */
                                      /* in structure QDFFRDPD).  For  */
                                      /* every row-column table, there */
                                      /* is a corresponding field name */
                                      /* in row-column order in the    */
                                      /* field name table (see         */
                                      /* structure QDFFNTB).           */

       char RESERVED_33[4];           /* Reserved.                     */

       short WDFFNUMOFSEGS;           /* Number of segments in record  */
                                      /* for CNTFLD and EDTMSK.        */

       char RESERVED_34[2];           /* Reserved.                     */

       short WDFFSFLCHCTLO;           /* Buffer displacement to the    */
                                      /* field containing control for  */
                                      /* selection list.               */

       char RESERVED_35[6];           /* Reserved.                     */

  }  QDFFXRDP_t;



  typedef _Packed struct QDFFSFCR {   /* Subfile Control Record        */
                                      /* (QDFFSFCR) Display            */
                                      /* device-dependent section for  */
                                      /* records specifying subfiles.  */
                                      /* This structure replaces       */
                                      /* structure QDFFRDPD when       */
                                      /* subfiles are specified        */
                                      /* (variable WDFFSFLC in         */
                                      /* structure QDFFRINF is set     */
                                      /* on).  The displacement to     */
                                      /* this structure from the       */
                                      /* beginning of structure        */
                                      /* QDFFRINF is an entry in the   */
                                      /* table at variable WDFFRAOF in */
                                      /* QDFFRINF.                     */

       char WDFFSFLG[34];             /* Display-record-level          */
                                      /* device-dependent section      */
                                      /* (structure QDFFRDPD) is       */
                                      /* mapped here.                  */

       char WDFFSFEN;                 /* Command key associated with   */
                                      /* SFLENTER keyword.  X'00'      */
                                      /* indicates the keyword is not  */
                                      /* present.                      */

       char WDFFSFDR;                 /* Command key associated with   */
                                      /* SFLDROP or SFLFOLD keyword.   */
                                      /* X'00' indicates neither       */
                                      /* keyword is specified (see     */
                                      /* WDFFSFFD in this table).      */

       struct WDFFSFLFLG {            /* Subfile flags.                */

         unsigned WDFFSFLSNGCHC:1;    /* If on, SFLSNGCHC keyword is   */
                                      /* specified.                    */

         unsigned WDFFSFLMLTCHC:1;    /* If on, SFLMLTCHC keyword is   */
                                      /* specified.                    */

         unsigned WDFFSFLSELRSC:1;    /* If on, *RSTCSR parameter is   */
                                      /* specified on SFLMLTCHC or     */
                                      /* SFLSNGCHC keyword.            */

         unsigned WDFFSFLSELSND:1;    /* If on, *SLTIND parameter is   */
                                      /* specified on SFLMLTCHC or     */
                                      /* SFLSNGCHC keyword.            */

         unsigned WDFFSFLSELAST:1;    /* If on, *AUTOSLT parameter is  */
                                      /* specified on SFLSNGCHC        */
                                      /* keyword.                      */

         unsigned WDFFSFLSCRBAR:1;    /* If on, SFLEND(*SCRBAR)        */
                                      /* keyword is specified.         */

         unsigned WDFFSFLRTNSEL:1;    /* If on, SFLRTNSEL keyword is   */
                                      /* specified.                    */

         unsigned WDFFSFLSCROLL:1;    /* If on, SFLSCROLL keyword is   */
                                      /* specified.                    */

       }WDFFSFLFLG;

       struct WDFFSFST {              /* Miscellaneous flags.          */

         unsigned WDFFSFNA:1;         /* If on, SFLRNA keyword is      */
                                      /* specified.                    */

         unsigned WDFFSFCU:1;         /* If on, SFLRCDNBR(CURSOR)      */
                                      /* keyword is specified.         */

         unsigned WDFFSFDM:1;         /* If on, DSPMOD keyword is      */
                                      /* specified.                    */

         unsigned WDFFSFFD:1;         /* 0 indicates the initial       */
                                      /* display is fold; 1 indicates  */
                                      /* the initial display is drop.  */
                                      /* If WDFFSFDR equals X'00',     */
                                      /* there is no SFLDROP or        */
                                      /* SFLFOLD keyword, and this     */
                                      /* value equals 0.  If WDFFSFDR  */
                                      /* does not equal X'00', either  */
                                      /* this value equals 0 (SFLFOLD) */
                                      /* or 1 (SFLDROP).  Note: Also   */
                                      /* refer to comments for         */
                                      /* variable WDFFSFDR in this     */
                                      /* structure.                    */

         unsigned WDFFSFFDI:1;        /* 0 indicates that SFLDROP or   */
                                      /* SFLFOLD are not optioned; use */
                                      /* WDFFSFFD to determine which   */
                                      /* one to use.  1 indicates that */
                                      /* SFLDROP and SFLFOLD are       */
                                      /* optioned; use indicators.     */
                                      /* Note: Also refer to comments  */
                                      /* for variable WDFFSFDR in this */
                                      /* structure.                    */

         unsigned WDFFSFEM:1;         /* If on, SFLEND(*MORE) keyword  */
                                      /* is specified.                 */

         unsigned WDFFSFLRCDTOP:1;    /* If on, SFLRCDNBR(*TOP)        */
                                      /* keyword is specified.         */

         unsigned WDFFSFLSELSTE:1;    /* If on, *AUTOSLTENH parameter  */
                                      /* is specified on SFLSNGCHC     */
                                      /* keyword.                      */

       }WDFFSFST;

       short WDFFSFPQ;                /* Contains the value specified  */
                                      /* for the SFLPGMQ keyword.      */

       short WDFFSFVL;                /* SFLROLVAL field length.  0    */
                                      /* indicates that the keyword is */
                                      /* not specified.                */

       short WDFFSFVO;                /* Displacement in input buffer  */
                                      /* to SFLROLVAL.                 */

       short WDFFSFFI;                /* Index into field indexing     */
                                      /* table of field with           */
                                      /* SFLROLVAL.                    */

       short WDFFSFL;                 /* SFLRCDNBR field length.  0    */
                                      /* indicates that the keyword is */
                                      /* not specified.                */

       short WDFFSFO;                 /* Displacement in output buffer */
                                      /* to SFLRCDNBR.                 */

       short WDFFSFLEXTOFF;           /* Displacement to the           */
                                      /* QDFFSFCREXT extension         */
                                      /* structure from this           */
                                      /* structure.                    */

       struct WDFFSFNOFL {            /* Miscellaneous flags.          */

         unsigned WDFFSFLSELNRS:1;    /* If on, *NORSTCSR parameter is */
                                      /* specified on SFLMLTCHC or     */
                                      /* SFLSNGCHC keyword.            */

         unsigned WDFFSFLSELNST:1;    /* If on, *NOAUTOSLT parameter   */
                                      /* is specified on SFLSNGCHC     */
                                      /* keyword.                      */

         unsigned RESERVED_36:6;      /* Reserved                      */

       }WDFFSFNOFL;

       char RESERVED_37;              /* Reserved.                     */

     /*char WDFFSFPM[];   */          /* SFL parameter values (see     */
                                      /* structure QDFFSFHR).  One     */
                                      /* entry is present for each     */
                                      /* specified display size (see   */
                                      /* WDFFSCRS, in structure        */
                                      /* QDFFBASE).  The order of this */
                                      /* array is the same as          */
                                      /* structure QDFFSCRA.           */

  }  QDFFSFCR_t;

  typedef _Packed struct {

           char RESERVED_39;          /* Reserved.                     */

           char WDFFSFSR;             /* Subfile start row.  For       */
                                      /* SFLMSGRCD, this is line       */
                                      /* number.                       */
  }QDFFSFSRU_t;

  typedef _Packed struct {

           char RESERVED_40;          /* Reserved.                     */

           char WDFFSFER;             /* Subfile end row.              */

  }QDFFSFERU_t;

  typedef _Packed struct {

           short WDFFSFH1;            /* Number of horizontal records  */
                                      /* per line.                     */

           short WDFFSFH2;            /* Number of characters from     */
                                      /* field 1, record n to field 1, */
                                      /* record n+1                    */
  }QDFFSFH2U_t;


  typedef _Packed struct QDFFSFHR {   /* Subfile Control Entry         */
                                      /* (QDFFSFHR) Subfile control    */
                                      /* entry in the subfile control  */
                                      /* record.  This structure is    */
                                      /* defined at variable WDFFSFPM  */
                                      /* in structure QDFFSFCR.  The   */
                                      /* structure is ARRAY(*).        */

       short WDFFSFSZ;                /* SFLSIZ.                       */

       short WDFFSFPG;                /* SFLPAG.   If this is a field  */
                                      /* selection subfile, this is    */
                                      /* the number of lines occupied  */
                                      /* by subfile.  If this is a     */
                                      /* nonfield selection subfile,   */
                                      /* this is the maximum number of */
                                      /* subfile records on the        */
                                      /* screen.                       */

       char RESERVED_38[2];           /* Reserved.                     */

       short WDFFSFT;                 /* Number of fields not dropped, */
                                      /* that is, the number of fields */
                                      /* on first line of SFL record   */
                                      /* with SFLDROP specified.       */

       _Packed union           {

         short WDFFSFR1;              /* Subfile start row             */

         QDFFSFSRU_t SFSRU;

       }WDFFSFR1U;

       _Packed union          {

         short WDFFSFR2;              /* Subfile end row.              */

         QDFFSFERU_t SFERU;

       }WDFFSFR2U;

       _Packed union          {

         char WDFFSFLN[4];            /* Horizontal subfile (SFLLIN).  */
                                      /* 0 is defined as not           */
                                      /* horizontal subfile.           */

         QDFFSFH2U_t SFH2U;

       }WDFFSFLNU;

       short WDFFSFF;                 /* Number of fields per record.  */

       char RESERVED_41[6];           /* Reserved.                     */

  }  QDFFSFHR_t;



  typedef _Packed struct QDFFSFCREXT { /* Subfile Control Record       */
                                      /* Extension (QDFFSFCREXT)       */
                                      /* Subfile control record        */
                                      /* extension entry in the        */
                                      /* subfile control record (see   */
                                      /* structure QDFFSFCR).          */
                                      /* Variable WDFFSFLEXTOFF        */
                                      /* contains the displacement to  */
                                      /* this structure from structure */
                                      /* QDFFSFCR.                     */

       short WDFFSFLSCRLLO;           /* Displacement to the field     */
                                      /* with the SFLSCROLL keyword.   */

       short WDFFSFLSIZSFO;           /* Displacement to the field     */
                                      /* specified on the SFLSIZ       */
                                      /* keyword.  -1 indicates a      */
                                      /* number was specified.         */

       short WDFFSFLSELOFF;           /* Displacement to the field     */
                                      /* specified on the SFLMLTCHC    */
                                      /* keyword that is used to tell  */
                                      /* the application the number of */
                                      /* selections made from the      */
                                      /* selection list.               */

       char WDFFSFLSELCH1;            /* Primary character to be used  */
                                      /* to indicate a selection list  */
                                      /* item has been selected.       */

       char WDFFSFLSELCH2;            /* Secondary character to be     */
                                      /* used to indicate a selection  */
                                      /* list item has been selected.  */

       char RESERVED_42[8];           /* Reserved.                     */

  }  QDFFSFCREXT_t;



  typedef _Packed struct QDFFRCTB {   /* Row-Column Table (QDFFRCTB)   */
                                      /* Row-column table, one table   */
                                      /* per screen size.  The         */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFFRINF is at   */
                                      /* variable WDFFDRCO in          */
                                      /* structure QDFFRDPD.           */

       char WDFFFRRO;                 /* From row of attribute of      */
                                      /* first field in format.        */

       char WDFFFRCO;                 /* From column of attribute of   */
                                      /* first field in format.        */

       char WDFFTORO;                 /* To row of last data character */
                                      /* of last field in format       */
                                      /* (excluding trailing           */
                                      /* attribute).                   */

       char WDFFTOCO;                 /* To column of last data        */
                                      /* character of last field in    */
                                      /* format (excluding trailing    */
                                      /* attribute).                   */

       struct WDFFRBIT {              /* Miscellaneous flags.          */

         unsigned WDFFMDF:1;          /* Multiple defined fields (MDF) */
                                      /* present for this screen size. */
                                      /* MDF fields are defined to be  */
                                      /* a group of fields that have   */
                                      /* the same beginning            */
                                      /* row-column, and the first     */
                                      /* field in the group must have  */
                                      /* field selection.              */

         unsigned WDFFFRC1:1;         /* First field in the record has */
                                      /* attribute in column 1 for     */
                                      /* this screen size.             */

         unsigned WDFFTRAT:1;         /* If on, the trailing attribute */
                                      /* for this screen size was in   */
                                      /* column one.                   */

         unsigned WDFFR1C1:1;         /* First field in record begins  */
                                      /* in row 1, column 1 for this   */
                                      /* screen size.                  */

         unsigned WDFFR2C1:1;         /* First field in record begins  */
                                      /* in row 2, column 1 for this   */
                                      /* screen size and the SLNO(nn)  */
                                      /* keyword.                      */

         unsigned RESERVED_43:3;      /* Reserved.                     */

       }WDFFRBIT;

       char RESERVED_44;              /* Reserved.                     */

     /*char WDFFRC[];     */          /* Row-column table, one entry   */
                                      /* per field (see structure      */
                                      /* QDFFRCTE).                    */

  }  QDFFRCTB_t;



  typedef _Packed struct QDFFRCTE {   /* Row-Column Table Entry        */
                                      /* (QDFFRCTE) Row-column table   */
                                      /* with one table entry per      */
                                      /* field.  The number of entries */
                                      /* in this structure is defined  */
                                      /* by variable WDFFFLD in        */
                                      /* structure QDFFRINF.  This     */
                                      /* structure is defined at       */
                                      /* variable WDFFRC in structure  */
                                      /* QDFFRCTB.  The structure is   */
                                      /* ARRAY(*).                     */

       char WDFFSROW;                 /* Starting row.  X'FF'          */
                                      /* indicates that the location   */
                                      /* for the secondary display     */
                                      /* size was *NOLOC, or was a     */
                                      /* hidden field, a program       */
                                      /* field, or a message line.     */

       char WDFFSCOL;                 /* Starting column.  X'FF'       */
                                      /* indicates that the location   */
                                      /* for the secondary display     */
                                      /* size was *NOLOC, or was a     */
                                      /* hidden field, a program       */
                                      /* field, or a message line.     */

  }  QDFFRCTE_t;



  typedef _Packed struct QDFFNTB {    /* Field Name Table (QDFFNTB)    */
                                      /* Field name table with one     */
                                      /* field name entry per field.   */
                                      /* The number of entries in this */
                                      /* structure is defined by       */
                                      /* variable WDFFFLD in structure */
                                      /* QDFFRINF.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFFRINF is at variable       */
                                      /* WDFFNRCO in structure         */
                                      /* QDFFXRDP.  The structure is   */
                                      /* ARRAY(*).                     */

       char WDFFNAM[10];              /* Field name entry.             */

  }  QDFFNTB_t;



  typedef _Packed struct QDFFOT {     /* Field Order Table (QDFFOT)    */
                                      /* Field order table with one    */
                                      /* field order entry per field.  */
                                      /* The number of entries in this */
                                      /* structure is defined by       */
                                      /* variable WDFFFLD in structure */
                                      /* QDFFRINF.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFFRINF is at variable       */
                                      /* WDFFOTO in structure          */
                                      /* QDFFXRDP.  The structure is   */
                                      /* ARRAY(*).                     */

       short WDFFLD;                  /* Order of field in DDS source. */

  }  QDFFOT_t;



  typedef _Packed struct QDFFFITB {   /* Field Indexing Table          */
                                      /* (QDFFFITB) Field indexing     */
                                      /* table.  Entries are in        */
                                      /* row-column order for display  */
                                      /* files.  The displacement to   */
                                      /* this structure from the       */
                                      /* beginning of structure        */
                                      /* QDFFRINF is at variable       */
                                      /* WDFFOFIT in QDFFRINF.  The    */
                                      /* structure is ARRAY(*).        */

       long int WDFFFOFS;             /* Displacement from the record  */
                                      /* header (structure QDFFRINF)   */
                                      /* to this field&csq.s header    */
                                      /* section (see structure        */
                                      /* QDFFFINF).                    */

       short WDFFSELI;                /* Index to the entry in the     */
                                      /* selection table (see variable */
                                      /* WDFFSTE,in structure          */
                                      /* QDFFSELT) for the condition   */
                                      /* selecting this field.  1      */
                                      /* represents no field           */
                                      /* selection.                    */

       short WDFFDLEN;                /* Display length.  Edited field */
                                      /* length.  For floating point   */
                                      /* fields, this value is the     */
                                      /* significand plus 7.  For      */
                                      /* nonfloating-point fields when */
                                      /* the FLTFIXDEC keyword is      */
                                      /* specified, this value is the  */
                                      /* length specified for the      */
                                      /* field plus 2.  When the       */
                                      /* FLTFIXDEC keyword is not      */
                                      /* specified, this value is 7    */
                                      /* plus the length specified for */
                                      /* the field.                    */

  }  QDFFFITB_t;



  typedef _Packed struct QDFFFINF {   /* Field Header Section          */
                                      /* (QDFFFINF) Field header       */
                                      /* declare.  The displacement to */
                                      /* this structure from the       */
                                      /* beginning of structure        */
                                      /* QDFFRINF is at variable       */
                                      /* WDFFFOFS in structure         */
                                      /* QDFFFITB.                     */

       short WDFFFLEN;                /* Length of this declare,       */
                                      /* including all the             */
                                      /* device-dependent sections.    */

       char WDFFFIOA;                 /* Field attribute.  X'01'       */
                                      /* indicates Constant (see       */
                                      /* structure QDFFFCON), X'02'    */
                                      /* indicates Output (O), X'03'   */
                                      /* indicates Message (M), X'04'  */
                                      /* indicates Input (I), X'05'    */
                                      /* indicates Both (B), X'06'     */
                                      /* indicates Hidden (H), and     */
                                      /* X'07' indicates Program to    */
                                      /* System (P).                   */

       struct WDFFBFLG {              /* Miscellaneous flags.          */

         unsigned WDFFDATE:1;         /* If on, DATE keyword is        */
                                      /* specified.                    */

         unsigned WDFFDATY:1;         /* If on, DATEY keyword is       */
                                      /* specified.                    */

         unsigned WDFFTIME:1;         /* If on, TIME keyword is        */
                                      /* specified.                    */

         unsigned WDFFFOLD:1;         /* If on, BLKFOLD keyword is     */
                                      /* specified.                    */

         unsigned WDFFEDIT:1;         /* If on, EDTCDE or EDTWRD       */
                                      /* keyword is specified.         */

         unsigned WDFFINBT:1;         /* If on, field is either input  */
                                      /* or both.                      */

         unsigned WDFFDFT:1;          /* If on, DFT or DFTVAL keyword  */
                                      /* is specified.                 */

         unsigned WDFFFALT:1;         /* If on, IGCALTTYP keyword is   */
                                      /* specified.                    */

       }WDFFBFLG;

       struct WDFFFBIT {              /* Miscellaneous flags.          */

         unsigned WDFFIGCC:1;         /* If on, DBCS literals are      */
                                      /* specified on DFT or DFTVAL    */
                                      /* keyword.                      */

         unsigned WDFFFCSO:1;         /* If on, first character of DFT */
                                      /* or DFTVAL keyword is shift    */
                                      /* out (SO).                     */

         unsigned WDFFOPDV:1;         /* If on, optioned DFTVAL        */
                                      /* keyword is specified.         */

         unsigned WDFFALWE:1;         /* If on, ALWENDLOC applies to   */
                                      /* field.  Trailing attribute    */
                                      /* byte should be truncated for  */
                                      /* at least one display size.    */

         unsigned WDFFUSER:1;         /* If on, USER keyword is        */
                                      /* specified.                    */

         unsigned WDFFSYSN:1;         /* If on, SYSNAME keyword is     */
                                      /* specified.                    */

         unsigned WDFFEDFT:1;         /* If on, EDTWRD was generated   */
                                      /* due to the DATE or TIME       */
                                      /* keyword, or due to the L, T,  */
                                      /* or Z edit code.               */

         unsigned WDFFEDTCDEY:1;      /* If on, EDTCDE(Y) or EDTCDE(W) */
                                      /* was specified.            @A2C*/

       }WDFFFBIT;

       char RESERVED_46;              /* Reserved.                     */

     /*char WDFFFTBE[];   */          /* Field header table entries.   */
                                      /* Use structure QDFFFCON for    */
                                      /* constant fields and structure */
                                      /* QDFFFNAM for named fields.    */

  }  QDFFFINF_t;



  typedef _Packed struct QDFFFCON {   /* Constant Field Header Table   */
                                      /* (QDFFFCON) Field header       */
                                      /* declare for constant fields.  */
                                      /* This structure is defined at  */
                                      /* variable WDFFFTBE in          */
                                      /* structure QDFFFINF.           */

       char RESERVED_47[2];           /* Reserved.                     */

       short WDFFFAOC;                /* Displacement for constant     */
                                      /* fields to field-level         */
                                      /* device-dependent sections     */
                                      /* from structure QDFFFINF.      */

  }  QDFFFCON_t;



  typedef _Packed struct QDFFFNAM {   /* Named Field Header Table      */
                                      /* (QDFFFNAM) Field header       */
                                      /* declare for named fields.     */
                                      /* This structure is defined at  */
                                      /* variable WDFFFTBE in          */
                                      /* structure QDFFFINF.           */

       short WDFFINPO;                /* Input buffer displacement.    */
                                      /* -1 indicates no buffer        */
                                      /* location.                     */

       short WDFFOUTO;                /* Output buffer displacement.   */
                                      /* -1 indicates no buffer        */
                                      /* location.                     */

       short WDFFPLEN;                /* Program length.  User&csq.s   */
                                      /* program field length for      */
                                      /* floating point fields         */
                                      /* indicates precision 4 is      */
                                      /* defined as *SINGLE; 8 is      */
                                      /* defined as *DOUBLE.           */

       char WDFFDEC;                  /* Decimals (X'00' through       */
                                      /* X'1F').  X'FF' indicates      */
                                      /* field is character or         */
                                      /* DBCS-capable.                 */

       char WDFFKBDT;                 /* Keyboard shift and data type. */
                                      /* X'00' indicates Alpha         */
                                      /* shift/character (A), X'01'    */
                                      /* indicates Alpha only (X),     */
                                      /* X'02' indicates Numeric shift */
                                      /* (N), X'03' indicates Numeric  */
                                      /* only (Y), X'04' indicates     */
                                      /* Katakana (K), X'05' indicates */
                                      /* Digits only (D), X'06'        */
                                      /* indicates Inhibit keyboard    */
                                      /* (I), X'07' indicates Signed   */
                                      /* numeric/zoned (S), X'08'      */
                                      /* indicates Binary (B), X'09'   */
                                      /* indicates Packed (P), X'0A'   */
                                      /* indicates Floating (F), X'0B' */
                                      /* indicates DBCS (J), X'0C'     */
                                      /* indicates Open (O), X'0D'     */
                                      /* indicates Either (E), X'0E'   */
                                      /* indicates Numeric-only        */
                                      /* character (M), X'0F'          */
                                      /* indicates Graphic (G),        */
                                      /*  X'10' indicates Date (L),    */
                                      /*  X'11' indicates Time (T),    */
                                      /*  X'12' indicates              */
                                      /*  Timestamp (Z)            @A2A*/

       char RESERVED_48[2];           /* Reserved.                     */

       short WDFFFAOF;                /* Displacement for nonconstant  */
                                      /* (named) fields to             */
                                      /* display-field-level           */
                                      /* device-dependent section      */
                                      /* (structure QDFFFDPD) from     */
                                      /* structure QDFFFINF.           */

  }  QDFFFNAM_t;



  typedef _Packed struct QDFFFDPD {   /* Display-Field-Level           */
                                      /* Device-Dependent Section      */
                                      /* (QDFFFDPD) Display            */
                                      /* device-dependent section.     */
                                      /* The displacement to this      */
                                      /* structure from the beginning  */
                                      /* of structure QDFFFINF is an   */
                                      /* entry in the table at         */
                                      /* variable WDFFFAOF in          */
                                      /* structure QDFFFNAM.           */

       struct WDFFFLGS {              /* Miscellaneous flags.          */

         unsigned WDFFDSPC:1;         /* If on, unconditioned          */
                                      /* DSPATR(PC) keyword is         */
                                      /* specified.                    */

         unsigned WDFFUCND:1;         /* If on, unconditioned          */
                                      /* DSPATR(ND) keyword is         */
                                      /* specified.                    */

         unsigned WDFFFXDC:1;         /* If on, FLTFIXDEC keyword is   */
                                      /* specified.                    */

         unsigned WDFFIACV:1;         /* If on, IGCANKCNV keyword is   */
                                      /* specified.                    */

         unsigned WDFFCSCP:1;         /* If on, CHRID keyword is       */
                                      /* specified.                    */

         unsigned WDFFMGID:1;         /* If on, MSGID keyword is       */
                                      /* specified.                    */

         unsigned WDFFDPNR:1;         /* If on, DUP keyword is         */
                                      /* specified without a response  */
                                      /* indicator on a numeric field. */

         unsigned WDFFDSPN:1;         /* Field&csq.s base cursor       */
                                      /* position.  If on, the field   */
                                      /* is input-capable and no       */
                                      /* unoptioned DSPATR(PR) or no   */
                                      /* unoptioned DSPATR(PC) is in   */
                                      /* any field in the record.      */

       }WDFFFLGS;

       struct WDFFSA {                /* Default screen attribute byte */
                                      /* for workstation.              */

         unsigned RESERVED_49:3;      /* Reserved.  Always B'001'.     */

         unsigned WDFFCLOS:1;         /* If on, unconditioned          */
                                      /* DSPATR(CS) keyword is         */
                                      /* specified.                    */

         unsigned WDFFBLNK:1;         /* If on, unconditioned          */
                                      /* DSPATR(BL) keyword is         */
                                      /* specified.                    */

                                      /* If the following three bits   */
                                      /* are on, indicates DSPATR(ND)  */
                                      /* unconditioned.                */

          unsigned WDFFUDLN:1;        /* If on, unconditioned          */
                                      /* DSPATR(UL) keyword is         */
                                      /* specified.                    */

          unsigned WDFFHILI:1;        /* If on, unconditioned          */
                                      /* DSPATR(HI) keyword is         */
                                      /* specified.                    */

          unsigned WDFFRVIM:1;        /* If on, unconditioned          */
                                      /* DSPATR(RI) keyword is         */
                                      /* specified.                    */

       }WDFFSA;

       short WDFFXFDO;                /* Displacement to               */
                                      /* field-dependent extension     */
                                      /* structure from QDFFFINF (see  */
                                      /* structure QDFFXFDP).  0       */
                                      /* indicates no extension        */
                                      /* structure is present.         */

       short WDFFFDOC;                /* Displacement to keyword       */
                                      /* category displacement string  */
                                      /* from structure QDFFFINF (see  */
                                      /* structure QDFFCOSA).  0, if   */
                                      /* no keyword categories.        */

     /*char WDFFFICE[];   */          /* Input-capable display         */
                                      /* field-level device-dependent  */
                                      /* section entries (see          */
                                      /* structure QDFFFDIC).  Only    */
                                      /* used for types X'04' (input)  */
                                      /* and X'05' (both); see         */
                                      /* variable WDFFFIOA, in         */
                                      /* structure QDFFFINF.           */

  }  QDFFFDPD_t;



  typedef _Packed struct QDFFFDIC {   /* Input-Capable Display         */
                                      /* Field-Level Device-Dependent  */
                                      /* Sectio n (QDFFFDIC)           */
                                      /* Input-capable display         */
                                      /* device-dependent section.     */
                                      /* This structure is used for    */
                                      /* types X'04' (input) and X'05' */
                                      /* (both); see variable          */
                                      /* WDFFFIOA, in structure        */
                                      /* QDFFFINF.  This structure is  */
                                      /* defined at variable WDFFFICE  */
                                      /* in structure QDFFFDPD.        */

       struct WDFFFWFW {              /* Miscellaneous flags.          */

         unsigned RESERVED_50:2;      /* Reserved.                     */

         unsigned WDFFFWPR:1;         /* If on, unconditioned          */
                                      /* DSPATR(PR) keyword is         */
                                      /* specified.                    */

         unsigned WDFFFWDP:1;         /* If on, unconditioned DUP      */
                                      /* keyword is specified.         */

         unsigned WDFFFWMD:1;         /* If on, unconditioned          */
                                      /* DSPATR(MDT) keyword is        */
                                      /* specified.                    */

         unsigned WDFFFWSF:3;         /* Keyboard shift.  B'000'       */
                                      /* indicates alpha shift, B'001' */
                                      /* indicates alpha only, B'010'  */
                                      /* indicates numeric shift (also */
                                      /* floating point), B'011'       */
                                      /* indicates numeric only (also  */
                                      /* numeric-only character        */
                                      /* keyboard shift), B'100'       */
                                      /* indicates Katakana/CHECK(RL), */
                                      /* B'101' indicates digits only, */
                                      /* B'110' indicates inhibit      */
                                      /* keyboard, B'111' indicates    */
                                      /* signed numeric.               */

         unsigned WDFFFWRA:1;         /* If on, unconditioned AUTO(RA) */
                                      /* keyword is specified.         */

         unsigned WDFFFWFE:1;         /* If on, CHECK(FE) keyword is   */
                                      /* specified.                    */

         unsigned WDFFFWLW:1;         /* Lowercase (not monocase).  0  */
                                      /* indicates lowercase; 1        */
                                      /* indicates not lowercase       */
                                      /* (uppercase).                  */

         unsigned RESERVED_51:1;      /* Reserved.                     */

         unsigned WDFFFWME:1;         /* If on, unconditioned          */
                                      /* CHECK(ME) keyword is          */
                                      /* specified.                    */

         unsigned WDFFFWAJ:3;         /* Adjustments.   B'000'         */
                                      /* indicates no adjustment,      */
                                      /* B'101' indicates AUTO(RAZ),   */
                                      /* B'110' indicates AUTO(RAB),   */
                                      /* B'111' indicates CHECK(MF).   */

       }WDFFFWFW;

       struct WDFFSSKW {              /* Keywords present.             */

         unsigned WDFFBLKS:1;         /* If on, BLANKS keyword is      */
                                      /* specified.                    */

         unsigned WDFFSSCH:1;         /* If on, CHANGE keyword is      */
                                      /* specified.                    */

         unsigned WDFFSSDR:1;         /* If on, DUP keyword is         */
                                      /* specified with a response     */
                                      /* indicator.                    */

         unsigned WDFFSSDP:1;         /* If on, DUP keyword is         */
                                      /* specified with or without a   */
                                      /* response indicator.           */

         unsigned WDFFSSAB:1;         /* If on, CHECK(AB) keyword is   */
                                      /* specified.                    */

         unsigned WDFFDSOD:1;         /* If on, DSPATR(OID) keyword is */
                                      /* specified.                    */

         unsigned WDFFDSSP:1;         /* If on, DSPATR(SP) keyword is  */
                                      /* specified.                    */

         unsigned WDFFVLCK:1;         /* If on, validity checking      */
                                      /* keywords specified in         */
                                      /* category 25, (that is,        */
                                      /* category 25 is present).      */

       }WDFFSSKW;

       struct WDFFCHKB {              /* Miscellaneous flags.          */

         unsigned WDFFCM10:1;         /* If on, CHECK(M10) keyword is  */
                                      /* specified.                    */

         unsigned WDFFCM11:1;         /* If on, CHECK(M11) keyword is  */
                                      /* specified.                    */

         unsigned WDFFM10F:1;         /* If on, CHECK(M10F) keyword is */
                                      /* specified.                    */

         unsigned WDFFM11F:1;         /* If on, CHECK(M11F) keyword is */
                                      /* specified.                    */

         unsigned RESERVED_52:4;      /* Reserved.                     */

         }WDFFCHKB;

  }  QDFFFDIC_t;



  typedef _Packed struct QDFFXFDP {   /* Field-Dependent Extension     */
                                      /* Structure (QDFFXFDP)          */
                                      /* Field-dependent extension     */
                                      /* structure.  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFFFINF is at variable       */
                                      /* WDFFXFDO in structure         */
                                      /* QDFFFDPD.                     */

       struct WDFFKFLG {              /* Miscellaneous flag.           */

         unsigned WDFFNOBA:1;         /* If on, field has no beginning */
                                      /* attribute.                    */

         unsigned WDFFNOEA:1;         /* If on, field has no ending    */
                                      /* attribute.                    */

         unsigned RESERVED_53:1;      /* Reserved.                     */

         unsigned WDFFFDCP:1;         /* If on, this field is          */
                                      /* referenced by another field   */
                                      /* using the FLDCSRPRG keyword.  */

         unsigned WDFFSFCP:1;         /* If on, SFLCSRPRG keyword      */
                                      /* specified on field.           */

         unsigned WDFFMLTC:1;         /* If on, MLTCHCFLD keyword is   */
                                      /* specified.                    */

         unsigned WDFFSNGC:1;         /* If on, SNGCHCFLD or PSHBTNFLD */
                                      /* keyword is specified.         */

         unsigned WDFFCNTF:1;         /* If on, CNTFLD keyword is      */
                                      /* specified.                    */

         unsigned WDFFENFA:1;         /* If on, ENTFLDATR keyword is   */
                                      /* specified.                    */

         unsigned WDFFFCRP:1;         /* If on, FLDCSRPRG keyword is   */
                                      /* specified.                    */

         unsigned WDFFEDTM:1;         /* If on, EDTMSK keyword is      */
                                      /* specified.                    */

         unsigned WDFFPFLD:1;         /* If on, field has associated   */
                                      /* program-to-system field.      */

         unsigned WDFFNOCC:1;         /* If on, NOCCSID keyword is     */
                                      /* specified.                    */

         unsigned WDFFPUSHBTN:1;      /* If on, PSHBTNFLD keyword is   */
                                      /* specified.                    */

         unsigned WDFFCHCHDHEXP:1;    /* If on, structure QDFKCHC has  */
                                      /* an extension structure        */
                                      /* appended to it.               */

         unsigned WDFFWRDWRAP:1;      /* If on, WRDWRAP keyword is     */
                                      /* specified.                    */

       }WDFFKFLG;

       short WDFFFLDINX;              /* Field index of current field. */

       struct WDFFXLFLGS {            /* Flags.                        */

         unsigned WDFFVALNUM:1;       /* If on, VALNUM keyword is      */
                                      /* specified.                    */

         unsigned RESERVED_54:7;      /* Reserved.                     */

       short WDFFUCS2CCSID;           /* UCS2 CCSID specified on the   */
                                      /* CCSID keyword.                */

       }WDFFXLFLGS;

       char RESERVED_55[1];           /* Reserved.                     */

  }  QDFFXFDP_t;



  typedef _Packed struct QDFFSELT {   /* Selection Table (QDFFSELT)    */
                                      /* Selection table.  The table   */
                                      /* entries are defined in        */
                                      /* structure QDFFSTBL The        */
                                      /* entries in the where-used     */
                                      /* section are stored in the     */
                                      /* same order as the selection   */
                                      /* table.  The displacement to   */
                                      /* this structure from the       */
                                      /* beginning of structure        */
                                      /* QDFFRINF is at variable       */
                                      /* WDFFSTBO in structure         */
                                      /* QDFFRINF.                     */

       long int WDFFSTLN;             /* Selection table length.       */

       short WDFFSTT;                 /* Total number of table entries */
                                      /* used by the display to        */
                                      /* resolve record- and           */
                                      /* field-level selection         */
                                      /* entries.                      */

       char RESERVED_56[2];           /* Reserved.                     */

     /*char WDFFSTE[];    */          /* Selection table entries (see  */
                                      /* structure QDFFSTBL).          */

  }  QDFFSELT_t;



  typedef _Packed struct QDFFSTBL {   /* Selection Table Entry         */
                                      /* (QDFFSTBL) Selection table    */
                                      /* entry.  The number of entries */
                                      /* in this structure is defined  */
                                      /* by variable WDFFSTT in        */
                                      /* structure QDFFSELT.  This     */
                                      /* structure is defined at       */
                                      /* variable WDFFSTE in structure */
                                      /* QDFFSELT.  The structure is   */
                                      /* ARRAY(*).                     */

       short WDFFSTEL;                /* Length of this table entry.   */

       short WDFFCND;                 /* Number of conditions in the   */
                                      /* entry.                        */

     /*char WDFFSELM[1][];*/          /* Array of selection table      */
                                      /* indicators.  The number of    */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFFCND   */
                                      /* in this table.  Each          */
                                      /* character contains a          */
                                      /* displacement into the output  */
                                      /* buffer for an option          */
                                      /* indicator.  An entry is used  */
                                      /* to designate whether the      */
                                      /* indicator must be on (X'F1')  */
                                      /* or off (X'F0').  If an entry  */
                                      /* is on, the indicator must be  */
                                      /* on; if it is off, the         */
                                      /* indicator must be off.  The   */
                                      /* value X'7F' in this field     */
                                      /* designates the end of the     */
                                      /* entry.                        */

  }  QDFFSTBL_t;



  typedef _Packed struct QDFFCOSA {   /* Keyword Category Displacement */
                                      /* String (QDFFCOSA) Category    */
                                      /* displacement string.  This    */
                                      /* structure occurs for each     */
                                      /* display file-, record-, or    */
                                      /* field-level section that has  */
                                      /* keyword structures.  For      */
                                      /* file-level sections, the      */
                                      /* displacement to this          */
                                      /* structure is from the         */
                                      /* beginning of structure        */
                                      /* QDFFINFO at variable WDFFXDOC */
                                      /* in structure QDFFDPDD.  For   */
                                      /* record-level sections, the    */
                                      /* displacement to this          */
                                      /* structure is from the         */
                                      /* beginning of structure        */
                                      /* QDFFRINF at variable WDFFRDOC */
                                      /* in structure QDFFRDPD.  For   */
                                      /* field-level sections, the     */
                                      /* displacement to this          */
                                      /* structure is from the         */
                                      /* beginning of structure        */
                                      /* QDFFFINF at variable WDFFFDOC */
                                      /* in structure QDFFFDPD.        */

       short WDFFCCT;                 /* Number of entries in the      */
                                      /* category displacement string. */

     /*char WDFFCCOS[];   */          /* Category displacement string  */
                                      /* (see structure QDFFCCOA).     */

  }  QDFFCOSA_t;



  typedef _Packed struct QDFFCCOA {   /* Keyword Category Displacement */
                                      /* String Entry (QDFFCCOA)       */
                                      /* Category displacement string  */
                                      /* array.  Each keyword category */
                                      /* type that is present in the   */
                                      /* file, record, or field        */
                                      /* section has an entry.  The    */
                                      /* number of entries in this     */
                                      /* structure is defined by       */
                                      /* variable WDFFCCT in structure */
                                      /* QDFFCOSA.  This structure is  */
                                      /* defined at variable WDFFCCOS  */
                                      /* in structure QDFFCOSA.  The   */
                                      /* structure is ARRAY(*).        */

       char WDFFCAID;                 /* Category ID (X'01' through    */
                                      /* X'FF').                       */

       short WDFFCAOF;                /* Displacement to category from */
                                      /* the start of each section     */
                                      /* header (see structure         */
                                      /* QDFFINFO for file-level       */
                                      /* keywords, structure QDFFRINF  */
                                      /* for record-level keywords, or */
                                      /* structure QDFFFINF for        */
                                      /* field-level keywords).        */

  }  QDFFCCOA_t;



  typedef _Packed struct QDFKFILK {   /* File-Level Keywords           */
                                      /* (QDFKFILK) File-level         */
                                      /* keywords.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of the appropriate  */
                                      /* section (file, record, or     */
                                      /* field) is from variable       */
                                      /* WDFFCAOF in structure         */
                                      /* QDFFCCOA.                     */

       short WDFKFIL;                 /* Number of keywords to follow. */

     /*char WDFKFILE[];   */          /* File-level keyword with       */
                                      /* parameters (see structure     */
                                      /* QDFKFLPM).                    */

  }  QDFKFILK_t;



  typedef _Packed struct QDFKFLPM {   /* File-Level Keyword with       */
                                      /* Parameters (QDFKFLPM)         */
                                      /* File-level keyword with       */
                                      /* parameters.  The number of    */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFKFIL   */
                                      /* in structure QDFKFILK.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFKFILE in          */
                                      /* structure QDFKFILK.  The      */
                                      /* structure is ARRAY(*).        */

       char WDFKFLID;                 /* Keyword ID.                   */

       short WDFKFLST;                /* Index into selection table    */
                                      /* (see structure QDFFSELT).  1  */
                                      /* indicates not optioned.       */

       short WDFKFLRS;                /* Response indicator minus one  */
                                      /* for files with INDARA         */
                                      /* keyword.  Response indicator  */
                                      /* input buffer displacement for */
                                      /* those without INDARA keyword. */
                                      /* In either case, -1 represents */
                                      /* no response indicator         */
                                      /* specified.                    */

       short WDFKFLP;                 /* Number of parameters to       */
                                      /* follow.                       */

     /*char WDFKFLEX[];   */          /* Category 1 keyword parameter  */
                                      /* entries.                      */

  }  QDFKFLPM_t;



  typedef _Packed struct QDFKFLPP {   /* Category 1 Parameter Entry    */
                                      /* (QDFKFLPP) Parameter entries  */
                                      /* for category 1.  The number   */
                                      /* of entries in this structure  */
                                      /* is defined by variable        */
                                      /* WDFKFLP in structure          */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLEX  */
                                      /* in structure QDFKFLPM.  The   */
                                      /* structure is ARRAY(*).        */

       short WDFKFLLN;                /* Length of the following       */
                                      /* keyword parameter entry.      */

     /*char WDFKFLNM[];   */          /* Keyword parameter structure.  */

  }  QDFKFLPP_t;



  typedef _Packed struct QDFKFLSZ {   /* MSGLOC Keyword Structure      */
                                      /* (QDFKFLSZ) MSGLOC keyword     */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'02' in structure         */
                                      /* QDFKFLPM.  The number of      */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFFSCR   */
                                      /* in structure QDFFBASE.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFKFLNM in          */
                                      /* structure QDFKFLPP.  The      */
                                      /* structure is ARRAY(*).        */

       short WDFKFLML;                /* MSGLOC values.                */

       char RESERVED_57[4];           /* Reserved.                     */

  }  QDFKFLSZ_t;



  typedef _Packed struct QDFKICVP {   /* IGCCNV Keyword Structure      */
                                      /* (QDFKICVP) IGCCNV keyword     */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'04' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.  Note: */
                                      /* The IGCCNV keyword generates  */
                                      /* additional internal records.  */

       short WDFKICVN;                /* IGCCNV format line number.    */

       short WDFKICVK;                /* IGCCNV format CF key.         */

       short WDFKICVT;                /* Index to internally generated */
                                      /* record in the record format   */
                                      /* table.                        */

  }  QDFKICVP_t;



  typedef _Packed struct QDFKHARD {   /* HLPRCD Keyword Structure      */
                                      /* (QDFKHARD) HLPRCD keyword     */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'05' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.        */

       char WDFKHRFM[10];             /* Record format name.           */

       char WDFKHFIL[10];             /* File name.                    */

       char WDFKHLIB[10];             /* File library name.            */

  }  QDFKHARD_t;



  typedef _Packed struct QDFKHXPS {   /* HLPPNLGRP Keyword Structure   */
                                      /* (QDFKHXPS) HLPPNLGRP keyword  */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'06' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.        */

       char WDFKHXHG[10];             /* Help panel group.             */

       char WDFKHXHL[10];             /* Help panel group library      */
                                      /* name.                         */

       short WDFKHXML;                /* Length of module name.        */

     /*char WDFKHXMN[];   */          /* Help module name.             */

  }  QDFKHXPS_t;



  typedef _Packed struct QDFKHDOC {   /* HLPDOC Keyword Structure      */
                                      /* (QDFKHDOC) HLPDOC keyword     */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'07' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.        */

       char WDFKHDLA[10];             /* Help text label name.         */

       char WDFKHDDO[12];             /* Document name.                */

       short WDFKHDFL;                /* Length of folder name.        */

     /*char WDFKHDFD[];   */          /* Folder name.                  */

  }  QDFKHDOC_t;



  typedef _Packed struct QDFKSIDX {   /* HLPSCHIDX Keyword Structure   */
                                      /* (QDFKSIDX) HLPSCHIDX keyword  */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'08' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.        */

       char WDFKSIOB[10];             /* Search index object name.     */

       char WDFKSILB[10];             /* Search index object library   */
                                      /* name.                         */

  }  QDFKSIDX_t;



  typedef _Packed struct QDFKFALX {   /* ALTNAME Keyword Structure     */
                                      /* (QDFKFALX) ALTNAME keyword    */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'0A' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.        */

       short WDFKALT;                 /* Count of ALTNAME keywords.    */

     /*char WDFKAARY[];   */          /* Alternative names (see        */
                                      /* structure QDFKFALK).          */

  }  QDFKFALX_t;



  typedef _Packed struct QDFKFALK {   /* ALTNAME Keyword Entry         */
                                      /* (QDFKFALK) ALTNAME keyword    */
                                      /* entry.  This structure is     */
                                      /* defined at variable WDFKAARY  */
                                      /* in structure QDFKFALX.        */

       char WDFKANME[10];             /* ALTNAME keyword value         */
                                      /* (excluding apostrophes).      */

       short WDFKAINX;                /* Index to record format in     */
                                      /* record format table.          */

  }  QDFKFALK_t;



  typedef _Packed struct QDFKESFL {   /* ERRSFL Keyword Structure      */
                                      /* (QDFKESFL) ERRSFL keyword     */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'0B' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.  Note: */
                                      /* The ERRSFL keyword generates  */
                                      /* additional internal records.  */

       char WDFKESCR[10];             /* Subfile control record name.  */

  }  QDFKESFL_t;



  typedef _Packed struct QDFKBODR {   /* WDWBORDER Keyword Structure   */
                                      /* (QDFKBODR) WDWBORDER keyword  */
                                      /* structure.  Use this          */
                                      /* structure for the category 1  */
                                      /* keyword that has a keyword ID */
                                      /* of X'0C' in structure         */
                                      /* QDFKFLPM.  This structure is  */
                                      /* defined at variable WDFKFLNM  */
                                      /* in structure QDFKFLPP.        */

       char WDFKCLOR;                 /* Values for *COLOR.  X'00'     */
                                      /* indicates not specified,      */
                                      /* X'3A' indicates BLU, X'20'    */
                                      /* indicates GRN, X'22'          */
                                      /* indicates WHT, X'28'          */
                                      /* indicates RED, X'30'          */
                                      /* indicates TRQ, X'32'          */
                                      /* indicates YLW, X'38'          */
                                      /* indicates PNK.                */

       char WDFKDATR;                 /* Values for *DSPATR.           */
                                      /* Combination of two or more of */
                                      /* these values: X'00' indicates */
                                      /* no attribute X'30' indicates  */
                                      /* (*DSPATR CS), X'28' indicates */
                                      /* (*DSPATR BL), X'24' indicates */
                                      /* (*DSPATR UL), X'22' indicates */
                                      /* (*DSPATR HI), X'21' indicates */
                                      /* (*DSPATR RI), and X'27'       */
                                      /* indicates (*DSPATR ND).       */

       char WDFKCHRS[8];              /* WDWBORDER characters in the   */
                                      /* following order: top-left     */
                                      /* corner, top horizontal,       */
                                      /* top-right corner, left        */
                                      /* vertical, right vertical,     */
                                      /* bottom-left corner, bottom    */
                                      /* horizontal, bottom-right      */
                                      /* corner.  If not specified,    */
                                      /* eight entries of X'00' will   */
                                      /* occur.                        */

  }  QDFKBODR_t;



  typedef _Packed struct QDFKCKKW {   /* Command Key Keyword Structure */
                                      /* (QDFKCKKW) Structure for      */
                                      /* command key keywords.  The    */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of the appropriate section    */
                                      /* (file, record, or field) is   */
                                      /* at variable WDFFCAOF in       */
                                      /* structure QDFFCCOA.           */

       short WDFKCKS;                 /* Number of entries in the      */
                                      /* array.                        */

     /*char WDFKCKCM[];   */          /* Command key keyword entries   */
                                      /* (see structure QDFKCKKE).     */

  }  QDFKCKKW_t;



  typedef _Packed struct QDFKCKKE {   /* Command Key Keyword Entries   */
                                      /* (QDFKCKKE) Command key        */
                                      /* keyword array.  The number of */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFKCKS   */
                                      /* in structure QDFKCKKW.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFKCKCM in          */
                                      /* structure QDFKCKKW.  The      */
                                      /* structure is ARRAY(*).        */

       char WDFKCKID;                 /* Keyword ID.                   */

       short WDFKCKIN;                /* Index into selection table.   */
                                      /* 1 indicates not optioned.     */

       short WDFKCKRS;                /* Response indicator minus one  */
                                      /* for files with INDARA         */
                                      /* keyword.  Response indicator  */
                                      /* input buffer displacement for */
                                      /* those without INDARA.  -1     */
                                      /* indicates no response         */
                                      /* indicator is specified.       */

       char WDFKCKMA[4];              /* Key mask (ignored for         */
                                      /* VLDCMDKEY and HLPRTN          */
                                      /* keywords).  The OR values for */
                                      /* the key mask follow:          */
                                      /* X'80000000' CA/CF01,          */
                                      /* X'40000000' CA/CF02,          */
                                      /* X'20000000' CA/CF03,          */
                                      /* X'10000000' CA/CF04,          */
                                      /* X'08000000' CA/CF05,          */
                                      /* X'04000000' CA/CF06,          */
                                      /* X'02000000' CA/CF07,          */
                                      /* X'01000000' CA/CF08,          */
                                      /* X'00800000' CA/CF09,          */
                                      /* X'00400000' CA/CF10,          */
                                      /* X'00200000' CA/CF11,          */
                                      /* X'00100000' CA/CF12,          */
                                      /* X'00080000' CA/CF13,          */
                                      /* X'00040000' CA/CF14,          */
                                      /* X'00020000' CA/CF15,          */
                                      /* X'00010000' CA/CF16,          */
                                      /* X'00008000' CA/CF17,          */
                                      /* X'00004000' CA/CF18,          */
                                      /* X'00002000' CA/CF19,          */
                                      /* X'00001000' CA/CF20,          */
                                      /* X'00000800' CA/CF21,          */
                                      /* X'00000400' CA/CF22,          */
                                      /* X'00000200' CA/CF23,          */
                                      /* X'00000100' CA/CF24,          */
                                      /* X'00000080' ROLLUP,           */
                                      /* X'00000040' ROLLDOWN,         */
                                      /* X'00000020' PRINT,            */
                                      /* X'00000010' HOME, X'00000008' */
                                      /* CLEAR, X'00000004' HELP.      */

  }  QDFKCKKE_t;



  typedef _Packed struct QDFKOVRR {   /* OVERLAY Keyword Structure     */
                                      /* (QDFKOVRR) OVERLAY-related    */
                                      /* keywords.  This structure is  */
                                      /* used if the keyword ID in     */
                                      /* structure QDFKFLPM is X'01'.  */
                                      /* The displacement to this      */
                                      /* structure from the beginning  */
                                      /* of the appropriate section    */
                                      /* (file, record, and field) is  */
                                      /* at variable WDFFCAOF in       */
                                      /* structure QDFFCCOA.           */

       short WDFKOLS;                 /* Number of keyword entries to  */
                                      /* follow.                       */

     /*char WDFKOVRT[];   */          /* Array of keyword entries.     */
                                      /* Entries are contained in      */
                                      /* structure QDFKOVRE or         */
                                      /* QDFKOVRP.                     */

  }  QDFKOVRR_t;



  typedef _Packed struct QDFKOVRE {   /* Keyword Structure (QDFKOVRE)  */
                                      /* Array structure for keywords. */
                                      /* Use this structure for        */
                                      /* category 3 keywords that have */
                                      /* a keyword ID of X'02', X'03', */
                                      /* X'04', X'05', X'06', X'08',   */
                                      /* or X'09'.  This structure is  */
                                      /* defined at variable WDFKOVRT  */
                                      /* in structure QDFKOVRR.  The   */
                                      /* structure is ARRAY(*).        */

       char WDFKOLAD;                 /* Keyword ID.                   */

       short WDFKOLAN;                /* Index into selection table.   */
                                      /* 1 indicates not optioned.     */

  }  QDFKOVRE_t;



  typedef _Packed struct QDFKOVRP {   /* OVERLAY and PUTRETAIN-Related */
                                      /* Keyword Structure (QDFKOVRP)  */
                                      /* Structure for OVERLAY and     */
                                      /* PUTRETAIN-related keywords.   */
                                      /* Use this structure for        */
                                      /* category 3 keywords that have */
                                      /* a keyword ID of X'01', X'07', */
                                      /* X'10', or X'11'.  This        */
                                      /* structure is defined at       */
                                      /* variable WDFKOVRT in          */
                                      /* structure QDFKOVRR.  The      */
                                      /* structure is ARRAY(*).        */

       char WDFKOLID;                 /* Keyword ID.                   */

       short WDFKOLIN;                /* Index into selection table.   */
                                      /* 1 indicates not optioned.     */

     /*char WDFKOLEX[];   */          /* Extra remaining portion of    */
                                      /* this category for ERASE and   */
                                      /* CLRL.                         */

  }  QDFKOVRP_t;



  typedef _Packed struct QDFKOLER {   /* ERASE Keyword Structure       */
                                      /* (QDFKOLER) ERASE keyword      */
                                      /* structure.  Use this          */
                                      /* structure for the category 3  */
                                      /* keyword that has a keyword ID */
                                      /* of X'10'.  This structure is  */
                                      /* defined at variable WDFKOLEX  */
                                      /* in structure QDFKOVRP.        */

       short WDFKOLE;                 /* Number of bytes to follow.    */

     /*short WDFKOLAR[];  */          /* Indexes to the record format  */
                                      /* table for the format to be    */
                                      /* erased.  0, if format does    */
                                      /* not exist.                    */

  }  QDFKOLER_t;



  typedef _Packed struct QDFKOLCL {   /* CLRL Keyword Structure        */
                                      /* (QDFKOLCL) CLRL keyword       */
                                      /* structure.  Use this          */
                                      /* structure for the category 3  */
                                      /* keyword that has a keyword ID */
                                      /* of X'11'.  This structure is  */
                                      /* defined at variable WDFKOLEX  */
                                      /* in structure QDFKOVRP.        */

       short WDFKOLC;                 /* Number of bytes to follow     */
                                      /* (always 2).                   */

       short WDFKOLCN;                /* Clear line number.            */

  }  QDFKOLCL_t;



  typedef _Packed struct QDFKMSRL {   /* Miscellaneous Record-Level    */
                                      /* Keywords (QDFKMSRL)           */
                                      /* Miscellaneous record-level    */
                                      /* keywords.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of the appropriate  */
                                      /* section (file, record, or     */
                                      /* field) is at variable         */
                                      /* WDFFCAOF in structure         */
                                      /* QDFFCCOA.                     */

       short WDFKMSS;                 /* Number of keywords to follow. */

     /*char WDFKMSKW[];   */          /* Array of keyword entries.     */
                                      /* Entries are contained in      */
                                      /* structure QDFKMSAP.           */

  }  QDFKMSRL_t;



  typedef _Packed struct QDFKMSAP {   /* Parameter Structure           */
                                      /* (QDFKMSAP) Array structure    */
                                      /* for keywords with simple      */
                                      /* parameters.  This structure   */
                                      /* is defined at variable        */
                                      /* WDFKMSKW in structure         */
                                      /* QDFKMSRL.  The structure is   */
                                      /* ARRAY(*).                     */

       char WDFKMSAD;                 /* Keyword ID.                   */

       short WDFKMSAN;                /* Index into selection table.   */
                                      /* 1 indicates not optioned.     */

  }  QDFKMSAP_t;



  typedef _Packed struct QDFKMSCP {   /* Response Indicator Keyword    */
                                      /* Array (QDFKMSCP)              */
                                      /* Miscellaneous record-level    */
                                      /* keywords.  Use this structure */
                                      /* for category 4 keywords that  */
                                      /* have a keyword ID of X'10',   */
                                      /* X'11', X'0F', or X'13'.  The  */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFFRINF is at   */
                                      /* variable WDFFINDO in          */
                                      /* structure QDFFRINF.           */

       char WDFKMSID;                 /* Keyword ID.                   */

       short WDFKMSIN;                /* Index into selection table.   */
                                      /* 1 indicates keyword is not    */
                                      /* optioned.  For SETOFF, this   */
                                      /* contains the response         */
                                      /* indicator displacement.       */

     /*char WDFKMSEX[];   */          /* Additional structures for     */
                                      /* CSRLOC, INDARA, DSPMOD, and   */
                                      /* MNUBARDSP keywords.  (See     */
                                      /* structures QDFKMSK1,          */
                                      /* QDFKMSK2, QDFKMSK3, and       */
                                      /* QDFKMSMBDSP.)                 */

  }  QDFKMSCP_t;



  typedef _Packed struct QDFKMSK1 {   /* CSRLOC Keyword Structure      */
                                      /* (QDFKMSK1) Remaining portion  */
                                      /* of CSRLOC keyword.  Use this  */
                                      /* structure for a category 4    */
                                      /* keyword that has a keyword ID */
                                      /* of X'10'.  This structure is  */
                                      /* defined at variable WDFKMSEX  */
                                      /* in structure QDFKMSCP.        */

       short WDFKMSLC;                /* Length of data follows.       */

       char RESERVED_58;              /* Reserved.                     */

       short WDFKMSRW;                /* Output buffer displacement    */
                                      /* for row value field.          */

       short WDFKMSCL;                /* Output buffer displacement    */
                                      /* for column value field.       */

       long int WDFKMSFA;             /* Index into name table for     */
                                      /* line number field.            */

       long int WDFKMSFB;             /* Index into name table for     */
                                      /* position number field.        */

  }  QDFKMSK1_t;



  typedef _Packed struct QDFKMSK2 {   /* INDARA Keyword Structure      */
                                      /* (QDFKMSK2) Remaining portion  */
                                      /* of INDARA keyword.  Use this  */
                                      /* structure for a category 4    */
                                      /* keyword that has a keyword ID */
                                      /* of X'11'.  This structure is  */
                                      /* defined at variable WDFKMSEX  */
                                      /* in structure QDFKMSCP.        */

       short WDFKMSLN;                /* Length of data that follows.  */
                                      /* Length may be zero.           */

     /*short WDFKMSRI[];  */          /* List of response indicators   */
                                      /* that are referred to in this  */
                                      /* record (including SETOFF).    */
                                      /* The value is the indicator    */
                                      /* displacement (that is, the    */
                                      /* indicator number minus one).  */
                                      /* If an indicator is only an    */
                                      /* option indicator (and not a   */
                                      /* response indicator), this     */
                                      /* value is -1.                  */

  }  QDFKMSK2_t;



  typedef _Packed struct QDFKMSK3 {   /* DSPMOD Keyword Structure      */
                                      /* (QDFKMSK3) Remaining portion  */
                                      /* of DSPMOD keyword.  Use this  */
                                      /* structure for a category 4    */
                                      /* keyword that has a keyword ID */
                                      /* of X'0F'.  This structure is  */
                                      /* defined at variable WDFKMSEX  */
                                      /* in structure QDFKMSCP.        */

       short WDFKMSDM;                /* Index into display size array */
                                      /* (valid values are 1 through   */
                                      /* 4).                           */

  }  QDFKMSK3_t;



  typedef _Packed struct QDFKMSCLN {  /* RTNCSRLOC and RTNCSRLOC2      */
                                      /* Keyword Structure (QDFKMSCLN) */
                                      /* Remaining portion of          */
                                      /* RTNCSRLOC and RTNCSRLOC2      */
                                      /* keywords.  Use this structure */
                                      /* for a category 4 keyword that */
                                      /* has a keyword ID of X'15'.    */
                                      /* This structure is defined at  */
                                      /* variable WDFKMSEX in          */
                                      /* structure QDFKMSCP.           */

       _Packed union            {

         short WDFKMSCRO;             /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the name of the */
                                      /* record that the cursor is on. */
                                      /* Valid for RTNCSRLOC keyword   */
                                      /* or for the *RECNAME parameter */
                                      /* of the RTNCSRLOC2 keyword.    */

         short WDFKRCLR;              /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the row number  */
                                      /* the cursor is on.  Valid for  */
                                      /* *WINDOW or *MOUSE parameter   */
                                      /* of RTNCSRLOC2 keyword.        */

       }WDFKMSCROU;

       _Packed union            {

         short WDFKMSCFO;             /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the name of the */
                                      /* field that the cursor is on.  */
                                      /* Valid for RTNCSRLOC keyword   */
                                      /* or for the *RECNAME parameter */
                                      /* of the RTNCSRLOC2 keyword.    */

         short WDFKRCLC;              /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the column      */
                                      /* number the cursor is on.      */
                                      /* Valid for *WINDOW or *MOUSE   */
                                      /* parameter of RTNCSRLOC2       */
                                      /* keyword.                      */

       }WDFKMSCFOU;

       _Packed union            {

         short WDFKMSCLO;             /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the relative    */
                                      /* position into the field that  */
                                      /* the cursor is on.  Valid for  */
                                      /* RTNCSRLOC keyword or for the  */
                                      /* *RECNAME parameter of the     */
                                      /* RTNCSRLOC2 keyword.           */

         short WDFKCLWR;              /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the row of the  */
                                      /* cursor relative to the active */
                                      /* window or to the location of  */
                                      /* the cursor after the mouse    */
                                      /* button action has been        */
                                      /* processed.  Valid for *WINDOW */
                                      /* or *MOUSE parameter of        */
                                      /* RTNCSRLOC2 keyword.           */

       }WDFKMSCLOU;

       short WDFKRCLWC;               /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the column of   */
                                      /* the cursor relative to the    */
                                      /* active window or to the       */
                                      /* location of the cursor after  */
                                      /* the mouse button action has   */
                                      /* been processed.  Valid for    */
                                      /* *WINDOW or *MOUSE parameter   */
                                      /* of RTNCSRLOC2 keyword and     */
                                      /* does not exist for the        */
                                      /* RTNCSRLOC keyword.            */

       char WDFKRCTYPE;               /* The type of RTNCSRLOC format  */
                                      /* specified.  X'00' indicates   */
                                      /* *RECNAME is specified, X'01'  */
                                      /* indicates *WINDOW is          */
                                      /* specified, and X'02'          */
                                      /* indicates *MOUSE is           */
                                      /* specified.  This section is   */
                                      /* only valid for the RTNCSRLOC2 */
                                      /* keyword and does not exist    */
                                      /* for the RTNCSRLOC keyword.    */

       struct WDFKRCFLGS {            /* Miscellaneous flags for the   */
                                      /* RTNCSRLOC2 keyword.  This     */
                                      /* section is only valid for the */
                                      /* RTNCSRLOC2 keyword and does   */
                                      /* not exist for the RTNCSRLOC   */
                                      /* keyword.                      */

         unsigned WDFKRCLFMT2:1;      /* 1 indicates this is returning */
                                      /* row-column information.  0    */
                                      /* indicates this is returning   */
                                      /* record name and field name    */
                                      /* information.  This section is */
                                      /* only valid for the RTNCSRLOC2 */
                                      /* keyword and does not exist    */
                                      /* for the RTNCSRLOC keyword.    */

         unsigned RESERVED_120:7;     /* Reserved                      */

       }WDFKRCFLGS;

  }  QDFKMSCLN_t;



  typedef _Packed struct QDFKMSMBDSP { /* MNUBARDSP Keyword Structure  */
                                      /* (QDFKMSMBDSP) Remaining       */
                                      /* portion of MNUBARDSP.  Use    */
                                      /* this structure for a category */
                                      /* 4 keyword that has a keyword  */
                                      /* ID of X'16'.  This structure  */
                                      /* is defined at variable        */
                                      /* WDFKMSEX in structure         */
                                      /* QDFKMSCP.                     */

       char WDFKMBDRCN[10];           /* The name of the menu bar      */
                                      /* record that the MNUBARDSP     */
                                      /* keyword wants to display.  If */
                                      /* MNUBARDSP is on a MNUBAR      */
                                      /* keyword record, this field    */
                                      /* contains hexadecimal zeros.   */

       short WDFKMBDCFO;              /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* that contains the number of   */
                                      /* the CHOICE specified by the   */
                                      /* user.  -1, if not used.       */

       short WDFKMBDPIO;              /* If the PULLDOWN contains only */
                                      /* the SNGCHCFLD keyword, this   */
                                      /* is the displacement into the  */
                                      /* input buffer to the hidden    */
                                      /* field that contains the input */
                                      /* from the PULLDOWN.  -1, if    */
                                      /* not used.                     */

  }  QDFKMSMBDSP_t;



  typedef _Packed struct QDFK0BPR {   /* File-Level Keywords with      */
                                      /* Parameters Structure          */
                                      /* (QDFK0BPR) File-level         */
                                      /* keywords with parameters.     */
                                      /* The displacement to this      */
                                      /* structure from the beginning  */
                                      /* of the appropriate section    */
                                      /* (file, record, or field) is   */
                                      /* at variable WDFFCAOF in       */
                                      /* structure QDFFCCOA.           */

       short WDFK0BPCT;               /* Number of keywords to follow. */

     /*char WDFK0BKW[];   */          /* File-level keyword entries.   */
                                      /* See structure                 */

  }  QDFK0BPR_t;



  typedef _Packed struct QDFK0BXWP {  /* File-Level Keyword Structure  */
                                      /* (QDFK0BXWP) File-level        */
                                      /* keyword structure.  This      */
                                      /* structure is defined at       */
                                      /* variable WDFK0BKW in          */
                                      /* structure QDFK0BPR.           */

       char WDFK0BPID;                /* Keyword ID.                   */

       short WDFK0BPIN;               /* Index into selection table.   */
                                      /* 1 indicates keyword is not    */
                                      /* optioned.                     */

       short WDFK0BPLN;               /* Length of parameter for       */
                                      /* keyword.                      */

     /*char WDFK0BPEX[];  */          /* Extra remaining portion for   */
                                      /* keywords.  The actual length  */
                                      /* is in variable WDFKMPLN in    */
                                      /* structure QDFKMRWP.           */

  }  QDFK0BXWP_t;



  typedef _Packed struct QDFK0BGATR { /* GRDATR Parameter Structure    */
                                      /* (QDFK0BGATR) GRDATR parameter */
                                      /* structure.  Use this          */
                                      /* structure for category 0B     */
                                      /* keywords that have a keyword  */
                                      /* ID of X'01'.  The structure   */
                                      /* is defined at variable        */
                                      /* WDFK0BPEX in structure        */
                                      /* QDFK0BXWP.                    */

       char WDFK0BCLR;                /* Color parameter.  X'FE'       */
                                      /* indicates not specified.      */

       char RESERVED_59;              /* Reserved.                     */

       char WDFK0BLT;                 /* Line type.  X'FE' indicates   */
                                      /* not specified.                */

       char RESERVED_60;              /* Reserved.                     */

  }  QDFK0BGATR_t;



  typedef _Packed struct QDFKHBKPRM { /* HLPSHELF Parameter Structure  */
                                      /* (QDFKHBKPRM) Structure for    */
                                      /* HLPSHELF parameters.  Use     */
                                      /* this structure for category   */
                                      /* 0B keywords that have a       */
                                      /* keyword ID of X'02'.  The     */
                                      /* structure is defined at       */
                                      /* variable WDFK0BPEX in         */
                                      /* structure QDFK0BXWP.          */

       char WDFKHBKNAM[8];            /* Bookshelf name.               */

  }  QDFKHBKPRM_t;



  typedef _Packed struct QDFKMRPR {   /* Miscellaneous Record-Level    */
                                      /* Structure (QDFKMRPR)          */
                                      /* Miscellaneous record-level    */
                                      /* with parameters.  The         */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of the appropriate section    */
                                      /* (file, record, or field) is   */
                                      /* at variable WDFFCAOF in       */
                                      /* structure QDFFCCOA.           */

       short WDFKRPS;                 /* Number of keywords to follow  */

     /*char WDFKRPKW[];   */          /* Record-level keyword entries  */
                                      /* (see structure QDFKMRWP).     */

  }  QDFKMRPR_t;



  typedef _Packed struct QDFKMRWP {   /* Miscellaneous Record-Level    */
                                      /* Keywords (QDFKMRWP)           */
                                      /* Miscellaneous record-level    */
                                      /* keywords.  This structure is  */
                                      /* defined at variable WDFKRPKW  */
                                      /* in structure QDFKMRPR.  The   */
                                      /* structure is ARRAY(*).        */

       char WDFKMPID;                 /* Keyword ID.                   */

       short WDFKMPIN;                /* Index into selection table.   */
                                      /* 1 indicates keyword is not    */
                                      /* optioned.                     */

       short WDFKMPLN;                /* Length of parameter for       */
                                      /* keyword.                      */

     /*char WDFKMPEX[];   */          /* Extra remaining portion for   */
                                      /* keywords.  Actual length of   */
                                      /* parameter is specified in     */
                                      /* variable WDFKMPLN in this     */
                                      /* structure.                    */

  }  QDFKMRWP_t;



  typedef _Packed struct QDFKHSTR {   /* HLP Keyword Structure         */
                                      /* (QDFKHSTR) Remaining portion  */
                                      /* of H-specification.  Use this */
                                      /* structure for a category 17   */
                                      /* keyword that has a keyword ID */
                                      /* of X'01'.  This structure is  */
                                      /* defined at variable WDFKMPEX  */
                                      /* in structure QDFKMRWP.  Note: */
                                      /* HLP is an internal keyword    */
                                      /* generated when an             */
                                      /* H-specification is specified. */

       short WDFKH;                   /* Count of H-specifications.    */

     /*char WDFKHV[];     */          /* Variable part of parameter.   */

  }  QDFKHSTR_t;



  typedef _Packed struct QDFKHPRM {   /* HLP Keyword Entry Structure   */
                                      /* (QDFKHPRM) Entry for the      */
                                      /* internal HLP keyword.  The    */
                                      /* total number of entries is    */
                                      /* contained in variable WDFKH   */
                                      /* in structure QDFKHSTR.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFKHV in structure  */
                                      /* QDFKHSTR.  Displacements to   */
                                      /* subsequent entries are        */
                                      /* calculated using variable     */
                                      /* WDFKHOFS in structure         */
                                      /* QDFKHSTR.  The structure is   */
                                      /* ARRAY(*).                     */

       short WDFKHOFS;                /* Length of this                */
                                      /* H-specification.              */

       struct WDFKHFLG {              /* Flags for H-specification.    */

         unsigned WDFKHBDY:1;         /* If on, HLPBDY keyword is      */
                                      /* specified.                    */

         unsigned WDFKHPRD:1;         /* If on, HLPRCD keyword is      */
                                      /* specified.  Structure         */
                                      /* QDFKHNMS is defined at        */
                                      /* variable WDFKHVAR of this     */
                                      /* structure.                    */

         unsigned WDFKHPNL:1;         /* If on, HLPPNLGRP keyword is   */
                                      /* specified.  Structure QDFKHPS */
                                      /* is defined at variable        */
                                      /* WDFKHVAR.                     */

         unsigned WDFKHPDC:1;         /* If on, HLPDOC keyword is      */
                                      /* specified.  Structure         */
                                      /* QDFKHRDC is defined at        */
                                      /* variable WDFKHVAR.            */

         unsigned WDFKDFHR:1;         /* If on, file name on HLPRCD    */
                                      /* keyword is the default.       */

         unsigned WDFKHEXC:1;         /* If on, HLPEXCLD keyword is    */
                                      /* specified.                    */

         unsigned WDFKENPT:1;         /* If on, CHOICE, MNUBAR, or     */
                                      /* PULLDOWN help was specified   */
                                      /* in this H-specification.      */
                                      /* This indicates enhanced       */
                                      /* display structure QDFKHARX is */
                                      /* mapped at variable WDFKHEXT   */
                                      /* in structure QDFKHARA.        */

         unsigned RESERVED_61:9;      /* Reserved.                     */

       }WDFKHFLG;

       short WDFKHSRO;                /* Displacement to structure     */
                                      /* containing help source        */
                                      /* information.  (See structure  */
                                      /* QDFKHNMS,QDFKHPS, or          */
                                      /* QDFKHRDC.                     */

       short WDFKHCRD;                /* Selection string for help     */
                                      /* source on HLPRCD, HLPDOC, and */
                                      /* HLPPNLGRP keywords.  1        */
                                      /* indicates not specified or no */
                                      /* indicator on keyword.         */

       short WDFKHCBY;                /* Selection string for HLPBDY   */
                                      /* keyword.  1 indicates keyword */
                                      /* not specified or no indicator */
                                      /* on keyword.                   */

       short WDFKHARO;                /* Displacement to HLPARA        */
                                      /* information (see structure    */
                                      /* QDFKHARA).                    */

       short WDFKHCEX;                /* Selection string for          */
                                      /* HLPEXCLD.  1 indicates        */
                                      /* keyword not specified or no   */
                                      /* indicator on keyword.         */

       char RESERVED_62[3];           /* Reserved.                     */

     /*char WDFKHVAR[];   */          /* Variable length parameters.   */

  }  QDFKHPRM_t;



  typedef _Packed struct QDFKHNMS {   /* HLPRCD Keyword Structure      */
                                      /* (QDFKHNMS) HLPRCD keyword     */
                                      /* structure.  This structure is */
                                      /* present only if variable      */
                                      /* WDFKHPRD in structure         */
                                      /* QDFKHPRM is set on.  This     */
                                      /* structure is defined at       */
                                      /* variable WDFKHVAR in          */
                                      /* structure QDFKHPRM.           */

       char WDFKHRCD[10];             /* Record format name.           */

       char WDFKHFLE[10];             /* File name.                    */

       char WDFKHRLB[10];             /* File library name.  If file   */
                                      /* and library were not          */
                                      /* specified, these are the      */
                                      /* display file and library      */
                                      /* names.  If file but not       */
                                      /* library is specified, the     */
                                      /* library name is *LIBL.        */

  }  QDFKHNMS_t;



  typedef _Packed struct QDFKHPS {    /* LPPNLGRP Keyword Structure    */
                                      /* (QDFKHPS) HLPPNLGRP keyword   */
                                      /* structure.  This structure is */
                                      /* present only if variable      */
                                      /* WDFKHPNL in structure         */
                                      /* QDFKHPRM is set on.  This     */
                                      /* structure is defined at       */
                                      /* variable WDFKHVAR in          */
                                      /* structure QDFKHPRM.           */

       char WDFKHPNN[10];             /* Help panel group name.        */

       char WDFKHPLB[10];             /* Help panel group library      */
                                      /* name.  If library was not     */
                                      /* specified, the library name   */
                                      /* is *LIBL.                     */

       short WDFKHMLN;                /* Length of help module name.   */

     /*char WDFKHMN[];    */          /* Help module name.             */

  }  QDFKHPS_t;



  typedef _Packed struct QDFKHRDC {   /* HLPDOC Keyword Structure      */
                                      /* (QDFKHRDC) HLPDOC keyword     */
                                      /* structure.  This structure is */
                                      /* present only if variable      */
                                      /* WDFKHPDC in structure         */
                                      /* QDFKHPRM is set on.  This     */
                                      /* structure is defined at       */
                                      /* variable WDFKHVAR in          */
                                      /* structure QDFKHPRM.           */

       char WDFKHRLA[10];             /* Help text label name.         */

       char WDFKHRDO[12];             /* Document name.                */

       short WDFKHRFL;                /* Length of folder name.        */

     /*char WDFKHRFD[];   */          /* Folder name.                  */

  }  QDFKHRDC_t;



  typedef _Packed struct QDFKHARA {   /* HLPARA Keyword Structure      */
                                      /* (QDFKHARA) HLPARA keyword     */
                                      /* structure.  This structure is */
                                      /* repeated for each display     */
                                      /* size specified.  The number   */
                                      /* of display sizes is defined   */
                                      /* by variable WDFFSCR in        */
                                      /* structure QDFFBASE.  This     */
                                      /* structure is defined at       */
                                      /* variable WDFKHARO in          */
                                      /* structure QDFKHPRM.  The      */
                                      /* structure is ARRAY(*).        */

       char WDFKHFRO;                 /* From row.                     */

       char WDFKHFCO;                 /* From column.                  */

       char WDFKHTRO;                 /* To row.                       */

       char WDFKHTCO;                 /* To column.                    */

     /*char WDFKHEXT[];   */          /* Enhanced display extension    */
                                      /* (see structure QDFKHARX).     */
                                      /* This field is present only if */
                                      /* variable WDFKENPT in          */
                                      /* structure QDFKHPRM is on.     */

  }  QDFKHARA_t;



  typedef _Packed struct QDFKHARX {   /* HLPARA Keyword Enhanced       */
                                      /* Display Structure (QDFKHARX)  */
                                      /* HLPARA enhanced display       */
                                      /* mapping.  This structure is   */
                                      /* present only if variable      */
                                      /* WDFKHPRD in structure         */
                                      /* QDFKHPRM is on.  This         */
                                      /* structure is defined at       */
                                      /* variable WDFKHEXT in          */
                                      /* structure QDFKHARA.           */

       struct WDFKHAFLG {             /* Help area flags.              */

         unsigned WDFKHCHC:1;         /* Choice-level help.            */

         unsigned RESERVED_63:2;      /* Reserved.                     */

         unsigned WDFKHFLDC:1;        /* Choice-level help, with no    */
                                      /* choice number.                */

         unsigned WDFKHRC:1;          /* If on, HLPARA(*RCD) keyword   */
                                      /* is specified.                 */

         unsigned RESERVED_64:3;      /* Reserved.                     */

       }WDFKHAFLG;

       short WDFKHFLDI;               /* Index to field on             */
                                      /* choice-level help.            */

       char WDFKHCHID[2];             /* Choice number for             */
                                      /* choice-level help.            */

  }  QDFKHARX_t;



  typedef _Packed struct QDFKHSEQ {   /* HLPSEQ Keyword Structure      */
                                      /* (QDFKHSEQ) Remaining portion  */
                                      /* of HLPSEQ.  Use this          */
                                      /* structure for a category 17   */
                                      /* keyword that has a keyword ID */
                                      /* of X'02'.  This structure is  */
                                      /* defined at variable WDFKMPEX  */
                                      /* in structure QDFKMRWP.        */

       char WDFKHSGN[10];             /* Help group name.              */

       short WDFKHSS;                 /* Help sequence number.         */

       short WDFKHSIF;                /* Index to first record in help */
                                      /* group.                        */

       short WDFKHSIL;                /* Index to last record in help  */
                                      /* group.                        */

       short WDFKHSIN;                /* Index to next record in help  */
                                      /* group.                        */

       short WDFKHSIP;                /* Index to previous record in   */
                                      /* help group.                   */

  }  QDFKHSEQ_t;



  typedef _Packed struct QDFKPRTR {   /* PRINT Keyword Structure       */
                                      /* (QDFKPRTR) PRINT keyword      */
                                      /* structure.  Use this          */
                                      /* structure for a category 17   */
                                      /* keyword that has a keyword ID */
                                      /* of X'06'.  This structure is  */
                                      /* defined at variable WDFKMPEX  */
                                      /* in structure QDFKMRWP.        */

       short WDFKRLRS;                /* Response indicator; -1, if no */
                                      /* response indicator.           */

       short WDFKRLP;                 /* Number of parameters to       */
                                      /* follow.                       */

     /*char WDFKPRTP[];   */          /* Remaining print structure.    */

  }  QDFKPRTR_t;



  typedef _Packed struct QDFKPPRM {   /* Record-Level Print Parameters */
                                      /* (QDFKPPRM) Record-level print */
                                      /* parameters.  This structure   */
                                      /* is defined at variable        */
                                      /* WDFKMPEX in structure         */
                                      /* QDFKMRWP.                     */

       short WDFKPLEN;                /* Length of parameter to        */
                                      /* follow.                       */

     /*char WDFKPFLN[];   */          /* Print file or library name.   */

  }  QDFKPPRM_t;



  typedef _Packed struct QDFKBRDR {   /* WDWBORDER Keyword Structure   */
                                      /* (QDFKBRDR) WDWBORDER keyword  */
                                      /* structure.  Use this          */
                                      /* structure for a category 17   */
                                      /* keyword that has a keyword ID */
                                      /* of X'07'.  This structure is  */
                                      /* defined at variable WDFKMPEX  */
                                      /* in structure QDFKMRWP.        */

       char WDFKCOLR;                 /* Value for *COLOR.  X'00'      */
                                      /* indicates not specified,      */
                                      /* X'3A' indicates BLU, X'20'    */
                                      /* indicates GRN, X'22'          */
                                      /* indicates WHT, X'28'          */
                                      /* indicates RED, X'30'          */
                                      /* indicates TRQ, X'32'          */
                                      /* indicates YLW, X'38'          */
                                      /* indicates PNK.                */

       char WDFKDSPA;                 /* Value for *DSPATR             */
                                      /* (combination of two or more   */
                                      /* of these values): X'00'       */
                                      /* indicates no attribute, X'30' */
                                      /* indicates (*DSPATR CS), X'28' */
                                      /* indicates (*DSPATR BL), X'24' */
                                      /* indicates (*DSPATR UL), X'22' */
                                      /* indicates (*DSPATR HI), X'21' */
                                      /* indicates (*DSPATR RI), X'27' */
                                      /* indicates (*DSPATR ND).  If   */
                                      /* multiple values are           */
                                      /* specified, they are ORed      */
                                      /* together.                     */

       char WDFKCHAR[8];              /* Border characters in the      */
                                      /* following order: top-left     */
                                      /* corner, top horizontal,       */
                                      /* top-right corner, left        */
                                      /* vertical, right vertical,     */
                                      /* bottom-left corner, bottom    */
                                      /* horizontal, bottom-right      */
                                      /* corner.                       */

  }  QDFKBRDR_t;


  typedef _Packed struct          {

         short WDFKLIN;               /* Line number or displacement.  */

         short WDFKPOS;               /* Position number or            */
                                      /* displacement.                 */

         short WDFKLINW;              /* Number of window lines in     */
                                      /* window.                       */

         short WDFKPOSW;              /* Number of window positions in */
                                      /* window.                       */

         char RESERVED_66[2];         /* Reserved.                     */

  }QDFKLINU_t;

  typedef _Packed struct QDFKWDTA {   /* Window Data Array Structure   */
                                      /* (QDFKWDTA) Window data array. */
                                      /* Use this structure for a      */
                                      /* category 17 keyword that has  */
                                      /* a keyword ID of X'08'.  There */
                                      /* is one array entry for each   */
                                      /* display size specified.  This */
                                      /* structure is defined at       */
                                      /* variable WDFKMPEX in          */
                                      /* structure QDFKMRWP.  The      */
                                      /* structure is ARRAY(*).        */

       struct WDFWDWB {               /* Miscellaneous flags that      */
                                      /* describe the type of          */
                                      /* information provided by this  */
                                      /* window keyword.               */

          unsigned WDFKDEFN:1;        /* 1 indicates window            */
                                      /* definition; do not use        */
                                      /* variable WDFKWNAM in this     */
                                      /* structure.  0 indicates       */
                                      /* window reference; use         */
                                      /* WDFKWNAM.                     */

          unsigned WDFKLINC:1;        /* 1 indicates actual line       */
                                      /* number provided.  0 indicates */
                                      /* displacement to line number   */
                                      /* field provided.  This field   */
                                      /* is not used if variable       */
                                      /* WDFKDEFN in this structure    */
                                      /* equals 0.                     */

          unsigned WDFKLFL1:1;        /* 1 indicates line number field */
                                      /* length is 1 digit long.  0    */
                                      /* indicates line number is not  */
                                      /* 1 digit long.  This field is  */
                                      /* not used if WDFKDEFN equals 0 */
                                      /* or WDFKLINC equals 1.         */

          unsigned WDFKLFL2:1;        /* 1 indicates line number field */
                                      /* length is 2 digits long.  0   */
                                      /* indicates line number is not  */
                                      /* 1 digit long.  This field is  */
                                      /* not used if WDFKDEFN equals 0 */
                                      /* or WDFKLINC equals 1.  Note:  */
                                      /* If WDFKLFL1 and WDFKLFL2 both */
                                      /* equal 0, the field length is  */
                                      /* 3 digits.                     */

          unsigned WDFKPOSC:1;        /* 1 indicates actual position   */
                                      /* number provided.  0 indicates */
                                      /* displacement to position      */
                                      /* number field provided.  This  */
                                      /* field is not used if WDFKDEFN */
                                      /* equals 0.                     */

          unsigned WDFKPFL1:1;        /* 1 indicates position number   */
                                      /* field length is 1 digit long. */
                                      /* 0 indicates position number   */
                                      /* is not 1 digit long.  This    */
                                      /* field is not used if WDFKDEFN */
                                      /* equals 0 or WDFKPOSC equals   */
                                      /* 1.                            */

          unsigned WDFKPFL2:1;        /* 1 indicates position number   */
                                      /* field length is 2 digits      */
                                      /* long.  0 indicates position   */
                                      /* number is not 1 digit long.   */
                                      /* This field is not used if     */
                                      /* WDFKDEFN equals 0 or WDFKPOSC */
                                      /* equals 1.  Note: If WDFKPFL1  */
                                      /* and WDFKPFL2 both equal 0,    */
                                      /* the field length is 3 digits. */

         unsigned WDFKDFTB:1;         /* Default specified in place of */
                                      /* first two parameters.  Bits   */
                                      /* WDFKLINC and WDFKPOSC will    */
                                      /* also be set and WDFKLINW and  */
                                      /* WDFKPOSW will be set to 0.    */

         unsigned WDFKNMLN:1;         /* If on, *NOMSGLIN parameter is */
                                      /* specified.  This window does  */
                                      /* not contain a message line.   */

         unsigned WDFKWRST:1;         /* If on, *NORSTCSR parameter is */
                                      /* specified.  This window       */
                                      /* allows the function keys to   */
                                      /* work outside of the window.   */

         unsigned RESERVED_65:6;      /* Reserved.                     */

       }WDFWDWB;

       _Packed union           {

         char WDFKWNAM[10];           /* Name of window definition     */
                                      /* record.                       */
         QDFKLINU_t KLINU;

       }WDFKWNAMU;


  }  QDFKWDTA_t;


  typedef _Packed struct {

         char RESERVED_68;            /* Reserved.                     */

         char WDFKWTCOLOR;            /* Value for *COLOR.  X'00'      */
                                      /* indicates not specified,      */
                                      /* X'3A' indicates BLU, X'20'    */
                                      /* indicates GRN, X'22'          */
                                      /* indicates WHT, X'28'          */
                                      /* indicates RED, X'30'          */
                                      /* indicates TRQ, X'32'          */
                                      /* indicates YLW, and X'38'      */
                                      /* indicates PNK.                */

  }QDFKWTCOLORU_t;


  typedef _Packed struct {

         char RESERVED_69;            /* Reserved.                     */

         char WDFKWTDSPA;             /* Value for *DSPATR             */
                                      /* (combination of two or more   */
                                      /* of the values below).  X'00'  */
                                      /* indicates no attribute, X'30' */
                                      /* indicates (*DSPATR CS), X'28' */
                                      /* indicates (*DSPATR BL), X'24' */
                                      /* indicates (*DSPATR UL), X'22' */
                                      /* indicates (*DSPATR HI), X'21' */
                                      /* indicates (*DSPATR RI), and   */
                                      /* X'27' indicates (*DSPATR ND). */
  }QDFKWTDSPAU_t;


  typedef _Packed struct {

         char RESERVED_70;            /* Reserved.                     */

         char WDFKWTALIGN;            /* Value for alignment.  X'00'   */
                                      /* indicates not specified,      */
                                      /* X'01' indicates *LEFT         */
                                      /* specified, X'02' indicates    */
                                      /* *CENTER specified, and X'03'  */
                                      /* indicates *RIGHT specified.   */


  }QDFKWTALIGNU_t;


  typedef _Packed struct QDFKWDWTTL { /* Window Title Structure        */
                                      /* (QDFKWDWTTL) Window title     */
                                      /* structure.  This structure is */
                                      /* defined at variable WDFKRPKW  */
                                      /* in structure QDFKMRPR.        */

       char WDFKWDWOVL[5];            /* Miscellaneous record-level    */
                                      /* keywords.  Structure QDFKMRWP */
                                      /* overlays this field.          */

       struct WDFKWTFLAGS {           /* Miscellaneous flags that      */
                                      /* describe the type of          */
                                      /* information provided by this  */
                                      /* window title keyword.         */

         unsigned WDFKWTTXTF:1;       /* 1 indicates window title text */
                                      /* is in a program-to-system     */
                                      /* field.  0 indicates window    */
                                      /* title text is a text literal. */

         unsigned WDFKWTCLRF:1;       /* 1 indicates window title      */
                                      /* color value is in a           */
                                      /* program-to-system field.  0   */
                                      /* indicates window title color  */
                                      /* value is in the parameter.    */

         unsigned WDFKWTATRF:1;       /* 1 indicates window title      */
                                      /* attribute value is in a       */
                                      /* program-to-system field.  0   */
                                      /* indicates window title        */
                                      /* attribute value is in the     */
                                      /* parameter.                    */

         unsigned WDFKWTALNF:1;       /* 1 indicates window title      */
                                      /* alignment value is in a       */
                                      /* program-to-system field.  0   */
                                      /* indicates window title        */
                                      /* alignment value is in the     */
                                      /* parameter.                    */

         unsigned WDFKWTPOS:1;        /* 1 indicates window title goes */
                                      /* in the bottom border.  0      */
                                      /* indicates window title goes   */
                                      /* in the top border.            */

         unsigned RESERVED_67:3;      /* Reserved.                     */

       }WDFKWTFLAGS;

       _Packed union              {

         short WDFKWTCLRPF;           /* Buffer displacement to field  */
                                      /* that contains the color.      */

         QDFKWTCOLORU_t OLORU;

       }WDFKWTCLRPFU;

       _Packed union              {

         short WDFKWTDSPPF;           /* Buffer displacement to the    */
                                      /* field that contains the       */
                                      /* attribute.                    */

         QDFKWTDSPAU_t DSPAU;

       }WDFKWTDSPPFU;

       _Packed union             {

         short WDFKWTALGN;            /* Buffer displacement to the    */
                                      /* field that contains the       */
                                      /* alignment.                    */
         QDFKWTALIGNU_t LIGNU;


       }WDFKWTALGNU;

       short WDFKWTTXTO;              /* Buffer displacement to the    */
                                      /* field that contains the text  */
                                      /* if variable WDFKWTTXTF in     */
                                      /* this structure is on.         */
                                      /* Displacement is from          */
                                      /* structure QDFKWDWTTL.         */

       short WDFKWTTXTL;              /* Length of the text.           */

       char RESERVED_71[10];          /* Reserved.                     */

     /*char WDFKWTTEXT[]; */          /* Text if entered on the        */
                                      /* parameter as a literal.       */

  }  QDFKWDWTTL_t;



  typedef _Packed struct QDFKMB {     /* Mouse Button Structure        */
                                      /* (QDFKMB) Mouse button         */
                                      /* structure.  This structure is */
                                      /* defined at variable WDFKMPEX  */
                                      /* in structure QDFKMRWP.        */

       struct WDFKMBFLAGS {           /* Miscellaneous flags that      */
                                      /* describe the type of          */
                                      /* information provided by this  */
                                      /* mouse button keyword.         */

         unsigned WDFKMBTYPE:1;       /* 1 indicates two event mouse   */
                                      /* button definition.  0         */
                                      /* indicates single event mouse  */
                                      /* button definition.            */

         unsigned WDFKMBTCSR:1;       /* 1 indicates move text cursor  */
                                      /* to mouse cursor.  0 indicates */
                                      /* do not move text cursor to    */
                                      /* mouse cursor.                 */

         unsigned WDFKMBQUE:1;        /* 1 indicates queue if keyboard */
                                      /* locked.  0 indicates do not   */
                                      /* queue if keyboard locked.     */

         unsigned WDFKMBKRB:1;        /* 1 indicates marker box drawn. */
                                      /* 0 indicates marker box not    */
                                      /* drawn.                        */

         unsigned RESERVED_72:4;      /* Reserved.                     */

       }WDFKMBFLAGS;

       char WDFKMBFIRST;              /* Value for first event ID.     */
                                      /* X'01' indicates left button   */
                                      /* pressed, X'02' indicates left */
                                      /* button released, X'03'        */
                                      /* indicates left button         */
                                      /* double-clicked, X'04'         */
                                      /* indicates right button        */
                                      /* pressed, X'05' indicates      */
                                      /* right button released, X'06'  */
                                      /* indicates right button        */
                                      /* double-clicked, X'07'         */
                                      /* indicates middle button       */
                                      /* pressed, X'08' indicates      */
                                      /* middle button released, X'09' */
                                      /* indicates middle button       */
                                      /* double-clicked, X'0A'         */
                                      /* indicates shift left button   */
                                      /* pressed, X'0B' indicates      */
                                      /* shift left button released,   */
                                      /* X'0C' indicates shift left    */
                                      /* button double-clicked, X'0D'  */
                                      /* indicates shift right button  */
                                      /* pressed, X'0E' indicates      */
                                      /* shift right button released,  */
                                      /* X'0F' indicates shift right   */
                                      /* button double-clicked, X'10'  */
                                      /* indicates shift middle button */
                                      /* pressed, X'11' indicates      */
                                      /* shift middle button released, */
                                      /* and X'12' indicates shift     */
                                      /* middle button double-clicked. */

       char WDFKMBSECOND;             /* Value for second event ID.    */
                                      /* X'01' indicates left button   */
                                      /* pressed, X'02' indicates left */
                                      /* button released, X'03'        */
                                      /* indicates left button         */
                                      /* double-clicked, X'04'         */
                                      /* indicates right button        */
                                      /* pressed, X'05' indicates      */
                                      /* right button released, X'06'  */
                                      /* indicates right button        */
                                      /* double-clicked, X'07'         */
                                      /* indicates middle button       */
                                      /* pressed, X'08' indicates      */
                                      /* middle button released, X'09' */
                                      /* indicates middle button       */
                                      /* double-clicked, X'0A'         */
                                      /* indicates shift left button   */
                                      /* pressed, X'0B' indicates      */
                                      /* shift left button released,   */
                                      /* X'0C' indicates shift left    */
                                      /* button double-clicked, X'0D'  */
                                      /* indicates shift right button  */
                                      /* pressed, X'0E' indicates      */
                                      /* shift right button released,  */
                                      /* X'0F' indicates shift right   */
                                      /* button double-clicked, X'10'  */
                                      /* indicates shift middle button */
                                      /* pressed, X'11' indicates      */
                                      /* shift middle button released, */
                                      /* and X'12' indicates shift     */
                                      /* middle button double-clicked. */

       char WDFKMBAID;                /* AID code to be returned.      */
                                      /* X'31' through X'3C' indicates */
                                      /* CA/CF01-12, X'70' through     */
                                      /* X'7F' indicates E00-E15,      */
                                      /* X'B1' through X'BC' indicates */
                                      /* CA/CF13-24, X'BD' indicates   */
                                      /* CLEAR, X'F1' indicates ENTER, */
                                      /* X'F3' indicates HELP, X'F4'   */
                                      /* indicates Roll Down, X'F5'    */
                                      /* indicates Roll Up, X'F6'      */
                                      /* indicates Print, and X'F8'    */
                                      /* indicates Home.               */

  }  QDFKMB_t;



  typedef _Packed struct QDFKSCSF {   /* SFL Keyword Structure         */
                                      /* (QDFKSCSF) SFL keyword        */
                                      /* structure.  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of the appropriate  */
                                      /* section (file, record, or     */
                                      /* field) is at variable         */
                                      /* WDFFCAOF in structure         */
                                      /* QDFFCCOA.                     */

       short WDFKSCS;                 /* Number of keywords to follow. */

     /*char WDFKSCSE[];   */          /* SFL keyword entries (see      */
                                      /* structure QDFKSCCP).          */

  }  QDFKSCSF_t;



  typedef _Packed struct QDFKSCCP {   /* SFL Keyword Entry (QDFKSCCP)  */
                                      /* SFL keyword entry.  This      */
                                      /* structure is defined at       */
                                      /* variable WDFKSCSE in          */
                                      /* structure QDFKSCSF.           */

       char WDFKSCID;                 /* Keyword ID.                   */

       short WDFKSCIN;                /* Index into selection table.   */
                                      /* 1 indicates not optioned.     */

     /*char WDFKSCEX[];   */          /* Extra remaining portion of    */
                                      /* this category.                */

  }  QDFKSCCP_t;



  typedef _Packed struct QDFKSCSM {   /* SFLMSG and SFLMSGID Keyword   */
                                      /* Structure (QDFKSCSM)          */
                                      /* Structure for SFLMSG and      */
                                      /* SFLMSGID keywords.  Use this  */
                                      /* structure for a category 18   */
                                      /* keyword that has a keyword ID */
                                      /* of X'0D' or X'0E'.  This      */
                                      /* structure is defined at       */
                                      /* variable WDFKSCEX in          */
                                      /* structure QDFKSCCP.           */

       short WDFKSCRS;                /* Response indicator minus one  */
                                      /* for files with INDARA         */
                                      /* keyword.  Response indicator  */
                                      /* input buffer displacement for */
                                      /* those without INDARA keyword. */
                                      /* In either case, -1 represents */
                                      /* no response indicator is      */
                                      /* specified.  For SFLMSGID,     */
                                      /* this field contains           */
                                      /* hexadecimal zeros.            */

       char WDFKSCTY;                 /* Parameter type (for SFLMSG).  */
                                      /* X'00' indicates character,    */
                                      /* X'08' indicates DBCS.         */

       short WDFKSCLN;                /* Length of data to follow.     */

     /*char WDFKSCTX[];   */          /* Parameters of text or data.   */

  }  QDFKSCSM_t;



  typedef _Packed struct QDFKSCSI {   /* SFLMSGID Keyword Structure    */
                                      /* (QDFKSCSI) SFLMSGID keyword   */
                                      /* structure.  Use this          */
                                      /* structure for a category 18   */
                                      /* keyword that has a keyword ID */
                                      /* of X'0E'.  The first three    */
                                      /* fields are specified.  If the */
                                      /* user does not specify a       */
                                      /* library, *LIBL is the         */
                                      /* default.  This structure is   */
                                      /* defined at variable WDFKSCTX  */
                                      /* in structure QDFKSCSM.        */

       char WDFKSCMI[7];              /* Message ID.                   */

       char WDFKSCMF[10];             /* Message file name.            */

       char WDFKSCML[10];             /* Message library name.         */

       short WDFKSCDL;                /* Message data field length.    */

       short WDFKSCMO;                /* Output buffer displacement to */
                                      /* message data field.           */

  }  QDFKSCSI_t;



  typedef _Packed struct QDFKSFLM {   /* SFLEND(*MORE) Keyword         */
                                      /* Structure (QDFKSFLM)          */
                                      /* SFLEND(*MORE) keyword         */
                                      /* structure.  Use this          */
                                      /* structure for a category 18   */
                                      /* keyword that has a keyword ID */
                                      /* of X'0F'.  This structure is  */
                                      /* defined at variable WDFKSCEX  */
                                      /* in structure QDFKSCCP.        */

       char WDFKMORE[12];             /* Text to be used for More.     */

       char WDFKBOTT[12];             /* Text to be used for Bottom.   */

  }  QDFKSFLM_t;



  typedef _Packed struct QDFKSFLS {   /* SFLEND(*SCRBAR) Keyword       */
                                      /* Structure (QDFKSFLS)          */
                                      /* SFLEND(*SCRBAR) keyword       */
                                      /* structure.  Use this          */
                                      /* structure for a category 18   */
                                      /* keyword that has a keyword ID */
                                      /* of X'12'.  This structure is  */
                                      /* defined at variable WDFKSCEX  */
                                      /* in structure QDFKSCCP.        */

       char WDFKSFLENDSPM;            /* Second parameter value for    */
                                      /* SFLEND(*SCRBAR).  X'00'       */
                                      /* indicates *SCRBAR, X'01'      */
                                      /* indicates *MORE, and X'02'    */
                                      /* indicates *PLUS.              */

       char WDFKSFLMORE[12];          /* Text to be used for More...   */

       char WDFKSFLBOTT[12];          /* Text to be used for Bottom.   */

  }  QDFKSFLS_t;



  typedef _Packed struct QDFKCSRRRN { /* SFLCSRRRN Keyword Structure   */
                                      /* (QDFKCSRRRN) SFLCSRRRN        */
                                      /* keyword structure.  Use this  */
                                      /* structure for a category 18   */
                                      /* keyword that has a keyword ID */
                                      /* of X'10'.  This structure is  */
                                      /* defined at variable WDFKSCEX  */
                                      /* in structure QDFKSCCP.        */

       short WDFKCSRNO;               /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* containing the subfile        */
                                      /* relative record number of     */
                                      /* where the cursor is located.  */

  }  QDFKCSRRRN_t;



  typedef _Packed struct QDFKMODE {   /* SFLMODE Keyword Structure     */
                                      /* (QDFKMODE) SFLMODE keyword    */
                                      /* structure.  Use this          */
                                      /* structure for a category 18   */
                                      /* keyword that has a keyword ID */
                                      /* of X'11'.  This structure is  */
                                      /* defined at variable WDFKSCEX  */
                                      /* in structure QDFKSCCP.        */

       short WDFKSCMDO;               /* Displacement into input       */
                                      /* buffer to the hidden field    */
                                      /* containing the mode of the    */
                                      /* subfile.  If set to 0, the    */
                                      /* MODE keyword was not          */
                                      /* specified.                    */

  }  QDFKMODE_t;



  typedef _Packed struct QDFKSASA {   /* Screen Attribute Keyword      */
                                      /* Structure (QDFKSASA)          */
                                      /* Structure for screen          */
                                      /* attribute keywords.  The      */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of the appropriate section    */
                                      /* (file, record, or field) is   */
                                      /* at variable WDFFCAOF in       */
                                      /* structure QDFFCCOA.           */

       short WDFKSAS;                 /* Number of keyword entries to  */
                                      /* follow.                       */

     /*char WDFKSASE[];   */          /* Screen attribute keywords     */
                                      /* (see structure QDFKSAPM).     */

  }  QDFKSASA_t;



  typedef _Packed struct QDFKSAPM {   /* Screen Attribute Keyword      */
                                      /* Array (QDFKSAPM) Array of     */
                                      /* screen attribute keywords.    */
                                      /* This structure is defined at  */
                                      /* variable WDFKSASE in          */
                                      /* structure QDFKSASA.  The      */
                                      /* structure is ARRAY(*).        */

       char WDFKSAIA;                 /* Keyword ID.                   */

       short WDFKSAII;                /* Index into selection table.   */
                                      /* For color keywords, 1         */
                                      /* indicates keyword is not      */
                                      /* optioned.  Unoptioned DSPATR  */
                                      /* keywords are not in this      */
                                      /* category but are indicated in */
                                      /* the screen attribute variable */
                                      /* WDFFSA in structure QDFFFDPD. */

       char WDFKSAOA;                 /* OR value color.  X'20'        */
                                      /* indicates GRN, X'22'          */
                                      /* indicates WHT, X'28'          */
                                      /* indicates RED, X'30'          */
                                      /* indicates TRQ, X'32'          */
                                      /* indicates YLW, X'38'          */
                                      /* indicates PNK, and X'3A'      */
                                      /* indicates BLU.  DSPATR.       */
                                      /* X'30' indicates CS, X'28'     */
                                      /* indicates BL, X'24' indicates */
                                      /* UL, X'22' indicates HI, X'21' */
                                      /* indicates RI, and X'27'       */
                                      /* indicates ND.                 */

  }  QDFKSAPM_t;



  typedef _Packed struct QDFKFFWR {   /* FFW and FCW Keyword Structure */
                                      /* (QDFKFFWR) Structure for      */
                                      /* field format word (FFW) and   */
                                      /* field control word (FCW)      */
                                      /* keywords.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of the section is   */
                                      /* an entry in the table at      */
                                      /* variable WDFFCAOF in          */
                                      /* structure QDFFCCOA.           */

       short WDFKFWS;                 /* Number of keywords to follow. */

     /*char WDFKFWEN[];   */          /* FFW keyword entries (see      */
                                      /* structure QDFKCHKP).          */

  }  QDFKFFWR_t;



  typedef _Packed struct QDFKCHKP {   /* FFW Keyword Structure         */
                                      /* (QDFKCHKP) Structure for      */
                                      /* FFW-related keywords.  Use    */
                                      /* this structure for category   */
                                      /* 21 keywords that have keyword */
                                      /* IDs of X'01', X'02', X'03',   */
                                      /* X'04', and X'05'.  This       */
                                      /* structure is defined at       */
                                      /* variable WDFKFWEN in          */
                                      /* structure QDFKFFWR.  The      */
                                      /* structure is ARRAY(*).        */

       char WDFKFWID;                 /* Keyword ID.                   */

       short WDFKFWIN;                /* Index into selection table.   */
                                      /* 1 indicates keyword is not    */
                                      /* optioned.  Keywords DSPATR(PR */
                                      /* | MDT), DUP, AUTO(RA), and    */
                                      /* CHECK(ME), which are not      */
                                      /* optioned, are not in this     */
                                      /* category but are indicated in */
                                      /* the FFW WDFFFWFW variable in  */
                                      /* structure QDFFFDIC.           */

       char WDFKFWOV[2];              /* OR value for FFW.  X'6000'    */
                                      /* indicates DSPATR(PR), X'5000' */
                                      /* indicates DUP, X'4800'        */
                                      /* indicates DSPATR(MDT),        */
                                      /* X'4080' indicates AUTO(RA),   */
                                      /* X'4008' indicates CHECK(ME).  */

  }  QDFKCHKP_t;



  typedef _Packed struct QDFKMFDK {   /* Miscellaneous Field-Level     */
                                      /* Keyword Structure (QDFKMFDK)  */
                                      /* Miscellaneous field-level     */
                                      /* keywords.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of the appropriate  */
                                      /* section (file, record, or     */
                                      /* field) is at variable         */
                                      /* WDFFCAOF in structure         */
                                      /* QDFFCCOA.                     */

       short WDFKMFS;                 /* Number of keywords to follow. */

       short WDFKMFNO;                /* Index into field index table  */
                                      /* of next field that has either */
                                      /* ERRMSG or ERRMSGID.  0, if    */
                                      /* this the last one in the      */
                                      /* record or none exist.         */

     /*char WDFKMFEN[];   */          /* Field-level keyword entry     */
                                      /* (see structure QDFKMFDP).     */

  }  QDFKMFDK_t;



  typedef _Packed struct QDFKMFDP {   /* Field-Level Keyword Structure */
                                      /* (QDFKMFDP) Field-level        */
                                      /* keyword parameters.  The      */
                                      /* number of keyword parameters  */
                                      /* is contained in variable      */
                                      /* WDFKMFS in structure          */
                                      /* QDFKMFDK.  This structure is  */
                                      /* defined at variable WDFKMFEN  */
                                      /* in structure QDFKMFDK.        */

       char WDFKMFID;                 /* Keyword ID.                   */

       short WDFKMFIN;                /* Index into selection table    */
                                      /* table.  1 indicates keyword   */
                                      /* is not optioned.              */

     /*char WDFKMFEX[];   */          /* Extra remaining portion of    */
                                      /* this category.                */

  }  QDFKMFDP_t;



  typedef _Packed struct QDFKMFRS {   /* Response Indicator Structure  */
                                      /* (QDFKMFRS) Response           */
                                      /* indicator.  This structure is */
                                      /* defined at variable WDFKMFEX  */
                                      /* in structure QDFKMFDP.        */

       short WDFKMFRP;                /* Response indicator minus one  */
                                      /* for files with INDARA         */
                                      /* keyword.  Response indicator  */
                                      /* input buffer displacement for */
                                      /* those without INDARA.  In     */
                                      /* either case, -1 represents no */
                                      /* response indicator specified. */
                                      /* For ERRMSGID, this field      */
                                      /* contains hexadecimal zeros.   */

     /*char WDFKMFEE[];   */          /* ERRMSG and ERRMSGID data.     */

  }  QDFKMFRS_t;



  typedef _Packed struct QDFKMFEM {   /* ERRMSG and ERRMSGID Keyword   */
                                      /* Structure (QDFKMFEM)          */
                                      /* Structure for ERRMSG and      */
                                      /* ERRMSGID keywords.  Use this  */
                                      /* structure for category 22     */
                                      /* keywords that have keyword    */
                                      /* IDs of X'15' and X'16'.  This */
                                      /* structure is defined at       */
                                      /* variable WDFKMFEE in          */
                                      /* structure QDFKMFRS.           */

       char WDFKMFTP;                 /* Type of parameter (for        */
                                      /* ERRMSG).  X'00' indicates     */
                                      /* character, X'08' indicates    */
                                      /* DBCS.                         */

       short WDFKMFEL;                /* Length of data to follow.     */

     /*char WDFKMFTX[];   */          /* ERRMSG and ERRMSGID data.     */

  }  QDFKMFEM_t;



  typedef _Packed struct QDFKMFSI {   /* ERRMSGID Keyword Structure    */
                                      /* (QDFKMFSI) ERRMSGID keyword   */
                                      /* structure.  Use this          */
                                      /* structure for category 22     */
                                      /* keywords that have a keyword  */
                                      /* ID of X'16'.  The first three */
                                      /* fields are specified.  If the */
                                      /* user does not specify         */
                                      /* library, *LIBL is the         */
                                      /* default.  This structure is   */
                                      /* defined at variable WDFKMFTX  */
                                      /* in structure QDFKMFEM.        */

       char WDFKMFMI[7];              /* Message ID.                   */

       char WDFKMFMF[10];             /* Message file name.            */

       char WDFKMFML[10];             /* Message library name.         */

       short WDFKMFDL;                /* Message data field length.    */

       short WDFKMFMO;                /* Output buffer displacement to */
                                      /* message data field.           */

  }  QDFKMFSI_t;



  typedef _Packed struct QDFKMFMV {   /* MSGID Keyword Common          */
                                      /* Structure (QDFKMFMV) MSGID    */
                                      /* keyword structure.  Use this  */
                                      /* structure for category 22     */
                                      /* keywords that have a keyword  */
                                      /* ID of X'10'.  This structure  */
                                      /* is defined at variable        */
                                      /* WDFKMFEX in structure         */
                                      /* QDFKMFDP.                     */

       char WDFKMFMM;                 /* Mode of MSGID keyword.  X'01' */
                                      /* indicates prefix specified,   */
                                      /* X'02' indicates no prefix     */
                                      /* specified, X'03' indicates    */
                                      /* constant message ID, and      */
                                      /* X'04' indicates none.  For    */
                                      /* mode 1 or 2, use this         */
                                      /* structure.  For mode 3, use   */
                                      /* structure QDFKMFM3.  For mode */
                                      /* 4, use structure QDFKMFM4.    */

       char WDFKMFMP[3];              /* Message prefix.  This field   */
                                      /* contains hexadecimal zeros    */
                                      /* when variable WDFKMFMM in     */
                                      /* this structure equals X'02'.  */
                                      /* When WDFKMFMM equals X'03',   */
                                      /* this field is the same value  */
                                      /* as variable WDFKMF1 in        */
                                      /* structure QDFKMFM3.           */

       short WDFKMFFL;                /* Message file length.  This is */
                                      /* the length of the field that  */
                                      /* contains the message file     */
                                      /* name.  This field is not set  */
                                      /* when the file is a constant   */
                                      /* or special value.             */

       char WDFKMFFV[10];             /* Message file name set when a  */
                                      /* constant or special value is  */
                                      /* specified for the message     */
                                      /* file.                         */

       char WDFKMFLV[10];             /* Message file library name set */
                                      /* when a constant or no library */
                                      /* is specified for the message  */
                                      /* file.                         */

     /*short WDFKMFB[3][]; */         /* Three output buffer           */
                                      /* displacements to the fields   */
                                      /* in the following order: (1)   */
                                      /* MSGID field, (2) message file */
                                      /* field, and (3) message        */
                                      /* library field.  For message   */
                                      /* file or message library,      */
                                      /* X'FFFF' indicates constants.  */
                                      /* When variable WDFKMFMM equals */
                                      /* X'03', the MSGID field equals */
                                      /* X'FFFF'.                      */

     /*long int WDFKMFNT[3][]; */     /* Indexes to a field in         */
                                      /* structure QDFFNTB in the same */
                                      /* order as variable WDFKMFB in  */
                                      /* this structure.  If not       */
                                      /* specified, set to hexadecimal */
                                      /* zeros.                        */

     /*char WDFKMFMX[];   */          /* Extension for type three      */
                                      /* MSGID keyword structure (only */
                                      /* when variable WDFKMFMM equals */
                                      /* X'03').                       */

  }  QDFKMFMV_t;



  typedef _Packed struct QDFKMFM3 {   /* Type Three MSGID Keyword      */
                                      /* Structure (QDFKMFM3)          */
                                      /* Structure for MSGID keyword   */
                                      /* when variable WDFKMFMM in     */
                                      /* structure QDFKMFMV equals     */
                                      /* X'03'.  This structure is     */
                                      /* defined at variable WDFKMFMX  */
                                      /* in structure QDFKMFMV.        */

                                      /* Constant message number.      */
       char WDFKMF1[3];               /* Message prefix (same as       */
                                      /* WDFKMFMP in structure         */
                                      /* QDFKMFMV).                    */

       char WDFKMF2[4];               /* Message ID.                   */

  }  QDFKMFM3_t;



  typedef _Packed struct QDFKMFM4 {   /* Type Four MSGID Keyword       */
                                      /* Structure (QDFKMFM4)          */
                                      /* Structure for MSGID(*NONE)    */
                                      /* keyword when variable         */
                                      /* WDFKMFMM in structure         */
                                      /* QDFKMFMV equals X'04'.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFKMFEX in          */
                                      /* structure QDFKMFDP.           */

       char WDFKMFD4;                 /* Mode of MSGID keyword.        */
                                      /* MSGID(*NONE) equals X'04'.    */

  }  QDFKMFM4_t;


  typedef _Packed struct QDFKDFLD {   /* DSPATR Keyword Structure      */
                                      /* (QDFKDFLD) DSPATR keyword     */
                                      /* structure.  Use this          */
                                      /* structure for a category 22   */
                                      /* keyword that has a keyword ID */
                                      /* of X'17'.  This structure is  */
                                      /* defined at variable WDFKMFEX  */
                                      /* in structure QDFKMFDP.        */

       short WDFKDFLO;                /* Displacement to attribute     */
                                      /* field.                        */

  }  QDFKDFLD_t;


  typedef _Packed struct QDFKDTFT {   /* DATFMT and TIMFMT keyword     */
                                      /* structure.  Use this          */
                                      /* structure for a category 22   */
                                      /* keyword that has a keyword ID */
                                      /* of X'18'.  This structure is  */
                                      /* defined at variable WDFKMFEX  */
                                      /* in structure QDFKMFDP.    @A2A*/

       short WDFKDTFT;                /* DATFMT and TIMFMT formats:    */
                                      /* X'01' indicates *JOB          */
                                      /* X'02' indicates *MDY          */
                                      /* X'03' indicates *DMY          */
                                      /* X'04' indicates *YMD          */
                                      /* X'05' indicates *JUL          */
                                      /* X'06' indicates *ISO          */
                                      /* X'07' indicates *USA          */
                                      /* X'08' indicates *EUR          */
                                      /* X'09' indicates *JIS          */
                                      /* X'0A' indicates *HMS          */

  }  QDFKDTFT_t;


  typedef _Packed struct QDFKDTSP {   /* DATSEP and TIMSEP keyword     */
                                      /* structure.  Use this          */
                                      /* structure for a category 22   */
                                      /* keyword that has a keyword ID */
                                      /* of X'19'.  This structure is  */
                                      /* defined at variable WDFKMFEX  */
                                      /* structure is defined at       */
                                      /* in structure QDFKMFDP.    @A2A*/

       char WDFKDTSP;                 /* DATSEP and TIMSEP separators. */

  }  QDFKDTSP_t;


  typedef _Packed struct QDFKDATP {   /* DATE keyword with parms.      */
                                      /* Use this                      */
                                      /* structure for a category 22   */
                                      /* keyword that has a keyword ID */
                                      /* of X'1A'.  This structure is  */
                                      /* defined at variable WDFKMFEX  */
                                      /* in structure QDFKMFDP.    @A2A*/

       struct WDFKDATP {              /* Miscellaneous flags.          */

         unsigned WDFKDATESYS:1;      /* If on, *SYS was specified.    */

         unsigned WDFKDATEYY:1;       /* If on, *YY was specified.     */

         unsigned WDFKDATEEDTY:1;     /* If on, EDTCDE(Y) was specified*/

         unsigned RESERVEDDATP:5;     /* Reserved.                     */

       }WDFKDATP;

  }  QDFKDATP_t;


  typedef _Packed struct QDFKMPVL {   /* MAPVAL keyword                */
                                      /* structure.  Use this          */
                                      /* structure for a category 22   */
                                      /* keyword that has a keyword ID */
                                      /* of X'1B'.  This structure is  */
                                      /* defined at variable WDFKMFEX  */
                                      /* in structure QDFKMFDP.    @A2A*/

       short WDFKMPVLCT;              /* Number of MAPVAL parms.       */

       short WDFKMPVLLN;              /* Length of each MAPVAL parm.   */

     /*char WDFKMPVLLIST[];   */      /* List of MAPVAL parms.         */

  }  QDFKMPVL_t;


  typedef _Packed struct QDFKDFT {    /* Category 23 Keyword Structure */
                                      /* (QDFKDFT) Category 23 keyword */
                                      /* structure.  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of the appropriate  */
                                      /* section (file, record, or     */
                                      /* field) is at variable         */
                                      /* WDFFCAOF in structure         */
                                      /* QDFFCCOA.                     */

       short WDFKDFS;                 /* Number of keywords to follow. */

     /*char WDFKDFPE[];   */          /* Category 23 parameter entries */
                                      /* (see structure QDFKDFPM).     */

  }  QDFKDFT_t;



  typedef _Packed struct QDFKDFPM {   /* Category 23 Keyword           */
                                      /* Parameters (QDFKDFPM)         */
                                      /* Category 23 keyword           */
                                      /* parameters.  This structure   */
                                      /* is defined at variable        */
                                      /* WDFKDFPE in structure         */
                                      /* QDFKDFT.  Displacements to    */
                                      /* subsequent entries are        */
                                      /* calculated using variable     */
                                      /* WDFKDFLN in this structure.   */
                                      /* The structure is ARRAY(*).    */

       char WDFKDFID;                 /* Keyword ID.                   */

       char WDFKDFTY;                 /* Parameter type.  X'00'        */
                                      /* indicates character, X'03'    */
                                      /* indicates graphic literal,    */
                                      /* and X'08' indicates DBCS.     */

       short WDFKDFIN;                /* Index into selection table.   */
                                      /* 1 indicates keyword is not    */
                                      /* optioned.                     */

       short WDFKDFLN;                /* Length of data to follow.     */
                                      /* For the MSGCON keyword, this  */
                                      /* value is only the length of   */
                                      /* the message text.             */

     /*char WDFKDFDF[];   */          /* Parameter for MSGCON keyword. */

  }  QDFKDFPM_t;



  typedef _Packed struct QDFKDFMM {   /* MSGCON Keyword Structure      */
                                      /* (QDFKDFMM) MSGCON keyword     */
                                      /* structure.  Use this          */
                                      /* structure for a category 23   */
                                      /* keyword that has a keyword ID */
                                      /* of X'02'.  All three fields   */
                                      /* are specified.  This          */
                                      /* structure is defined at       */
                                      /* variable WDFKDFDF in          */
                                      /* structure QDFKDFPM.           */

       char WDFKDFMI[7];              /* Message ID.                   */

       char WDFKDFMF[10];             /* Message file name.            */

       char WDFKDFML[10];             /* Message file library name.    */
                                      /* If the user does not specify  */
                                      /* library, *LIBL is the         */
                                      /* default.                      */

  }  QDFKDFMM_t;



  typedef _Packed struct QDFKDFHTML { /* HTML Keyword Structure        */
                                      /* (QDFKDFHTML) HTML keyword     */
                                      /* structure.  Use this          */
                                      /* structure for a category 23   */
                                      /* keyword that has a keyword ID */
                                      /* of X'04'.  All five fields   */
                                      /* are specified.  This          */
                                      /* structure is defined at       */
                                      /* variable WDFKDFDF in          */
                                      /* structure QDFKDFPM.       @A1A*/

       struct WDFKDFHFLAG {           /* miscellaneous HTML flags  @A1A*/

         unsigned WDFKDFHPFLD:1;      /* If on, then a program-to-     */
                                      /* system field was specified    */
                                      /* with the HTML keyword.    @A1A*/

         unsigned RESERVED_121:7;     /* Reserved                  @A1A*/

       }WDFKDFHFLAG;

       short WDFKDFHLEN;              /* Length of Hyper Text Markup   */
                                      /* Language text string or       */
                                      /* program-to-system field       */
                                      /* length.                   @A1A*/

       short WDFKDFHOFF;              /* Offset to the program-to-     */
                                      /* system field from the start   */
                                      /* of the output buffer.     @A1A*/

       char WDFKDFHTMLTEXT;           /* Hyper Text Markup Language    */
                                      /* text string.  The length of   */
                                      /* this field is given in        */
                                      /* WDFKDFHLEN.               @A1A*/

  }  QDFKDFHTML_t;



 typedef _Packed struct QDFKEDTR {   /* EDIT Keyword Structure        */
                                      /* (QDFKEDTR) Structure for      */
                                      /* editing date and time type    */
                                      /* keywords.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of the appropriate  */
                                      /* section (file, record, and    */
                                      /* field) is at variable         */
                                      /* WDFFCAOF in structure         */
                                      /* QDFFCCOA.                     */

       short WDFKEDS;                 /* Number of keywords to follow. */

     /*char WDFKEDKW[];   */          /* EDIT keyword parameters (see  */
                                      /* structure QDFKEDTP).          */

  }  QDFKEDTR_t;



  typedef _Packed struct QDFKEDTP {   /* EDIT Keyword Structure        */
                                      /* (QDFKEDTP) EDIT keyword       */
                                      /* structure.  Use this          */
                                      /* structure for category 24     */
                                      /* keywords that have keyword    */
                                      /* IDs of X'01' and X'02'.  This */
                                      /* structure is defined at       */
                                      /* variable WDFKEDKW in          */
                                      /* structure QDFKEDTR.  The      */
                                      /* structure is ARRAY(*).        */

       char WDFKEDID;                 /* Keyword ID.                   */

       char WDFKEDSY;                 /* Zero suppress or fill         */
                                      /* character for the EDTCDE      */
                                      /* keyword.                      */

       short WDFKEDML;                /* Length of the edit mask.      */

       char RESERVED_73;              /* Reserved.                     */

     /*char WDFKEDMS[];   */          /* The edit mask for the EDTCDE  */
                                      /* and EDTWRD keywords.          */

  }  QDFKEDTP_t;



  typedef _Packed struct QDFKVAKW {   /* Validity Checking Keyword     */
                                      /* Structure (QDFKVAKW)          */
                                      /* Structure for                 */
                                      /* validity-checking type        */
                                      /* keywords.  The displacement   */
                                      /* to this structure from the    */
                                      /* beginning of the appropriate  */
                                      /* section (file, record, or     */
                                      /* field) is at variable         */
                                      /* WDFFCAOF in structure         */
                                      /* QDFFCCOA.                     */

       short WDFKVAL;                 /* Number of validity checking   */
                                      /* structures to follow.  This   */
                                      /* value is 1.  If the CHKMSGID  */
                                      /* keyword is present, variable  */
                                      /* WDFKCMID in structure         */
                                      /* QDFKVARL is set on and        */
                                      /* structure QDFKCKMI is         */
                                      /* present.                      */

     /*char WDFKVACK[];   */          /* Validity checking keywords    */
                                      /* (see structure QDFKVARL).     */

  }  QDFKVAKW_t;



  typedef _Packed struct QDFKVARL {   /* Validity Checking Keywords    */
                                      /* (QDFKVARL) Validity-checking  */
                                      /* type keywords.  Use this      */
                                      /* structure for category 25     */
                                      /* keywords that have keyword    */
                                      /* IDs of X'01' through X'11'    */
                                      /* This structure is defined at  */
                                      /* variable WDFKVACK in          */
                                      /* structure QDFKVAKW.           */

       struct WDFKVALC {              /* Miscellaneous flags.          */

         unsigned WDFKM10F:1;         /* If on, CHECK(M10F) keyword is */
                                      /* specified.                    */

         unsigned WDFKM11F:1;         /* If on, CHECK(M11F) keyword is */
                                      /* specified.                    */

         unsigned WDFKCHVN:1;         /* If on, CHECK(VN) keyword is   */
                                      /* specified.                    */

         unsigned WDFKCHVE:1;         /* If on, CHECK(VNE) keyword is  */
                                      /* specified.                    */

         unsigned WDFKCMID:1;         /* If on, CHKMSGID keyword is    */
                                      /* specified.  The structure     */
                                      /* QDFKCKMI is present.          */

         unsigned WDFKM10:1;          /* If on, CHECK(M10) keyword is  */
                                      /* specified.                    */

         unsigned WDFKM11:1;          /* If on, CHECK(M11) keyword is  */
                                      /* specified.                    */

         unsigned RESERVED_74:1;      /* Reserved.                     */

       }WDFKVALC;

       struct WDFKVALB {              /* Flags for CMP, RANGE, and     */
                                      /* VALUE keywords.               */

         unsigned WDFKVAL:4;          /* B'0000' indicates NONE,       */
                                      /* B'0001' indicates RANGE,      */
                                      /* B'0010' indicates VALUE,      */
                                      /* B'0011' indicates CMP(GT),    */
                                      /* B'0100' indicates CMP(GE or   */
                                      /* NL), B'0101' indicates        */
                                      /* CMP(EQ), B'0110' indicates    */
                                      /* CMP(NE), B'0111' indicates    */
                                      /* CMP(LE or NG), and B'1000'    */
                                      /* indicates CMP(LT).            */

         unsigned RESERVED_75:4;      /* Reserved.                     */

       }WDFKVALB;

       char RESERVED_76;              /* Reserved.                     */

       char WDFKVATP;                 /* Type of parameters.  If a     */
                                      /* parameter has graphic         */
                                      /* literals, this value is       */
                                      /* X'03'.  If any parameter has  */
                                      /* DBCS literals, this value is  */
                                      /* X'08'.  Otherwise, this field */
                                      /* contains 0.                   */

       short WDFKLAP;                 /* Number of parameters.         */

       short WDFKLATP;                /* Total length of parameters.   */
                                      /* (Each parameter length is     */
                                      /* WDFFPLEN; in structure        */
                                      /* QDFFFNAM.)                    */

     /*char WDFKAPRM[];   */          /* Validity checking keywords    */
                                      /* This structure is present if  */
                                      /* variable WDFKCMID in this     */
                                      /* structure is on.              */

  }  QDFKVARL_t;



  typedef _Packed struct QDFKCKMI {   /* CHKMSGID Keyword Structure    */
                                      /* (QDFKCKMI) CHKMSGID keyword   */
                                      /* structure.  This structure is */
                                      /* present if variable WDFKCMID  */
                                      /* in structure QDFKVARL is on.  */
                                      /* This structure is defined at  */
                                      /* variable WDFKAPRM in          */
                                      /* structure QDFKVARL.           */

       char WDFKCKMD[7];              /* Message identifier.           */

       char WDFKCKMF[10];             /* Message file name.            */

       char WDFKCKML[10];             /* Message file library name.    */

       short WDFKCKDL;                /* Message data length.  Length  */
                                      /* of field that contains        */
                                      /* message data name.  If no     */
                                      /* message data name exists,     */
                                      /* this is set to 0.             */

       short WDFKCKB;                 /* Output buffer displacement to */
                                      /* message data field.           */

  }  QDFKCKMI_t;



  typedef _Packed struct QDFKFCPR {   /* Field-Level CUA Keyword       */
                                      /* Structure (QDFKFCPR)          */
                                      /* Structure for field-level CUA */
                                      /* keywords with parameters.     */
                                      /* The displacement to this      */
                                      /* structure from the beginning  */
                                      /* of the appropriate section    */
                                      /* (file, record, or field) is   */
                                      /* at variable WDFFCAOF in       */
                                      /* structure QDFFCCOA.           */

       short WDFKFCS;                 /* Number of keywords to follow. */

     /*char WDFKFCKW[];   */          /* Field-level CUA keywords (see */
                                      /* structure QDFKFC).            */

  }  QDFKFCPR_t;



  typedef _Packed struct QDFKFC {     /* Field-Level CUA Keywords      */
                                      /* (QDFKFC) CUA keyword          */
                                      /* structure.  This structure is */
                                      /* defined at variable WDFKFCKW  */
                                      /* in structure QDFKFCPR.  The   */
                                      /* structure is ARRAY(*).        */

       char WDFKFCID;                 /* Keyword ID.                   */

       short WDFKFCIN;                /* Index into selection table.   */
                                      /* 1 indicates keyword is not    */
                                      /* optioned.                     */

       short WDFKFCLN;                /* Length of parameter for       */
                                      /* keyword.                      */

     /*char WDFKFCEX[];   */          /* Extra remaining portion for   */
                                      /* keywords.                     */

  }  QDFKFC_t;



  typedef _Packed struct QDFKCHC {    /* CHCFLD Keyword Structure      */
                                      /* (QDFKCHC) CHCFLD keyword      */
                                      /* structure.  Use this          */
                                      /* structure for a category 26   */
                                      /* keyword that has a keyword ID */
                                      /* of X'01'.  This structure is  */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       short WDFKCHCCT;               /* Number of choice entries to   */
                                      /* follow.                       */

       char WDFKCHCFN[10];            /* Name of the choice field.     */

                                      /* Maximum dimensions of the     */
                                      /* choice field.  Set only for   */
                                      /* single- and multiple-choice   */
                                      /* selection fields and          */
                                      /* push-button fields.           */

       short WDFKCHCR;                /* Maximum number of rows.       */

       short WDFKCHCC;                /* Maximum number of columns.    */

                                      /* Selection characters to be    */
                                      /* used for multiple-choice      */
                                      /* selection fields.             */

       char WDFKSELCHAR1;             /* First character to be used.   */

       char WDFKSELCHAR2;             /* Second character to be used.  */

       char RESERVED_77;              /* Reserved.                     */

     /*char WDFKCHCS[];   */          /* Choice entries.               */

  }  QDFKCHC_t;



  typedef _Packed struct QDFKCHCHDREXP {  /* CHCFLD Keyword Header     */
                                      /* Expansion Structure           */
                                      /* (QDFKCHCHDREXP) CHCFLD header */
                                      /* expansion structure.  This    */
                                      /* structure is defined at       */
                                      /* variable WDFKCHCS in          */
                                      /* structure QDFKCHC.            */

       short WDFKCHCEXPLEN;           /* Length of the CHCFLD header   */
                                      /* expansion area.               */

       short WDFKROWCOL;              /* Value with either the *NUMROW */
                                      /* or *NUMCOL parameter.  Valid  */
                                      /* only if variable WDFKHORIZ in */
                                      /* this structure is on.         */

       short WDFKGUTTER;              /* Value with the *GUTTER        */
                                      /* parameter.                    */

       struct WDFKFLAGS {             /* Miscellaneous flags to        */
                                      /* describe how the choice       */
                                      /* fields were specified.        */

         unsigned WDFKRSTCSR:1;       /* If on, *RSTCSR parameter is   */
                                      /* specified on the SNGCHCFLD,   */
                                      /* MLTCHCFLD, or PSHBTNFLD       */
                                      /* keyword.                      */

         unsigned WDFKNORSTCSR:1;     /* If on, *NORSTCSR parameter is */
                                      /* specified on the SNGCHCFLD,   */
                                      /* MLTCHCFLD, or PSHBTNFLD       */
                                      /* keyword.                      */

         unsigned RESERVED_78:1;      /* Reserved.                     */

         unsigned WDFKSLTIND:1;       /* If on, *SLTIND parameter is   */
                                      /* specified on the SNGCHCFLD or */
                                      /* MLTCHCFLD keyword.            */

         unsigned WDFKNORSTCSRA:1;    /* If on, *NOSLTIND parameter is */
                                      /* specified on the SNGCHCFLD or */
                                      /* MLTCHCFLD keyword.            */

         unsigned RESERVED_79:1;      /* Reserved.                     */

         unsigned WDFKAUTOSLT:1;      /* If on, *AUTOSLT parameter is  */
                                      /* specified on the SNGCHCFLD    */
                                      /* keyword.                      */

         unsigned WDFKAUTOSLTEN:1;    /* If on, *AUTOSLTENH parameter  */
                                      /* is specified on the SNGCHCFLD */
                                      /* keyword.                      */

         unsigned WDFKNOAUTOSLT:1;    /* If on, *NOAUTOSLT parameter   */
                                      /* is specified on the SNGCHCFLD */
                                      /* keyword.                      */

         unsigned WDFKHORIZ:1;        /* If on, *NUMCOL or *NUMROW     */
                                      /* parameter is specified on the */
                                      /* SNGCHCFLD, MLTCHCFLD, or      */
                                      /* PSHBTNFLD keyword.            */

         unsigned WDFKCOLMAJOR:1;     /* If on, *NUMCOL parameter is   */
                                      /* specified on the SNGCHCFLD,   */
                                      /* MLTCHCFLD, or PSHBTNFLD       */
                                      /* keyword.                      */

         unsigned WDFKAUTOENT:1;      /* If on, *AUTOENT parameter is  */
                                      /* specified on the SNGCHCFLD    */
                                      /* keyword.                      */

         unsigned WDFKAUTOENTNN:1;    /* If on, *AUTOENTNN parameter   */
                                      /* is specified on the SNGCHCFLD */
                                      /* keyword.                      */

         unsigned WDFKNOAUTOENT:1;    /* If on, *NOAUTOENT parameter   */
                                      /* is specified on the SNGCHCFLD */
                                      /* keyword.                      */

         unsigned WDFKGTTR:1;         /* If on, *GUTTER parameter is   */
                                      /* specified on the SNGCHCFLD,   */
                                      /* MLTCHCFLD, or PSHBTNFLD       */
                                      /* keyword.                      */

         unsigned RESERVED_80:1;      /* Reserved.                     */

       }WDFKFLAGS;

       char RESERVED_81[10];          /* Reserved.                     */

  }  QDFKCHCHDREXP_t;



  typedef _Packed struct QDFKCHCE {   /* Choice Entry Structure        */
                                      /* (QDFKCHCE) Choice entry       */
                                      /* structure.  Use this          */
                                      /* structure for a category 26   */
                                      /* keyword that has a keyword ID */
                                      /* of X'01'.  The number of      */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFKCHCCT */
                                      /* in structure QDFKCHC.  This   */
                                      /* structure is defined at       */
                                      /* variable WDFKCHCS in          */
                                      /* structure QDFKCHC.  The       */
                                      /* structure is ARRAY(*).        */

       char RESERVED_82;              /* Reserved.                     */

       short WDFKCLEN;                /* Length of this entry.         */
                                      /* Displacement to the           */
                                      /* subsequent choice entry.      */

       struct WDFKCFLG {              /* Flags for choice entry.       */

         unsigned WDFKCCTXT:1;        /* On indicates choice text      */
                                      /* structure is specified; off   */
                                      /* indicates choice text is in a */
                                      /* program-to-system field.      */

         unsigned WDFKCRTN:1;         /* If on, return control         */
                                      /* specified is set only for a   */
                                      /* menu bar choice.              */

         unsigned WDFKCSPC:1;         /* If on, *SPACEB parameter is   */
                                      /* specified on the CHOICE or    */
                                      /* PCHBTNCHC keyword.            */

         unsigned WDFKCPBC:1;         /* If on, command key specified  */
                                      /* on choice.                    */

         unsigned RESERVED_83:4;      /* Reserved.                     */

       }WDFKCFLG;

       char WDFKC[2];                 /* Choice number.                */

       short WDFKCINX26;              /* Index into selection string   */
                                      /* for this choice.              */

       short WDFKCTXTO;               /* Displacement to choice text.  */
                                      /* If variable WDFKCCTXT is on,  */
                                      /* this is a displacement to the */
                                      /* choice text structure (see    */
                                      /* structure QDFKCTXT) in the    */
                                      /* file.  If WDFKCCTXT is off,   */
                                      /* this is a buffer displacement */
                                      /* to the field containing the   */
                                      /* choice text.                  */

       short WDFKCTXTL;               /* Choice text length.  If       */
                                      /* choice text string is         */
                                      /* specified, this is the length */
                                      /* of the text including         */
                                      /* trailing blanks.  If choice   */
                                      /* text is a program-to-system   */
                                      /* field, this is the length of  */
                                      /* the program-to-system field.  */

       short WDFKCMSGO;               /* Displacement to CHCCTL        */
                                      /* keyword structure (see        */
                                      /* structure QDFKCMSG).  This is */
                                      /* set only for a selection      */
                                      /* field choice (single or       */
                                      /* multiple).  0 indicates no    */
                                      /* message is specified.         */

       short WDFKCACCO;               /* Displacement to the           */
                                      /* accelerator text structure    */
                                      /* (see structure QDFKCACC).  0  */
                                      /* indicates accelerator text is */
                                      /* not specified.                */

       _Packed union            {

         short WDFKCPRCD;             /* Name of pull-down record.     */
                                      /* Set only for a menu bar       */
                                      /* choice.                       */

         char WDFKCPBCAID;            /* AID code specified on the     */
                                      /* push button choice.  X'31'    */
                                      /* through X'3C' indicates       */
                                      /* CA/CF01-12, X'70' through     */
                                      /* X'7F' indicates E00-E15,      */
                                      /* X'B1' through X'BC' indicates */
                                      /* CA/CF13-24, X'BD' indicates   */
                                      /* CLEAR, X'F1' indicates ENTER, */
                                      /* X'F3' indicates HELP, X'F4'   */
                                      /* indicates Roll Down, X'F5'    */
                                      /* indicates Roll Up, X'F6'      */
                                      /* indicates Print, and X'F8'    */
                                      /* indicates Home.               */

       }WDFKCPRCDU;

       short WDFKCRTNO;               /* Buffer displacement to the    */
                                      /* menu bar return field (see    */
                                      /* structure QDFKMBSEPS).  a     */
                                      /* menu bar choice.  -1          */
                                      /* indicates no return field is  */
                                      /* specified.                    */

       short WDFKCRTNL;               /* Length of the return field.   */

       short WDFKCCTLO;               /* Buffer displacement to the    */
                                      /* choice control field (see     */
                                      /* structure QDFKCMSG).  This is */
                                      /* in the output buffer.  -1     */
                                      /* indicates no control field is */
                                      /* specified.                    */

       short WDFKCCTLIO;              /* Buffer displacement to the    */
                                      /* choice control field (see     */
                                      /* structure QDFKCMSG).  This is */
                                      /* in the input buffer.  -1      */
                                      /* indicates no control field is */
                                      /* specified.                    */

     /*char WDFKCV[];   */            /* Additional structures.        */

  }  QDFKCHCE_t;



  typedef _Packed struct QDFKCTXT {   /* Choice Text Structure         */
                                      /* (QDFKCTXT) Choice text        */
                                      /* structure.  The length of the */
                                      /* text is in the fixed choice   */
                                      /* entry string (variable        */
                                      /* WDFKCTXTL, in structure       */
                                      /* QDFKCHCE).  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFKCHCE is at variable       */
                                      /* WDFKCTXTO in QDFKCHCE.        */

       short WDFKCMNEM;               /* Position of the mnemonic.  0  */
                                      /* indicates no mnemonic is      */
                                      /* specified.                    */

     /*char WDFKCTXTT[];   */         /* Choice text (including        */
                                      /* trailing blanks).             */

  }  QDFKCTXT_t;



  typedef _Packed struct QDFKCACC {   /* CHCACCEL Keyword Structure    */
                                      /* (QDFKCACC) CHCACCEL keyword   */
                                      /* structure.  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFKCHCE is at variable       */
                                      /* WDFKCACCO in QDFKCHCE.        */

       short WDFKCACCSL;              /* Length of accelerator         */
                                      /* structure.                    */

       short WDFKCACCL;               /* Length of text or variable    */
                                      /* for accelerator.              */

       short WDFKCACCFO;              /* Displacement into the output  */
                                      /* buffer for the accelerator    */
                                      /* program-to-system field.  -1  */
                                      /* indicates no accelerator      */
                                      /* program-to-system field is    */
                                      /* specified.                    */

     /*char WDFKCACCT[];   */         /* Accelerator text.             */

  }  QDFKCACC_t;



  typedef _Packed struct QDFKCMSG {   /* CHCCTL Keyword Structure      */
                                      /* (QDFKCMSG) CHCCTL keyword     */
                                      /* structure.  The displacement  */
                                      /* to this structure from the    */
                                      /* beginning of structure        */
                                      /* QDFKCHCE is at variable       */
                                      /* WDFKCCTLO in QDFKCHCE.        */

       struct WDFKCMFLG {             /* Message flags.                */

         unsigned WDFKCMIDP:1;        /* On indicates the message ID   */
                                      /* is the buffer displacement to */
                                      /* program-to-system field; off  */
                                      /* indicates the actual message  */
                                      /* ID is specified.              */

         unsigned WDFKCMFLP:1;        /* On indicates the message file */
                                      /* is the buffer displacement to */
                                      /* program-to-system field; off  */
                                      /* indicates the actual message  */
                                      /* file is specified.            */

         unsigned WDFKCMLBP:1;        /* On indicates the message file */
                                      /* library is the buffer         */
                                      /* displacement to               */
                                      /* program-to-system field; off  */

                                      /* indicates the actual message  */
                                      /* library is specified.         */

         unsigned RESERVED_84:5;      /* Reserved.                     */

       }WDFKCMFLG;

       _Packed union             {

         char WDFKCMID26[7];          /* Message ID.                   */

         short WDFKMIDO;              /* Buffer displacement to field  */
                                      /* that contains the message ID. */

       }WDFKCMID26U;

       _Packed union           {

         char WDFKCMFL[10];           /* Message file name.            */

         short WDFKCMFLO;             /* Buffer displacement to field  */
                                      /* that contains the message     */
                                      /* file.                         */

       }WDFKCMFLU;

       _Packed union           {

         char WDFKCMLB[10];           /* Message file library name.    */

         short WDFKCMLBO;             /* Buffer displacement to field  */
                                      /* that contains the message     */
                                      /* library.                      */

       }WDFKCMLBU;

  }  QDFKCMSG_t;



  typedef _Packed struct QDFKMBSEPS { /* MNUBARSEP Keyword Structure   */
                                      /* (QDFKMBSEPS) MNUBARSEP        */
                                      /* keyword structure.  Use this  */
                                      /* structure for a category 26   */
                                      /* keyword that has a keyword ID */
                                      /* of X'02'.  This structure is  */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       struct WDFKMBSEPF {            /* MNUBARSEP keyword flags.      */

         unsigned WDFKMBSCP:1;        /* On indicates the color is     */
                                      /* specified in a                */
                                      /* program-to-system field; off  */
                                      /* indicates the actual color is */
                                      /* specified.  Note: If on, use  */
                                      /* variable WDFKMBSCO;           */
                                      /* otherwise, use variable       */
                                      /* WDFKMBSCLR.                   */

         unsigned WDFKMBSAP:1;        /* On indicates the display      */
                                      /* attribute is specified in a   */
                                      /* program-to-system field; off  */
                                      /* indicates the actual          */
                                      /* attribute is specified.       */
                                      /* Note: If on, use variable     */
                                      /* WDFKMBSAO; otherwise, use     */
                                      /* variable WDFKMBSATR.          */

         unsigned WDFKMBSHP:1;        /* On indicates the character is */
                                      /* specified in a                */
                                      /* program-to-system field; off  */
                                      /* indicates the actual          */
                                      /* character is specified.       */
                                      /* Note: If on, use variable     */
                                      /* WDFKMBSCHO: otherwise, use    */
                                      /* variable WDFKMBSCHR.          */

         unsigned RESERVED_88:5;      /* Reserved.                     */

       }WDFKMBSEPF;

       _Packed union            {

         short WDFKMBSCO;             /* Buffer displacement to field  */
                                      /* that contains the color.      */

         char WDFKMBSCLR;             /* Actual value for *COLOR.      */
                                      /* X'00' indicates not           */
                                      /* specified, X'3A' indicates    */
                                      /* BLU, X'20' indicates GRN,     */
                                      /* X'22' indicates WHT, X'28'    */
                                      /* indicates RED, X'30'          */
                                      /* indicates TRQ, X'32'          */
                                      /* indicates YLW, and X'38'      */
                                      /* indicates PNK.                */

       }WDFKMBSCOU;

       _Packed union            {

         short WDFKMBSAO;             /* Buffer displacement to field  */
                                      /* that contains the attribute.  */

         char WDFKMBSATR;             /* Actual value for *DSPATR.     */
                                      /* Combination of two or more of */
                                      /* these values: X'00' indicates */
                                      /* no attribute, X'30' indicates */
                                      /* (*DSPATR CS), X'28' indicates */
                                      /* (*DSPATR BL), X'24' indicates */
                                      /* (*DSPATR UL), X'22' indicates */
                                      /* (*DSPATR HI), X'21' indicates */
                                      /* (*DSPATR RI), and X'27'       */
                                      /* indicates (*DSPATR ND).  If   */
                                      /* multiple values are           */
                                      /* specified, they are ORed      */
                                      /* together.                     */

       }WDFKMBSAOU;

       _Packed union             {
         short WDFKMBSCHO;            /* Buffer displacement to field  */
                                      /* that contains the separator   */
                                      /* character.                    */

         char WDFKMBSCHR;             /* Actual separator character.   */
                                      /* X'00' indicates not           */
                                      /* specified.                    */

       }WDFKMBSCHOU;

  }  QDFKMBSEPS_t;



  typedef _Packed struct QDFKCHCX {   /* Choice Keywords Structure     */
                                      /* (QDFKCHCX) Structure for      */
                                      /* CHCAVAIL, CHCSLT, and         */
                                      /* CHCUNAVAIL keywords.  Use     */
                                      /* this structure for category   */
                                      /* 26 keywords that have keyword */
                                      /* IDs of X'03', X'04', and      */
                                      /* X'05'.  This structure is     */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       char RESERVED_92;              /* Reserved.                     */

       char WDFKCHCCLR;               /* Color (from the MNUBARSEP     */
                                      /* keyword).                     */

       char RESERVED_93;              /* Reserved.                     */

       char WDFKCHCATR;               /* Display attribute.            */
                                      /* Combination of two or more of */
                                      /* these values: X'00' indicates */
                                      /* no attribute, X'30' indicates */
                                      /* (*DSPATR CS), X'28' indicates */
                                      /* (*DSPATR BL), X'24' indicates */
                                      /* (*DSPATR UL), X'22' indicates */
                                      /* (*DSPATR HI), X'21' indicates */
                                      /* (*DSPATR RI), and X'27'       */
                                      /* indicates (*DSPATR ND).       */

       char RESERVED_94;              /* Reserved.                     */

  }  QDFKCHCX_t;



  typedef _Packed struct QDFKEFATR {  /* ENTFLDATR Keyword Structure   */
                                      /* (QDFKEFATR) ENTFLDATR keyword */
                                      /* structure.  Use this          */
                                      /* structure for a category 26   */
                                      /* keyword that has a keyword ID */
                                      /* of X'06'.  This structure is  */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       struct WDFKEFATRF {            /* Entry field attribute flags.  */

         unsigned WDFKEFACP:1;        /* On indicates the color is a   */
                                      /* program-to-system field; off  */
                                      /* indicates the actual color is */
                                      /* specified.                    */

         unsigned WDFKEFAAP:1;        /* On indicates the attribute is */
                                      /* a program-to-system field;    */
                                      /* off indicates the actual      */
                                      /* attribute is specified.       */

         unsigned WDFKEFACV:1;        /* On indicates the cursor is    */
                                      /* visible; off indicates the    */
                                      /* cursor is invisible.          */

         unsigned RESERVED_95:5;      /* Reserved.                     */

       }WDFKEFATRF;

       char WDFKEFACLR;               /* Actual color.  X'00' indicate */
                                      /* no color is specified.        */

       char RESERVED_96;              /* Reserved.                     */

       char WDFKEFAATR;               /* Actual attribute.  X'00'      */
                                      /* indicate no attribute is      */
                                      /* specified.                    */

       char RESERVED_97;              /* Reserved.                     */

  }  QDFKEFATR_t;



  typedef _Packed struct QDFKFLDCP {  /* FLDCSRPRG Keyword Structure   */
                                      /* (QDFKFLDCP) FLDCSRPRG keyword */
                                      /* structure.  Use this          */
                                      /* structure for a category 26   */
                                      /* keyword that has a keyword ID */
                                      /* of X'07'.  This structure is  */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       short WDFKFCPFLDNUM;           /* Field number.                 */

       char RESERVED_98;              /* Reserved.                     */

  }  QDFKFLDCP_t;



  typedef _Packed struct QDFKCNTFLD { /* CNTFLD Keyword Structure      */
                                      /* (QDFKCNTFLD) CNTFLD keyword   */
                                      /* structure.  Use this          */
                                      /* structure for a category 26   */
                                      /* keyword that has a keyword ID */
                                      /* of X'08'.  This structure is  */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       short WDFKCNTFLDNUM;           /* Width of segment.             */

       char RESERVED_99;              /* Reserved.                     */

  }  QDFKCNTFLD_t;



  typedef _Packed struct QDFKEDTMSK { /* EDTMSK Keyword Structure      */
                                      /* (QDFKEDTMSK) EDTMSK keyword   */
                                      /* structure.  Use this          */
                                      /* structure for a category 26   */
                                      /* keyword that has a keyword ID */
                                      /* of X'09'.  This structure is  */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       short WDFKEDMNUM;              /* Number of segments.           */

     /*char WDFKEDMSEG[];   */        /* EDTMSK keyword segment        */
                                      /* structure (see structure      */
                                      /* QDFKEDTSEG).                  */

  }  QDFKEDTMSK_t;



  typedef _Packed struct QDFKEDTSEG { /* EDTMSK Keyword Segment        */
                                      /* Structure (QDFKEDTSEG)        */
                                      /* Segment structure for EDTMSK  */
                                      /* keyword.  This structure is   */
                                      /* defined at variable           */
                                      /* WDFKEDMSEG in structure       */
                                      /* QDFKEDTMSK.                   */

       short WDFKEDMPOS;              /* Position of segment.          */

       short WDFKEDMLEN;              /* Length of segment.            */

  }  QDFKEDTSEG_t;



  typedef _Packed struct QDFKSMSG {   /* SFLCHCCTL Message Structure   */
                                      /* (QDFKSMSG) SFLCHCCTL message  */
                                      /* structure.  This structure is */
                                      /* defined at variable WDFKFCEX  */
                                      /* in structure QDFKFC.          */

       struct WDFKSMFLG {             /* Flags for SFLCHCCTL keyword.  */

         unsigned WDFKSMIDP:1;        /* If on, message ID is buffer   */
                                      /* displacement to               */
                                      /* program-to-system field.      */

         unsigned WDFKSMFLP:1;        /* If on, message file is buffer */
                                      /* displacement to               */
                                      /* program-to-system field.      */

         unsigned WDFKSMLBP:1;        /* If on, message library is     */
                                      /* buffer displacement to        */
                                      /* program-to-system field.      */

         unsigned RESERVED_100:5;     /* Reserved.                     */

       }WDFKSMFLG;

       _Packed union           {

         char WDFKSMID[7];            /* Message ID.                   */

         short WDFKSMIDO;             /* Output buffer displacement to */
                                      /* the field containing the      */
                                      /* message ID.                   */

       }WDFKSMIDU;

       _Packed union           {

         char WDFKSMFL[10];           /* Message file name.            */

         short WDFKSMFLO;             /* Output buffer displacement to */
                                      /* the field containing the      */
                                      /* message file name.            */

       }WDFKSMFLU;

       _Packed union           {

         char WDFKSMLB[10];           /* Message library name.         */

         short WDFKSMLBO;             /* Output buffer displacement to */
                                      /* the field containing the      */
                                      /* message library name.         */
       }WDFKSMLBU;

  }  QDFKSMSG_t;



  typedef _Packed struct QDFKGRPR {   /* Record-Level Grid Keywords    */
                                      /* with Parameters Structure     */
                                      /* (QDFKGRPR) Record-level grid  */
                                      /* keywords with parameters.     */
                                      /* The displacement to this      */
                                      /* structure from the beginning  */
                                      /* of the appropriate section    */
                                      /* (file, record, or field) is   */
                                      /* at variable WDFFCAOF in       */
                                      /* structure QDFFCCOA.           */

       short WDFKPCNT;                /* Number of keywords to follow. */

     /*char WDFKGRKW[];   */          /* Category 27 parameter         */
                                      /* entries.                      */

  }  QDFKGRPR_t;



  typedef _Packed struct QDFKGRWP {   /* Record-Level Grid Keywords    */
                                      /* (QDFKGRWP) Record-level grid  */
                                      /* keywords.  This structure is  */
                                      /* defined at variable WDFKGRKW  */
                                      /* in structure QDFKGRPR.        */

       char WDFKGPID;                 /* Keyword ID.                   */

       short WDFKGPIN;                /* Index into selection table.   */
                                      /* 1 indicates keyword is not    */
                                      /* optioned.                     */

       short WDFKGPLN;                /* Length of parameter for       */
                                      /* keyword.                      */

     /*char WDFKGPEX[];   */          /* Extra remaining portion for   */
                                      /* keywords.  Actual length is   */
                                      /* in variable WDFKMPLN in       */
                                      /* structure QDFKMRWP.           */

  }  QDFKGRWP_t;



  typedef _Packed struct QDFKGRDATR { /* GRDATR Parameters             */
                                      /* (QDFKGRDATR) GRDATR           */
                                      /* parameters.  Use this         */
                                      /* structure for category 27     */
                                      /* keywords that have a keyword  */
                                      /* ID of X'01'.  The structure   */
                                      /* is defined at variable        */
                                      /* WDFKGPEX in structure         */
                                      /* QDFKGRWP.                     */

       _Packed union            {

         short WDFKGCLRO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* color.                        */

         char WDFKGCLOR;              /* Color parameter.  X'FE'       */
                                      /* indicates not specified.      */

       }WDFKGCLROU;

       _Packed union            {

         short WDFKGLNTO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* line type.                    */

         char WDFKGLT;                /* Line type.  X'FE' indicates   */
                                      /* not specified.                */

       }WDFKGLNTOU;

       struct WDFKGCBIT {             /* Miscellaneous flags.          */

         unsigned WDFKGCLRP:1;        /* If on, program-to-system      */
                                      /* field was used for color.     */

         unsigned WDFKGLNTP:1;        /* If on, program-to-system      */
                                      /* field was used for line type. */

         unsigned RESERVED_103:6;     /* Reserved.                     */

       }WDFKGCBIT;

  }  QDFKGRDATR_t;



  typedef _Packed struct QDFKGRDCLR { /* GRDCLR Parameters Structure   */
                                      /* (QDFKGRDCLR) GRDCLR           */
                                      /* parameters structure.  Use    */
                                      /* this structure for category   */
                                      /* 27 keywords that have a       */
                                      /* keyword ID of X'02'.  The     */
                                      /* structure is defined at       */
                                      /* variable WDFKGPEX in          */
                                      /* structure QDFKGRWP.  The      */
                                      /* structure is ARRAY (*).       */

       struct WDFGCFLG {              /* Miscellaneous flags.          */

         unsigned WDFKGCSRP:1;        /* If on, program-to-system      */
                                      /* field was used for start-row. */
                                      /* Note: If on, use variable     */
                                      /* WDFKGCSRO: otherwise, use     */
                                      /* variable WDFKGCSROW.          */

         unsigned WDFKGCSCP:1;        /* If on, program-to-system      */
                                      /* field was used for            */
                                      /* start-column.  Note: If on,   */
                                      /* use variable WDFKGCSCO:       */
                                      /* otherwise, use variable       */
                                      /* WDFKGCSCOL.                   */

         unsigned WDFKGCDP:1;         /* If on, program-to-system      */
                                      /* field was used for depth.     */
                                      /* Note: If on, use variable     */
                                      /* WDFKGCDEO: otherwise, use     */
                                      /* variable WDFKGCDEP.           */

         unsigned WDFKGCWP:1;         /* If on, program-to-system      */
                                      /* field was used for width.     */
                                      /* Note: If on, use variable     */
                                      /* WDFKGCWIO: otherwise, use     */
                                      /* variable WDFKGCWID.           */

         unsigned WDFKGCNP:1;         /* If on, no parameters are      */
                                      /* specified on keyword.  Clear  */
                                      /* all grid lines.               */

         unsigned RESERVED_104:3;     /* Reserved.                     */

       }WDFGCFLG;

       _Packed union             {

         short WDFKGCSROW;            /* Start row.                    */

         short WDFKGCSRO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* row.                          */

       }WDFKGCSROWU;

       _Packed union             {

         short WDFKGCSCOL;            /* Start column.                 */

         short WDFKGCSCO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* column.                       */

       }WDFKGCSCOLU;

       _Packed union            {

         short WDFKGCDEP;             /* Depth.                        */

         short WDFKGCDEO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* depth.                        */

       }WDFKGCDEPU;

       _Packed union            {

         short WDFKGCWID;             /* Width.                        */

         short WDFKGCWIO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* width.                        */

       }WDFKGCWIDU;

  }  QDFKGRDCLR_t;



  typedef _Packed struct QDFKGRDBOX { /* GRDBOX Parameters             */
                                      /* (QDFKGRDBOX) GRDBOX           */
                                      /* parameters.  Use this         */
                                      /* structure for category 27     */
                                      /* keywords that have a keyword  */
                                      /* ID of X'03'.  The structure   */
                                      /* is defined at variable        */
                                      /* WDFKGPEX in structure         */
                                      /* QDFKGRWP.                     */

       struct WDFKGBBIT {             /* Miscellaneous flags.          */

         unsigned WDFKGBHZP:1;        /* If on, program-to-system      */
                                      /* field was used for HRZ rule   */
                                      /* *TYPE parameter.  Note: If    */
                                      /* on, use variable WDFKGBHZO;   */
                                      /* otherwise, use variable       */
                                      /* WDFKGHZV.                     */

         unsigned WDFKGBVTP:1;        /* If on, program-to-system      */
                                      /* field was used for VRT rule   */
                                      /* *TYPE parameter.  Note: If    */
                                      /* on, use variable WDFKGBVTO;   */
                                      /* otherwise, use variable       */
                                      /* WDFKGVTV.                     */

         unsigned WDFKGBCLP:1;        /* If on, program-to-system      */
                                      /* field was used for color.     */
                                      /* Note: If on, use variable     */
                                      /* WDFKGBCLO; otherwise, use     */
                                      /* variable WDFKGBCLR.           */

         unsigned WDFKGBLTP:1;        /* If on, program-to-system      */
                                      /* field was used for line type. */
                                      /* Note: If on, use variable     */
                                      /* WDFKGBLTO; otherwise, use     */
                                      /* variable WDFKGBLNT.           */

         unsigned RESERVED_105:4;     /* Reserved.                     */

       }WDFKGBBIT;

       char WDFKGBTOB;                /* Type of box.  X'04' indicates */
                                      /* not specified or PLAIN, X'05' */
                                      /* indicates HRZ, X'06'          */
                                      /* indicates VRT, and X'07'      */
                                      /* indicates HRZVRT.             */

       _Packed union            {

         short WDFKGBHZO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* horizontal rule on *TYPE      */
                                      /* parameter.                    */

         short WDFKGHZV;              /* Horizontal rule value.  X'01' */
                                      /* indicates not specified.      */

       }WDFKGBHZOU;

       _Packed union            {

         short WDFKGBVTO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* vertical rule on *TYPE        */
                                      /* parameter.                    */

         short WDFKGVTV;              /* Vertical rule value.  X'01'   */
                                      /* indicates not specified.      */

       }WDFKGBVTOU;

       _Packed union            {

         short WDFKGBCLO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* color.                        */

         char WDFKGBCLR;              /* Color parameter.  X'FE'       */
                                      /* indicates not specified.      */

       }WDFKGBCLOU;

       _Packed union            {

         short WDFKGBLTO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* line type.                    */

         char WDFKGBLNT;              /* Line type.  X'00' indicates   */
                                      /* not specified.                */

       }WDFKGBLTOU;

       short WDFKGBCTLO;              /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* *CONTROL parameter.  -1       */
                                      /* indicates not specified.      */

     /*char WDFKGBOXD[];   */         /* Array for parameters that are */
                                      /* display-size dependent.       */
                                      /* There is one entry for each   */
                                      /* display size for the file     */
                                      /* (see structure QDFKGBOXDFM).  */

  }  QDFKGRDBOX_t;



  typedef _Packed struct QDFKGBOXDFM { /* GRDBOX Parameter Entry       */
                                      /* Structure (QDFKGBOXDFM)       */
                                      /* GRDBOX Parameter Entry        */
                                      /* Structure.  The number of     */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFFSCR   */
                                      /* in structure QDFFBASE.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFKGBOXD in         */
                                      /* structure QDFKGRDBOX.  This   */
                                      /* structure is ARRAY(*).        */

       struct WDFKGBFLG {             /* Miscellaneous flags.          */

         unsigned WDFKGBSRP:1;        /* If on, program-to-system      */
                                      /* field was used for start-row. */
                                      /* Note: If on, use variable     */
                                      /* WDFKGBSRO; otherwise, use     */
                                      /* variable WDFKGBSROW.          */

         unsigned WDFKGBSCP:1;        /* If on, program-to-system      */
                                      /* field was used for            */
                                      /* start-column.  Note: If on,   */
                                      /* use variable WDFKGBSCO;       */
                                      /* otherwise, use variable       */
                                      /* WDFKGBSCOL.                   */

         unsigned WDFKGBDP:1;         /* If on, program-to-system      */
                                      /* field was used for depth.     */
                                      /* Note: If on, use variable     */
                                      /* WDFKGBDEO; otherwise, use     */
                                      /* variable WDFKGBDEP.           */

         unsigned WDFKGBWP:1;         /* If on, program-to-system      */
                                      /* field was used for width.     */
                                      /* Note: If on, use variable     */
                                      /* WDFKGBWIO; otherwise, use     */
                                      /* variable WDFKGBWID.           */

         unsigned RESERVED_108:4;     /* Reserved.                     */

       }WDFKGBFLG;

       _Packed union             {

         short WDFKGBSROW;            /* Start row.            @A4C    */

         short WDFKGBSRO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* row.                          */

       }WDFKGBSROWU;

       _Packed union             {

         short WDFKGBSCOL;            /* Start column.                 */

         short WDFKGBSCO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* column.                       */

       }WDFKGBSCOLU;

       _Packed union            {

         short WDFKGBDEP;             /* Depth.                        */

         short WDFKGBDEO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* depth.                        */

       }WDFKGBDEPU;

       _Packed union            {

         short WDFKGBWID;             /* Width.                        */

         short WDFKGBWIO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* width.                        */

       }WDFKGBWIDU;

  }  QDFKGBOXDFM_t;



  typedef _Packed struct QDFKGRDLIN { /* GRDLIN Parameters Structure   */
                                      /* (QDFKGRDLIN) GRDLIN           */
                                      /* parameters structure.  Use    */
                                      /* this structure for category   */
                                      /* 27 keywords that have a       */
                                      /* keyword ID of X'04'.  The     */
                                      /* structure is defined at       */
                                      /* variable WDFKGPEX in          */
                                      /* structure QDFKGRWP.           */

       struct WDFKGLBIT {             /* Miscellaneous flags.          */

         unsigned WDFKGLIVP:1;        /* If on, program-to-system      */
                                      /* field was used for interval   */
                                      /* on *TYPE parameter.  Note: If */
                                      /* on, use variable WDFKGLINO;   */
                                      /* otherwise, use variable       */
                                      /* WDFKGLINT.                    */

         unsigned WDFKGLRPP:1;        /* If on, program-to-system      */
                                      /* field was used for repeat on  */
                                      /* *TYPE parameter.  Note: If    */
                                      /* on, use variable WDFKGLRPO;   */
                                      /* otherwise, use variable       */
                                      /* WDFKGLRPT.                    */

         unsigned WDFKGLCLP:1;        /* If on, program-to-system      */
                                      /* field was used for color.     */
                                      /* Note: If on, use variable     */
                                      /* WDFKGLCLO; otherwise, use     */
                                      /* variable WDFKGLCLR.           */

         unsigned WDFKGLLTP:1;        /* If on, program-to-system      */
                                      /* field was used for line type. */
                                      /* Note: If on, use variable     */
                                      /* WDFKGLLTO; otherwise, use     */
                                      /* variable WDFKGLLNT.           */

         unsigned RESERVED_109:4;     /* Reserved.                     */

       }WDFKGLBIT;

       char WDFKGLTYPL;               /* Type of line.  X'00'          */
                                      /* indicates UPPER or not        */
                                      /* specified, X'01' indicates    */
                                      /* LOWER, X'02' indicates LEFT,  */
                                      /* and X'03' indicates RIGHT.    */

       _Packed union            {

         short WDFKGLINO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* interval.                     */

         short WDFKGLINT;             /* Interval.  Set to 1 if not    */
                                      /* specified.                    */

       }WDFKGLINOU;

       _Packed union            {

         short WDFKGLRPO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* repeat.                       */

         short WDFKGLRPT;             /* Repeat.  Set to 1 if not      */
                                      /* specified.                    */

       }WDFKGLRPOU;

       _Packed union            {

         short WDFKGLCLO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* color.                        */

         char WDFKGLCLR;              /* Color parameter.  X'FE'       */
                                      /* indicates not specified.      */

       }WDFKGLCLOU;

       _Packed union            {

         short WDFKGLLTO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* line type.                    */

         char WDFKGLLNT;              /* Line type.  X'FE' indicates   */
                                      /* not specified.                */

       }WDFKGLLTOU;

       short WDFKGLCTLO;              /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* *CONTROL parameter.  -1       */
                                      /* indicates not specified.      */

     /*char WDFKGLIND[];   */         /* Array for parameters that are */
                                      /* display-size dependent (see   */
                                      /* structure QDFKGLINDFM).       */

  }  QDFKGRDLIN_t;



  typedef _Packed struct QDFKGLINDFM { /* GRDLIN Parameter Entry       */
                                      /* Structure (QDFKGLINDFM)       */
                                      /* GRDLIN Parameter Entry        */
                                      /* Structure.  The number of     */
                                      /* entries in this structure is  */
                                      /* defined by variable WDFFSCR   */
                                      /* in structure QDFFBASE.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFKGLIND in         */
                                      /* structure QDFKGRDLIN.  This   */
                                      /* structure is ARRAY(*).        */

       struct WDFKGLMISC {            /* Miscellaneous flags.          */

         unsigned WDFKGLSRP:1;        /* If on, program-to-system      */
                                      /* field was used for start-row. */
                                      /* Note: If on, use variable     */
                                      /* WDFKGLSRO; otherwise, use     */
                                      /* variable WDFKGLSROW.          */

         unsigned WDFKGLSCP:1;        /* If on, program-to-system      */
                                      /* field was used for            */
                                      /* start-column.  Note: If on,   */
                                      /* use variable WDFKGLSCO;       */
                                      /* otherwise, use variable       */
                                      /* WDFKGLSCOL.                   */

         unsigned WDFKGLLTH:1;        /* If on, program-to-system      */
                                      /* field was used for length.    */
                                      /* Note: If on, use variable     */
                                      /* WDFKGLLNO; otherwise, use     */
                                      /* variable WDFKGLLEN.           */

         unsigned RESERVED_112:5;     /* Reserved.                     */

       }WDFKGLMISC;

       _Packed union             {

         short WDFKGLSROW;            /* Start row.                    */

         short WDFKGLSRO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* row.                          */

       }WDFKGLSROWU;

       _Packed union            {

         short WDFKGLSCOL;            /* Start column.                 */

         short WDFKGLSCO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* column.                       */

       }WDFKGLSCOLU;

       _Packed union            {

         short WDFKGLLEN;             /* Length.                       */

         short WDFKGLLNO;             /* Buffer displacement to        */
                                      /* program-to-system field for   */
                                      /* length.                       */

       }WDFKGLLENU;

  }  QDFKGLINDFM_t;



  typedef _Packed struct QDFWFLEI {   /* Where-Used File-Level         */
                                      /* Information Structure         */
                                      /* (QDFWFLEI) The tables in this */
                                      /* section can be used to map to */
                                      /* the row-column table to       */
                                      /* determine the corresponding   */
                                      /* entry in the applicable       */
                                      /* keyword table.  (For the      */
                                      /* row-column table, see         */
                                      /* structure QDFFRCTB.) The      */
                                      /* where-used entries appear     */
                                      /* from left to right and top to */
                                      /* bottom.  The keyword entries  */
                                      /* appear in the same order as   */
                                      /* defined by the user.  File    */
                                      /* level information.  The       */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFFINFO is at   */
                                      /* variable WDFFWUOF in          */
                                      /* QDFFINFO.                     */

       short WDFWXLEN;                /* Length of the file section.   */
                                      /* This is also a displacement   */
                                      /* from this structure to the    */
                                      /* first record section defined  */
                                      /* by structure QDFWRCDI.  0     */
                                      /* indicates internally defined  */
                                      /* files or where no record- or  */
                                      /* field-level sections exist.   */

       short WDFWXOKW;                /* Displacement to a keyword     */
                                      /* area structure from this      */
                                      /* structure.  0, if none (see   */
                                      /* structure QDFWKWDA).          */

       long int WDFWWULN;             /* Length of the where-used      */
                                      /* section.                      */

       long int WDFWNTBO;             /* Displacement from this        */
                                      /* structure to the name table   */
                                      /* defined by structure          */
                                      /* QDFFNTBL.  0 indicates the    */
                                      /* name table is not present.    */

       short WDFWXIN;                 /* Number of indicator table     */
                                      /* entries (see variable         */
                                      /* WDFWINDX in this structure).  */

       char RESERVED_113[4];          /* Reserved.                     */

     /*char WDFWINDX[];   */          /* Indicator table entry         */
                                      /* structure containing the      */
                                      /* file-level indicator entries. */
                                      /* Each entry is defined by      */
                                      /* structure QDFWITBE.           */

  }  QDFWFLEI_t;



  typedef _Packed struct QDFWRCDI {   /* Where-Used Record Information */
                                      /* Structure (QDFWRCDI)          */
                                      /* Record-level information.     */
                                      /* The displacement to this      */
                                      /* structure from the beginning  */
                                      /* of structure QDFWFLEI is at   */
                                      /* variable WDFWXLEN in          */
                                      /* QDFWFLEI.  Displacements to   */
                                      /* subsequent structures are     */
                                      /* calculated using WDFWNXTR in  */
                                      /* this structure.               */

       short WDFWRLEN;                /* Length of record-level        */
                                      /* where-used section.  Also,    */
                                      /* this is the displacement from */
                                      /* this structure to the first   */
                                      /* field if there is one in      */
                                      /* structure QDFWFLDI.           */

       short WDFWROKW;                /* Displacement to a keyword     */
                                      /* area structure from this      */
                                      /* structure (see structure      */
                                      /* QDFWKWDA).  0 indicates no    */
                                      /* where-used keywords.          */

       long int WDFWNXTR;             /* Length of entire where-used   */
                                      /* section for this record.      */
                                      /* This is also the displacement */
                                      /* from this record to the next  */
                                      /* record entry.                 */

       short WDFWRIN;                 /* Number of indicator table     */
                                      /* entries (see variable         */
                                      /* WDFWINDR in this structure).  */

       char RESERVED_114[2];          /* Reserved.                     */

     /*char WDFWINDR[];   */          /* Indicator table containing    */
                                      /* the record-level indicator    */
                                      /* entries.  These entries with  */
                                      /* the file indicator table are  */
                                      /* all the indicators (optioned  */
                                      /* and response) that are valid  */
                                      /* for this record.  Each entry  */
                                      /* is defined by structure       */
                                      /* QDFWITBE.                     */

  }  QDFWRCDI_t;



  typedef _Packed struct QDFWFLDI {   /* Where-Used Field Information  */
                                      /* Structure (QDFWFLDI)          */
                                      /* Field-level information       */
                                      /* (including constants).  The   */
                                      /* displacement to this          */
                                      /* structure from the beginning  */
                                      /* of structure QDFWRCDI is at   */
                                      /* variable WDFWRLEN in          */
                                      /* QDFWRCDI.  Displacements to   */
                                      /* subsequent structures are     */
                                      /* calculated using WDFWFLDL in  */
                                      /* this structure.               */

       short WDFWFLDL;                /* Length of field-level         */
                                      /* where-used section.  Also,    */
                                      /* this is the displacement from */
                                      /* this structure to the next    */
                                      /* field, if there is one.       */

       short WDFWFOKW;                /* Displacement to where-used    */
                                      /* keywords from this structure. */
                                      /* 0, if none (see structure     */
                                      /* QDFWKWDA).                    */

       short WDFWRRDX;                /* Index into field indexing     */
                                      /* table (see structure          */
                                      /* QDFFFITB.) for this field.    */

       long int WDFWNMEI;             /* Index into the name table     */
                                      /* (see structure QDFFNTBL) for  */
                                      /* this field.  0 indicates      */
                                      /* constants.                    */

       short WDFWLFLD;                /* Specified length of field     */
                                      /* (DDS field length).  For      */
                                      /* floating-point fields,        */
                                      /* variable WDFWLFLD equals      */
                                      /* variable WDFFDLEN (in         */
                                      /* structure QDFFFITB) minus 7.  */

       struct WDFWFFLG {              /* Keyword flags.                */

         unsigned WDFWRFFD:1;         /* If on, REFFLD keyword is      */
                                      /* specified.                    */

         unsigned WDFWMGDO:1;         /* If on, MSGID keyword is       */
                                      /* specified on an output-only   */
                                      /* field.                        */

         unsigned WDFWMGDB:1;         /* If on MSGID keyword is        */
                                      /* specified on a both field.    */

         unsigned RESERVED_115:5;     /* Reserved.                     */

       }WDFWFFLG;

       char RESERVED_116;             /* Reserved.                     */

  }  QDFWFLDI_t;



  typedef _Packed struct QDFWITBE {   /* Indicator Table Entry         */
                                      /* Structure (QDFWITBE)          */
                                      /* Indicator table entry.  These */
                                      /* entries are obtained from the */
                                      /* keywords and their values.    */
                                      /* .*C-type parameters           */
                                      /* .*correspond to option indicat*/
                                      /* .*EE-type (F) parameters corre*/
                                      /* .*to response indicators.     */
                                      /* This structure is defined at v*/
                                      /* WDFWINDX                      */
                                      /* in structure QDFWFLEI and     */
                                      /* variable WDFWINDR             */
                                      /* in structure QDFWRCDI.        */

       char WDFWINBR;                 /* Indicator number.             */

       char WDFWIOBF;                 /* Output buffer displacement.   */
                                      /* X'FF' indicates not used as   */
                                      /* an option indicator.          */

       char WDFWIIBF;                 /* Input buffer displacement     */
                                      /* X'FF' indicates not used as a */
                                      /* response indicator.           */

       short WDFWITXT;                /* Indicator text displacement.  */
                                      /* File-level displacement is    */
                                      /* from structure QDFWFLEI to    */
                                      /* the indicator text for this   */
                                      /* indicator.  Record-level      */
                                      /* displacement is from          */
                                      /* structure QDFWRCDI to the     */
                                      /* indicator text for this       */
                                      /* indicator.  The format of the */
                                      /* text is an A-type parameter   */
                                      /* (see structure QDFWATYP).     */

  }  QDFWITBE_t;



  typedef _Packed struct QDFWKWDA {   /* Keyword Area Structure        */
                                      /* (QDFWKWDA) Keyword area.  For */
                                      /* file-level keywords, this     */
                                      /* structure is defined at       */
                                      /* variable WDFWXOKW in          */
                                      /* structure QDFWFLEI.  For      */
                                      /* record-level keywords, this   */
                                      /* structure is defined at       */
                                      /* variable WDFWROKW in          */
                                      /* structure QDFWRCDI.  For      */
                                      /* field-level keywords, this    */
                                      /* structure is defined at       */
                                      /* variable WDFWFOKW in          */
                                      /* structure QDFWFLDI.           */

       short WDFWKWDC;                /* Keyword count.                */

     /*char WDFWKWDS[];   */          /* Keyword entries.              */

  }  QDFWKWDA_t;


  typedef _Packed struct {

         char RESERVED_117;           /* Reserved.                     */

         char WDFWKWID;               /* Where-used keyword ID.        */

  }QDFWKWIDU_t;

  typedef _Packed struct QDFWATTR {   /* Keyword Entry Structure       */
                                      /* (QDFWATTR) Keyword entries.   */
                                      /* Shows the keyword types that  */
                                      /* correspond to the keyword     */
                                      /* entries and the specific      */
                                      /* structure that each keyword   */
                                      /* type uses.  This figure also  */
                                      /* shows which keyword types do  */
                                      /* not require a structure.      */

       _Packed union           {

         short WDFWKTYP;             /* Keyword type                   */

         QDFWKWIDU_t KWIDU;

       }WDFWKTYPU;

       short WDFWKLEN;                /* Length of this keyword and    */
                                      /* value.                        */

     /*char WDFWPRMS[];   */          /* Associated parameters.  Use   */
                                      /* structure QDFWATYP or         */
                                      /* structure QDFWBTYP.           */

  }  QDFWATTR_t;



  typedef _Packed struct QDFWATYP {   /* Variable Length Structure     */
                                      /* (QDFWATYP) Variable length    */
                                      /* structure.  This structure is */
                                      /* defined at variable WDFWPRMS  */
                                      /* in structure QDFWATTR, or     */
                                      /* this structure is an array    */
                                      /* defined at variable WDFWBPRM  */
                                      /* in structure QDFWBTYP (where  */
                                      /* the number of entries is      */
                                      /* WDFWATS).                     */

       short WDFWALEN;                /* Length of parameter.          */

       char RESERVED_118;             /* Reserved.                     */

       char WDFWPRMT;                 /* Parameter type.  X'00'        */
                                      /* indicates character; X'08'    */
                                      /* indicates DBCS.               */

     /*char WDFWAPRM[];   */          /* Parameter value.              */

  }  QDFWATYP_t;



  typedef _Packed struct QDFWBTYP {   /* Multiple Variable Length      */
                                      /* Structure (QDFWBTYP) Multiple */
                                      /* variable length structure.    */
                                      /* This structure is defined at  */
                                      /* variable WDFWPRMS in          */
                                      /* structure QDFWATTR.           */

       short WDFWATS;                 /* Number of variable length     */
                                      /* parameters.                   */
                                      /* .*A-type parameters.          */

     /*char WDFWBPRM[];   */          /* Multiple variable length      */
                                      /* structures.  Each parameter   */
                                      /* is defined by structure       */
                                      /* QDFWATYP.                     */

  }  QDFWBTYP_t;



  typedef _Packed struct QDFWRSTR {   /* Reference Information         */
                                      /* Structure (QDFWRSTR)          */
                                      /* Reference information.  This  */
                                      /* structure is defined at       */
                                      /* variable WDFWAPRM in          */
                                      /* structure QDFWATYP.           */

       struct WDFWRFLG {              /* Miscellaneous flags.          */

         unsigned WDFWSRC:1;          /* If on, source reference is    */
                                      /* specified.                    */

         unsigned RESERVED_119:5;     /* Reserved.                     */

         unsigned WDFWDCHK:1;         /* If on, validity checking is   */
                                      /* deleted.                      */

         unsigned WDFWDEDT:1;         /* If on, editing is deleted.    */

       }WDFWRFLG;

       struct WDFWRCHG {              /* Miscellaneous flags.          */

         unsigned WDFWDUPE:1;         /* If on, field is duplicated.   */

         unsigned WDFWNMEC:1;         /* If on, name is changed.       */

         unsigned WDFWTYPC:1;         /* If on, field type is changed. */

         unsigned WDFWLENC:1;         /* If on, field length is        */
                                      /* changed.                      */

         unsigned WDFWDECC:1;         /* If on, decimals are changed.  */

         unsigned WDFWEDTC:1;         /* If on, editing is changed.    */

         unsigned WDFWVLCK:1;         /* If on, validity checking is   */
                                      /* changed.                      */

         unsigned WDFWOTHR:1;         /* If on, other changes          */
                                      /* occurred.                     */

       }WDFWRCHG;

       long int WDFWRFEI;             /* Index into the name table for */
                                      /* the file name being referred  */
                                      /* to (see structure QDFFNTBL).  */

       long int WDFWRLBI;             /* Index into the name table for */
                                      /* the referenced library name   */
                                      /* (see structure QDFFNTBL).     */

       long int WDFWRRFI;             /* Index into the name table for */
                                      /* the referenced format name    */
                                      /* (see structure QDFFNTBL).     */

       long int WDFWRFDI;             /* Index into the name table for */
                                      /* the referenced field name     */
                                      /* (see structure QDFFNTBL).     */

  }  QDFWRSTR_t;



  typedef _Packed struct QDFFNTBL {   /* Name Table Structure          */
                                      /* (QDFFNTBL) Name table.        */
                                      /* Internally generated fields   */
                                      /* begin with *IN and end with 2 */
                                      /* digits, such as, *IN03 and    */
                                      /* *IN27.  The displacement to   */
                                      /* this structure from the       */
                                      /* beginning of structure        */
                                      /* QDFWFLEI is at variable       */
                                      /* WDFWNTBO in QDFWFLEI.         */

       long int WDFFNMS;              /* Number of names in the table. */

     /*char WDFFNMES[10][];  */       /* Name entries.                 */

  }  QDFFNTBL_t;

 #if (__OS400_TGTVRM__>=510)                       /* @A3A */
     #pragma datamodel(pop)                        /* @A3A */
 #endif                                            /* @A3A */

#endif
