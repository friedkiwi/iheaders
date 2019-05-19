 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/LEAWI                                      */
 /*                                                                */
 /* Descriptive Name: LE Conditions                                */
 /*                                                                */
 /* 5716-SS1, 5763-SS1, 5769-SS1, 5722-SS1                         */
 /* (C) Copyright IBM Corp. 1993,2001                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function List: None.                                           */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON	      LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2           2D30  930526 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef __lemsg_h
#define __lemsg_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/* Numeric values for ILE conditions */
#define CEEFAIL      0x9901
#define CEE_TIS      0x0199

#define CEE0000      0x0000
#define CEE0102      0x0102
#define CEE0199      CEE_TIS
#define CEE0201      0x0201
#define CEE0251      0x0251
#define CEE0252      0x0252
#define CEE0253      0x0253
#define CEE0254      0x0254
#define CEE0256      0x0256
#define CEE0257      0x0257
#define CEE0258      0x0258
#define CEE0260      0x0260
#define CEE0262      0x0262
#define CEE0265      0x0265
#define CEE0401      0x0401
#define CEE0402      0x0402
#define CEE0403      0x0403
#define CEE0451      0x0451
#define CEE0452      0x0452
#define CEE0454      0x0454
#define CEE0455      0x0455
#define CEE0458      0x0458
#define CEE0501      0x0501
#define CEE0502      0x0502
#define CEE0503      0x0503
#define CEE0504      0x0504
#define CEE0505      0x0505
#define CEE0802      0x0802
#define CEE0803      0x0803
#define CEE0804      0x0804
#define CEE0805      0x0805
#define CEE0806      0x0806
#define CEE0807      0x0807
#define CEE0808      0x0808
#define CEE0809      0x0809
#define CEE0810      0x0810
#define CEE0812      0x0812
#define CEE0813      0x0813
#define CEE0814      0x0814
#define CEE0815      0x0815
#define CEE0816      0x0816
#define CEE1214      0x1214
#define CEE1215      0x1215
#define CEE2002      0x2002
#define CEE2003      0x2003
#define CEE2004      0x2004
#define CEE2005      0x2005
#define CEE2006      0x2006
#define CEE2008      0x2008
#define CEE2009      0x2009
#define CEE2010      0x2010
#define CEE2011      0x2011
#define CEE2012      0x2012
#define CEE2013      0x2013
#define CEE2014      0x2014
#define CEE2015      0x2015
#define CEE2016      0x2016
#define CEE2017      0x2017
#define CEE2018      0x2018
#define CEE2019      0x2019
#define CEE2020      0x2020
#define CEE2022      0x2022
#define CEE2023      0x2023
#define CEE2024      0x2024
#define CEE2025      0x2025
#define CEE2026      0x2026
#define CEE2027      0x2027
#define CEE2101      0x2101
#define CEE2102      0x2102
#define CEE2103      0x2103
#define CEE2107      0x2107
#define CEE2117      0x2117
#define CEE2118      0x2118
#define CEE2502      0x2502
#define CEE2503      0x2503
#define CEE2505      0x2505
#define CEE2506      0x2506
#define CEE2507      0x2507
#define CEE2508      0x2508
#define CEE2509      0x2509
#define CEE2510      0x2510
#define CEE2511      0x2511
#define CEE2512      0x2512
#define CEE2513      0x2513
#define CEE2514      0x2514
#define CEE2515      0x2515
#define CEE2516      0x2516
#define CEE2517      0x2517
#define CEE2518      0x2518
#define CEE2519      0x2519
#define CEE2520      0x2520
#define CEE2521      0x2521
#define CEE2522      0x2522
#define CEE2523      0x2523
#define CEE2524      0x2524
#define CEE2525      0x2525
#define CEE2526      0x2526
#define CEE2527      0x2527
#define CEE2531      0x2531
#define CEE2533      0x2533
#define CEE2537      0x2537
#define CEE2539      0x2539
#define CEE3005      0x3005
#define CEE3006      0x3006
#define CEE3101      0x3101
#define CEE3102      0x3102
#define CEE3103      0x3103
#define CEE3104      0x3104
#define CEE3105      0x3105
#define CEE3106      0x3106
#define CEE3107      0x3107
#define CEE3108      0x3108
#define CEE3109      0x3109
#define CEE3110      0x3110
#define CEE3111      0x3111
#define CEE3112      0x3112
#define CEE3201      0x3201
#define CEE3466      0x3466
#define CEE3467      0x3467
#define CEE3468      0x3468
#define CEE3470      0x3470
#define CEE3471      0x3471
#define CEE9901      CEEFAIL
#define CEE9902      0x9902
#define CEE9903      0x9903
#define CEE9904      0x9904


/* OS/400 message identifiers for ILE conditions */
#define CEEFAILN     "CEE9901"
#define CEE_TISN     "CEE0199"

