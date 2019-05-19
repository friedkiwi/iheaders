 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QQQQRY                                     */
 /*                                                                */
 /* Descriptive Name: Database Query API                      @A2A */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: QQQQRY API gets a set of database records that    */
 /*              satisfies a database query request.               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: QDB_QATTR_T                                    */
 /*                 QDBQDT_7_T                                     */
 /*                 QDBQFBK_T                                      */
 /*                 QDBQDT_13_T                                    */
 /*                 QDBQ_POSNOPTS_T                                */
 /*                 QDBQ_EXT_BITS_T                                */
 /*                 QDBQ_EXT_BITS2_T                               */
 /*                 QDBQ_EXT_BITS3_T                               */
 /*                 QDBQH_T                                        */
 /*                 QDBQDT_21_T                                    */
 /*                 QDBQFHDR_T                                     */
 /*                 QDBQFLMF_T                                     */
 /*                 QDBQFFLG_T                                     */
 /*                 QDBQN_T                                        */
 /*                 QDBQF_T                                        */
 /*                 QDBQJHDR_T                                     */
 /*                 QDBQJ_T                                        */
 /*                 QDBQ_JREF_ENTRY_T                          @A7A*/
 /*                 QDBQ_JREF_OPERAND_T                        @A7A*/
 /*                 QDBQ_JREF_OPERATOR_T                       @A7A*/
 /*                 QDBQS_T                                        */
 /*                 QDBQSIT_T                                      */
 /*                 QDBQSOPEF_T                                    */
 /*                 QDBQSOPES_T                                    */
 /*                 QDBQDT_32_T                                    */
 /*                 QDBQDT_36_T                                    */
 /*                 QDBQSOCH_T                                     */
 /*                 QDBQSOPC_T                                     */
 /*                 QDBQDT_55_T                                    */
 /*                 QDBQSOPR_T                                     */
 /*                 QDBQSOP2_T                                     */
 /*                 QDBQSOP3_T                                 @UIA*/
 /*                 QDBQKH_T                                       */
 /*                 QDBQKSQ_T                                      */
 /*                 QDBQK_T                                        */
 /*                 QDBQGH_T                                       */
 /*                 QDBQGF_T                                       */
 /*                 QDBQG_T                                        */
 /*                 QDBQT_T                                        */
 /*                 QDBQTOPC_T                                     */
 /*                 QDBQTOPR_T                                     */
 /*                 QDBQTIT_T                                      */
 /*                 QDBQQHDR_T                                     */
 /*                 QDBQQDT_T                                      */
 /*                 QDBQQDTS_T                                     */
 /*                 QQQVALEN_T                                     */
 /*                 QQQVAARY_T                                     */
 /*                 QQQVATTR_T                                     */
 /*                 QQQVALS_3_T                                    */
 /*                 QQQVALS_T                                      */
 /*                 _flg0                                          */
 /*                 _flg1                                          */
 /*                 _rlbr                                          */
 /*                 _flg2                                          */
 /*                 _flg3                                          */
 /*                 _flg4                                          */
 /*                 _formatid                                      */
 /*                 _pcmt                                          */
 /*                 QDBUFCB_T                                      */
 /*                 QQQSRTSEQ_T                                    */
 /*                 QQQSTB1_T                                      */
 /*                 QQQSTB2_T                                      */
 /*                 QQQSTBE1_T                                     */
 /*                 QQQNLSS_T                                      */
 /*                                                                */
 /* Function Prototype List: QQQQRY                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940426 RYG       New Include           */
 /* $A1= P3954948     3D10  940527 47SAMR:   Declaration changes.  */
 /* $OJ= D28342       3D60  950116 47SRDD:   Add support for SQL   */
 /*                                          Outer Join.           */
 /* $A2= P3979529     3D60  950301 511LKD:   Remove variable       */
 /*                                          declarations.  Make   */
 /*                                          them typedefs.        */
 /* $A3= P3621720     3D70  960606 HRGJCL:   Added fields to QDT   */
 /* $UI= D94960       4D10  970205 ALDRICH:  Add support for UCS-2 */
 /*                                          literals & new fields */
 /*                                          for the CCSID of      */
 /*                                          wildcard characters.  */
 /* $A4= P3651248     4D20  970729 RAMLER:   Add V4R2 support      */
 /* $A5= P3665850     4D20  980220 HRGJCL:   Add V4R3 support      */
 /* $A6= P3682797     4D40  981030 Ramler:   Add derived table     */
 /* $A7= P3682797     4D40  981103 RYG:      Add Full Left Outer   */
 /*                                          Join support.         */
 /* $AC=D97952    v5r1m0.xpf 000301 SBurrich: Add comments for     */
 /*                                         right outer and        */
 /*                                         exception join.        */
 /* $A8= P9A04562   v5r2m0f.xpf 020410 Ryg:  Fix chars that cause  */
 /*                                          C++ to fail.          */
 /* $A9=D99214.10  v5r3m0.xpf 021215 KEBAKER: Changes to support   */
 /*                                        invocation mark changing*/
 /*                                        from a Bin(32) to a     */
 /*                                        Bin(64).                */
 /* $AA=D99249.4  v5r3m0.xpf 030116 Taylor: Changes to support     */
 /*                                        UTF16                   */
 /* $AB=D99238.2  v5r3m0.xpf 030128 Kebaker:Change the high order  */
 /*                                         portion of the         */
 /*                                         invocation mark to a   */
 /*                                         Bin(32) from a Bin(16).*/
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QQQQRY_h
 #define QQQQRY_h

 #include <pointer.h>

 #endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Retrieve Controller Description API      */
 /*   QQQQRY OPM                                                   */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QQQQRY,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QQQQRY (char *,            /* Query option                   */
              void *,            /* UFCB                           */
              void *,            /* Query definition template      */
              void *,            /* Literal values                 */
              void *,            /* Access plan control block      */
              void *);           /* Error code                     */


 #ifndef _QDBQDT_H
 #define _QDBQDT_H
 /********************************************************************/
 /*                                                                  */
 /* INCLUDE NAME:  QDBQDT                                            */
 /* DESCRIPTIVE NAME:  Query definition template (QDT).              */
 /*                                                                  */
 /* FUNCTION:                                                        */
 /*    Describes the interface to XPF Query.                         */
 /*                                                                  */
 /*    The QDT contains all information required to create structures*/
 /*    necessary to perform the query.  It is a set of internal      */
 /*    structures which define the query and its implementation.     */
 /*    Feedback information from the creation of the query objects   */
 /*    is also present in the QDT.                                   */
 /*                                                                  */
 /*    For set operations on query results, such as UNION, an offset */
 /*    to the next QDT (the last QDT must have an offset of zero) is */
 /*    provided in the QDT header.                                   */
 /*                                                                  */
 /*    The QDT offset table will be specified for each UNIONed QDT   */
 /*    that contains subqueries.  This table will have offsets to    */
 /*    access the UNIONed QDT and its subquerys' QDT.                */
 /*                                                                  */
 /*    The following is a diagram of the main sections of the Query  */
 /*    Definition Template.                                          */
 /*                                                                  */
 /*      +-----------------------------------------+                 */
 /*      | Structure Description  Header Structure |                 */
 /*      +-----------------------------------------+                 */
 /*      | QDT HEADER:                     (qdbqh) |                 */
 /*      | QUERY ATTRIBUTES                        |                 */
 /*      |   OFFSETS TO ALL SPECIFICATIONS         |                 */
 /*      | (INCLUDING OFFSET TO NEXT QDT           |                 */
 /*      |    FOR A SET OPERATION, SUCH AS         |                 */
 /*      |    UNION)                               |                 */
 /*      | QUERY FEEDBACK AREA                     |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      |                                         |                 */
 /*      | FILE NAME SPECIFICATION         (qdbqf) | <= qdbqfilo     */
 /*      |   FILE/LIBRARY/MEMBER/FORMAT            |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | RECORD FORMAT SPECIFICATION     (qdbqr) | <= qdbqfldo     */
 /*      |   FIELD DEFINITIONS                     |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | JOIN SPECIFICATION              (qdbqj) | <= qdbqjoio     */
 /*      |   FROM FILE INDEX                       |                 */
 /*      |   NUMBER OF FROM-FIELDS                 |                 */
 /*      |   NUMBER OF TO-FIELDS                   |                 */
 /*      |   JOIN FIELD ARRAY                      |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | JREF JOIN SPECIFICATION     (qdbq_jref) | <= qdbq_jrefo   */
 /*      |   JREF JOIN ENTRIES                     |             @A7A*/
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | RECORD SELECTION SPECIFICATION  (qdbqs) | <= qdbqselo     */
 /*      |   SELECTION OPERATIONS                  |                 */
 /*      |   SELECTION OPERANDS                    |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | ORDER BY SPECIFICATION          (qdbqk) | <= qdbqkeyo     */
 /*      |   KEY FIELD NAME                        |                 */
 /*      |   KEY FIELD ATTRIBUTES                  |                 */
 /*      |                                         |                 */
 /*      |   NOTE: ORDER BY SPEC FOR A UNION       |                 */
 /*      |         OPERATION MUST ONLY BE          |                 */
 /*      |         SPECIFIED ON THE LAST QDT.      |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | GROUP BY SPECIFICATION          (qdbqg) | <= qdbqgrpo     */
 /*      |   GROUP FIELD NAME                      |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | GROUP BY SELECTION SPEC        (qdbqgs) | <= qdbqgpso     */
 /*      |   SELECTION OPERATIONS                  |                 */
 /*      |   SELECTION OPERANDS                    |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | SET OPERATION SPEC              (qdbqt) | <= qdbqtoso     */
 /*      |   SET OPERANDS                          |                 */
 /*      |   SET OPERATIONS                        |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | QDT OFFSET TABLE             (qdbqqdts) | <= qdbqqdto     */
 /*      |   OFFSET TABLE FOR QDTS PER UNION       |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*      | ACCESS PLAN                             |                 */
 /*      |                                         |                 */
 /*      +-----------------------------------------+                 */
 /*                                                                  */
 /* DEPENDENCIES:  None                                              */
 /********************************************************************/
  typedef
   _Packed struct qdbqattr_t { /* Typedef for Query attributes.      */
                               /* Offset(34,0) in the QDT header.    */
     unsigned qdbqnst:1;       /* Offset(34,0) Status messages.      */
                               /* 0  Don't send status messages.     */
                               /* 1  Send status messages during     */
                               /*    query and I/O processing.       */
                               /* Status messages are never sent for */
                               /* batch jobs.                        */
     unsigned qdbqdist:1;      /* Offset(34,1) Distinct records.     */
                               /* 0  Don't produce distinct records. */
                               /* 1  Eliminate duplicate records     */
                               /*    from the query result.          */
     unsigned qdbqpgmd:1;      /* Offset(34,2) Program defined       */
                               /* files.                             */
                               /* 0  Ignore IDDU data definitions.   */
                               /* 1  Use IDDU data definitions for   */
                               /*    program described files.        */
     unsigned qdbqterr:1;      /* Offset(34,3) Tolerate decimal data */
                               /* errors.                            */
                               /* 0  Decimal data errors will result */
                               /*    in an exception being issued.   */
                               /* 1  Decimal data errors will be     */
                               /*    ignored.                        */
     unsigned qdbqdt_2:1;      /* Offset(34,4) RESERVED              */
     unsigned qdbqintd:1;      /* Offset(34,5) Integer division.     */
                               /* 0  Don't perform integer division. */
                               /* 1  Perform integer division.       */
                               /*    Division of two integer         */
                               /*    (binary) numbers produces a     */
                               /*    zero precision result.          */
     unsigned qdbqdt_3:1;      /* Offset(34,6) RESERVED              */
     unsigned qdbqchgx:1;      /* Offset(34,7) Changed files excep-  */
                               /* tion.                              */
                               /* 0  No exception requested.         */
                               /*                                    */
                               /*                                    */
                               /* 1  Send an exception when a        */
                               /*    queried file has changed since  */
                               /*    creation of the input access    */
                               /*    plan.                           */
     unsigned qdbqsaap:1;      /* Offset(35,0) SAA, no precision     */
                               /* reduction.                         */
                               /* 0  Allow precision reduction.      */
                               /* 1  Disallow reduction of the pre-  */
                               /*    cision of a derived result.     */
                               /*    Instead, reduce significant     */
                               /*    digits when necessary.          */
     unsigned qdbqddmx:1;      /* Offset(35,1) DDM files exception.  */
                               /* 0  No exception requested.         */
                               /* 1  Send an exception when a        */
                               /*    queried file is a DDM file.     */
     unsigned qdbqraut:1;      /* Offset(35,2) Resolve authority.    */
                               /* 0  Normal authority checking.      */
                               /*    User must have corresponding    */
                               /*    data right for each open option.*/
                               /* 1  Check for at least one data     */
                               /*    right (Read, Add, Update, or    */
                               /*    Delete) regardless of the open  */
                               /*    options.                        */
     unsigned qdbqsqlb:1;      /* Offset(35,3) Use SQL definition of */
                               /* binary.                            */
                               /* 0  Binary fields have digits as    */
                               /*    known by the data base.         */
                               /* 1  Binary fields in SQL tables and */
                               /*    views have 11 digits if big     */
                               /*    binary and 5 digits if small.   */
     unsigned qdbqaltc:1;      /* Offset(35,4) Alternate computa-    */
                               /* tion.                              */
                               /* 0  Don't use alternate computa-    */
                               /*    tion.                           */
                               /* 1  Use alternate computation.      */
                               /*    Some derivations wont overflow  */
                               /*    as fast when no precision       */
                               /*    reduction is allowed            */
                               /*    (QDBQSAAP=1). Also use user     */
                               /*    defined result field size for 1 */
                               /*    operation derivations (+,-,*,/) */
                               /*                                    */
                               /*                                    */
     unsigned qdbqsubq:1;      /* Offset(35,5) QDT contains at least */
                               /* one subquery. This does not span   */
                               /* across UNIONs.                     */
     unsigned qdbqsubx:1;      /* Offset(35,6) Subcharacters excep-  */
                               /* tion.  Specifies what to do if,    */
                               /* during CCSID compatibility proc-   */
                               /* essing, a conversion  will or may  */
                               /* occur on the data such that infor- */
                               /* mation may be lost or misinter-    */
                               /* preted.                            */
                               /* 0  Allow the query to finish       */
                               /*    Information messages will be    */
                               /*    returned by QQ if this condi-   */
                               /*    tion may or (in the case of     */
                               /*    literals) will occur.           */
                               /* 1  Send an exception:  For         */
                               /*    literals and host variable      */
                               /*    values exception will be sent   */
                               /*    during the open, check QDT or   */
                               /*    create access plan of the query */
                               /*    if subcharacters were used      */
                               /*    during the conversion  of the   */
                               /*    value.  For fields and trans-   */
                               /*    late tables error will occur    */
                               /*    during I/O operations on the    */
                               /*    query if subcharacters are      */
                               /*    used.                           */
     unsigned qdbqdt_4:1;      /* Offset(35,7) RESERVED              */
   } QDBQATTR_T;               /*                                    */

  typedef
   _Packed struct qdbqdt_7_t { /* Typedef for flags in QDT header    */
                               /* At offset(72,0) in QDT header  @A1C*/
     unsigned qdbqvlit:1;      /* Offset(72,0) When bit set to ON,   */
                               /* treat literal as variable length   */
                               /* literal.                           */
     unsigned qdbqdt_8:5;      /* Offset(72,1) RESERVED              */
     unsigned qdbqopta:1;      /* Offset(72,6) Optimize all indexes  */
                               /* over the query files.              */
                               /* 1  Optimize (consider) all indexes */
                               /*    built over the query file(s).   */
                               /*    This may increase the time it   */
                               /*    takes for the optimization of   */
                               /*    the query to occur.             */
                               /* 0  The optimizer will determine    */
                               /*    how many indexes to consider    */
                               /*    when optimizing the query. The  */
                               /*    optimizer will 'time out' if    */
                               /*    the time spent optimizing       */
                               /*    becomes significant when com-   */
                               /*    pared to the time it takes for  */
                               /*    the query to execute.           */
     unsigned qdbqmapbd:1;     /* Offset(72,7) RESERVED              */
     unsigned qdbqdt_9:7;      /* Offset(73,0) RESERVED.         @A3A*/

     unsigned qdbq_force_temp:1; /* Force query records to a         */
                               /* temporary result. Note that        */
                               /* this is only honored if set        */
                               /* on for the last, outermost         */
                               /* (i.e. non-subquery) QDT of         */
                               /* a union.  It is ignored for        */
                               /* all other QDTs of the query.       */
                               /* 0 = Normal processing              */
                               /* 1 = Force results of entire        */
                               /*     query into a temporary         */
                               /*     result.                    @A3A*/
   } QDBQDT_7_T;               /*                                    */

   typedef
   _Packed struct qdbqfbk_t {  /* Typedef for Query feedback at      */
                               /* offset(76,0) in the QDT header.The */
                               /* following information is returned  */
                               /* upon successful completion of the  */
                               /* query.                         @A1C*/
     struct qdbqqtyp_t {       /* Offset(76,0) Query status indica-  */
                               /* tors.                              */
       unsigned qdbqtemp:1;    /* Offset(76,0) Temporary result.     */
                               /* 0  No temporary result.            */
                               /* 1  Temporary result created.       */
       unsigned qdbqcomp:1;    /* Offset(76,1) Selection completion. */
                               /* 0  Selection not complete.         */
                               /* 1  Selection is complete.          */
                               /* If selection is complete, the open */
                               /* feedback area contains the number  */
                               /* of selected records. If selection  */
                               /* is not complete, record selection  */
                               /* may be performed while reading the */
                               /* records and the open feedback may  */
                               /* indicate more records than are     */
                               /* ultimately selected.               */
       unsigned qdbqdt_11:1;   /* Offset(76,2) RESERVED              */
       unsigned qdbqacpi:1;    /* Offset(76,3) Access plan indi-     */
                               /* cator.                             */
                               /* 0  No access plan present.         */
                               /* 1  QDT is or is part of an access  */
                               /*    plan.                           */
       unsigned qdbqsreg:1;    /* Offset(76,4) QQ sets to on if QDT  */
                               /* contains special registers CURRENT */
                               /* USER, CURRENT SERVER, or CURRENT   */
                               /* TIMEZONE.                          */
       unsigned qdbqsubw:1;    /* Offset(76,5) Subcharacters         */
                               /* warning.  Specifies whether,       */
                               /* during CCSID compatibility proc-   */
                               /* essing, subcharacters may be or    */
                               /* have been used in the query.       */
                               /* 0  No subcharacters were or will   */
                               /*    be used.                        */
                               /* 1  Subcharacters may be or were    */
                               /*    used in the query.              */
       unsigned qdbqsqlt:1;    /* Offset(76,6)                       */
                               /* 0  Not all SQL tables              */
                               /* 1  All SQL tables                  */
       unsigned qdbqlblst:1;   /* Offset(76,7) Library list was used */
                               /* to determine referenced table.     */
                               /* Possibly due to an OVRDBF          */
       unsigned qdbqcurdt:1;   /* Offset(77,0) QDT contains CURRENT  */
                               /* DATE or CURRENT TIME or CURRENT    */
                               /* TIMESTAMP                          */
       unsigned qdbqdt_12:7;   /* Offset(77,1) RESERVED              */
     } qdbqqtyp;               /*                                    */
   } QDBQFBK_T;                /*                                    */

   typedef _Packed struct qdbqdt_13_T {    /* Offset(78,0)           */
     int      qdbqdtln;        /* Offset(78,0) Length of query def.  */
     char     qdbqdt_14[24];   /* Offset(82,0) RESERVED             */
   } QDBQDT_13_T;              /*                                    */

   typedef _Packed
   struct qdbq_posnopts_t {    /* Offset(176,0) ORed byte containing */
                               /* an indicator for every scrolling   */
                               /* options which will be used for     */
                               /* this query.  Scrolling option of   */
                               /* next is always assumed.        @A1C*/
     unsigned qdbq_posnopts_prior:1;
                               /* Offset(176,0) Scrolling to pre-    */
                               /* vious record is used               */
     unsigned qdbq_posnopts_first:1;
                               /* Offset(176,1) Scrolling to first   */
                               /* record is used                     */
     unsigned qdbq_posnopts_last:1;
                               /* Offset(176,2) Scrolling to the     */
                               /* last record is used                */
     unsigned qdbq_posnopts_before:1;
                               /* Offset(176,3) Scrolling to before  */
                               /* the first record is used           */
     unsigned qdbq_posnopts_after:1;
                               /* Offset(176,4) Scrolling to after   */
                               /* the last record is used            */
     unsigned qdbq_posnopts_current:1;
                               /* Offset(176,5) Re-retrieval of the  */
                               /* current record is used             */
     unsigned qdbq_posnopts_relative:1;
                               /*                                    */
                               /*                                    */
                               /* Offset(176,6) Scrolling to a       */
                               /* record relative to the current     */
                               /* record is used                     */
     unsigned qdbqdt_17:9;     /* Offset(176,7) RESERVED             */
   } QDBQ_POSNOPTS_T;          /*                                    */

   typedef _Packed struct qdbq_ext_bits_t {
                               /* Offset(178,0) Misc. bits in the    */
                               /* QDT header                         */
     unsigned qdbq_ctlblk:1;   /* Offset(178,0) Indicates that the   */
                               /* caller will be control record      */
                               /* blocking, so ignore SEQONLY()      */
                               /* overrides                          */
     unsigned qdbq_norolb:1;   /* Offset(178,1) Rollback HOLD can    */
                               /* leave the position of this cursor  */
                               /* as unknown.                        */
     unsigned qdbq_stream_cursor:1;
                               /* Offset(178,2) The user of this     */
                               /* query will attempt to read records */
                               /* from this query as fast as pos-    */
                               /* sible, Therefore VLIC should       */
                               /* attempt to bring disk buffer ASAP  */
     unsigned qdbqdt_54:4;     /* Offset(178,3) RESERVED             */
     unsigned qdbqdt_18:1;     /* Offset(178,7) RESERVED             */
   } QDBQ_EXT_BITS_T;          /*                                    */

   typedef _Packed struct qdbq_ext_bits2_t {
                               /* Offset(179,0) More bits in the     */
                               /* QDT header extension           @A3A*/
       unsigned qdbqdt_57:2;   /* Offset(179,0 RESERVED          @A3A*/
       unsigned qdbq_trust_posn:1; /* Offset(179,2) Trust scrolling  */
                               /* option.                            */
                               /* 0 = Query optimizer assumes        */
                               /*     that any type of cursor        */
                               /*     positioning may be done.       */
                               /* 1 = Settings of qdbq_posnopts      */
                               /*     can be trusted.  The user      */
                               /*     that built this QDT and        */
                               /*     knowingly set the options      */
                               /*     could experience problems      */
                               /*     if cursor positioning not      */
                               /*     indicated is attempted.        */
                               /*     This bit should be set on      */
                               /*     with qdbq_posnopts set to      */
                               /*     '0000'X to give the query      */
                               /*     optimizer more flexibility     */
                               /*     in choosing the best data      */
                               /*     access method and also to      */
                               /*     enable SMP methods such        */
                               /*     as parallel table scan         */
                               /*     and hash join.             @A3A*/
       unsigned qdbqdt_58:5;   /* Offset(179,3) RESERVED.        @A3A*/
   } QDBQ_EXT_BITS2_T;         /*                                @A3A*/

   typedef _Packed struct qdbq_ext_bits3_t {
                               /* Offset(180,0) More bits in the     */
                               /* QDT header extension           @A5A*/
       unsigned qdbqdt_62:1;   /* Offset(180,0 RESERVED          @A5A*/
       unsigned qdbq_searched_update:1; /* Offset(180,1) This bit    */
                               /* must be set on for a SEARCHED      */
                               /* update (outermost QDT only).   @A5A*/
       unsigned qdbq_searched_delete:1; /* Offset(180,2) This bit    */
                               /* must be set on for a SEARCHED      */
                               /* delete (outermost QDT only).   @A5A*/
       unsigned qdbqdt_63:2;   /* Offset(180,3) RESERVED.        @A6C*/
       unsigned qdbq_drvtbl:1; /* Offset(180,5) derived table QDT@A6A*/
                               /* 0 = this QDT is not part of a      */
                               /*     derived table                  */
                               /* 1 = this QDT is part of a derived  */
                               /*     table                          */
       unsigned qdbqdt_64:2;   /* Offset(180,6) RESERVED.        @A6A*/
   } QDBQ_EXT_BITS3_T;         /*                                @A5A*/

 typedef _SPCPTR  QDBQPTR_T;   /* Offset(0,0) QDT basing pointer.@A2C*/

 typedef _Packed struct qdbqh_t { /* Offset(0,0) Based on qdbqptr.   */
                               /* QDT header.                        */
   int      qdbqfilo;          /* Offset(0,0) OFFSET TO              */
                               /* FILE/LIB/FMT/MBR SPECIFICATIONS.   */
   int      qdbqfldo;          /* Offset(4,0) OFFSET TO THE RECORD   */
                               /* SPECIFICATIONS.  0 INDICATES THAT  */
                               /* THE RECORD SPECIFICATIONS SHOULD   */
                               /* BE TAKEN FROM THE FILE FORMAT.  0  */
                               /* IS INVALID IF THERE ARE MULTIPLE   */
                               /* FILES IN THE FILE SPECIFICATION    */
                               /* AND THIS IS NOT A GROUP BY QUERY.  */
   int      qdbqjoio;          /* Offset(8,0) OFFSET TO JOIN SPEC-   */
                               /* IFICATIONS.  0 INDICATES THAT THIS */
                               /* IS NOT A JOIN QUERY.               */
   int      qdbqselo;          /* Offset(12,0) OFFSET TO THE RECORD  */
                               /* SELECTION SPECIFICATIONS.  0 INDI- */
                               /* CATES THAT NO RECORD SELECTION IS  */
                               /* TO OCCUR.                          */
   int      qdbqkeyo;          /* Offset(16,0) OFFSET TO THE ORDER   */
                               /* BY SPECIFICATIONS.  0 INDICATES    */
                               /* THAT THE RECORDS WILL BE RETURNED  */
                               /* IN THE FILES ACCESS PATH ORDER. IF */
                               /* THIS IS A JOIN, THE ACCESS PATH    */
                               /* ORDER OF THE FIRST FILE IN THE     */
                               /* FILE ARRAY WILL BE USED.  -1 INDI- */
                               /* CATES THAT THE RESULT RECORDS WILL */
                               /* BE RETURNED IN NO GUARANTEED       */
                               /* ORDER. EVEN RUNNING THE SAME QUERY */
                               /* TWICE MAY PRODUCE A DIFFERENT      */
                               /* RESULT ORDER.                      */
   int      qdbqgrpo;          /* Offset(20,0) OFFSET TO THE GROUP   */
                               /* BY SPECIFICATIONS.  0 INDICATES    */
                               /* THAT NO GROUP BY IS TO OCCUR.      */
   char     qdbqdt_1[4];           /* Offset(24,0) RESERVED              */
   int      qdbqgpso;          /* Offset(28,0) OFFSET TO THE GROUP   */
                               /* BY SELECTION SPECIFICATIONS.  0    */
                               /* INDICATES THAT NO GROUP BY         */
                               /* SELECTION IS TO OCCUR. IF QDBQGRPO */
                               /* IS 0, THIS OFFSET IS IGNORED.      */
   char     qdbqfin;           /* Offset(32,0) QUERY COMPLETION      */
                               /* INDICATOR                          */
                               /* A  QUERY NEED NOT BE COMPLETE      */
                               /*    BEFORE RETURNING. DATA BASE     */
                               /*    WILL ATTEMPT TO MINIMIZE THE    */
                               /*    ENTIRE QUERY AND RETRIEVAL      */
                               /*    TIME.  SELECTION MAY BE DONE AT */
                               /*    I/O TIME.                       */
                               /* F  QUERY NEED NOT BE COMPLETE      */
                               /*    BEFORE RETURNING. DATA BASE     */
                               /*    WILL ATTEMPT TO MINIMIZE THE    */
                               /*    TIME TO GET THE FIRST BUFFER OF */
                               /*    RESULTS.  SELECTION MAY BE DONE */
                               /*    AT I/O TIME.                    */
                               /* M  QUERY NEED NOT BE COMPLETE      */
                               /*    BEFORE RETURNING, HOWEVER,      */
                               /*    SELECTION AT I/O TIME SHOULD BE */
                               /*    MINIMIZED SO LONG WAITS FOR THE */
                               /*    NEXT SELECTED RECORDS WILL BE   */
                               /*    MINIMIZED.                      */
                               /* C  QUERY MUST BE COMPLETED BEFORE  */
                               /*    RETURNING. IF THIS IS A JOIN,   */
                               /*    THE RECORDS WILL HAVE TO BE PUT */
                               /*    INTO A TEMPORARY.               */
   char     qdbqtem;           /* Offset(33,0) QUERY TEMPORARY       */
                               /* RESULT INDICATOR                   */
                               /* N  TEMPORARY RESULTS SHOULD BE     */
                               /*    PROHIBITED.                     */
                               /* O  TEMPORARY RESULTS ARE ALLOWED   */
                               /*    BUT SHOULD BE USED ONLY IF NEC- */
                               /*    ESSARY TO IMPLEMENT THE QUERY.  */
                               /*    IF A READ PREVIOUS CAN BE       */
                               /*    REQUESTED THEN 'O' MUST BE      */
                               /*    USED.                           */
                               /* T  TEMPORARY RESULTS ARE ALLOWED   */
                               /*    BUT SHOULD BE ONLY USED IF      */
                               /*    NECESSARY   TO IMPLEMENT THE    */
                               /*    QUERY.  However, if TEMPORARY   */
                               /*    RESULTS ARE USED THEN USE THE   */
                               /*    FAST TSORT METHOD WHICH READS   */
                               /*    direcly from its sort may       */
                               /*    be used.  This option can not   */
                               /*    be specified if read previous   */
                               /*    is to be used.  BE USED.        */
                               /* A  TEMPORARY RESULTS ARE ALLOWED   */
                               /*    AND SHOULD BE USED IF BETTER    */
                               /*    PERFORMANCE CAN BE ACHIEVED BY  */
                               /*    USING A TEMPORARY RESULT.  Use  */
                               /*    'A' when the user will NOT      */
                               /*    request previous records to be  */
                               /*    read.  See comments above.      */
    QDBQATTR_T qdbqattr;       /* Offset(34,0) Query attributes.     */
   short    qdbqkunum;         /* Offset(36,0) NODUPKEY NUMBER OF    */
                               /* KEY FIELDS.  DATA BASE WILL NOT    */
                               /* RETURN ANY RECORDS WITH DUPLICATE  */
                               /* KEYS BY USING THIS NUMBER OF KEY   */
                               /* FIELDS AS A COMPARE LENGTH. -1     */
                               /* INDICATES THAT ALL THE KEY FIELDS  */
                               /* WILL BE USED AS A COMPARE LENGTH.  */
                               /* NOT APPLICABLE IF QDBQKEYO IS -1.  */
   int      qdbqnumrcd;        /* Offset(38,0) NUMBER OF CANDIDATE   */
                               /* RECORDS TO PROCESS. THIS NUMBER    */
                               /* WILL BE THE NUMBER OF RECORDS      */
                               /* PROCESSED BEFORE SELECTION.  ONLY  */
                               /* THE FIRST N RECORDS IN THE FILE    */
                               /* ARE PROCESSED.  THE USE OF THIS    */
                               /* FIELD IS FOR SAMPLING RESULTS.     */
                               /* NOTE THAT NO RESULTS MAY BE        */
                               /* RETURNED IF NONE OF THE CANDIDATES */
                               /* ARE SELECTED. IF THIS IS A JOIN,   */
                               /* THE NUMBER OF CANDIDATES CONSIST   */
                               /* OF JOIN RECORDS AFTER THE JOIN     */
                               /* OPERATION. 0 INDICATES THAT ALL    */
                               /* THE RECORDS SHOULD BE PROCESSED.   */
   int      qdbqnxqo;          /* Offset(42,0) OFFSET TO NEXT QDT. 0 */
                               /* IF THIS IS THE ONLY QDT OR IF THIS */
                               /* IS THE LAST QDT.                   */
   int      qdbqtoso;          /* Offset(46,0) OFFSET TO THE SET     */
                               /* OPERATION SPECIFICATIONS.  THE SET */
                               /* OPERATION SPECS CAN ONLY BE SPECI- */
                               /* FIED ON THE LAST QDT.  0 INDICATES */
                               /* THAT NO SET OPERATION IS TO OCCUR. */
                               /* IF ONLY ONE QDT IS SPECIFIED, THIS */
                               /* OFFSET IS IGNORED.                 */
   char     qdbqdt_5[4];       /* Offset(50,0) RESERVED              */
   int      qdbqqdto;          /* Offset(54,0) Offset to the QDT     */
                               /* Table containing offsets to all    */
                               /* QDTs between UNIONs.               */
   char     qdbqdt_6[8];       /* Offset(58,0) RESERVED              */
   char     qdbqdfmt;          /* Offset(66,0) Date format used as   */
                               /* the preferred format for validity  */
                               /* checking a date string or when     */
                               /* mapping a character field to a     */
                               /* date.  The values for this field   */
                               /* may be:                            */
                               /* 'FE'X  Job Default format          */
                               /* '01'X  USA format                  */
                               /* '03'X  SO format                   */
                               /* '05'X  EUR format                  */
                               /* '07'X  JIS format                  */
                               /* '17'X  MDY format                  */
                               /* '18'X  DMY format                  */
                               /* '19'X  YMD format                  */
                               /* '1A'X  JUL format                  */
                               /* When the value of this field is    */
                               /* 'FE'X, then the preferred format   */
                               /* will be obtained from the job      */
                               /* attributes, which will have the    */
                               /* value '17'X, '18'X, '19'X, or      */
                               /* '1A'X.                             */
   char     qdbqdsep;          /* Offset(67,0) Date separator used   */
                               /* as the preferred format for        */
                               /* validity checking a date string or */
                               /* when mapping a character field to  */
                               /* a date.  It is only set when       */
                               /* QDBQDFMT is 'FE'X, '17'X, '18'X,   */
                               /* '19'X or '1A'X. The values for     */
                               /* this field may be:                 */
                               /* '00'X  Job default separator       */
                               /* 'EE'X  Implied separator           */
                               /* '/'    Slash separator             */
                               /* '-'    Dash separator              */
                               /* '.'    Period separator            */
                               /* ','    Comma separator             */
                               /* ' '    Blank separator             */
                               /* When the value of this field is    */
                               /* '00'X, then the preferred sepa-    */
                               /* rator will be obtained from the    */
                               /* job attributes, which will be 1 of */
                               /* the values above except for '00'X  */
                               /* & 'EE'X.  When value of this field */
                               /*                                    */
                               /* is 'EE'X, the implied separator    */
                               /* for the format will be used.       */
   char     qdbqtfmt;          /* Offset(68,0) Time format used as   */
                               /* the preferred format when validity */
                               /* checking a time string or when     */
                               /* mapping a character field to a     */
                               /* time.  The values for this field   */
                               /* may be:                            */
                               /* 'FE'X  Job Default format          */
                               /* '01'X  USA format                  */
                               /* '03'X  ISO format                  */
                               /* '05'X  EUR format                  */
                               /* '07'X  JIS format                  */
                               /* '1B'X  HMS format                  */
                               /* When the value of this field is    */
                               /* 'FE'X, then the preferred format   */
                               /* will be obtained from the job      */
                               /* attributes, which will have the    */
                               /* value '1B'X.                       */
   char     qdbqtsep;          /* Offset(69,0) Time separator used   */
                               /* as the preferred separator when    */
                               /* validity checking a time string or */
                               /* when mapping a character field to  */
                               /* a time.  It is only set when       */
                               /* qdbqtfmt is 'FE'X or '1B'X. The    */
                               /* values for this field may be:      */
                               /* '00'X  Job default separator       */
                               /* 'EE'X  Implied separator           */
                               /* '.'    Period separator            */
                               /* ','    Comma separator             */
                               /* ' '    Blank separator             */
                               /* ':'    Colon separator             */
                               /* When the value of this field is    */
                               /* '00'X, then the preferred sepa-    */
                               /* rator will be obtained from the    */
                               /* job attributes, which will be 1 of */
                               /* the values above except for '00'X  */
                               /* & 'EE'X.  When value of this field */
                               /* is 'EE'X, the implied separator    */
                               /* for the format will be used.       */
   unsigned short qdbqcsdc;    /* Offset(70,0) CCSID constant tag.   */
                               /* If non zero this specifies the     */
                               /* CCSID with which the literals in   */
                               /* the QDT should be tagged.  If this */
                               /* field specifies an SBCS CCSID and  */
                               /* a literal has DBCS data the asso-  */
                               /* ciated mixed CCSID of the SBCS     */
                               /* CCSID will be used for the         */
                               /* literal.  Conversely, if the       */
                               /* literal is SBCS and this field     */
                               /* specifies a mixed or DBCS CCSID    */
                               /* the associated SBCS CCSID will be  */
                               /* used for the literal.              */
   QDBQDT_7_T qdbqdt_7;        /* Offset(72,0) More flags            */
   char     QDBQDT_10[2];      /* Offset(74,0) RESERVED              */
   QDBQFBK_T qdbqfbk;          /* Offset(76,0) Query feedback.       */
   QDBQDT_13_T qdbqdt_13;      /* Offset(78,0)                       */
   char     qdbqdofmt;         /* Offset(106,0) Date format for      */
                               /* output Date fields. The values for */
                               /* this field may be:                 */
                               /* 'FE'X  Job Default format          */
                               /* 'FF'X  Use format specified with   */
                               /*        based on field.             */
                               /* '01'X  USA format                  */
                               /* '03'X  ISO format                  */
                               /* '05'X  EUR format                  */
                               /* '07'X  JIS format                  */
                               /* '17'X  MDY format                  */
                               /* '18'X  DMY format                  */
                               /* '19'X  YMD format                  */
                               /* '1A'X  JUL format                  */
                               /* If the data type QDDFFTYP          */
                               /* is unknown ('FFFF'X) and this      */
                               /* field is 'FF'X, then the format &  */
                               /* separator are taken from the       */
                               /* format & separator specified with  */
                               /* the based on field.  If the data   */
                               /* type QDDFFTYP is Date              */
                               /* ('000B'X), then the format & sepa- */
                               /* rator are taken from the extension */
                               /* of the rec.  format                */
                               /* QDDFDTTF & QDDFDTTS. However, if   */
                               /* QDDFDTTF is 'FF'X, then the        */
                               /* format and separator are taken     */
                               /* from qdbqdofmt and qdbqdosep . If  */
                               /* either of these fields are         */
                               /* invalid, then it is an error.      */
                               /* When the value of qdbqdofmt is     */
                               /* 'FE'X, then the format will be     */
                               /* obtained from the job attributes,  */
                               /* which will have the value '17'X,   */
                               /* '18'X, '19'X, or '1A'X.            */
   char     qdbqdosep;         /* Offset(107,0) Date separator used  */
                               /* as the output separator for        */
                               /* fields.  It is only set when       */
                               /* qdbqdofmt is 'FE'X, '17'X, '18'X,  */
                               /* '19'X, or '1A'X.  The values for   */
                               /* this field may be:                 */
                               /* '00'X  Job default separator       */
                               /* 'EE'X  Implied separator           */
                               /* '/'    Slash separator             */
                               /* '-'    Dash separator              */
                               /* '.'    Period separator            */
                               /* ','    Comma separator             */
                               /* ' '    Blank separator             */
                               /* When the value of this field is    */
                               /* '00'X, then the separator will be  */
                               /* obtained from the job attributes,  */
                               /* which will be one of the values    */
                               /* above except for '00'X & 'EE'X.    */
                               /* When the value of this field is    */
                               /* 'EE'X, the implied separator for   */
                               /* the format will be used.           */
   char     qdbqtofmt;         /* Offset(108,0) Time format for      */
                               /* output Time fields. The values for */
                               /* this field may be:                 */
                               /* 'FE'X  Job Default format          */
                               /* 'FF'X  Use format specified with   */
                               /*        based on field.             */
                               /* '01'X  USA format                  */
                               /* '03'X  ISO format                  */
                               /* '05'X  EUR format                  */
                               /* '07'X  JIS format                  */
                               /* '1B'X  HMS format                  */
                               /* If the data type QDDFFTYP          */
                               /* is unknown ('FFFF'X) and this      */
                               /* field is 'FF'X, then the format &  */
                               /* separator are taken from the       */
                               /* format & separator specified with  */
                               /* the based on field.  If the data   */
                               /* type QDDFFTYP is Time              */
                               /* ('000C'X), then the format & sepa- */
                               /* rator are taken from the extension */
                               /* of the rec.  format                */
                               /* QDDFDTTF & QDDFDTTS.  However, if  */
                               /* QDDFDTTF is 'FF'X, then the        */
                               /* format and separator are taken     */
                               /* from qdbqtofmt and qdbqtosep . If  */
                               /* either of these fields are         */
                               /* invalid, then it is an error.      */
                               /* When the value of qdbqtofmt is     */
                               /* 'FE'X, then the format will be     */
                               /* obtained from the job attributes,  */
                               /* which will have the value '1B'X.   */
   char     qdbqtosep;         /* Offset(109,0) Time separator used  */
                               /* as the output separator for        */
                               /* fields.  It is only set when       */
                               /* qdbqtofmt is 'FE'X or '1B'X. The   */
                               /* values for this field may be:      */
                               /* '00'X  Job default separator       */
                               /* 'EE'X  Implied separator           */
                               /* '.'    Period separator            */
                               /* ','    Comma separator             */
                               /* ' '    Blank separator             */
                               /* ':'    Colon separator             */
                               /* When the value of this field is    */
                               /* '00'X, then the separator will be  */
                               /* obtained from the job attributes,  */
                               /* which will be one of the values    */
                               /* above except for '00'X & 'EE'X.    */
                               /* When the value of this field is    */
                               /* 'EE'X, the implied separator for   */
                               /* the format will be used.           */
   char     qdbqtsofmt;        /* Offset(110,0) Timestamp format for */
                               /* output Timestamp fields.  The      */
                               /* values for this field may be:      */
                               /* 'FE'X  Job Default format, which   */
                               /*        is just the SAA Timestamp   */
                               /*        format                      */
                               /* 'FF'X  Use format specified with   */
                               /*        based on field.             */
                               /* '09'X  SAA Timestamp format        */
                               /* If the data type QDDFFTYP          */
                               /* is unknown ('FFFF'X) and this      */
                               /* field is 'FF'X, then the format &  */
                               /* separator are taken from the       */
                               /* format & separator specified with  */
                               /* the based on field.  If the data   */
                               /* type QDDFFTYP is                   */
                               /* Timestamp ('000D'X), then the      */
                               /* format & separator are taken from  */
                               /* the extension of the rec.  format  */
                               /* QDDFDTTF & QDDFDTTS.  However, if  */
                               /* QDDFDTTF is 'FF'X, then the        */
                               /* format and separator are taken     */
                               /* from qdbqtsofmt and qdbqtsosep .   */
                               /* If qdbqtsofmt contains an invalid  */
                               /* format, then it is an error.       */
   char     qdbqdt_15;         /* Offset(111,0) RESERVED             */
   int      qdbq_optmrows;     /* Offset(112,0) A hint to the opti-  */
                               /* mizer whether the entire answer    */
                               /* set will be retrieved.  Can be     */
                               /* used by the optimizer to determine */
                               /* whether to do a sort or use an     */
                               /* existing index. A value of zero    */
                               /* means that no hint was provided. A */
                               /* small value in this field will     */
                               /* function similar to *FIRST         */
                               /* optimization option.  Used for     */
                               /* 'F' option in QDBQFIN.             */
   char     qdbqdt_16[12];     /* Offset(116,0) RESERVED         @A7C*/
   int      qdbq_jrefo;        /* Offset(128,0) Offset to JREF   @A7A*/
                               /* Join Specs.                    @A7A*/
   char     qdbqdt_65[44];     /* Offset(132,0) RESERVED         @A7C*/
   QDBQ_POSNOPTS_T qdbq_posnopts;/* Offset(176,0) ORed byte          */
                               /* indicator of scrolling options     */
   QDBQ_EXT_BITS_T qdbq_ext_bits;/*  Offset(178,0) misc. bits in     */
                               /* the qdt header.                    */
   QDBQ_EXT_BITS2_T qdbq_ext_bits2;/* Offset(179,0) misc. bits in    */
                               /* the qdt header.                @A3A*/
   QDBQ_EXT_BITS3_T qdbq_ext_bits3;/* Offset(180,0) misc. bits in    */
                               /* the qdt header.                @A5A*/
   char     qdbqdt_19[15];     /* Offset(181,0) RESERVED         @A5C*/
                               /*                                    */
   char     qdbpopnid[10];     /* Offset(196,0) Optional openid to   */
                               /* identify this query. *FILE indi-   */
                               /* cates the name of first or only    */
                               /* file specified in file spec.  Can  */
                               /* also specify a name to associate   */
                               /* with opened query file.            */
   int      qdbspcsize;        /* Offset(206,0) API users specified  */
                               /* size for space containing all API  */
                               /* QDT(s).                            */
   int      qdbqnlss;          /* Offset(210,0) Offset to the QQNLSS */
                               /* structure used for sort sequence   */
                               /* information.  This is              */
                               /* an offset from the beginning of    */
                               /* QDT.  0 indicates no QQNLSS        */
                               /* structure was passed in.           */
                               /* For non-views, if this is a        */
                               /* union or subquery, this field      */
                               /* will be ignored unless it is       */
                               /* the first QDT (for unions),        */
                               /* or the outermost QDT (for          */
                               /* subqueries).                       */
   short    qdbqsrts;          /* Offset(214,0) Field used to pass   */
                               /* the sort sequence indicator.       */
                               /* 0 - *HEX                           */
                               /* When using the following values,   */
                               /* you must have included the QQNLSS  */
                               /* structure at offset QDBQNLSS:      */
                               /* 2 - use the table/ccsid            */
                               /*     passed in QQNLSS.              */
                               /* 3 - use the SRTSEQ and             */
                               /*     LANGID passed in               */
                               /*     QQNLSS.                        */
   char     qdbqdt_53[5];      /* Offset(216,0) RESERVED             */
   char     qdbqic;            /* Offset(221,0) Query allow index    */
                               /* create indicator.                  */
                               /* 'N' = Index creation should        */
                               /*     be prohibited.                 */
                               /* 'Y', '00'X = Index creation        */
                               /*     will be allowed.               */
   char     qdbqdt_20[178];    /* Offset(222,0) RESERVED             */
 }  QDBQH_T ;                  /*                                    */


 /********************************************************************/
 /*                                                                  */
 /* FILE SPECIFICATION                                               */
 /*    The following structure defines the files, member, and        */
 /*    formats that will be used in the query.  A maximum of 32 ele- */
 /*    ments may be specified on the same query.  This specification */
 /*    is required.                                                  */
 /*                                                                  */
 /* NOTES:                                                           */
 /*    If qdbqmfop is C or E, the files will be joined in the order  */
 /*    they are specified in the qdbqn array.  This is because dif-  */
 /*    ferent orderings can produce different results.               */
 /*                                                                  */
 /*    If qdbqkeyo is 0, the first files access path will be used as */
 /*    the file order access.                                        */
 /*                                                                  */
 /*    If *LIBL, *FIRST, *LAST, or *ONLY are specified, or the files */
 /*    are overridden, the correct names will be returned in this    */
 /*    structure.                                                    */
 /*                                                                  */
 /*    If multiple files are listed in the file specifications, it   */
 /*    may or may not be necessary to specify join specifications.   */
 /*    See the join specifications section for more information on a */
 /*    multiple file query.                                          */
 /*                                                                  */
 /*     If multiple files are specified and the join types are       */
 /*     specified for each join specification entry WDBQMFOP must    */
 /*     still be set with the desired join type for the query. See   */
 /*     the join specifications section for more information.    @OJA*/
 /*                                                                  */
 /********************************************************************/
  typedef
  _Packed struct qdbqdt_21_t { /* Offset(4,0) in file spec header.   */
       unsigned qdbqmfio:1;    /* Offset(4,0) Multiple file I/O      */
                               /* options allowed through this   @A1C*/
                               /* query.                             */
                               /* 0  Only allow Reads against the    */
                               /*    first file in the array (always */
                               /*    read only for secondary files). */
                               /* 1  Allow Insert, Update or Delete  */
                               /*    operations against first file.  */
       unsigned qdbqmfjn:1;    /* Offset(4,1) Reserved.          @OJA*/
       unsigned qdbqdt_22:6;   /* Offset(4,2) RESERVED           @OJC*/
     } QDBQDT_21_T;            /*                                    */

 typedef
 _Packed struct qdbqfhdr_t {   /* Typedef for FILE SPECIFICATION     */
                               /* HEADER                         @A1C*/
     short    qdbqfilnum;      /* Offset(0,0) NUMBER OF              */
                               /* FILE/LIB/FMT/MBRS                  */
     char     qdbqmfop;        /* Offset(2,0) MULTIPLE FILE OPTION   */
                               /* ONLY APPLICABLE IF QDBQFILNUM IS   */
                               /* GREATER THAN ONE.                  */
                               /* J  INNER JOIN (NO DEFAULT VALUES   */
                               /*    WILL BE SUPPLIED IF A JOIN      */
                               /*    VALUE DOES NOT EXIST AND NO     */
                               /*    RECORD WILL BE RETURNED.)       */
                               /* C  PARTIAL OUTER JOIN (FILE        */
                               /*    CHAINING - DEFAULT VALUES WILL  */
                               /*    BE SUPPLIED IF A JOIN VALUE     */
                               /*    DOES NOT EXIST.)                */
                               /* E  EXCEPTION JOIN (DEFAULT VALUES  */
                               /*    WILL BE SUPPLIED IF A JOIN      */
                               /*    VALUE DOES NOT EXIST. ONLY      */
                               /*    RECORDS WITH DEFAULT VALUES     */
                               /*    WILL BE RETURNED.)              */
     char     qdbqmfor;        /* Offset(3,0) MULTIPLE FILE ORDER    */
                               /* OPTION ONLY APPLICABLE IF          */
                               /* QDBQFILNUM IS GREATER THAN ONE,    */
                               /* QDBQMFOP =J, AND THERE IS NO FILE  */
                               /* DISTINCT PROCESSING.  (QDBQFDST IS */
                               /* OFF FOR EACH FILE SPECIFIED IN THE */
                               /* FILE SPECIFICATIONS.)              */
                               /* PARTIAL-OUTER JOIN, EXCEPTION      */
                               /* JOIN, AND FILE DISTINCT PROCESSING */
                               /* IMPLIES NO JOIN REORDERING.        */
                               /* A  JOIN THE FILES IN ANY ORDER.    */
                               /*    THE RESULT ORDER MAY VARY EVEN  */
                               /*    WHEN RERUNNING THE SAME QUERY.  */
                               /*                                    */
                               /* N  JOIN THE FILES IN THE ORDER     */
                               /*    THEY ARE SPECIFIED.             */
     QDBQDT_21_T qdbqdt_21;    /* Offset(4,0) Flags                  */
     char     qdbqdt_23[11];   /* Offset(5,0) RESERVED               */
   } QDBQFHDR_T;               /*                                    */

   typedef
   _Packed struct qdbqflmf_t { /* Offset(16,0) FILE, LIBRARY,        */
                               /* MEMBER, AND RECORD FORMAT NAMES@A1C*/
       char     qdbqfile[10];  /* Offset(16,0) FILE NAME. IF AN      */
                               /* OVERRIDE IS IN EFFECT TO ANOTHER   */
                               /* FILE, THE ACTUAL FILE NAME WILL BE */
                               /* RETURNED IN THIS FIELD.            */
       char     qdbqlib[10];   /* Offset(26,0) LIBRARY NAME OR       */
                               /* *LIBL. IF *LIBL IS USED, THE       */
                               /* ACTUAL LIBRARY NAME WILL BE        */
                               /* RETURNED IN THIS FIELD.            */
       char     qdbqmbr[10];   /* Offset(36,0) MEMBER NAME, *FIRST,  */
                               /* OR *LAST.  IF *FIRST OR *LAST ARE  */
                               /* USED, THE ACTUAL MEMBER NAME WILL  */
                               /* BE RETURNED IN THIS FIELD.         */
       char     qdbqfmt[10];   /* Offset(46,0) FORMAT NAME OR *ONLY  */
                               /* IF *ONLY IS USED, THE ACTUAL       */
                               /*                                    */
                               /* FORMAT NAME WILL BE RETURNED IN    */
                               /* THIS FIELD.                        */
     } QDBQFLMF_T;             /*                                    */

   typedef
   _Packed struct qdbqfflg_t { /* Offset(56,0) FILE SPECIFICATION    */
                               /* FLAGS                          @A1C*/
       unsigned qdbqfdst:1;    /* Offset(56,0) FILE DISTINCT FLAG    */
                               /* SPECIFIES, FOR THE RECORDS THAT    */
                               /* MAKE UP THE JOIN SECONDARIES FOR A */
                               /* JOIN QUERY, WHETHER ONLY THE FIRST */
                               /* RECORD OR ALL RECORDS THAT SATISFY */
                               /* THE JOIN CONDITIONS SHOULD PARTIC- */
                               /* IPATE IN THE JOIN.  THIS FLAG ONLY */
                               /* APPLIES TO FILES 2-N.              */
                               /* 0  ALL RECORDS PARTICIPATE         */
                               /* 1  ONLY THE FIRST RECORD PARTIC-   */
                               /*    IPATES                          */
       unsigned qdbqfujn:1;    /* Offset(56,1) Unique join fanout.   */
                               /* Specifies whether the number of    */
                               /* join records found can exceed 1    */
                               /* 0  Multiple join rcds allowed      */
                               /* 1  Only one join-to record may be  */
                               /*    found for this file             */
                               /* Only applies to files 2-N          */
       unsigned qdbqfgna:1;    /* Offset(56,2) RESERVED.             */
       unsigned qdbqfngn:1;    /* Offset(56,3) RESERVED.             */
       unsigned qdbqnmch:1;    /* Offset(56,4) Name change indi-     */
                               /* cator.                             */
                               /* 0  The library, file or member     */
                               /*    name in the specified QDT (at   */
                               /*    offset QDBQFILO ) did not       */
                               /*    change as a result of an over-  */
                               /*    ride                            */
                               /* 1  The library, file or member     */
                               /*    name in the specified QDT (at   */
                               /*    offset QDBQFILO ) has changed   */
                               /*    due to an override              */
       unsigned qdbqflbo:1;    /* Offset(56,5) Name change indi-     */
                               /*       Library name overridden      */
                               /* 0 = The library name in the        */
                               /*     specified QDT (at offset       */
                               /*     QDBQFILO) did not change       */
                               /*     as a result of an override.    */
                               /* 1 = The library name in the        */
                               /*     specified QDT (at offset       */
                               /*     QDBQFILO) was changed          */
                               /*     due to an override to be       */
                               /*     *LIBL and the file was         */
                               /*     found using *LIBL as the       */
                               /*     library name.                  */
                               /*     This bit is a feedback bit.    */
                               /*     QDT user should not set it     */
       unsigned qdbqf_nldft:1; /* Offset(56,6) Determine what type   */
                               /*  of values are to be returned for  */
                               /*  unmatched records of a partial    */
                               /*  outer or an exception join.   @OJA*/
                               /* 0 = Return the default values      */
                               /*     associated with the field for  */
                               /*     unmatched records.             */
                               /* 1 = Return Null values for all     */
                               /*     unmatched records.             */
       unsigned qdbqdt_24:1;   /* Offset(56,7) RESERVED          @OJC*/
     } QDBQFFLG_T;             /*                                    */

   typedef
   _Packed struct qdbqn_t {    /* Offset(16,0) in file spec      @A1C*/
                               /* FILE/LIBRARY/MEMBER/FORMAT ARRAY   */
     QDBQFLMF_T qdbqflmf;      /* Offset(16,0) FILE, LIBRARY,        */
                               /* MEMBER, AND RECORD FORMAT NAMES    */
     QDBQFFLG_T qdbqfflg;      /* Offset(56,0) FILE SPECIFICATION    */
                               /* FLAGS                              */
     char  qdbqmfvw;           /* Offset(57,0) Reserved.         @OJA*/
     char  qdbqmfvw_spc;       /* Offset(58,0) Reserved.         @OJA*/
     short qdbqf_qdtnum;       /* Offset(59,0) Index into the QDT    */
                               /* Offset table for the derived table */
                               /*                                @A6A*/
     char  QDBQDT_25[19];      /* Offset(61,0) RESERVED          @A6C*/
   } QDBQN_T;                  /*                                    */

 typedef
 _Packed struct qdbqf_t {      /* Offset(0,0) FILE SPECIFICATION @A1C*/
   QDBQFHDR_T qdbqfhdr;        /* Offset(0,0) FILE SPECIFICATION     */
                               /* HEADER                             */
   QDBQN_T qdbqn[32];          /* Offset(16,0)                       */
                               /* FILE/LIBRARY/MEMBER/FORMAT ARRAY   */
 } QDBQF_T;                    /*                                    */


 /********************************************************************/
 /*                                                                  */
 /* RECORD FORMAT SPECIFICATION                                      */
 /*    The following structure defines the fields that will be used  */
 /*    in the query.  The structure is mapped by member QDBRTVFD     */
 /*    file QSYSINC/H.                                               */
 /*    If join is specified, this specification is required.         */
 /********************************************************************/
 typedef
 _Packed struct  {             /*                                @A2A*/
   char     QDBQR[1];          /* Offset(0,0) Variable length.       */
 } QDBQR_T;                    /* RECORD SPECIFICATIONS.         @A2A*/

 /********************************************************************/
 /*                                                                  */
 /* JOIN SPECIFICATION                                               */
 /*                                                                  */
 /*   The following structure defines how the files are to be joined */
 /*   by the query.  One join specification exists for the entire    */
 /*   query definition.  A join specification entry consists of a    */
 /*   from-field, a join operator, a to-field, and optionally the    */
 /*   join type to be performed.  The join specification entries can */
 /*   be inserted in any order with respect to the file              */
 /*   specifications.                                            @OJC*/
 /*                                                                  */
 /*   The join type to be performed can be specified in either the   */
 /*   file specifications (WDBQMFOP) which will specify the join     */
 /*   type for the entire query, or the join specification entry     */
 /*   (WDBQJ_TYPE) which will specify the join type for just that    */
 /*   entry.                                                     @OJA*/
 /*                                                                  */
 /*   If no join specification are given for a particular to-file    */
 /*   and none can be found within the record selection (Only for    */
 /*   WDBQMFOP=J) then WDBQMFOP will determine if default records    */
 /*   should be returned for the cartesian product join for that     */
 /*   to-file.                                                   @OJA*/
 /*                                                                  */
 /*                                                                  */
 /*   INNER JOIN                                                     */
 /*                                                                  */
 /*   If this is an inner join (WDBQMFOP=J) and no join              */
 /*   specifications are given for a particular to-file, the         */
 /*   system will search the record selection specifications for     */
 /*   any possible implied join specifications.  If no join          */
 /*   specifications can be derived from the record selection        */
 /*   specifications, cartesian product will be used to implement    */
 /*   the join.                                                      */
 /*                                                                  */
 /*   All join specifications can be given in the record selection   */
 /*   specifications.  In this case, it is not necessary to provide  */
 /*   a join specification.                                          */
 /*                                                                  */
 /*                                                                  */
 /*   PARTIAL-OUTER OR EXCEPTION JOIN                                */
 /*                                                                  */
 /*   If this is not an inner join (WDBQMFOP not J) and no join      */
 /*   specifications are given for a particular to-file, the         */
 /*   system will use cartesian product to implement the join. This  */
 /*   cartesian product differs from the cartesian product that was  */
 /*   specified for the inner join in that if the to-file contains   */
 /*   no records then default records will be returned. In addition, */
 /*   only one join operator can be specified for a particular       */
 /*   to-file.                                                   @OJC*/
 /*                                                                  */
 /*                                                                  */
 /*   Notes:                                                         */
 /*    If multiple join types are specified in a query then the      */
 /*    common join type will be used to implement the query and      */
 /*    relative record number (RRN) selection will be added.     @OJA*/
 /*                                                                  */
 /********************************************************************/

 typedef
 _Packed struct qdbqjhdr_t {   /* Offset(0,0) JOIN SPECIFICATIONS@A1C*/
                               /* HEADER                             */
     int      qdbqjln;         /* Offset(0,0) LENGTH OF THIS JOIN    */
                               /* SPECIFICATION                      */
     short    qdbqjknum;       /* Offset(4,0) NUMBER OF FROM/TO JOIN */
                               /* FIELD SPECIFICATIONS.              */
     char     qdbqdt_26[10];   /* Offset(6,0) RESERVED               */
    } QDBQJHDR_T;              /*                                    */

   typedef
   _Packed struct qdbqjflg_t { /* Offset(70,0) Join specification    */
                               /* flags.                         @OJA*/
       unsigned qdbqjfprf:1;   /* Offset(70,0) Reserved.         @OJA*/
       unsigned qdbqjvw:1;     /* Offset(70,1) Reserved.         @OJA*/
       unsigned qdbqj_type_sup:1; /* Offset(70,2) Indicates that the */
                               /* type of join has been specified    */
                               /* for this join field pair in the    */
                               /* field (qdbqj_type).            @OJA*/
                               /* 0 = Use the join type specified    */
                               /*     in the field (qdbqmfop) for    */
                               /*     this join field pair.          */
                               /* 1 = Use the join type specified    */
                               /*     in the field (qdbqj_type) for  */
                               /*     this join field pair.          */
       unsigned qdbqdt_oj:5;   /* Offset(70,3) Reserved.         @OJA*/
     } QDBQJFLG_T;             /*                                @OJA*/

  typedef
  _Packed struct qdbqjfld_t {  /* Offset(16,0)                   @A1C*/
                               /* JOIN SPECIFICATIONS ARRAY.  ARRAY  */
                               /* OF FIELDS WHICH DEFINE THE FROM    */
                               /* AND TO FIELDS TO USE WHEN JOINING. */
   char     qdbqjfnm[30];      /* Offset(0,0) JOIN FROM FIELD NAME   */
   short    qdbqjfnum;         /* Offset(30,0) FIELD JOIN REFERENCE  */
                               /* NUMBER 0 INDICATES THAT THE QDBQR  */
                               /* FORMAT WILL BE SEARCHED FOR THE    */
                               /* EXTERNAL FIELD NAME. IF THE FIELD  */
                               /* IS NOT FOUND, THE FORMATS OF THE   */
                               /* FILES IN THE FILE SPECIFICATION    */
                               /* WILL BE SEARCHED.  A VALUE IN THIS */
                               /* FIELD INDICATES THAT THE EXTERNAL  */
                               /* FIELD NAME IS TO BE FOUND IN THE   */
                               /* FILE FORMAT REFERENCED BY USING    */
                               /* THIS VALUE AS AN INDEX INTO THE    */
                               /* FILE LIST.  IN ANY CASE THE FIELD  */
                               /* FOUND MUST EXIST IN A FILE JOINED  */
                               /* PRIOR TO THIS FILE.                */
   char     qdbqdt_27[2];      /* Offset(32,0) RESERVED              */
   char     qdbqjop[2];        /* Offset(34,0) JOIN OPTION           */
                               /* EQ  EQUAL                          */
                               /* GT  GREATER THAN                   */
                               /* LT  LESS THAN                      */
                               /* NE  NOT EQUAL                      */
                               /* GE  GREATER THAN OR EQUAL          */
                               /* LE  LESS THAN OR EQUAL             */
   char     qdbqjtnm[30];      /* Offset(36,0) JOIN TO FIELD NAME    */
                               /* NOTE THAT ONLY CHARACTER & ANY DBCS*/
                               /* FIELDS MAY BE JOINED TO CHARACTER  */
                               /* & ANY DBCS FIELDS, & ONLY NUMERIC  */
                               /* FIELDS MAY BE JOINED TO NUMERIC    */
                               /* FIELDS. THE LENGTHS OF THE TWO     */
                               /* FIELDS NEED NOT BE THE SAME,       */
                               /* HOWEVER, IF THEY ARE DIFFERENT, A  */
                               /* WARNING WILL BE SEND TO THE USER   */
                               /* INFORMING THE USER THAT PADDING    */
                               /* HAS OCCURRED.                      */
   short    qdbqjtnum;         /* Offset(66,0) FIELD JOIN REFERENCE  */
                               /* NUMBER 0 INDICATES THAT THE QDBQR  */
                               /* FORMAT WILL BE SEARCHED FOR THE    */
                               /* EXTERNAL FIELD NAME. IF THE FIELD  */
                               /* IS FOUND, IT MUST HAVE BEEN COM-   */
                               /* PLETELY DERIVED FROM THE FILE      */
                               /* ASSOCIATED WITH THIS JOIN SPECIFI- */
                               /* CATION. IF THE FIELD IS NOT FOUND, */
                               /* THE FORMAT OF THE FILE ASSOCIATED  */
                               /* WITH THIS JOIN SPECIFICATION IS    */
                               /* SEARCHED.  A VALUE IN THIS FIELD   */
                               /* INDICATES THAT THE EXTERNAL FIELD  */
                               /* NAME IS TO BE FOUND IN THE FILE    */
                               /* FORMAT REFERENCED BY USING THIS    */
                               /* VALUE AS AN INDEX INTO THE FILE    */
                               /* LIST.  THIS VALUE MUST REFERENCE   */
                               /* THE FILE ASSOCIATED WITH THIS JOIN */
                               /* SPECIFICATION.                     */
   char     qdbqjpfmt;         /* Offset(68,0) Reserved.         @OJA*/
   char     qdbqjpsep;         /* Offset(69,0) Reserved.         @OJA*/
   QDBQJFLG_T qdbqjflg;        /* Offset(70,0) Join specification    */
                               /* flags.                         @OJA*/
   char     qdbqj_type;        /* Offset(71,0) Type of join          */
                               /* specified for this join field pair.*/
                               /*                                @OJA*/
 /*                                    'J' = Inner join              */
 /*                                          (No default values will */
 /*                                           be supplied if a join  */
 /*                                           value does not exist   */
 /*                                           and no records will be */
 /*                                           returned.)             */
 /*                                    'C' = Partial outer join      */
 /*                                          (File chaining - Default*/
 /*                                           values will be supplied*/
 /*                                           if a join value does   */
 /*                                           not exist.)            */
 /*                                    'E' = Exception join          */
 /*                                          (Default values will be */
 /*                                           supplied if a join     */
 /*                                           value does not exist.  */
 /*                                           Only records with      */
 /*                                           default values will be */
 /*                                           returned).         @OJA*/
   char     qdbqdt_28[24];     /* Offset(72,0) Reserved.         @OJC*/
   } QDBQJFLD_T;               /* JOIN FIELD ARRAY                   */

 typedef
 _Packed struct qdbqj_t {      /* Offset(0,0) JOIN SPECIFICATIONS@A1C*/
   QDBQJHDR_T qdbqjhdr;        /* Offset(0,0) JOIN SPECIFICATIONS    */
                               /* HEADER                             */
   QDBQJFLD_T qdbqjfld[1];     /* Offset(16,0)                       */
                               /* JOIN SPECIFICATIONS ARRAY.  ARRAY  */
                               /* OF FIELDS WHICH DEFINE THE FROM    */
                               /* AND TO FIELDS TO USE WHEN JOINING. */
 } QDBQJ_T;                    /*                                    */


 /********************************************************************/
 /*                                                                  */
 /* JREF JOIN SPECIFICATIONS                                         */
 /*                                                                  */
 /*   Th following structure can be used to define the order in      */
 /*   which the files are to be joined. It can also be used to       */
 /*   specify any join selection to be needed to implement the join. */
 /*                                                                  */
 /*   Two files (or join results) are specified along with the       */
 /*   appropriate join type to be used to join together the two      */
 /*   operands. An offset can also be specified to the Selection     */
 /*   Specifications (QDBQS) that will define the join criteria that */
 /*   applies to the operands.                                       */
 /*                                                                  */
 /*   The join criteria is specified in the JREF Join Specs in RPN   */
 /*   (Reverse Polish Notation) where the join type operator will    */
 /*   join together two operands which are file (or join result)     */
 /*   references. Since by definition all of the files in a join     */
 /*   query are ANDed together, no boolean operators need to be      */
 /*   specified.                                                     */
 /*                                                                  */
 /*     FROM FileA LOJ (FileB LOJ FileC ON B.F1 = C.F1)              */
 /*            ON A.F1 = B.F1 AND A.F2 = C.F2                        */
 /*                                                                  */
 /*         JREF Join Specs               Join Selection Specs       */
 /*        ======================        ======================      */
 /*           1) Operand - FileA         +--> 1) B.F1                */
 /*           2) Operand - FileB         |    2) C.F1                */
 /*           3) Operand - FileC         |    3)  =                  */
 /*           4) Operator - LOJ  --------+                           */
 /*           5) Operator - LOJ  -----------> 1) A.F1                */
 /*                                           2) B.F1                */
 /*                                           3)  =                  */
 /*                                           4) A.F2                */
 /*                                           5) C.F2                */
 /*                                           6)  =                  */
 /*                                           7) AND                 */
 /*                                                                  */
 /*   In this example nested join notation has been used to specify  */
 /*   that the files within the parens need to be joined together    */
 /*   prior to performing the join with FileA. Each JREF join        */
 /*   operator will use the first two operands (or join results)     */
 /*   that can be found in the RPN stack.                            */
 /*                                                                  */
 /*   Since the join type as well as the join criteria can now be    */
 /*   specified in multiple places within the QDT, the query         */
 /*   optimizer will be responsible for determining the overall join */
 /*   type for each file as well as the overall query.               */
 /*                                                                  */
 /*   Notes:                                                         */
 /*    The query optimizer will be responsible for determining the   */
 /*    join order to be used for this query. The order in which the  */
 /*    files are specified in the JREF Join Specs will be used to    */
 /*    help determine the join order by the optimizer.               */
 /*                                                                  */
 /*    This optimization of the join order can only be performed     */
 /*    when the overall query join type (QDBQMFOP) is set to an      */
 /*    Inner Join ('J').                                             */
 /*                                                                  */
 /*                                                                  */
 /********************************************************************/
 typedef
 _Packed struct qdbq_jref_hdr_t {   /* Offset(0,0) JREF JOIN         */
                               /* SPECIFICATION HEADER           @A7A*/
     int      qdbq_jref_len;   /* Offset(0,0) LENGTH OF THIS JREF    */
                               /* JOIN SPECIFICATION             @A7A*/
     short    qdbq_jrefnum;    /* Offset(4,0) NUMBER OF JREF         */
                               /* JOIN ENTRIES.                  @A7A*/
     char     qdbqdt_66[10];   /* Offset(6,0) RESERVED           @A7A*/
    } QDBQ_JREF_HDR_T;         /*                                @A7A*/

 typedef
 _Packed struct qdbq_jref_entry_t {   /* Offset(0,0) JREF JOIN       */
                                      /* ENTRY HEADER            @A7A*/
     int      qdbq_jref_entrylen;  /* Offset(0,0) LENGTH OF THIS     */
                                   /* JREF JOIN ENTRY            @A7A*/
     short    qdbq_jref_entry_type;  /* Offset(4,0) JREF JOIN ENTRY  */
                                     /* TYPE.                    @A7A*/
 /*                                     0 = JOIN OPERAND             */
 /*                                     2 = JOIN OPERATOR            */
     char     qdbq_jref_item[1]; /* Offset(6,0) JREF JOIN ITEM -
                                   VARIABLE LENGTH               @A7A*/
    } QDBQ_JREF_ENTRY_T;         /*                              @A7A*/

 typedef
 _Packed struct qdbq_jref_operand_t {  /* Offset(0,0) JREF JOIN      */
                               /* ENTRY OPERAND                  @A7A*/
     short    qdbq_jref_filenum; /* Offset(0,0) NUMBER OF JREF       */
                               /* JOIN REFERENCE NUMBER.         @A7A*/
     char     qdbqdt_67[8];    /* Offset(2,0) RESERVED           @A7A*/
    } QDBQ_JREF_OPERAND_T;     /*                                @A7A*/

 typedef
 _Packed struct qdbq_jref_operator_t {   /* Offset(0,0) JREF JOIN    */
                                      /* ENTRY OPERATOR          @A7A*/
     int      qdbq_jref_jselo;     /* Offset(0,0) OFFSET FROM THE
                                      START OF THE JREF JOIN SPECS
                                      TO THE JOIN SELECTION
                                      FOR THIS JOIN PREDICATE    @A7A*/
     char     qdbq_jref_jtype;   /* Offset(4,0) TYPE OF JOIN
                                      SPECIFIED FOR THIS JREF JOIN TYPE
 /*                                    'J' - Inner join              */
 /*                                          (No default values will */
 /*                                           be supplied if a join  */
 /*                                           value does not exist   */
 /*                                           and no records will be */
 /*                                           returned.)             */
 /*                                    'C' - Left partial outer join */
 /*                                          (Default values will be */
 /*                                           supplied if a join     */
 /*                                           value does not exist.) */
 /*                                    'E' - Exception join          */
 /*                                          (Default values will be */
 /*                                           supplied if a join     */
 /*                                           value does not exist.  */
 /*                                           Only records with      */
 /*                                           default values will be */
 /*                                           returned.)             */
 /*                                    'R' - Right Outer join        */
 /*                                          (The files will be      */
 /*                                           fliped and implemented */
 /*                                           as a left outer join   */
 /*                                           ('C'))             @ACA*/
 /*                                    'X' - Right Exception join    */
 /*                                          (The files will be      */
 /*                                           fliped and implemented */
 /*                                           as an exception join   */
 /*                                           ('E'))             @ACA*/
     char     qdbqdt_68[5];   /* Offset(5,0) RESERVED           @A7A*/
    } QDBQ_JREF_OPERATOR_T;        /*                      @A7A*/

 typedef
 _Packed struct qdbqj_r {      /* Offset(0,0) JREF JOIN SPECS    @A1C*/
   QDBQ_JREF_HDR_T qdbq_jref_hdr;   /* Offset(0,0) JREF HEADER   @A1C*/
   QDBQ_JREF_ENTRY_T qdbq_jref_entry;  /* Offset(0,0) JREF ENTRY @A1C*/
   QDBQ_JREF_OPERAND_T qdbq_jref_operand; /* Offset(0,0) JREF
                                               OPERAND           @A1C*/
   QDBQ_JREF_OPERATOR_T qdbq_jref_operator; /* Offset(0,0) JREF
                                                 OPERATOR        @A1C*/
 } QDBQJ_R;                    /*                                    */

 /********************************************************************/
 /*                                                                  */
 /* SELECTION SPECIFICATION                                          */
 /*                                                                  */
 /*    The following structure defines the selection specifications  */
 /*    for the files being queried.  Selection on the file is done   */
 /*    before grouping.  If selection is desired on group by         */
 /*    results, see structure QDBQGS.                                */
 /*                                                                  */
 /*    The selection structure is a stack of operators and operands  */
 /*    in reverse polish notation.  For example:                     */
 /*                                                                  */
 /*      (A = 12 AND B = C) => (A 12 = B C = AND)                    */
 /*                                                                  */
 /*      (A = 12 AND (B = 12 OR D > 14)) =>                          */
 /*          (A 12 = B 12 = D 14 > OR AND)                           */
 /*                                                                  */
 /*      (((A = 12 AND B = 12) AND D > 14) OR NOT(Z < 10 OR Z > 66)) */
 /*          => (A 12 = B 12 = AND D 14 > AND Z 10 < Z 66 > OR NOT OR*/
 /*                                                                  */
 /*      (A is equal to any of the VALUES(10 11 12 13) =>            */
 /*          (A 10 11 12 13 VALUES)                                  */
 /*                                                                  */
 /*      (A is within the RANGE 10 to 20) => (A 10 20 RANGE)         */
 /*                                                                  */
 /*      (A has the characters 'ABC' somewhere) => (A 'ABC' SCAN)    */
 /*                                                                  */
 /*      (A is equal to 'ABC###M' where # is any single character) =>*/
 /*          (A 'ABC###M' WILDCARDSCAN)                              */
 /*      Note that in this example value 'ABCZZZM' would satisfy the */
 /*      selection statement but 'ABCZZM' would not.                 */
 /*                                                                  */
 /*      (A is equal to 'ABC%M' where % is any number of characters) */
 /*          => (A 'ABC%M' WILDCARDSCAN)                             */
 /*      Note that in this example value 'ABCZZZM' would satisfy the */
 /*      selection statement as well as 'ABCM', 'ABCZM', 'ABCXXM',   */
 /*      'ABCNNNNNNNNNNM', etc.                                      */
 /*                                                                  */
 /*     (A is equal to 'ABC%+_' where % is any number of characters  */
 /*      and + is the escape character)                              */
 /*         => (A 'ABC%+_' '+' WILDCARDSCAN)                         */
 /*     Note that in this example value 'ABCZZZ_' would satisfy the  */
 /*     selection statement as well as 'ABC_', 'ABCZ_', 'ABCXX_',    */
 /*     'ABCNNNNNNNNNN_', etc. If an escape character is specified,  */
 /*     it must be the third operand and qdbqescp must be set ON.    */
 /*     The following restrictions apply to the escape character:    */
 /*         - It must be either a constant or variable field.        */
 /*         - Its length must be 1 character (2 bytes for graphic).  */
 /*         - Its datatype can be character, DBCS open or either,    */
 /*           or graphic.                                            */
 /*                                                                  */
 /* RESTRICTIONS:                                                    */
 /*    Refer to the CL Reference manual section on OPNQRYF.          */
 /********************************************************************/
 typedef
 _Packed struct qdbqs_t {      /* Offset(0,0) SELECTION SPECIFICA-   */
                               /* TIONS.                         @A1C*/
                               /*                                    */
   int      qdbqsl;            /* Offset(0,0) SELECTION SPECIFICA-   */
                               /* TIONS LENGTH. THIS IS THE TOTAL    */
                               /* LENGTH OF ALL SELECTION SPECIFICA- */
                               /* TIONS.                             */
   short    qdbqsnum;          /* Offset(4,0) NUMBER OF SELECTION    */
                               /* SPECIFICATIONS.                    */
   char     qdbqdt_29[10];     /* Offset(6,0) RESERVED               */
   char     qdbqspec[1 ];      /* Offset(16,0) Variable length.  @A1C*/
                               /* START OF SELECTION SPECIFICATIONS. */
 } QDBQS_T ;                   /*                                    */

 typedef
 _Packed struct qdbqsit_t {    /* Offset(0,0) SELECTION ITEM SPEC-   */
                               /* IFICATION                      @A1C*/
   int      qdbqslen;          /* Offset(0,0) SELECTION ITEM LENGTH  */
                               /* THIS LENGTH INCLUDES THE           */
                               /* LENGTH(QDBQSIT) + LENGTH OF THE    */
                               /* SELECTION ITEM STRUCTURE           */
   short    qdbqsitt;          /* Offset(4,0) SELECTION ITEM TYPE    */
                               /* 0  FIELD OPERAND                   */
                               /* 1  CONSTANT OPERAND                */
                               /* 2  OPERATOR                        */
                               /* 3  SUBQUERY OPERAND                */
                               /* 4  NULL OPERAND (SAA) THIS OPERAND */
                               /*    IS USED FOR 'IS NULL' & 'IS NOT */
                               /*    NULL' FUNCTIONS. ONLY EQUAL AND */
                               /*    NOT EQUAL OPERATORS WILL BE     */
                               /*    ALLOWED.                        */
   char     qdbqsitm[1];       /* Offset(6,0) Variable length.       */
                               /* SELECTION ITEM                     */
 } QDBQSIT_T;                  /*                                    */

 typedef
 _Packed struct qdbqsopf_t {   /* Offset(0,0) Overlays QDBQSITM. @A1C*/
                               /* SELECTION FIELD OPERAND            */
   char     qdbqsofn[30];      /* Offset(0,0) FIELD NAME THE FIELD   */
                               /* NAME MUST BE AN EXTERNAL NAME.     */
   short    qdbqsofj;          /* Offset(30,0) FIELD JOIN REFERENCE  */
                               /* NUMBER 0 INDICATES THAT THE QDBQR  */
                               /* FORMAT WILL BE SEARCHED FOR THE    */
                               /* EXTERNAL FIELD NAME. IF THE FIELD  */
                               /* IS NOT FOUND, THE FORMATS OF THE   */
                               /* FILES IN THE FILE SPECIFICATION    */
                               /* WILL BE SEARCHED. IF THE FIELD     */
                               /* NAME IS FOUND IN MORE THAN ONE     */
                               /* FILE FORMAT AN ERROR IS SIGNALLED. */
                               /* A VALUE IN THIS FIELD INDICATES    */
                               /* THAT THE EXTERNAL FIELD NAME IS TO */
                               /* BE FOUND IN THE FILE FORMAT REFER- */
                               /* ENCED x BY USING THIS VALUE AS AN  */
                               /* INDEX INTO THE FILE LIST.          */
   short    qdbqsoqt;          /* Offset(32,0) INDEX INTO QDT TABLE  */
                               /* FOR CORRELATED FIELD's ASSOCIATED  */
                               /* QDT. IS ZERO FOR NONCORRELATED     */
                               /* FIELDS.                            */
   char     qdbqdt_30[24];     /* Offset(34,0) RESERVED              */
 } QDBQSOPF_T;                 /*                                    */

 typedef
 _Packed struct qdbqsops_t {   /* Offset(0,0) Overlays qdbqsitm. @A1C*/
                               /* SELECTION FIELD SUBQUERY OPERAND   */
   short    qdbqssub;          /* Offset(0,0) INDEX INTO QDT OFFSET  */
                               /* TABLE FOR SUBQUERY'S QDT.          */
   char     qdbqstyp;          /* Offset(2,0) SUBQUERY OPERATOR      */
                               /* QUALIFIER.                         */
                               /* 00  Use QDBQSOP only.              */
                               /* 01  ALL                            */
                               /* 02  ANY or SOME                    */
                               /*                                    */
                               /* VALID VALUES FOR QDBQSOP WHEN      */
                               /* QDBQSTYP = 00 are:                 */
                               /* BASIC PRED.  0001 - 0006           */
                               /* EXISTS       0045                  */
                               /* IN           0046                  */
                               /*                                    */
                               /* VALID VALUES FOR QDBQSOP WHEN      */
                               /* QDBQSTYP <> 00 are:                */
                               /* OPERATOR 0001 - 0006               */
   char     qdbqdt_31[23];     /* Offset(3,0) RESERVED               */
 } QDBQSOPS_T;                 /*                                    */

 typedef
 _Packed struct qdbqdt_32_t {  /* Offset(4,0) CONSTANT ATTRIBUTES@A1C*/
       unsigned qdbqsoci:1;    /* Offset(4,0) DBCS OPEN CONSTANT     */
                               /* 0  THIS CONSTANT IS NOT AN DBCS -  */
                               /*    OPEN LITERAL.                   */
                               /* 1  THIS CONSTANT IS AN DBCS - OPEN */
                               /*    LITERAL.                        */
       unsigned qdbqdt_33:1;   /* Offset(4,1) RESERVED               */
       unsigned qdbqsocc:1;    /* Offset(4,2) CHARACTER CONSTANT     */
                               /* TYPE                               */
                               /* 0  QUOTED CHARACTER STRING.  THE   */
                               /*    CHARACTER CONSTANT IS BRACKETED */
                               /*    BY SINGLE QUOTES AND ANY        */
                               /*    IMBEDDED QUOTES MUST BE REPRES- */
                               /*    ENTED BY TWO SINGLE QUOTES.     */
                               /* 1  UNQUOTED CHARACTER STRING.  THE */
                               /*    CHARACTER CONSTANT IS NOT       */
                               /*    BRACKETED BY QUOTES.            */
                               /* (THIS BIT IS IGNORED WHEN DURING   */
                               /* QUERY PROCESSING IT IS DETERMINED  */
                               /* THAT THE CONSTANT SHOULD BE        */
                               /* NUMERIC AND QDBQSOAC IS OFF.)      */
       unsigned qdbqsoac:1;    /* Offset(4,3) ASSUME CHARACTER CON-  */
                               /* STANT.                             */
                               /* 0  DO NOT ASSUME THAT THIS IS A    */
                               /*    CHARACTER CONSTANT.  DETERMI-   */
                               /*    NATION OF THE TYPE OF CONSTANT  */
                               /*    IS MADE DURING QUERY PROC-      */
                               /*    ESSING.                         */
                               /* 1  ASSUME THAT THIS IS A CHARACTER */
                               /*    CONSTANT.                       */
       unsigned qdbqsoco:1;    /* Offset(4,4) DBCS - ONLY CONSTANT   */
                               /* 0  THIS CONSTANT IS NOT DBCS -     */
                               /*    ONLY.                           */
                               /* 1  THIS CONSTANT IS DBCS - ONLY    */
                               /*    DATA.                           */
       unsigned qdbqsosr:1;    /* Offset(4,5) Special register       */
                               /* 0  This constant operand is not a  */
                               /*    special register.               */
                               /* 1  This constant operand is a      */
                               /*    special register, defined by    */
                               /*    QDBQSORC.                       */
       unsigned qdbqsonl:1;    /* Offset(4,6) SAA NULL INDICATOR     */
                               /* 0  This constant operand is NULL   */
                               /*    literal.                        */
                               /* 1  This constant operand is a NULL */
                               /*    literal.                        */
                               /* QDT has to be in sync w/FMTD.      */
       unsigned qdbqdt_34:1;   /* Offset(4,7) RESERVED               */
     } QDBQDT_32_T;            /*                                    */

  typedef
  _Packed struct qdbqdt_36_t { /* Offset(12,0)                   @A1C*/
       unsigned qdbqdt_37:2;   /* Offset(12,0) RESERVED              */
       unsigned qdbqglit:1;    /* Offset(12,2) Indicates that the    */
                               /* constant is a graphic or UTF-16 or */
                               /* UCS-2 literal.  If a UTF-16 or     */
                               /* UCS-2 literal, qdbqsocd must be    */
                               /* set to a valid UTF-16 or UCS-2     */
                               /* CCSID, or qdbqsocd must be zero    */
                               /* and qdbqcsdc must be set to a valid*/
                               /* UTF-16 or UCS-2 CCSID.     @UIC@AAC*/
       unsigned qdbqdt_38:5;   /* Offset(12,3) RESERVED              */
     } QDBQDT_36_T;            /*                                    */

 typedef
 _Packed struct qdbqsoch_t {   /* Offset(0,0) CONSTANT OPERAND   @A1C*/
                               /* HEADER                             */
     int      qdbqsocl;        /* Offset(0,0) CONSTANT OPERAND BYTE  */
                               /* LENGTH.  (THIS ONLY INCLUDES THE   */
                               /* LENGTH OF THE CONSTANT IN QDBQSOVL */
                               /* INCLUDING QUOTES)                  */
     QDBQDT_32_T qdbqdt_32;    /* constant attributes                */
     char     qdbqsorc;        /* Offset(5,0) Special register con-  */
                               /* stant.  Defined by special reg-    */
                               /* ister constants declared in the    */
                               /* record format definition, can only */
                               /* be specified if QDBQSOSR is on.    */
                               /* X'01' User                         */
                               /* X'02' Current Date                 */
                               /* X'03' Current Time                 */
                               /* X'04' Current Timestamp            */
                               /* X'05' Current Timezone             */
                               /* X'06' Current Server               */
     char     qdbqsoft;        /* Offset(6,0) DATE/TIME/TIMESTAMP    */
                               /* FORMAT ATTRIBUTE. THIS FIELD       */
                               /* APPLIES ONLY TO DATE, TIME OR      */
                               /* TIMESTAMP LITERALS. THE VALUES FOR */
                               /* THIS LITERAL MAY BE                */
                               /* 'FE'X Job default                  */
                               /* 'FF'X Determine format             */
                               /* '01'X USA format                   */
                               /* '03'X ISO format                   */
                               /* '05'X EUR format                   */
                               /* '07'X JIS format                   */
                               /* '09'X SAA timestamp                */
                               /* '17'X MDY format                   */
                               /* '18'X DMY format                   */
                               /* '19'X YMD format                   */
                               /* '1A'X JUL format                   */
                               /* '1B'X HMS format                   */
                               /* '1D'X YYYYNNN format               */
                               /* '1E'X YYYYMMDDHHMMSS format        */
                               /* WHEN THE VALUE OF THIS FIELD IS    */
                               /* 'FF'X, THE FORMAT AND SEPARATOR    */
                               /* SPECIFIED IN THE QDT HEADER        */
                               /* (QDBQDFMT OR QDBQTFMT AND QDBQDSEP */
                               /* OR QDBQTSEP) FOR A DATE OR TIME    */
                               /* LITERAL WILL BE USED FIRST IN      */
                               /* DETERMINING THE FORMAT AND SEPA-   */
                               /* RATOR OF THE LITERAL.  WHEN THE    */
                               /* VALUE OF THIS FIELD IS 'FE'X FOR A */
                               /* DATE OR TIME LITERAL, THEN THE     */
                               /* FORMAT AND SEPARATOR ARE DETER-    */
                               /* MINED USING THE JOB ATTRIBUTES,    */
                               /* WHICH WILL HAVE THE VALUE '17'X,   */
                               /* '18'X, '19'X, '1A'X, OR '1B'X, AND */
                               /* THE SEPARATOR SPECIFIED FOR        */
                               /* QDDFDVSP WILL BE USED FIRST        */
                               /* IN DETERMINING FORMAT & SEPARATOR. */
                               /* WHEN THE VALUE OF THIS FIELD IS    */
                               /* 'FE'X FOR A TIMESTAMP LITERAL, THE */
                               /* SAA TIMESTAMP FORMAT IS USED AS    */
                               /* THE FORMAT OF THE LITERAL.         */
     char     qdbqsosp;        /* Offset(7,0) DATE/TIME SEPARATOR.   */
                               /* THIS FIELD APPLIES ONLY TO DATE OR */
                               /* TIME LITERALS.  IT SHOULD ONLY BE  */
                               /* SET WHEN THE QDBQSOFT FIELD IS     */
                               /* EITHER 'FE'X, '17'X, '18'X, '19'X, */
                               /* '1A'X, OR '1B'X.  THE VALUES FOR   */
                               /* THIS FIELD MAY BE:                 */
                               /* '00'X  Job default separator       */
                               /* 'EE'X  Implied separator           */
                               /* '/'    Slash separator             */
                               /* '-'    Dash separator              */
                               /* '.'    Period separator            */
                               /* ','    Comma separator             */
                               /* ' '    Blank separator             */
                               /* ':'    Colon separator             */
                               /* WHEN THE VALUE OF THIS FIELD IS    */
                               /* '00'X, THE SEPARATOR IS OBTAINED   */
                               /* FROM THE JOB ATTRIBUTES, WHICH     */
                               /* WILL BE ONE OF THE VALUES ABOVE    */
                               /* EXCEPT FOR '00'X OR 'EE'X.  WHEN   */
                               /* THE VALUE OF THIS FIELD IS 'EE'X,  */
                               /* THE IMPLIED SEPARATOR FOR THE      */
                               /* FORMAT WILL BE USED.               */
     char     qdbqdt_35[2];    /* Offset(8,0) RESERVED               */
     unsigned short qdbqsocd;  /* Offset(10,0) CCSID value for this  */
                               /* literal.  If not set to zero, the  */
                               /* literal will be tagged with this   */
                               /* CCSID. Otherwise, the literal will */
                               /* be tagged with the CCSID specified */
                               /* in the QDT header (qdbqcsdc) or    */
                               /* the job default, in that order.    */
                               /* Note that this field is only valid */
                               /* for character, DBCS - Open & Only, */
                               /* Graphic, UTF-16 and UCS-2          */
                               /* literals.                  @UIC@AAC*/
     QDBQDT_36_T qdbqdt_36;    /* Offset(12,0)                       */
     char     QDBQDT_39[29];   /* Offset(13,0) RESERVED              */
   } QDBQSOCH_T;               /*                                    */

 typedef
 _Packed struct qdbqsopc_t {   /* Offset(0,0) Overlays qdbqsitm.     */
                               /* SELECTION CONSTANT OPERAND     @A1C*/
   QDBQSOCH_T qdbqsoch;        /* Offset(0,0) CONSTANT OPERAND       */
                               /* HEADER                             */
   char     qdbqsovl[32751];   /* Offset(42,0) OPERAND VALUE. THE    */
                               /* OPERAND VALUE MUST BE IN EXTERNAL  */
                               /* FORM.                              */
 }  QDBQSOPC_T ;               /*                                    */

  typedef
  _Packed struct qdbqdt_55_t { /* Offset(6,0) Selection operator @A1C*/
                               /* flags.                             */
       unsigned qdbqescp:1;    /* Offset(6,0) Wild card escape       */
                               /* character indicator.  Valid only   */
                               /* for wild card scan.                */
                               /* 0  There is no escape character.   */
                               /* 1  There is an escape character    */
                               /*    specified for the wild card     */
                               /*    scan operator via the third     */
                               /*    operand.                        */
       unsigned qdbqdt_56:1;   /* Offset(6,1) RESERVED           @UIA*/
       unsigned qdbqsopr_ext:1; /* Offset(6,2) Selection operator    */
                               /* extension area exists indicator.   */
                               /* 0  Operator extension area         */
                               /*    (qdbqsop3_t) does not exist.    */
                               /* 1  Operator extension area         */
                               /*    (qdbqsop3_t) exists.        @UIA*/
       unsigned qdbqdt_60:5;   /* Offset(6,3) RESERVED           @UIC*/
     } QDBQDT_55_T;            /*                                    */

 typedef
 _Packed struct qdbqsopr_t {   /* Offset(0,0) Overlays qdbqsitm. @A1C*/
                               /* SELECTION OPERATOR ITEM            */
   char     qdbqsop[2];        /* Offset(0,0) OPERATORS RELATIONAL   */
                               /* OPERATORS                          */
                               /* 0001  EQUAL                        */
                               /* 0002  NOT EQUAL                    */
                               /* 0003  GREATER THAN OR EQUAL        */
                               /* 0004  LESS THAN OR EQUAL           */
                               /* 0005  GREATER THAN                 */
                               /* 0006  LESS THAN                    */
                               /* 0007  RANGE (INCLUSIVE)            */
                               /* 0041  SCAN                         */
                               /* 0042  WILD CARD SCAN               */
                               /* 0043  VALUES                       */
                               /* 0045  EXISTS                       */
                               /* 0046  IN                           */
                               /* CASE OPERATORS                     */
                               /* 0018 = WHEN                        */
                               /* 001B = ELSE                        */
                               /* BOOLEAN OPERATORS                  */
                               /* 000B  OR                           */
                               /* 000C  XOR                          */
                               /* 000D  AND                          */
                               /* 000E  NOT                          */
   char     qdbqswc1;          /* Offset(2,0) WILD CARD VALUE FOR    */
                               /* ANY SINGLE CHARACTER. THIS CHAR-   */
                               /* ACTER WILL INDICATE WHAT VALUE IN  */
                               /* THE CHARACTER STRING OPERAND       */
                               /* SHOULD BE INTERPRETED AS MATCHING  */
                               /* ANY SINGLE CHARACTER.  ONLY APPLI- */
                               /* CABLE IF QDBQSOP IS A WILD CARD    */
                               /* SCAN.                              */
   char     qdbqswc2;          /* Offset(3,0) WILD CARD VALUE FOR    */
                               /* ANY NUMBER OF CHARACTERS. THIS     */
                               /* CHARACTER WILL INDICATE WHAT VALUE */
                               /* IN THE CHARACTER STRING OPERAND    */
                               /* SHOULD BE INTERPRETED AS MATCHING  */
                               /* ANY NUMBER OF CHARACTERS.  ONLY    */
                               /* APPLICABLE IF QDBQSOP IS A WILD    */
                               /* CARD SCAN.                         */
   short    qdbqvalcnt;        /* Offset(4,0) VALUES OPERAND COUNT.  */
                               /* THIS COUNT REFLECTS THE NUMBER OF  */
                               /* SELECTION CONSTANT OPERANDS        */
                               /* (VALUES) ASSOCIATED WITH THE       */
                               /* VALUES OPERATOR. THIS COUNT MUST   */
                               /* BE SET IF THE OPERATOR IS VALUES   */
                               /* AND IS IGNORED FOR ALL OTHER OPER- */
                               /* ATORS.                             */
   QDBQDT_55_T qdbqdt_55;      /* Offset(6,0) Selection operator     */
                               /* flags.                             */
   char     qdbqdt_40[3];      /* Offset(7,0) RESERVED               */
 } QDBQSOPR_T;                 /*                                    */

 typedef
 _Packed struct qdbqsop2_t {   /* Offset(0,0)                    @A1C*/
   char     qdbqsdb1[2];       /* Offset(0,0) WILD CARD VALUE FOR    */
                               /* ANY ONE DOUBLE-BYTE CHARACTER.     */
                               /* THIS VALUE WILL INDICATE WHAT      */
                               /* VALUE IN THE DBCS STRING OPERAND   */
                               /* SHOULD BE INTERPRETED AS MATCHING  */
                               /* ANY ONE DOUBLE-BYTE CHARACTER.     */
                               /* ONLY APPLICABLE IF QDBQSOP IS A    */
                               /* WILD CARD SCAN AND STRING OPERAND  */
                               /* IS AN IGC OR GRAPHIC PATTERN.      */
   char     qdbqsdb2[2];       /* Offset(2,0) WILD CARD VALUE FOR    */
                               /* ANY NUMBER OF DOUBLE-BYTE CHARAC-  */
                               /* TERS. THIS VALUE WILL INDICATE     */
                               /* WHAT VALUE IN THE IGC STRING       */
                               /* OPERAND SHOULD BE INTERPRETED AS   */
                               /* MATCHING ANY NUMBER OF DOUBLE-BYTE */
                               /* OR SINGLE-BYTE CHARACTERS. ONLY    */
                               /* APPLICABLE IF QDBQSOP IS A WILD    */
                               /* CARD SCAN AND STRING OPERAND IS A  */
                               /* DBCS OR GRAPHIC PATTERN.           */
   char     qdbqdt_41[3];      /* Offset(4,0) RESERVED           @A3C*/
 /********************************************************************/
 /*                                                                  */
 /* Two different sets of wildcard characters are allowed for        */
 /* UTF-16 or UCS-2 patterns.  They are representative of 2 different*/
 /* code points.  Comments updated to support UTF-16 or UCS-2        */
 /* literals.                                                        */
 /*                                                      @A3A@UIC@AAC*/
 /********************************************************************/
   char     qdbqsuo1[2];       /* Offset(7,0) Half-width     @UIC@AAC*/
                               /* wildcard value for any 1 double-   */
                               /* byte UTF-16 or UCS-2 character.    */
                               /* Indicates what value in the        */
                               /* UTF-16 or UCS-2 operand matches any*/
                               /* 1 double-byte UTF-16 or UCS-2      */
                               /* character.  Only applicable if     */
                               /* qdbqsop is a wildcard scan and     */
                               /* the pattern is a UTF-16 or UCS-2   */
                               /* parameter marker, host variable    */
                               /* value, or constant.                */
  char      qdbqsuo2[2];       /* Offset(9,0) Full-width     @UIC@AAC*/
                               /* wildcard value for any 1 double-   */
                               /* byte UTF-16 or UCS-2 character.    */
                               /* Indicates what value in the        */
                               /* UTF-16 or UCS-2 operand matches any*/
                               /* 1 double-byte UTF-16 or UCS-2      */
                               /* character.  Only applicable if     */
                               /* qdbqsop is a wildcard scan and     */
                               /* the pattern is a UTF-16 or UCS-2   */
                               /* parameter marker, host variable    */
                               /* value, or constant.                */
  char      qdbqsum1[2];       /* Offset(11,0) Half-width    @UIC@AAC*/
                               /* wildcard value for any number of   */
                               /* double-byte UTF-16 or UCS-2        */
                               /* characters.  Indicates what value  */
                               /* in the UTF-16 or UCS-2 operand     */
                               /* matches any number of UTF-16 or    */
                               /* UCS-2 characters.  Only applicable */
                               /* if qdbqsop is a wildcard scan and  */
                               /* the pattern is a UTF-16 or UCS-2   */
                               /* parameter marker, host variable    */
                               /* value, or constant.                */
  char      qdbqsum2[2];       /* Offset(13,0) Full-width    @UIC@AAC*/
                               /* wildcard value for any number of   */
                               /* double-byte UTF-16 or UCS-2        */
                               /* characters.  Indicates what value  */
                               /* in the UTF-16 or UCS-2 operand     */
                               /* matches any number of UTF-16 or    */
                               /* UCS-2 characters.  Only applicable */
                               /* if qdbqsop is a wildcard scan and  */
                               /* the pattern is a UTF-16 or UCS-2   */
                               /* parameter marker, host variable    */
                               /* value, or constant.                */
  char      qdbqdt_59[1];      /* Offset(15,0) RESERVED          @A3C*/
 }  QDBQSOP2_T;                /*                                    */

 typedef
 _Packed struct qdbqsop3_t {   /* Offset(0,0) Selection operator     */
                               /* extension area.                @UIA*/
  unsigned short qdbqswc_ccsid; /* Offset(0,0) CCSID of wildcard     */
                               /* character values specified in      */
                               /* qdbqswc1, qdbqswc2, qdbqsdb1, and  */
                               /* qdbqsdb2. Appropriate associated   */
                               /* CCSID will be determined depending */
                               /* on the CCSID of the pattern. If    */
                               /* needed, this CCSID will be used    */
                               /* to convert the relevant wildcard   */
                               /* character(s) to the CCSID of the   */
                               /* pattern.  If set to zero, it is    */
                               /* assumed that the wildcard values   */
                               /* are in the same CCSID as that of   */
                               /* the pattern.                   @UIA*/
  unsigned short qdbqswc_ccsid_ucs2; /* Offset(2,0) CCSID of         */
                               /* wildcard character values          */
                               /* specified in qdbqsuo1, qdbqsuo2,   */
                               /* qdbqsum1, and qdbqsum2. If needed, */
                               /* this CCSID will be used to convert */
                               /* the relevant wildcard character(s) */
                               /* to the CCSID of the pattern.  If   */
                               /* set to 0, it is assumed that the   */
                               /* wildcard values are in the same    */
                               /* CCSID as the pattern.  If this     */
                               /* field is specified, it must be a   */
                               /* valid UTF-16 or UCS-2 CCSID.   @AAC*/
  char      qdbqdt_61[28];     /* Offset(4,0) RESERVED           @UIA*/
 }  QDBQSOP3_T;                /*                                    */

 /********************************************************************/
 /*                                                                  */
 /* ORDER BY SPECIFICATION                                           */
 /*    The order by specification contains a description of how the  */
 /*    results of the query should be ordered.  Up to 10,000 bytes   */
 /*    may be used in ordering.                                      */
 /********************************************************************/
 typedef
 _Packed struct qdbqkh_t {     /* Offset(0,0) ORDER BY HEADER    @A1C*/
     short    qdbqknum;        /* Offset(0,0) # OF KEY POSITIONS IN  */
                               /* THE ORDER BY                       */
     char     qdbqkt;          /* Offset(2,0) KEY FIELD ORDERING     */
                               /* TYPE                               */
                               /* U = UNIQUE KEY FIELDS              */
                               /* D = DUPLICATE KEY FIELDS           */
                               /* F = FIFO DUPLICATE KEY FIELDS      */
                               /* L = LIFO DUPLICATE KEY FIELDS      */
                               /* C = FCFO DUPLICATE KEY FIELDS      */
                               /* A, '00'X = ANY KEY FIELD           */
                               /*   TYPE WILL BE CONSIDERED.         */
                               /* NOTE: THIS FIELD WILL ONLY BE      */
                               /*         USED AS A GUIDE WHEN       */
                               /*         CONSIDERING INDEXES.       */
                               /*       qdbqopta SHOULD BE SET       */
                               /*         TO ON TO CONSIDER          */
                               /*         ALL INDEXES BUILT          */
                               /*         OVER THE QUERY             */
                               /*         FILE(S).                   */
     char     qdbqdt_42[13];   /* Offset(3,0) RESERVED               */
   } QDBQKH_T;                 /*                                    */

 typedef
 _Packed struct qdbqksq_t {    /* Offset(46,0) KEY FIELD SEQUENCING  */
                               /* ATTRIBUTES                     @A1C*/
       unsigned qdbqksad:1;    /* Offset(46,0) ASCEND/DESCEND        */
                               /* SEQUENCING INDICATOR               */
                               /* 0  ASCENDING SEQUENCE              */
                               /* 1  DESCENDING SEQUENCE             */
       unsigned qdbqdt_43:1;   /* Offset(46,1) RESERVED              */
       unsigned qdbqkabs:1;    /* Offset(46,2) ABSOLUTE VALUE        */
                               /* SEQUENCE INDICATOR (THIS BIT IS    */
                               /* IGNORED FOR CHARACTER KEY FIELDS)  */
                               /* 0  NUMERIC SEQUENCE                */
                               /* 1  ABSOLUTE VALUE SEQUENCE         */
       unsigned qdbqdt_44:5;   /* Offset(46,3) RESERVED              */
     } QDBQKSQ_T;              /*                                    */

 typedef
 _Packed struct qdbqkf_t {     /* Offset(16,0) KEY SPECIFICATIONS OF */
                               /* 10,000.                        @A1C*/
     char     qdbqkfld[30];    /* Offset(16,0) KEY FIELD NAME.  THE  */
                               /* FIELD NAME MUST BE AN EXTERNAL     */
                               /* FIELD NAME FROM THE QDBQR FORMAT   */
                               /* (UNLESS QDBQR IS NOT SPECIFIED IN  */
                               /* WHICH CASE THE FIELD IS AN         */
                               /* EXTERNAL FIELD NAME FROM THE FILE  */
                               /* FORMAT).  QDDFFIOB MUST NOT        */
                               /* BE 'NEITHER INPUT NOR OUTPUT' FOR  */
                               /* A KEY FIELD.                       */
     QDBQKSQ_T qdbqksq;        /* Offset(46,0) KEY FIELD SEQUENCING  */
                               /* ATTRIBUTES                         */
     char     qdbqdt_45[33];   /* Offset(47,0) RESERVED              */
   } QDBQKF_T;                 /*                                    */

 typedef
 _Packed struct QDBQK_T {      /* Offset(0,0) ORDER BY SPECIFICA-    */
                               /* TIONS                          @A1C*/
   QDBQKH_T qdbqkh;            /* Offset(0,0) ORDER BY HEADER        */
   QDBQKF_T qdbqkf[1];         /* Offset(16,0) KEY SPECIFICATIONS OF */
                               /* 10,000.                            */
 } QDBQK_T;                    /*                                    */


 /********************************************************************/
 /*                                                                  */
 /* GROUP BY SPECIFICATION                                           */
 /*    The group by specification contains a description of how the  */
 /*    record results of the query should be grouped.  The following */
 /*    array defines fields which will make up a group.  All records */
 /*    for which equal values exist in the defined fields will be    */
 /*    grouped together.  Up to 2000 bytes may be used.              */
 /********************************************************************/
   typedef
   _Packed struct qdbqgh_t {   /* Offset(0,0) GROUP BY HEADER    @A1C*/
     short    qdbqgfnum;       /* Offset(0,0) # OF GROUP BY FIELDS   */
                               /* IF THE NUMBER OF GROUP FIELDS IS   */
                               /* 0, ALL THE RECORDS WILL BE PROC-   */
                               /* ESSED AS ONE GROUP.                */
     char     qdbqdt_46[14];   /* Offset(2,0) RESERVED               */
   } QDBQGH_T;                 /*                                    */

   typedef
   _Packed struct QDBQGF_T {   /* Offset(16,0) GROUP FIELD SPECIFI-  */
                               /* CATION                         @A1C*/
     char     qdbqgfld[30];    /* Offset(16,0) GROUP FIELD NAME.     */
     short    qdbqgflj;        /* Offset(46,0) FIELD JOIN REFERENCE  */
                               /* NUMBER 0 INDICATES THAT THE QDBQR  */
                               /* FORMAT WILL BE SEARCHED FOR THE    */
                               /* EXTERNAL FIELD NAME. IF THE FIELD  */
                               /* IS NOT FOUND, THE FORMATS OF THE   */
                               /* FILES IN THE FILE SPECIFICATION    */
                               /* WILL BE SEARCHED. IF THE FIELD     */
                               /* NAME IS FOUND IN MORE THAN ONE     */
                               /* FILE FORMAT AN ERROR IS SIGNALLED. */
                               /* A VALUE IN THIS FIELD INDICATES    */
                               /* THAT THE EXTERNAL FIELD NAME IS TO */
                               /* BE FOUND IN THE FILE FORMAT REFER- */
                               /*                                    */
                               /* ENCED BY USING THIS VALUE AS AN    */
                               /* INDEX INTO THE FILE LIST.          */
     char     qdbqdt_47[32];   /* Offset(48,0) RESERVED              */
   } QDBQGF_T;                 /*                                    */
 typedef
 _Packed struct qdbqg_t {      /* Offset(0,0) GROUP BY SPECIFICA-    */
                               /* TIONS                          @A1C*/
   QDBQGH_T qdbqgh;            /* Offset(0,0) GROUP BY HEADER        */
   QDBQGF_T qdbqgf[120];       /* Offset(16,0) GROUP FIELD SPECIFI-  */
                               /* CATION - up to 120 fields allowed  */
 } QDBQG_T;                    /*                                    */


 /********************************************************************/
 /*                                                                  */
 /* GROUP BY SELECTION SPECIFICATION                                 */
 /*    The following structure defines the selection specifications  */
 /*    for the group by results.  Selection on the group results is  */
 /*    performed after the selection on the record is complete and   */
 /*    the grouping has been completed.                              */
 /********************************************************************/
    typedef
    QDBQS_T  QDBQGS_T;         /* Offset(0,0) Variable length.       */
    typedef                    /* GROUP BY SELECTION SPECIFICATION   */
    QDBQSIT_T QDBQGSIT_T;      /* STRUCTURE.  THE GROUP BY SELECTION */
                               /* STRUCTURE IS IDENTICAL TO QDBQS .  */

 /********************************************************************/
 /*                                                                  */
 /* OPERATION SPECIFICATION                                          */
 /*    The following structure defines the operation specifications  */
 /*    to be performed for each set of results generated from each   */
 /*    QDT. These specifications are only valid when more than one   */
 /*    QDT is specified. The set operation specifications must only  */
 /*    be specified on the last QDT.                                 */
 /*                                                                  */
 /*    The specification structure is a stack of operands and opera- */
 /*    tors in reverse polish notation. Operands are constant        */
 /*    literals that identify the relative position of a QDT among   */
 /*    others in the QDT chain. Operators are set operators such as  */
 /*    UNION. For example:                                           */
 /*                                                                  */
 /*    Given three QDT's                                             */
 /*                                                                  */
 /*      +----------+                                                */
 /*      |   QDT    |                                                */
 /*      +----------+                                                */
 /*      |   ....   |                                                */
 /*      | QDBQNXQO | ---> +----------+                              */
 /*      |   ....   |      |   QDT    |                              */
 /*      +----------+      +----------+                              */
 /*                        |   ....   |                              */
 /*                        | QDBQNXQO | ---> +-----------+           */
 /*                        |   ....   |      |   QDT     |           */
 /*                        +----------+      +-----------+           */
 /*                                          |   ....    |           */
 /*                                          | QDBQNXQO  |           */
 /*                                          |   ....    |           */
 /*                                          +-----------+           */
 /*                                          | SET       |           */
 /*                                          | OPERATION |           */
 /*                                          | SPECS     |           */
 /*                                          +-----------+           */
 /*                                                                  */
 /*    The following operations can be performed:                    */
 /*                                                                  */
 /*      (1st QDT) UNION (2nd QDT) UNION ALL (3rd QDT)               */
 /*                                                                  */
 /*    The above can be specified in the set operation specification */
 /*    (in reverse polish notation) as:                              */
 /*                                                                  */
 /*      1 2 UNION 3 UNION ALL                                       */
 /*                                                                  */
 /********************************************************************/
 typedef
 _Packed struct qdbqt_t {      /* Offset(0,0) SET SPECIFICATIONS.@A1C*/
   int      qdbqtl;            /* Offset(0,0) SET SPECIFICATIONS     */
                               /* LENGTH.  THIS IS THE TOTAL LENGTH  */
                               /* OF ALL SET SPECIFICATIONS.         */
   short    qdbqtnum;          /* Offset(4,0) NUMBER OF SET SPECIFI- */
                               /* CATIONS.                           */
   char     qdbqdt_48[10];     /* Offset(6,0) RESERVED               */
   char     qdbqtspc[1];       /* Offset(16,0) Variable length.      */
                               /* START OF SET SPECIFICATIONS.       */
 } QDBQT_T;                    /*                                    */

 typedef
 _Packed struct qdbqtopc_t {   /* Offset(6,0) Overlays QDBQTITM. @A1C*/
                               /* SET CONSTANT OPERAND.              */
   short    qdbqtqdt;          /* Offset(6,0) RELATIVE NUMBER OF     */
                               /* QDT.                               */
   char     qdbqdt_49[8];      /* Offset(8,0) RESERVED               */
 }  QDBQTOPC_T;                /*                                    */

 typedef
 _Packed struct qdbqtopr_t {   /* Offset(6,0) Overlays QDBQTITM. @A1C*/
                               /* SET OPERATOR ITEM.                 */
   char     qdbqtop[2];        /* Offset(6,0) SET OPERATORS.         */
                               /* 0001  UNION.                       */
                               /* 0002  UNION ALL.                   */
   char     qdbqdt_50[8];      /* Offset(8,0) RESERVED               */
 } QDBQTOPR_T;                 /*                                    */

 typedef
 _Packed struct qdbqtit_t {    /* Offset(0,0) SET ITEM SPECIFICA-    */
                               /* TION.  OVERLAYS qdbqtspc       @A1C*/
   int      qdbqtlen;          /* Offset(0,0) SET ITEM LENGTH. THIS  */
                               /* LENGTH INCLUDES THE                */
                               /* LENGTH(QDBQTIT)+ LENGTH OF THE SET */
                               /* ITEM STRUCTURE.                    */
   short    qdbqtitt;          /* Offset(4,0) SET ITEM TYPE.         */
                               /* 1  CONSTANT OPERAND.               */
                               /* 2  OPERATOR.                       */
   union  {                    /* Offset(6,0) Variable length.  SET  */
          QDBQTOPC_T qdbqtopc; /* ITEM.                              */
          QDBQTOPR_T qdbqtopr; /*                                    */
          } qdbqtitm;          /*                                    */
 } QDBQTIT_T;                  /*                                    */


 /********************************************************************/
 /*                                                                  */
 /* QDT OFFSET TABLE                                                 */
 /*    The following structure is set for each UNIONed outermost QDT */
 /*    that contains subqueries.  This offset table contains offsets */
 /*    for addressability to each QDT within a UNION.                */
 /********************************************************************/
   typedef
   _Packed struct qdbqqhdr_t { /* Offset(0,0) Header.            @A1C*/
     short    qdbqqdtnum;      /* Offset(0,0) Number of subqueries   */
                               /* defined with offsets               */
     char     qdbqdt_51[14];   /* Offset(2,0) RESERVED               */
   } QDBQQHDR_T;               /*                                    */

 typedef
 _Packed struct qdbqqdt_t {    /* Offset(16,0) Array of subquery @A1C*/
                               /* offsets                            */
     int      qdbqo;           /* Offset(16,0) Offset to QDT from    */
                               /* start of 1st QDT in UNION.         */
     char     qdbqdt_52[12];   /* Offset(20,0) RESERVED              */
   } QDBQQDT_T;                /*                                    */

 typedef
 _Packed struct qdbqqdts_t {   /* Offset(0,0)                    @A1C*/
   QDBQQHDR_T qdbqqhdr;        /* Offset(0,0) Header.                */
   QDBQQDT_T qdbqqdt[32];      /* Offset(16,0) Array of subquery     */
 } QDBQQDTS_T;                 /*                                    */


 /********************************************************************/
 /*                                                                  */
 /* ACCESS PLAN                                                      */
 /*    The following structure defines the internal structures that  */
 /*    define the query and the path to access the query results.    */
 /*    This specification is not required. The access plan is used   */
 /*    to decrease the validation and optimize time for a query that */
 /*    could be executed repeatedly.  This structure is for query    */
 /*    internal use only.                                            */
 /********************************************************************/
 typedef
 _Packed struct {              /*                                @A2A*/
   char     qdbqap[1];         /* Offset(0,0) Variable length.       */
 } QDBQAP_T;                   /*                                @A2A*/

 /********************************************************************/
 /*                                                                  */
 /* QUERY RELATED CONSTANT VALUES.                                   */
 /********************************************************************/
                               /* Query completion indicator.        */
 #define QDBQFINA 'A'
                               /* Don't complete the query.  Mini-   */
                               /* mize the time for the entire query */
                               /* result.                            */
 #define QDBQFINF 'F'
                               /* Don't complete the query.  Mini-   */
                               /* mize the time to retrieve the      */
                               /* first buffer of records.           */
 #define QDBQFINM 'M'
                               /* Don't complete the query, but min- */
                               /* imize long I/O waits.              */
 #define QDBQFINC 'C'
                               /* Complete the query.                */

                               /* Temporary result indicator.        */
 #define QDBQTEMN 'N'
                               /* Not allowed.                       */
 #define QDBQTEMO 'O'
                               /* Only allowed if necessary.         */
 #define QDBQTEMA 'A'
                               /* Allowed.                           */
 #define QDBQTEM_TSORT 'T'
                               /* Sorts in general are to be         */
                               /* avoided, however, if the query has */
                               /* to use a temporary result than     */
                               /* TSORT is OK.  This is set by SQL   */
                               /* on precompiler option              */
                               /* ALWCPYDTA(*YES)                    */

                               /* LIB/MBR/FMT constants.             */
 #define QDBQLIBL "*LIBL     "
 #define QDBQFRST "*FIRST    "
 #define QDBQLAST "*LAST     "
 #define QDBQONLY "*ONLY     "

                               /* Join type.                         */
 #define QDBQINNJ 'J'
                               /* Inner join.                        */
 #define QDBQOUTJ 'C'
                               /* Partial outer join (chain).        */
 #define QDBQEXCJ 'E'
                               /* Exception join.                    */

                               /* Join ordering.                     */
 #define QDBQMFOA 'A'
                               /* Join files in any order.           */
 #define QDBQMFON 'N'
                               /* Join files in specified order.     */

                               /* Join operator values.              */
 #define QDBQJOPE "EQ"
                               /* Equal.                             */
 #define QDBQJOGT "GT"
                               /* Greater than.                      */
 #define QDBQJOLT "LT"
                               /* Less than.                         */
 #define QDBQJONE "NE"
                               /* Not equal.                         */
 #define QDBQJOGE "GE"
                               /* Greater than or equal.             */
 #define QDBQJOLE "LE"
                               /* Less than or equal.                */

                               /* Selection item types.              */
 #define QDBQOPF 0
                               /* Field operand.                     */
 #define QDBQOPC 1
                               /* Constant operand.                  */
 #define QDBQOPTR 2
                               /* Operator.                          */
 #define QDBQOPSQ 3
                               /* Subquery operand.                  */
 #define QDBQOPN 4
                               /* IS NULL operator.                  */

                               /* Subquery type                      */
 #define QDBQBEI '\x00'
                               /* Basic pred., EXISTS or IN      @A1C*/
 #define QDBQALL '\x01'
                               /* ALL                            @A1C*/
 #define QDBQANY '\x02'
                               /* ANY                            @A1C*/

                               /* Selection operator values.         */
 #define QDBQEQ "\x00\x01"
                               /* Equal.                         @A1C*/
 #define QDBQNE "\x00\x02"
                               /* Not equal.                     @A1C*/
 #define QDBQGE "\x00\x03"
                               /* Greater than or equal.         @A1C*/
 #define QDBQLE "\x00\x04"
                               /* Less than or equal.            @A1C*/
 #define QDBQGT "\x00\x05"
                               /* Greater than.                  @A1C*/
 #define QDBQLT "\x00\x06"
                               /* Less than.                     @A1C*/
 #define QDBQRNG "\x00\x07"
                               /* Range (inclusive).             @A1C*/
 #define QDBQOR "\x00\x0B"
                               /* Boolean or.                    @A1C*/
 #define QDBQXOR "\x00\x0C"
                               /* Boolean exclusive or.          @A1C*/
 #define QDBQAND "\x00\x0D"
                               /* Boolean and.                   @A1C*/
 #define QDBQNOT "\x00\x0E"
                               /* Boolean not.                   @A1C*/
 #define QDBQSCAN "\x00\x41"
                               /* Scan (contains).               @A1C*/
 #define QDBQWILD "\x00\x42"
                               /* Wild card scan (like).         @A1C*/
 #define QDBQVAL "\x00\x43"
                               /* Values (in).                   @A1C*/
 #define QDBQEXST "\x00\x45"
                               /* EXISTS                         @A1C*/
 #define QDBQIN "\x00\x46"
                               /* IN                             @A1C*/
 #define QDBQNS "\xFF\xFF"
                               /* Not set or init. operator      @A1C*/

                               /* Result (set) operators.            */
 #define QDBQSUN "\x00\x01"
                               /* Union. Query results are combined  */
                               /* with all duplicate records elimi-  */
                               /* nated.                         @A1C*/
 #define QDBQSUNA "\x00\x02"
                               /* Union all. Query results are com-  */
                               /* bined. Final result could contain  */
                               /* duplicate records.             @A1C*/
 #define QDBQICN  'N'
                               /* Index Creation Not Allowed.        */
 #define QDBQICY  'Y'
                               /* Index Creation Allowed.            */
 #define QDBQICA '\x00'
                               /* Index Creation Allowed.        @A1C*/
 #define QDBQKTU  'U'
                               /* Unique Key Field Type.             */
 #define QDBQKTD  'D'
                               /* Duplicate Key Field Type.          */
 #define QDBQKTF  'F'
                               /* FIFO Duplicate Key Field Type.     */
 #define QDBQKTL  'L'
                               /* LIFO Duplicate Key Field Type.     */
 #define QDBQKTC  'C'
                               /* FCFO Duplicate Key Field Type.     */
 #define QDBQKTA  'A'
                               /* Consider any key field type.       */
 #define QDBQKTY '\x00'
                               /* Consider any key field type.   @A1C*/

 #endif                        /* ifndef _QDBQDT_H                   */


 #ifndef _QQQVALS_H
 #define _QQQVALS_H
 /********************************************************************/
 /*                                                                  */
 /* INCLUDE NAME:  QQQVALS                                           */
 /*                                                                  */
 /* DESCRIPTIVE NAME:  Values For Query Variable Fields              */
 /*                                                                  */
 /* FUNCTION:                                                        */
 /*    This include maps the list of literal values and attributes   */
 /*    for variable fields defined within the Query Definition Tem-  */
 /*    plate (QDT).                                                  */
 /*                                                                  */
 /*    During the execution of a query, the variable fields defined  */
 /*    within the Query Definition Template will be set to the con-  */
 /*    stant literals specified in the VALUES parameter. This is     */
 /*    done on a relative position basis.  The first variable field  */
 /*    in the QDT is assigned the first literal in the list of       */
 /*    values. The second variable field is assigned the second      */
 /*    value and so on.                                              */
 /*                                                                  */
 /*    For a query that has multiple Query Definition Templates      */
 /*    (using a set operator such as UNION), the relative position   */
 /*    is maintained from template to template.                      */
 /*                                                                  */
 /*    In this include, the attributes of the variable fields are    */
 /*    specified for each  pointer in a char=7 structure.            */
 /*    These attributes must reflect the attributes of the value.    */
 /********************************************************************/
 typedef
 _Packed struct qqqvalen_t {   /* Offset(49,0) Scalar length for @A1C*/
                               /* character, binary, floating point, */
                               /* onlys, either, or open.  For       */
                               /* Graphic, this will also be # bytes */
                               /* (not characters)                   */
         unsigned qqqvadec:8;  /* Offset(49,0) Fractional digits for */
                               /* zoned or packed.                   */
         unsigned qqqvatot:8;  /* Offset(50,0) Total digits for      */
                               /* zoned or packed.                   */
       } QQQVALEN_T;           /*                                    */

 typedef
 _Packed struct qqqvaary_t {   /* Offset(51,0) Used to contain pre-  */
                               /* cision and digits for binary   @A1C*/
                               /* values.                            */
         unsigned qqqvbind:8;  /* Offset(51,0) Fractional digits for */
                               /* binary value.                      */
         unsigned qqqvbint:8;  /* Offset(52,0) Total digits for      */
                               /* binary value.                      */
         char  qqqvals_2[2];   /* Offset(53,0) RESERVED              */
       } QQQVAARY_T;           /*                                    */

 typedef _Packed struct qqqvattr_t {
                               /* Offset(48,0) Attributes of value.  */
       unsigned qqqvatyp:8;    /* Offset(48,0) Scalar type:          */
                               /* '00'X  Binary                      */
                               /* '01'X  Floating pt                 */
                               /* '02'X  Zoned Decimal               */
                               /* '03'X  Packed                      */
                               /* '04'X  Character                   */
                               /* '06'X  Graphic                     */
                               /* '07'X  DBCS - Only                 */
                               /* '08'X  DBCS - Either               */
                               /* '09'X  DBCS - Open                 */
                               /* '0B'X  Date                        */
                               /* '0C'X  Time                        */
                               /* '0D'X  Timestamp                   */
       QQQVALEN_T qqvalen;     /* Offset(49,0) Scalar length for     */
                               /* character, binary, floating point, */
                               /* onlys, either, or open.  For       */
                               /* Graphic, this will also be # bytes */
                               /* (not characters)                   */
       QQQVAARY_T qqqvaary;    /* Offset(51,0) Used to contain pre-  */
                               /* cision and digits for binary       */
                               /* values.                            */
     } QQQVATTR_T;             /*                                    */

 typedef
 _Packed struct qqqvals_3_t {  /* Offset(55,0) Field attributes. @A1C*/
                               /*                                    */
       unsigned qqqvvlen:1;    /* Offset(55,0) Variable length host  */
                               /* variable field.                    */
                               /* 0  The host variable field is not  */
                               /*    variable length.                */
                               /* 1  The host variable field is var- */
                               /*    iable length.                   */
       unsigned qqqvnulll:1;   /* Offset(55,1) If ON, QQQVSPTR is    */
                               /* ignored & literal is the null      */
                               /* value.  form.  If OFF, the literal */
                               /* pointed to by QQQVSPTR is used.    */
       unsigned qqqvzerol:1;   /* Offset(55,2) If ON, QQQVSPTR is    */
                               /* ignored & literal is zero length.  */
                               /* If OFF, the literal pointed to by  */
                               /* QQQVSPTR is used.                  */
       unsigned qqqvals_4:5;   /* Offset(55,3) RESERVED              */
     } QQQVALS_3_T;            /*                                    */

  typedef
  _Packed struct qqqvlst_t {   /* Offset(32,0) List of variable  @A1C*/
                               /* field values referenced by         */
                               /* WDDFVARX.                          */
     _SPCPTR  qqqvsptr;        /* Offset(32,0) Space pointer         */
                               /* addressing the host variable       */
                               /* value. The value must be in        */
                               /* internal form.                     */
     QQQVATTR_T qqqvattr;      /* Offset(48,0) Attributes of value.  */
     QQQVALS_3_T qqqvals_3;    /* Offset(55,0) Field attributes.     */
     char     qqqvdvft;        /* Offset(56,0) Date/Time/Timestamp   */
                               /* format attribute. This field       */
                               /* applies to Date, Time, or          */
                               /* Timestamp values only, where       */
                               /* QQQVATYP is Date, Time, or         */
                               /* Timestamp.  The values for this    */
                               /* may be:                            */
                               /* '00'X  Job default                 */
                               /* 'FF'X  Determine format            */
                               /* '01'X  USA format                  */
                               /* '03'X  ISO format                  */
                               /* '05'X  EUR format                  */
                               /* '07'X  JIS format                  */
                               /* '09'X  SAA timestamp               */
                               /* '17'X  MDY format                  */
                               /* '18'X  DMY format                  */
                               /* '19'X  YMD format                  */
                               /* '1A'X  JUL format                  */
                               /* '1B'X  HMS format                  */
                               /* '1D'X  YYYYNNN format              */
                               /* '1E'X  YYYYMMDDHHMMSS format       */
                               /* These formats are optional. If     */
                               /* X'FF', then the format will be in  */
                               /* the QDT HDR (QDBQDFMT or           */
                               /* QDBQTFMT), and that format will be */
                               /* used first in determining the      */
                               /* format.                            */
     char     qqqvdvsp;        /* Offset(57,0) Date/Time/Timestamp   */
                               /* separator.  It is only set when    */
                               /* QQQVDVFT is '17'X, '18'X, '19'X,   */
                               /* '1A'X or '1B'X.                    */
     unsigned short qqqvcsid;  /* Offset(58,0) CCSID of value.       */
     char     qqqvals_5[20];   /* Offset(60,0) RESERVED              */
   } QQQVLST_T;                /*                                    */
 typedef
 _Packed struct qqqvals_t {    /* Offset(0,0) Values for variable@A1C*/
                               /* fields                             */
   short    qqqvvalnum;        /* Offset(0,0) Number of values in    */
                               /* list.                              */
   char     qqqvals_1[30];     /* Offset(2,0) RESERVED               */
   QQQVLST_T qqqvlst[1];       /* Offset(32,0) List of variable      */
 }  QQQVALS_T;                 /*                                    */


 #endif                        /* ifndef _QQQVALS_H                  */


