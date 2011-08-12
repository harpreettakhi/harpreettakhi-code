

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Sat Dec 02 02:20:28 2006
 */
/* Compiler settings for vc70.idl:
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

#ifndef __vc70_h__
#define __vc70_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISimpleLoan_FWD_DEFINED__
#define __ISimpleLoan_FWD_DEFINED__
typedef interface ISimpleLoan ISimpleLoan;
#endif 	/* __ISimpleLoan_FWD_DEFINED__ */


#ifndef __ILoanLimits_FWD_DEFINED__
#define __ILoanLimits_FWD_DEFINED__
typedef interface ILoanLimits ILoanLimits;
#endif 	/* __ILoanLimits_FWD_DEFINED__ */


#ifndef __PersonalLoan_FWD_DEFINED__
#define __PersonalLoan_FWD_DEFINED__

#ifdef __cplusplus
typedef class PersonalLoan PersonalLoan;
#else
typedef struct PersonalLoan PersonalLoan;
#endif /* __cplusplus */

#endif 	/* __PersonalLoan_FWD_DEFINED__ */


/* header files for imported files */
#include "docobj.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISimpleLoan_INTERFACE_DEFINED__
#define __ISimpleLoan_INTERFACE_DEFINED__

/* interface ISimpleLoan */
/* [object][dual][uuid] */ 


EXTERN_C const IID IID_ISimpleLoan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2B74B872-4882-4C05-9B9A-0BDE46655EA6")
    ISimpleLoan : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInterestRate( 
            /* [in] */ double amount,
            /* [in] */ int period,
            /* [retval][out] */ float *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMonthlyInstallment( 
            /* [in] */ double amount,
            /* [in] */ int period,
            /* [retval][out] */ double *pResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISimpleLoanVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleLoan * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleLoan * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleLoan * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISimpleLoan * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISimpleLoan * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISimpleLoan * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISimpleLoan * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *GetInterestRate )( 
            ISimpleLoan * This,
            /* [in] */ double amount,
            /* [in] */ int period,
            /* [retval][out] */ float *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonthlyInstallment )( 
            ISimpleLoan * This,
            /* [in] */ double amount,
            /* [in] */ int period,
            /* [retval][out] */ double *pResult);
        
        END_INTERFACE
    } ISimpleLoanVtbl;

    interface ISimpleLoan
    {
        CONST_VTBL struct ISimpleLoanVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleLoan_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISimpleLoan_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISimpleLoan_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISimpleLoan_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISimpleLoan_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISimpleLoan_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISimpleLoan_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISimpleLoan_GetInterestRate(This,amount,period,pResult)	\
    (This)->lpVtbl -> GetInterestRate(This,amount,period,pResult)

#define ISimpleLoan_GetMonthlyInstallment(This,amount,period,pResult)	\
    (This)->lpVtbl -> GetMonthlyInstallment(This,amount,period,pResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISimpleLoan_GetInterestRate_Proxy( 
    ISimpleLoan * This,
    /* [in] */ double amount,
    /* [in] */ int period,
    /* [retval][out] */ float *pResult);


void __RPC_STUB ISimpleLoan_GetInterestRate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISimpleLoan_GetMonthlyInstallment_Proxy( 
    ISimpleLoan * This,
    /* [in] */ double amount,
    /* [in] */ int period,
    /* [retval][out] */ double *pResult);


void __RPC_STUB ISimpleLoan_GetMonthlyInstallment_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISimpleLoan_INTERFACE_DEFINED__ */


#ifndef __ILoanLimits_INTERFACE_DEFINED__
#define __ILoanLimits_INTERFACE_DEFINED__

/* interface ILoanLimits */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILoanLimits;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA435EFE-CAC6-4333-9A1A-80EBF20947B9")
    ILoanLimits : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMaximumAmount( 
            /* [retval][out] */ double *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaximumPeriod( 
            /* [retval][out] */ int *pResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILoanLimitsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILoanLimits * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILoanLimits * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILoanLimits * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaximumAmount )( 
            ILoanLimits * This,
            /* [retval][out] */ double *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaximumPeriod )( 
            ILoanLimits * This,
            /* [retval][out] */ int *pResult);
        
        END_INTERFACE
    } ILoanLimitsVtbl;

    interface ILoanLimits
    {
        CONST_VTBL struct ILoanLimitsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILoanLimits_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILoanLimits_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILoanLimits_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILoanLimits_GetMaximumAmount(This,pResult)	\
    (This)->lpVtbl -> GetMaximumAmount(This,pResult)

#define ILoanLimits_GetMaximumPeriod(This,pResult)	\
    (This)->lpVtbl -> GetMaximumPeriod(This,pResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ILoanLimits_GetMaximumAmount_Proxy( 
    ILoanLimits * This,
    /* [retval][out] */ double *pResult);


void __RPC_STUB ILoanLimits_GetMaximumAmount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ILoanLimits_GetMaximumPeriod_Proxy( 
    ILoanLimits * This,
    /* [retval][out] */ int *pResult);


void __RPC_STUB ILoanLimits_GetMaximumPeriod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILoanLimits_INTERFACE_DEFINED__ */



#ifndef __ACMEFinance_LIBRARY_DEFINED__
#define __ACMEFinance_LIBRARY_DEFINED__

/* library ACMEFinance */
/* [helpstring][uuid][version] */ 


EXTERN_C const IID LIBID_ACMEFinance;

EXTERN_C const CLSID CLSID_PersonalLoan;

#ifdef __cplusplus

class DECLSPEC_UUID("D9E3FCF0-460D-4056-933C-0E958444EB30")
PersonalLoan;
#endif
#endif /* __ACMEFinance_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


