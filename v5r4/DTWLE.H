/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  dtwle.h                                        */
/*                                                                   */
/* Descriptive Name:  Net.Data language environment definitions      */
/*                                                                   */
/*                                                                   */
/* 5716-TC1                                                          */
/* (C) Copyright IBM Corp. 1996, 2000                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and structures    */
/*          to be used by Net.Data language environments.            */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          N/A                                                      */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          DTW_USAGE                                                */
/*          DTW_IN                                                   */
/*          DTW_OUT                                                  */
/*          DTW_INOUT                                                */
/*                                                                   */
/*          DTW_TYPE                                                 */
/*          DTW_STRING                                               */
/*          DTW_TABLE                                                */
/*                                                                   */
/*          DTW_STMT_EXEC                                            */
/*          DTW_END_ABNORMAL                                         */
/*          DTW_LE_FATAL_ERROR                                       */
/*          DTW_LE_MSG_KEEP                                          */
/*          DTW_LE_CONTINUE                                          */
/*          DTW_PERSISTENT                                      @A1A */
/*          DTW_TRACE_LOG_ENABLED                               @A2A */
/*          DTW_ERROR_LOG_ENABLED                               @A2A */
/*                                                                   */
/*          DTW_TABLEERR_RANGE                                       */
/*          DTW_TABLEERR_NOMEMORY                                    */
/*          DTW_TABLEERR_INVALID                                     */
/*          DTW_TABLEERR_TOOBIG                                      */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          dtw_parm_data_t                                          */
/*          dtw_lei_t                                                */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          dtw_initialize                                           */
/*          dtw_execute                                              */
/*          dtw_getNextRow                                           */
/*          dtw_cleanup                                              */
/*                                                                   */
/*          dtw_table_New                                            */
/*          dtw_table_Delete                                         */
/*          dtw_table_SetCols                                        */
/*          dtw_table_GetV                                           */
/*          dtw_table_SetV                                           */
/*          dtw_table_GetN                                           */
/*          dtw_table_SetN                                           */
/*          dtw_table_Rows                                           */
/*          dtw_table_Cols                                           */
/*          dtw_table_MaxRows                                        */
/*          dtw_table_QueryColnoNj                                   */
/*          dtw_table_AppendRow                                      */
/*          dtw_table_InsertRow                                      */
/*          dtw_table_DeleteRow                                      */
/*          dtw_table_InsertCol                                      */
/*          dtw_table_DeleteCol                                      */
/*                                                                   */
/*          dtw_row_SetCols                                          */
/*          dtw_row_SetV                                             */
/*                                                                   */
/*          dtw_malloc                                               */
/*          dtw_free                                                 */
/*          dtw_strdup                                               */
/*                                                                   */
/*          dtw_getvar                                               */
/*          dtw_setvar                                               */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= P3188200     3D70  960528  ROCH     New include.           */
/*   $A1= D95247       4D30  971217  ROCH     Persistent CGI support.*/
/*   $A2= P9933934     5D10  000928  ROCH     Logging support.       */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __DTWLE_H
  #define __DTWLE_H
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifndef __DTW_EXTERN
    #ifdef __cplusplus
        #define DTW_EXTERN extern "C"
    #else
        #define DTW_EXTERN extern
    #endif

    #define __DTW_EXTERN
#endif



/*********************************************************************/
/* Macros for parm_descriptor field in dtw_parm_data structure.      */
/*********************************************************************/

/* Parameter usage flags */

#define DTW_USAGE           0x0000FFFF /* Usage mask for usage flags */
#define DTW_IN              0x00000001 /* Input parameter            */
#define DTW_OUT             0x00000002 /* Output parameter           */
#define DTW_INOUT           0x00000003 /* Input/output parameter     */

/* Parameter type flags */

#define DTW_TYPE            0xFFFF0000 /* Type mask for type flags   */
#define DTW_STRING          0x00010000 /* NULL terminated string     */
#define DTW_TABLE           0x00020000 /* DTW table object           */

/*********************************************************************/
/* Macros for flag parameter in dtw_lei structure                    */
/*********************************************************************/

/* following set by Net.Data */

#define DTW_STMT_EXEC         0x00000001 /* %exec statement          */
#define DTW_END_ABNORMAL      0x00000002 /* Cleanup abnormal         */
#define DTW_PERSISTENT        0x00000004 /* Persistent macro     @A1A*/
#define DTW_TRACE_LOG_ENABLED 0x00000008 /* trace is enabled     @A2A*/
#define DTW_ERROR_LOG_ENABLED 0x00000010 /* error log is enabled @A2A*/

/* following set by language environments */

