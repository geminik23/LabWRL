

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for C:\Users\gemin\AppData\Local\Temp\ExtendedPage.idl-a6da0596:
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

#ifndef __ExtendedPage_h__
#define __ExtendedPage_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CExtendedPage_CIExtendedPage_FWD_DEFINED__
#define ____x_ABI_CExtendedPage_CIExtendedPage_FWD_DEFINED__
typedef interface __x_ABI_CExtendedPage_CIExtendedPage __x_ABI_CExtendedPage_CIExtendedPage;

#ifdef __cplusplus
namespace ABI {
    namespace ExtendedPage {
        interface IExtendedPage;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CExtendedPage_CIExtendedPage_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "windows.ui.xaml.controls.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ExtendedPage_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui2Examl2Econtrols_h__)
#include <Windows.UI.Xaml.Controls.h>
#endif // !defined(__windows2Eui2Examl2Econtrols_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(____x_ABI_CExtendedPage_CIExtendedPage_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_ExtendedPage_IExtendedPage[] = L"ExtendedPage.IExtendedPage";
#endif /* !defined(____x_ABI_CExtendedPage_CIExtendedPage_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_ExtendedPage_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_ExtendedPage_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExtendedPage_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CExtendedPage_CIExtendedPage_INTERFACE_DEFINED__
#define ____x_ABI_CExtendedPage_CIExtendedPage_INTERFACE_DEFINED__

/* interface __x_ABI_CExtendedPage_CIExtendedPage */
/* [uuid][object] */ 



/* interface ABI::ExtendedPage::IExtendedPage */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CExtendedPage_CIExtendedPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace ExtendedPage {
            
            MIDL_INTERFACE("1ee430d8-6ca2-4d6f-ba58-da40df9f12d2")
            IExtendedPage : public IInspectable
            {
            public:
            };

            extern const __declspec(selectany) IID & IID_IExtendedPage = __uuidof(IExtendedPage);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CExtendedPage_CIExtendedPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CExtendedPage_CIExtendedPage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CExtendedPage_CIExtendedPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CExtendedPage_CIExtendedPage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CExtendedPage_CIExtendedPage * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CExtendedPage_CIExtendedPage * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CExtendedPage_CIExtendedPage * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CExtendedPage_CIExtendedPageVtbl;

    interface __x_ABI_CExtendedPage_CIExtendedPage
    {
        CONST_VTBL struct __x_ABI_CExtendedPage_CIExtendedPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CExtendedPage_CIExtendedPage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CExtendedPage_CIExtendedPage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CExtendedPage_CIExtendedPage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CExtendedPage_CIExtendedPage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CExtendedPage_CIExtendedPage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CExtendedPage_CIExtendedPage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CExtendedPage_CIExtendedPage_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ExtendedPage_0000_0001 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace ExtendedPage {
class ExtendedPage;
} /*ExtendedPage*/
}
#endif

#ifndef RUNTIMECLASS_ExtendedPage_ExtendedPage_DEFINED
#define RUNTIMECLASS_ExtendedPage_ExtendedPage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_ExtendedPage_ExtendedPage[] = L"ExtendedPage.ExtendedPage";
#endif


/* interface __MIDL_itf_ExtendedPage_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_ExtendedPage_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ExtendedPage_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


