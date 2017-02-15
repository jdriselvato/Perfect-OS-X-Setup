/*** Autogenerated by WIDL 1.2.2 from shldisp.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_SHLDISP_H
#define __WIDL_SHLDISP_H

#ifdef __cplusplus
extern "C" {
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>
#include <oaidl.h>
#include <shtypes.h>
#include <servprov.h>
#include <comcat.h>

/* Forward declarations */

#ifndef __IAutoComplete_FWD_DEFINED__
#define __IAutoComplete_FWD_DEFINED__
typedef interface IAutoComplete IAutoComplete;
#endif

#ifndef __IAutoComplete2_FWD_DEFINED__
#define __IAutoComplete2_FWD_DEFINED__
typedef interface IAutoComplete2 IAutoComplete2;
#endif

#ifndef __IFolderViewOC_FWD_DEFINED__
#define __IFolderViewOC_FWD_DEFINED__
typedef interface IFolderViewOC IFolderViewOC;
#endif

#ifndef __DShellFolderViewEvents_FWD_DEFINED__
#define __DShellFolderViewEvents_FWD_DEFINED__
typedef interface DShellFolderViewEvents DShellFolderViewEvents;
#endif

#ifndef __ShellFolderViewOC_FWD_DEFINED__
#define __ShellFolderViewOC_FWD_DEFINED__
typedef struct ShellFolderViewOC ShellFolderViewOC;
#endif /* defined __ShellFolderViewOC_FWD_DEFINED__ */

#ifndef __IAsyncOperation_FWD_DEFINED__
#define __IAsyncOperation_FWD_DEFINED__
typedef interface IAsyncOperation IAsyncOperation;
#endif


/*****************************************************************************
 * IAutoComplete interface
 */
#ifndef __IAutoComplete_INTERFACE_DEFINED__
#define __IAutoComplete_INTERFACE_DEFINED__

typedef IAutoComplete *LPAUTOCOMPLETE;
DEFINE_GUID(IID_IAutoComplete, 0x00bb2762, 0x6a77, 0x11d0, 0xa5,0x35, 0x00,0xc0,0x4f,0xd7,0xd0,0x62);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IAutoComplete : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Init(
        HWND hwndEdit,
        IUnknown *punkACL,
        LPCOLESTR pwszRegKeyPath,
        LPCOLESTR pwszQuickComplete) = 0;

    virtual HRESULT STDMETHODCALLTYPE Enable(
        BOOL fEnable) = 0;

};
#else
typedef struct IAutoCompleteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAutoComplete* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAutoComplete* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAutoComplete* This);

    /*** IAutoComplete methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        IAutoComplete* This,
        HWND hwndEdit,
        IUnknown *punkACL,
        LPCOLESTR pwszRegKeyPath,
        LPCOLESTR pwszQuickComplete);

    HRESULT (STDMETHODCALLTYPE *Enable)(
        IAutoComplete* This,
        BOOL fEnable);

    END_INTERFACE
} IAutoCompleteVtbl;
interface IAutoComplete {
    CONST_VTBL IAutoCompleteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAutoComplete_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAutoComplete_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAutoComplete_Release(This) (This)->lpVtbl->Release(This)
/*** IAutoComplete methods ***/
#define IAutoComplete_Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete) (This)->lpVtbl->Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete)
#define IAutoComplete_Enable(This,fEnable) (This)->lpVtbl->Enable(This,fEnable)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAutoComplete_Init_Proxy(
    IAutoComplete* This,
    HWND hwndEdit,
    IUnknown *punkACL,
    LPCOLESTR pwszRegKeyPath,
    LPCOLESTR pwszQuickComplete);
void __RPC_STUB IAutoComplete_Init_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAutoComplete_Enable_Proxy(
    IAutoComplete* This,
    BOOL fEnable);
void __RPC_STUB IAutoComplete_Enable_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAutoComplete_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAutoComplete2 interface
 */
#ifndef __IAutoComplete2_INTERFACE_DEFINED__
#define __IAutoComplete2_INTERFACE_DEFINED__

