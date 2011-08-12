

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Thu Nov 30 00:29:27 2006
 */
/* Compiler settings for quartz.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

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


#ifndef __quartz_h__
#define __quartz_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAMCollection_FWD_DEFINED__
#define __IAMCollection_FWD_DEFINED__
typedef interface IAMCollection IAMCollection;
#endif 	/* __IAMCollection_FWD_DEFINED__ */


#ifndef __IMediaControl_FWD_DEFINED__
#define __IMediaControl_FWD_DEFINED__
typedef interface IMediaControl IMediaControl;
#endif 	/* __IMediaControl_FWD_DEFINED__ */


#ifndef __IMediaEvent_FWD_DEFINED__
#define __IMediaEvent_FWD_DEFINED__
typedef interface IMediaEvent IMediaEvent;
#endif 	/* __IMediaEvent_FWD_DEFINED__ */


#ifndef __IMediaEventEx_FWD_DEFINED__
#define __IMediaEventEx_FWD_DEFINED__
typedef interface IMediaEventEx IMediaEventEx;
#endif 	/* __IMediaEventEx_FWD_DEFINED__ */


#ifndef __IMediaPosition_FWD_DEFINED__
#define __IMediaPosition_FWD_DEFINED__
typedef interface IMediaPosition IMediaPosition;
#endif 	/* __IMediaPosition_FWD_DEFINED__ */


#ifndef __IBasicAudio_FWD_DEFINED__
#define __IBasicAudio_FWD_DEFINED__
typedef interface IBasicAudio IBasicAudio;
#endif 	/* __IBasicAudio_FWD_DEFINED__ */


#ifndef __IVideoWindow_FWD_DEFINED__
#define __IVideoWindow_FWD_DEFINED__
typedef interface IVideoWindow IVideoWindow;
#endif 	/* __IVideoWindow_FWD_DEFINED__ */


#ifndef __IBasicVideo_FWD_DEFINED__
#define __IBasicVideo_FWD_DEFINED__
typedef interface IBasicVideo IBasicVideo;
#endif 	/* __IBasicVideo_FWD_DEFINED__ */


#ifndef __IBasicVideo2_FWD_DEFINED__
#define __IBasicVideo2_FWD_DEFINED__
typedef interface IBasicVideo2 IBasicVideo2;
#endif 	/* __IBasicVideo2_FWD_DEFINED__ */


#ifndef __IDeferredCommand_FWD_DEFINED__
#define __IDeferredCommand_FWD_DEFINED__
typedef interface IDeferredCommand IDeferredCommand;
#endif 	/* __IDeferredCommand_FWD_DEFINED__ */


#ifndef __IQueueCommand_FWD_DEFINED__
#define __IQueueCommand_FWD_DEFINED__
typedef interface IQueueCommand IQueueCommand;
#endif 	/* __IQueueCommand_FWD_DEFINED__ */


#ifndef __IFilterInfo_FWD_DEFINED__
#define __IFilterInfo_FWD_DEFINED__
typedef interface IFilterInfo IFilterInfo;
#endif 	/* __IFilterInfo_FWD_DEFINED__ */


#ifndef __IRegFilterInfo_FWD_DEFINED__
#define __IRegFilterInfo_FWD_DEFINED__
typedef interface IRegFilterInfo IRegFilterInfo;
#endif 	/* __IRegFilterInfo_FWD_DEFINED__ */


#ifndef __IMediaTypeInfo_FWD_DEFINED__
#define __IMediaTypeInfo_FWD_DEFINED__
typedef interface IMediaTypeInfo IMediaTypeInfo;
#endif 	/* __IMediaTypeInfo_FWD_DEFINED__ */


#ifndef __IPinInfo_FWD_DEFINED__
#define __IPinInfo_FWD_DEFINED__
typedef interface IPinInfo IPinInfo;
#endif 	/* __IPinInfo_FWD_DEFINED__ */


#ifndef __IAMStats_FWD_DEFINED__
#define __IAMStats_FWD_DEFINED__
typedef interface IAMStats IAMStats;
#endif 	/* __IAMStats_FWD_DEFINED__ */


#ifndef __FilgraphManager_FWD_DEFINED__
#define __FilgraphManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FilgraphManager FilgraphManager;
#else
typedef struct FilgraphManager FilgraphManager;
#endif /* __cplusplus */

#endif 	/* __FilgraphManager_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __QuartzTypeLib_LIBRARY_DEFINED__
#define __QuartzTypeLib_LIBRARY_DEFINED__

/* library QuartzTypeLib */
/* [helpstring][version][uuid] */ 

















typedef /* [public] */ long LONG_PTR;


EXTERN_C const IID LIBID_QuartzTypeLib;

#ifndef __IAMCollection_INTERFACE_DEFINED__
#define __IAMCollection_INTERFACE_DEFINED__

/* interface IAMCollection */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAMCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B9-0AD4-11CE-B03A-0020AF0BA770")
    IAMCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long lItem,
            /* [out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAMCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAMCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAMCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAMCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAMCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAMCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAMCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAMCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAMCollection * This,
            /* [retval][out] */ long *plCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IAMCollection * This,
            /* [in] */ long lItem,
            /* [out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAMCollection * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        END_INTERFACE
    } IAMCollectionVtbl;

    interface IAMCollection
    {
        CONST_VTBL struct IAMCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAMCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAMCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAMCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAMCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAMCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAMCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAMCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAMCollection_get_Count(This,plCount)	\
    (This)->lpVtbl -> get_Count(This,plCount)

#define IAMCollection_Item(This,lItem,ppUnk)	\
    (This)->lpVtbl -> Item(This,lItem,ppUnk)

#define IAMCollection_get__NewEnum(This,ppUnk)	\
    (This)->lpVtbl -> get__NewEnum(This,ppUnk)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IAMCollection_get_Count_Proxy( 
    IAMCollection * This,
    /* [retval][out] */ long *plCount);


void __RPC_STUB IAMCollection_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAMCollection_Item_Proxy( 
    IAMCollection * This,
    /* [in] */ long lItem,
    /* [out] */ IUnknown **ppUnk);


void __RPC_STUB IAMCollection_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IAMCollection_get__NewEnum_Proxy( 
    IAMCollection * This,
    /* [retval][out] */ IUnknown **ppUnk);


void __RPC_STUB IAMCollection_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAMCollection_INTERFACE_DEFINED__ */


#ifndef __IMediaControl_INTERFACE_DEFINED__
#define __IMediaControl_INTERFACE_DEFINED__

