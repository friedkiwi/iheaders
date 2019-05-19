 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QP0LFLOP                                   */
 /*                                                                */
 /* Descriptive Name: Perform File System Operation.               */
 /*                                                                */
 /* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1997,2004          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Perform File System Operation API             */
 /*              performs miscellaneous operations on objects      */
 /*              in the integrated file system.  See each          */
 /*              individual operation below for details.           */
 /*                                                                */
 /* Header Files Included: sys/types.h                             */
 /*                                                                */
 /* Macros List: QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES               */
 /*              QP0L_WRITE_NETGROUP_FILE_ENTRIES                  */
 /*              QP0L_RETRIEVE_REMOTE_EXPORTS                  @A2A*/
 /*              QP0L_RETRIEVE_MOUNTED_FILE_SYSTEMS            @A2A*/
 /*                                                                */
 /*              QP0L_MEMBER_IS_A_HOST_NAME                        */
 /*              QP0L_MEMBER_IS_A_NETGROUP_NAME                    */
 /*              QP0L_MEMBER_IS_AN_IP_ADDRESS                      */
 /*              QP0L_MEMBER_IS_UNKNOWN                            */
 /*                                                                */
 /* Structure List: Qp0l_FLOP0100_Netgroup_Entry_T                 */
 /*                 Qp0l_FLOP0100_Member_Name_T                    */
 /*                 Qp0l_FLOP0100_Output_T                         */
 /*                 Qp0l_FLOP0200_Input_T                          */
 /*                 Qp0l_FLOP0300_Input_T                      @A2A*/
 /*                 Qp0l_FLOP0300_Output_T                     @A2A*/
 /*                 Qp0l_FLOP0300_Export_Entry_T               @A2A*/
 /*                 Qp0l_FLOP0300_Export_Item_T                @A2A*/
 /*                 Qp0l_FLOP0400_Input_T                      @A2A*/
 /*                 Qp0l_FLOP0400_Output_T                     @A2A*/
 /*                 Qp0l_FLOP0400_MFS_Entry_T                  @A2A*/
 /*                                                                */
 /* Function Prototype List: QP0LFLOP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9589200     4D30  971115 ROCH:     New Include           */
 /* $A1= D98212.05    5D10  000104 ROCH:     Datamodel changes     */
 /* $A2= D99097.03    5D30  021115 ROCH:     New file system Ops   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef QP0LFLOP_h
#define QP0LFLOP_h

#if (__OS400_TGTVRM__>=510)                                 /* @A1A*/
#pragma datamodel(P128)                                     /* @A1A*/
#endif                                                      /* @A1A*/

#include <sys/types.h>                                      /* @A2A*/

 /******************************************************************/
 /* The following values are valid File Ops:                       */
 /*                                                                */
 /* QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES - This will return all of  */
 /*      the netgroup definitions from the /etc/netgroup file.     */
 /*      Invoke the QP0LFLOP API as follows:                       */
 /*                                                                */
 /*      QP0LFLOP(QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES,             */
 /*               (char *)NULL,                                    */
 /*               0,                                               */
 /*               (char *)buffer, --> see Qp0l_FLOP0100_Output_T   */
 /*               buffer_length,                                   */
 /*               (void *)error_buffer);                           */
 /*                                                                */
 /* QP0L_WRITE_NETGROUP_FILE_ENTRIES - This will over-write the    */
 /*      the netgroup definitions in the /etc/netgroup file with   */
 /*      entries you provide.                                      */
 /*      Invoke the QP0LFLOP API as follows:                       */
 /*                                                                */
 /*      QP0LFLOP(QP0L_WRITE_NETGROUP_FILE_ENTRIES,                */
 /*               (char *)buffer, --> see Qp0l_FLOP0200_Input_T    */
 /*               buffer_length,                                   */
 /*               (char *)NULL,                                    */
 /*               0,                                               */
 /*               (void *)error_buffer);                           */
 /*                                                                */
 /* QP0L_RETRIEVE_REMOTE_EXPORTS - This will return all of the     *//* @A2A*/
 /*      remote Network File System (NFS) exports for a given      *//* @A2A*/
 /*      server. Remote Procedure Call (RPC) is used to obtain     *//* @A2A*/
 /*      this information from the requested server name.          *//* @A2A*/
 /*      Invoke the QP0LFLOP API as follows:                       *//* @A2A*/
 /*                                                                *//* @A2A*/
 /*      QP0L_FLOP(QP0L_RETRIEVE_REMOTE_EXPORTS,                   *//* @A2A*/
 /*                (char *)in_buf, --> see Qp0l_FLOP0300_Input_T   *//* @A2A*/
 /*                in_buf_length,                                  *//* @A2A*/
 /*                (char *)out_buf, --> see Qp0l_FLOP0300_Output_T *//* @A2A*/
 /*                out_buf_length,                                 *//* @A2A*/
 /*                (void *)error_buffer);                          *//* @A2A*/
 /*                                                                *//* @A2A*/
 /* QP0L_RETRIEVE_MOUNTED_FILE_SYSTEMS - This will return all (or  *//* @A2A*/
 /*      a subset) of the mounted file systems in the current      *//* @A2A*/
 /*      system's namespace, along with limited information about  *//* @A2A*/
 /*      each file system.                                         *//* @A2A*/
 /*      Invoke the QP0LFLOP API as follows:                       *//* @A2A*/
 /*                                                                *//* @A2A*/
 /*      QP0L_FLOP(QP0L_RETRIEVE_MOUNTED_FILE_SYSTEMS,             *//* @A2A*/
 /*                (char *)in_buf, --> see Qp0l_FLOP0400_Input_T   *//* @A2A*/
 /*                in_buf_length,                                  *//* @A2A*/
 /*                (char *)out_buf, --> see Qp0l_FLOP0400_Output_T *//* @A2A*/
 /*                out_buf_length,                                 *//* @A2A*/
 /*                (void *)error_buffer);                          *//* @A2A*/
 /******************************************************************/
