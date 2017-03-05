

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed Mar 01 00:49:13 2017
 */
/* Compiler settings for C:\Users\gemin\AppData\Local\Temp\AsyncComponent.idl-d1991a8e:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AsyncComponent_h__
#define __AsyncComponent_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_int_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_int_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_int __FIAsyncOperationCompletedHandler_1_int;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_int_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_int_FWD_DEFINED__
#define ____FIAsyncOperation_1_int_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_int __FIAsyncOperation_1_int;

#endif 	/* ____FIAsyncOperation_1_int_FWD_DEFINED__ */


#ifndef ____x_ABI_CAsyncComponent_CIMathOp_FWD_DEFINED__
#define ____x_ABI_CAsyncComponent_CIMathOp_FWD_DEFINED__
typedef interface __x_ABI_CAsyncComponent_CIMathOp __x_ABI_CAsyncComponent_CIMathOp;

#ifdef __cplusplus
namespace ABI {
    namespace AsyncComponent {
        interface IMathOp;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CAsyncComponent_CIMathOp_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "windows.foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_AsyncComponent_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif


/* interface __MIDL_itf_AsyncComponent_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0244 */




/* interface __MIDL_itf_AsyncComponent_0000_0244 */




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0244_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0244_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_int_USE
#define DEF___FIAsyncOperationCompletedHandler_1_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d60cae9d-88cb-59f1-8576-3fba44796be8"))
IAsyncOperationCompletedHandler<int> : IAsyncOperationCompletedHandler_impl<int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Int32>"; }
};
typedef IAsyncOperationCompletedHandler<int> __FIAsyncOperationCompletedHandler_1_int_t;
#define ____FIAsyncOperationCompletedHandler_1_int_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_int ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_int_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_int_USE */


/* interface __MIDL_itf_AsyncComponent_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0245 */




/* interface __MIDL_itf_AsyncComponent_0000_0245 */




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0245_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0245_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_int_USE
#define DEF___FIAsyncOperation_1_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("968b9665-06ed-5774-8f53-8edeabd5f7b5"))
IAsyncOperation<int> : IAsyncOperation_impl<int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Int32>"; }
};
typedef IAsyncOperation<int> __FIAsyncOperation_1_int_t;
#define ____FIAsyncOperation_1_int_FWD_DEFINED__
#define __FIAsyncOperation_1_int ABI::Windows::Foundation::__FIAsyncOperation_1_int_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_int_USE */


/* interface __MIDL_itf_AsyncComponent_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0246 */




/* interface __MIDL_itf_AsyncComponent_0000_0246 */




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0246_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0246_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0003 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_int
#define DEF___FIAsyncOperationCompletedHandler_1_int
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_AsyncComponent_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0003_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_int_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_int_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_int */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_int */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_int;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d60cae9d-88cb-59f1-8576-3fba44796be8")
    __FIAsyncOperationCompletedHandler_1_int : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __FIAsyncOperation_1_int *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_intVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIAsyncOperationCompletedHandler_1_int * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIAsyncOperationCompletedHandler_1_int * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIAsyncOperationCompletedHandler_1_int * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FIAsyncOperationCompletedHandler_1_int * This,
            /* [in] */ __FIAsyncOperation_1_int *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_intVtbl;

    interface __FIAsyncOperationCompletedHandler_1_int
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_intVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_int_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_int_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_AsyncComponent_0000_0004 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_int */


/* interface __MIDL_itf_AsyncComponent_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0247 */




/* interface __MIDL_itf_AsyncComponent_0000_0247 */




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0247_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0247_v0_0_s_ifspec;