/* interface IMediaControl */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMediaControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B1-0AD4-11CE-B03A-0020AF0BA770")
    IMediaControl : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetState( 
            /* [in] */ long msTimeout,
            /* [out] */ long *pfs) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenderFile( 
            /* [in] */ BSTR strFilename) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddSourceFilter( 
            /* [in] */ BSTR strFilename,
            /* [out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FilterCollection( 
            /* [retval][out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RegFilterCollection( 
            /* [retval][out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StopWhenReady( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMediaControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IMediaControl * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IMediaControl * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IMediaControl * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IMediaControl * This,
            /* [in] */ long msTimeout,
            /* [out] */ long *pfs);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenderFile )( 
            IMediaControl * This,
            /* [in] */ BSTR strFilename);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddSourceFilter )( 
            IMediaControl * This,
            /* [in] */ BSTR strFilename,
            /* [out] */ IDispatch **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FilterCollection )( 
            IMediaControl * This,
            /* [retval][out] */ IDispatch **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegFilterCollection )( 
            IMediaControl * This,
            /* [retval][out] */ IDispatch **ppUnk);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StopWhenReady )( 
            IMediaControl * This);
        
        END_INTERFACE
    } IMediaControlVtbl;

    interface IMediaControl
    {
        CONST_VTBL struct IMediaControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMediaControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMediaControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMediaControl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMediaControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMediaControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMediaControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMediaControl_Run(This)	\
    (This)->lpVtbl -> Run(This)

#define IMediaControl_Pause(This)	\
    (This)->lpVtbl -> Pause(This)

#define IMediaControl_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#define IMediaControl_GetState(This,msTimeout,pfs)	\
    (This)->lpVtbl -> GetState(This,msTimeout,pfs)

#define IMediaControl_RenderFile(This,strFilename)	\
    (This)->lpVtbl -> RenderFile(This,strFilename)

#define IMediaControl_AddSourceFilter(This,strFilename,ppUnk)	\
    (This)->lpVtbl -> AddSourceFilter(This,strFilename,ppUnk)

#define IMediaControl_get_FilterCollection(This,ppUnk)	\
    (This)->lpVtbl -> get_FilterCollection(This,ppUnk)

#define IMediaControl_get_RegFilterCollection(This,ppUnk)	\
    (This)->lpVtbl -> get_RegFilterCollection(This,ppUnk)

#define IMediaControl_StopWhenReady(This)	\
    (This)->lpVtbl -> StopWhenReady(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IMediaControl_Run_Proxy( 
    IMediaControl * This);


void __RPC_STUB IMediaControl_Run_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaControl_Pause_Proxy( 
    IMediaControl * This);


void __RPC_STUB IMediaControl_Pause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaControl_Stop_Proxy( 
    IMediaControl * This);


void __RPC_STUB IMediaControl_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaControl_GetState_Proxy( 
    IMediaControl * This,
    /* [in] */ long msTimeout,
    /* [out] */ long *pfs);


void __RPC_STUB IMediaControl_GetState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaControl_RenderFile_Proxy( 
    IMediaControl * This,
    /* [in] */ BSTR strFilename);


void __RPC_STUB IMediaControl_RenderFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaControl_AddSourceFilter_Proxy( 
    IMediaControl * This,
    /* [in] */ BSTR strFilename,
    /* [out] */ IDispatch **ppUnk);


void __RPC_STUB IMediaControl_AddSourceFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaControl_get_FilterCollection_Proxy( 
    IMediaControl * This,
    /* [retval][out] */ IDispatch **ppUnk);


void __RPC_STUB IMediaControl_get_FilterCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaControl_get_RegFilterCollection_Proxy( 
    IMediaControl * This,
    /* [retval][out] */ IDispatch **ppUnk);


void __RPC_STUB IMediaControl_get_RegFilterCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaControl_StopWhenReady_Proxy( 
    IMediaControl * This);


void __RPC_STUB IMediaControl_StopWhenReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMediaControl_INTERFACE_DEFINED__ */


#ifndef __IMediaEvent_INTERFACE_DEFINED__
#define __IMediaEvent_INTERFACE_DEFINED__

/* interface IMediaEvent */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMediaEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B6-0AD4-11CE-B03A-0020AF0BA770")
    IMediaEvent : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetEventHandle( 
            /* [out] */ LONG_PTR *hEvent) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetEvent( 
            /* [out] */ long *lEventCode,
            /* [out] */ LONG_PTR *lParam1,
            /* [out] */ LONG_PTR *lParam2,
            /* [in] */ long msTimeout) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WaitForCompletion( 
            /* [in] */ long msTimeout,
            /* [out] */ long *pEvCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CancelDefaultHandling( 
            /* [in] */ long lEvCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RestoreDefaultHandling( 
            /* [in] */ long lEvCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FreeEventParams( 
            /* [in] */ long lEvCode,
            /* [in] */ LONG_PTR lParam1,
            /* [in] */ LONG_PTR lParam2) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMediaEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaEvent * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaEvent * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetEventHandle )( 
            IMediaEvent * This,
            /* [out] */ LONG_PTR *hEvent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetEvent )( 
            IMediaEvent * This,
            /* [out] */ long *lEventCode,
            /* [out] */ LONG_PTR *lParam1,
            /* [out] */ LONG_PTR *lParam2,
            /* [in] */ long msTimeout);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )( 
            IMediaEvent * This,
            /* [in] */ long msTimeout,
            /* [out] */ long *pEvCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CancelDefaultHandling )( 
            IMediaEvent * This,
            /* [in] */ long lEvCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreDefaultHandling )( 
            IMediaEvent * This,
            /* [in] */ long lEvCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FreeEventParams )( 
            IMediaEvent * This,
            /* [in] */ long lEvCode,
            /* [in] */ LONG_PTR lParam1,
            /* [in] */ LONG_PTR lParam2);
        
        END_INTERFACE
    } IMediaEventVtbl;

    interface IMediaEvent
    {
        CONST_VTBL struct IMediaEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaEvent_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMediaEvent_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMediaEvent_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMediaEvent_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMediaEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMediaEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMediaEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMediaEvent_GetEventHandle(This,hEvent)	\
    (This)->lpVtbl -> GetEventHandle(This,hEvent)

#define IMediaEvent_GetEvent(This,lEventCode,lParam1,lParam2,msTimeout)	\
    (This)->lpVtbl -> GetEvent(This,lEventCode,lParam1,lParam2,msTimeout)

#define IMediaEvent_WaitForCompletion(This,msTimeout,pEvCode)	\
    (This)->lpVtbl -> WaitForCompletion(This,msTimeout,pEvCode)

#define IMediaEvent_CancelDefaultHandling(This,lEvCode)	\
    (This)->lpVtbl -> CancelDefaultHandling(This,lEvCode)

#define IMediaEvent_RestoreDefaultHandling(This,lEvCode)	\
    (This)->lpVtbl -> RestoreDefaultHandling(This,lEvCode)

#define IMediaEvent_FreeEventParams(This,lEvCode,lParam1,lParam2)	\
    (This)->lpVtbl -> FreeEventParams(This,lEvCode,lParam1,lParam2)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IMediaEvent_GetEventHandle_Proxy( 
    IMediaEvent * This,
    /* [out] */ LONG_PTR *hEvent);


void __RPC_STUB IMediaEvent_GetEventHandle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaEvent_GetEvent_Proxy( 
    IMediaEvent * This,
    /* [out] */ long *lEventCode,
    /* [out] */ LONG_PTR *lParam1,
    /* [out] */ LONG_PTR *lParam2,
    /* [in] */ long msTimeout);


void __RPC_STUB IMediaEvent_GetEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaEvent_WaitForCompletion_Proxy( 
    IMediaEvent * This,
    /* [in] */ long msTimeout,
    /* [out] */ long *pEvCode);


void __RPC_STUB IMediaEvent_WaitForCompletion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaEvent_CancelDefaultHandling_Proxy( 
    IMediaEvent * This,
    /* [in] */ long lEvCode);


void __RPC_STUB IMediaEvent_CancelDefaultHandling_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaEvent_RestoreDefaultHandling_Proxy( 
    IMediaEvent * This,
    /* [in] */ long lEvCode);


void __RPC_STUB IMediaEvent_RestoreDefaultHandling_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaEvent_FreeEventParams_Proxy( 
    IMediaEvent * This,
    /* [in] */ long lEvCode,
    /* [in] */ LONG_PTR lParam1,
    /* [in] */ LONG_PTR lParam2);


void __RPC_STUB IMediaEvent_FreeEventParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMediaEvent_INTERFACE_DEFINED__ */


#ifndef __IMediaEventEx_INTERFACE_DEFINED__
#define __IMediaEventEx_INTERFACE_DEFINED__

/* interface IMediaEventEx */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IMediaEventEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868C0-0AD4-11CE-B03A-0020AF0BA770")
    IMediaEventEx : public IMediaEvent
    {
    public:
        virtual HRESULT __stdcall SetNotifyWindow( 
            /* [in] */ LONG_PTR hwnd,
            /* [in] */ long lMsg,
            /* [in] */ LONG_PTR lInstanceData) = 0;
        
        virtual HRESULT __stdcall SetNotifyFlags( 
            /* [in] */ long lNoNotifyFlags) = 0;
        
        virtual HRESULT __stdcall GetNotifyFlags( 
            /* [out] */ long *lplNoNotifyFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMediaEventExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaEventEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaEventEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaEventEx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaEventEx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaEventEx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaEventEx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaEventEx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetEventHandle )( 
            IMediaEventEx * This,
            /* [out] */ LONG_PTR *hEvent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetEvent )( 
            IMediaEventEx * This,
            /* [out] */ long *lEventCode,
            /* [out] */ LONG_PTR *lParam1,
            /* [out] */ LONG_PTR *lParam2,
            /* [in] */ long msTimeout);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )( 
            IMediaEventEx * This,
            /* [in] */ long msTimeout,
            /* [out] */ long *pEvCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CancelDefaultHandling )( 
            IMediaEventEx * This,
            /* [in] */ long lEvCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreDefaultHandling )( 
            IMediaEventEx * This,
            /* [in] */ long lEvCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FreeEventParams )( 
            IMediaEventEx * This,
            /* [in] */ long lEvCode,
            /* [in] */ LONG_PTR lParam1,
            /* [in] */ LONG_PTR lParam2);
        
        HRESULT ( __stdcall *SetNotifyWindow )( 
            IMediaEventEx * This,
            /* [in] */ LONG_PTR hwnd,
            /* [in] */ long lMsg,
            /* [in] */ LONG_PTR lInstanceData);
        
        HRESULT ( __stdcall *SetNotifyFlags )( 
            IMediaEventEx * This,
            /* [in] */ long lNoNotifyFlags);
        
        HRESULT ( __stdcall *GetNotifyFlags )( 
            IMediaEventEx * This,
            /* [out] */ long *lplNoNotifyFlags);
        
        END_INTERFACE
    } IMediaEventExVtbl;

    interface IMediaEventEx
    {
        CONST_VTBL struct IMediaEventExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaEventEx_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMediaEventEx_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMediaEventEx_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMediaEventEx_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMediaEventEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMediaEventEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMediaEventEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMediaEventEx_GetEventHandle(This,hEvent)	\
    (This)->lpVtbl -> GetEventHandle(This,hEvent)

#define IMediaEventEx_GetEvent(This,lEventCode,lParam1,lParam2,msTimeout)	\
    (This)->lpVtbl -> GetEvent(This,lEventCode,lParam1,lParam2,msTimeout)

#define IMediaEventEx_WaitForCompletion(This,msTimeout,pEvCode)	\
    (This)->lpVtbl -> WaitForCompletion(This,msTimeout,pEvCode)

#define IMediaEventEx_CancelDefaultHandling(This,lEvCode)	\
    (This)->lpVtbl -> CancelDefaultHandling(This,lEvCode)

#define IMediaEventEx_RestoreDefaultHandling(This,lEvCode)	\
    (This)->lpVtbl -> RestoreDefaultHandling(This,lEvCode)

#define IMediaEventEx_FreeEventParams(This,lEvCode,lParam1,lParam2)	\
    (This)->lpVtbl -> FreeEventParams(This,lEvCode,lParam1,lParam2)


#define IMediaEventEx_SetNotifyWindow(This,hwnd,lMsg,lInstanceData)	\
    (This)->lpVtbl -> SetNotifyWindow(This,hwnd,lMsg,lInstanceData)

#define IMediaEventEx_SetNotifyFlags(This,lNoNotifyFlags)	\
    (This)->lpVtbl -> SetNotifyFlags(This,lNoNotifyFlags)

#define IMediaEventEx_GetNotifyFlags(This,lplNoNotifyFlags)	\
    (This)->lpVtbl -> GetNotifyFlags(This,lplNoNotifyFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT __stdcall IMediaEventEx_SetNotifyWindow_Proxy( 
    IMediaEventEx * This,
    /* [in] */ LONG_PTR hwnd,
    /* [in] */ long lMsg,
    /* [in] */ LONG_PTR lInstanceData);


void __RPC_STUB IMediaEventEx_SetNotifyWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IMediaEventEx_SetNotifyFlags_Proxy( 
    IMediaEventEx * This,
    /* [in] */ long lNoNotifyFlags);


void __RPC_STUB IMediaEventEx_SetNotifyFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IMediaEventEx_GetNotifyFlags_Proxy( 
    IMediaEventEx * This,
    /* [out] */ long *lplNoNotifyFlags);


void __RPC_STUB IMediaEventEx_GetNotifyFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMediaEventEx_INTERFACE_DEFINED__ */


#ifndef __IMediaPosition_INTERFACE_DEFINED__
#define __IMediaPosition_INTERFACE_DEFINED__

/* interface IMediaPosition */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMediaPosition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B2-0AD4-11CE-B03A-0020AF0BA770")
    IMediaPosition : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ double *plength) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CurrentPosition( 
            /* [in] */ double pllTime) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentPosition( 
            /* [retval][out] */ double *pllTime) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StopTime( 
            /* [retval][out] */ double *pllTime) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StopTime( 
            /* [in] */ double pllTime) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrerollTime( 
            /* [retval][out] */ double *pllTime) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrerollTime( 
            /* [in] */ double pllTime) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Rate( 
            /* [in] */ double pdRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Rate( 
            /* [retval][out] */ double *pdRate) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CanSeekForward( 
            /* [retval][out] */ long *pCanSeekForward) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CanSeekBackward( 
            /* [retval][out] */ long *pCanSeekBackward) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMediaPositionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaPosition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaPosition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaPosition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaPosition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaPosition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaPosition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaPosition * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IMediaPosition * This,
            /* [retval][out] */ double *plength);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )( 
            IMediaPosition * This,
            /* [in] */ double pllTime);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )( 
            IMediaPosition * This,
            /* [retval][out] */ double *pllTime);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StopTime )( 
            IMediaPosition * This,
            /* [retval][out] */ double *pllTime);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StopTime )( 
            IMediaPosition * This,
            /* [in] */ double pllTime);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrerollTime )( 
            IMediaPosition * This,
            /* [retval][out] */ double *pllTime);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrerollTime )( 
            IMediaPosition * This,
            /* [in] */ double pllTime);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Rate )( 
            IMediaPosition * This,
            /* [in] */ double pdRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Rate )( 
            IMediaPosition * This,
            /* [retval][out] */ double *pdRate);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CanSeekForward )( 
            IMediaPosition * This,
            /* [retval][out] */ long *pCanSeekForward);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CanSeekBackward )( 
            IMediaPosition * This,
            /* [retval][out] */ long *pCanSeekBackward);
        
        END_INTERFACE
    } IMediaPositionVtbl;

    interface IMediaPosition
    {
        CONST_VTBL struct IMediaPositionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaPosition_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMediaPosition_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMediaPosition_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMediaPosition_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMediaPosition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMediaPosition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMediaPosition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMediaPosition_get_Duration(This,plength)	\
    (This)->lpVtbl -> get_Duration(This,plength)

#define IMediaPosition_put_CurrentPosition(This,pllTime)	\
    (This)->lpVtbl -> put_CurrentPosition(This,pllTime)

#define IMediaPosition_get_CurrentPosition(This,pllTime)	\
    (This)->lpVtbl -> get_CurrentPosition(This,pllTime)

#define IMediaPosition_get_StopTime(This,pllTime)	\
    (This)->lpVtbl -> get_StopTime(This,pllTime)

#define IMediaPosition_put_StopTime(This,pllTime)	\
    (This)->lpVtbl -> put_StopTime(This,pllTime)

#define IMediaPosition_get_PrerollTime(This,pllTime)	\
    (This)->lpVtbl -> get_PrerollTime(This,pllTime)

#define IMediaPosition_put_PrerollTime(This,pllTime)	\
    (This)->lpVtbl -> put_PrerollTime(This,pllTime)

#define IMediaPosition_put_Rate(This,pdRate)	\
    (This)->lpVtbl -> put_Rate(This,pdRate)

#define IMediaPosition_get_Rate(This,pdRate)	\
    (This)->lpVtbl -> get_Rate(This,pdRate)

#define IMediaPosition_CanSeekForward(This,pCanSeekForward)	\
    (This)->lpVtbl -> CanSeekForward(This,pCanSeekForward)

#define IMediaPosition_CanSeekBackward(This,pCanSeekBackward)	\
    (This)->lpVtbl -> CanSeekBackward(This,pCanSeekBackward)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_get_Duration_Proxy( 
    IMediaPosition * This,
    /* [retval][out] */ double *plength);


void __RPC_STUB IMediaPosition_get_Duration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_put_CurrentPosition_Proxy( 
    IMediaPosition * This,
    /* [in] */ double pllTime);


void __RPC_STUB IMediaPosition_put_CurrentPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_get_CurrentPosition_Proxy( 
    IMediaPosition * This,
    /* [retval][out] */ double *pllTime);


void __RPC_STUB IMediaPosition_get_CurrentPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_get_StopTime_Proxy( 
    IMediaPosition * This,
    /* [retval][out] */ double *pllTime);


void __RPC_STUB IMediaPosition_get_StopTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_put_StopTime_Proxy( 
    IMediaPosition * This,
    /* [in] */ double pllTime);


void __RPC_STUB IMediaPosition_put_StopTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_get_PrerollTime_Proxy( 
    IMediaPosition * This,
    /* [retval][out] */ double *pllTime);


void __RPC_STUB IMediaPosition_get_PrerollTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_put_PrerollTime_Proxy( 
    IMediaPosition * This,
    /* [in] */ double pllTime);


void __RPC_STUB IMediaPosition_put_PrerollTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_put_Rate_Proxy( 
    IMediaPosition * This,
    /* [in] */ double pdRate);


void __RPC_STUB IMediaPosition_put_Rate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_get_Rate_Proxy( 
    IMediaPosition * This,
    /* [retval][out] */ double *pdRate);


void __RPC_STUB IMediaPosition_get_Rate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_CanSeekForward_Proxy( 
    IMediaPosition * This,
    /* [retval][out] */ long *pCanSeekForward);


void __RPC_STUB IMediaPosition_CanSeekForward_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IMediaPosition_CanSeekBackward_Proxy( 
    IMediaPosition * This,
    /* [retval][out] */ long *pCanSeekBackward);


void __RPC_STUB IMediaPosition_CanSeekBackward_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMediaPosition_INTERFACE_DEFINED__ */


#ifndef __IBasicAudio_INTERFACE_DEFINED__
#define __IBasicAudio_INTERFACE_DEFINED__

/* interface IBasicAudio */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IBasicAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B3-0AD4-11CE-B03A-0020AF0BA770")
    IBasicAudio : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Volume( 
            /* [in] */ long plVolume) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Volume( 
            /* [retval][out] */ long *plVolume) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Balance( 
            /* [in] */ long plBalance) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Balance( 
            /* [retval][out] */ long *plBalance) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBasicAudioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBasicAudio * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBasicAudio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBasicAudio * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBasicAudio * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBasicAudio * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBasicAudio * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBasicAudio * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Volume )( 
            IBasicAudio * This,
            /* [in] */ long plVolume);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Volume )( 
            IBasicAudio * This,
            /* [retval][out] */ long *plVolume);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Balance )( 
            IBasicAudio * This,
            /* [in] */ long plBalance);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Balance )( 
            IBasicAudio * This,
            /* [retval][out] */ long *plBalance);
        
        END_INTERFACE
    } IBasicAudioVtbl;

    interface IBasicAudio
    {
        CONST_VTBL struct IBasicAudioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBasicAudio_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBasicAudio_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBasicAudio_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBasicAudio_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBasicAudio_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBasicAudio_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBasicAudio_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBasicAudio_put_Volume(This,plVolume)	\
    (This)->lpVtbl -> put_Volume(This,plVolume)

#define IBasicAudio_get_Volume(This,plVolume)	\
    (This)->lpVtbl -> get_Volume(This,plVolume)

#define IBasicAudio_put_Balance(This,plBalance)	\
    (This)->lpVtbl -> put_Balance(This,plBalance)

#define IBasicAudio_get_Balance(This,plBalance)	\
    (This)->lpVtbl -> get_Balance(This,plBalance)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicAudio_put_Volume_Proxy( 
    IBasicAudio * This,
    /* [in] */ long plVolume);


void __RPC_STUB IBasicAudio_put_Volume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicAudio_get_Volume_Proxy( 
    IBasicAudio * This,
    /* [retval][out] */ long *plVolume);


void __RPC_STUB IBasicAudio_get_Volume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicAudio_put_Balance_Proxy( 
    IBasicAudio * This,
    /* [in] */ long plBalance);


void __RPC_STUB IBasicAudio_put_Balance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicAudio_get_Balance_Proxy( 
    IBasicAudio * This,
    /* [retval][out] */ long *plBalance);


void __RPC_STUB IBasicAudio_get_Balance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBasicAudio_INTERFACE_DEFINED__ */


#ifndef __IVideoWindow_INTERFACE_DEFINED__
#define __IVideoWindow_INTERFACE_DEFINED__

/* interface IVideoWindow */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVideoWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B4-0AD4-11CE-B03A-0020AF0BA770")
    IVideoWindow : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Caption( 
            /* [in] */ BSTR strCaption) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *strCaption) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowStyle( 
            /* [in] */ long WindowStyle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowStyle( 
            /* [retval][out] */ long *WindowStyle) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowStyleEx( 
            /* [in] */ long WindowStyleEx) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowStyleEx( 
            /* [retval][out] */ long *WindowStyleEx) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AutoShow( 
            /* [in] */ long AutoShow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AutoShow( 
            /* [retval][out] */ long *AutoShow) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_WindowState( 
            /* [in] */ long WindowState) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowState( 
            /* [retval][out] */ long *WindowState) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BackgroundPalette( 
            /* [in] */ long pBackgroundPalette) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BackgroundPalette( 
            /* [retval][out] */ long *pBackgroundPalette) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ long pVisible) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ long *pVisible) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ long pLeft) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long *pLeft) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long pWidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ long pTop) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long *pTop) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long pHeight) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Owner( 
            /* [in] */ LONG_PTR Owner) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Owner( 
            /* [retval][out] */ LONG_PTR *Owner) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MessageDrain( 
            /* [in] */ LONG_PTR Drain) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MessageDrain( 
            /* [retval][out] */ LONG_PTR *Drain) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BorderColor( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BorderColor( 
            /* [in] */ long Color) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FullScreenMode( 
            /* [retval][out] */ long *FullScreenMode) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FullScreenMode( 
            /* [in] */ long FullScreenMode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetWindowForeground( 
            /* [in] */ long Focus) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NotifyOwnerMessage( 
            /* [in] */ LONG_PTR hwnd,
            /* [in] */ long uMsg,
            /* [in] */ LONG_PTR wParam,
            /* [in] */ LONG_PTR lParam) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetWindowPosition( 
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetWindowPosition( 
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetMinIdealImageSize( 
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetMaxIdealImageSize( 
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRestorePosition( 
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE HideCursor( 
            /* [in] */ long HideCursor) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsCursorHidden( 
            /* [out] */ long *CursorHidden) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVideoWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoWindow * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoWindow * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoWindow * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoWindow * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoWindow * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            IVideoWindow * This,
            /* [in] */ BSTR strCaption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            IVideoWindow * This,
            /* [retval][out] */ BSTR *strCaption);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowStyle )( 
            IVideoWindow * This,
            /* [in] */ long WindowStyle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowStyle )( 
            IVideoWindow * This,
            /* [retval][out] */ long *WindowStyle);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowStyleEx )( 
            IVideoWindow * This,
            /* [in] */ long WindowStyleEx);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowStyleEx )( 
            IVideoWindow * This,
            /* [retval][out] */ long *WindowStyleEx);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutoShow )( 
            IVideoWindow * This,
            /* [in] */ long AutoShow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutoShow )( 
            IVideoWindow * This,
            /* [retval][out] */ long *AutoShow);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_WindowState )( 
            IVideoWindow * This,
            /* [in] */ long WindowState);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowState )( 
            IVideoWindow * This,
            /* [retval][out] */ long *WindowState);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundPalette )( 
            IVideoWindow * This,
            /* [in] */ long pBackgroundPalette);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundPalette )( 
            IVideoWindow * This,
            /* [retval][out] */ long *pBackgroundPalette);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IVideoWindow * This,
            /* [in] */ long pVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IVideoWindow * This,
            /* [retval][out] */ long *pVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Left )( 
            IVideoWindow * This,
            /* [in] */ long pLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            IVideoWindow * This,
            /* [retval][out] */ long *pLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IVideoWindow * This,
            /* [in] */ long pWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IVideoWindow * This,
            /* [retval][out] */ long *pWidth);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Top )( 
            IVideoWindow * This,
            /* [in] */ long pTop);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            IVideoWindow * This,
            /* [retval][out] */ long *pTop);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            IVideoWindow * This,
            /* [in] */ long pHeight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IVideoWindow * This,
            /* [retval][out] */ long *pHeight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Owner )( 
            IVideoWindow * This,
            /* [in] */ LONG_PTR Owner);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Owner )( 
            IVideoWindow * This,
            /* [retval][out] */ LONG_PTR *Owner);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MessageDrain )( 
            IVideoWindow * This,
            /* [in] */ LONG_PTR Drain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MessageDrain )( 
            IVideoWindow * This,
            /* [retval][out] */ LONG_PTR *Drain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BorderColor )( 
            IVideoWindow * This,
            /* [retval][out] */ long *Color);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BorderColor )( 
            IVideoWindow * This,
            /* [in] */ long Color);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreenMode )( 
            IVideoWindow * This,
            /* [retval][out] */ long *FullScreenMode);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenMode )( 
            IVideoWindow * This,
            /* [in] */ long FullScreenMode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowForeground )( 
            IVideoWindow * This,
            /* [in] */ long Focus);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NotifyOwnerMessage )( 
            IVideoWindow * This,
            /* [in] */ LONG_PTR hwnd,
            /* [in] */ long uMsg,
            /* [in] */ LONG_PTR wParam,
            /* [in] */ LONG_PTR lParam);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowPosition )( 
            IVideoWindow * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowPosition )( 
            IVideoWindow * This,
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetMinIdealImageSize )( 
            IVideoWindow * This,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIdealImageSize )( 
            IVideoWindow * This,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRestorePosition )( 
            IVideoWindow * This,
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *HideCursor )( 
            IVideoWindow * This,
            /* [in] */ long HideCursor);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsCursorHidden )( 
            IVideoWindow * This,
            /* [out] */ long *CursorHidden);
        
        END_INTERFACE
    } IVideoWindowVtbl;

    interface IVideoWindow
    {
        CONST_VTBL struct IVideoWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoWindow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVideoWindow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVideoWindow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVideoWindow_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IVideoWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IVideoWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IVideoWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IVideoWindow_put_Caption(This,strCaption)	\
    (This)->lpVtbl -> put_Caption(This,strCaption)

#define IVideoWindow_get_Caption(This,strCaption)	\
    (This)->lpVtbl -> get_Caption(This,strCaption)

#define IVideoWindow_put_WindowStyle(This,WindowStyle)	\
    (This)->lpVtbl -> put_WindowStyle(This,WindowStyle)

#define IVideoWindow_get_WindowStyle(This,WindowStyle)	\
    (This)->lpVtbl -> get_WindowStyle(This,WindowStyle)

#define IVideoWindow_put_WindowStyleEx(This,WindowStyleEx)	\
    (This)->lpVtbl -> put_WindowStyleEx(This,WindowStyleEx)

#define IVideoWindow_get_WindowStyleEx(This,WindowStyleEx)	\
    (This)->lpVtbl -> get_WindowStyleEx(This,WindowStyleEx)

#define IVideoWindow_put_AutoShow(This,AutoShow)	\
    (This)->lpVtbl -> put_AutoShow(This,AutoShow)

#define IVideoWindow_get_AutoShow(This,AutoShow)	\
    (This)->lpVtbl -> get_AutoShow(This,AutoShow)

#define IVideoWindow_put_WindowState(This,WindowState)	\
    (This)->lpVtbl -> put_WindowState(This,WindowState)

#define IVideoWindow_get_WindowState(This,WindowState)	\
    (This)->lpVtbl -> get_WindowState(This,WindowState)

#define IVideoWindow_put_BackgroundPalette(This,pBackgroundPalette)	\
    (This)->lpVtbl -> put_BackgroundPalette(This,pBackgroundPalette)

#define IVideoWindow_get_BackgroundPalette(This,pBackgroundPalette)	\
    (This)->lpVtbl -> get_BackgroundPalette(This,pBackgroundPalette)

#define IVideoWindow_put_Visible(This,pVisible)	\
    (This)->lpVtbl -> put_Visible(This,pVisible)

#define IVideoWindow_get_Visible(This,pVisible)	\
    (This)->lpVtbl -> get_Visible(This,pVisible)

#define IVideoWindow_put_Left(This,pLeft)	\
    (This)->lpVtbl -> put_Left(This,pLeft)

#define IVideoWindow_get_Left(This,pLeft)	\
    (This)->lpVtbl -> get_Left(This,pLeft)

#define IVideoWindow_put_Width(This,pWidth)	\
    (This)->lpVtbl -> put_Width(This,pWidth)

#define IVideoWindow_get_Width(This,pWidth)	\
    (This)->lpVtbl -> get_Width(This,pWidth)

#define IVideoWindow_put_Top(This,pTop)	\
    (This)->lpVtbl -> put_Top(This,pTop)

#define IVideoWindow_get_Top(This,pTop)	\
    (This)->lpVtbl -> get_Top(This,pTop)

#define IVideoWindow_put_Height(This,pHeight)	\
    (This)->lpVtbl -> put_Height(This,pHeight)

#define IVideoWindow_get_Height(This,pHeight)	\
    (This)->lpVtbl -> get_Height(This,pHeight)

#define IVideoWindow_put_Owner(This,Owner)	\
    (This)->lpVtbl -> put_Owner(This,Owner)

#define IVideoWindow_get_Owner(This,Owner)	\
    (This)->lpVtbl -> get_Owner(This,Owner)

#define IVideoWindow_put_MessageDrain(This,Drain)	\
    (This)->lpVtbl -> put_MessageDrain(This,Drain)

#define IVideoWindow_get_MessageDrain(This,Drain)	\
    (This)->lpVtbl -> get_MessageDrain(This,Drain)

#define IVideoWindow_get_BorderColor(This,Color)	\
    (This)->lpVtbl -> get_BorderColor(This,Color)

#define IVideoWindow_put_BorderColor(This,Color)	\
    (This)->lpVtbl -> put_BorderColor(This,Color)

#define IVideoWindow_get_FullScreenMode(This,FullScreenMode)	\
    (This)->lpVtbl -> get_FullScreenMode(This,FullScreenMode)

#define IVideoWindow_put_FullScreenMode(This,FullScreenMode)	\
    (This)->lpVtbl -> put_FullScreenMode(This,FullScreenMode)

#define IVideoWindow_SetWindowForeground(This,Focus)	\
    (This)->lpVtbl -> SetWindowForeground(This,Focus)

#define IVideoWindow_NotifyOwnerMessage(This,hwnd,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> NotifyOwnerMessage(This,hwnd,uMsg,wParam,lParam)

#define IVideoWindow_SetWindowPosition(This,Left,Top,Width,Height)	\
    (This)->lpVtbl -> SetWindowPosition(This,Left,Top,Width,Height)

#define IVideoWindow_GetWindowPosition(This,pLeft,pTop,pWidth,pHeight)	\
    (This)->lpVtbl -> GetWindowPosition(This,pLeft,pTop,pWidth,pHeight)

#define IVideoWindow_GetMinIdealImageSize(This,pWidth,pHeight)	\
    (This)->lpVtbl -> GetMinIdealImageSize(This,pWidth,pHeight)

#define IVideoWindow_GetMaxIdealImageSize(This,pWidth,pHeight)	\
    (This)->lpVtbl -> GetMaxIdealImageSize(This,pWidth,pHeight)

#define IVideoWindow_GetRestorePosition(This,pLeft,pTop,pWidth,pHeight)	\
    (This)->lpVtbl -> GetRestorePosition(This,pLeft,pTop,pWidth,pHeight)

#define IVideoWindow_HideCursor(This,HideCursor)	\
    (This)->lpVtbl -> HideCursor(This,HideCursor)

#define IVideoWindow_IsCursorHidden(This,CursorHidden)	\
    (This)->lpVtbl -> IsCursorHidden(This,CursorHidden)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_Caption_Proxy( 
    IVideoWindow * This,
    /* [in] */ BSTR strCaption);


void __RPC_STUB IVideoWindow_put_Caption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_Caption_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ BSTR *strCaption);