#define QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES   1
#define QP0L_WRITE_NETGROUP_FILE_ENTRIES      2
#define QP0L_RETRIEVE_REMOTE_EXPORTS          3     /* @A2A*/
#define QP0L_RETRIEVE_MOUNTED_FILE_SYSTEMS    4     /* @A2A*/

 /******************************************************************/
 /*  The following are valid values for Member_Name_Status:        */
 /*                                                                */
 /*  QP0L_MEMBER_IS_A_HOST_NAME - The member name refers to a      */
 /*       host name.                                               */
 /*                                                                */
 /*  QP0L_MEMBER_IS_A_NETGROUP_NAME - The member name refers to a  */
 /*       netgroup name.                                           */
 /*                                                                */
 /*  QP0L_MEMBER_IS_AN_IP_ADDRESS - The member name refers to an   */
 /*       IP address of the form xxx.xxx.xxx.xxx  .                */
 /*                                                                */
 /******************************************************************/
#define QP0L_MEMBER_IS_A_HOST_NAME     1
#define QP0L_MEMBER_IS_A_NETGROUP_NAME 2
#define QP0L_MEMBER_IS_AN_IP_ADDRESS   3
#define QP0L_MEMBER_IS_UNKNOWN         4

typedef _Packed struct Qp0l_FLOP0100_Netgroup_Entry
{
    unsigned int              Length_of_Entry;
    unsigned int              Length_of_Netgroup_Name;
    unsigned int              Displacement_to_Member_Names;
    unsigned int              Number_of_Member_Names;
  /*char                      Netgroup_Name;*/ /* varying len data*/
} Qp0l_FLOP0100_Netgroup_Entry_T;

typedef _Packed struct Qp0l_FLOP0100_Member_Name
{
    unsigned int              Length_of_Member_Name_Entry;
    unsigned int              Member_Name_Status;
    unsigned int              Length_of_Member_Name;
  /*char                      Member_Name;*/ /* varying len data*/
} Qp0l_FLOP0100_Member_Name_T;