typedef IAutoComplete2 *LPAUTOCOMPLETE2;
typedef enum _tagAUTOCOMPLETEOPTIONS {
    ACO_NONE = 0x0,
    ACO_AUTOSUGGEST = 0x1,
    ACO_AUTOAPPEND = 0x2,
    ACO_SEARCH = 0x4,
    ACO_FILTERPREFIXES = 0x8,
    ACO_USETAB = 0x10,
    ACO_UPDOWNKEYDROPSLIST = 0x20,
    ACO_RTLREADING = 0x40
} AUTOCOMPLETEOPTIONS;
DEFINE_GUID(IID_IAutoComplete2, 0xeac04bc0, 0x3791, 0x11d2, 0xbb,0x95, 0x00,0x60,0x97,0x7b,0x46,0x4c);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IAutoComplete2 : public IAutoComplete
{
    virtual HRESULT STDMETHODCALLTYPE SetOptions(
        DWORD dwFlag) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOptions(
        DWORD *pdwFlag) = 0;

};
#else
typedef struct IAutoComplete2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAutoComplete2* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAutoComplete2* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAutoComplete2* This);

    /*** IAutoComplete methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        IAutoComplete2* This,
        HWND hwndEdit,
        IUnknown *punkACL,
        LPCOLESTR pwszRegKeyPath,
        LPCOLESTR pwszQuickComplete);

    HRESULT (STDMETHODCALLTYPE *Enable)(
        IAutoComplete2* This,
        BOOL fEnable);

    /*** IAutoComplete2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOptions)(
        IAutoComplete2* This,
        DWORD dwFlag);

    HRESULT (STDMETHODCALLTYPE *GetOptions)(
        IAutoComplete2* This,
        DWORD *pdwFlag);

    END_INTERFACE
} IAutoComplete2Vtbl;
interface IAutoComplete2 {
    CONST_VTBL IAutoComplete2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAutoComplete2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAutoComplete2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAutoComplete2_Release(This) (This)->lpVtbl->Release(This)
/*** IAutoComplete methods ***/
#define IAutoComplete2_Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete) (This)->lpVtbl->Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete)
#define IAutoComplete2_Enable(This,fEnable) (This)->lpVtbl->Enable(This,fEnable)
/*** IAutoComplete2 methods ***/
#define IAutoComplete2_SetOptions(This,dwFlag) (This)->lpVtbl->SetOptions(This,dwFlag)
#define IAutoComplete2_GetOptions(This,pdwFlag) (This)->lpVtbl->GetOptions(This,pdwFlag)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAutoComplete2_SetOptions_Proxy(
    IAutoComplete2* This,
    DWORD dwFlag);
void __RPC_STUB IAutoComplete2_SetOptions_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAutoComplete2_GetOptions_Proxy(
    IAutoComplete2* This,
    DWORD *pdwFlag);
void __RPC_STUB IAutoComplete2_GetOptions_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAutoComplete2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IFolderViewOC interface
 */
#ifndef __IFolderViewOC_INTERFACE_DEFINED__
#define __IFolderViewOC_INTERFACE_DEFINED__

DEFINE_GUID(IID_IFolderViewOC, 0x9ba05970, 0xf6a8, 0x11cf, 0xa4,0x42, 0x00,0xa0,0xc9,0x0a,0x8f,0x39);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IFolderViewOC : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE SetFolderView(
        IDispatch *pdisp) = 0;

};
#else
typedef struct IFolderViewOCVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IFolderViewOC* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IFolderViewOC* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IFolderViewOC* This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IFolderViewOC* This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IFolderViewOC* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IFolderViewOC* This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IFolderViewOC* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IFolderViewOC methods ***/
    HRESULT (STDMETHODCALLTYPE *SetFolderView)(
        IFolderViewOC* This,
        IDispatch *pdisp);

    END_INTERFACE
} IFolderViewOCVtbl;
interface IFolderViewOC {
    CONST_VTBL IFolderViewOCVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IFolderViewOC_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IFolderViewOC_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IFolderViewOC_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IFolderViewOC_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IFolderViewOC_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IFolderViewOC_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IFolderViewOC_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IFolderViewOC methods ***/
#define IFolderViewOC_SetFolderView(This,pdisp) (This)->lpVtbl->SetFolderView(This,pdisp)
#endif

#endif

HRESULT STDMETHODCALLTYPE IFolderViewOC_SetFolderView_Proxy(
    IFolderViewOC* This,
    IDispatch *pdisp);
void __RPC_STUB IFolderViewOC_SetFolderView_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IFolderViewOC_INTERFACE_DEFINED__ */

/*****************************************************************************
 * DShellFolderViewEvents dispinterface
 */
#ifndef __DShellFolderViewEvents_DISPINTERFACE_DEFINED__
#define __DShellFolderViewEvents_DISPINTERFACE_DEFINED__

DEFINE_GUID(DIID_DShellFolderViewEvents, 0x62112aa2, 0xebe4, 0x11cf, 0xa5,0xfb, 0x00,0x20,0xaf,0xe7,0x29,0x2d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface DShellFolderViewEvents : public IDispatch
{
};
#else
typedef struct DShellFolderViewEventsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        DShellFolderViewEvents* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        DShellFolderViewEvents* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        DShellFolderViewEvents* This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        DShellFolderViewEvents* This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        DShellFolderViewEvents* This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        DShellFolderViewEvents* This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        DShellFolderViewEvents* This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    END_INTERFACE
} DShellFolderViewEventsVtbl;
interface DShellFolderViewEvents {
    CONST_VTBL DShellFolderViewEventsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define DShellFolderViewEvents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define DShellFolderViewEvents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define DShellFolderViewEvents_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define DShellFolderViewEvents_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define DShellFolderViewEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define DShellFolderViewEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define DShellFolderViewEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#endif

#endif

#endif  /* __DShellFolderViewEvents_DISPINTERFACE_DEFINED__ */

/*****************************************************************************
 * ShellFolderViewOC coclass
 */

DEFINE_GUID(CLSID_ShellFolderViewOC, 0x9ba05971, 0xf6a8, 0x11cf, 0xa4,0x42, 0x00,0xa0,0xc9,0x0a,0x8f,0x39);

/*****************************************************************************
 * IAsyncOperation interface
 */
#ifndef __IAsyncOperation_INTERFACE_DEFINED__
#define __IAsyncOperation_INTERFACE_DEFINED__

typedef IAsyncOperation *LPASYNCOPERATION;
DEFINE_GUID(IID_IAsyncOperation, 0x3d8b0590, 0xf691, 0x11d2, 0x8e,0xa9, 0x00,0x60,0x97,0xdf,0x5b,0xd4);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IAsyncOperation : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetAsyncMode(
        BOOL fDoOpAsync) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAsyncMode(
        BOOL *pfIsOpAsync) = 0;

