/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1997, 2005                                */
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
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QWCATTR                                    */
/*                                                                */
/* Descriptive Name: Common job/thread API information            */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: Macros, prototypes for use by retrieve and        */
/*              change job/thread APIs.                           */
/*                                                                */
/* Header Files Included:    None                                 */
/*                                                                */
/* Macros List:              See below                            */
/*                                                                */
/* Structure List:           None                                 */
/*                                                                */
/* Function Prototype List:  None                                 */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D94779       4D20  970409 ROCHESTER: New part             */
/* $A1= D95604       4D30  971109 ROCHESTER: add several new keys */
/* $A2= D95600       4D30  971109 ROCHESTER: add Svrmode4sql key  */
/* $A3= D95711       4D30  971203 ROCHESTER: add Chrid ctl   key  */
/* $A4= D95604.7     4D30  971217 ROCHESTER: add several new keys */
/* $A5= d95869.1     4D40  980422 ROCHESTER: add Home directory   */
/* $A6= D95998       4D40  980624 ROCHESTER: Add server type      */
/* $A7= D97233       4D40  980902 ROCHESTER: Add new keys         */
/* $A8= D9753001     5D10  990815 ROCHESTER: Add new keys for     */
/*                                           larger CPU time and  */
/*                                           auxiliary I/Os       */
/* $A9= D98031       5D10  000303 ROCHESTER: Add new keys         */
/*                                           Add Common include - */
/*                                           JIDF0100             */
/* $AA= D98578       5D20  010303 ROCHESTER: Add new keys         */
/*                                           Add Common include - */
/*                                           JIDF0200             */
/* $AB= D9860307    v5r2m0 010625 ROCHESTER: Add new keys         */
/* $AC= D9914506    v5r3m0 021117 ROCHESTER: Add new keys         */
/* $AD= P9A26885    v5r3m0 030330 ROCHESTER: Add new keys         */
/* $AE= D99310      v5r3m0 030413 ROCHESTER: Add new keys         */
/* $AF= D99836      v5r4m0 040309 ROCHESTER: Add new keys         */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWCATTR_h
#define QWCATTR_h

