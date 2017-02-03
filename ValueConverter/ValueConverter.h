

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jan 31 21:42:33 2017
 */
/* Compiler settings for C:\Users\gemin\AppData\Local\Temp\ValueConverter.idl-4141753d:
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

#ifndef __ValueConverter_h__
#define __ValueConverter_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CValueConverter_CISomeData_FWD_DEFINED__
#define ____x_ABI_CValueConverter_CISomeData_FWD_DEFINED__
typedef interface __x_ABI_CValueConverter_CISomeData __x_ABI_CValueConverter_CISomeData;

#ifdef __cplusplus
namespace ABI {
    namespace ValueConverter {
        interface ISomeData;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CValueConverter_CISomeData_FWD_DEFINED__ */


#ifndef ____x_ABI_CValueConverter_CIDataConverter_FWD_DEFINED__
#define ____x_ABI_CValueConverter_CIDataConverter_FWD_DEFINED__
typedef interface __x_ABI_CValueConverter_CIDataConverter __x_ABI_CValueConverter_CIDataConverter;

#ifdef __cplusplus
namespace ABI {
    namespace ValueConverter {
        interface IDataConverter;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CValueConverter_CIDataConverter_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "windows.ui.xaml.data.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ValueConverter_0000_0000 */
/* [local] */ 

#if !defined(____x_ABI_CValueConverter_CISomeData_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_ValueConverter_ISomeData[] = L"ValueConverter.ISomeData";
#endif /* !defined(____x_ABI_CValueConverter_CISomeData_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_ValueConverter_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_ValueConverter_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ValueConverter_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CValueConverter_CISomeData_INTERFACE_DEFINED__
#define ____x_ABI_CValueConverter_CISomeData_INTERFACE_DEFINED__

/* interface __x_ABI_CValueConverter_CISomeData */
/* [uuid][object] */ 



/* interface ABI::ValueConverter::ISomeData */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CValueConverter_CISomeData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace ValueConverter {
            
            MIDL_INTERFACE("23764889-ffa5-4963-b39b-7ce0d7722b52")
            ISomeData : public IInspectable
            {
            public:
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Data( 
                    /* [in] */ boolean value) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
                    /* [out][retval] */ boolean *value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ISomeData = __uuidof(ISomeData);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CValueConverter_CISomeDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CValueConverter_CISomeData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CValueConverter_CISomeData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CValueConverter_CISomeData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CValueConverter_CISomeData * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CValueConverter_CISomeData * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CValueConverter_CISomeData * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Data )( 
            __x_ABI_CValueConverter_CISomeData * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            __x_ABI_CValueConverter_CISomeData * This,
            /* [out][retval] */ boolean *value);
        
        END_INTERFACE
    } __x_ABI_CValueConverter_CISomeDataVtbl;

    interface __x_ABI_CValueConverter_CISomeData
    {
        CONST_VTBL struct __x_ABI_CValueConverter_CISomeDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CValueConverter_CISomeData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CValueConverter_CISomeData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CValueConverter_CISomeData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CValueConverter_CISomeData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CValueConverter_CISomeData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CValueConverter_CISomeData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CValueConverter_CISomeData_put_Data(This,value)	\
    ( (This)->lpVtbl -> put_Data(This,value) ) 

#define __x_ABI_CValueConverter_CISomeData_get_Data(This,value)	\
    ( (This)->lpVtbl -> get_Data(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CValueConverter_CISomeData_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ValueConverter_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CValueConverter_CIDataConverter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_ValueConverter_IDataConverter[] = L"ValueConverter.IDataConverter";
#endif /* !defined(____x_ABI_CValueConverter_CIDataConverter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_ValueConverter_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_ValueConverter_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ValueConverter_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CValueConverter_CIDataConverter_INTERFACE_DEFINED__
#define ____x_ABI_CValueConverter_CIDataConverter_INTERFACE_DEFINED__

/* interface __x_ABI_CValueConverter_CIDataConverter */
/* [uuid][object] */ 



/* interface ABI::ValueConverter::IDataConverter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CValueConverter_CIDataConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace ValueConverter {
            
            MIDL_INTERFACE("2cf8140d-e061-411a-8752-df02811a8260")
            IDataConverter : public IInspectable
            {
            public:
            };

            extern const __declspec(selectany) IID & IID_IDataConverter = __uuidof(IDataConverter);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CValueConverter_CIDataConverterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CValueConverter_CIDataConverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CValueConverter_CIDataConverter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CValueConverter_CIDataConverter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CValueConverter_CIDataConverter * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CValueConverter_CIDataConverter * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CValueConverter_CIDataConverter * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CValueConverter_CIDataConverterVtbl;

    interface __x_ABI_CValueConverter_CIDataConverter
    {
        CONST_VTBL struct __x_ABI_CValueConverter_CIDataConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CValueConverter_CIDataConverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CValueConverter_CIDataConverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CValueConverter_CIDataConverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CValueConverter_CIDataConverter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CValueConverter_CIDataConverter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CValueConverter_CIDataConverter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CValueConverter_CIDataConverter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ValueConverter_0000_0002 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace ValueConverter {
class SomeData;
} /*ValueConverter*/
}
#endif

#ifndef RUNTIMECLASS_ValueConverter_SomeData_DEFINED
#define RUNTIMECLASS_ValueConverter_SomeData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_ValueConverter_SomeData[] = L"ValueConverter.SomeData";
#endif
#ifdef __cplusplus
namespace ABI {
namespace ValueConverter {
class DataConverter;
} /*ValueConverter*/
}
#endif

#ifndef RUNTIMECLASS_ValueConverter_DataConverter_DEFINED
#define RUNTIMECLASS_ValueConverter_DataConverter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_ValueConverter_DataConverter[] = L"ValueConverter.DataConverter";
#endif


/* interface __MIDL_itf_ValueConverter_0000_0002 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_ValueConverter_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ValueConverter_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


