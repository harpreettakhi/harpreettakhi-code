

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Fri Dec 01 23:41:17 2006
 */
/* Compiler settings for trader.idl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __trader_h__
#define __trader_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IInventory_FWD_DEFINED__
#define __IInventory_FWD_DEFINED__
typedef interface IInventory IInventory;
#endif 	/* __IInventory_FWD_DEFINED__ */


#ifndef __IAccount_FWD_DEFINED__
#define __IAccount_FWD_DEFINED__
typedef interface IAccount IAccount;
#endif 	/* __IAccount_FWD_DEFINED__ */


#ifndef __ITradingInfo_FWD_DEFINED__
#define __ITradingInfo_FWD_DEFINED__
typedef interface ITradingInfo ITradingInfo;
#endif 	/* __ITradingInfo_FWD_DEFINED__ */


#ifndef __Trader_FWD_DEFINED__
#define __Trader_FWD_DEFINED__

#ifdef __cplusplus
typedef class Trader Trader;
#else
typedef struct Trader Trader;
#endif /* __cplusplus */

#endif 	/* __Trader_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IInventory_INTERFACE_DEFINED__
#define __IInventory_INTERFACE_DEFINED__

/* interface IInventory */
/* [object][uuid] */ 


EXTERN_C const IID IID_IInventory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A61D359D-2451-460D-81A9-4EC24AC9C276")
    IInventory : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Buy( 
            /* [in] */ int quantity,
            /* [in] */ float rate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Sell( 
            /* [in] */ int quantity,
            /* [in] */ float rate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStock( 
            /* [retval][out] */ int *pStock) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInventoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInventory * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInventory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInventory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInventory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInventory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInventory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInventory * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Buy )( 
            IInventory * This,
            /* [in] */ int quantity,
            /* [in] */ float rate);
        
        HRESULT ( STDMETHODCALLTYPE *Sell )( 
            IInventory * This,
            /* [in] */ int quantity,
            /* [in] */ float rate);
        
        HRESULT ( STDMETHODCALLTYPE *GetStock )( 
            IInventory * This,
            /* [retval][out] */ int *pStock);
        
        END_INTERFACE
    } IInventoryVtbl;

    interface IInventory
    {
        CONST_VTBL struct IInventoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInventory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInventory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInventory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInventory_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IInventory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IInventory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IInventory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IInventory_Buy(This,quantity,rate)	\
    (This)->lpVtbl -> Buy(This,quantity,rate)

#define IInventory_Sell(This,quantity,rate)	\
    (This)->lpVtbl -> Sell(This,quantity,rate)

#define IInventory_GetStock(This,pStock)	\
    (This)->lpVtbl -> GetStock(This,pStock)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IInventory_Buy_Proxy( 
    IInventory * This,
    /* [in] */ int quantity,
    /* [in] */ float rate);


void __RPC_STUB IInventory_Buy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IInventory_Sell_Proxy( 
    IInventory * This,
    /* [in] */ int quantity,
    /* [in] */ float rate);


void __RPC_STUB IInventory_Sell_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IInventory_GetStock_Proxy( 
    IInventory * This,
    /* [retval][out] */ int *pStock);


void __RPC_STUB IInventory_GetStock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInventory_INTERFACE_DEFINED__ */


#ifndef __IAccount_INTERFACE_DEFINED__
#define __IAccount_INTERFACE_DEFINED__

/* interface IAccount */
/* [object][uuid] */ 


EXTERN_C const IID IID_IAccount;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D0FC49D-169E-4AC9-B3A4-44D6299802FB")
    IAccount : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Credit( 
            /* [in] */ double amount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Debit( 
            /* [in] */ double amount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBalance( 
            /* [retval][out] */ double *pBalance) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAccountVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAccount * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAccount * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAccount * This);
        
        HRESULT ( STDMETHODCALLTYPE *Credit )( 
            IAccount * This,
            /* [in] */ double amount);
        
        HRESULT ( STDMETHODCALLTYPE *Debit )( 
            IAccount * This,
            /* [in] */ double amount);
        
        HRESULT ( STDMETHODCALLTYPE *GetBalance )( 
            IAccount * This,
            /* [retval][out] */ double *pBalance);
        
        END_INTERFACE
    } IAccountVtbl;

    interface IAccount
    {
        CONST_VTBL struct IAccountVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAccount_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAccount_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAccount_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAccount_Credit(This,amount)	\
    (This)->lpVtbl -> Credit(This,amount)

#define IAccount_Debit(This,amount)	\
    (This)->lpVtbl -> Debit(This,amount)

#define IAccount_GetBalance(This,pBalance)	\
    (This)->lpVtbl -> GetBalance(This,pBalance)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IAccount_Credit_Proxy( 
    IAccount * This,
    /* [in] */ double amount);


void __RPC_STUB IAccount_Credit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAccount_Debit_Proxy( 
    IAccount * This,
    /* [in] */ double amount);


void __RPC_STUB IAccount_Debit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IAccount_GetBalance_Proxy( 
    IAccount * This,
    /* [retval][out] */ double *pBalance);


void __RPC_STUB IAccount_GetBalance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAccount_INTERFACE_DEFINED__ */



#ifndef __ACMETradingLib_LIBRARY_DEFINED__
#define __ACMETradingLib_LIBRARY_DEFINED__

/* library ACMETradingLib */
/* [helpstring][uuid] */ 

/* [uuid] */ 
enum  DECLSPEC_UUID("FABF5192-F19B-42B6-9135-D15AA8BAA6FF") TraderError
    {	TRADER_E_OUTOFSTOCK	= 0x80040201,
	TRADER_E_INSUFFICIENTFUNDS	= 0x80040202
    } ;

EXTERN_C const IID LIBID_ACMETradingLib;

EXTERN_C const CLSID CLSID_Trader;

#ifdef __cplusplus

class DECLSPEC_UUID("EFCDAC32-9778-4300-9CF8-03A9F727E4E7")
Trader;
#endif
#endif /* __ACMETradingLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