/***   START OF SPECIFICATIONS   ************************************/
/*                                                                  */
/*                                                                  */
/* MODULE NAME:  QDMQUFCB                                           */
/*                                                                  */
/*                                                                  */
/* DESCRIPTIVE NAME:  Provides the basic structure for the UFCB     */
/*                    declares for the query function.              */
/*                                                                  */
/*                                                                  */
/*                                                                  */
/***   END OF SPECIFICATIONS   **************************************/
 #define NOTRECORDLTH -1       /* Off flag for Primary Rec Lgth    */
 #define NOTFILEDEP -3         /* Off flag for file dependent I/O  */
 #define NOTLEVELCK -6         /* Off flag for level checking      */
 #define NOTFORMATSEQ -7       /* Off flag for record format sequen*/
 #define NOTKEYFDBK -53        /* Off flag for key feed back       */
 #define NOTSEQUPROC -58       /* Off flag for sequential proc     */
 #define NOTCOMITCTL -59       /* Off flag for commitment control  */
 #define RECORDLTH  1          /* Flag = 1  for Primary Rec Lgth   */
 #define FILEDEP  3            /* Flag = 3  file dependent I/O     */
 #define LEVELCK  6            /* Flag = 6  for level checking     */
 #define FORMATSEQ  7          /* Flag = 7  record format sequen   */
 #define KEYFDBK  53           /* Flag = 53 for key feed back      */
 #define SEQUPROC  58          /* Flag = 58 for sequential proc    */
 #define COMITCTL  59          /* Flag = 59 for commit ctl         */
 #define ON 1                  /* ON switch for bit fields         */
 #define OFF 0                 /* OFF switch for bit fields        */
 #define END 1956              /* The length of the UFCB           */
 #define MAXFORMATS 75         /* Maximum number of record formats.
                     This value is used to define the length of the
                     record format section. The field maximum must be
                     set prior to the call to QQQQUERY             */
 #define ACTGRPDFN 'A'         /* Active group definition          */
 #define JOBGRPDFN 'J'         /* Job group definition             */
 #define COMMIT_YES '\x80'         /*  Place member under commitment
                                       control when it is opened,
                                       and default to the record
                                       locking level used on
                                       STRCMTCTL.  COMMIT(*YES)  */

 #define COMMIT_NO '\x00'          /*  Do not place the member under
                                       commitment control when it is
                                       opened. COMMIT(*NO)       */

 #define COMMIT_CHG '\x82'        /*   Place member under Commitment
                                       control when it is opened and
                                       use record locking level *CHG.
                                       COMMIT(*YES,*CHG)         */

 #define COMMIT_CS '\x86'         /*   Place member under Commitment
                                       control when it is opened and
                                       use record locking level *CS.
                                       COMMIT(*YES,*CS)          */

 #define COMMIT_ALL '\x87'        /*   Place member under Commitment
                                       control when it is opened and
                                       use record locking level *ALL.
                                       COMMIT(*YES,*ALL)         */

 #define ENDLIST  32767        /* This field MUST be set to 32767  */

 #define RELEASE "01"
                               /* Release number                 @A1C*/
 #define VERSION "00"
                               /* Version of Release             @A1C*/
 /*-----------------------------------------------------------------*/