typedef _Packed struct Qp0l_FLOP0100_Output
{
    unsigned int              Bytes_Returned;
    unsigned int              Bytes_Available;
    unsigned int              Number_of_Entries;
  /*Qp0l_FLOP0100_Netgroup_Entry  Netgroup_Entry; */ /* vary len data */
  /*Qp0l_FLOP0100_Member_Name     Member_Name_Entry;              */
/*================================================================*/
/*   The format of what is included in the buffer that starts     */
/*   with the Netgroup_Entry is as follows:                       */
/*                                                                */
/*   The first byte of Netgroup_Entry is the first byte of the    */
/*   Qp0l_FLOP0100_Netgroup_Entry structure:                      */
/*             |                                                  */
/*             ---------------------|                             */
/*                                  V                             */
/*  unsigned int              Length_of_Entry;                    */
/*  unsigned int              Length_of_Netgroup_Name;            */
/*  unsigned int         ---- Displacement_to_Member_Names;       */
/*  unsigned int         |    Number_of_Member_Names;             */
/*  char                 |    Netgroup_Name; (varying length)     */
/*                       |                                        */
/*                       V                                        */
/*               Qp0l_FLOP0100_Member_Name structure:             */
/*                                                                */
/*  unsigned int         ---- Length_of_Member_Name_Entry;        */
/*  unsigned int         |    Member_Name_Status;                 */
/*  unsigned int         |    Length_of_Member_Name;              */
/*  char                 |    Member_Name;   (varying length)     */
/*                       |                                        */
/*                       V                                        */
/*               Qp0l_FLOP0100_Member_Name structure:             */
/*                                                                */
/*  unsigned int         ---- Length_of_Member_Name_Entry;        */
/*  unsigned int         |    Member_Name_Status;                 */
/*  unsigned int         |    Length_of_Member_Name;              */
/*  char                 |    Member_Name;   (varying length)     */
/*                       |                                        */
/*                       V                                        */
/*               This sequence of Qp0l_FLOP0100_Member_Name       */
/*               structures continues until there have been       */
/*               Number_of_Member_Names of them.                  */
/*                                                                */
/*================================================================*/
} Qp0l_FLOP0100_Output_T;

typedef _Packed struct Qp0l_FLOP0200_Input
{
    unsigned int              Number_of_Entries;
  /*Qp0l_FLOP0100_Netgroup_Entry  Netgroup_Entry; */ /* vary len data */
  /*Qp0l_FLOP0100_Member_Name     Member_Name_Entry;              */
/*================================================================*/
/*   The format of what is included in the buffer that starts     */
/*   with the Netgroup_Entry is the same as for the               */
/*   Qp0l_FLOP0100_Output_T described above.                      */
/*                                                                */
/*================================================================*/
} Qp0l_FLOP0200_Input_T;