/******************************************************************/
/* Constants for using Work Management API                        */
/******************************************************************/
/******************************************************************/
/* Key constants                                                  */
/*                                                                */
/*    Refer to API documentation to determine the keys supported  */
/*    by each API.                                                */
/*                                                                */
/*    Keys are listed in numerical order.                         */
/*                                                                */
/******************************************************************/
#define QWCA_KEY_ACTIVEJOBSTATUS           101
#define QWCA_KEY_ALLOWMULTIPLETHREADS      102             /* @A4A*/
#define QWCA_KEY_ACTIVEJOBSTATUSENDINGJOBS 103	           /* @A9A*/
#define QWCA_KEY_ASPGROUPINFORMATION       104             /* @ABA*/
#define QWCA_KEY_BRKMSGHDL                 201
#define QWCA_KEY_CANCELKEY                 301
#define QWCA_KEY_CCSID                     302
#define QWCA_KEY_COUNTRYID                 303
#define QWCA_KEY_PROCESSUNITUSED           304
#define QWCA_KEY_CURRENTUSERPROFILE        305
#define QWCA_KEY_COMPLETIONSTATUS          306
#define QWCA_KEY_CURRENTSYSTEMPOOLID       307
#define QWCA_KEY_CURRENTLIBRARY            310
#define QWCA_KEY_CHRIDCONTROL              311             /* @A3A*/
#define QWCA_KEY_PROCESSUNITUSEDBINARY8    312             /* @A8A*/
#define QWCA_KEY_PROCESSUNITUSEDBINARY8DB  313             /* @A9A*/
#define QWCA_KEY_PROCUNITPERCENTELAPSED    314             /* @A9A*/
#define QWCA_KEY_PROCUNITCOUNTELAPSED      315             /* @A9A*/
#define QWCA_KEY_PROCUNITPERCENTELAPSEDDB  316             /* @A9A*/
#define QWCA_KEY_PROCUNITCOUNTELAPSEDDB    317             /* @A9A*/
#define QWCA_KEY_CLIENTIPADDR              318             /* @A9A*/
#define QWCA_KEY_PROCESSUNITUSEDBINARY8THD 319             /* @AAA*/
#define QWCA_KEY_PROCESSUNITUSEDBINARY8DBTHD 320           /* @AAA*/
#define QWCA_KEY_PROCUNITPERCENTELAPSEDTHD 321             /* @AAA*/
#define QWCA_KEY_PROCUNITCOUNTELAPSEDTHD   322             /* @AAA*/
#define QWCA_KEY_PROCUNITPERCENTELAPSEDDBTHD 323           /* @AAA*/
#define QWCA_KEY_PROCUNITCOUNTELAPSEDDBTHD 324             /* @AAA*/
#define QWCA_KEY_CLIENTIPADDRESS           326             /* @ABA*/
#define QWCA_KEY_DATETIMEACTIVE            401
#define QWCA_KEY_DATETIMEENTEREDSYS        402
#define QWCA_KEY_DATETIMESCHEDULED         403
#define QWCA_KEY_DATETIMEONQUEUE           404
#define QWCA_KEY_DATEFORMAT                405
#define QWCA_KEY_DATESEP                   406
#define QWCA_KEY_DBCSCAPABLE               407
#define QWCA_KEY_DDMCONV                   408
#define QWCA_KEY_DEFAULTWAIT               409
#define QWCA_KEY_DEVICERECOVERYACTION      410
#define QWCA_KEY_DEVICENAME                411
#define QWCA_KEY_DEFAULTCCSID              412
#define QWCA_KEY_DECIMALFORMAT             413
#define QWCA_KEY_DISKIOCOUNTELAPSED        414             /* @A9A*/
#define QWCA_KEY_DISKIOCOUNTTOTAL          415             /* @A9A*/
#define QWCA_KEY_DISKIOCOUNTASYNC          416             /* @A9A*/
#define QWCA_KEY_DISKIOCOUNTSYNC           417             /* @A9A*/
#define QWCA_KEY_DATETIMEENDED             418             /* @A9A*/
#define QWCA_KEY_DISKIOCOUNTELAPSEDTHD     419             /* @AAA*/
#define QWCA_KEY_DISKIOCOUNTTOTALTHD       420             /* @AAA*/
#define QWCA_KEY_DISKIOCOUNTASYNCTHD       421             /* @AAA*/
#define QWCA_KEY_DISKIOCOUNTSYNCTHD        422             /* @AAA*/
#define QWCA_KEY_ENDSEVERITY               501
#define QWCA_KEY_ENDSTATUS                 502
#define QWCA_KEY_EXITKEY                   503
#define QWCA_KEY_EXTOBJATRTHREADDWAITON    504             /* @ABA*/
#define QWCA_KEY_FUNCTIONNAME              601
#define QWCA_KEY_FUNCTIONTYPE              602
#define QWCA_KEY_SIGNEDONJOB               701
#define QWCA_KEY_GROUPPROFILENAME          702
#define QWCA_KEY_GROUPPROFILENAMESUP       703
#define QWCA_KEY_HOMEDIRECTORY             801             /* @A5A*/
#define QWCA_KEY_INQUIRYMESSAGEREPLY       901
#define QWCA_KEY_INTERNALJOBID             902
#define QWCA_KEY_INITIALTHREAD             903             /* @A4A*/
#define QWCA_KEY_INTERACTIVERSPTIME        904             /* @A9A*/
#define QWCA_KEY_INTERACTIVETRANSCNT       905             /* @A9A*/
#define QWCA_KEY_INITIALLIBRARYLIST        910
#define QWCA_KEY_JOBACCOUNTINGCODE        1001
#define QWCA_KEY_JOBDATE                  1002
#define QWCA_KEY_JOBDESCNAME              1003
#define QWCA_KEY_JOBQUEUENAME             1004
#define QWCA_KEY_JOBQUEUEPRIORITY         1005
#define QWCA_KEY_JOBSWITCHES              1006
#define QWCA_KEY_JOBMSGQFULL              1007
#define QWCA_KEY_JOBMSGQMAXSIZE           1008
#define QWCA_KEY_JOBNAME                  1009
#define QWCA_KEY_JOBTYPE                  1010             /* @A4A*/
#define QWCA_KEY_JOBSUBTYPE               1011             /* @A4A*/
#define QWCA_KEY_JOBUSERIDENTITY          1012             /* @A4A*/
#define QWCA_KEY_JOBUSERIDENTITYSETTING   1013             /* @A4A*/
#define QWCA_KEY_JOBENDREASON             1014             /* @A9A*/
#define QWCA_KEY_JOBLOGPENDING            1015             /* @A9A*/
#define QWCA_KEY_JOBTYPEENHANCED          1016             /* @A9A*/
#define QWCA_KEY_JOBLOCALTIME             1017             /* @ACA*/
#define QWCA_KEY_JOBLOGOUTPUT             1018             /* @AFA*/
#define QWCA_KEY_LANGID                   1201
#define QWCA_KEY_LOGGINGLEVEL             1202
#define QWCA_KEY_LOGGINGCL                1203
#define QWCA_KEY_LOGGINGSEVERITY          1204
#define QWCA_KEY_LOGGINGTEXT              1205
#define QWCA_KEY_LIBTHREADWAITON          1206             /* @ABA*/
#define QWCA_KEY_LOCALE                   1210
#define QWCA_KEY_LOCALE_JOBATTRIBUTES     1211
#define QWCA_KEY_MODENAME                 1301
#define QWCA_KEY_MAXCPU                   1302
#define QWCA_KEY_MAXTEMPSTORAGE           1303
#define QWCA_KEY_MAXTHREADS               1304             /* @A4A*/
#define QWCA_KEY_MAXTEMPSTORAGEMEGABYTE   1305             /* @A7A*/
#define QWCA_KEY_MEMORYPOOLNAME           1306             /* @A9A*/
#define QWCA_KEY_MESSAGEREPLY             1307             /* @A9A*/
#define QWCA_KEY_NBROFAUXIOREQ            1401
#define QWCA_KEY_NBROFINTERTRANS          1402
#define QWCA_KEY_NBROFDBLOCKS             1403
#define QWCA_KEY_NBROFINTERLOCKS          1404
#define QWCA_KEY_NBROFNONDBLOCKS          1405
#define QWCA_KEY_NBROFAUXIOREQBINARY8     1406             /* @A8A*/
#define QWCA_KEY_NAMETHREADWAITON         1407             /* @ABA*/
#define QWCA_KEY_OUTPUTQUEUENAME          1501
#define QWCA_KEY_OUTPUTQUEUEPRIORITY      1502
#define QWCA_KEY_OBJTYPETHREADWAITON      1503             /* @ABA*/
#define QWCA_KEY_PRINTKEYFORMAT           1601
#define QWCA_KEY_PRINTTEXT                1602
#define QWCA_KEY_PRINTERDEVICENAME        1603
#define QWCA_KEY_PURGE                    1604
#define QWCA_KEY_PRODUCTRETURNCODE        1605
#define QWCA_KEY_PROGRAMRETURNCODE        1606
#define QWCA_KEY_PENDSIGNALSET            1607
#define QWCA_KEY_PROCESSIDNUMBER          1608             /* @A4A*/
#define QWCA_KEY_PAGEFAULTS               1609             /* @A9A*/
#define QWCA_KEY_PAGEFAULTSTHD            1610             /* @AAA*/
#define QWCA_KEY_PRODUCTLIBRARIES         1660
#define QWCA_KEY_RESPONSETIMETOTAL        1801
#define QWCA_KEY_RUNPRIORITY              1802
#define QWCA_KEY_ROUTINGDATA              1803
#define QWCA_KEY_RUNPRIORITYTHD           1804             /* @AAA*/
#define QWCA_KEY_RSCAFFINITYGROUP         1805             /* @AEA*/
#define QWCA_KEY_SORTSEQUENCETABLE        1901
#define QWCA_KEY_STATUSMESSAGEHANDLING    1902
#define QWCA_KEY_STATUSONJOBQ             1903
#define QWCA_KEY_SUBMITJOBNAME            1904
#define QWCA_KEY_SUBMITMSGQUEUENAME       1905
#define QWCA_KEY_SUBSYSTEMDESC            1906
#define QWCA_KEY_SYSTEMPOOLID             1907
#define QWCA_KEY_SPECIALENVIRONMENT       1908
#define QWCA_KEY_SIGNALBLOCKINGMASK       1909
#define QWCA_KEY_SIGNALSTATUS             1910
#define QWCA_KEY_SERVERTYPE               1911          /* @A6A*/
#define QWCA_KEY_SCHEDULEDATE             1920
#define QWCA_KEY_SCHEDULETIME             1921
#define QWCA_KEY_SVRMODE4SQL              1922          /* @A2A*/
#define QWCA_KEY_SYSMSGHDL                1923          /* @A2A*/
#define QWCA_KEY_SYSTEMLIBRARYLIST        1980
#define QWCA_KEY_SPOOLEDFILEACTION        1982          /* @ABA*/
#define QWCA_KEY_TIMESEP                  2001
#define QWCA_KEY_TIMESLICE                2002
#define QWCA_KEY_TIMESLICEENDPOOL         2003
#define QWCA_KEY_TEMPSTGUSED              2004
#define QWCA_KEY_TIMEDBLOCKWAITS          2005
#define QWCA_KEY_TIMEINTLOCKWAITS         2006
#define QWCA_KEY_TIMENONDBLOCKWAITS       2007
#define QWCA_KEY_THREADCOUNT              2008
#define QWCA_KEY_TEMPSTGUSEDMEGABYTE      2009             /* @A7A*/
#define QWCA_KEY_THREADSTATUS             2010             /* @A9A*/
#define QWCA_KEY_THREADTYPE               2011             /* @AAA*/
#define QWCA_KEY_THREADHOLDCOUNT          2012             /* @AAA*/
#define QWCA_KEY_THREADRSCAFFINITY        2013             /* @AEA*/
#define QWCA_KEY_TYPEENTITYTHREADWAITON   2015             /* @ABA*/
#define QWCA_KEY_TIMEZONECURRABBREVNN     2020             /* @ACA*/
#define QWCA_KEY_TIMEZONECURRFULLNAME     2021             /* @ACA*/
#define QWCA_KEY_TIMEZONECURRMSGID        2022             /* @ACA*/
#define QWCA_KEY_TIMEZONECURROFFSET       2023             /* @ACA*/
#define QWCA_KEY_TIMEZONEDESCNAME         2024             /* @ACA*/
#define QWCA_KEY_TIMEZONEMSGFILE          2025             /* @ACA*/
#define QWCA_KEY_TIMEZONEDSTIND           2026             /* @ADA*/
#define QWCA_KEY_UNITOFWORKID             2101
#define QWCA_KEY_USERRETURNCODE           2102
#define QWCA_KEY_USERLIBRARYLIST          2110
#define QWCA_KEY_CHGJOB_ALL300            2701
#define QWCA_KEY_RTVCUR_ALL200            2702
#define QWCA_KEY_RTVTHDLIB_ALL200         2703             /* @AAA*/
#define QWCA_KEY_DUPLICATOPTION           2711             /* @A1A*/