typedef _Packed struct               /* FLAGS                   @A1C*/
      {
      unsigned flg1rsva : 3;         /* RESERVED                    */
      unsigned flg1shr  : 1;         /* Share specified             */
      unsigned flg1shsw : 1;         /* '1'b = yes '0'b = no share  */
      unsigned flg1secr : 1;         /* Secure specified            */
      unsigned flg1ud   : 1;         /* '1'b = yes '0'b = no secure */
      unsigned flg1svb  : 1;         /* RESERVED                    */
      } _flg0;
 /*-----------------------------------------------------------------*/
typedef _Packed struct               /* FLAGS                   @A1C*/
      {
      unsigned flagrsva : 2;         /* RESERVED                    */
      unsigned flagui   : 1;         /* Open input                  */
      unsigned flaguo   : 1;         /* Open output                 */
      unsigned flaguu   : 1;         /* Open update                 */
      unsigned flagud   : 1;         /* Delete                      */
      unsigned flagsvb  : 2;         /* RESERVED                    */
      } _flg1;
 /*-----------------------------------------------------------------*/
typedef _Packed struct                    /* Release & Version  @A1C*/
      {
       signed char release[2];            /* MUST be set to "01"    */
       signed char version[2];            /* MUST be set to "00"    */
      } _rlvr ;
 /*-----------------------------------------------------------------*/
