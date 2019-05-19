 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOLELINK                                   */
 /*                                                                */
 /* Descriptive Name: Enable User-Defined Communications Link      */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Enable Link API enables a link for input and  */
 /*              output on a communication line.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QOLELINK                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 VINING:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOLELINK_h
 #define QOLELINK_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling enable link API QOLELINK                 */
 /******************************************************************/

 #ifdef __ILEC400__
      #pragma linkage (QOLELINK,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QOLELINK (int  *,          /* Return Code                    */
                int  *,          /* Reason Code                    */
                int  *,          /* Data Unit Size                 */
                int  *,          /* Data Units Created             */
                int  *,          /* LAN User Data Size             */
                int  *,          /* X.25 Data Unit Size            */
                void *,          /* Input Buffer                   */
                void *,          /* Input Buffer Descriptor        */
                void *,          /* Output Buffer                  */
                void *,          /* Output Buffer Descriptor       */
                int  *,          /* Key Length                     */
                void *,          /* Key Value                      */
                void *,          /* Qualified Queue Name           */
                char *,          /* Line Description Name          */
                char *,          /* Communications Handle          */
                ...   );         /* Optional Parameters
                                    Optional Parameter Group 1
                char *              Queue Type
                char *              Network Interface Description
                char *              Extended Operations            */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
