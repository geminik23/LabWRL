

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Feb 07 18:35:29 2017
 */
/* Compiler settings for C:\Users\gemin\AppData\Local\Temp\Delegates.idl-41d0b115:
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

#ifndef __Delegates_h__
#define __Delegates_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CDelegates_CIValueChangeHandler_FWD_DEFINED__
#define ____x_ABI_CDelegates_CIValueChangeHandler_FWD_DEFINED__
typedef interface __x_ABI_CDelegates_CIValueChangeHandler __x_ABI_CDelegates_CIValueChangeHandler;

#ifdef __cplusplus
namespace ABI {
    namespace Delegates {
        interface IValueChangeHandler;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CDelegates_CIValueChangeHandler_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_Delegates__CValueContainer_int_FWD_DEFINED__
#define ____FITypedEventHandler_2_Delegates__CValueContainer_int_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Delegates__CValueContainer_int __FITypedEventHandler_2_Delegates__CValueContainer_int;

#endif 	/* ____FITypedEventHandler_2_Delegates__CValueContainer_int_FWD_DEFINED__ */


#ifndef ____x_ABI_CDelegates_CIValueContainer_FWD_DEFINED__
#define ____x_ABI_CDelegates_CIValueContainer_FWD_DEFINED__
typedef interface __x_ABI_CDelegates_CIValueContainer __x_ABI_CDelegates_CIValueContainer;

#ifdef __cplusplus
namespace ABI {
    namespace Delegates {
        interface IValueContainer;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CDelegates_CIValueContainer_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "eventtoken.h"
#include "windows.foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Delegates_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
namespace ABI {
namespace Delegates {
class ValueContainer;
} /*Delegates*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Delegates {
interface IValueContainer;
} /*Delegates*/
}
#endif


/* interface __MIDL_itf_Delegates_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_Delegates_0000_0244 */




/* interface __MIDL_itf_Delegates_0000_0244 */




extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0244_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0244_v0_0_s_ifspec;

/* interface __MIDL_itf_Delegates_0000_0001 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Delegates__CValueContainer_int_USE
#define DEF___FITypedEventHandler_2_Delegates__CValueContainer_int_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("23f95672-cd84-5b5c-ac43-df07261c682f"))
ITypedEventHandler<ABI::Delegates::ValueContainer*,int> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Delegates::ValueContainer*, ABI::Delegates::IValueContainer*>,int> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Delegates.ValueContainer, Int32>"; }
};
typedef ITypedEventHandler<ABI::Delegates::ValueContainer*,int> __FITypedEventHandler_2_Delegates__CValueContainer_int_t;
#define ____FITypedEventHandler_2_Delegates__CValueContainer_int_FWD_DEFINED__
#define __FITypedEventHandler_2_Delegates__CValueContainer_int ABI::Windows::Foundation::__FITypedEventHandler_2_Delegates__CValueContainer_int_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Delegates__CValueContainer_int_USE */


/* interface __MIDL_itf_Delegates_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CDelegates_CIValueChangeHandler_INTERFACE_DEFINED__
#define ____x_ABI_CDelegates_CIValueChangeHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CDelegates_CIValueChangeHandler */
/* [uuid][object] */ 



/* interface ABI::Delegates::IValueChangeHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CDelegates_CIValueChangeHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Delegates {
            
            MIDL_INTERFACE("3c1d28ae-a3d6-40c5-8a18-a788ec02e264")
            IValueChangeHandler : public IUnknown
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE Invoke( 
                    ABI::Delegates::IValueContainer *sender,
                    int value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IValueChangeHandler = __uuidof(IValueChangeHandler);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CDelegates_CIValueChangeHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CDelegates_CIValueChangeHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CDelegates_CIValueChangeHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CDelegates_CIValueChangeHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __x_ABI_CDelegates_CIValueChangeHandler * This,
            __x_ABI_CDelegates_CIValueContainer *sender,
            int value);
        
        END_INTERFACE
    } __x_ABI_CDelegates_CIValueChangeHandlerVtbl;

    interface __x_ABI_CDelegates_CIValueChangeHandler
    {
        CONST_VTBL struct __x_ABI_CDelegates_CIValueChangeHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CDelegates_CIValueChangeHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CDelegates_CIValueChangeHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CDelegates_CIValueChangeHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CDelegates_CIValueChangeHandler_Invoke(This,sender,value)	\
    ( (This)->lpVtbl -> Invoke(This,sender,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CDelegates_CIValueChangeHandler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Delegates_0000_0245 */




/* interface __MIDL_itf_Delegates_0000_0245 */




extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0245_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0245_v0_0_s_ifspec;

/* interface __MIDL_itf_Delegates_0000_0003 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Delegates__CValueContainer_int
#define DEF___FITypedEventHandler_2_Delegates__CValueContainer_int
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_Delegates_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0003_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Delegates__CValueContainer_int_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Delegates__CValueContainer_int_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Delegates__CValueContainer_int */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Delegates__CValueContainer_int */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Delegates__CValueContainer_int;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23f95672-cd84-5b5c-ac43-df07261c682f")
    __FITypedEventHandler_2_Delegates__CValueContainer_int : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ABI::Delegates::IValueContainer *sender,
            /* [in] */ int e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Delegates__CValueContainer_intVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __FITypedEventHandler_2_Delegates__CValueContainer_int * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __FITypedEventHandler_2_Delegates__CValueContainer_int * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __FITypedEventHandler_2_Delegates__CValueContainer_int * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __FITypedEventHandler_2_Delegates__CValueContainer_int * This,
            /* [in] */ __x_ABI_CDelegates_CIValueContainer *sender,
            /* [in] */ int e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Delegates__CValueContainer_intVtbl;

