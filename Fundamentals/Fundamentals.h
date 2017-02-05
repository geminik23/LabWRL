

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sun Feb 05 14:39:24 2017
 */
/* Compiler settings for C:\Users\gemin\AppData\Local\Temp\Fundamentals.idl-5e5bf43e:
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

#ifndef __Fundamentals_h__
#define __Fundamentals_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CFundamentals_CINone_FWD_DEFINED__
#define ____x_ABI_CFundamentals_CINone_FWD_DEFINED__
typedef interface __x_ABI_CFundamentals_CINone __x_ABI_CFundamentals_CINone;

#ifdef __cplusplus
namespace ABI {
    namespace Fundamentals {
        interface INone;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CFundamentals_CINone_FWD_DEFINED__ */


#ifndef ____x_ABI_CFundamentals_CISomeValue_FWD_DEFINED__
#define ____x_ABI_CFundamentals_CISomeValue_FWD_DEFINED__
typedef interface __x_ABI_CFundamentals_CISomeValue __x_ABI_CFundamentals_CISomeValue;

#ifdef __cplusplus
namespace ABI {
    namespace Fundamentals {
        interface ISomeValue;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CFundamentals_CISomeValue_FWD_DEFINED__ */


#ifndef ____x_ABI_CFundamentals_CICtorFactory_FWD_DEFINED__
#define ____x_ABI_CFundamentals_CICtorFactory_FWD_DEFINED__
typedef interface __x_ABI_CFundamentals_CICtorFactory __x_ABI_CFundamentals_CICtorFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Fundamentals {
        interface ICtorFactory;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CFundamentals_CICtorFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CFundamentals_CISomeValueStatic_FWD_DEFINED__
#define ____x_ABI_CFundamentals_CISomeValueStatic_FWD_DEFINED__
typedef interface __x_ABI_CFundamentals_CISomeValueStatic __x_ABI_CFundamentals_CISomeValueStatic;

#ifdef __cplusplus
namespace ABI {
    namespace Fundamentals {
        interface ISomeValueStatic;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CFundamentals_CISomeValueStatic_FWD_DEFINED__ */


#ifndef ____x_ABI_CFundamentals_CIPrinting_FWD_DEFINED__
#define ____x_ABI_CFundamentals_CIPrinting_FWD_DEFINED__
typedef interface __x_ABI_CFundamentals_CIPrinting __x_ABI_CFundamentals_CIPrinting;

#ifdef __cplusplus
namespace ABI {
    namespace Fundamentals {
        interface IPrinting;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CFundamentals_CIPrinting_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Fundamentals_0000_0000 */
/* [local] */ 

#if !defined(____x_ABI_CFundamentals_CINone_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Fundamentals_INone[] = L"Fundamentals.INone";
#endif /* !defined(____x_ABI_CFundamentals_CINone_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Fundamentals_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CFundamentals_CINone_INTERFACE_DEFINED__
#define ____x_ABI_CFundamentals_CINone_INTERFACE_DEFINED__

/* interface __x_ABI_CFundamentals_CINone */
/* [uuid][object] */ 



/* interface ABI::Fundamentals::INone */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CFundamentals_CINone;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Fundamentals {
            
            MIDL_INTERFACE("b8e4315e-cfab-4c36-b1b3-c2ec13a8df3d")
            INone : public IInspectable
            {
            public:
            };

            extern const __declspec(selectany) IID & IID_INone = __uuidof(INone);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CFundamentals_CINoneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CFundamentals_CINone * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CFundamentals_CINone * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CFundamentals_CINone * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CFundamentals_CINone * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CFundamentals_CINone * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CFundamentals_CINone * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CFundamentals_CINoneVtbl;

    interface __x_ABI_CFundamentals_CINone
    {
        CONST_VTBL struct __x_ABI_CFundamentals_CINoneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CFundamentals_CINone_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CFundamentals_CINone_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CFundamentals_CINone_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CFundamentals_CINone_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CFundamentals_CINone_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CFundamentals_CINone_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CFundamentals_CINone_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Fundamentals_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CFundamentals_CISomeValue_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Fundamentals_ISomeValue[] = L"Fundamentals.ISomeValue";
#endif /* !defined(____x_ABI_CFundamentals_CISomeValue_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Fundamentals_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CFundamentals_CISomeValue_INTERFACE_DEFINED__
#define ____x_ABI_CFundamentals_CISomeValue_INTERFACE_DEFINED__

/* interface __x_ABI_CFundamentals_CISomeValue */
/* [uuid][object] */ 



/* interface ABI::Fundamentals::ISomeValue */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CFundamentals_CISomeValue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Fundamentals {
            
            MIDL_INTERFACE("db66358b-1406-4758-96be-74aaa1474eb8")
            ISomeValue : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
                    /* [out][retval] */ int *v) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ISomeValue = __uuidof(ISomeValue);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CFundamentals_CISomeValueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CFundamentals_CISomeValue * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CFundamentals_CISomeValue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CFundamentals_CISomeValue * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CFundamentals_CISomeValue * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CFundamentals_CISomeValue * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CFundamentals_CISomeValue * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __x_ABI_CFundamentals_CISomeValue * This,
            /* [out][retval] */ int *v);
        
        END_INTERFACE
    } __x_ABI_CFundamentals_CISomeValueVtbl;

    interface __x_ABI_CFundamentals_CISomeValue
    {
        CONST_VTBL struct __x_ABI_CFundamentals_CISomeValueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CFundamentals_CISomeValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CFundamentals_CISomeValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CFundamentals_CISomeValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CFundamentals_CISomeValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CFundamentals_CISomeValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CFundamentals_CISomeValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CFundamentals_CISomeValue_get_Value(This,v)	\
    ( (This)->lpVtbl -> get_Value(This,v) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CFundamentals_CISomeValue_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Fundamentals_0000_0002 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace Fundamentals {
class SomeValueCtor;
} /*Fundamentals*/
}
#endif

#if !defined(____x_ABI_CFundamentals_CICtorFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Fundamentals_ICtorFactory[] = L"Fundamentals.ICtorFactory";
#endif /* !defined(____x_ABI_CFundamentals_CICtorFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Fundamentals_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CFundamentals_CICtorFactory_INTERFACE_DEFINED__
#define ____x_ABI_CFundamentals_CICtorFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CFundamentals_CICtorFactory */
/* [uuid][object] */ 



/* interface ABI::Fundamentals::ICtorFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CFundamentals_CICtorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Fundamentals {
            
            MIDL_INTERFACE("abf3f366-932e-4c27-a6af-332ec66f910d")
            ICtorFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateSomeValueCtorWith( 
                    /* [in] */ int value,
                    /* [out][retval] */ ABI::Fundamentals::ISomeValue **result) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ICtorFactory = __uuidof(ICtorFactory);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CFundamentals_CICtorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CFundamentals_CICtorFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CFundamentals_CICtorFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CFundamentals_CICtorFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CFundamentals_CICtorFactory * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CFundamentals_CICtorFactory * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CFundamentals_CICtorFactory * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSomeValueCtorWith )( 
            __x_ABI_CFundamentals_CICtorFactory * This,
            /* [in] */ int value,
            /* [out][retval] */ __x_ABI_CFundamentals_CISomeValue **result);
        
        END_INTERFACE
    } __x_ABI_CFundamentals_CICtorFactoryVtbl;

    interface __x_ABI_CFundamentals_CICtorFactory
    {
        CONST_VTBL struct __x_ABI_CFundamentals_CICtorFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CFundamentals_CICtorFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CFundamentals_CICtorFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CFundamentals_CICtorFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CFundamentals_CICtorFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CFundamentals_CICtorFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CFundamentals_CICtorFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CFundamentals_CICtorFactory_CreateSomeValueCtorWith(This,value,result)	\
    ( (This)->lpVtbl -> CreateSomeValueCtorWith(This,value,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CFundamentals_CICtorFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Fundamentals_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Fundamentals_SomeValueCtor_DEFINED
#define RUNTIMECLASS_Fundamentals_SomeValueCtor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Fundamentals_SomeValueCtor[] = L"Fundamentals.SomeValueCtor";
#endif
#if !defined(____x_ABI_CFundamentals_CISomeValueStatic_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Fundamentals_ISomeValueStatic[] = L"Fundamentals.ISomeValueStatic";
#endif /* !defined(____x_ABI_CFundamentals_CISomeValueStatic_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Fundamentals_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CFundamentals_CISomeValueStatic_INTERFACE_DEFINED__
#define ____x_ABI_CFundamentals_CISomeValueStatic_INTERFACE_DEFINED__

/* interface __x_ABI_CFundamentals_CISomeValueStatic */
/* [uuid][object] */ 



/* interface ABI::Fundamentals::ISomeValueStatic */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CFundamentals_CISomeValueStatic;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Fundamentals {
            
            MIDL_INTERFACE("2de26228-832b-4e9f-a971-c137f5f40b30")
            ISomeValueStatic : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StaticValue( 
                    /* [out][retval] */ int *value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ISomeValueStatic = __uuidof(ISomeValueStatic);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CFundamentals_CISomeValueStaticVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CFundamentals_CISomeValueStatic * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CFundamentals_CISomeValueStatic * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CFundamentals_CISomeValueStatic * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CFundamentals_CISomeValueStatic * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CFundamentals_CISomeValueStatic * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CFundamentals_CISomeValueStatic * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StaticValue )( 
            __x_ABI_CFundamentals_CISomeValueStatic * This,
            /* [out][retval] */ int *value);
        
        END_INTERFACE
    } __x_ABI_CFundamentals_CISomeValueStaticVtbl;

    interface __x_ABI_CFundamentals_CISomeValueStatic
    {
        CONST_VTBL struct __x_ABI_CFundamentals_CISomeValueStaticVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CFundamentals_CISomeValueStatic_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CFundamentals_CISomeValueStatic_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CFundamentals_CISomeValueStatic_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CFundamentals_CISomeValueStatic_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CFundamentals_CISomeValueStatic_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CFundamentals_CISomeValueStatic_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CFundamentals_CISomeValueStatic_get_StaticValue(This,value)	\
    ( (This)->lpVtbl -> get_StaticValue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CFundamentals_CISomeValueStatic_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Fundamentals_0000_0004 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace Fundamentals {
class SomeValueStatics;
} /*Fundamentals*/
}
#endif

#ifndef RUNTIMECLASS_Fundamentals_SomeValueStatics_DEFINED
#define RUNTIMECLASS_Fundamentals_SomeValueStatics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Fundamentals_SomeValueStatics[] = L"Fundamentals.SomeValueStatics";
#endif
#if !defined(____x_ABI_CFundamentals_CIPrinting_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Fundamentals_IPrinting[] = L"Fundamentals.IPrinting";
#endif /* !defined(____x_ABI_CFundamentals_CIPrinting_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Fundamentals_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CFundamentals_CIPrinting_INTERFACE_DEFINED__
#define ____x_ABI_CFundamentals_CIPrinting_INTERFACE_DEFINED__

/* interface __x_ABI_CFundamentals_CIPrinting */
/* [uuid][object] */ 



/* interface ABI::Fundamentals::IPrinting */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CFundamentals_CIPrinting;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Fundamentals {
            
            MIDL_INTERFACE("382523ff-3a3c-4d52-89ff-0fc4f82bef01")
            IPrinting : public IInspectable
            {
            public:
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
                    /* [in] */ int value) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
                    /* [out][retval] */ int *value) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE PrintTimes( 
                    /* [in] */ int times) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE Print( void) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IPrinting = __uuidof(IPrinting);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CFundamentals_CIPrintingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CFundamentals_CIPrinting * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CFundamentals_CIPrinting * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CFundamentals_CIPrinting * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CFundamentals_CIPrinting * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CFundamentals_CIPrinting * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CFundamentals_CIPrinting * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            __x_ABI_CFundamentals_CIPrinting * This,
            /* [in] */ int value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __x_ABI_CFundamentals_CIPrinting * This,
            /* [out][retval] */ int *value);
        
        HRESULT ( STDMETHODCALLTYPE *PrintTimes )( 
            __x_ABI_CFundamentals_CIPrinting * This,
            /* [in] */ int times);
        
        HRESULT ( STDMETHODCALLTYPE *Print )( 
            __x_ABI_CFundamentals_CIPrinting * This);
        
        END_INTERFACE
    } __x_ABI_CFundamentals_CIPrintingVtbl;

    interface __x_ABI_CFundamentals_CIPrinting
    {
        CONST_VTBL struct __x_ABI_CFundamentals_CIPrintingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CFundamentals_CIPrinting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CFundamentals_CIPrinting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CFundamentals_CIPrinting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CFundamentals_CIPrinting_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CFundamentals_CIPrinting_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CFundamentals_CIPrinting_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CFundamentals_CIPrinting_put_Value(This,value)	\
    ( (This)->lpVtbl -> put_Value(This,value) ) 

#define __x_ABI_CFundamentals_CIPrinting_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 

#define __x_ABI_CFundamentals_CIPrinting_PrintTimes(This,times)	\
    ( (This)->lpVtbl -> PrintTimes(This,times) ) 

#define __x_ABI_CFundamentals_CIPrinting_Print(This)	\
    ( (This)->lpVtbl -> Print(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CFundamentals_CIPrinting_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Fundamentals_0000_0005 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace Fundamentals {
class Printing;
} /*Fundamentals*/
}
#endif

#ifndef RUNTIMECLASS_Fundamentals_Printing_DEFINED
#define RUNTIMECLASS_Fundamentals_Printing_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Fundamentals_Printing[] = L"Fundamentals.Printing";
#endif


/* interface __MIDL_itf_Fundamentals_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Fundamentals_0000_0005_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


