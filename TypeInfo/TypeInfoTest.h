

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for C:\Users\gemin\AppData\Local\Temp\TypeInfoTest.idl-78f4e4af:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
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
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TypeInfoTest_h__
#define __TypeInfoTest_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CTypeInfoTest_CITypeInfoReceiver_FWD_DEFINED__
#define ____x_ABI_CTypeInfoTest_CITypeInfoReceiver_FWD_DEFINED__
typedef interface __x_ABI_CTypeInfoTest_CITypeInfoReceiver __x_ABI_CTypeInfoTest_CITypeInfoReceiver;

#ifdef __cplusplus
namespace ABI {
    namespace TypeInfoTest {
        interface ITypeInfoReceiver;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CTypeInfoTest_CITypeInfoReceiver_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "windows.ui.xaml.interop.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_TypeInfoTest_0000_0000 */
/* [local] */ 

#if !defined(____x_ABI_CTypeInfoTest_CITypeInfoReceiver_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_TypeInfoTest_ITypeInfoReceiver[] = L"TypeInfoTest.ITypeInfoReceiver";
#endif /* !defined(____x_ABI_CTypeInfoTest_CITypeInfoReceiver_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_TypeInfoTest_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_TypeInfoTest_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TypeInfoTest_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CTypeInfoTest_CITypeInfoReceiver_INTERFACE_DEFINED__
#define ____x_ABI_CTypeInfoTest_CITypeInfoReceiver_INTERFACE_DEFINED__

/* interface __x_ABI_CTypeInfoTest_CITypeInfoReceiver */
/* [uuid][object] */ 



/* interface ABI::TypeInfoTest::ITypeInfoReceiver */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CTypeInfoTest_CITypeInfoReceiver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace TypeInfoTest {
            
            MIDL_INTERFACE("9d597106-c61a-4852-9b25-4e33fa6f49f1")
            ITypeInfoReceiver : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE Received( 
                    /* [in] */ ABI::Windows::UI::Xaml::Interop::TypeName tn) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ITypeInfoReceiver = __uuidof(ITypeInfoReceiver);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CTypeInfoTest_CITypeInfoReceiverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CTypeInfoTest_CITypeInfoReceiver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CTypeInfoTest_CITypeInfoReceiver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CTypeInfoTest_CITypeInfoReceiver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CTypeInfoTest_CITypeInfoReceiver * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CTypeInfoTest_CITypeInfoReceiver * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CTypeInfoTest_CITypeInfoReceiver * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Received )( 
            __x_ABI_CTypeInfoTest_CITypeInfoReceiver * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName tn);
        
        END_INTERFACE
    } __x_ABI_CTypeInfoTest_CITypeInfoReceiverVtbl;

    interface __x_ABI_CTypeInfoTest_CITypeInfoReceiver
    {
        CONST_VTBL struct __x_ABI_CTypeInfoTest_CITypeInfoReceiverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CTypeInfoTest_CITypeInfoReceiver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CTypeInfoTest_CITypeInfoReceiver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CTypeInfoTest_CITypeInfoReceiver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CTypeInfoTest_CITypeInfoReceiver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CTypeInfoTest_CITypeInfoReceiver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CTypeInfoTest_CITypeInfoReceiver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CTypeInfoTest_CITypeInfoReceiver_Received(This,tn)	\
    ( (This)->lpVtbl -> Received(This,tn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CTypeInfoTest_CITypeInfoReceiver_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TypeInfoTest_0000_0001 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace TypeInfoTest {
class TypeInfoReceiver;
} /*TypeInfoTest*/
}
#endif

#ifndef RUNTIMECLASS_TypeInfoTest_TypeInfoReceiver_DEFINED
#define RUNTIMECLASS_TypeInfoTest_TypeInfoReceiver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_TypeInfoTest_TypeInfoReceiver[] = L"TypeInfoTest.TypeInfoReceiver";
#endif


/* interface __MIDL_itf_TypeInfoTest_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_TypeInfoTest_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TypeInfoTest_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