void __RPC_STUB IVideoWindow_get_Caption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_WindowStyle_Proxy( 
    IVideoWindow * This,
    /* [in] */ long WindowStyle);


void __RPC_STUB IVideoWindow_put_WindowStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_WindowStyle_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *WindowStyle);


void __RPC_STUB IVideoWindow_get_WindowStyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_WindowStyleEx_Proxy( 
    IVideoWindow * This,
    /* [in] */ long WindowStyleEx);


void __RPC_STUB IVideoWindow_put_WindowStyleEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_WindowStyleEx_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *WindowStyleEx);


void __RPC_STUB IVideoWindow_get_WindowStyleEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_AutoShow_Proxy( 
    IVideoWindow * This,
    /* [in] */ long AutoShow);


void __RPC_STUB IVideoWindow_put_AutoShow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_AutoShow_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *AutoShow);


void __RPC_STUB IVideoWindow_get_AutoShow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_WindowState_Proxy( 
    IVideoWindow * This,
    /* [in] */ long WindowState);


void __RPC_STUB IVideoWindow_put_WindowState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_WindowState_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *WindowState);


void __RPC_STUB IVideoWindow_get_WindowState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_BackgroundPalette_Proxy( 
    IVideoWindow * This,
    /* [in] */ long pBackgroundPalette);


