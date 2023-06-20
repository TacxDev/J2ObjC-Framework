//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/ConstructorInjection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionConstructorInjection")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionConstructorInjection
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionConstructorInjection 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionConstructorInjection 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionConstructorInjection

#if !defined (OrgMockitoInternalConfigurationInjectionConstructorInjection_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionConstructorInjection || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionConstructorInjection))
#define OrgMockitoInternalConfigurationInjectionConstructorInjection_

#define RESTRICT_OrgMockitoInternalConfigurationInjectionMockInjectionStrategy 1
#define INCLUDE_OrgMockitoInternalConfigurationInjectionMockInjectionStrategy 1
#include "org/mockito/internal/configuration/injection/MockInjectionStrategy.h"

@class JavaLangBoolean;
@class JavaLangReflectField;
@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationInjectionConstructorInjection : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy

#pragma mark Public

- (instancetype)init;

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionConstructorInjection)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionConstructorInjection_init(OrgMockitoInternalConfigurationInjectionConstructorInjection *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionConstructorInjection *new_OrgMockitoInternalConfigurationInjectionConstructorInjection_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionConstructorInjection *create_OrgMockitoInternalConfigurationInjectionConstructorInjection_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionConstructorInjection)

#endif

#if !defined (OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionConstructorInjection || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver))
#define OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_

#define RESTRICT_OrgMockitoInternalUtilReflectionFieldInitializer 1
#define INCLUDE_OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver 1
#include "org/mockito/internal/util/reflection/FieldInitializer.h"

@class IOSObjectArray;
@protocol JavaUtilSet;

@interface OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver : NSObject < OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver > {
 @public
  id<JavaUtilSet> objects_;
}

#pragma mark Public

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)objects;

- (IOSObjectArray *)resolveTypeInstancesWithIOSClassArray:(IOSObjectArray *)argTypes;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver)

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver, objects_, id<JavaUtilSet>)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_initWithJavaUtilSet_(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver *self, id<JavaUtilSet> objects);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver *new_OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_initWithJavaUtilSet_(id<JavaUtilSet> objects) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver *create_OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver_initWithJavaUtilSet_(id<JavaUtilSet> objects);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionConstructorInjection_SimpleArgumentResolver)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionConstructorInjection")
