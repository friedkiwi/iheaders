/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLIEPTI                                    */
 /*                                                                */
 /* Descriptive Name: Indexes into entry point table.              */
 /*                                                                */
 /* Description: Include header file for indexes into the entry    */
 /*              point table (EPT) for APIs.                       */
 /*                                                                */
 /*              This header file is included into header file     */
 /*              QLIEPT, Access to entry point table.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28436       3D10  940522 SPATEL  : New include           */
 /* $A1= D91693.1     3D60  941030 CEM     : 1st EPT driver changes*/
 /* $A2= D91693.2     3D60  941211 CEM     : 2nd EPT driver changes*/
 /* $A3= D91693       3D60  950317 CEM     : 3rd EPT driver changes*/
 /* $A4= P3993745     3D60  950616 CEM     : 6th EPT driver changes*/
 /* $A5= D94203.2     3D70  960110 CEM     : EPT driver changes.   */
 /* $A6= D94203.3     3D70  960306 CEM     : EPT driver changes.   */
 /* $A7= D94203.4     3D70  960501 CEM     : EPT driver changes.   */
 /* $A8= D94203       3D70  960515 CEM     : EPT driver changes.   */
 /* $A9= D94751.1     4D10  960911 CEM     : EPT driver changes.   */
 /* $AA= D94751.2     4D10  961106 CEM     : EPT driver changes.   */
 /* $AB= D94751.3     4D10  961204 CEM     : EPT driver changes.   */
 /* $AC= D94751       4D10  970108 CEM     : EPT driver changes.   */
 /* $AD= D95003.2     4D20  970312 CEM     : EPT driver changes.   */
 /* $AE= D95003.3     4D20  970521 CEM     : EPT driver changes.   */
 /* $AF= D95003       4D20  970618 CEM     : EPT driver changes.   */
 /* $AG= D95003.4     4D20  970723 CEM     : EPT driver changes.   */
 /* $AH= D95371.1     4D30  971008 CEM     : EPT driver changes.   */
 /* $AI= D95371.2     4D30  971022 CEM     : EPT driver changes.   */
 /* $AJ= D95371.4     4D30  971217 CEM     : EPT driver changes.   */
 /* $AK= D95371       4D30  980204 CEM     : EPT driver changes.   */
 /* $AL= D95728.1     4D40  980506 CEM     : 1st EPT driver changes*/
 /* $AM= D95728.2     4D40  980617 CEM     : 2nd EPT driver changes*/
 /* $AN= D95728.3     4D40  980805 CEM     : 3rd EPT driver changes*/
 /* $AO= D95728       4D40  980902 CEM     : 4th EPT driver changes*/
 /* $AP= D95728.4     4D40  981007 CEM     : 5th EPT driver changes*/
 /* $AQ= D95728.5     4D40  981021 CEM     : 6th EPT driver changes*/
 /* $AR= D97515.4     4D50  990509 CEM     : EPT driver changes.   */
 /* $AT= D97515       4D50  990523 CEM     : 5th EPT driver changes*/
 /* $AU= D97724.1   v5r1m0  990912 CEM     : 1st EPT driver changes*/
 /* $AV= D97724.2   v5r1m0  991107 CEM     : 2nd EPT driver changes*/
 /* $AW= D97724.4   v5r1m0  000305 CEM     : 4th EPT driver changes*/
 /* $AX= D97724.5   v5r1m0  041600 CEM     : 5th V5R1 EPT driver   */
 /* $AY= D97724.6   v5r1m0  051400 CEM     : 6th V5R1 EPT driver   */
 /* $AZ= D97724.7   v5r1m0  061800 CEM     : 7th V5R1 EPT driver   */
 /* $B0= D97724.8   v5r1m0  080600 CEM     : 8th V5R1 EPT driver   */
 /* $B1= D97724     v5r1m0  091700 CEM     : 9th V5R1 EPT driver.  */
 /* $B2= D98611.2   v5r2m0  030401 CEM     : 2nd V5R2 EPT driver.  */
 /* $B3= D98611.3   v5r2m0  050601 CEM     : 3rd V5R2 EPT driver.  */
 /* $B4= D98611.4   v5r2m0  061701 CEM     : 4th V5R2 EPT driver.  */
 /* $B5= D98611.5   v5r2m0  072201 CEM     : 5th V5R2 EPT driver.  */
 /* $B6= D98611.6   v5r2m0  081901 CEM     : 6th V5R2 EPT driver.  */
 /* $B7= D98611     v5r2m0  111801 CEM     : 9th V5R2 EPT driver.  */
 /* $B8= D98611.9   v5r2m0  121601 CEM     : 10th V5R2 EPT driver. */
 /* $C1= D99391.1   v5r3m0  080402 CEM     : 1st V5R3 EPT driver.  */
 /* $C2= D99391.2   v5r3m0  092902 CEM     : 2nd V5R3 EPT driver.  */
 /* $C3= D99391.3   v5r3m0  111702 CEM     : 3rd V5R3 EPT driver.  */
 /* $C4= D99391.4   v5r3m0  121502 CEM     : 4th V5R3 EPT driver.  */
 /* $C5= D99391.5   v5r3m0  011903 CEM     : 5th V5R3 EPT driver.  */
 /* $C6= D99391.6   v5r3m0  021603 CEM     : 6th V5R3 EPT driver.  */
 /* $C7= D99391     v5r3m0  031603 CEM     : 7th V5R3 EPT driver.  */
 /* $C8= D99391.7   v5r3m0  041303 CEM     : 8th V5R3 EPT driver.  */
 /* $C9= D99391.10  v5r3m0  072003 CEM     : 10th V5R3 EPT driver. */
 /* $CA= P9A39665   v5r3m0  091403 CEM     : 12th V5R3 EPT driver. */
 /* $D1= D99774.1   v5r4m0  040404 CEM     : 1st  V5R4 EPT driver. */
 /* $D2= D99774.2   v5r4m0  040606 CEM     : 2nd  V5R4 EPT driver. */
 /* $D3= D99774.3   v5r4m0  040801 CEM     : 3rd  V5R4 EPT driver. */
 /* $D4= D99774.4   v5r4m0  040919 CEM     : 4th  V5R4 EPT driver. */
 /* $D5= D99774.5   v5r4m0  041017 CEM     : 5th  V5R4 EPT driver. */
 /* $D6= D99774.6   v5r4m0  041114 CEM     : 6th  V5R4 EPT driver. */
 /* $D7= D99774.8   v5r4m0  050123 CEM     : 8th  V5R4 EPT driver. */
 /* $D8= D99774.9   v5r4m0  050220 CEM     : 9th  V5R4 EPT driver. */
 /* $D9= D99774.10  v5r4m0  050320 CEM     : 10th V5R4 EPT driver. */
 /* $DA= D99774.11  v5r4m0  050417 CEM     : 11th V5R4 EPT driver. */
 /* $DB= D99774     v5r4m0  050501 CEM     : 12th V5R4 EPT driver. */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

   #ifndef QLIEPTI_h
   #define QLIEPTI_h

   #define   LIBDIM           1
   /* Total number of entries in the Entry Point Table. */
   #define   WLISRHNMTBL_DIM  7280
   #define   WLI_QDMCLOSE     10
   #define   WLI_QDMCOPEN     11
   #define   WLI_QDMNODEV     62
   #define   WLI_QDMIFERR     68
   #define   WLI_QDMRLSDV     70
   #define   WLI_QWCSCVDR     76
   #define   WLI_QWCSCVTR     77
   #define   WLI_QWCSRTLR     78
   #define   WLI_QWCCCRVC     83
   #define   WLI_QWCCCHVC     84
   #define   WLI_QWCCRCRC     85
   #define   WLI_QDMROUTE     109
   #define   WLI_QMHRTNEX     113
   #define   WLI_QDBCLRPF     175
   #define   WLI_QMHSNSTQ     252
   #define   WLI_QDCXLATE     409
   #define   WLI_QTNROLLB     1101
   #define   WLI_QTNCMT       1102
   #define   WLI_QWSSETWS     1157
   #define   WLI_QWSQRYWS     1603
   #define   WLI_QUSCMDLN     1851
   #define   WLI_QDMGETST     1950
   #define   WLI_QCMDCHK      1987
   #define   WLI_QCMDEXC      1988
   #define   WLI_QOLELINK     2180
   #define   WLI_QOLDLINK     2181
   #define   WLI_QOLSEND      2185
   #define   WLI_QOLRECV      2186
   #define   WLI_QOLSETF      2187
   #define   WLI_QOLQLIND     2188
   #define   WLI_QOLTIMER     2210
   #define   WLI_QMHRTVRQ     2444
   #define   WLI_QSQROUTE     2642
   #define   WLI_QEXFPGM      2795
   #define   WLI_QEZMAIN      2895
   #define   WLI_QRCVDTAQ     2896
   #define   WLI_QSNDDTAQ     2897
   #define   WLI_QCLRDTAQ     2898
   #define   WLI_QCLSCAN      2925
   #define   WLI_QCACHECK     2926
   #define   WLI_QAESTUB      2984
   #define   WLI_QEZSAVIN     3208
   #define   WLI_QMHQRDQD     3209
   #define   WLI_QSRSAVO      3248
   #define   WLI_QAESTUB3     3768
   #define   WLI_QMHRTMSS     3796
   #define   WLI_QMHSNSTA     3797
   #define   WLI_QMHSNINQ     3798
   #define   WLI_QWCSRTVR     3799
   #define   WLI_QECCVTEC     3895
   #define   WLI_QECCVTEW     3896
   #define   WLI_QECEDT       3897
   #define   WLI_QHFOPNSF     3976
   #define   WLI_QHFRDSF      3977
   #define   WLI_QHFWRTSF     3978
   #define   WLI_QHFCHGFP     3979
   #define   WLI_QHFCLOSF     3980
   #define   WLI_QHFRTVAT     3981
   #define   WLI_QHFCHGAT     3982
   #define   WLI_QHFDLTSF     3983
   #define   WLI_QOKDSPDP     4022
   #define   WLI_QOCCTLOF     4028
   #define   WLI_QLYSETS      4041
   #define   WLI_QLYGETS      4042
   #define   WLI_QLYWRTBI     4043
   #define   WLI_QLYRDBI      4044
   #define   WLI_QD0STRTS     4095
   #define   WLI_QD0ENDTS     4096
   #define   WLI_QD0TRNDS     4098
   #define   WLI_QSXFTRPB     4099
   #define   WLI_QPDLOGER     4148
   #define   WLI_QLGRTVSS     4170
   #define   WLI_QLGVLID      4172
   #define   WLI_QEZSNDMG     4251
   #define   WLI_QPDWRKPB     4258
   #define   WLI_QMHRMVM      4260
   #define   WLI_QMHRMVPM     4261
   #define   WLI_QMHRCVM      4262
   #define   WLI_QMHRCVPM     4263
   #define   WLI_QMHMOVPM     4264
   #define   WLI_QMHRSNEM     4265
   #define   WLI_QMHSNDM      4267
   #define   WLI_QMHSNDPM     4268
   #define   WLI_QMHSNDRM     4269
   #define   WLI_QFVLSTNL     4331
   #define   WLI_QWVPDAGE     4416
   #define   WLI_QLZAREQ      4458
   #define   WLI_QLZARLS      4459
   #define   WLI_QLZARTV      4460
   #define   WLI_QLEDAGE      4462
   #define   WLI_QFVADDA      4539
   #define   WLI_QFVLSTA      4544
   #define   WLI_QFVRMVA      4545
   #define   WLI_QFVRTVCD     4546
   #define   WLI_QLICVTTP     4551
   #define   WLI_QLICOBJD     4552
   #define   WLI_QSQLOPEN     4665
   #define   WLI_QSQLCLSE     4666
   #define   WLI_QSQLCMIT     4667
   #define   WLI_QESRSRVA     4831
   #define   WLI_QMHCHGEM     4834
   #define   WLI_QMHLJOBL     4835
   #define   WLI_QMHLSTM      4836
   #define   WLI_QMHPRMM      4837
   #define   WLI_QMHRTVM      4838
   #define   WLI_QMHRMQAT     4839
   #define   WLI_QMHSNDBM     4840
   #define   WLI_QMHRMFAT     4841
   #define   WLI_QUHDSPH      4842
   #define   WLI_QUHPRTH      4843
   #define   WLI_QUIADDLE     4844
   #define   WLI_QUIADDLM     4845
   #define   WLI_QUIADDPA     4846
   #define   WLI_QUIADDPW     4847
   #define   WLI_QUICLOA      4848
   #define   WLI_QUIDLTL      4849
   #define   WLI_QUIDSPP      4850
   #define   WLI_QUIGETLE     4851
   #define   WLI_QUIGETLM     4852
   #define   WLI_QUIGETV      4853
   #define   WLI_QUIOPNDA     4854
   #define   WLI_QUIOPNPA     4855
   #define   WLI_QUIPRTP      4856
   #define   WLI_QUIRMVLE     4857
   #define   WLI_QUIRMVPA     4858
   #define   WLI_QUIRMVPW     4859
   #define   WLI_QUISETLA     4860
   #define   WLI_QUISETSC     4861
   #define   WLI_QUIUPDLE     4862
   #define   WLI_QSYCHGPR     4864
   #define   WLI_QSYCHGPW     4865
   #define   WLI_QSYCUSRA     4866
   #define   WLI_QSYCVTA      4867
   #define   WLI_QSYGETPH     4868
   #define   WLI_QSYLAUTU     4869
   #define   WLI_QSYLATLO     4870
   #define   WLI_QSYLOBJP     4871
   #define   WLI_QSYLOBJA     4872
   #define   WLI_QSYLUSRA     4873
   #define   WLI_QSYRLSPH     4874
   #define   WLI_QSYRUSRA     4875
   #define   WLI_QSYRUSRI     4876
   #define   WLI_QMHRDQM      4877
   #define   WLI_QJOSJRNE     4878
   #define   WLI_QTNRCMTI     4879
   #define   WLI_QTNADDCR     4880
   #define   WLI_QTNRMVCR     4881
   #define   WLI_QDMRTVFO     4882
   #define   WLI_QOKSCHD      4884
   #define   WLI_QUSRJOBI     4897
   #define   WLI_QUSRTVEI     4913
   #define   WLI_QUSRGPT      4914
   #define   WLI_QUSDRGPT     4915
   #define   WLI_QUSADDEP     4916
   #define   WLI_QUSRMVEP     4917
   #define   WLI_QUSCHGPA     4927
   #define   WLI_QUSLJOB      4928
   #define   WLI_QWCCCJOB     4930
   #define   WLI_QWCCHGTN     4931
   #define   WLI_QWCCVTDT     4932
   #define   WLI_QWCLASBS     4933
   #define   WLI_QWCLOBJL     4934
   #define   WLI_QWCLSCDE     4935
   #define   WLI_QWCRDTAA     4936
   #define   WLI_QWCRNETA     4937
   #define   WLI_QWCRSSTS     4938
   #define   WLI_QWCRSVAL     4939
   #define   WLI_QWDLSJBQ     4940
   #define   WLI_QWDRJOBD     4941
   #define   WLI_QWDRSBSD     4942
   #define   WLI_QWTSETP      4943
   #define   WLI_QLICHGLL     4945
   #define   WLI_QLIRLIBD     4946
   #define   WLI_QLIRNMO      4947
   #define   WLI_QUSLOBJ      4949
   #define   WLI_QUSROBJD     4950
   #define   WLI_QLGTRDTA     4980
   #define   WLI_QZDAGFS      5029
   #define   WLI_QUSRSPLA     5047
   #define   WLI_QUSLSPL      5048
   #define   WLI_QSPROUTQ     5049
   #define   WLI_QSPRJOBQ     5050
   #define   WLI_QSPOPNSP     5051
   #define   WLI_QSPCLOSP     5052
   #define   WLI_QSPCRTSP     5053
   #define   WLI_QSPGETSP     5054
   #define   WLI_QSPPUTSP     5055
   #define   WLI_QSPMOVSP     5056
   #define   WLI_QSPMOVJB     5057
   #define   WLI_QZCAADDC     5058
   #define   WLI_QZCARMVC     5059
   #define   WLI_QZCAREFC     5060
   #define   WLI_QZCAUPDC     5061
   #define   WLI_QLGCNVCS     5062
   #define   WLI_QSQCHKS      5063
   #define   WLI_QZMFACHG     5064
   #define   WLI_QZMFACRT     5065
   #define   WLI_QZMFADDC     5066
   #define   WLI_QZMFAIXT     5067
   #define   WLI_QZMFALOG     5068
   #define   WLI_QZMFAPG1     5069
   #define   WLI_QZMFARSV     5070
   #define   WLI_QZMFARTV     5071
   #define   WLI_QZMFASCR     5072
   #define   WLI_QZMFASQC     5073
   #define   WLI_QZMFCATR     5074
   #define   WLI_QZMFDLTC     5075
   #define   WLI_QZMFLSTC     5076
   #define   WLI_QSYCUSRS     5077
   #define   WLI_QALGENA      5078
   #define   WLI_QALRTVA      5079
   #define   WLI_QALSNDA      5080
   #define   WLI_QBNLPGMI     5081
   #define   WLI_QBNLSPGM     5082
   #define   WLI_QBNRSPGM     5083
   #define   WLI_QCAPCMD      5084
   #define   WLI_QCDRCMDI     5085
   #define   WLI_QCLRPGAS     5086
   #define   WLI_QCLRPGMI     5087
   #define   WLI_QCLSPGAS     5088
   #define   WLI_QDBRTVFD     5091
   #define   WLI_QUSLMBR      5092
   #define   WLI_QUSRMBRD     5093
   #define   WLI_QDCLCFGD     5094
   #define   WLI_QDCRCFGS     5095
   #define   WLI_QDCRCTLD     5096
   #define   WLI_QDCRDEVD     5097
   #define   WLI_QDCRLIND     5098
   #define   WLI_QDFRTVFD     5099
   #define   WLI_QEARMVBM     5100
   #define   WLI_QEZLSGNU     5101
   #define   WLI_QHFCLODR     5102
   #define   WLI_QHFCPYSF     5103
   #define   WLI_QHFCRTDR     5104
   #define   WLI_QHFCTLFS     5105
   #define   WLI_QHFFRCSF     5106
   #define   WLI_QHFGETSZ     5107
   #define   WLI_QHFLSTFS     5108
   #define   WLI_QHFLULSF     5109
   #define   WLI_QHFMOVSF     5320
   #define   WLI_QHFOPNDR     5321
   #define   WLI_QHFRDDR      5322
   #define   WLI_QHFRGFS      5323
   #define   WLI_QHFRNMDR     5324
   #define   WLI_QHFRNMSF     5325
   #define   WLI_QHFSETSZ     5326
   #define   WLI_QLGRTVLI     5327
   #define   WLI_QLGSCNMX     5328
   #define   WLI_QLGSORT      5329
   #define   WLI_QLGSRTIO     5330
   #define   WLI_QLPLPRDS     5331
   #define   WLI_QLZAADDK     5332
   #define   WLI_QLZADDLI     5333
   #define   WLI_QLZARTVK     5334
   #define   WLI_QMHSNDSM     5335
   #define   WLI_QNMCHGMN     5336
   #define   WLI_QNMDRGAP     5337
   #define   WLI_QNMDRGFN     5338
   #define   WLI_QBNLMODI     5339
   #define   WLI_QNMDRGTI     5340
   #define   WLI_QNMENDAP     5341
   #define   WLI_QNMRCVDT     5342
   #define   WLI_QNMRCVOC     5343
   #define   WLI_QNMREGAP     5344
   #define   WLI_QNMRGFN      5345
   #define   WLI_QNMRGTI      5346
   #define   WLI_QNMRRGF      5347
   #define   WLI_QNMRTVMN     5348
   #define   WLI_QNMSNDER     5349
   #define   WLI_QNMSNDRP     5350
   #define   WLI_QNMSNDRQ     5351
   #define   WLI_QNMSTRAP     5352
   #define   WLI_QOGCHGOE     5353
   #define   WLI_QOGRTVOE     5354
   #define   WLI_QOKDSPX4     5355
   #define   WLI_QPMLPFRD     5356
   #define   WLI_QPMWKCOL     5357
   #define   WLI_QPRCRTPG     5358
   #define   WLI_QPZCRTFX     5359
   #define   WLI_QPZGENNM     5360
   #define   WLI_QPZLOGFX     5361
   #define   WLI_QQQQRY       5362
   #define   WLI_QSPRWTRI     5363
   #define   WLI_QSQPRCED     5364
   #define   WLI_QSRLSAVF     5365
   #define   WLI_QSZCRTPD     5366
   #define   WLI_QSZCRTPL     5367
   #define   WLI_QSZDLTPD     5368
   #define   WLI_QSZDLTPL     5369
   #define   WLI_QSZPKGPO     5370
   #define   WLI_QSZRTVPR     5371
   #define   WLI_QSZSLTPR     5372
   #define   WLI_QTERTVPV     5373
   #define   WLI_QTNCHGCO     5374
   #define   WLI_QTNRBRQD     5375
   #define   WLI_QTVCLOVT     5376
   #define   WLI_QTVOPNVT     5377
   #define   WLI_QTVRDVT      5378
   #define   WLI_QTVSNDRQ     5379
   #define   WLI_QTVWRTVT     5380
   #define   WLI_QTWAIDSP     5381
   #define   WLI_QBNRMODI     5382
   #define   WLI_QTWCHKSP     5383
   #define   WLI_QUIPUTV      5384
   #define   WLI_QUIRTVLA     5385
   #define   WLI_QUSADDUI     5386
   #define   WLI_QUSCHGUS     5387
   #define   WLI_QUSCRTUI     5388
   #define   WLI_QUSCRTUQ     5389
   #define   WLI_QUSCRTUS     5390
   #define   WLI_QUSCUSAT     5391
   #define   WLI_QUSDLTUI     5392
   #define   WLI_QUSDLTUQ     5393
   #define   WLI_QUSDLTUS     5394
   #define   WLI_QUSPTRUS     5395
   #define   WLI_QUSRMVUI     5396
   #define   WLI_QUSRTVUI     5397
   #define   WLI_QUSRTVUS     5398
   #define   WLI_QUSRUIAT     5399
   #define   WLI_QUSRUSAT     5400
   #define   WLI_QVTRMSTG     5401
   #define   WLI_QDBLDBR      5402
   #define   WLI_QUSLFLD      5403
   #define   WLI_QUSLRCD      5404
   #define   WLI_QWPZTAFP     5405
   #define   WLI_QWTCTLTR     5406
   #define   WLI_QWTDMPFR     5407
   #define   WLI_QWTDMPLF     5408
   #define   WLI_QWTSETLF     5409
   #define   WLI_QWTSETTR     5410
   #define   WLI_QEZAST       5411
   #define   WLI_QEZBCHJB     5412
   #define   WLI_QEZMSG       5413
   #define   WLI_QEZOUTPT     5414
   #define   WLI_QLRCHGCM     5415
   #define   WLI_QLRRTVCE     5416
   #define   WLI_QLRSETCE     5417
   #define   WLI_QLZAGENK     5418
   #define   WLI_QMHCTLJL     5419
   #define   WLI_QMARQSOA     5420
   #define   WLI_QHFDRGFS     5421
   #define   WLI_QJORJIDI     5422
   #define   WLI_QTQCVRT      5423
   #define   WLI_QTQGCCN      5424
   #define   WLI_QTQGESP      5425
   #define   WLI_QTQGRDC      5426
   #define   WLI_QTQSCSP      5427
   #define   WLI_QPZRTVFX     5428
   #define   WLI_QZMFAQRY     5429
   #define   WLI_QHFDLTDR     5430
   #define   WLI_QWPZHPTR     5431
   #define   WLI_QSPCHGOQ     5432
   #define   WLI_QSPBSEPP     5433
   #define   WLI_QSPBOPNC     5434
   #define   WLI_QDCCCFGD     5435
   #define   WLI_QGSLRSC      5436
   #define   WLI_QGSCPYRS     5437
   #define   WLI_QLPCDINF     5438
   #define   WLI_QLPCDRST     5439
   #define   WLI_QLGRTVLC     5440
   #define   WLI_QRZCRTH      5441
   #define   WLI_QTQSMXC      5442
   #define   WLI_QTQGCTL      5443
   #define   WLI_QRZDLTE      5444
   #define   WLI_QZDCRFSO     5448
   #define   WLI_QZDWTFSO     5449
   #define   WLI_QZDRDFSO     5450
   #define   WLI_QZDASNID     5451
   #define   WLI_QZDRVKID     5452
   #define   WLI_QZDLSTID     5453
   #define   WLI_QZDRTVID     5454
   #define   WLI_QLPISLNG     5455
   #define   WLI_QWSRTVOI     5456
   #define   WLI_QRZRRSI      5457
   #define   WLI_QRZRTVR      5458
   #define   WLI_QRZSCHE      5459
   #define   WLI_QOKADDDP     5670
   #define   WLI_QOKCHGDP     5671
   #define   WLI_QOKRMVDP     5672
   #define   WLI_QUILNGTX     5673
   #define   WLI_QTALCTG      5674
   #define   WLI_QTAPIPE      5675
   #define   WLI_QTARDCAP     5676
   #define   WLI_QDBRTVSN     5677
   #define   WLI_QEZCHBKL     5678
   #define   WLI_QEZCHBKS     5679
   #define   WLI_QEZRTBKD     5680
   #define   WLI_QEZRTBKH     5681
   #define   WLI_QEZRTBKO     5682
   #define   WLI_QEZRTBKS     5683
   #define   WLI_QSYRAUTU     5684
   #define   WLI_QSZCHKTG     5685
   #define   WLI_QWDLSBSE     5686
   #define   WLI_QWTRTVPX     5687
   #define   WLI_QWTSETPX     5688
   #define   WLI_QGYRHRI      5689
   #define   WLI_QGYRHRL      5690
   #define   WLI_QWCRJBST     5691
   #define   WLI_QSYCHGID     5692
   #define   WLI_QSYRTVUA     5693
   #define   WLI_QSYCHGDS     5694
   #define   WLI_QTADMPDV     5695
   #define   WLI_QTARDINF     5696
   #define   WLI_QTQRCSC      5697
   #define   WLI_QLGRLNGI     5698
   #define   WLI_QTQSMXC2     5699
   #define   WLI_QSYRTVSE     5700
   #define   WLI_QWTCHGJB     5701
   #define   WLI_QIMGCVTI     5702
   #define   WLI_QSYADVLE     5703
   #define   WLI_QSYCHVLE     5704
   #define   WLI_QSYFDVLE     5705
   #define   WLI_QSYRMVLE     5706
   #define   WLI_QWCRIPLA     5707
   #define   WLI_QWCRTVCA     5708
   #define   WLI_QZLSADFS     5709
   #define   WLI_QZLSADPS     5710
   #define   WLI_QZLSCHFS     5711
   #define   WLI_QZLSCHPS     5712
   #define   WLI_QZLSCHSG     5713
   #define   WLI_QZLSCHSI     5714
   #define   WLI_QZLSCHSN     5715
   #define   WLI_QZLSENDS     5716
   #define   WLI_QZLSENSS     5717
   #define   WLI_QZLSLSTI     5718
   #define   WLI_QZLSRMS      5719
   #define   WLI_QZLSSTRS     5720
   #define   WLI_QZLSOLST     5721
   #define   WLI_QSYRUPWD     5722
   #define   WLI_QSYSUPWD     5723
   #define   WLI_QZNFRTVE     5724
   #define   WLI_QSYADDUC     5725
   #define   WLI_QSYADDVC     5726
   #define   WLI_QSYCHKVC     5727
   #define   WLI_QSYFNDCU     5728
   #define   WLI_QSYLSTUC     5729
   #define   WLI_QSYLSTVC     5730
   #define   WLI_QSYPARSC     5731
   #define   WLI_QSYRMVUC     5732
   #define   WLI_QSYRMVVC     5733
   #define   WLI_QWTDTJBS     5734
   #define   WLI_QLZAELKE     5735
   #define   WLI_QP0LFLOP     5736
   #define   WLI_QQQCSDBM     5737
   #define   WLI_QQQDSDBM     5738
   #define   WLI_QQQESDBM     5739
   #define   WLI_QQQSSDBM     6160
   #define   WLI_QSYCHFUI     6161
   #define   WLI_QSYCKUFU     6162
   #define   WLI_QSYDRGFN     6163
   #define   WLI_QSYRGFN      6164
   #define   WLI_QSYRTFUI     6165
   #define   WLI_QSYRTUFI     6166
   #define   WLI_QSYRTVFI     6167
   #define   WLI_QTACJMA      6168
   #define   WLI_QTARJMA      6169
   #define   WLI_QWTSJUID     6170
   #define   WLI_QYPSENDS     6171
   #define   WLI_QYPSSTRS     6172
   #define   WLI_QHSMMOVF     6173
   #define   WLI_QHSMMOVL     6174
   #define   WLI_QQQQSDBM     6175
   #define   WLI_QSRCRTMD     6176
   #define   WLI_QSRDLTMD     6177
   #define   WLI_QSRRTVMD     6178
   #define   WLI_QWCRCLSI     6179
   #define   WLI_QWDCSBSE     6180
   #define   WLI_QSZSPTPR     6181
   #define   WLI_QPZCPYSV     6182
   #define   WLI_QSYDRGAP     6183
   #define   WLI_QSYRGAP      6184
   #define   WLI_QTACTLDV     6185
   #define   WLI_QTOCLPPJ     6186
   #define   WLI_QLGRTVCD     6187
   #define   WLI_QYPSCSCA     6188
   #define   WLI_QYPSCYCC     6189
   #define   WLI_QYPSENDC     6190
   #define   WLI_QYPSRSCA     6191
   #define   WLI_QYPSSTRC     6192
   #define   WLI_QYPSSTRT     6193
   #define   WLI_QSYRMVPT     6194
   #define   WLI_QLGRTVCI     6195
   #define   WLI_QSYRESPA     6196
   #define   WLI_QTOCWRKP     6197
   #define   WLI_QDBRJBRL     6198
   #define   WLI_QDBRRCDL     6199
   #define   WLI_QPTRTVPO     6200
   #define   WLI_QUHRHLPT     6201
   #define   WLI_QYDOADDV     6202
   #define   WLI_QYDORTVO     6203
   #define   WLI_QYDOSGNO     6204
   #define   WLI_QYDOVFYO     6205
   #define   WLI_QCDRCMDD     6206
   #define   WLI_QLGRTVCT     6207
   #define   WLI_Q1PENDPM     6208
   #define   WLI_Q1PRPMS      6209
   #define   WLI_Q1PSTRPM     6210
   #define   WLI_QSZDLTAF     6211
   #define   WLI_QSZLSTRA     6212
   #define   WLI_QSZUPDRA     6213
   #define   WLI_QTOCCCNA     6214
   #define   WLI_QWTCTJBS     6215
   #define   WLI_QJOCHRVC     6216
   #define   WLI_QPQRAFPI     6217
   #define   WLI_QSYRTVSA     6218
   #define   WLI_QWVRCSTK     6219
   #define   WLI_QSPPUBPI     6220
   #define   WLI_QSQCHGDC     6221
   #define   WLI_QWCRJBLK     6222
   #define   WLI_QWCRLCKI     6223
   #define   WLI_QWCSVRST     6224
   #define   WLI_QWTRTVTA     6225
   #define   WLI_Q1PRTRN      6226
   #define   WLI_QGLDSSDD     6227
   #define   WLI_QP0LROR      6228
   #define   WLI_QTARDSTS     6229
   #define   WLI_QTHMCTLT     6580
   #define   WLI_QTHMRTVL     6581
   #define   WLI_QTRXRLRL     6582
   #define   WLI_QTRXRLSA     6583
   #define   WLI_QTRXRLSL     6584
   #define   WLI_QDBSTCRS     6585
   #define   WLI_QDBSTDS      6586
   #define   WLI_QDBSTLDS     6587
   #define   WLI_QDBSTLRS     6588
   #define   WLI_QDBSTLS      6589
   #define   WLI_QDBSTRS      6590
   #define   WLI_QDBSTUS      6591
   #define   WLI_QSPRILSP     6592
   #define   WLI_QLGRTVDC     6593
   #define   WLI_QYPEADDT     6594
   #define   WLI_QYPEENDT     6595
   #define   WLI_QYPELOGT     6596
   #define   WLI_QYPESTRT     6597
   #define   WLI_QDBCXRC      6598
   #define   WLI_QLPACAGR     6599
   #define   WLI_QPYRTJWA     6600
   #define   WLI_QYDOSGNB     6601
   #define   WLI_QYDOVFYB     6602
   #define   WLI_QTARCGYL     6603
   #define   WLI_QTARCTGI     6604
   #define   WLI_QWCRLRQI     6605
   #define   WLI_QP0LRRO      6606
   #define   WLI_QTARTLBL     6607
   #define   WLI_QP0LCHSG     6608
   #define   WLI_QP0LRTSG     6609
   #define   WLI_QTARCTGF     6610
   #define   WLI_QTASCTGF     6611
   #define   WLI_QFPADOLD     6612
   #define   WLI_QFPADOLS     6613
   #define   WLI_QFPADOLU     6614
   #define   WLI_QGYCHGSJ     6615
   #define   WLI_QGYCLST      6616
   #define   WLI_QGYFNDE      6617
   #define   WLI_QGYFNDF      6618
   #define   WLI_QGYFNDME     6619
   #define   WLI_QGYGTLE      6620
   #define   WLI_QGYOLJBL     6621
   #define   WLI_QGYOLJOB     6622
   #define   WLI_QGYOLMSG     6623
   #define   WLI_QGYOLOBJ     6624
   #define   WLI_QEDRTVCI     6625
   #define   WLI_QPDETPOL     6626
   #define   WLI_QGYRTVSJ     6627
   #define   WLI_QGYSETG      6628
   #define   WLI_QWCADJTM     6629
   #define   WLI_QWCOLTHD     6630
   #define   WLI_QWCRTVTM     6631
   #define   WLI_QWCRTVTZ     6632
   #define   WLI_QWVOLACT     6633
   #define   WLI_QWVOLAGP     6634
   #define   WLI_QYASPOL      6635
   #define   WLI_QEZOLBKL     6636
   #define   WLI_QGYOLAFP     6637
   #define   WLI_QGYOLAUS     6638
   #define   WLI_QGYOLSPL     6639
   #define   WLI_QGYRATLO     6640
   #define   WLI_QGYRPRTA     6641
   #define   WLI_QGYRPRTL     6642
   #define   WLI_QGYRTVC      6643
   #define   WLI_QPQAPME      6644
   #define   WLI_QPQCRTPM     6645
   #define   WLI_QPQDLTPM     6646
   #define   WLI_QPQOLPM      6647
   #define   WLI_QPQRPME      6648
   #define   WLI_QP0ZOLIP     6649
   #define   WLI_QP0ZOLSM     6790
   #define   WLI_QSPOLJBQ     6791
   #define   WLI_QSYOLUC      6792
   #define   WLI_QSYOLVLE     6793
   #define   WLI_QYKMEXPK     6794
   #define   WLI_QYKMIMPK     6795
   #define   WLI_QFPADPNU     6796
   #define   WLI_QFPADRNI     6797
   #define   WLI_QFPADRUA     6798
   #define   WLI_QSYCHKTU     6799
   #define   WLI_QSYCUPWD     6800
   #define   WLI_QSYGENFT     6801
   #define   WLI_QSYGENPT     6802
   #define   WLI_QSYGETPT     6803
   #define   WLI_QSYINVPT     6804
   #define   WLI_QSYSETPT     6805
   #define   WLI_QTNCLRLU     6806
   #define   WLI_QTNRTNLU     6807
   #define   WLI_QC3ADDSD     6808
   #define   WLI_QC3CALDS     6809
   #define   WLI_QC3CALHA     6810
   #define   WLI_QC3CALHM     6811
   #define   WLI_QC3CALMA     6812
   #define   WLI_QC3CALSG     6813
   #define   WLI_QC3CRTAX     6814
   #define   WLI_QC3CRTKX     6815
   #define   WLI_QC3DECDT     6816
   #define   WLI_QC3DESAX     6817
   #define   WLI_QC3DESKX     6818
   #define   WLI_QC3ENCDT     6819
   #define   WLI_QC3GENDK     6820
   #define   WLI_QC3GENDP     6821
   #define   WLI_QC3GENPK     6822
   #define   WLI_QC3GENRN     6823
   #define   WLI_QC3GENSK     6824
   #define   WLI_QC3TRNDT     6825
   #define   WLI_QC3VFYSG     6826
   #define   WLI_QWCSETTM     6827
   #define   WLI_QDBXRCTX     6828
   #define   WLI_QSRRSTO      6829
   #define   WLI_QVOIRCLD     6830
   #define   WLI_QVOIRCLG     6831
   #define   WLI_QWTRMVJL     6832
   #define   WLI_QFPRLNWS     6833
   #define   WLI_QFPRRNWS     6834
   #define   WLI_QITDRSTS     6835
   #define   WLI_QSCEWCH      6836
   #define   WLI_QSCSWCH      6837
   #define   WLI_QWCCJITP     6838
   #define   WLI_QWCJBITP     6839
   #define   WLI_QSCRXMLI     6840
   #define   WLI_QEDCHGIN     6841
   #define   WLI_QPDETSND     6842
   #define   WLI_QSYCVTVL     6843
   #define   WLI_QC3CLRMK     6844
   #define   WLI_QC3CRTKS     6845
   #define   WLI_QC3DLTKR     6846
   #define   WLI_QC3EXPKY     6847
   #define   WLI_QC3GENKR     6848
   #define   WLI_QC3IMPKY     6849
   #define   WLI_QC3LDMKP     6850
   #define   WLI_QC3RTVKA     6851
   #define   WLI_QC3SETMK     6852
   #define   WLI_QC3TRNKS     6853
   #define   WLI_QC3TSTMK     6854
   #define   WLI_QC3WRTKR     6855
   #define   WLI_QTOCC4IF     6856
   #define   WLI_QYKMGDKI     6857
   #define   WLI_QTOCCVTI     6858
   #define   WLI_QC3EXTPB     6859
   #define   WLI_QESCPTFO     7000
   #define EPT_CALL(_api) (*(((_api##_T **)_SYSEPT()) + WLI_##_api))

   #endif
