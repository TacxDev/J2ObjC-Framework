//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/configuration/plugins/PluginFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginFinder")
#ifdef RESTRICT_OrgMockitoInternalConfigurationPluginsPluginFinder
#define INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginFinder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginFinder 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationPluginsPluginFinder

#if !defined (OrgMockitoInternalConfigurationPluginsPluginFinder_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginFinder || defined(INCLUDE_OrgMockitoInternalConfigurationPluginsPluginFinder))
#define OrgMockitoInternalConfigurationPluginsPluginFinder_

@protocol JavaLangIterable;
@protocol OrgMockitoPluginsPluginSwitch;

@interface OrgMockitoInternalConfigurationPluginsPluginFinder : NSObject

#pragma mark Public

- (instancetype)initPackagePrivateWithOrgMockitoPluginsPluginSwitch:(id<OrgMockitoPluginsPluginSwitch>)pluginSwitch;

#pragma mark Package-Private

- (NSString *)findPluginClassWithJavaLangIterable:(id<JavaLangIterable>)resources;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationPluginsPluginFinder)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationPluginsPluginFinder_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_(OrgMockitoInternalConfigurationPluginsPluginFinder *self, id<OrgMockitoPluginsPluginSwitch> pluginSwitch);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginFinder *new_OrgMockitoInternalConfigurationPluginsPluginFinder_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_(id<OrgMockitoPluginsPluginSwitch> pluginSwitch) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginFinder *create_OrgMockitoInternalConfigurationPluginsPluginFinder_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_(id<OrgMockitoPluginsPluginSwitch> pluginSwitch);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationPluginsPluginFinder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginFinder")