typedef _Packed struct               /* FLAGS                   @A1C*/
      {
       unsigned flg2mkcp : 1;        /* MARK COUNTER OPTION.        */
                                     /* 1 = Mark counter specified  */
                                     /*     by invmkcnt will be     */
                                     /*     used.                   */
                                     /* 0 = Mark counter specified  */
                                     /*     by invmkcnt will not    */
                                     /*     be used.                */
       unsigned flg2rsv1 : 1;        /* RESERVED                    */
       unsigned flg2brcd : 1;        /* BLOCKED RECORDS
                                         1= BLOCKED RECORDS YES
                                         0= BLOCKED RECORDS NO      */
       unsigned flg2rsv2 : 5;         /* RESERVED                   */
      } _flg2;
 /*-----------------------------------------------------------------*/
typedef _Packed struct               /* FLAGS                   @A1C*/
      {
       unsigned flg3rsv1 : 2;        /* Reserved                    */
       unsigned flg3ntve : 1;        /* '1'b - Native Enviroment    */
       unsigned flg3rsv2 : 3;        /* Reserved                    */
       unsigned flg3null : 1;        /* Process Null capable fields */
       unsigned flg3rsv3 : 1;        /* RESERVED                    */
      } _flg3;
 /*-----------------------------------------------------------------*/