/*================================================================*//* @A2A*/
/* Structure:   Qp0l_FLOP0300_Input                               *//* @A2A*/
/*                                                                *//* @A2A*/
/* Field Notes:                                                   *//* @A2A*/
/*     Preferred_Output_CCSID - The CCSID into which the output   *//* @A2A*/
/*                              will be converted.  If a          *//* @A2A*/
/*                              conversion failure occurs, the    *//* @A2A*/
/*                              output may be returned in another *//* @A2A*/
/*                              CCSID.  A value of 0 indicates    *//* @A2A*/
/*                              that the data should be returned  *//* @A2A*/
/*                              in the default job CCSID.         *//* @A2A*/
/*     Expected_CCSID - Assume the data comes from the NFS server *//* @A2A*/
/*                      in this CCSID. If 0, then calculate an    *//* @A2A*/
/*                      ASCII CCSID based on the default job      *//* @A2A*/
/*                      CCSID.                                    *//* @A2A*/
/*     Length_of_Server_Name - The length of the data passed in   *//* @A2A*/
/*                             the Server_Name paramter.          *//* @A2A*/
/*     CCSID_of_Server_Name - The value indicates the CCSID of    *//* @A2A*/
/*                            the Server_Name parameter.  A value *//* @A2A*/
/*                            of 0 indicates that the data is in  *//* @A2A*/
/*                            the default job CCSID.              *//* @A2A*/
/*     Server_Name - Remote NFS Server to obtain list of exported *//* @A2A*/
/*                   file systems from.                           *//* @A2A*/
/*================================================================*//* @A2A*/
typedef _Packed struct Qp0l_FLOP0300_Input			    /* @A2A*/
{								    /* @A2A*/
    unsigned int              Preferred_Output_CCSID;		    /* @A2A*/
    unsigned int              Expected_CCSID;                       /* @A2A*/
    unsigned int              Length_of_Server_Name;		    /* @A2A*/
    unsigned int              CCSID_of_Server_Name;                 /* @A2A*/
    char                      Server_Name[256];                     /* @A2A*/
} Qp0l_FLOP0300_Input_T;                                            /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* Structure:   Qp0l_FLOP0300_Export_Entry                        *//* @A2A*/
/*                                                                *//* @A2A*/
/* Field Notes:                                                   *//* @A2A*/
/*     Length_of_Entry - The length of the current export entry.  *//* @A2A*/
/*     Length_of_Export_Name - The length of the data returned in *//* @A2A*/
/*                             the Export_Name parameter.         *//* @A2A*/
/*     CCSID_of_Export_Name - The CCSID of the data returned in   *//* @A2A*/
/*                            the Export_Name parameter.          *//* @A2A*/
/*     Displacement_to_Export_Items - The offset from the         *//* @A2A*/
/*                                    beginning of the export     *//* @A2A*/
/*                                    entry to the export items.  *//* @A2A*/
/*     Number_of_Export_Items - The number of export items for    *//* @A2A*/
/*                              this export entry.                *//* @A2A*/
/*     Export_Name - Path name of exported file system.           *//* @A2A*/
/*================================================================*//* @A2A*/
typedef _Packed struct Qp0l_FLOP0300_Export_Entry                   /* @A2A*/
{                                                                   /* @A2A*/
    unsigned int              Length_of_Entry;	                    /* @A2A*/
    unsigned int              Length_of_Export_Name;	            /* @A2A*/
    unsigned int              CCSID_of_Export_Name;                 /* @A2A*/
    unsigned int              Displacement_to_Export_Items;         /* @A2A*/
    unsigned int              Number_of_Export_Items;               /* @A2A*/
  /*char                      Export_Name;*/ /* varying len data*/  /* @A2A*/
} Qp0l_FLOP0300_Export_Entry_T;                                     /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* Structure:   Qp0l_FLOP0300_Export_Item                         *//* @A2A*/
/*                                                                *//* @A2A*/
/* NOTE: Export Items are given by the remote server, but are     *//* @A2A*/
/*       implementation specific and not generally interpretable. *//* @A2A*/
/*       Typically, the items are properties of the export or     *//* @A2A*/
/*       names of hosts that are allowed to mount the export.     *//* @A2A*/
/*================================================================*//* @A2A*/
typedef _Packed struct Qp0l_FLOP0300_Export_Item                    /* @A2A*/
{                                                                   /* @A2A*/
    unsigned int              Length_of_Export_Item_Entry;          /* @A2A*/
    unsigned int              Length_of_Export_Item;                /* @A2A*/
    unsigned int              CCSID_of_Export_Item;                 /* @A2A*/
  /*char                      Export_Item;*/ /* varying len data*/  /* @A2A*/
} Qp0l_FLOP0300_Export_Item_T;                                      /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* Structure:   Qp0l_FLOP0300_Output                              *//* @A2A*/
/*                                                                *//* @A2A*/
/*================================================================*//* @A2A*/
typedef _Packed struct Qp0l_FLOP0300_Output                         /* @A2A*/
{                                                                   /* @A2A*/
    unsigned int              Bytes_Returned;                       /* @A2A*/
    unsigned int              Bytes_Available;                      /* @A2A*/
    unsigned int              Number_of_Entries;                    /* @A2A*/
  /*Qp0l_FLOP0300_Export_Entry  Export_Entry; */ /* vary len data *//* @A2A*/
/*================================================================*//* @A2A*/
/*   The format of what is included in the buffer that starts     *//* @A2A*/
/*   with the Export_Entry is as follows:                         *//* @A2A*/
/*                                                                *//* @A2A*/
/*   The first byte of Export_Entry is the first byte of the      *//* @A2A*/
/*   Qp0l_FLOP0300_Export_Entry structure:                        *//* @A2A*/
/*             |                                                  *//* @A2A*/
/*             ---------------------|                             *//* @A2A*/
/*                                  V                             *//* @A2A*/
/*  unsigned int              Length_of_Entry;                    *//* @A2A*/
/*  unsigned int              Length_of_Export_Name;              *//* @A2A*/
/*  unsigned int              CCSID_of_Export_Name;               *//* @A2A*/
/*  unsigned int         ---- Displacement_to_Export_Items;       *//* @A2A*/
/*  unsigned int         |    Number_of_Export_Items;             *//* @A2A*/
/*  char                 |    Export_Name; (varying length)       *//* @A2A*/
/*                       |                                        *//* @A2A*/
/*                       V                                        *//* @A2A*/
/*               Qp0l_FLOP0300_Export_Item structure:             *//* @A2A*/
/*                                                                *//* @A2A*/
/*  unsigned int         ---- Length_of_Export_Item_Entry;        *//* @A2A*/
/*  unsigned int         |    Length_of_Export_Item;              *//* @A2A*/
/*  unsigned int         |    CCSID_of_Export_Item;               *//* @A2A*/
/*  char                 |    Export_Item;   (varying length)     *//* @A2A*/
/*                       |                                        *//* @A2A*/
/*                       V                                        *//* @A2A*/
/*               This sequence of Qp0l_FLOP0300_Export_Item       *//* @A2A*/
/*               structures continues until there have been       *//* @A2A*/
/*               Number_of_Export_Items of them.                  *//* @A2A*/
/*                                                                *//* @A2A*/
/*================================================================*//* @A2A*/
} Qp0l_FLOP0300_Output_T;                                           /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* The following set of enumerated constants are the set of flags *//* @A2A*/
/* that may be assigned to the File_System_Type parameter of the  *//* @A2A*/
/* Qp0l_FLOP0400_MFS_Entry structure to indicate the file system  *//* @A2A*/
/* type.                                                          *//* @A2A*/
/*                                                                *//* @A2A*/
/* The flag meanings are as follows:                              *//* @A2A*/
/*  Qp0lFlop_MNT_OTHER -    Unknown file system type              *//* @A2A*/
/*  Qp0lFlop_MNT_ROOT -     Root(/) file system                   *//* @A2A*/
/*  Qp0lFlop_MNT_QOPENSYS - /QOpenSys file system                 *//* @A2A*/
/*  Qp0lFlop_MNT_QDLS -     /QDLS file system                     *//* @A2A*/
/*  Qp0lFlop_MNT_QSYS -     /QSYS.LIB file system                 *//* @A2A*/
/*  Qp0lFlop_MNT_NFS2 -     Version 2 Network File System         *//* @A2A*/
/*  Qp0lFlop_MNT_NFS3 -     Version 3 Network File System         *//* @A2A*/
/*  Qp0lFlop_MNT_UDFS -     User-defined file system              *//* @A2A*/
/*  Qp0lFlop_MNT_QOPT -     Optical file system                   *//* @A2A*/
/*  Qp0lFlop_MNT_RFS -      QFileSvr.400 file system              *//* @A2A*/
/*  Qp0lFlop_MNT_NETWARE -  Netware file system                   *//* @A2A*/
/*  Qp0lFlop_MNT_QNTC -     Windows NT Server file system         *//* @A2A*/
/*  Qp0lFlop_MNT_ASPQSYS -  Independent ASP QSYS.LIB file system  *//* @A2A*/
/*  Qp0lFlop_MNT_UDFSMGT -  UDFS management (/dev/QASPxx) file    *//* @A2A*/
/*                          system                                *//* @A2A*/
/*  Qp0lFlop_ALL_DYNAMIC -  All dynamically mountable file systems*//* @A2A*/
/*  Qp0lFlop_ALL_FS -       All mounted file systems              *//* @A2A*/
/*================================================================*//* @A2A*/
enum Qp0lFlop_fstype_flags {                                        /* @A2A*/
    Qp0lFlop_MNT_OTHER =    0x00000000,                             /* @A2A*/
    Qp0lFlop_MNT_ROOT =     0x00000001,                             /* @A2A*/
    Qp0lFlop_MNT_QOPENSYS = 0x00000002,                             /* @A2A*/
    Qp0lFlop_MNT_QDLS =     0x00000004,                             /* @A2A*/
    Qp0lFlop_MNT_QSYS =     0x00000008,                             /* @A2A*/
    Qp0lFlop_MNT_NFS2 =     0x00000010,                             /* @A2A*/
    Qp0lFlop_MNT_NFS3 =     0x00000020,                             /* @A2A*/
    Qp0lFlop_MNT_UDFS =     0x00000040,                             /* @A2A*/
    Qp0lFlop_MNT_QOPT =     0x00000080,                             /* @A2A*/
    Qp0lFlop_MNT_RFS =      0x00000100,                             /* @A2A*/
    Qp0lFlop_MNT_NETWARE =  0x00000200,                             /* @A2A*/
    Qp0lFlop_MNT_QNTC =     0x00000400,                             /* @A2A*/
    Qp0lFlop_MNT_ASPQSYS =  0x00000800,                             /* @A2A*/
    Qp0lFlop_MNT_UDFSMGT =  0x00001000,                             /* @A2A*/
    Qp0lFlop_ALL_DYNAMIC =  0x00000270,                             /* @A2A*/
    Qp0lFlop_ALL_FS =       0xffffffff                              /* @A2A*/
};                                                                  /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* The following set of enumerated constants are the set of flags *//* @A2A*/
/* that may be assigned to the Mount_Flags parameter of the       *//* @A2A*/
/* Qp0l_FLOP0400_MFS_Entry structure to indicate the file system  *//* @A2A*/
/* mount options.                                                 *//* @A2A*/
/*                                                                *//* @A2A*/
/* The flag meanings are as follows:                              *//* @A2A*/
/*  Qp0lFlop_FS_READ_ONLY -       File system is mounted as       *//* @A2A*/
/*                                read-only.                      *//* @A2A*/
/*  Qp0lFlop_FS_NO_MIXED_CASE -   File system is not case         *//* @A2A*/
/*                                sensitive.                      *//* @A2A*/
/*  Qp0lFlop_FS_RENAME_CASE -     If the file system is not case  *//* @A2A*/
/*                                sensitive, renaming of a file   *//* @A2A*/
/*                                to a different casing of the    *//* @A2A*/
/*                                same name will change the       *//* @A2A*/
/*                                casing of the name.             *//* @A2A*/
/*  Qp0lFlop_FS_NO_MOUNT_OVER -   File system cannot be mounted   *//* @A2A*/
/*                                over.                           *//* @A2A*/
/*  Qp0lFlop_FS_NO_EXPORTS -      File system cannot be exported  *//* @A2A*/
/*                                through NFS.                    *//* @A2A*/
/*  Qp0lFlop_FS_DYN_MNT_ENABLED - File system can be dynamically  *//* @A2A*/
/*                                unmounted.                      *//* @A2A*/
/*  Qp0lFlop_FS_SYNC_WRITES -     File system supports            *//* @A2A*/
/*                                synchronous writes.             *//* @A2A*/
/*  Qp0lFlop_FS_THREAD_SAFE -     File system is thread safe.     *//* @A2A*/
/*  Qp0lFlop_FS_DFT_STMF_TYPE1 -  Default file format for *STMF   *//* @A2A*/
/*                                objects is *TYPE1.              *//* @A2A*/
/*  Qp0lFlop_FS_NO_SUID -         File system supports the SUID   *//* @A2A*/
/*                                and SGID mode bits, but the     *//* @A2A*/
/*                                bits are not surfaced.          *//* @A2A*/
/*  Qp0lFlop_FS_HARD_MNT -        File system is an NFS hard      *//* @A2A*/
/*                                mount.                          *//* @A2A*/
/*================================================================*//* @A2A*/
enum Qp0lFlop_mnt_flags {                                           /* @A2A*/
    Qp0lFlop_FS_READ_ONLY =       0x0001,                           /* @A2A*/
    Qp0lFlop_FS_NO_MIXED_CASE =   0x0002,                           /* @A2A*/
    Qp0lFlop_FS_RENAME_CASE =     0x0004,                           /* @A2A*/
    Qp0lFlop_FS_NO_MOUNT_OVER =   0x0008,                           /* @A2A*/
    Qp0lFlop_FS_NO_EXPORTS =      0x0010,                           /* @A2A*/
    Qp0lFlop_FS_DYN_MNT_ENABLED = 0x0020,                           /* @A2A*/
    Qp0lFlop_FS_SYNC_WRITES =     0x0040,                           /* @A2A*/
    Qp0lFlop_FS_THREAD_SAFE =     0x0080,                           /* @A2A*/
    Qp0lFlop_FS_DFT_STMF_TYPE1 =  0x0100,                           /* @A2A*/
    Qp0lFlop_FS_NO_SUID =         0x0200,                           /* @A2A*/
    Qp0lFlop_FS_HARD_MNT =	  0x0400                            /* @A2A*/
};                                                                  /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* Structure:   Qp0l_FLOP0400_Input                               *//* @A2A*/
/*                                                                *//* @A2A*/
/* Field notes:                                                   *//* @A2A*/
/*                                                                *//* @A2A*/
/*    Preferred_Output_CCSID - The CCSID into which the output    *//* @A2A*/
/*              will be converted.  If a conversion failure       *//* @A2A*/
/*              occurs, the output may be returned in another     *//* @A2A*/
/*              CCSID.  A value of 0 means to return the data in  *//* @A2A*/
/*              the default job CCSID.                            *//* @A2A*/
/*    File_System_Type_Filter - Only file systems with a type     *//* @A2A*/
/*              allowed by this filter are returned (ORing of     *//* @A2A*/
/*              Qp0lFlop_fstype_flags).                           *//* @A2A*/
/*    Only_Topmost_Mounts - If 1, then only the accessible        *//* @A2A*/
/*              mounted file systems matching the other criteria  *//* @A2A*/
/*              are returned. Roots of file systems that have     *//* @A2A*/
/*              been mounted over are excluded.                   *//* @A2A*/
/*              If 0, all mounted file systems matching the other *//* @A2A*/
/*              criteria are returned.                            *//* @A2A*/
/*              All other values are invalid.                     *//* @A2A*/
/*                                                                *//* @A2A*/
/*================================================================*//* @A2A*/
typedef _Packed struct Qp0l_FLOP0400_Input                          /* @A2A*/
{                                                                   /* @A2A*/
    unsigned int              Preferred_Output_CCSID;               /* @A2A*/
    unsigned int              File_System_Type_Filter;              /* @A2A*/
    unsigned int              Only_Topmost_Mounts;                  /* @A2A*/
} Qp0l_FLOP0400_Input_T;                                            /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* Structure:   Qp0l_FLOP0400_MFS_Entry                           *//* @A2A*/
/*                                                                *//* @A2A*/
/* Field Notes:                                                   *//* @A2A*/
/*                                                                *//* @A2A*/
/*    File_System_Id - Unique identifier associated with each     *//* @A2A*/
/*                     mounted file system.                       *//* @A2A*/
/*    File_System_Type - One of the Qp0lFlop_MNT_xxx types        *//* @A2A*/
/*    Mount_Flags - Set of flags describing the mount; ORed       *//* @A2A*/
/*                  value of Qp0lFlop_mnt_flags                   *//* @A2A*/
/*    Unique_Mount_Id - For dynamic mount points this value       *//* @A2A*/
/*           gives indication of the order mounted. For example,  *//* @A2A*/
/*           multiple file systems may be mounted over the        *//* @A2A*/
/*           same directory. The topmost one (and therefore the   *//* @A2A*/
/*           one with the Is_Visible attribute set) will be the   *//* @A2A*/
/*           one with the largest Unique_Mount_Id.                *//* @A2A*/
/*    Time_of_Mount - Time when the file system was mounted. This *//* @A2A*/
/*                    is represented as the number of seconds     *//* @A2A*/
/*                    since the Epoch.                            *//* @A2A*/
/*    Is_Visible - If non-zero, then this mount has not been      *//* @A2A*/
/*                 mounted over and is accessible through the     *//* @A2A*/
/*                 parent file system.                            *//* @A2A*/
/*    MFS_Name - Source path of the mounted file system           *//* @A2A*/
/*    Mnt_Ovr_Dir_Name - Path that the file system is mounted     *//* @A2A*/
/*                       over                                     *//* @A2A*/
/*    Remote_Host_Name - If the file system is remote (e.g. NFS), *//* @A2A*/
/*                       then this string contains the name or    *//* @A2A*/
/*                       IP address of the serving machine.       *//* @A2A*/
/*    Mnt_Options - String of valid options used to mount the     *//* @A2A*/
/*                  file system                                   *//* @A2A*/
/*                                                                *//* @A2A*/
/*================================================================*//* @A2A*/
typedef _Packed struct Qp0l_FLOP0400_MFS_Entry                      /* @A2A*/
{                                                                   /* @A2A*/
    unsigned int              Length_of_Entry;                      /* @A2A*/
    dev64_t                   File_System_Id;                       /* @A2A*/
    unsigned int              File_System_Type;                     /* @A2A*/
    unsigned int              Mount_Flags;                          /* @A2A*/
    unsigned int              Unique_Mount_Id;                      /* @A2A*/
    time_t                    Time_of_Mount;                        /* @A2A*/
    unsigned int              Is_Visible;                           /* @A2A*/
    unsigned int              Disp_to_MFS_Name;                     /* @A2A*/
    unsigned int              Length_of_MFS_Name;                   /* @A2A*/
    unsigned int              CCSID_of_MFS_Name;                    /* @A2A*/
    unsigned int              Disp_to_Mnt_Ovr_Dir_Name;             /* @A2A*/
    unsigned int              Length_of_Mnt_Ovr_Dir_Name;           /* @A2A*/
    unsigned int              CCSID_of_Mnt_Ovr_Dir_Name;            /* @A2A*/
    unsigned int              Disp_to_Remote_Host_Name;             /* @A2A*/
    unsigned int              Length_of_Remote_Host_Name;           /* @A2A*/
    unsigned int              CCSID_of_Remote_Host_Name;            /* @A2A*/
    unsigned int              Disp_to_Mnt_Options;                  /* @A2A*/
    unsigned int              Length_of_Mnt_Options;                /* @A2A*/
    unsigned int              CCSID_of_Mnt_Options;                 /* @A2A*/
   /*=============================================================*//* @A2A*/
   /* Variable length data:                                       *//* @A2A*/
   /*                                                             *//* @A2A*/
   /*  char                      MFS_Name;                        *//* @A2A*/
   /*  char                      Mnt_Ovr_Dir_Name;                *//* @A2A*/
   /*  char                      Remote_Host_Name;                *//* @A2A*/
   /*  char                      Mnt_Options;                     *//* @A2A*/
   /*=============================================================*//* @A2A*/
} Qp0l_FLOP0400_MFS_Entry_T;                                        /* @A2A*/
                                                                    /* @A2A*/