/* interface __MIDL_itf_AsyncComponent_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_int
#define DEF___FIAsyncOperation_1_int
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_AsyncComponent_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0005_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_int_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_int_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_int */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_int */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_int;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("968b9665-06ed-5774-8f53-8edeabd5f7b5")
    __FIAsyncOperation_1_int : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __FIAsyncOperationCompletedHandler_1_int *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __FIAsyncOperationCompletedHandler_1_int **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ int *results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_intVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FIAsyncOperation_1_int * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FIAsyncOperation_1_int * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FIAsyncOperation_1_int * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __FIAsyncOperation_1_int * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __FIAsyncOperation_1_int * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __FIAsyncOperation_1_int * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __FIAsyncOperation_1_int * This,
            /* [in] */ __FIAsyncOperationCompletedHandler_1_int *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __FIAsyncOperation_1_int * This,
            /* [retval][out] */ __FIAsyncOperationCompletedHandler_1_int **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __FIAsyncOperation_1_int * This,
            /* [retval][out] */ int *results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_intVtbl;

    interface __FIAsyncOperation_1_int
    {
        CONST_VTBL struct __FIAsyncOperation_1_intVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_int_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_int_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_int_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_int_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_AsyncComponent_0000_0006 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_int */
#if !defined(____x_ABI_CAsyncComponent_CIMathOp_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_AsyncComponent_IMathOp[] = L"AsyncComponent.IMathOp";
#endif /* !defined(____x_ABI_CAsyncComponent_CIMathOp_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_AsyncComponent_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0006_v0_0_s_ifspec;

#ifndef ____x_ABI_CAsyncComponent_CIMathOp_INTERFACE_DEFINED__
#define ____x_ABI_CAsyncComponent_CIMathOp_INTERFACE_DEFINED__

/* interface __x_ABI_CAsyncComponent_CIMathOp */
/* [uuid][object] */ 



/* interface ABI::AsyncComponent::IMathOp */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CAsyncComponent_CIMathOp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace AsyncComponent {
            
            MIDL_INTERFACE("7677941f-3c88-4c10-b585-b154fb1db9de")
            IMathOp : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE Operate( 
                    /* [in] */ INT32 v1,
                    /* [in] */ INT32 v2,
                    /* [out][retval] */ INT32 *v3) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE OperateAsync( 
                    /* [in] */ INT32 v1,
                    /* [in] */ INT32 v2,
                    /* [out][retval] */ __FIAsyncOperation_1_int **value) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE OperateAndAddAsync( 
                    /* [in] */ INT32 v1,
                    /* [in] */ INT32 v2,
                    /* [in] */ INT32 v3,
                    /* [out][retval] */ __FIAsyncOperation_1_int **value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IMathOp = __uuidof(IMathOp);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CAsyncComponent_CIMathOpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CAsyncComponent_CIMathOp * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CAsyncComponent_CIMathOp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CAsyncComponent_CIMathOp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CAsyncComponent_CIMathOp * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CAsyncComponent_CIMathOp * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CAsyncComponent_CIMathOp * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Operate )( 
            __x_ABI_CAsyncComponent_CIMathOp * This,
            /* [in] */ INT32 v1,
            /* [in] */ INT32 v2,
            /* [out][retval] */ INT32 *v3);
        
        HRESULT ( STDMETHODCALLTYPE *OperateAsync )( 
            __x_ABI_CAsyncComponent_CIMathOp * This,
            /* [in] */ INT32 v1,
            /* [in] */ INT32 v2,
            /* [out][retval] */ __FIAsyncOperation_1_int **value);
        
        HRESULT ( STDMETHODCALLTYPE *OperateAndAddAsync )( 
            __x_ABI_CAsyncComponent_CIMathOp * This,
            /* [in] */ INT32 v1,
            /* [in] */ INT32 v2,
            /* [in] */ INT32 v3,
            /* [out][retval] */ __FIAsyncOperation_1_int **value);
        
        END_INTERFACE
    } __x_ABI_CAsyncComponent_CIMathOpVtbl;

    interface __x_ABI_CAsyncComponent_CIMathOp
    {
        CONST_VTBL struct __x_ABI_CAsyncComponent_CIMathOpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CAsyncComponent_CIMathOp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CAsyncComponent_CIMathOp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CAsyncComponent_CIMathOp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CAsyncComponent_CIMathOp_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CAsyncComponent_CIMathOp_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CAsyncComponent_CIMathOp_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CAsyncComponent_CIMathOp_Operate(This,v1,v2,v3)	\
    ( (This)->lpVtbl -> Operate(This,v1,v2,v3) ) 

#define __x_ABI_CAsyncComponent_CIMathOp_OperateAsync(This,v1,v2,value)	\
    ( (This)->lpVtbl -> OperateAsync(This,v1,v2,value) ) 

#define __x_ABI_CAsyncComponent_CIMathOp_OperateAndAddAsync(This,v1,v2,v3,value)	\
    ( (This)->lpVtbl -> OperateAndAddAsync(This,v1,v2,v3,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CAsyncComponent_CIMathOp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_AsyncComponent_0000_0007 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace AsyncComponent {
class MathOp;
} /*AsyncComponent*/
}
#endif

#ifndef RUNTIMECLASS_AsyncComponent_MathOp_DEFINED
#define RUNTIMECLASS_AsyncComponent_MathOp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_AsyncComponent_MathOp[] = L"AsyncComponent.MathOp";
#endif


/* interface __MIDL_itf_AsyncComponent_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AsyncComponent_0000_0007_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


