#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

#ifndef __qp0ztrml_h
  #define __qp0ztrml_h 1

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name:        qp0ztrml.h                                */
/*                                                                    */
/* Descriptive Name:        Generic Terminal Header File              */
/*                                                                    */
/* 5769-SS1, 5722-SS1                                                 */
/* (C) Copyright IBM Corp. 1997,2003                                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* Description:             Generic Terminal support                  */
/*                                                                    */
/* Header Files Included:   spawn.h                                   */
/*                          sys/types.h                               */
/*                                                                    */
/* Macros List:             QP0Z_TERMINAL_BOTTOM                  @B2A*/
/*                          QP0Z_TERMINAL_CLCMDLINE               @B2A*/
/*                          QP0Z_TERMINAL_CLEAR                   @B2A*/
/*                          QP0Z_TERMINAL_ENDED                       */
/*                          QP0Z_TERMINAL_EXIT                    @B2A*/
/*                          QP0Z_TERMINAL_F12                         */
/*                          QP0Z_TERMINAL_F3                          */
/*                          QP0Z_TERMINAL_HIDDEN                  @B2A*/
/*                          QP0Z_TERMINAL_INPUT_MODE              @B2A*/
/*                          QP0Z_TERMINAL_LEFT                    @B2A*/
/*                          QP0Z_TERMINAL_NORMAL                  @B2A*/
/*                          QP0Z_TERMINAL_PAGEDOWN                @B2A*/
/*                          QP0Z_TERMINAL_PAGEUP                  @B2A*/
/*                          QP0Z_TERMINAL_PRINT                   @B2A*/
/*                          QP0Z_TERMINAL_REFRESH                 @B2A*/
/*                          QP0Z_TERMINAL_RETRIEVE                @B2A*/
/*                          QP0Z_TERMINAL_RETURN                  @B2A*/
/*                          QP0Z_TERMINAL_RIGHT                   @B2A*/
/*                          QP0Z_TERMINAL_TOP                     @B2A*/
/*                          QP0Z_TERMINAL_TRUNCTATE               @B2A*/
/*                          QP0Z_TERMINAL_WRAP                    @B2A*/
/*                          QP0Z_TERMINAL_WRAP_MODE               @B2A*/
/*                                                                    */
/* Structure List:          Qp0z_Terminal_T                           */
/*                          Qp0z_Terminal_Attr_T                      */
/*                                                                    */
/* Function Prototype List: Qp0zControlTerminal                   @B2A*/
/*                          Qp0zEndTerminal                           */
/*                          Qp0zGetTerminalPid                        */
/*                          Qp0zIsATerminal                       @A1A*/
/*                          Qp0zRunTerminal                           */
/*                          Qp0zSetTerminalMode                   @B2A*/
/*                          Qp0zStartTerminal                         */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ------------------------- */
/* $A0= D9551600     4D20  970604 ROCH    : New include               */
/* $A1= P3665469     4D30  980218 ROCH    : Added Qp0zIsATerminal     */
/* $B1= D9776700     5D10  991205 ROCH    : Added datamodel pragma    */
/* $B2= D9825600     5D10  000305 ROCH    : Added new constants & APIs*/
/* $B3= D9873903     5D20  010708 ROCH    : Added new field to attr   */
/* $B4= D9927604     5D30  021103 ROCH    : Added new field to attr   */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

/**********************************************************************/
/* Includes                                                           */
/**********************************************************************/

#include <sys/types.h>       /* pid_t */
#include <spawn.h>           /* inheritance_t */

#pragma datamodel(P128)      /* @B1A*/

/**********************************************************************/
/* Structures                                                         */
/**********************************************************************/

/* Generic Terminal handle */
typedef struct {
  void *reservedP;
  int   reservedId;
  int   reservedPid;
  int   reserved1;
  int   reserved2;
} Qp0z_Terminal_T;