#define CEE0000N     "CEE0000"
#define CEE0102N     "CEE0102"
#define CEE0199N     CEE_TISN
#define CEE0201N     "CEE0201"
#define CEE0251N     "CEE0251"
#define CEE0252N     "CEE0252"
#define CEE0253N     "CEE0253"
#define CEE0254N     "CEE0254"
#define CEE0256N     "CEE0256"
#define CEE0257N     "CEE0257"
#define CEE0258N     "CEE0258"
#define CEE0260N     "CEE0260"
#define CEE0262N     "CEE0262"
#define CEE0265N     "CEE0265"
#define CEE0401N     "CEE0401"
#define CEE0402N     "CEE0402"
#define CEE0403N     "CEE0403"
#define CEE0451N     "CEE0451"
#define CEE0452N     "CEE0452"
#define CEE0454N     "CEE0454"
#define CEE0455N     "CEE0455"
#define CEE0458N     "CEE0458"
#define CEE0501N     "CEE0501"
#define CEE0502N     "CEE0502"
#define CEE0503N     "CEE0503"
#define CEE0504N     "CEE0504"
#define CEE0505N     "CEE0505"
#define CEE0802N     "CEE0802"
#define CEE0803N     "CEE0803"
#define CEE0804N     "CEE0804"
#define CEE0805N     "CEE0805"
#define CEE0806N     "CEE0806"
#define CEE0807N     "CEE0807"
#define CEE0808N     "CEE0808"
#define CEE0809N     "CEE0809"
#define CEE0810N     "CEE0810"
#define CEE0812N     "CEE0812"
#define CEE0813N     "CEE0813"
#define CEE0814N     "CEE0814"
#define CEE0815N     "CEE0815"
#define CEE0816N     "CEE0816"
#define CEE1214N     "CEE1214"
#define CEE1215N     "CEE1215"
#define CEE2002N     "CEE2002"
#define CEE2003N     "CEE2003"
#define CEE2004N     "CEE2004"
#define CEE2005N     "CEE2005"
#define CEE2006N     "CEE2006"
#define CEE2008N     "CEE2008"
#define CEE2009N     "CEE2009"
#define CEE2010N     "CEE2010"
#define CEE2011N     "CEE2011"
#define CEE2012N     "CEE2012"
#define CEE2013N     "CEE2013"
#define CEE2014N     "CEE2014"
#define CEE2015N     "CEE2015"
#define CEE2016N     "CEE2016"
#define CEE2017N     "CEE2017"
#define CEE2018N     "CEE2018"
#define CEE2019N     "CEE2019"
#define CEE2020N     "CEE2020"
#define CEE2022N     "CEE2022"
#define CEE2023N     "CEE2023"
#define CEE2024N     "CEE2024"
#define CEE2025N     "CEE2025"
#define CEE2026N     "CEE2026"
#define CEE2027N     "CEE2027"
#define CEE2101N     "CEE2101"
#define CEE2102N     "CEE2102"
#define CEE2103N     "CEE2103"
#define CEE2107N     "CEE2107"
#define CEE2117N     "CEE2117"
#define CEE2118N     "CEE2118"
#define CEE2502N     "CEE2502"
#define CEE2503N     "CEE2503"
#define CEE2505N     "CEE2505"
#define CEE2506N     "CEE2506"
#define CEE2507N     "CEE2507"
#define CEE2508N     "CEE2508"
#define CEE2509N     "CEE2509"
#define CEE2510N     "CEE2510"
#define CEE2511N     "CEE2511"
#define CEE2512N     "CEE2512"
#define CEE2513N     "CEE2513"
#define CEE2514N     "CEE2514"
#define CEE2515N     "CEE2515"
#define CEE2516N     "CEE2516"
#define CEE2517N     "CEE2517"
#define CEE2518N     "CEE2518"
#define CEE2519N     "CEE2519"
#define CEE2520N     "CEE2520"
#define CEE2521N     "CEE2521"
#define CEE2522N     "CEE2522"
#define CEE2523N     "CEE2523"
#define CEE2524N     "CEE2524"
#define CEE2525N     "CEE2525"
#define CEE2526N     "CEE2526"
#define CEE2527N     "CEE2527"
#define CEE2531N     "CEE2531"
#define CEE2533N     "CEE2533"
#define CEE2537N     "CEE2537"
#define CEE2539N     "CEE2539"
#define CEE3005N     "CEE3005"
#define CEE3006N     "CEE3006"
#define CEE3101N     "CEE3101"
#define CEE3102N     "CEE3102"
#define CEE3103N     "CEE3103"
#define CEE3104N     "CEE3104"
#define CEE3105N     "CEE3105"
#define CEE3106N     "CEE3106"
#define CEE3107N     "CEE3107"
#define CEE3108N     "CEE3108"
#define CEE3109N     "CEE3109"
#define CEE3110N     "CEE3110"
#define CEE3111N     "CEE3111"
#define CEE3112N     "CEE3112"
#define CEE3201N     "CEE3201"
#define CEE3466N     "CEE3466"
#define CEE3467N     "CEE3467"
#define CEE3468N     "CEE3468"
#define CEE3470N     "CEE3470"
#define CEE3471N     "CEE3471"
#define CEE9901N     CEEFAILN
#define CEE9902N     "CEE9902"
#define CEE9903N     "CEE9903"
#define CEE9904N     "CEE9904"

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __lemsg_h */
