//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/creation/instance/InstantiatorProvider2Adapter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter")
#ifdef RESTRICT_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter
#define INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter

#if !defined (OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter_) && (INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter || defined(INCLUDE_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter))
#define OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter_

#define RESTRICT_OrgMockitoPluginsInstantiatorProvider 1
#define INCLUDE_OrgMockitoPluginsInstantiatorProvider 1
#include "org/mockito/plugins/InstantiatorProvider.h"

@protocol OrgMockitoInternalCreationInstanceInstantiator;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoPluginsInstantiatorProvider2;

@interface OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter : NSObject < OrgMockitoPluginsInstantiatorProvider >

#pragma mark Public

- (instancetype)initWithOrgMockitoPluginsInstantiatorProvider2:(id<OrgMockitoPluginsInstantiatorProvider2>)provider;

- (id<OrgMockitoInternalCreationInstanceInstantiator>)getInstantiatorWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter)

FOUNDATION_EXPORT void OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter_initWithOrgMockitoPluginsInstantiatorProvider2_(OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter *self, id<OrgMockitoPluginsInstantiatorProvider2> provider);

FOUNDATION_EXPORT OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter *new_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter_initWithOrgMockitoPluginsInstantiatorProvider2_(id<OrgMockitoPluginsInstantiatorProvider2> provider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter *create_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter_initWithOrgMockitoPluginsInstantiatorProvider2_(id<OrgMockitoPluginsInstantiatorProvider2> provider);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationInstanceInstantiatorProvider2Adapter")