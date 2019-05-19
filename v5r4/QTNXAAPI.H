/*********************************************************************/
/*                                                                   */
/* Header File Name        : QSYSINC/H/QTNXAAPI                      */
/*                                                                   */
/* Descriptive Name        : DB2/400 XA API Functions Common Header  */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1998                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/* Description             :                                         */
/*   Provide common declarations used by the XA APIs.                */
/*                                                                   */
/* Macro List              :                                         */
/*                                                                   */
/* Structure List          :                                         */
/*                                                                   */
/* Function Prototype List :                                         */
/*   db2xa_open()       Open a resource manager                      */
/*   db2xa_close()      Close a resource manager                     */
/*   db2xa_start()      Start work on behalf of a transaction        */
/*                      branch                                       */
/*   db2xa_end()        End work performed on behalf of a            */
/*                      transaction branch                           */
/*   db2xa_rollback()   Roll back work done on behalf of a           */
/*                      transaction branch                           */
/*   db2xa_prepare()    Prepare to commit work done on behalf of a   */
/*                       transaction branch                          */
/*   db2xa_commit()     Commit work done on behalf of a transaction  */
/*                      branch                                       */
/*   db2xa_recover()    Obtain a list of prepared transaction        */
/*                      branches from a resource manager             */
/*   db2xa_forget()     Forget about a heuristically completed       */
/*                      transaction branch                           */
/*   db2xa_complete()   Wait for an asynchronous operation to        */
/*                      complete                                     */
/*                                                                   */
/* Change Activity         :                                         */
/*                                                                   */
/* CFD List                :                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D9496500     4D30  971217 MIETEK  : New                      */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*********************************************************************/