/* Generic Terminal attributes */
typedef struct {
  inheritance_t Inherit;     /* Inheritance structure for spawning
                                interpreter process */
  unsigned int Buffer_Size;  /* Size of buffer for reading data from
                                interpreter process */
  char DBCS_Capable;         /* This field is no longer used @B2C*/
  char Return_Exit_Status;   /* Return the exit status of the child job
                                from Qp0zEndTerminal() @B2A*/
  char Send_End_Msg;         /* Send message CPCA989 when the child job
                                ends during Qp0zRunTerminal() @B2A*/
  char Return_On_End;        /* Return immediately from Qp0zRunTerminal()
                                when the child job ends @B3A*/
  char *Title;               /* Text string for window title */
  char *Cmd_Key_Line1;       /* Text string for first line of command
                                key descriptions */
  char *Cmd_Key_Line2;       /* Text string for second line of command
                                key descriptions */
#if (__OS400_TGTVRM__ >= 530) /* @B4A*/
  char Interpreter_Process_Name[10]; /* Name of interpreter process @B4A*/
  char reserved2[22];        /* Reserved (binary 0) @B4C*/
#else /* @B4A*/
  char reserved2[32];        /* Reserved (binary 0) */
#endif /* __OS400_TGTVRM__ @B4A*/
} Qp0z_Terminal_Attr_T;

/**********************************************************************/
/* Macros                                                             */
/**********************************************************************/

/* Return values for Qp0zRunTerminal() */
#define QP0Z_TERMINAL_F12   0          /* User pressed F12 */
#define QP0Z_TERMINAL_F3    1          /* User pressed F3 */
#define QP0Z_TERMINAL_ENDED 2          /* Interpreter process ended */

/* Action values for Qp0zControlTerminal() @B2A*/
#define QP0Z_TERMINAL_BOTTOM      0xB6 /* Display bottom of output area @B2A*/
#define QP0Z_TERMINAL_CLCMDLINE   0xB9 /* Display CL command line @B2A*/
#define QP0Z_TERMINAL_CLEAR       0xB1 /* Clear output area @B2A*/
#define QP0Z_TERMINAL_EXIT        0x33 /* Exit terminal session @B2A*/
#define QP0Z_TERMINAL_LEFT        0xB7 /* Shift output area left @B2A*/
#define QP0Z_TERMINAL_PAGEDOWN    0x38 /* Page down output area @B2A*/
#define QP0Z_TERMINAL_PAGEUP      0x37 /* Page up output area @B2A*/
#define QP0Z_TERMINAL_PRINT       0x36 /* Print output area @B2A*/
#define QP0Z_TERMINAL_REFRESH     0x35 /* Refresh output area @B2A*/
#define QP0Z_TERMINAL_RETRIEVE    0x39 /* Retrieve previous command @B2A*/
#define QP0Z_TERMINAL_RETURN      0x3C /* Return from terminal session @B2A*/
#define QP0Z_TERMINAL_RIGHT       0xB8 /* Shift output area right @B2A*/
#define QP0Z_TERMINAL_TOP         0xB5 /* Display top of output area @B2A*/

/* Values for Qp0zSetTerminalMode() @B2A*/
#define QP0Z_TERMINAL_INPUT_MODE  0x01 /* Set input mode @B2A*/
#define QP0Z_TERMINAL_HIDDEN      0xBD /* Set hidden input mode @B2A*/
#define QP0Z_TERMINAL_NORMAL      0xBE /* Set normal input mode @B2A*/
#define QP0Z_TERMINAL_WRAP_MODE   0x02 /* Set wrap mode @B2A*/
#define QP0Z_TERMINAL_TRUNCATE    0x3E /* Set truncate mode @B2A*/
#define QP0Z_TERMINAL_WRAP        0x3D /* Set line wrap mode @B2A*/
#define QP0Z_TERMINAL_PREVIOUS    0x49 /* Set previous mode @B2A*/

/**********************************************************************/
/* Function Prototypes                                                */
/**********************************************************************/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

QBFC_EXTERN int Qp0zStartTerminal(Qp0z_Terminal_T *handle,
                                  char *args[],
                                  char *envs[],
                                  Qp0z_Terminal_Attr_T attrs);
QBFC_EXTERN int Qp0zRunTerminal(Qp0z_Terminal_T handle);
QBFC_EXTERN int Qp0zEndTerminal(Qp0z_Terminal_T handle, ...); /* @B2C*/
QBFC_EXTERN int Qp0zGetTerminalPid(Qp0z_Terminal_T handle, pid_t *pid);
QBFC_EXTERN int Qp0zIsATerminal(int fd); /* @A1A*/
QBFC_EXTERN int Qp0zControlTerminal(unsigned char action, int value); /* @B2A*/
QBFC_EXTERN int Qp0zSetTerminalMode(unsigned char mode,
                                    unsigned char type,
                                    unsigned char *reserved); /* @B2A*/

#pragma datamodel(pop)       /* @B1A*/

#endif /* __qp0ztrml_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