    virtual HRESULT STDMETHODCALLTYPE StartOperation(
        IBindCtx *pbcReserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE InOperation(
        BOOL *pfInAsyncOp) = 0;

    virtual HRESULT STDMETHODCALLTYPE EndOperation(
        HRESULT hResult,
        IBindCtx *pbcReserved,
        DWORD dwEffects) = 0;

};
#else
typedef struct IAsyncOperationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAsyncOperation* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAsyncOperation* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAsyncOperation* This);

    /*** IAsyncOperation methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAsyncMode)(
        IAsyncOperation* This,
        BOOL fDoOpAsync);

    HRESULT (STDMETHODCALLTYPE *GetAsyncMode)(
        IAsyncOperation* This,
        BOOL *pfIsOpAsync);

    HRESULT (STDMETHODCALLTYPE *StartOperation)(
        IAsyncOperation* This,
        IBindCtx *pbcReserved);

    HRESULT (STDMETHODCALLTYPE *InOperation)(
        IAsyncOperation* This,
        BOOL *pfInAsyncOp);

    HRESULT (STDMETHODCALLTYPE *EndOperation)(
        IAsyncOperation* This,
        HRESULT hResult,
        IBindCtx *pbcReserved,
        DWORD dwEffects);

    END_INTERFACE
} IAsyncOperationVtbl;
interface IAsyncOperation {
    CONST_VTBL IAsyncOperationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAsyncOperation_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAsyncOperation_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAsyncOperation_Release(This) (This)->lpVtbl->Release(This)
/*** IAsyncOperation methods ***/
#define IAsyncOperation_SetAsyncMode(This,fDoOpAsync) (This)->lpVtbl->SetAsyncMode(This,fDoOpAsync)
#define IAsyncOperation_GetAsyncMode(This,pfIsOpAsync) (This)->lpVtbl->GetAsyncMode(This,pfIsOpAsync)
#define IAsyncOperation_StartOperation(This,pbcReserved) (This)->lpVtbl->StartOperation(This,pbcReserved)
#define IAsyncOperation_InOperation(This,pfInAsyncOp) (This)->lpVtbl->InOperation(This,pfInAsyncOp)
#define IAsyncOperation_EndOperation(This,hResult,pbcReserved,dwEffects) (This)->lpVtbl->EndOperation(This,hResult,pbcReserved,dwEffects)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAsyncOperation_SetAsyncMode_Proxy(
    IAsyncOperation* This,
    BOOL fDoOpAsync);
void __RPC_STUB IAsyncOperation_SetAsyncMode_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAsyncOperation_GetAsyncMode_Proxy(
    IAsyncOperation* This,
    BOOL *pfIsOpAsync);
void __RPC_STUB IAsyncOperation_GetAsyncMode_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAsyncOperation_StartOperation_Proxy(
    IAsyncOperation* This,
    IBindCtx *pbcReserved);
void __RPC_STUB IAsyncOperation_StartOperation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAsyncOperation_InOperation_Proxy(
    IAsyncOperation* This,
    BOOL *pfInAsyncOp);
void __RPC_STUB IAsyncOperation_InOperation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAsyncOperation_EndOperation_Proxy(
    IAsyncOperation* This,
    HRESULT hResult,
    IBindCtx *pbcReserved,
    DWORD dwEffects);
void __RPC_STUB IAsyncOperation_EndOperation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAsyncOperation_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_SHLDISP_H */