void __RPC_STUB IVideoWindow_put_BackgroundPalette_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_BackgroundPalette_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *pBackgroundPalette);


void __RPC_STUB IVideoWindow_get_BackgroundPalette_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_Visible_Proxy( 
    IVideoWindow * This,
    /* [in] */ long pVisible);


void __RPC_STUB IVideoWindow_put_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_Visible_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *pVisible);


void __RPC_STUB IVideoWindow_get_Visible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_Left_Proxy( 
    IVideoWindow * This,
    /* [in] */ long pLeft);


void __RPC_STUB IVideoWindow_put_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_Left_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *pLeft);


void __RPC_STUB IVideoWindow_get_Left_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_Width_Proxy( 
    IVideoWindow * This,
    /* [in] */ long pWidth);


void __RPC_STUB IVideoWindow_put_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_Width_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *pWidth);


void __RPC_STUB IVideoWindow_get_Width_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_Top_Proxy( 
    IVideoWindow * This,
    /* [in] */ long pTop);


void __RPC_STUB IVideoWindow_put_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_Top_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *pTop);


void __RPC_STUB IVideoWindow_get_Top_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_Height_Proxy( 
    IVideoWindow * This,
    /* [in] */ long pHeight);


void __RPC_STUB IVideoWindow_put_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_Height_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *pHeight);


void __RPC_STUB IVideoWindow_get_Height_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_Owner_Proxy( 
    IVideoWindow * This,
    /* [in] */ LONG_PTR Owner);


void __RPC_STUB IVideoWindow_put_Owner_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_Owner_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ LONG_PTR *Owner);


void __RPC_STUB IVideoWindow_get_Owner_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_MessageDrain_Proxy( 
    IVideoWindow * This,
    /* [in] */ LONG_PTR Drain);


void __RPC_STUB IVideoWindow_put_MessageDrain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_MessageDrain_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ LONG_PTR *Drain);


void __RPC_STUB IVideoWindow_get_MessageDrain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_BorderColor_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB IVideoWindow_get_BorderColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_BorderColor_Proxy( 
    IVideoWindow * This,
    /* [in] */ long Color);


void __RPC_STUB IVideoWindow_put_BorderColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_get_FullScreenMode_Proxy( 
    IVideoWindow * This,
    /* [retval][out] */ long *FullScreenMode);


void __RPC_STUB IVideoWindow_get_FullScreenMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_put_FullScreenMode_Proxy( 
    IVideoWindow * This,
    /* [in] */ long FullScreenMode);


void __RPC_STUB IVideoWindow_put_FullScreenMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_SetWindowForeground_Proxy( 
    IVideoWindow * This,
    /* [in] */ long Focus);


void __RPC_STUB IVideoWindow_SetWindowForeground_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_NotifyOwnerMessage_Proxy( 
    IVideoWindow * This,
    /* [in] */ LONG_PTR hwnd,
    /* [in] */ long uMsg,
    /* [in] */ LONG_PTR wParam,
    /* [in] */ LONG_PTR lParam);


void __RPC_STUB IVideoWindow_NotifyOwnerMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_SetWindowPosition_Proxy( 
    IVideoWindow * This,
    /* [in] */ long Left,
    /* [in] */ long Top,
    /* [in] */ long Width,
    /* [in] */ long Height);


void __RPC_STUB IVideoWindow_SetWindowPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_GetWindowPosition_Proxy( 
    IVideoWindow * This,
    /* [out] */ long *pLeft,
    /* [out] */ long *pTop,
    /* [out] */ long *pWidth,
    /* [out] */ long *pHeight);


void __RPC_STUB IVideoWindow_GetWindowPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_GetMinIdealImageSize_Proxy( 
    IVideoWindow * This,
    /* [out] */ long *pWidth,
    /* [out] */ long *pHeight);


void __RPC_STUB IVideoWindow_GetMinIdealImageSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_GetMaxIdealImageSize_Proxy( 
    IVideoWindow * This,
    /* [out] */ long *pWidth,
    /* [out] */ long *pHeight);


void __RPC_STUB IVideoWindow_GetMaxIdealImageSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_GetRestorePosition_Proxy( 
    IVideoWindow * This,
    /* [out] */ long *pLeft,
    /* [out] */ long *pTop,
    /* [out] */ long *pWidth,
    /* [out] */ long *pHeight);


void __RPC_STUB IVideoWindow_GetRestorePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_HideCursor_Proxy( 
    IVideoWindow * This,
    /* [in] */ long HideCursor);


void __RPC_STUB IVideoWindow_HideCursor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IVideoWindow_IsCursorHidden_Proxy( 
    IVideoWindow * This,
    /* [out] */ long *CursorHidden);


void __RPC_STUB IVideoWindow_IsCursorHidden_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVideoWindow_INTERFACE_DEFINED__ */


#ifndef __IBasicVideo_INTERFACE_DEFINED__
#define __IBasicVideo_INTERFACE_DEFINED__

