/*
 *                               PrintManager
 *
 *  ekiprod.h - Common product datatypes and macros
 *
 *
 *  PrintManager  (program no. 5688-179)
 *
 *  Version:  1.0
 *  Release:  1.0
 *  Level:    0.0
 *
 *  Restricted Materials of IBM
 *
 *  Copyright (C)
 *    International Business Machines Corporation   1990, 1999
 */

#if !defined (__EKIPROD)

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/*
 *
 * Common PrintManager constants
 *
 */

#define  MAX_NAME_LEN      31          /* max print option name len  */
#define  MAX_ERRVAL_LEN   255          /* max length of ERRMSG value */

#define  PRTMGR_BINARY    100L         /* option default/value type  */
#define  PRTMGR_STRL      101L         /* is binary or 0-terminated  */

#define  PRTMGR_MAX_DOCNAME 24         /* max document name length   */

/* This constant is used to implement the "green-inked" parameter on */
/* the first parameter of PrtMgrOpen.  For the OS/2 declaration, it  */
/* is defined to nothing (ie. OS/2 function does not have this parm).*/

#if defined (INCL_HABPARM)
#define  __PASSHAB          HAB hab,
#else
#define  __PASSHAB
#endif



/*
 *
 * Common PrintManager CPI data types
 *
 */


#if defined (INCL_PRTMGRDEFS)
   /* structure for Device Driver data */

 #if !defined (__DRIVDATA)
   typedef struct _DRIVDATA            /* driv - Driver data         */
      {
      LONG    cb;
      LONG    lVersion;
      CHAR    szDeviceName[32];
      CHAR    abGeneralData[1];
      } DRIVDATA;
   typedef DRIVDATA  *PDRIVDATA;
  #define __DRIVDATA
 #endif


   /* definition of array parameter on PrtMgrOpen                    */

   typedef PSZ    *PDEVOPENDATA;
   typedef PSZ    *PQMOPENDATA;


   /* array indices for array parameter on PrtMgrOpen                */

   #define ADDRESS          0
   #define DRIVER_NAME      1
   #define DRIVER_DATA      2
   #define DATA_TYPE        3
   #define COMMENT          4
   #define PROC_NAME        5
   #define PROC_PARAMS      6
   #define SPL_PARAMS       7
   #define NETWORK_PARAMS   8


   /* structure definition as an alternative to the array parameter  */

 #if !defined (__DEVOPENSTRUC)
   typedef struct _DEVOPENSTRUC           /* dop - device open struct*/
      {
      PSZ        pszLogAddress;
      PSZ        pszDriverName;
      PDRIVDATA  pdriv;
      PSZ        pszDataType;
      PSZ        pszComment;
      PSZ        pszQueueProcName;
      PSZ        pszQueueProcParams;
      PSZ        pszSpoolerParams;
      PSZ        pszNetworkParams;
      } DEVOPENSTRUC;
   typedef DEVOPENSTRUC  *PDEVOPENSTRUC;
  #define __DEVOPENSTRUC
 #endif

#endif


/*
 *
 * Error Information Interface declarations
 *
 */

#if defined (INCL_ERRDEFS)

 #if !defined (__ERRINFO)
   typedef struct _ERRINFO             /* erri- error information    */
      {
      USHORT    cbFixedErrInfo;
      ERRORID   idError;
      USHORT    cDetailLevel;
      USHORT    offaoffszMsg;
      USHORT    offBinaryData;
      } ERRINFO;
   typedef ERRINFO FAR *PERRINFO;
  #define __ERRINFO
 #endif

#endif


typedef struct _ERRMSG                 /* errm- extended error msg   */
   {
   ULONG     idIdentifier;             /* msg id                     */
   CHAR      szValue[MAX_ERRVAL_LEN+1];/* message or option value    */
   } ERRMSG;
typedef ERRMSG FAR *PERRMSG;



/*
 *
 * Self Defining field
 *
 */

typedef struct _SDF
   {
   ULONG  cbLength;                    /* length of entire structure */
   ULONG  flType;                      /* type of this SDF           */
   BYTE   bData[1];                    /* variable length data       */
   } SDF;
typedef SDF  FAR *PSDF;                /* a continuation handle type */


/* Constants used by PrintManager in Self Defining fields            */

#define  PRTMGR_GET_FIRST        200L
#define  PRTMGR_GETFIRST_LENGTH  20L

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#define __EKIPROD
#endif                                 /* __EKIPROD */
