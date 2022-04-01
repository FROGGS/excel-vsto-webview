

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../edge_embedded_browser/client/win/current/webview2experimental.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.xx.xxxx 
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


#ifndef __webview2experimental_h__
#define __webview2experimental_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICoreWebView2Experimental5_FWD_DEFINED__
#define __ICoreWebView2Experimental5_FWD_DEFINED__
typedef interface ICoreWebView2Experimental5 ICoreWebView2Experimental5;

#endif 	/* __ICoreWebView2Experimental5_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental8_FWD_DEFINED__
#define __ICoreWebView2Experimental8_FWD_DEFINED__
typedef interface ICoreWebView2Experimental8 ICoreWebView2Experimental8;

#endif 	/* __ICoreWebView2Experimental8_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController3_FWD_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController3_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalCompositionController3 ICoreWebView2ExperimentalCompositionController3;

#endif 	/* __ICoreWebView2ExperimentalCompositionController3_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalCompositionController4 ICoreWebView2ExperimentalCompositionController4;

#endif 	/* __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalControllerOptions_FWD_DEFINED__
#define __ICoreWebView2ExperimentalControllerOptions_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalControllerOptions ICoreWebView2ExperimentalControllerOptions;

#endif 	/* __ICoreWebView2ExperimentalControllerOptions_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment3 ICoreWebView2ExperimentalEnvironment3;

#endif 	/* __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment8_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment8_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment8 ICoreWebView2ExperimentalEnvironment8;

#endif 	/* __ICoreWebView2ExperimentalEnvironment8_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile ICoreWebView2ExperimentalProfile;

#endif 	/* __ICoreWebView2ExperimentalProfile_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile2_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile2_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile2 ICoreWebView2ExperimentalProfile2;

#endif 	/* __ICoreWebView2ExperimentalProfile2_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile3_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile3_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile3 ICoreWebView2ExperimentalProfile3;

#endif 	/* __ICoreWebView2ExperimentalProfile3_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile4_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile4_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile4 ICoreWebView2ExperimentalProfile4;

#endif 	/* __ICoreWebView2ExperimentalProfile4_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeResult ICoreWebView2ExperimentalUpdateRuntimeResult;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__ */


/* header files for imported files */
#include "webview2.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __WebView2Experimental_LIBRARY_DEFINED__
#define __WebView2Experimental_LIBRARY_DEFINED__

/* library WebView2Experimental */
/* [version][uuid] */ 
