/* interface IBasicVideo */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IBasicVideo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B5-0AD4-11CE-B03A-0020AF0BA770")
    IBasicVideo : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AvgTimePerFrame( 
            /* [retval][out] */ double *pAvgTimePerFrame) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitRate( 
            /* [retval][out] */ long *pBitRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitErrorRate( 
            /* [retval][out] */ long *pBitErrorRate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VideoWidth( 
            /* [retval][out] */ long *pVideoWidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VideoHeight( 
            /* [retval][out] */ long *pVideoHeight) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SourceLeft( 
            /* [in] */ long pSourceLeft) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SourceLeft( 
            /* [retval][out] */ long *pSourceLeft) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SourceWidth( 
            /* [in] */ long pSourceWidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SourceWidth( 
            /* [retval][out] */ long *pSourceWidth) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SourceTop( 
            /* [in] */ long pSourceTop) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SourceTop( 
            /* [retval][out] */ long *pSourceTop) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SourceHeight( 
            /* [in] */ long pSourceHeight) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SourceHeight( 
            /* [retval][out] */ long *pSourceHeight) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DestinationLeft( 
            /* [in] */ long pDestinationLeft) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DestinationLeft( 
            /* [retval][out] */ long *pDestinationLeft) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DestinationWidth( 
            /* [in] */ long pDestinationWidth) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DestinationWidth( 
            /* [retval][out] */ long *pDestinationWidth) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DestinationTop( 
            /* [in] */ long pDestinationTop) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DestinationTop( 
            /* [retval][out] */ long *pDestinationTop) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DestinationHeight( 
            /* [in] */ long pDestinationHeight) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DestinationHeight( 
            /* [retval][out] */ long *pDestinationHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetSourcePosition( 
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetSourcePosition( 
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetDefaultSourcePosition( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetDestinationPosition( 
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDestinationPosition( 
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetDefaultDestinationPosition( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetVideoSize( 
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetVideoPaletteEntries( 
            /* [in] */ long StartIndex,
            /* [in] */ long Entries,
            /* [out] */ long *pRetrieved,
            /* [out] */ long *pPalette) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetCurrentImage( 
            /* [out][in] */ long *pBufferSize,
            /* [out] */ long *pDIBImage) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsUsingDefaultSource( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsUsingDefaultDestination( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBasicVideoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBasicVideo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBasicVideo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBasicVideo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBasicVideo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBasicVideo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBasicVideo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBasicVideo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgTimePerFrame )( 
            IBasicVideo * This,
            /* [retval][out] */ double *pAvgTimePerFrame);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitRate )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pBitRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitErrorRate )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pBitErrorRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VideoWidth )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pVideoWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VideoHeight )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pVideoHeight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceLeft )( 
            IBasicVideo * This,
            /* [in] */ long pSourceLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceLeft )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pSourceLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceWidth )( 
            IBasicVideo * This,
            /* [in] */ long pSourceWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceWidth )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pSourceWidth);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceTop )( 
            IBasicVideo * This,
            /* [in] */ long pSourceTop);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceTop )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pSourceTop);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceHeight )( 
            IBasicVideo * This,
            /* [in] */ long pSourceHeight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceHeight )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pSourceHeight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationLeft )( 
            IBasicVideo * This,
            /* [in] */ long pDestinationLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationLeft )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pDestinationLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationWidth )( 
            IBasicVideo * This,
            /* [in] */ long pDestinationWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationWidth )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pDestinationWidth);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationTop )( 
            IBasicVideo * This,
            /* [in] */ long pDestinationTop);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationTop )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pDestinationTop);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationHeight )( 
            IBasicVideo * This,
            /* [in] */ long pDestinationHeight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationHeight )( 
            IBasicVideo * This,
            /* [retval][out] */ long *pDestinationHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetSourcePosition )( 
            IBasicVideo * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )( 
            IBasicVideo * This,
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultSourcePosition )( 
            IBasicVideo * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDestinationPosition )( 
            IBasicVideo * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDestinationPosition )( 
            IBasicVideo * This,
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultDestinationPosition )( 
            IBasicVideo * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVideoSize )( 
            IBasicVideo * This,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVideoPaletteEntries )( 
            IBasicVideo * This,
            /* [in] */ long StartIndex,
            /* [in] */ long Entries,
            /* [out] */ long *pRetrieved,
            /* [out] */ long *pPalette);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )( 
            IBasicVideo * This,
            /* [out][in] */ long *pBufferSize,
            /* [out] */ long *pDIBImage);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultSource )( 
            IBasicVideo * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultDestination )( 
            IBasicVideo * This);
        
        END_INTERFACE
    } IBasicVideoVtbl;

    interface IBasicVideo
    {
        CONST_VTBL struct IBasicVideoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBasicVideo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBasicVideo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBasicVideo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBasicVideo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBasicVideo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBasicVideo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBasicVideo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBasicVideo_get_AvgTimePerFrame(This,pAvgTimePerFrame)	\
    (This)->lpVtbl -> get_AvgTimePerFrame(This,pAvgTimePerFrame)

#define IBasicVideo_get_BitRate(This,pBitRate)	\
    (This)->lpVtbl -> get_BitRate(This,pBitRate)

#define IBasicVideo_get_BitErrorRate(This,pBitErrorRate)	\
    (This)->lpVtbl -> get_BitErrorRate(This,pBitErrorRate)

#define IBasicVideo_get_VideoWidth(This,pVideoWidth)	\
    (This)->lpVtbl -> get_VideoWidth(This,pVideoWidth)

#define IBasicVideo_get_VideoHeight(This,pVideoHeight)	\
    (This)->lpVtbl -> get_VideoHeight(This,pVideoHeight)

#define IBasicVideo_put_SourceLeft(This,pSourceLeft)	\
    (This)->lpVtbl -> put_SourceLeft(This,pSourceLeft)

#define IBasicVideo_get_SourceLeft(This,pSourceLeft)	\
    (This)->lpVtbl -> get_SourceLeft(This,pSourceLeft)

#define IBasicVideo_put_SourceWidth(This,pSourceWidth)	\
    (This)->lpVtbl -> put_SourceWidth(This,pSourceWidth)

#define IBasicVideo_get_SourceWidth(This,pSourceWidth)	\
    (This)->lpVtbl -> get_SourceWidth(This,pSourceWidth)

#define IBasicVideo_put_SourceTop(This,pSourceTop)	\
    (This)->lpVtbl -> put_SourceTop(This,pSourceTop)

#define IBasicVideo_get_SourceTop(This,pSourceTop)	\
    (This)->lpVtbl -> get_SourceTop(This,pSourceTop)

#define IBasicVideo_put_SourceHeight(This,pSourceHeight)	\
    (This)->lpVtbl -> put_SourceHeight(This,pSourceHeight)

#define IBasicVideo_get_SourceHeight(This,pSourceHeight)	\
    (This)->lpVtbl -> get_SourceHeight(This,pSourceHeight)

#define IBasicVideo_put_DestinationLeft(This,pDestinationLeft)	\
    (This)->lpVtbl -> put_DestinationLeft(This,pDestinationLeft)

#define IBasicVideo_get_DestinationLeft(This,pDestinationLeft)	\
    (This)->lpVtbl -> get_DestinationLeft(This,pDestinationLeft)

#define IBasicVideo_put_DestinationWidth(This,pDestinationWidth)	\
    (This)->lpVtbl -> put_DestinationWidth(This,pDestinationWidth)

#define IBasicVideo_get_DestinationWidth(This,pDestinationWidth)	\
    (This)->lpVtbl -> get_DestinationWidth(This,pDestinationWidth)

#define IBasicVideo_put_DestinationTop(This,pDestinationTop)	\
    (This)->lpVtbl -> put_DestinationTop(This,pDestinationTop)

#define IBasicVideo_get_DestinationTop(This,pDestinationTop)	\
    (This)->lpVtbl -> get_DestinationTop(This,pDestinationTop)

#define IBasicVideo_put_DestinationHeight(This,pDestinationHeight)	\
    (This)->lpVtbl -> put_DestinationHeight(This,pDestinationHeight)

#define IBasicVideo_get_DestinationHeight(This,pDestinationHeight)	\
    (This)->lpVtbl -> get_DestinationHeight(This,pDestinationHeight)

#define IBasicVideo_SetSourcePosition(This,Left,Top,Width,Height)	\
    (This)->lpVtbl -> SetSourcePosition(This,Left,Top,Width,Height)

#define IBasicVideo_GetSourcePosition(This,pLeft,pTop,pWidth,pHeight)	\
    (This)->lpVtbl -> GetSourcePosition(This,pLeft,pTop,pWidth,pHeight)

#define IBasicVideo_SetDefaultSourcePosition(This)	\
    (This)->lpVtbl -> SetDefaultSourcePosition(This)

#define IBasicVideo_SetDestinationPosition(This,Left,Top,Width,Height)	\
    (This)->lpVtbl -> SetDestinationPosition(This,Left,Top,Width,Height)

#define IBasicVideo_GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight)	\
    (This)->lpVtbl -> GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight)

#define IBasicVideo_SetDefaultDestinationPosition(This)	\
    (This)->lpVtbl -> SetDefaultDestinationPosition(This)

#define IBasicVideo_GetVideoSize(This,pWidth,pHeight)	\
    (This)->lpVtbl -> GetVideoSize(This,pWidth,pHeight)

#define IBasicVideo_GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette)	\
    (This)->lpVtbl -> GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette)

#define IBasicVideo_GetCurrentImage(This,pBufferSize,pDIBImage)	\
    (This)->lpVtbl -> GetCurrentImage(This,pBufferSize,pDIBImage)

#define IBasicVideo_IsUsingDefaultSource(This)	\
    (This)->lpVtbl -> IsUsingDefaultSource(This)

#define IBasicVideo_IsUsingDefaultDestination(This)	\
    (This)->lpVtbl -> IsUsingDefaultDestination(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_AvgTimePerFrame_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ double *pAvgTimePerFrame);


void __RPC_STUB IBasicVideo_get_AvgTimePerFrame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_BitRate_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pBitRate);


void __RPC_STUB IBasicVideo_get_BitRate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_BitErrorRate_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pBitErrorRate);


void __RPC_STUB IBasicVideo_get_BitErrorRate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_VideoWidth_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pVideoWidth);


void __RPC_STUB IBasicVideo_get_VideoWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_VideoHeight_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pVideoHeight);


void __RPC_STUB IBasicVideo_get_VideoHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_SourceLeft_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pSourceLeft);


void __RPC_STUB IBasicVideo_put_SourceLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_SourceLeft_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pSourceLeft);


void __RPC_STUB IBasicVideo_get_SourceLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_SourceWidth_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pSourceWidth);


void __RPC_STUB IBasicVideo_put_SourceWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_SourceWidth_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pSourceWidth);


void __RPC_STUB IBasicVideo_get_SourceWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_SourceTop_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pSourceTop);


void __RPC_STUB IBasicVideo_put_SourceTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_SourceTop_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pSourceTop);


void __RPC_STUB IBasicVideo_get_SourceTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_SourceHeight_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pSourceHeight);


void __RPC_STUB IBasicVideo_put_SourceHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_SourceHeight_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pSourceHeight);


void __RPC_STUB IBasicVideo_get_SourceHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_DestinationLeft_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pDestinationLeft);


void __RPC_STUB IBasicVideo_put_DestinationLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_DestinationLeft_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pDestinationLeft);


void __RPC_STUB IBasicVideo_get_DestinationLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_DestinationWidth_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pDestinationWidth);


void __RPC_STUB IBasicVideo_put_DestinationWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_DestinationWidth_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pDestinationWidth);


void __RPC_STUB IBasicVideo_get_DestinationWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_DestinationTop_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pDestinationTop);


void __RPC_STUB IBasicVideo_put_DestinationTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_DestinationTop_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pDestinationTop);


void __RPC_STUB IBasicVideo_get_DestinationTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_put_DestinationHeight_Proxy( 
    IBasicVideo * This,
    /* [in] */ long pDestinationHeight);


void __RPC_STUB IBasicVideo_put_DestinationHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_get_DestinationHeight_Proxy( 
    IBasicVideo * This,
    /* [retval][out] */ long *pDestinationHeight);


void __RPC_STUB IBasicVideo_get_DestinationHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_SetSourcePosition_Proxy( 
    IBasicVideo * This,
    /* [in] */ long Left,
    /* [in] */ long Top,
    /* [in] */ long Width,
    /* [in] */ long Height);


void __RPC_STUB IBasicVideo_SetSourcePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_GetSourcePosition_Proxy( 
    IBasicVideo * This,
    /* [out] */ long *pLeft,
    /* [out] */ long *pTop,
    /* [out] */ long *pWidth,
    /* [out] */ long *pHeight);


void __RPC_STUB IBasicVideo_GetSourcePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_SetDefaultSourcePosition_Proxy( 
    IBasicVideo * This);


void __RPC_STUB IBasicVideo_SetDefaultSourcePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_SetDestinationPosition_Proxy( 
    IBasicVideo * This,
    /* [in] */ long Left,
    /* [in] */ long Top,
    /* [in] */ long Width,
    /* [in] */ long Height);


void __RPC_STUB IBasicVideo_SetDestinationPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_GetDestinationPosition_Proxy( 
    IBasicVideo * This,
    /* [out] */ long *pLeft,
    /* [out] */ long *pTop,
    /* [out] */ long *pWidth,
    /* [out] */ long *pHeight);


void __RPC_STUB IBasicVideo_GetDestinationPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_SetDefaultDestinationPosition_Proxy( 
    IBasicVideo * This);