    interface __FITypedEventHandler_2_Delegates__CValueContainer_int
    {
        CONST_VTBL struct __FITypedEventHandler_2_Delegates__CValueContainer_intVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Delegates__CValueContainer_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Delegates__CValueContainer_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Delegates__CValueContainer_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Delegates__CValueContainer_int_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Delegates__CValueContainer_int_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Delegates_0000_0004 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Delegates__CValueContainer_int */
#if !defined(____x_ABI_CDelegates_CIValueContainer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Delegates_IValueContainer[] = L"Delegates.IValueContainer";
#endif /* !defined(____x_ABI_CDelegates_CIValueContainer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Delegates_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CDelegates_CIValueContainer_INTERFACE_DEFINED__
#define ____x_ABI_CDelegates_CIValueContainer_INTERFACE_DEFINED__

/* interface __x_ABI_CDelegates_CIValueContainer */
/* [uuid][object] */ 



/* interface ABI::Delegates::IValueContainer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CDelegates_CIValueContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Delegates {
            
            MIDL_INTERFACE("4e567139-6dd0-4971-9be1-a436976dba81")
            IValueContainer : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
                    /* [out][retval] */ int *v) = 0;
                
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
                    /* [in] */ int v) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE add_ValueChanged( 
                    /* [in] */ ABI::Delegates::IValueChangeHandler *handler,
                    /* [out][retval] */ EventRegistrationToken *token) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE remove_ValueChanged( 
                    /* [in] */ EventRegistrationToken token) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE add_ValueChanged2( 
                    /* [in] */ __FITypedEventHandler_2_Delegates__CValueContainer_int *handler,
                    /* [out][retval] */ EventRegistrationToken *token) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE remove_ValueChanged2( 
                    /* [in] */ EventRegistrationToken token) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IValueContainer = __uuidof(IValueContainer);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CDelegates_CIValueContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CDelegates_CIValueContainer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CDelegates_CIValueContainer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [out][retval] */ int *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [in] */ int v);
        
        HRESULT ( STDMETHODCALLTYPE *add_ValueChanged )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [in] */ __x_ABI_CDelegates_CIValueChangeHandler *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_ValueChanged2 )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [in] */ __FITypedEventHandler_2_Delegates__CValueContainer_int *handler,
            /* [out][retval] */ EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged2 )( 
            __x_ABI_CDelegates_CIValueContainer * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CDelegates_CIValueContainerVtbl;

    interface __x_ABI_CDelegates_CIValueContainer
    {
        CONST_VTBL struct __x_ABI_CDelegates_CIValueContainerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CDelegates_CIValueContainer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CDelegates_CIValueContainer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CDelegates_CIValueContainer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CDelegates_CIValueContainer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CDelegates_CIValueContainer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CDelegates_CIValueContainer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CDelegates_CIValueContainer_get_Value(This,v)	\
    ( (This)->lpVtbl -> get_Value(This,v) ) 

#define __x_ABI_CDelegates_CIValueContainer_put_Value(This,v)	\
    ( (This)->lpVtbl -> put_Value(This,v) ) 

#define __x_ABI_CDelegates_CIValueContainer_add_ValueChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_ValueChanged(This,handler,token) ) 

#define __x_ABI_CDelegates_CIValueContainer_remove_ValueChanged(This,token)	\
    ( (This)->lpVtbl -> remove_ValueChanged(This,token) ) 

#define __x_ABI_CDelegates_CIValueContainer_add_ValueChanged2(This,handler,token)	\
    ( (This)->lpVtbl -> add_ValueChanged2(This,handler,token) ) 

#define __x_ABI_CDelegates_CIValueContainer_remove_ValueChanged2(This,token)	\
    ( (This)->lpVtbl -> remove_ValueChanged2(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CDelegates_CIValueContainer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Delegates_0000_0005 */
/* [local] */ 

#ifndef RUNTIMECLASS_Delegates_ValueContainer_DEFINED
#define RUNTIMECLASS_Delegates_ValueContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Delegates_ValueContainer[] = L"Delegates.ValueContainer";
#endif


/* interface __MIDL_itf_Delegates_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Delegates_0000_0005_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


