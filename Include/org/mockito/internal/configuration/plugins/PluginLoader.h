//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/configuration/plugins/PluginLoader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginLoader")
#ifdef RESTRICT_OrgMockitoInternalConfigurationPluginsPluginLoader
#define INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginLoader 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginLoader 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationPluginsPluginLoader

#if !defined (OrgMockitoInternalConfigurationPluginsPluginLoader_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginLoader || defined(INCLUDE_OrgMockitoInternalConfigurationPluginsPluginLoader))
#define OrgMockitoInternalConfigurationPluginsPluginLoader_

@class IOSClass;
@class OrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins;
@class OrgMockitoInternalConfigurationPluginsPluginInitializer;
@protocol OrgMockitoPluginsPluginSwitch;

@interface OrgMockitoInternalConfigurationPluginsPluginLoader : NSObject

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithOrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins:(OrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins *)plugins
                                      withOrgMockitoInternalConfigurationPluginsPluginInitializer:(OrgMockitoInternalConfigurationPluginsPluginInitializer *)initializer;

- (instancetype)initPackagePrivateWithOrgMockitoPluginsPluginSwitch:(id<OrgMockitoPluginsPluginSwitch>)pluginSwitch;

- (instancetype)initPackagePrivateWithOrgMockitoPluginsPluginSwitch:(id<OrgMockitoPluginsPluginSwitch>)pluginSwitch
                                                       withNSString:(NSString *)alias;

- (id)loadPluginWithIOSClass:(IOSClass *)pluginType;

- (id)loadPluginWithIOSClass:(IOSClass *)preferredPluginType
                withIOSClass:(IOSClass *)alternatePluginType;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationPluginsPluginLoader)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins_withOrgMockitoInternalConfigurationPluginsPluginInitializer_(OrgMockitoInternalConfigurationPluginsPluginLoader *self, OrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins *plugins, OrgMockitoInternalConfigurationPluginsPluginInitializer *initializer);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginLoader *new_OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins_withOrgMockitoInternalConfigurationPluginsPluginInitializer_(OrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins *plugins, OrgMockitoInternalConfigurationPluginsPluginInitializer *initializer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginLoader *create_OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins_withOrgMockitoInternalConfigurationPluginsPluginInitializer_(OrgMockitoInternalConfigurationPluginsDefaultMockitoPlugins *plugins, OrgMockitoInternalConfigurationPluginsPluginInitializer *initializer);

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_(OrgMockitoInternalConfigurationPluginsPluginLoader *self, id<OrgMockitoPluginsPluginSwitch> pluginSwitch);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginLoader *new_OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_(id<OrgMockitoPluginsPluginSwitch> pluginSwitch) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginLoader *create_OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_(id<OrgMockitoPluginsPluginSwitch> pluginSwitch);

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_withNSString_(OrgMockitoInternalConfigurationPluginsPluginLoader *self, id<OrgMockitoPluginsPluginSwitch> pluginSwitch, NSString *alias);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginLoader *new_OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_withNSString_(id<OrgMockitoPluginsPluginSwitch> pluginSwitch, NSString *alias) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationPluginsPluginLoader *create_OrgMockitoInternalConfigurationPluginsPluginLoader_initPackagePrivateWithOrgMockitoPluginsPluginSwitch_withNSString_(id<OrgMockitoPluginsPluginSwitch> pluginSwitch, NSString *alias);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationPluginsPluginLoader)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationPluginsPluginLoader")