void __RPC_STUB IBasicVideo_SetDefaultDestinationPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_GetVideoSize_Proxy( 
    IBasicVideo * This,
    /* [out] */ long *pWidth,
    /* [out] */ long *pHeight);


void __RPC_STUB IBasicVideo_GetVideoSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_GetVideoPaletteEntries_Proxy( 
    IBasicVideo * This,
    /* [in] */ long StartIndex,
    /* [in] */ long Entries,
    /* [out] */ long *pRetrieved,
    /* [out] */ long *pPalette);


void __RPC_STUB IBasicVideo_GetVideoPaletteEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_GetCurrentImage_Proxy( 
    IBasicVideo * This,
    /* [out][in] */ long *pBufferSize,
    /* [out] */ long *pDIBImage);


void __RPC_STUB IBasicVideo_GetCurrentImage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_IsUsingDefaultSource_Proxy( 
    IBasicVideo * This);


void __RPC_STUB IBasicVideo_IsUsingDefaultSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IBasicVideo_IsUsingDefaultDestination_Proxy( 
    IBasicVideo * This);


void __RPC_STUB IBasicVideo_IsUsingDefaultDestination_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBasicVideo_INTERFACE_DEFINED__ */


#ifndef __IBasicVideo2_INTERFACE_DEFINED__
#define __IBasicVideo2_INTERFACE_DEFINED__

/* interface IBasicVideo2 */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IBasicVideo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("329BB360-F6EA-11D1-9038-00A0C9697298")
    IBasicVideo2 : public IBasicVideo
    {
    public:
        virtual HRESULT __stdcall GetPreferredAspectRatio( 
            /* [out] */ long *plAspectX,
            /* [out] */ long *plAspectY) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBasicVideo2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBasicVideo2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBasicVideo2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBasicVideo2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBasicVideo2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBasicVideo2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBasicVideo2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBasicVideo2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AvgTimePerFrame )( 
            IBasicVideo2 * This,
            /* [retval][out] */ double *pAvgTimePerFrame);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitRate )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pBitRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitErrorRate )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pBitErrorRate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VideoWidth )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pVideoWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VideoHeight )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pVideoHeight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceLeft )( 
            IBasicVideo2 * This,
            /* [in] */ long pSourceLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceLeft )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pSourceLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceWidth )( 
            IBasicVideo2 * This,
            /* [in] */ long pSourceWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceWidth )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pSourceWidth);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceTop )( 
            IBasicVideo2 * This,
            /* [in] */ long pSourceTop);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceTop )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pSourceTop);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SourceHeight )( 
            IBasicVideo2 * This,
            /* [in] */ long pSourceHeight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourceHeight )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pSourceHeight);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationLeft )( 
            IBasicVideo2 * This,
            /* [in] */ long pDestinationLeft);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationLeft )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pDestinationLeft);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationWidth )( 
            IBasicVideo2 * This,
            /* [in] */ long pDestinationWidth);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationWidth )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pDestinationWidth);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationTop )( 
            IBasicVideo2 * This,
            /* [in] */ long pDestinationTop);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationTop )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pDestinationTop);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationHeight )( 
            IBasicVideo2 * This,
            /* [in] */ long pDestinationHeight);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationHeight )( 
            IBasicVideo2 * This,
            /* [retval][out] */ long *pDestinationHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetSourcePosition )( 
            IBasicVideo2 * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )( 
            IBasicVideo2 * This,
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultSourcePosition )( 
            IBasicVideo2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDestinationPosition )( 
            IBasicVideo2 * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Width,
            /* [in] */ long Height);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDestinationPosition )( 
            IBasicVideo2 * This,
            /* [out] */ long *pLeft,
            /* [out] */ long *pTop,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultDestinationPosition )( 
            IBasicVideo2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVideoSize )( 
            IBasicVideo2 * This,
            /* [out] */ long *pWidth,
            /* [out] */ long *pHeight);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVideoPaletteEntries )( 
            IBasicVideo2 * This,
            /* [in] */ long StartIndex,
            /* [in] */ long Entries,
            /* [out] */ long *pRetrieved,
            /* [out] */ long *pPalette);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )( 
            IBasicVideo2 * This,
            /* [out][in] */ long *pBufferSize,
            /* [out] */ long *pDIBImage);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultSource )( 
            IBasicVideo2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultDestination )( 
            IBasicVideo2 * This);
        
        HRESULT ( __stdcall *GetPreferredAspectRatio )( 
            IBasicVideo2 * This,
            /* [out] */ long *plAspectX,
            /* [out] */ long *plAspectY);
        
        END_INTERFACE
    } IBasicVideo2Vtbl;

    interface IBasicVideo2
    {
        CONST_VTBL struct IBasicVideo2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBasicVideo2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBasicVideo2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBasicVideo2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBasicVideo2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBasicVideo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBasicVideo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBasicVideo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBasicVideo2_get_AvgTimePerFrame(This,pAvgTimePerFrame)	\
    (This)->lpVtbl -> get_AvgTimePerFrame(This,pAvgTimePerFrame)

#define IBasicVideo2_get_BitRate(This,pBitRate)	\
    (This)->lpVtbl -> get_BitRate(This,pBitRate)

#define IBasicVideo2_get_BitErrorRate(This,pBitErrorRate)	\
    (This)->lpVtbl -> get_BitErrorRate(This,pBitErrorRate)

#define IBasicVideo2_get_VideoWidth(This,pVideoWidth)	\
    (This)->lpVtbl -> get_VideoWidth(This,pVideoWidth)

#define IBasicVideo2_get_VideoHeight(This,pVideoHeight)	\
    (This)->lpVtbl -> get_VideoHeight(This,pVideoHeight)

#define IBasicVideo2_put_SourceLeft(This,pSourceLeft)	\
    (This)->lpVtbl -> put_SourceLeft(This,pSourceLeft)

#define IBasicVideo2_get_SourceLeft(This,pSourceLeft)	\
    (This)->lpVtbl -> get_SourceLeft(This,pSourceLeft)

#define IBasicVideo2_put_SourceWidth(This,pSourceWidth)	\
    (This)->lpVtbl -> put_SourceWidth(This,pSourceWidth)

#define IBasicVideo2_get_SourceWidth(This,pSourceWidth)	\
    (This)->lpVtbl -> get_SourceWidth(This,pSourceWidth)

#define IBasicVideo2_put_SourceTop(This,pSourceTop)	\
    (This)->lpVtbl -> put_SourceTop(This,pSourceTop)

#define IBasicVideo2_get_SourceTop(This,pSourceTop)	\
    (This)->lpVtbl -> get_SourceTop(This,pSourceTop)

#define IBasicVideo2_put_SourceHeight(This,pSourceHeight)	\
    (This)->lpVtbl -> put_SourceHeight(This,pSourceHeight)

#define IBasicVideo2_get_SourceHeight(This,pSourceHeight)	\
    (This)->lpVtbl -> get_SourceHeight(This,pSourceHeight)

#define IBasicVideo2_put_DestinationLeft(This,pDestinationLeft)	\
    (This)->lpVtbl -> put_DestinationLeft(This,pDestinationLeft)

#define IBasicVideo2_get_DestinationLeft(This,pDestinationLeft)	\
    (This)->lpVtbl -> get_DestinationLeft(This,pDestinationLeft)

#define IBasicVideo2_put_DestinationWidth(This,pDestinationWidth)	\
    (This)->lpVtbl -> put_DestinationWidth(This,pDestinationWidth)

#define IBasicVideo2_get_DestinationWidth(This,pDestinationWidth)	\
    (This)->lpVtbl -> get_DestinationWidth(This,pDestinationWidth)

#define IBasicVideo2_put_DestinationTop(This,pDestinationTop)	\
    (This)->lpVtbl -> put_DestinationTop(This,pDestinationTop)

#define IBasicVideo2_get_DestinationTop(This,pDestinationTop)	\
    (This)->lpVtbl -> get_DestinationTop(This,pDestinationTop)

#define IBasicVideo2_put_DestinationHeight(This,pDestinationHeight)	\
    (This)->lpVtbl -> put_DestinationHeight(This,pDestinationHeight)

#define IBasicVideo2_get_DestinationHeight(This,pDestinationHeight)	\
    (This)->lpVtbl -> get_DestinationHeight(This,pDestinationHeight)

#define IBasicVideo2_SetSourcePosition(This,Left,Top,Width,Height)	\
    (This)->lpVtbl -> SetSourcePosition(This,Left,Top,Width,Height)

#define IBasicVideo2_GetSourcePosition(This,pLeft,pTop,pWidth,pHeight)	\
    (This)->lpVtbl -> GetSourcePosition(This,pLeft,pTop,pWidth,pHeight)

#define IBasicVideo2_SetDefaultSourcePosition(This)	\
    (This)->lpVtbl -> SetDefaultSourcePosition(This)

#define IBasicVideo2_SetDestinationPosition(This,Left,Top,Width,Height)	\
    (This)->lpVtbl -> SetDestinationPosition(This,Left,Top,Width,Height)

#define IBasicVideo2_GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight)	\
    (This)->lpVtbl -> GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight)

#define IBasicVideo2_SetDefaultDestinationPosition(This)	\
    (This)->lpVtbl -> SetDefaultDestinationPosition(This)

#define IBasicVideo2_GetVideoSize(This,pWidth,pHeight)	\
    (This)->lpVtbl -> GetVideoSize(This,pWidth,pHeight)

#define IBasicVideo2_GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette)	\
    (This)->lpVtbl -> GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette)

#define IBasicVideo2_GetCurrentImage(This,pBufferSize,pDIBImage)	\
    (This)->lpVtbl -> GetCurrentImage(This,pBufferSize,pDIBImage)

#define IBasicVideo2_IsUsingDefaultSource(This)	\
    (This)->lpVtbl -> IsUsingDefaultSource(This)

#define IBasicVideo2_IsUsingDefaultDestination(This)	\
    (This)->lpVtbl -> IsUsingDefaultDestination(This)


#define IBasicVideo2_GetPreferredAspectRatio(This,plAspectX,plAspectY)	\
    (This)->lpVtbl -> GetPreferredAspectRatio(This,plAspectX,plAspectY)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT __stdcall IBasicVideo2_GetPreferredAspectRatio_Proxy( 
    IBasicVideo2 * This,
    /* [out] */ long *plAspectX,
    /* [out] */ long *plAspectY);


void __RPC_STUB IBasicVideo2_GetPreferredAspectRatio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBasicVideo2_INTERFACE_DEFINED__ */


#ifndef __IDeferredCommand_INTERFACE_DEFINED__
#define __IDeferredCommand_INTERFACE_DEFINED__