/******************************************************************/
/* Constants for allow multiple threads                           */
/******************************************************************/
#define QWCA_ALLOWMULTIPLETHREADS_YES    '1'
#define QWCA_ALLOWMULTIPLETHREADS_NO     '0'
/******************************************************************/
/* Constants for break message handling                           */
/******************************************************************/
#define QWCA_BRKMSGHDL_NORMAL      "*NORMAL   "
#define QWCA_BRKMSGHDL_NOTIFY      "*NOTIFY   "
#define QWCA_BRKMSGHDL_HOLD        "*HOLD     "
/******************************************************************/
/* Constants for Chrid Control handling                           */
/******************************************************************/
#define QWCA_CHRIDCONTROL_DEVD     "*DEVD     "            /* @A3A*/
#define QWCA_CHRIDCONTROL_JOBCCSID "*JOBCCSID "            /* @A3A*/
/******************************************************************/
/* Constants for date format                                      */
/******************************************************************/
#define QWCA_DATEFORMAT_YMD        "*YMD"
#define QWCA_DATEFORMAT_MDY        "*MDY"
#define QWCA_DATEFORMAT_DMY        "*DMY"
#define QWCA_DATEFORMAT_JUL        "*JUL"
#define QWCA_DATEFORMAT_SYS        "*SYS"
/******************************************************************/
/* Constants for DDM conversation handling                        */
/******************************************************************/
#define QWCA_DDMCONV_DROP          "*DROP     "
#define QWCA_DDMCONV_KEEP          "*KEEP     "
/******************************************************************/
/* Constants for Decimal format                                   */
/******************************************************************/
#define QWCA_DECIMAL_BLANKS        "*BLANK   "
#define QWCA_DECIMAL_SYSVAL        "*SYSVAL   "
#define QWCA_DECIMAL_I             "I         "
#define QWCA_DECIMAL_J             "J         "
/******************************************************************/
/* Constants for Device Recovery Action                           */
/******************************************************************/
#define QWCA_DEVRCYACN_MESSAGE       "*MSG         "
#define QWCA_DEVRCYACN_DSCMSG        "*DSCMSG      "
#define QWCA_DEVRCYACN_DSCENDREQ     "*DSCENDRQS   "
#define QWCA_DEVRCYACN_ENDJOBNOLIST  "*ENDJOBNOLIST"
#define QWCA_DEVRCYACN_ENDJOB        "*ENDJOB      "
/******************************************************************/
/* Constants for Message Logging Text                             */
/******************************************************************/
#define QWCA_LOGGINGTXT_MSG       "*MSG      "
#define QWCA_LOGGINGTXT_SECLVL    "*SECLVL   "
#define QWCA_LOGGINGTXT_NOLIST    "*NOLIST   "
/******************************************************************/
/* Constants for initial thread                                   */
/******************************************************************/
#define QWCA_INITIALTHREAD_YES    '1'
#define QWCA_INITIALTHREAD_NO     '0'
/******************************************************************/
/* Constants for Inquiry Message Reply                            */
/******************************************************************/
#define QWCA_INQMSGRPL_RQD          "*RQD      "
#define QWCA_INQMSGRPL_DFT          "*DFT      "
#define QWCA_INQMSGRPL_SYSRPYL      "*SYSRPYL  "
/******************************************************************/
/* Constants for Job message queue full action                    */
/******************************************************************/
#define QWCA_JOBMSGQF_NOWRAP     "*NOWRAP   "
#define QWCA_JOBMSGQF_WRAP       "*WRAP     "
#define QWCA_JOBMSGQF_PRTWRAP    "*PRTWRAP  "
/******************************************************************/
/* Constants for Job log output                                   */
/******************************************************************/
#define QWCA_LOGOUTPUT_JOBEND    "*JOBEND   "              /* @AFA*/
#define QWCA_LOGOUTPUT_JOBLOGSVR "*JOBLOGSVR"              /* @AFA*/
#define QWCA_LOGOUTPUT_PND       "*PND      "              /* @AFA*/
/******************************************************************/
/* Constants for Logging of CL Programs action                    */
/******************************************************************/
#define QWCA_LOGGINGCL_ALLOWED     "*YES      "
#define QWCA_LOGGINGCL_NOTALLOWED  "*NO       "
/******************************************************************/
/* Constants for Print Key Format                                 */
/******************************************************************/
#define QWCA_PRTKEYFMT_PRTALL    "*PRTALL   "
#define QWCA_PRTKEYFMT_PRTBDR    "*PRTBDR   "
#define QWCA_PRTKEYFMT_PRTHDR    "*PRTHDR   "
#define QWCA_PRTKEYFMT_NONE      "*NONE     "
/******************************************************************/
/* Constants for Purge                                            */
/******************************************************************/
#define QWCA_PURGE_YES           "*YES      "
#define QWCA_PURGE_NO            "*NO       "
/******************************************************************/
/* Constants for Spooled File Action                              */
/******************************************************************/
#define QWCA_SPLFACN_DETACH      "*DETACH   "               /*@ABA*/
#define QWCA_SPLFACN_KEEP        "*KEEP     "               /*@ABA*/
/******************************************************************/
/* Constants for Status message handling                          */
/******************************************************************/
#define QWCA_STSMSGHDL_NORMAL    "*NORMAL   "
#define QWCA_STSMSGHDL_NONE      "*NONE     "
/******************************************************************/
/* Constants for Schedule Date  handling                          */
/******************************************************************/
#define QWCA_SCHDATHDL_CUR       "*CURRENT  "
#define QWCA_SCHDATHDL_MONTHSTR  "*MONTHSTR "
#define QWCA_SCHDATHDL_MONTHEND  "*MONTHEND "
#define QWCA_SCHDATHDL_MON       "*MON      "
#define QWCA_SCHDATHDL_TUE       "*TUE      "
#define QWCA_SCHDATHDL_WED       "*WED      "
#define QWCA_SCHDATHDL_THR       "*THR      "
#define QWCA_SCHDATHDL_FRI       "*FRI      "
#define QWCA_SCHDATHDL_SAT       "*SAT      "
#define QWCA_SCHDATHDL_SUN       "*SUN      "
/******************************************************************/
/* Constants for thread resources affinity                        */
/******************************************************************/
#define QWCA_THDRSCAFN_NOGROUP     "*NOGROUP  "            /* @AEA*/
#define QWCA_THDRSCAFN_GROUP       "*GROUP    "            /* @AEA*/
#define QWCA_THDRSCAFN_NORMAL      "*NORMAL   "            /* @AEA*/
#define QWCA_THDRSCAFN_HIGH        "*HIGH     "            /* @AEA*/
/******************************************************************/
/* Constants for Time Slice End                                   */
/******************************************************************/
#define QWCA_TSEPOOL_BASE      "*BASE     "
#define QWCA_TSEPOOL_NONE      "*NONE     "

/******************************************************************/
/* Type Definition for the JIDF0100 format.                       */
/******************************************************************/
typedef _Packed struct Qwc_JIDF0100
{
    char Job_Name[10];
    char User_Name[10];
    char Job_Number[6];
    char Int_Job_ID[16];
    char Reserved[2];
    int  Thread_Indicator;
    char Thread_Id[8];
} Qwc_JIDF0100_t;

/******************************************************************/
/* Type Definition for the JIDF0200 format.                       */
/******************************************************************/
typedef _Packed struct Qwc_JIDF0200
{
    char Job_Name[10];
    char User_Name[10];
    char Job_Number[6];
    char Int_Job_ID[16];
    char Reserved[2];
    int unsigned Thread_Handle;
    char Thread_Id[8];
} Qwc_JIDF0200_t;


#endif
