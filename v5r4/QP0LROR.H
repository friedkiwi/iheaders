/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2005                                */
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
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/QP0LROR                               */
/*                                                                   */
/* Descriptive Name       :  Retrieve Object References API include  */
/*                                                                   */
/* Description            :  This file contains the structures and   */
/*                           prototype for the QP0LROR API.          */
/*                                                                   */
/* Macros List            :  QP0LROR_RORO0100_FORMAT                 */
/*                           QP0LROR_RORO0200_FORMAT                 */
/*                                                                   */
/* Type Definition List   :  Qp0l_Ext_Ref_Types_Output_T             */
/*                           Qp0l_Job_Using_Object_T                 */
/*                           Qp0l_RORO0100_Output_T                  */
/*                           Qp0l_RORO0200_Output_T                  */
/*                           Qp0l_Session_Using_Object_T         @A3A*/
/*                           Qp0l_Sim_Ref_Types_Output_T             */
/*                                                                   */
/* Structure List         :  Qp0l_Ext_Ref_Types_Output               */
/*                           Qp0l_Job_Using_Object                   */
/*                           Qp0l_RORO0100_Output                    */
/*                           Qp0l_RORO0200_Output                    */
/*                           Qp0l_Session_Using_Object           @A3A*/
/*                           Qp0l_Sim_Ref_Types_Output               */
/*                                                                   */
/* Class List             :  None.                                   */
/*                                                                   */
/* Function Prototype List:  QP0LROR                                 */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* FLAG REASON     LEVEL   DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- -------    ------- ------ --------- -----------------------  */
/* $A0=D9884400      5D20  010419 ROCH    : New Include              */
/* $A1=P9A52232    v5r3m0f 040107 ROCH    : Add cplusplus ifdef to   */
/*                                          end of header            */
/* $A2=P9A55370    v5r4m0  040202 ROCH    : Add void to function call*/
/* $A3=D9988407    v5r4m0  040630 ROCH    : Add session information  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QP0LROR_h
#define _QP0LROR_h

#include <qlg.h>
#include <qusec.h>

#pragma datamodel(P128)


/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Sim_Ref_Types_Output                     */
/*                                                                   */
/* Structure Purpose:  This structure is used to package the         */
/*                     various reference types that may be           */
/*                     returned for an object.  This is the          */
/*                     simple version, containing individual         */
/*                     reference types that may or may not be        */
/*                     associated with other simple reference        */
/*                     types.                                        */
/*                                                                   */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_Sim_Ref_Types_Output
{
    unsigned int Read;           /* Read access                      */
    unsigned int Write;          /* Write access                     */
    unsigned int RdWr;           /* Read/Write access                */
    unsigned int Execute;        /* Execute access                   */
    unsigned int ShareRead;      /* Share with Readers               */
    unsigned int ShareWrite;     /* Share with Writers               */
    unsigned int ShareRdWr;      /* Share with Readers and Writers.  */
    unsigned int ShareNone;      /* Share with neither Readers
                                    nor Writers.                     */
    unsigned int Attributes;     /* Attribute lock.                  */
    unsigned int Save;           /* Save in progress.                */
    unsigned int SaveInt;        /* Object in use by a Save operation
                                    on other object(s).              */
    unsigned int Links;          /* Link changes lock.               */
    unsigned int CheckedOut;     /* Checked Out.                     */
    char CheckOutName[10];       /* Name of user that has object
                                    checked out.  Set to blanks (x'40)
                                    if CheckedOut is x'00'.          */
    char Reserved0[2];           /* Reserved.  Set to binary zeros.  */
} Qp0l_Sim_Ref_Types_Output_T;

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_RORO0100_Output                          */
/*                                                                   */
/* Structure Purpose:  This structure is used when the input         */
/*                     Format is QP0L_RORO0100_FORMAT.               */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_RORO0100_Output
{
    unsigned int    BytesReturned; /* Number of bytes returned in this
                                      output buffer.                 */
    unsigned int    BytesAvailable;/* Number of bytes that were
                                      available to be returned.      */
    unsigned int    SimTypesOffset;/* Offset from beginning of this
                                      structure to the beginning of
                                      the Types field containing the
                                      simple reference types.        */
    unsigned int    SimTypesLength;/* Length of the information
                                      provided in the ExtTypes
                                      structure.                     */
    unsigned int    Count;         /* Reference count.               */
    unsigned int    InUse;         /* In-use indicator.  This will be
                                      one of the following values:
                                      QP0L_OBJECT_NOT_IN_USE - the
                                        object is not in use and all
                                        of the reference type fields
                                        returned are 0.
                                      QP0L_OBJECT_IN_USE - the object
                                        is in use.  At least one of the
                                        reference type fields is
                                        greater than 0.  This condition
                                        may occur even if the Count
                                        field's value is 0.  See the
                                        QP0LROR documentation for more
                                        information.                 */
/*Qp0l_Sim_Ref_Types_Output_T SimTypes;*//* Simple reference types.  */
} Qp0l_RORO0100_Output_T;

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Ext_Ref_Types_Output                     */
/*                                                                   */
/* Structure Purpose:  This structure is used to package the         */
/*                     various reference types that may be           */
/*                     returned for an object.  This is the          */
/*                     extended version, containing associations     */
/*                     between some of the simple reference types    */
/*                     contained in the Qp0l_Sim_Ref_Types_Output    */
/*                     structure.                                    */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_Ext_Ref_Types_Output
{
    unsigned int ReadShareRead;  /* Read access, share with Readers. */
    unsigned int ReadShareWrite; /* Read access, share with Writers. */
    unsigned int ReadShareRdWr;  /* Read access, share with Readers and
                                    Writers.                         */
    unsigned int ReadShareNone;  /* Read access, share with neither
                                    Readers nor Writers.             */
    unsigned int WriteShareRead; /* Write access, share with Readers.*/
    unsigned int WriteShareWrite;/* Write access, share with Writers.*/
    unsigned int WriteShareRdWr; /* Write access, share with Readers
            and Writers.                     */

    unsigned int WriteShareNone; /* Write access, share with neither
                                    Readers nor Writers.             */

    unsigned int RdWrShareRead;  /* Read/Write access, share with
                                    Readers.                         */
    unsigned int RdWrShareWrite; /* Read/Write access, share with
                                    Writers.                         */
    unsigned int RdWrShareRdWr;  /* Read/Write access, share with
                                    Readers and Writers.             */
    unsigned int RdWrShareNone;  /* Read/Write access, share with
                                    neither Readers nor Writers.     */
    unsigned int ExecShareRead;  /* Execute access, share with
                                    Readers.                         */
    unsigned int ExecShareWrite; /* Execute access, share with
                                    Writers.                         */
    unsigned int ExecShareRdWr;  /* Execute access, share with Readers
            and Writers.                     */
    unsigned int ExecShareNone;  /* Execute access, share with neither
            Readers nor Writers.             */
    unsigned int ExRdShareRead;  /* Execute/Read access, share with
                                    Readers.                         */
    unsigned int ExRdShareWrite; /* Execute/Read access, share with
                                    Writers.                         */
    unsigned int ExRdShareRdWr;  /* Execute/Read access, share with
                                    Readers and Writers.             */
    unsigned int ExRdShareNone;  /* Execute/Read access, share with
                                    neither Readers nor Writers.     */
    unsigned int Attributes;     /* Attribute lock.                  */
    unsigned int Save;           /* Save in progress.                */
    unsigned int SaveInt;        /* Object in use by a Save operation
                                    on other object(s).              */
    unsigned int Links;          /* Link changes lock.               */
    unsigned int CurrentDir;     /* Current directory of job.        */
    unsigned int RootDir;        /* Root directory of job.           */
    unsigned int FSRef;          /* File Server reference.           */
    unsigned int FSWorkDir;      /* File Server working directory
                                    reference.                       */
    unsigned int CheckedOut;     /* Checked Out.                     */
    char CheckOutName[10];       /* Name of user that has object
                                    checked out.  Set to blanks (x'40)
                                    if CheckedOut is x'00'.          */
    char Reserved0[2];           /* Reserved.  Set to binary zeros.  */
} Qp0l_Ext_Ref_Types_Output_T;

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Session_Using_Object                     */
/*                                                                   */
/* Structure Purpose:  This structure is used to return a iSeries    */
/*                     NetServer session with a reference.           */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_Session_Using_Object
{
    unsigned long long SessionIdentifier;/* iSeries NetServer Session
                                     identifier                  @A3A*/
    unsigned int NextSessionDisplacement;/* Displacement from beginning
                                     of this structure to the beginning
                                     of the next
                                     Qp0l_Session_Using_Object array
                                     element.  If this is the last
                                     element in the array, then this
                                     offset is 0.                @A3A*/
    char UserName[10];            /* User name                   @A3A*/
    char WorkstationName[15];     /* Workstation name            @A3A*/
    char WorkstationAddress[45];  /* Workstation IP address      @A3A*/
    char Reserved0[14];           /* Reserved.  Set to binary zeros.
                                                                 @A3A*/
} Qp0l_Session_Using_Object_T;

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Job_Using_Object                         */
/*                                                                   */
/* Structure Purpose:  This structure is used to return a job with   */
/*                     the references that job is known to hold.     */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_Job_Using_Object
{
    unsigned int SimTypesDisplacement;/* Displacement from beginning of
                                     this structure to the beginning of
                                     the SimTypes structure.         */
    unsigned int SimTypesLength;      /* Length of the information
                                     provided in the SimTypes
                                     structure.                      */
    unsigned int ExtTypesDisplacement;/* Displacement from beginning of
                                     this structure to the beginning of
                                     the ExtTypes structure.         */
    unsigned int ExtTypesLength;      /* Length of the information
                                     provided in the ExtTypes
                                     structure.                      */
    unsigned int NextJobDisplacement;/* Displacement from beginning of
                                     this structure to the beginning of
                                     the next Qp0l_Job_Using_Object
                                     array element.  If this is the
                                     last element in the array, then
                                     this offset is 0.               */
    char Name[10];       /* Job name.                                */
    char User[10];       /* Job user name.                           */
    char Number[6];      /* Job number.                              */
    char Reserved0[2];   /* Reserved.  Set to binary zeros.          */
    unsigned int SessionListDisplacement;/* Displacement from the
                                     beginning of this structure to the
                                     beginning of the iSeries NetServer
				     session list structure      @A3A*/
    unsigned int SessionsReturned;   /* Number of iSeries NetServer
				     sessions in the sessions array
				                                 @A3A*/
  /*Qp0l_Sim_Ref_Types_Output_T SimTypes;*//* Simple reference types
                                              that this job is known
                                              to have on the object. */
  /*Qp0l_Ext_Ref_Types_Output_T ExtTypes;*//* Extended reference
                                              types that this job is
                                              known to have on the
					     object.                */
  /*Qp0l_Session_Using_Object_T SessionList[1];*//* Variable length
					      field that is an array
					      of iSeries NetServer
					      Sessions associated with
                                              the job currently
					      referencing the object.
					      This array's size is
				              determined by the
					      SessionsReturned field.
				                                 @A3A*/
} Qp0l_Job_Using_Object_T;

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_RORO0200_Output                          */
/*                                                                   */
/* Structure Purpose:  This structure is used when the input         */
/*                     Format is QP0L_RORO0200_FORMAT.               */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef struct Qp0l_RORO0200_Output
{
    unsigned int    BytesReturned; /* Number of bytes returned in this
                                      output buffer.                 */
    unsigned int    BytesAvailable;/* Number of bytes that were
                                      available to be returned.      */
    unsigned int    Count;         /* Reference count.               */
    unsigned int    InUse;         /* In-use indicator.  This will be
                                      one of the following values:
                                      QP0L_OBJECT_NOT_IN_USE - the
                                        object is not in use and all
                                        of the reference type fields
                                        returned are 0.
                                      QP0L_OBJECT_IN_USE - the object
                                        is in use.  At least one of the
                                        reference type fields is
                                        greater than 0.  This condition
                                        may occur even if the Count
                                        field's value is 0.  See the
                                        QP0LROR documentation for more
                                        information.                 */
    unsigned int    SimTypesOffset;/* Offset from beginning of this
                                      structure to the beginning of
                                      the SimTypes.                  */
    unsigned int    SimTypesLength;/* Length of the information
                                      provided in the SimTypes
                                      structure.                     */
    unsigned int    ExtTypesOffset;/* Offset from beginning of this
                                      structure to the beginning of
                                      the ExtTypes.                  */
    unsigned int    ExtTypesLength;/* Length of the information
                                      provided in the ExtTypes
                                      structure.                     */
    unsigned int    JobsOffset;    /* Offset from beginning of this
                                      structure to the beginning of
                                      the Jobs field array.          */
    unsigned int    JobsReturned;  /* Number of jobs in the
                                      Jobs array.                    */
    unsigned int    JobsAvailable; /* Total number of jobs
                                      that could be returned
                                      in the Jobs array              */
  /*Qp0l_Sim_Ref_Types_Output_T References;*//* Simple Reference Types*/
  /*Qp0l_Ext_Ref_Types_Output_T ExtTypes;*//* Extended Reference Types*/
  /*Qp0l_Job_Using_Object_T Jobs[1];*//* Variable length field that is
                                         an array of jobs currently
                                         referencing the object.
                                         This array's size is
                                         determined by the
                                         NumberOfJobs field.
                                         NOTE:  Elements themselves
                                         in this array are variable
                                         length, and may differ in
                                         length from each other.     */
} Qp0l_RORO0200_Output_T;

/* Macro constants for the InUse fields in the Qp0l_RORO0100_Output
   and Qp0l_RORO0200_Output formats.                                 */
#define QP0L_OBJECT_NOT_IN_USE 0
#define QP0L_OBJECT_IN_USE     1

/* Macro constants to use for the Format parameter of QP0LROR.       */
#define QP0LROR_RORO0100_FORMAT  "RORO0100"
#define QP0LROR_RORO0200_FORMAT  "RORO0200"

#ifdef __ILEC400__
#pragma linkage (QP0LROR,OS,nowiden)
#else
extern "OS"
#endif
void QP0LROR(void *  Receiver_Ptr,
unsigned int      Receiver_Length,
char *            Format_Ptr,
Qlg_Path_Name_T * Path_Ptr,
void *            Error_Code_P);                              /* @A2C*/

#pragma datamodel(pop)
#endif /* _QP0LROR_h */

#ifdef __cplusplus                                            /* @A1A*/
    #pragma info(restore)                                     /* @A1A*/
#else                                                         /* @A1A*/
    #pragma checkout(resume)                                  /* @A1A*/
#endif                                                        /* @A1A*/