typedef struct COREWEBVIEW2_MATRIX_4X4
    {
    FLOAT _11;
    FLOAT _12;
    FLOAT _13;
    FLOAT _14;
    FLOAT _21;
    FLOAT _22;
    FLOAT _23;
    FLOAT _24;
    FLOAT _31;
    FLOAT _32;
    FLOAT _33;
    FLOAT _34;
    FLOAT _41;
    FLOAT _42;
    FLOAT _43;
    FLOAT _44;
    } 	COREWEBVIEW2_MATRIX_4X4;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_UPDATE_RUNTIME_STATUS
    {
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED	= 0,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_FAILED	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY + 1 ) 
    } 	COREWEBVIEW2_UPDATE_RUNTIME_STATUS;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL
    {
        COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL_NORMAL	= 0,
        COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL_LOW	= ( COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL_NORMAL + 1 ) 
    } 	COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_PREFERRED_COLOR_SCHEME
    {
        COREWEBVIEW2_PREFERRED_COLOR_SCHEME_AUTO	= 0,
        COREWEBVIEW2_PREFERRED_COLOR_SCHEME_LIGHT	= ( COREWEBVIEW2_PREFERRED_COLOR_SCHEME_AUTO + 1 ) ,
        COREWEBVIEW2_PREFERRED_COLOR_SCHEME_DARK	= ( COREWEBVIEW2_PREFERRED_COLOR_SCHEME_LIGHT + 1 ) 
    } 	COREWEBVIEW2_PREFERRED_COLOR_SCHEME;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_BROWSING_DATA_KINDS
    {
        COREWEBVIEW2_BROWSING_DATA_KINDS_FILE_SYSTEMS	= ( 1 << 0 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_INDEXED_DB	= ( 1 << 1 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_LOCAL_STORAGE	= ( 1 << 2 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_WEB_SQL	= ( 1 << 3 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_CACHE_STORAGE	= ( 1 << 4 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_ALL_DOM_STORAGE	= ( 1 << 5 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_COOKIES	= ( 1 << 6 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_ALL_SITE	= ( 1 << 7 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_DISK_CACHE	= ( 1 << 8 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_DOWNLOAD_HISTORY	= ( 1 << 9 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_GENERAL_AUTOFILL	= ( 1 << 10 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_PASSWORD_AUTOSAVE	= ( 1 << 11 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_BROWSING_HISTORY	= ( 1 << 12 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_SETTINGS	= ( 1 << 13 ) ,
        COREWEBVIEW2_BROWSING_DATA_KINDS_ALL_PROFILE	= ( 1 << 14 ) 
    } 	COREWEBVIEW2_BROWSING_DATA_KINDS;

DEFINE_ENUM_FLAG_OPERATORS(COREWEBVIEW2_BROWSING_DATA_KINDS);

EXTERN_C const IID LIBID_WebView2Experimental;

#ifndef __ICoreWebView2Experimental5_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental5_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental5 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental5 = {0xE05E04CA,0x7924,0x4C04,{0xA8,0x4C,0xA9,0x05,0x72,0xDB,0xA2,0x2A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E05E04CA-7924-4C04-A84C-A90572DBA22A")
    ICoreWebView2Experimental5 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MemoryUsageTargetLevel( 
            /* [retval][out] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL *level) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MemoryUsageTargetLevel( 
            /* [in] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL level) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental5 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryUsageTargetLevel )( 
            ICoreWebView2Experimental5 * This,
            /* [retval][out] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL *level);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MemoryUsageTargetLevel )( 
            ICoreWebView2Experimental5 * This,
            /* [in] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL level);
        
        END_INTERFACE
    } ICoreWebView2Experimental5Vtbl;

    interface ICoreWebView2Experimental5
    {
        CONST_VTBL struct ICoreWebView2Experimental5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental5_get_MemoryUsageTargetLevel(This,level)	\
    ( (This)->lpVtbl -> get_MemoryUsageTargetLevel(This,level) ) 

#define ICoreWebView2Experimental5_put_MemoryUsageTargetLevel(This,level)	\
    ( (This)->lpVtbl -> put_MemoryUsageTargetLevel(This,level) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental5_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental8_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental8_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental8 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental8 = {0xb753b024,0x05c5,0x40ac,{0xa3,0xf4,0x70,0x1c,0x6f,0x74,0x91,0xf5}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b753b024-05c5-40ac-a3f4-701c6f7491f5")
    ICoreWebView2Experimental8 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Profile( 
            /* [retval][out] */ ICoreWebView2ExperimentalProfile **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental8 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Profile )( 
            ICoreWebView2Experimental8 * This,
            /* [retval][out] */ ICoreWebView2ExperimentalProfile **value);
        
        END_INTERFACE
    } ICoreWebView2Experimental8Vtbl;

    interface ICoreWebView2Experimental8
    {
        CONST_VTBL struct ICoreWebView2Experimental8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental8_get_Profile(This,value)	\
    ( (This)->lpVtbl -> get_Profile(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental8_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler = {0xe9710a06,0x1d1d,0x49b2,{0x82,0x34,0x22,0x6f,0x35,0x84,0x6a,0xe5}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e9710a06-1d1d-49b2-8234-226f35846ae5")
    ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalClearBrowsingDataCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler * This,
            /* [in] */ HRESULT errorCode);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalClearBrowsingDataCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalClearBrowsingDataCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_Invoke(This,errorCode)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController3_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController3_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalCompositionController3 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalCompositionController3 = {0xb134916b,0xa104,0x4d2a,{0x95,0x67,0xc2,0xfd,0x53,0x71,0x43,0x50}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b134916b-a104-4d2a-9567-c2fd53714350")
    ICoreWebView2ExperimentalCompositionController3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DragEnter( 
            /* [in] */ IDataObject *dataObject,
            /* [in] */ DWORD keyState,
            /* [in] */ POINT point,
            /* [retval][out] */ DWORD *effect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragOver( 
            /* [in] */ DWORD keyState,
            /* [in] */ POINT point,
            /* [retval][out] */ DWORD *effect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Drop( 
            /* [in] */ IDataObject *dataObject,
            /* [in] */ DWORD keyState,
            /* [in] */ POINT point,
            /* [retval][out] */ DWORD *effect) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalCompositionController3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalCompositionController3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalCompositionController3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalCompositionController3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragEnter )( 
            ICoreWebView2ExperimentalCompositionController3 * This,
            /* [in] */ IDataObject *dataObject,
            /* [in] */ DWORD keyState,
            /* [in] */ POINT point,
            /* [retval][out] */ DWORD *effect);
        
        HRESULT ( STDMETHODCALLTYPE *DragLeave )( 
            ICoreWebView2ExperimentalCompositionController3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragOver )( 
            ICoreWebView2ExperimentalCompositionController3 * This,
            /* [in] */ DWORD keyState,
            /* [in] */ POINT point,
            /* [retval][out] */ DWORD *effect);
        
        HRESULT ( STDMETHODCALLTYPE *Drop )( 
            ICoreWebView2ExperimentalCompositionController3 * This,
            /* [in] */ IDataObject *dataObject,
            /* [in] */ DWORD keyState,
            /* [in] */ POINT point,
            /* [retval][out] */ DWORD *effect);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalCompositionController3Vtbl;

    interface ICoreWebView2ExperimentalCompositionController3
    {
        CONST_VTBL struct ICoreWebView2ExperimentalCompositionController3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalCompositionController3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalCompositionController3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalCompositionController3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalCompositionController3_DragEnter(This,dataObject,keyState,point,effect)	\
    ( (This)->lpVtbl -> DragEnter(This,dataObject,keyState,point,effect) ) 

#define ICoreWebView2ExperimentalCompositionController3_DragLeave(This)	\
    ( (This)->lpVtbl -> DragLeave(This) ) 

#define ICoreWebView2ExperimentalCompositionController3_DragOver(This,keyState,point,effect)	\
    ( (This)->lpVtbl -> DragOver(This,keyState,point,effect) ) 

#define ICoreWebView2ExperimentalCompositionController3_Drop(This,dataObject,keyState,point,effect)	\
    ( (This)->lpVtbl -> Drop(This,dataObject,keyState,point,effect) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalCompositionController3_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalCompositionController4 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalCompositionController4 = {0xe6041d7f,0x18ac,0x4654,{0xa0,0x4e,0x8b,0x3f,0x81,0x25,0x1c,0x33}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6041d7f-18ac-4654-a04e-8b3f81251c33")
    ICoreWebView2ExperimentalCompositionController4 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomationProvider( 
            /* [retval][out] */ IUnknown **provider) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2PointerInfoFromPointerId( 
            /* [in] */ UINT pointerId,
            /* [in] */ HWND parentWindow,
            /* [in] */ struct COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **pointerInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalCompositionController4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [retval][out] */ IUnknown **provider);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2PointerInfoFromPointerId )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ UINT pointerId,
            /* [in] */ HWND parentWindow,
            /* [in] */ struct COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **pointerInfo);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalCompositionController4Vtbl;

    interface ICoreWebView2ExperimentalCompositionController4
    {
        CONST_VTBL struct ICoreWebView2ExperimentalCompositionController4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalCompositionController4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalCompositionController4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalCompositionController4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalCompositionController4_get_AutomationProvider(This,provider)	\
    ( (This)->lpVtbl -> get_AutomationProvider(This,provider) ) 

#define ICoreWebView2ExperimentalCompositionController4_CreateCoreWebView2PointerInfoFromPointerId(This,pointerId,parentWindow,transform,pointerInfo)	\
    ( (This)->lpVtbl -> CreateCoreWebView2PointerInfoFromPointerId(This,pointerId,parentWindow,transform,pointerInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalControllerOptions_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalControllerOptions_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalControllerOptions */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalControllerOptions = {0x12aae616,0x8ccb,0x44ec,{0xbc,0xb3,0xeb,0x18,0x31,0x88,0x16,0x35}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12aae616-8ccb-44ec-bcb3-eb1831881635")
    ICoreWebView2ExperimentalControllerOptions : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProfileName( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProfileName( 
            /* [in] */ LPCWSTR value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsInPrivateModeEnabled( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsInPrivateModeEnabled( 
            /* [in] */ BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalControllerOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalControllerOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalControllerOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalControllerOptions * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileName )( 
            ICoreWebView2ExperimentalControllerOptions * This,
            /* [retval][out] */ LPWSTR *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProfileName )( 
            ICoreWebView2ExperimentalControllerOptions * This,
            /* [in] */ LPCWSTR value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInPrivateModeEnabled )( 
            ICoreWebView2ExperimentalControllerOptions * This,
            /* [retval][out] */ BOOL *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsInPrivateModeEnabled )( 
            ICoreWebView2ExperimentalControllerOptions * This,
            /* [in] */ BOOL value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalControllerOptionsVtbl;

    interface ICoreWebView2ExperimentalControllerOptions
    {
        CONST_VTBL struct ICoreWebView2ExperimentalControllerOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalControllerOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalControllerOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalControllerOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalControllerOptions_get_ProfileName(This,value)	\
    ( (This)->lpVtbl -> get_ProfileName(This,value) ) 

#define ICoreWebView2ExperimentalControllerOptions_put_ProfileName(This,value)	\
    ( (This)->lpVtbl -> put_ProfileName(This,value) ) 

#define ICoreWebView2ExperimentalControllerOptions_get_IsInPrivateModeEnabled(This,value)	\
    ( (This)->lpVtbl -> get_IsInPrivateModeEnabled(This,value) ) 

#define ICoreWebView2ExperimentalControllerOptions_put_IsInPrivateModeEnabled(This,value)	\
    ( (This)->lpVtbl -> put_IsInPrivateModeEnabled(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalControllerOptions_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment3 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment3 = {0x9A2BE885,0x7F0B,0x4B26,{0xB6,0xDD,0xC9,0x69,0xBA,0xA0,0x0B,0xF1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A2BE885-7F0B-4B26-B6DD-C969BAA00BF1")
    ICoreWebView2ExperimentalEnvironment3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateRuntime( 
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateRuntime )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment3Vtbl;

    interface ICoreWebView2ExperimentalEnvironment3
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment3_UpdateRuntime(This,handler)	\
    ( (This)->lpVtbl -> UpdateRuntime(This,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment8_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment8_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment8 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment8 = {0xae714520,0xd062,0x4d20,{0x9d,0x08,0x50,0x96,0xf5,0x90,0xed,0x1a}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ae714520-d062-4d20-9d08-5096f590ed1a")
    ICoreWebView2ExperimentalEnvironment8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2ControllerOptions( 
            /* [in] */ LPCWSTR profileName,
            /* [in] */ BOOL isInPrivateModeEnabled,
            /* [retval][out] */ ICoreWebView2ExperimentalControllerOptions **options) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2ControllerWithOptions( 
            /* [in] */ HWND parentWindow,
            /* [in] */ ICoreWebView2ExperimentalControllerOptions *options,
            /* [in] */ ICoreWebView2CreateCoreWebView2ControllerCompletedHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2CompositionControllerWithOptions( 
            /* [in] */ HWND parentWindow,
            /* [in] */ ICoreWebView2ExperimentalControllerOptions *options,
            /* [in] */ ICoreWebView2CreateCoreWebView2CompositionControllerCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2ControllerOptions )( 
            ICoreWebView2ExperimentalEnvironment8 * This,
            /* [in] */ LPCWSTR profileName,
            /* [in] */ BOOL isInPrivateModeEnabled,
            /* [retval][out] */ ICoreWebView2ExperimentalControllerOptions **options);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2ControllerWithOptions )( 
            ICoreWebView2ExperimentalEnvironment8 * This,
            /* [in] */ HWND parentWindow,
            /* [in] */ ICoreWebView2ExperimentalControllerOptions *options,
            /* [in] */ ICoreWebView2CreateCoreWebView2ControllerCompletedHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2CompositionControllerWithOptions )( 
            ICoreWebView2ExperimentalEnvironment8 * This,
            /* [in] */ HWND parentWindow,
            /* [in] */ ICoreWebView2ExperimentalControllerOptions *options,
            /* [in] */ ICoreWebView2CreateCoreWebView2CompositionControllerCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment8Vtbl;

    interface ICoreWebView2ExperimentalEnvironment8
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment8_CreateCoreWebView2ControllerOptions(This,profileName,isInPrivateModeEnabled,options)	\
    ( (This)->lpVtbl -> CreateCoreWebView2ControllerOptions(This,profileName,isInPrivateModeEnabled,options) ) 

#define ICoreWebView2ExperimentalEnvironment8_CreateCoreWebView2ControllerWithOptions(This,parentWindow,options,handler)	\
    ( (This)->lpVtbl -> CreateCoreWebView2ControllerWithOptions(This,parentWindow,options,handler) ) 

#define ICoreWebView2ExperimentalEnvironment8_CreateCoreWebView2CompositionControllerWithOptions(This,parentWindow,options,handler)	\
    ( (This)->lpVtbl -> CreateCoreWebView2CompositionControllerWithOptions(This,parentWindow,options,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment8_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile = {0x05bfce49,0x57e2,0x4963,{0xbb,0xb8,0x38,0x05,0xad,0xe3,0xc4,0x81}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05bfce49-57e2-4963-bbb8-3805ade3c481")
    ICoreWebView2ExperimentalProfile : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProfileName( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsInPrivateModeEnabled( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProfilePath( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfileName )( 
            ICoreWebView2ExperimentalProfile * This,
            /* [retval][out] */ LPWSTR *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInPrivateModeEnabled )( 
            ICoreWebView2ExperimentalProfile * This,
            /* [retval][out] */ BOOL *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProfilePath )( 
            ICoreWebView2ExperimentalProfile * This,
            /* [retval][out] */ LPWSTR *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfileVtbl;

    interface ICoreWebView2ExperimentalProfile
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile_get_ProfileName(This,value)	\
    ( (This)->lpVtbl -> get_ProfileName(This,value) ) 

#define ICoreWebView2ExperimentalProfile_get_IsInPrivateModeEnabled(This,value)	\
    ( (This)->lpVtbl -> get_IsInPrivateModeEnabled(This,value) ) 

#define ICoreWebView2ExperimentalProfile_get_ProfilePath(This,value)	\
    ( (This)->lpVtbl -> get_ProfilePath(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile2_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile2_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile2 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile2 = {0xee9e58ed,0x807b,0x4648,{0x91,0x71,0x8c,0x09,0x22,0xef,0xe0,0x71}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ee9e58ed-807b-4648-9171-8c0922efe071")
    ICoreWebView2ExperimentalProfile2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredColorScheme( 
            /* [retval][out] */ COREWEBVIEW2_PREFERRED_COLOR_SCHEME *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredColorScheme( 
            /* [in] */ COREWEBVIEW2_PREFERRED_COLOR_SCHEME value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredColorScheme )( 
            ICoreWebView2ExperimentalProfile2 * This,
            /* [retval][out] */ COREWEBVIEW2_PREFERRED_COLOR_SCHEME *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredColorScheme )( 
            ICoreWebView2ExperimentalProfile2 * This,
            /* [in] */ COREWEBVIEW2_PREFERRED_COLOR_SCHEME value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile2Vtbl;

    interface ICoreWebView2ExperimentalProfile2
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile2_get_PreferredColorScheme(This,value)	\
    ( (This)->lpVtbl -> get_PreferredColorScheme(This,value) ) 

#define ICoreWebView2ExperimentalProfile2_put_PreferredColorScheme(This,value)	\
    ( (This)->lpVtbl -> put_PreferredColorScheme(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile2_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile3_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile3_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile3 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile3 = {0x4e4d8937,0x7fc7,0x4d40,{0xa1,0x01,0xd3,0xc7,0x4b,0xbc,0x37,0x85}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4e4d8937-7fc7-4d40-a101-d3c74bbc3785")
    ICoreWebView2ExperimentalProfile3 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultDownloadFolderPath( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DefaultDownloadFolderPath( 
            /* [in] */ LPCWSTR value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile3 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultDownloadFolderPath )( 
            ICoreWebView2ExperimentalProfile3 * This,
            /* [retval][out] */ LPWSTR *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultDownloadFolderPath )( 
            ICoreWebView2ExperimentalProfile3 * This,
            /* [in] */ LPCWSTR value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile3Vtbl;

    interface ICoreWebView2ExperimentalProfile3
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile3_get_DefaultDownloadFolderPath(This,value)	\
    ( (This)->lpVtbl -> get_DefaultDownloadFolderPath(This,value) ) 

#define ICoreWebView2ExperimentalProfile3_put_DefaultDownloadFolderPath(This,value)	\
    ( (This)->lpVtbl -> put_DefaultDownloadFolderPath(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile3_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile4_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile4_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile4 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile4 = {0xee38b7e1,0x221d,0x465d,{0x86,0x4b,0xea,0x4c,0x22,0x19,0x4d,0xca}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ee38b7e1-221d-465d-864b-ea4c22194dca")
    ICoreWebView2ExperimentalProfile4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClearBrowsingData( 
            /* [in] */ COREWEBVIEW2_BROWSING_DATA_KINDS dataKinds,
            /* [in] */ ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearBrowsingDataInTimeRange( 
            /* [in] */ COREWEBVIEW2_BROWSING_DATA_KINDS dataKinds,
            /* [in] */ double startTime,
            /* [in] */ double endTime,
            /* [in] */ ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearBrowsingDataAll( 
            /* [in] */ ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearBrowsingData )( 
            ICoreWebView2ExperimentalProfile4 * This,
            /* [in] */ COREWEBVIEW2_BROWSING_DATA_KINDS dataKinds,
            /* [in] */ ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *ClearBrowsingDataInTimeRange )( 
            ICoreWebView2ExperimentalProfile4 * This,
            /* [in] */ COREWEBVIEW2_BROWSING_DATA_KINDS dataKinds,
            /* [in] */ double startTime,
            /* [in] */ double endTime,
            /* [in] */ ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler *handler);
        
        HRESULT ( STDMETHODCALLTYPE *ClearBrowsingDataAll )( 
            ICoreWebView2ExperimentalProfile4 * This,
            /* [in] */ ICoreWebView2ExperimentalClearBrowsingDataCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile4Vtbl;

    interface ICoreWebView2ExperimentalProfile4
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile4_ClearBrowsingData(This,dataKinds,handler)	\
    ( (This)->lpVtbl -> ClearBrowsingData(This,dataKinds,handler) ) 

#define ICoreWebView2ExperimentalProfile4_ClearBrowsingDataInTimeRange(This,dataKinds,startTime,endTime,handler)	\
    ( (This)->lpVtbl -> ClearBrowsingDataInTimeRange(This,dataKinds,startTime,endTime,handler) ) 

#define ICoreWebView2ExperimentalProfile4_ClearBrowsingDataAll(This,handler)	\
    ( (This)->lpVtbl -> ClearBrowsingDataAll(This,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile4_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler = {0xF1D2D722,0x3721,0x499C,{0x87,0xF5,0x4C,0x40,0x52,0x60,0x69,0x7A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F1D2D722-3721-499C-87F5-4C405260697A")
    ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Invoke(This,errorCode,result)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeResult */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeResult = {0xDD503E49,0xAB19,0x47C0,{0xB2,0xAD,0x6D,0xDD,0x09,0xCC,0x3E,0x3A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD503E49-AB19-47C0-B2AD-6DDD09CC3E3A")
    ICoreWebView2ExperimentalUpdateRuntimeResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedError( 
            /* [retval][out] */ HRESULT *error) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ HRESULT *error);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeResultVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeResult
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_Status(This,status)	\
    ( (This)->lpVtbl -> get_Status(This,status) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_ExtendedError(This,error)	\
    ( (This)->lpVtbl -> get_ExtendedError(This,error) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__ */

#endif /* __WebView2Experimental_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


