

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Dec 26 17:45:10 2013
 */
/* Compiler settings for Example1Explicit.idl:
    Oicf, W4, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __Example1Explicit_h__
#define __Example1Explicit_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __Example1Explicit_INTERFACE_DEFINED__
#define __Example1Explicit_INTERFACE_DEFINED__

/* interface Example1Explicit */
/* [explicit_handle][version][uuid] */ 

void Output( 
    /* [in] */ handle_t hBinding,
    /* [in] */ long cItems,
    /* [size_is][in] */ const byte szOutput[  ],
    /* [out] */ long *pSize,
    /* [size_is][size_is][out] */ byte **ppp);



extern RPC_IF_HANDLE Example1Explicit_v1_0_c_ifspec;
extern RPC_IF_HANDLE Example1Explicit_v1_0_s_ifspec;
#endif /* __Example1Explicit_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