/* interface IDeferredCommand */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IDeferredCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B8-0AD4-11CE-B03A-0020AF0BA770")
    IDeferredCommand : public IUnknown
    {
    public:
        virtual HRESULT __stdcall Cancel( void) = 0;
        
        virtual HRESULT __stdcall Confidence( 
            /* [out] */ long *pConfidence) = 0;
        
        virtual HRESULT __stdcall Postpone( 
            /* [in] */ double newtime) = 0;
        
        virtual HRESULT __stdcall GetHResult( 
            /* [out] */ HRESULT *phrResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDeferredCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeferredCommand * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeferredCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeferredCommand * This);
        
        HRESULT ( __stdcall *Cancel )( 
            IDeferredCommand * This);
        
        HRESULT ( __stdcall *Confidence )( 
            IDeferredCommand * This,
            /* [out] */ long *pConfidence);
        
        HRESULT ( __stdcall *Postpone )( 
            IDeferredCommand * This,
            /* [in] */ double newtime);
        
        HRESULT ( __stdcall *GetHResult )( 
            IDeferredCommand * This,
            /* [out] */ HRESULT *phrResult);
        
        END_INTERFACE
    } IDeferredCommandVtbl;

    interface IDeferredCommand
    {
        CONST_VTBL struct IDeferredCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeferredCommand_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDeferredCommand_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDeferredCommand_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDeferredCommand_Cancel(This)	\
    (This)->lpVtbl -> Cancel(This)

#define IDeferredCommand_Confidence(This,pConfidence)	\
    (This)->lpVtbl -> Confidence(This,pConfidence)

#define IDeferredCommand_Postpone(This,newtime)	\
    (This)->lpVtbl -> Postpone(This,newtime)

#define IDeferredCommand_GetHResult(This,phrResult)	\
    (This)->lpVtbl -> GetHResult(This,phrResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT __stdcall IDeferredCommand_Cancel_Proxy( 
    IDeferredCommand * This);


void __RPC_STUB IDeferredCommand_Cancel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IDeferredCommand_Confidence_Proxy( 
    IDeferredCommand * This,
    /* [out] */ long *pConfidence);


void __RPC_STUB IDeferredCommand_Confidence_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IDeferredCommand_Postpone_Proxy( 
    IDeferredCommand * This,
    /* [in] */ double newtime);


void __RPC_STUB IDeferredCommand_Postpone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IDeferredCommand_GetHResult_Proxy( 
    IDeferredCommand * This,
    /* [out] */ HRESULT *phrResult);


void __RPC_STUB IDeferredCommand_GetHResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDeferredCommand_INTERFACE_DEFINED__ */


#ifndef __IQueueCommand_INTERFACE_DEFINED__
#define __IQueueCommand_INTERFACE_DEFINED__

/* interface IQueueCommand */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IQueueCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868B7-0AD4-11CE-B03A-0020AF0BA770")
    IQueueCommand : public IUnknown
    {
    public:
        virtual HRESULT __stdcall InvokeAtStreamTime( 
            /* [out] */ IDeferredCommand **pCmd,
            /* [in] */ double time,
            /* [in] */ GUID *iid,
            /* [in] */ long dispidMethod,
            /* [in] */ short wFlags,
            /* [in] */ long cArgs,
            /* [in] */ VARIANT *pDispParams,
            /* [out][in] */ VARIANT *pvarResult,
            /* [out] */ short *puArgErr) = 0;
        
        virtual HRESULT __stdcall InvokeAtPresentationTime( 
            /* [out] */ IDeferredCommand **pCmd,
            /* [in] */ double time,
            /* [in] */ GUID *iid,
            /* [in] */ long dispidMethod,
            /* [in] */ short wFlags,
            /* [in] */ long cArgs,
            /* [in] */ VARIANT *pDispParams,
            /* [out][in] */ VARIANT *pvarResult,
            /* [out] */ short *puArgErr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQueueCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueueCommand * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueueCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueueCommand * This);
        
        HRESULT ( __stdcall *InvokeAtStreamTime )( 
            IQueueCommand * This,
            /* [out] */ IDeferredCommand **pCmd,
            /* [in] */ double time,
            /* [in] */ GUID *iid,
            /* [in] */ long dispidMethod,
            /* [in] */ short wFlags,
            /* [in] */ long cArgs,
            /* [in] */ VARIANT *pDispParams,
            /* [out][in] */ VARIANT *pvarResult,
            /* [out] */ short *puArgErr);
        
        HRESULT ( __stdcall *InvokeAtPresentationTime )( 
            IQueueCommand * This,
            /* [out] */ IDeferredCommand **pCmd,
            /* [in] */ double time,
            /* [in] */ GUID *iid,
            /* [in] */ long dispidMethod,
            /* [in] */ short wFlags,
            /* [in] */ long cArgs,
            /* [in] */ VARIANT *pDispParams,
            /* [out][in] */ VARIANT *pvarResult,
            /* [out] */ short *puArgErr);
        
        END_INTERFACE
    } IQueueCommandVtbl;

    interface IQueueCommand
    {
        CONST_VTBL struct IQueueCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueueCommand_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IQueueCommand_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IQueueCommand_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IQueueCommand_InvokeAtStreamTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr)	\
    (This)->lpVtbl -> InvokeAtStreamTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr)

#define IQueueCommand_InvokeAtPresentationTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr)	\
    (This)->lpVtbl -> InvokeAtPresentationTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT __stdcall IQueueCommand_InvokeAtStreamTime_Proxy( 
    IQueueCommand * This,
    /* [out] */ IDeferredCommand **pCmd,
    /* [in] */ double time,
    /* [in] */ GUID *iid,
    /* [in] */ long dispidMethod,
    /* [in] */ short wFlags,
    /* [in] */ long cArgs,
    /* [in] */ VARIANT *pDispParams,
    /* [out][in] */ VARIANT *pvarResult,
    /* [out] */ short *puArgErr);


void __RPC_STUB IQueueCommand_InvokeAtStreamTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IQueueCommand_InvokeAtPresentationTime_Proxy( 
    IQueueCommand * This,
    /* [out] */ IDeferredCommand **pCmd,
    /* [in] */ double time,
    /* [in] */ GUID *iid,
    /* [in] */ long dispidMethod,
    /* [in] */ short wFlags,
    /* [in] */ long cArgs,
    /* [in] */ VARIANT *pDispParams,
    /* [out][in] */ VARIANT *pvarResult,
    /* [out] */ short *puArgErr);


void __RPC_STUB IQueueCommand_InvokeAtPresentationTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IQueueCommand_INTERFACE_DEFINED__ */


#ifndef __IFilterInfo_INTERFACE_DEFINED__
#define __IFilterInfo_INTERFACE_DEFINED__

/* interface IFilterInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IFilterInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868BA-0AD4-11CE-B03A-0020AF0BA770")
    IFilterInfo : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindPin( 
            /* [in] */ BSTR strPinID,
            /* [out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *strName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VendorInfo( 
            /* [retval][out] */ BSTR *strVendorInfo) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Filter( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Pins( 
            /* [retval][out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsFileSource( 
            /* [retval][out] */ long *pbIsSource) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Filename( 
            /* [retval][out] */ BSTR *pstrFilename) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Filename( 
            /* [in] */ BSTR pstrFilename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFilterInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilterInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilterInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilterInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFilterInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFilterInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFilterInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFilterInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindPin )( 
            IFilterInfo * This,
            /* [in] */ BSTR strPinID,
            /* [out] */ IDispatch **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IFilterInfo * This,
            /* [retval][out] */ BSTR *strName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VendorInfo )( 
            IFilterInfo * This,
            /* [retval][out] */ BSTR *strVendorInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Filter )( 
            IFilterInfo * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Pins )( 
            IFilterInfo * This,
            /* [retval][out] */ IDispatch **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsFileSource )( 
            IFilterInfo * This,
            /* [retval][out] */ long *pbIsSource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Filename )( 
            IFilterInfo * This,
            /* [retval][out] */ BSTR *pstrFilename);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Filename )( 
            IFilterInfo * This,
            /* [in] */ BSTR pstrFilename);
        
        END_INTERFACE
    } IFilterInfoVtbl;

    interface IFilterInfo
    {
        CONST_VTBL struct IFilterInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilterInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFilterInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFilterInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFilterInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFilterInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFilterInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFilterInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFilterInfo_FindPin(This,strPinID,ppUnk)	\
    (This)->lpVtbl -> FindPin(This,strPinID,ppUnk)

#define IFilterInfo_get_Name(This,strName)	\
    (This)->lpVtbl -> get_Name(This,strName)

#define IFilterInfo_get_VendorInfo(This,strVendorInfo)	\
    (This)->lpVtbl -> get_VendorInfo(This,strVendorInfo)

#define IFilterInfo_get_Filter(This,ppUnk)	\
    (This)->lpVtbl -> get_Filter(This,ppUnk)

#define IFilterInfo_get_Pins(This,ppUnk)	\
    (This)->lpVtbl -> get_Pins(This,ppUnk)

#define IFilterInfo_get_IsFileSource(This,pbIsSource)	\
    (This)->lpVtbl -> get_IsFileSource(This,pbIsSource)

#define IFilterInfo_get_Filename(This,pstrFilename)	\
    (This)->lpVtbl -> get_Filename(This,pstrFilename)

#define IFilterInfo_put_Filename(This,pstrFilename)	\
    (This)->lpVtbl -> put_Filename(This,pstrFilename)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_FindPin_Proxy( 
    IFilterInfo * This,
    /* [in] */ BSTR strPinID,
    /* [out] */ IDispatch **ppUnk);


void __RPC_STUB IFilterInfo_FindPin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_get_Name_Proxy( 
    IFilterInfo * This,
    /* [retval][out] */ BSTR *strName);


void __RPC_STUB IFilterInfo_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_get_VendorInfo_Proxy( 
    IFilterInfo * This,
    /* [retval][out] */ BSTR *strVendorInfo);


void __RPC_STUB IFilterInfo_get_VendorInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_get_Filter_Proxy( 
    IFilterInfo * This,
    /* [retval][out] */ IUnknown **ppUnk);


void __RPC_STUB IFilterInfo_get_Filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_get_Pins_Proxy( 
    IFilterInfo * This,
    /* [retval][out] */ IDispatch **ppUnk);


void __RPC_STUB IFilterInfo_get_Pins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_get_IsFileSource_Proxy( 
    IFilterInfo * This,
    /* [retval][out] */ long *pbIsSource);


void __RPC_STUB IFilterInfo_get_IsFileSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_get_Filename_Proxy( 
    IFilterInfo * This,
    /* [retval][out] */ BSTR *pstrFilename);


void __RPC_STUB IFilterInfo_get_Filename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE IFilterInfo_put_Filename_Proxy( 
    IFilterInfo * This,
    /* [in] */ BSTR pstrFilename);


void __RPC_STUB IFilterInfo_put_Filename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFilterInfo_INTERFACE_DEFINED__ */


#ifndef __IRegFilterInfo_INTERFACE_DEFINED__
#define __IRegFilterInfo_INTERFACE_DEFINED__

/* interface IRegFilterInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IRegFilterInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868BB-0AD4-11CE-B03A-0020AF0BA770")
    IRegFilterInfo : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *strName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Filter( 
            /* [out] */ IDispatch **ppUnk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRegFilterInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRegFilterInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRegFilterInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRegFilterInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRegFilterInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRegFilterInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRegFilterInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRegFilterInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IRegFilterInfo * This,
            /* [retval][out] */ BSTR *strName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Filter )( 
            IRegFilterInfo * This,
            /* [out] */ IDispatch **ppUnk);
        
        END_INTERFACE
    } IRegFilterInfoVtbl;

    interface IRegFilterInfo
    {
        CONST_VTBL struct IRegFilterInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRegFilterInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRegFilterInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRegFilterInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRegFilterInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRegFilterInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRegFilterInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRegFilterInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRegFilterInfo_get_Name(This,strName)	\
    (This)->lpVtbl -> get_Name(This,strName)

#define IRegFilterInfo_Filter(This,ppUnk)	\
    (This)->lpVtbl -> Filter(This,ppUnk)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IRegFilterInfo_get_Name_Proxy( 
    IRegFilterInfo * This,
    /* [retval][out] */ BSTR *strName);


void __RPC_STUB IRegFilterInfo_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IRegFilterInfo_Filter_Proxy( 
    IRegFilterInfo * This,
    /* [out] */ IDispatch **ppUnk);


void __RPC_STUB IRegFilterInfo_Filter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRegFilterInfo_INTERFACE_DEFINED__ */


#ifndef __IMediaTypeInfo_INTERFACE_DEFINED__
#define __IMediaTypeInfo_INTERFACE_DEFINED__

/* interface IMediaTypeInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMediaTypeInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868BC-0AD4-11CE-B03A-0020AF0BA770")
    IMediaTypeInfo : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *strType) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Subtype( 
            /* [retval][out] */ BSTR *strType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMediaTypeInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaTypeInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaTypeInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaTypeInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaTypeInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaTypeInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaTypeInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaTypeInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMediaTypeInfo * This,
            /* [retval][out] */ BSTR *strType);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Subtype )( 
            IMediaTypeInfo * This,
            /* [retval][out] */ BSTR *strType);
        
        END_INTERFACE
    } IMediaTypeInfoVtbl;

    interface IMediaTypeInfo
    {
        CONST_VTBL struct IMediaTypeInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaTypeInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMediaTypeInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMediaTypeInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMediaTypeInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMediaTypeInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMediaTypeInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMediaTypeInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMediaTypeInfo_get_Type(This,strType)	\
    (This)->lpVtbl -> get_Type(This,strType)

#define IMediaTypeInfo_get_Subtype(This,strType)	\
    (This)->lpVtbl -> get_Subtype(This,strType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaTypeInfo_get_Type_Proxy( 
    IMediaTypeInfo * This,
    /* [retval][out] */ BSTR *strType);


void __RPC_STUB IMediaTypeInfo_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IMediaTypeInfo_get_Subtype_Proxy( 
    IMediaTypeInfo * This,
    /* [retval][out] */ BSTR *strType);


void __RPC_STUB IMediaTypeInfo_get_Subtype_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMediaTypeInfo_INTERFACE_DEFINED__ */


#ifndef __IPinInfo_INTERFACE_DEFINED__
#define __IPinInfo_INTERFACE_DEFINED__

/* interface IPinInfo */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPinInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A868BD-0AD4-11CE-B03A-0020AF0BA770")
    IPinInfo : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Pin( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectedTo( 
            /* [retval][out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ConnectionMediaType( 
            /* [retval][out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FilterInfo( 
            /* [retval][out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ long *ppDirection) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PinID( 
            /* [retval][out] */ BSTR *strPinID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MediaTypes( 
            /* [retval][out] */ IDispatch **ppUnk) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ IUnknown *pPin) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ConnectDirect( 
            /* [in] */ IUnknown *pPin) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ConnectWithType( 
            /* [in] */ IUnknown *pPin,
            /* [in] */ IDispatch *pMediaType) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Render( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPinInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPinInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPinInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPinInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPinInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPinInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPinInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPinInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Pin )( 
            IPinInfo * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedTo )( 
            IPinInfo * This,
            /* [retval][out] */ IDispatch **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionMediaType )( 
            IPinInfo * This,
            /* [retval][out] */ IDispatch **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FilterInfo )( 
            IPinInfo * This,
            /* [retval][out] */ IDispatch **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IPinInfo * This,
            /* [retval][out] */ BSTR *ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            IPinInfo * This,
            /* [retval][out] */ long *ppDirection);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PinID )( 
            IPinInfo * This,
            /* [retval][out] */ BSTR *strPinID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MediaTypes )( 
            IPinInfo * This,
            /* [retval][out] */ IDispatch **ppUnk);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IPinInfo * This,
            /* [in] */ IUnknown *pPin);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ConnectDirect )( 
            IPinInfo * This,
            /* [in] */ IUnknown *pPin);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ConnectWithType )( 
            IPinInfo * This,
            /* [in] */ IUnknown *pPin,
            /* [in] */ IDispatch *pMediaType);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IPinInfo * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Render )( 
            IPinInfo * This);
        
        END_INTERFACE
    } IPinInfoVtbl;

    interface IPinInfo
    {
        CONST_VTBL struct IPinInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPinInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPinInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPinInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPinInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPinInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPinInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPinInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPinInfo_get_Pin(This,ppUnk)	\
    (This)->lpVtbl -> get_Pin(This,ppUnk)

#define IPinInfo_get_ConnectedTo(This,ppUnk)	\
    (This)->lpVtbl -> get_ConnectedTo(This,ppUnk)

#define IPinInfo_get_ConnectionMediaType(This,ppUnk)	\
    (This)->lpVtbl -> get_ConnectionMediaType(This,ppUnk)

#define IPinInfo_get_FilterInfo(This,ppUnk)	\
    (This)->lpVtbl -> get_FilterInfo(This,ppUnk)

#define IPinInfo_get_Name(This,ppUnk)	\
    (This)->lpVtbl -> get_Name(This,ppUnk)

#define IPinInfo_get_Direction(This,ppDirection)	\
    (This)->lpVtbl -> get_Direction(This,ppDirection)

#define IPinInfo_get_PinID(This,strPinID)	\
    (This)->lpVtbl -> get_PinID(This,strPinID)

#define IPinInfo_get_MediaTypes(This,ppUnk)	\
    (This)->lpVtbl -> get_MediaTypes(This,ppUnk)

#define IPinInfo_Connect(This,pPin)	\
    (This)->lpVtbl -> Connect(This,pPin)

#define IPinInfo_ConnectDirect(This,pPin)	\
    (This)->lpVtbl -> ConnectDirect(This,pPin)

#define IPinInfo_ConnectWithType(This,pPin,pMediaType)	\
    (This)->lpVtbl -> ConnectWithType(This,pPin,pMediaType)

#define IPinInfo_Disconnect(This)	\
    (This)->lpVtbl -> Disconnect(This)

#define IPinInfo_Render(This)	\
    (This)->lpVtbl -> Render(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_Pin_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ IUnknown **ppUnk);


void __RPC_STUB IPinInfo_get_Pin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_ConnectedTo_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ IDispatch **ppUnk);