#define DTW_LE_FATAL_ERROR  0x00010000 /* Lang. Env. has fatal error */
#define DTW_LE_MSG_KEEP     0x00020000 /* Do not free default msg.   */
#define DTW_LE_CONTINUE     0x00040000 /* Call GetNextRow()          */

/*********************************************************************/
/* Macros for return codes returned by the DTW table object routines.*/
/*********************************************************************/

#define DTW_TABLEERR_RANGE     -1      /* Invalid index specified    */
#define DTW_TABLEERR_NOMEMORY  -2      /* Unable to allocate memory  */
#define DTW_TABLEERR_INVALID   -3      /* Table not in a valid state */
#define DTW_TABLEERR_TOOBIG    -4      /* Table size limit exceeded  */


/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/

typedef struct dtw_parm_data {        /* Parmameter data             */
    int   parm_descriptor;            /* Parameter descriptor        */
    char *parm_name;                  /* Parameter name              */
    char *parm_value;                 /* Parameter value             */
    void *res1;                       /* Reserved                    */
    void *res2;                       /* Reserved                    */
} dtw_parm_data_t;


typedef struct dtw_lei {              /* Lang. Env. Interface        */
    char *function_name;              /* Function block name         */
    int   flags;                      /* Lang. Env. Interface flags  */

    char *exec_statement;             /* Lang. Env. statement(s)     */

    dtw_parm_data_t *parm_data_array; /* Parameter array             */
    char *default_error_message;      /* Default message             */
    void *le_opaque_data;             /* Lang. Env. specific data    */

    void *row;                        /* For row-at-a-time processing*/

    char  reserved[64];               /* Reserved                    */
} dtw_lei_t;




/*********************************************************************/
/* Function prototypes                                               */
/*********************************************************************/

/*
 * Following is provided by the language environment.
 */

DTW_EXTERN int dtw_initialize(dtw_lei_t * le_interface);
DTW_EXTERN int dtw_execute(dtw_lei_t * le_interface);
DTW_EXTERN int dtw_cleanup(dtw_lei_t * le_interface);
DTW_EXTERN int dtw_getNextRow(dtw_lei_t * le_interface);

/*
 * Following enables language environment access to table object
 */

DTW_EXTERN int dtw_table_New(void** table, int rows, int cols,
                             int row_lim);
DTW_EXTERN int dtw_table_Delete(void* table);
DTW_EXTERN int dtw_table_SetCols(void* table, int cols);
DTW_EXTERN int dtw_table_GetV(void* table, char** dest,
                              int row, int col);
DTW_EXTERN int dtw_table_SetV(void* table, char*  src,
                              int row, int col);
DTW_EXTERN int dtw_table_GetN(void* table, char** dest, int col);
DTW_EXTERN int dtw_table_SetN(void* table, char*  src,  int col);
DTW_EXTERN int dtw_table_Rows(void* table);
DTW_EXTERN int dtw_table_Cols(void* table);
DTW_EXTERN int dtw_table_MaxRows(void* table);
DTW_EXTERN int dtw_table_QueryColnoNj(void* table, char *name);
DTW_EXTERN int dtw_table_AppendRow(void* table, int rows);
DTW_EXTERN int dtw_table_InsertRow(void* table, int after_row,
                                   int rows);
DTW_EXTERN int dtw_table_DeleteRow(void* table, int after_row,
                                   int rows);
DTW_EXTERN int dtw_table_InsertCol(void* table, int after_col,
                                   int cols);
DTW_EXTERN int dtw_table_DeleteCol(void* table, int after_col,
                                   int cols);

/*
 * Following enables language environment access to row object
 */
DTW_EXTERN int dtw_row_SetCols(void* row, int cols);
DTW_EXTERN int dtw_row_SetV(void* row, char*  src,  int col);

/*
 * Following enables language environment to allocate storage that
 * Net.Data can free, and allows the language environment to free
 * storage allocated by Net.Data.
 */

DTW_EXTERN void *dtw_malloc(long);
DTW_EXTERN void  dtw_free(void *);
DTW_EXTERN char *dtw_strdup(char*);

/*
 * Following enables language environment to access and update
 * configuration (.INI) file variables.
 */

DTW_EXTERN char *dtw_getvar(char* var_name);
DTW_EXTERN void  dtw_setvar(char* var_name, char* path);

/*
 * Following enables language environments to add messages
 * to the trace and error logs, respectively.
 */

DTW_EXTERN void  dtw_log_tracemsg(dtw_lei_t *lei, char *message); /* @A2A*/
DTW_EXTERN void  dtw_log_errormsg(dtw_lei_t *lei, char *message); /* @A2A*/


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* __DTWLE_H */