#ifndef _QTNXAAPI_H
#define _QTNXAAPI_H

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <qtnxadtp.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*-------------------------------------------------------------------*/
/* XA function prototypes                                            */
/*-------------------------------------------------------------------*/

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_close                               */
/*                                                                  */
/* Descriptive Name    :  Close DB2/400 Resource Manager (RM)       */
/*                                                                  */
/* Function Description:  Close the resource manager.               */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  char *xa_info                             */
/*                                Pointer to a null terminated      */
/*                                character string containing       */
/*                                information used to uninitialize  */
/*                                the resource manager              */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred when        */
/*                                    closing the resource.         */
/*                                                                  */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_close (char *xa_info,
                             int  rmid,
                             long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_commit                              */
/*                                                                  */
/* Descriptive Name    :  Commit work done on behalf of a           */
/*                        transaction branch.                       */
/*                                                                  */
/* Function Description:  Changes made to resources held during     */
/*                        the transaction are made permanent.       */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xid                                 */
/*                                Pointer to transaction branch     */
/*                                identifier                        */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*                        XA_HEURCOM  Work on behalf of the         */
/*                                    transaction branch was        */
/*                                    heuristically committed.      */
/*                        XA_HEURRB   Work on behalf of the         */
/*                                    transaction branch was        */
/*                                    heuristically rolled back.    */
/*                        XA_HEURMIX  Work on behalf of the         */
/*                                    transaction branch was        */
/*                                    partially committed and       */
/*                                    partially rolled back due to  */
/*                                    a heuristic decision.         */
/*                        XA_HEURHAZ  Work on behalf of the         */
/*                                    transaction branch may have   */
/*                                    been heuristically completed. */
/*                        XA_RB*      The RM has rolled back the    */
/*                                    transaction branch and has    */
/*                                    released all held resources.  */
/*                        XA_RETRY    A blocking condition exists.  */
/*                                    The transaction branch is     */
/*                                    unchanged.                    */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_NOTA   The transaction branch ID is  */
/*                                    not known by the RM.          */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred in          */
/*                                    committing the transaction    */
/*                                    branch's work.                */
/*                        XAER_RMFAIL An error occurred that makes  */
/*                                    the RM unavailable.           */
/*                                                                  */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_commit (XID *xid,
                              int rmid,
                              long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_complete                            */
/*                                                                  */
/* Descriptive Name    :  Wait for an asynchronous operation to     */
/*                        complete.                                 */
/*                                                                  */
/* Function Description:  Wait for an asynchronous operation        */
/*                        identified by the handle to complete.     */
/* NOTE:                  In the initial implementation             */
/*                        asynchronous operations are not           */
/*                        provided, and this function returns       */
/*                        without performing any action.            */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  int *handle                               */
/*                                Pointer to an asynchronous        */
/*                                operation handle                  */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*                        XA_RETRY    No asynchronous operation     */
/*                                    has completed.                */
/*   Outputs           :                                            */
/*                        int *retval                               */
/*                                Pointer to return value of the    */
/*                                asynchronously completed operation*/
/*                                identified by the handle          */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_complete (int *handle,
                                int *retval,
                                int rmid,
                                long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_end                                 */
/*                                                                  */
/* Descriptive Name    :  End Work Performed on Behalf of the       */
/*                        Transaction Branch.                       */
/*                                                                  */
/* Function Description:  End or suspend a transaction.             */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xid                                 */
/*                                Pointer to transaction branch     */
/*                                identifier                        */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*                        XA_NOMIGRATE The RM unable to prepare the */
/*                                    transaction context for       */
/*                                    migration.                    */
/*                        XA_RB*      The RM associated the         */
/*                                    transaction branch with the   */
/*                                    thread of control and has     */
/*                                    marked *xid rollback-only.    */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_NOTA   The transaction branch ID is  */
/*                                    not known by the RM.          */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred in          */
/*                                    dissociating the transaction  */
/*                                    branch with the thread of     */
/*                                    control.                      */
/*                        XAER_RMFAIL An error occurred that makes  */
/*                                    the RM unavailable.           */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_end (XID *xid,
                           int rmid,
                           long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_forget                              */
/*                                                                  */
/* Descriptive Name    :  Forget about a heuristically completed    */
/*                        transaction branch                        */
/*                                                                  */
/* Function Description:  Erase resource manager's knowledge of     */
/*                        a heuristically completed transaction     */
/*                        branch.                                   */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xid                                 */
/*                                Pointer to transaction branch     */
/*                                identifier                        */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_NOTA   The transaction branch ID is  */
/*                                    not known by the RM as        */
/*                                    as heuristically completed.   */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred in the RM   */
/*                                    and the RM has not forgotten  */
/*                                    the transaction branch.       */
/*                        XAER_RMFAIL An error occurred that makes  */
/*                                    the RM unavailable.           */
/*                                                                  */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_forget (XID *xid,
                              int rmid,
                              long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_open                                */
/*                                                                  */
/* Descriptive Name    :  Open DB2/400 Resource Manager (RM)        */
/*                                                                  */
/* Function Description:  A transaction manager calls this function */
/*                        to initiate the resource manager and      */
/*                        prepare it for use in the distributed     */
/*                        transaction processing environment.       */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  char *xa_info                             */
/*                                Pointer to a null terminated      */
/*                                character string containing       */
/*                                information used to initialize    */
/*                                the RM.                           */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred when        */
/*                                    opening the resource.         */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_open (char *xa_info,
                            int  rmid,
                            long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_prepare                             */
/*                                                                  */
/* Descriptive Name    :  Prepare to commit work done on behalf     */
/*                        of a transaction branch.                  */
/*                                                                  */
/* Function Description:  Prepare for commitment any work           */
/*                        performed on behalf of a transaction      */
/*                        branch.                                   */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xid                                 */
/*                                Pointer to transaction branch     */
/*                                identifier                        */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*                        XA_RB*      The RM has rolled back the    */
/*                                    transaction branch and has    */
/*                                    released all held resources.  */
/*                        XA_RDONLY   Transaction branch was read   */
/*                                    only and has been committed   */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_NOTA   The transaction branch ID is  */
/*                                    not known by the RM.          */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred in          */
/*                                    preparing to commit the       */
/*                                    transaction branch's work.    */
/*                        XAER_RMFAIL An error occurred that makes  */
/*                                    the RM unavailable.           */
/*                                                                  */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_prepare (XID *xid,
                               int rmid,
                               long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_recover                             */
/*                                                                  */
/* Descriptive Name    :  Obtain a list of prepared transaction     */
/*                        branches.                                 */
/*                                                                  */
/* Function Description:  Obtain from the resource manager a list   */
/*                        of transaction branches that are          */
/*                        currently prepared or heuristically       */
/*                        completed.                                */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xids                                */
/*                                Pointer to an array of transaction*/
/*                                branch identifiers                */
/*                        long count                                */
/*                                Maximum number of transaction     */
/*                                branch identifiers that fit into  */
/*                                the returned array                */
/*                        int  rmid                                 */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  int  xidsNumber                           */
/*                                Number of transaction branch      */
/*                                identifiers returned in the xids  */
/*                                array                             */
/*   Outputs           :                                            */
/*                                                                  */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_INVAL  Invalid arguments were        */
/*                                    specified                     */
/*                        XAER_PROTO  Function was invoked in an    */
/*                                    improper context              */
/*                        XAER_RMERR  An error occurred in          */
/*                                    determining the transaction   */
/*                                    branch identifiers to return. */
/*                        XAER_RMFAIL An error occurred that makes  */
/*                                    the RM unavailable.           */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_recover (XID *xids,
                               long count,
                               int rmid,
                               long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_rollback                            */
/*                                                                  */
/* Descriptive Name    :  Roll back work done on behalf of a        */
/*                        transaction branch.                       */
/*                                                                  */
/* Function Description:  Changes made to resources held during     */
/*                        the transaction are removed.              */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xid                                 */
/*                                Pointer to transaction branch     */
/*                                identifier                        */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful.      */
/*                        XA_HEURCOM  Work on behalf of the         */
/*                                    transaction branch was        */
/*                                    heuristically committed.      */
/*                        XA_HEURHAZ  Work on behalf of the         */
/*                                    transaction branch may have   */
/*                                    been heuristically completed. */
/*                        XA_HEURMIX  Work on behalf of the         */
/*                                    transaction branch was        */
/*                                    partially committed and       */
/*                                    partially rolled back due to  */
/*                                    a heuristic decision.         */
/*                        XA_HEURRB   Work on behalf of the         */
/*                                    transaction branch was        */
/*                                    heuristically rolled back.    */
/*                        XA_RB*      The RM has rolled back the    */
/*                                    transaction branch and has    */
/*                                    released all held resources.  */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_NOTA   The transaction branch ID is  */
/*                                    not known by the RM.          */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred in rolling  */
/*                                    back the transaction branch.  */
/*                        XAER_RMFAIL An error occurred that makes  */
/*                                    the RM unavailable.           */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_rollback (XID *xid,
                                int rmid,
                                long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_start                               */
/*                                                                  */
/* Descriptive Name    :  Start work on behalf of a transaction     */
/*                        branch.                                   */
/*                                                                  */
/* Function Description:  Inform the resource manager that an       */
/*                        application may do work on behalf of a    */
/*                        transaction branch.                       */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xid                                 */
/*                                Pointer to transaction branch     */
/*                                identifier                        */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful.      */
/*                        XA_RB*      The RM associated the         */
/*                                    transaction branch with the   */
/*                                    thread of control and has     */
/*                                    marked *xid rollback-only.    */
/*                        XA_RETRY    A blocking condition exists.  */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_DUPID  The transaction branch ID is  */
/*                                    already known to the RM.      */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_NOTA   The transaction branch ID is  */
/*                                    not known by the RM.          */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred in          */
/*                                    associating the transaction   */
/*                                    branch with the thread of     */
/*                                    control.                      */
/*                        XAER_RMFAIL An error occurred that makes  */
/*                                    the RM unavailable.           */
/*                        XAER_OUTSIDE The RM is doing work outside */
/*                                    any global transaction on     */
/*                                    behalf of the application.    */
/*                                                                  */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_start (XID *xid,
                             int rmid,
                             long flags);

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