void __RPC_STUB IPinInfo_get_ConnectedTo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_ConnectionMediaType_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ IDispatch **ppUnk);


void __RPC_STUB IPinInfo_get_ConnectionMediaType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_FilterInfo_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ IDispatch **ppUnk);


void __RPC_STUB IPinInfo_get_FilterInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_Name_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ BSTR *ppUnk);


void __RPC_STUB IPinInfo_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_Direction_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ long *ppDirection);


void __RPC_STUB IPinInfo_get_Direction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_PinID_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ BSTR *strPinID);


void __RPC_STUB IPinInfo_get_PinID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IPinInfo_get_MediaTypes_Proxy( 
    IPinInfo * This,
    /* [retval][out] */ IDispatch **ppUnk);


void __RPC_STUB IPinInfo_get_MediaTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IPinInfo_Connect_Proxy( 
    IPinInfo * This,
    /* [in] */ IUnknown *pPin);


void __RPC_STUB IPinInfo_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IPinInfo_ConnectDirect_Proxy( 
    IPinInfo * This,
    /* [in] */ IUnknown *pPin);


void __RPC_STUB IPinInfo_ConnectDirect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IPinInfo_ConnectWithType_Proxy( 
    IPinInfo * This,
    /* [in] */ IUnknown *pPin,
    /* [in] */ IDispatch *pMediaType);


void __RPC_STUB IPinInfo_ConnectWithType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IPinInfo_Disconnect_Proxy( 
    IPinInfo * This);


void __RPC_STUB IPinInfo_Disconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IPinInfo_Render_Proxy( 
    IPinInfo * This);


void __RPC_STUB IPinInfo_Render_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPinInfo_INTERFACE_DEFINED__ */


#ifndef __IAMStats_INTERFACE_DEFINED__
#define __IAMStats_INTERFACE_DEFINED__

/* interface IAMStats */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAMStats;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC9BCF80-DCD2-11D2-ABF6-00A0C905F375")
    IAMStats : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetValueByIndex( 
            /* [in] */ long lIndex,
            /* [out] */ BSTR *szName,
            /* [out] */ long *lCount,
            /* [out] */ double *dLast,
            /* [out] */ double *dAverage,
            /* [out] */ double *dStdDev,
            /* [out] */ double *dMin,
            /* [out] */ double *dMax) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetValueByName( 
            /* [in] */ BSTR szName,
            /* [out] */ long *lIndex,
            /* [out] */ long *lCount,
            /* [out] */ double *dLast,
            /* [out] */ double *dAverage,
            /* [out] */ double *dStdDev,
            /* [out] */ double *dMin,
            /* [out] */ double *dMax) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetIndex( 
            /* [in] */ BSTR szName,
            /* [in] */ long lCreate,
            /* [out] */ long *plIndex) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddValue( 
            /* [in] */ long lIndex,
            /* [in] */ double dValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAMStatsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAMStats * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAMStats * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAMStats * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAMStats * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAMStats * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAMStats * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAMStats * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAMStats * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAMStats * This,
            /* [retval][out] */ long *plCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetValueByIndex )( 
            IAMStats * This,
            /* [in] */ long lIndex,
            /* [out] */ BSTR *szName,
            /* [out] */ long *lCount,
            /* [out] */ double *dLast,
            /* [out] */ double *dAverage,
            /* [out] */ double *dStdDev,
            /* [out] */ double *dMin,
            /* [out] */ double *dMax);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetValueByName )( 
            IAMStats * This,
            /* [in] */ BSTR szName,
            /* [out] */ long *lIndex,
            /* [out] */ long *lCount,
            /* [out] */ double *dLast,
            /* [out] */ double *dAverage,
            /* [out] */ double *dStdDev,
            /* [out] */ double *dMin,
            /* [out] */ double *dMax);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetIndex )( 
            IAMStats * This,
            /* [in] */ BSTR szName,
            /* [in] */ long lCreate,
            /* [out] */ long *plIndex);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddValue )( 
            IAMStats * This,
            /* [in] */ long lIndex,
            /* [in] */ double dValue);
        
        END_INTERFACE
    } IAMStatsVtbl;

    interface IAMStats
    {
        CONST_VTBL struct IAMStatsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAMStats_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAMStats_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAMStats_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAMStats_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAMStats_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAMStats_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAMStats_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAMStats_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IAMStats_get_Count(This,plCount)	\
    (This)->lpVtbl -> get_Count(This,plCount)

#define IAMStats_GetValueByIndex(This,lIndex,szName,lCount,dLast,dAverage,dStdDev,dMin,dMax)	\
    (This)->lpVtbl -> GetValueByIndex(This,lIndex,szName,lCount,dLast,dAverage,dStdDev,dMin,dMax)

#define IAMStats_GetValueByName(This,szName,lIndex,lCount,dLast,dAverage,dStdDev,dMin,dMax)	\
    (This)->lpVtbl -> GetValueByName(This,szName,lIndex,lCount,dLast,dAverage,dStdDev,dMin,dMax)

#define IAMStats_GetIndex(This,szName,lCreate,plIndex)	\
    (This)->lpVtbl -> GetIndex(This,szName,lCreate,plIndex)

#define IAMStats_AddValue(This,lIndex,dValue)	\
    (This)->lpVtbl -> AddValue(This,lIndex,dValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IAMStats_Reset_Proxy( 
    IAMStats * This);


void __RPC_STUB IAMStats_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IAMStats_get_Count_Proxy( 
    IAMStats * This,
    /* [retval][out] */ long *plCount);


void __RPC_STUB IAMStats_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAMStats_GetValueByIndex_Proxy( 
    IAMStats * This,
    /* [in] */ long lIndex,
    /* [out] */ BSTR *szName,
    /* [out] */ long *lCount,
    /* [out] */ double *dLast,
    /* [out] */ double *dAverage,
    /* [out] */ double *dStdDev,
    /* [out] */ double *dMin,
    /* [out] */ double *dMax);


void __RPC_STUB IAMStats_GetValueByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAMStats_GetValueByName_Proxy( 
    IAMStats * This,
    /* [in] */ BSTR szName,
    /* [out] */ long *lIndex,
    /* [out] */ long *lCount,
    /* [out] */ double *dLast,
    /* [out] */ double *dAverage,
    /* [out] */ double *dStdDev,
    /* [out] */ double *dMin,
    /* [out] */ double *dMax);


void __RPC_STUB IAMStats_GetValueByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAMStats_GetIndex_Proxy( 
    IAMStats * This,
    /* [in] */ BSTR szName,
    /* [in] */ long lCreate,
    /* [out] */ long *plIndex);


void __RPC_STUB IAMStats_GetIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IAMStats_AddValue_Proxy( 
    IAMStats * This,
    /* [in] */ long lIndex,
    /* [in] */ double dValue);


void __RPC_STUB IAMStats_AddValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAMStats_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FilgraphManager;

#ifdef __cplusplus

class DECLSPEC_UUID("E436EBB3-524F-11CE-9F53-0020AF0BA770")
FilgraphManager;
#endif
#endif /* __QuartzTypeLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