/*================================================================*//* @A2A*/
/* Structure:   Qp0l_FLOP0400_Output                              *//* @A2A*/
/*                                                                *//* @A2A*/
/*================================================================*//* @A2A*/
typedef _Packed struct Qp0l_FLOP0400_Output                         /* @A2A*/
{                                                                   /* @A2A*/
    unsigned int              Bytes_Returned;                       /* @A2A*/
    unsigned int              Bytes_Available;                      /* @A2A*/
    unsigned int              Number_of_Entries;                    /* @A2A*/
   /*Qp0l_FLOP0400_MFS_Entry   MFS_Entry; */ /* varying len data */ /* @A2A*/
   /*=============================================================*//* @A2A*/
   /*   The format of what is included in the buffer that starts  *//* @A2A*/
   /*   with the MFS_Entry is as follows:                         *//* @A2A*/
   /*                                                             *//* @A2A*/
   /*   The first byte of MFS_Entry is the first byte of the      *//* @A2A*/
   /*   Qp0l_FLOP0400_MFS_Entry structure:                        *//* @A2A*/
   /*             |                                               *//* @A2A*/
   /*             ---------------------|                          *//* @A2A*/
   /*                                  V                          *//* @A2A*/
   /*  unsigned int         ---- Length_of_Entry;                 *//* @A2A*/
   /*  dev64_t              |    File_System_Id;                  *//* @A2A*/
   /*  unsigned int         |    File_System_Type;                *//* @A2A*/
   /*  unsigned int         |    Mount_Flags;                     *//* @A2A*/
   /*  unsinged int         |    Unique_Mount_Id;                 *//* @A2A*/
   /*  time_t               |    Time_of_Mount;                   *//* @A2A*/
   /*  unsigned int         |    Is_Visible;                      *//* @A2A*/
   /*  unsigned int         |    Disp_to_MFS_Name;                *//* @A2A*/
   /*  unsigned int         |    Length_of_MFS_Name;              *//* @A2A*/
   /*  unsigned int         |    CCSID_of_MFS_Name;               *//* @A2A*/
   /*  unsigned int         |    Disp_to_Mnt_Ovr_Dir_Name;        *//* @A2A*/
   /*  unsigned int         |    Length_of_Mnt_Ovr_Dir_Name;      *//* @A2A*/
   /*  unsigned int         |    CCSID_of_Mnt_Ovr_Dir_Name;       *//* @A2A*/
   /*  unsigned int         |    Disp_to_Remote_Host_Name;        *//* @A2A*/
   /*  unsigned int         |    Length_of_Remote_Host_Name;      *//* @A2A*/
   /*  unsigned int         |    CCSID_of_Remote_Host_Name;       *//* @A2A*/
   /*  unsigned int         |    Disp_to_Mnt_Options;             *//* @A2A*/
   /*  unsigned int         |    Length_of_Mnt_Options;           *//* @A2A*/
   /*  unsigned int         |    CCSID_of_Mnt_Options;            *//* @A2A*/
   /*  char                 |    MFS_Name; (varying length)       *//* @A2A*/
   /*                       |                                     *//* @A2A*/
   /*                       V                                     *//* @A2A*/
   /*          Next Qp0l_FLOP0400_MFS_Entry structure...          *//* @A2A*/
   /*                                                             *//* @A2A*/
   /*=============================================================*//* @A2A*/
} Qp0l_FLOP0400_Output_T;                                           /* @A2A*/

 /******************************************************************/
 /* Prototype for calling Security API QP0LFLOP                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QP0LFLOP,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QP0LFLOP (unsigned int,    /* File Op                        */
                char *,          /* Input Buf                      */
                unsigned int,    /* Input buf length               */
                char *,          /* Output buf                     */
                unsigned int,    /* Output buf length              */
                void *);         /* Error code                     */

#if (__OS400_TGTVRM__>=510)                                 /* @A1A*/
#pragma datamodel(pop)                                      /* @A1A*/
#endif                                                      /* @A1A*/
 #endif
