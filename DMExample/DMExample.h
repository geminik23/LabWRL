

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Jan 27 20:07:37 2017
 */
/* Compiler settings for C:\Users\gemin\AppData\Local\Temp\DMExample.idl-190b6c3b:
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

#ifndef __DMExample_h__
#define __DMExample_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CDMExample_CISomeData_FWD_DEFINED__
#define ____x_ABI_CDMExample_CISomeData_FWD_DEFINED__
typedef interface __x_ABI_CDMExample_CISomeData __x_ABI_CDMExample_CISomeData;

#ifdef __cplusplus
namespace ABI {
    namespace DMExample {
        interface ISomeData;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CDMExample_CISomeData_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "windows.ui.xaml.data.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_DMExample_0000_0000 */
/* [local] */ 

#if !defined(____x_ABI_CDMExample_CISomeData_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_DMExample_ISomeData[] = L"DMExample.ISomeData";
#endif /* !defined(____x_ABI_CDMExample_CISomeData_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_DMExample_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_DMExample_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DMExample_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CDMExample_CISomeData_INTERFACE_DEFINED__
#define ____x_ABI_CDMExample_CISomeData_INTERFACE_DEFINED__

/* interface __x_ABI_CDMExample_CISomeData */
/* [uuid][object] */ 



/* interface ABI::DMExample::ISomeData */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CDMExample_CISomeData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace DMExample {
            
            MIDL_INTERFACE("0ac93be8-7fd8-403d-be66-63d022c7db34")
            ISomeData : public IInspectable
            {
            public:
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
                    /* [in] */ HSTRING value) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
                    /* [out][retval] */ HSTRING *value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_ISomeData = __uuidof(ISomeData);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CDMExample_CISomeDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CDMExample_CISomeData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CDMExample_CISomeData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CDMExample_CISomeData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CDMExample_CISomeData * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CDMExample_CISomeData * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CDMExample_CISomeData * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __x_ABI_CDMExample_CISomeData * This,
            /* [in] */ HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __x_ABI_CDMExample_CISomeData * This,
            /* [out][retval] */ HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CDMExample_CISomeDataVtbl;

    interface __x_ABI_CDMExample_CISomeData
    {
        CONST_VTBL struct __x_ABI_CDMExample_CISomeDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CDMExample_CISomeData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CDMExample_CISomeData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CDMExample_CISomeData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CDMExample_CISomeData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CDMExample_CISomeData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CDMExample_CISomeData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CDMExample_CISomeData_put_Name(This,value)	\
    ( (This)->lpVtbl -> put_Name(This,value) ) 

#define __x_ABI_CDMExample_CISomeData_get_Name(This,value)	\
    ( (This)->lpVtbl -> get_Name(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CDMExample_CISomeData_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_DMExample_0000_0001 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace DMExample {
class SomeData;
} /*DMExample*/
}
#endif

#ifndef RUNTIMECLASS_DMExample_SomeData_DEFINED
#define RUNTIMECLASS_DMExample_SomeData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_DMExample_SomeData[] = L"DMExample.SomeData";
#endif


/* interface __MIDL_itf_DMExample_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_DMExample_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DMExample_0000_0001_v0_0_s_ifspec;

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