typedef _Packed struct               /* FLAGS                   @A1C*/
      {
       unsigned flg4rsv1 : 1;        /* Reserved                    */
       unsigned flg4iact : 1;        /* Mark counter usage.         */
                                     /* 1 = Mark counter specified  */
                                     /*     by invmkcnt contains an */
                                     /*     activation group number.*/
                                     /* 0 = Mark counter specified  */
                                     /*     by invmkcnt contains an */
                                     /*     invocation mark.        */
       unsigned flg4rsv2 : 6;        /* Reserved                    */
      } _flg4;
 /*-----------------------------------------------------------------*/
typedef _Packed struct           /* Record format name structure@A1C*/
      {
      char name [10];                /* a 10 byte format name       */
      char number [13];              /* format sequence number      */
      } _formatid;
 /*-----------------------------------------------------------------*/
typedef  _Packed struct         /* Primary record length         */
      {
      signed short int primrln1;   /* Flag = 1  for Primary Rec Lgth*/
                                   /* RLEN1 - PRIMARY RECORD length.*/
      signed short int primrlnv;   /* The user specified record
                                      length.                       */
 /*-----------------------------------------------------------------*/
      signed short int filedep;   /* Flag = 3 for file dependent I/O*/
       unsigned fldonoff :   1;    /* ON - file dependent = yes     */
                                   /* OFF - file dependent = no     */
       unsigned fldrsv1 :   7;     /* RESERVED                      */
 /*-----------------------------------------------------------------*/
      signed short int lvlchk;    /* Flag = 6 for level check option*/
       unsigned lvlonoff :   1;    /* ON - perform level check      */
                                   /* OFF - do not level check      */
       unsigned lvlrsv1 :   7;     /* RESERVED                      */
 /*-----------------------------------------------------------------*/
      signed short int recfmts;   /* Flag = 7 record format sequence*/
                                  /* numbers for level checking     */
      signed short int maximum;   /* maximum number of formats follw*/
      signed short int curnum;    /* current number of formats follw*/
      _formatid formats [75];       /* Array of format names and
                                     sequence numbers i.e.
                                     char name [10]
                                     char number [13]
                                     The array has maximum number of
                                     entries equal to 75            */
 /*-----------------------------------------------------------------*/
      signed short int keyfdbk;    /* Flag = 53 for key feed back   */
                                   /* KEYFDBK - DB KEY FEEDBACK
                                      UFCB ONLY                     */
       unsigned keyonoff :   1;    /* ON - PROVIDE FEEDBACK         */
                                   /* OFF - DON'T PROVIDE FEEDBACK  */
       unsigned keyrsv1 :   7;     /* RESERVED                      */
 /*-----------------------------------------------------------------*/
      signed short int seqonly;    /* Flag = 58 for sequential proc */
                                   /* SEQONLY - FAST SEQUENTIAL
                                      PROCESSING                    */
       unsigned seqonoff :  1;     /* ON - USE FAST SEQ PROCESSING  */
                                   /* OFF - USE STANDARD SEQ PROC   */
       unsigned numonoff :  1;     /* ON - NUMBER OF RECORDS TO     */
                                   /*   TRANSFER TO/FROM THE I/O    */
                                   /*   BUFFERS FOR FAST SEQUENTIAL */
                                   /*   PROCESSING IS SPECIFIED     */
                                   /* OFF - NUMBER OF RECORDS TO    */
                                   /*   TRANSFER TO/FROM THE I/O    */
                                   /*   BUFFERS IS NOT SPECIFIED    */
       unsigned seqrsv1 :  6;      /* RESERVED                      */
      signed short int numrecs;    /* NUMBER OF RECORDS TO TRANSFER */
                                   /*   TO/FROM THE I/O BUFFERS FOR */
                                   /*   FAST SEQUENTIAL PROCESSING  */
 /*-----------------------------------------------------------------*/
      signed short int commitc;    /* Flag = 59 for commit ctl      */
                                   /* COMMIT - COMMITMENT CONTROL
                                      OPTIONAL RECORD LOCKING LEVEL
                                                                    */
      char control;                /* COMMIT - COMMITMENT
                                          CONTROL and optional
                                          record locking level      */

       } _pcmt ;
