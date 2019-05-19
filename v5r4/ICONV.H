 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: iconv.h                                      */
 /*                                                                */
 /* Descriptive Name: Codeset Conversion APIs.                     */
 /*                                                                */
 /* Description: Include header file for the iconv APIs.           */
 /*                                                                */
 /* Header Files Included: stddef.h                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: iconv_t                                        */
 /*                                                                */
 /* Function Prototype List: iconv_open()                          */
 /*                          iconv()                               */
 /*                          iconv_close()                         */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- --------------------- */
 /* $A0= D2871400     3D10  940227 BRINKER : New Include           */
 /* $A1= P3699956     4D50  990624 V2CIB100: Add const to clarify  */
 /*                                          iconv_open() parms    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef    __iconv_h
  #define  __iconv_h

#include <stddef.h>              /* contains declaration for size_t */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/* definition of iconv_t type */
typedef struct {
 int return_value;    /* return value to indicate if error occurred */
 int cd[12];
} iconv_t;

#ifndef __ILEC400__
  extern "C" {
#endif

size_t  iconv(iconv_t cd,
              char   **inbuf,
              size_t *inbytesleft,
              char   **outbuf,
              size_t *outbytesleft);

iconv_t iconv_open(const char *tocode,
                   const char *fromcode);

int     iconv_close (iconv_t cd);

#ifndef __ILEC400__
  }
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif                                         /* #ifndef __iconv_h */