/********************************************************************/
/*  DECLARES NEEDED FOR BASE UFCB FOR QUERY FUNCTION                */
/********************************************************************/
  typedef _Packed union query
   {
   _Packed struct qufcb            /* QUERY BASE UFCB           @A1C*/
     {
      char reserved1  [174];       /* RESERVED                      */
     _flg0 shr_secure ;            /* Share & Secure flags          */
     _flg1 open;                   /* Open flags                    */
     _rlvr relver;                 /* Release & Version             */
      unsigned long int  invmkcnt; /* Mark counter of invocation or */
                                   /* activation group.             */
                                   /* Set to the invocation mark    */
                                   /* count when scoping the open   */
                                   /* to the default activation     */
                                   /* group.  For this case, a 0    */
                                   /* indicates a permanent open,   */
                                   /* and any value greater than 0  */
                                   /* indicates a temporary open.   */
                                   /* Set to the activation group   */
                                   /* mark count when scoping the   */
                                   /* open to an activation group.  */
                                   /* NOTE:  Setting this field to  */
                                   /* the default activation group  */
                                   /* is the same as specifying an  */
                                   /* invocation mark of 0 for a    */
                                   /* permanent open. This is the   */
                                   /* low-order four bytes of the   */
                                   /* mark count value. This field  */
                                   /* needs to be concatenated with */
                                   /* mumkctbh to retrieve the      */
                                   /* actual invocation mark.       */
     _flg2 markcnt;                /* Mark Count & Blocked record.  */
      char reserved2 [1];          /* RESERVED                      */
     _flg4 invact;                 /* Marker Count usage.           */
      char reserved2a [1];         /* RESERVED                      */
     _flg3 native;                 /* Native envir & Process NULLS  */
      char reserved3a [2];         /* RESERVED                      */
      char opnscp;                 /* Open Scope                    */
                                   /* 'A' = Open is scoped to the   */
                                   /*       specified activation    */
                                   /*       group, or if this is    */
                                   /*       the default activation  */
                                   /*       group and an invocation */
                                   /*       mark is specified, the  */
                                   /*       open is scoped to the   */
                                   /*       program at invocation   */
                                   /*       mark specified.         */
                                   /* 'J' = Open is scoped to the   */
                                   /*       job.                    */
                                   /* '00'X = Not specified. 'A'    */
                                   /*       will be assumed.        */
      char reserved3b [5];         /* Reserved                  @A9A*/
      unsigned long int mumkctbh;  /* High-order four bytes of the  */
                                   /*  mark count value. This field */
                                   /*  needs to be concatenated with*/
                                   /*  invmkcnt to obtain the actual*/
                                   /*  mark.                @A9A@ABC*/
       char reserved3 [7];         /* RESERVED              @A9C@ABC*/

/********************************************************************/
/*  DECLARES NEEDED FOR UFCB VARIABLE AREA FOR THE QUERY FUNCTION   */
/********************************************************************/
/*  The variable area of the UFCB is made up of any number of       */
/*  optional variable length parameters. Each parameter has the     */
/*  following format: PARM-ID  PARM-VALUE.                          */
/*  The PARM-ID is a short int that must be set to a predetermined  */
/*  value in order to identify the parameter. The PARM VALUE can    */
/*  be of any structural format as defined by the PARM-ID. For      */
/*  the query function the values MUST be set as indicated. The     */
/*  parameters are only interrogated during open. If the parameter  */
/*  is NOT used it MUST be set to its minus value. If the parameter */
/*  is used its positive value is set in the PARM-ID field and the  */
/*  pertinent information associated with the parameter must also   */
/*  be set. By setting the PARM-ID value to minus, OPEN then knows  */
/*  the length of the structure that will follow and how many bytes */
/*  to skip.                                                        */
/********************************************************************/

    _pcmt   parameter;             /* Variable parameters           */

/********************************************************************/
/*  The end of the variable area of the UFCB is determined during   */
/*  the open function by having the next sequential PARM-ID set to  */
/*  a value of 32767.  This sets this field equal to HEX '6FFF'.    */
/*  This PARM-ID indicates end of list. The PARM VALUE for this ID  */
/*  is not used.                                                    */
/********************************************************************/

     short int ufcbend;           /* This field MUST be set to 32767*/
                                  /* END OF VARIABLE AREA PARMS.    */
                                  /* Set this field to ENDLIST      */
     } qufcb;
   int *dummy;                    /* Dummy pointer to force boundary*/
                                  /* alignment for UFCB Structure   */
   char view [END];               /* A Char view of the entire UFCB */

   } QDBUFCB_T;
/************ BEGINNING OF SAMPLE INSTRUCTIONS ***********************
   QDBUCFB_T ufcb;
   QDBUFCB_T *ufcbptr;
   int i = 0;
   int end = 1956;
   short int user_reclngth;
   Short int num_formats;
   char format_name [10];
   char sequence_num [13];

 ********************************************************************
** The following set of instructions are required in order to     **
** initialize the UFCB prior to calling QQQQUERY. If you are      **
** allocating a new UFCB, you MUST initialize the entire space    **
** prior to the call to QQQQUERY. The basic set of instructions for*
** this initialization are given below. If the UFCB has been opened*
** previously you should NOT re-initialize it.                    **
 ********************************************************************
   do
   {
   ufcb.view [i] = 0x00;             **Initialize the entire space  **
   ++i;                              **to HEX '00'                  **
   }
   while (i < end);
   memcpy(ufcb.qufcb.relver.release, RELEASE, 2); ** Set release    **
   memcpy(ufcb.qufcb.relver.version, VERSION, 2); ** Set version    **
   ufcb.qufcb.open.flagui = 1;     **Set the open option to input  **
   ufcb.qufcb.parameter.maximum = MAXFORMATS ; **Set the max allowed -
                                 This must be set even though ID is OFF*
    ********************************************************************
   ** The following set of instructions turn OFF each of the         **
   ** variable parameters so that they will not be processed by the  **
   ** open function. If for some reason you do not intend to use any **
   ** one or all of the variable parameters, they must be set to the **
   ** OFF value.                                                     **
    ********************************************************************
   ufcb.qufcb.parameter.primrln1 = NOTRECORDLTH;
   ufcb.qufcb.parameter.filedep = NOTFILEDEP ;
   ufcb.qufcb.parameter.lvlchk = NOTLEVELCK ;
   ufcb.qufcb.parameter.recfmts = NOTFORMATSEQ ;
   ufcb.qufcb.parameter.keyfdbk = NOTKEYFDBK ;
   ufcb.qufcb.parameter.seqonly = NOTSEQUPROC;
   ufcb.qufcb.parameter.commitc = NOTCOMITCTL;
   ufcb.qufcb.ufcbend = ENDLIST ;


   ********************************************************************
  **If QQQQUERY is to process any of the special parameters in the  **
  **UFCB, you MUST initialize them prior to first calling the       **
  **QQQQUERY API.  Example instructions for initializing these fields*
  **are given below.  If the UFCB has been opened previously you    **
  **should NOT re-initialize it.                                    **
   ********************************************************************


 *************************************************************************
   **Setting up for processing a user specified record length. First **
   **set the parameter value to on, then set the record length field.**
 *************************************************************************
   ufcb.qufcb.parameter.primrln1 = RECORDLTH;
   ufcb.qufcb.parameter.primrlnv = user_reclngth;


 *************************************************************************
   **Setting up for processing the file dependent option:            **
   **  if set on (Bit='1'b) the Control List must be used for I/O opts*
   **  if set off (Bit='0'b) the Control List is not used            **
   **                                                                **
 *************************************************************************
   ufcb.qufcb.parameter.filedep = FILEDEP ;
   ufcb.qufcb.parameter.fldonoff = ON; **ON - Control List used   **
   ufcb.qufcb.parameter.fldonoff = OFF; **Control List used not used**


 *************************************************************************
   **Setting up for processing Level checking                          **
 *************************************************************************
   ufcb.qufcb.parameter.lvlchk = LEVELCK ;
   ufcb.qufcb.parameter.lvlonoff = ON; **ON - perform level check    **
   ufcb.qufcb.parameter.lvlonoff = OFF; **OFF - do not level check   **

 *************************************************************************
   **Setting up for processing the record format names and sequence  **
   **numbers. To get the format names and sequence numbers you will  **
   **need to do a RETRIEVE FILE DESCRIPTION and as part of the file  **
   **attributes the format names and sequence numbers will be.       **
   **The sequence numbers are alph-numeric char 13 fields that do    **
   **not contain any internal NULL values.                           **
 *************************************************************************
   ufcb.qufcb.parameter.recfmts = FORMATSEQ ;
                               **Please note the maximum formats were
                                  initialized above                   **
   ufcb.qufcb.parameter.curnum = num_formats;

                                **move in the format names and seq #s**
   strncpy(ufcb.qufcb.parameter.formats[0].name,format_name,
          strlen(format_name));
   strncpy(ufcb.qufcb.parameter.formats[0].number,sequence_num,
          strlen(sequence_num));


 *************************************************************************
   **Setting up for processing KEY Feedback                            **
   ** If set ON the Key value is returned in the I/O feed back area    **
   ** If set OFF the Key is Not in the Feed Back area                  **
 *************************************************************************
   ufcb.qufcb.parameter.keyfdbk = KEYFDBK ;
   ufcb.qufcb.parameter.keyonoff = ON; **ON - supply key feedback    **
   ufcb.qufcb.parameter.keyonoff = OFF; **OFF - do not give feedback **


 *************************************************************************
   **Setting up for processing fast sequential processing              **
   ** If set ON multiple records will be transferred between the machine*
   **    interface and the internal data base buffers.
   ** If set OFF only one record will transfer into the DB buffers     **
 *************************************************************************
   ufcb.qufcb.parameter.seqonly = SEQUPROC;
   ufcb.qufcb.parameter.seqonoff =ON; **ON - use fast seq processing **
                                        **OFF - use standard seq proc  **
   ufcb.qufcb.parameter.numonoff = ON; **ON - number of records to   **
                                        **  transfer to/from the I/O   **
                                        **  buffers for fast sequential**
                                        **  processing is specified    **
                                        **OFF - number of records to   **
                                        **  transfer to/from THE I/O   **
                                        **  buffers is not specified   **



 *************************************************************************
   **Setting up for commitment control processing                      **
   ** If set ON the Key value is returned in the I/O feed back area    **
   ** If set OFF the Key is Not in the Feed Back area                  **
 *************************************************************************
   ufcb.qufcb.parameter.commitc = COMITCTL;
   ufcb.qufcb.parameter.control = COMMIT_ALL; **COMMIT ALL           **

   ufcb.qufcb.ufcbend = ENDLIST ;


************* END OF SAMPLE INSTRUCTIONS *********************************/

 #ifndef _QQQNLSS_H
 #define _QQQNLSS_H
 /********************************************************************/
 /*                                                                  */
 /*  FUNCTION: INCLUDED TO GENERATE A STRUCTURE DESCRIBING           */
 /*            RETRIEVED SORT SEQUENCE TABLE INFORMATION.            */
 /*                                                                  */
 /* **************************************************************** */
 typedef
 _Packed struct qqqsrtseq_t {  /* Offset(10,0) sort sequence     @A1C*/
     char qqqstbnm [10];       /* Offset(10,0) Table name            */
     char qqqstbnl [10];       /* Offset(20,0) Library name or       */
                               /* *LIBL or                           */
                               /* *CURLIB                            */
   } QQQSRTSEQ_T;

 typedef
 _Packed struct qqqstb1_t {    /* Offset(0,0) Sort sequence and  @A1C*/
                               /* Language identifier.               */
     char qqqresv2[10];        /* Offset(0,0) Language identifier:   */
     QQQSRTSEQ_T qqqsrtseq;    /* Offset(10,0) Sort sequence:        */
                               /* Specified object name or           */
                               /* *JOB or                            */
                               /* *LANGIDUNQ or                      */
                               /* *LANGIDSHR or                      */
                               /* *HEX                               */
     char qqqlangid [10];      /* Offset(30,0) Language identifier:  */
                               /* *JOB OR                            */
                               /* 3-CHARACTER IDENTIFIER             */
                               /*   Refer to the AS/400 National     */
                               /*   Language Support Planning Guide  */
                               /*   (GC41-9877) for a complete list  */
                               /*   of language identifers supported.*/
                               /* (CAN BE BLANK IF SRTSEQ IS NOT     */
                               /*  *JOB, OR *LANGIDUNQ or *LANGIDSHR)*/
     char qqqresv3 [2];        /* Offset(40,0) Reserved.             */
   } QQQSTB1_T;

 typedef
 _Packed struct qqqstb2_t   {  /* Offset(42,0) sequence tables and   */
                               /* names.                         @A1C*/
     char qqqresv4 [2];        /* Offset(42,0) Reserved.             */
     char qqqtbnm [10];        /* Offset(44,0) Table name            */
     char qqqlbnm [10];        /* Offset(54,0) Library name or       */
                               /* *LIBL or                           */
                               /* *CURLIB                            */
     char qqqresv5 [14];       /* Offset(64,0) Reserved.             */
     short qqqtbl_ccsid;       /* Offset(78,0) Sequence table CCSID  */
                               /* Only used when QQQTBL is specified.*/
   } QQQSTB2_T;

 typedef
 _Packed struct qqqstbe1_t {  /* Offset(80,0) DBCS sequence tables   */
        char qqqstbtyp;            /* Type of DBCS Sort sequence
                                       table provided
                                       '00'X - UCS-2 sort sequence
                                               table                 */
        char qqqstbloc;              /* Location of DBCS sort sequence
                                       '00'X - Table is stored within
                                               the 256-byte Sequence
                                               Table
                                       '01'X - Table is stored at the
                                               DBCS sort sequence table
                                               offset                 */
        long qqqstblen;             /* Length of DBCS sort sequence
                                       table                         */
        long qqqstboff;             /* Offset to the DBCS sort
                                       sequence table from start of the
                                       main sort sequence structure  */
      } QQQSTBE1_T;


 typedef
 _Packed struct qqqnlss_t   {  /* Offset(0,0) sequence tables, names,*/
                               /* parameters.                    @A1C*/
     QQQSTB1_T qqqstb1;        /* Offset(0,0) Sequence table name,   */
                               /* library name & language identifier */
     QQQSTB2_T qqqstb2;        /* Offset(44,0) Sequence table name,  */
                               /* library name for messages and CCSID*/
     QQQSTBE1_T qqqstbe1;      /* DBCS sort sequence information     */
     char qqqresv1 [22];       /* Offset(90,0) Reserved.             */
     char qqqtbl [256];        /* Offset(112,0) Sequence Table.      */

   } QQQNLSS_T;



    /*****************************************************************/
    /*                                                               */
    /* FOLLOWING ARE THE VALID SYMBOLIC SORT SEQUENCE VALUES         */
    /*                                                               */
    /*****************************************************************/

 #define QQQHEX "*HEX      "   /* HEXADECIMAL (NO) COLLATING         */
 #define QQQJBS "*JOB      "   /* JOB                                */
 #define QQQLUNQ "*LANGIDUNQ"  /* UNIQUE WEIGHT LANGUAGE TABLE       */
 #define QQQLSHR "*LANGIDSHR"  /* SHARED WEIGHT LANGUAGE TABLE       */

    /*****************************************************************/
    /*                                                               */
    /* FOLLOWING ARE THE VALID SYMBOLIC LANGUAGE IDS                 */
    /*                                                               */
    /*****************************************************************/

 #define QQQJBL "*JOB      "   /* JOB                                */

 #endif                        /* ifndef _QQQNLSS_H                  */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
