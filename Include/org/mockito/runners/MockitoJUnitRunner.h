//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/runners/MockitoJUnitRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoRunnersMockitoJUnitRunner")
#ifdef RESTRICT_OrgMockitoRunnersMockitoJUnitRunner
#define INCLUDE_ALL_OrgMockitoRunnersMockitoJUnitRunner 0
#else
#define INCLUDE_ALL_OrgMockitoRunnersMockitoJUnitRunner 1
#endif
#undef RESTRICT_OrgMockitoRunnersMockitoJUnitRunner
#ifdef INCLUDE_OrgMockitoRunnersMockitoJUnitRunner_Strict
#define INCLUDE_OrgMockitoRunnersMockitoJUnitRunner 1
#endif
#ifdef INCLUDE_OrgMockitoRunnersMockitoJUnitRunner_Silent
#define INCLUDE_OrgMockitoRunnersMockitoJUnitRunner 1
#endif

#if !defined (OrgMockitoRunnersMockitoJUnitRunner_) && (INCLUDE_ALL_OrgMockitoRunnersMockitoJUnitRunner || defined(INCLUDE_OrgMockitoRunnersMockitoJUnitRunner))
#define OrgMockitoRunnersMockitoJUnitRunner_

#define RESTRICT_OrgMockitoJunitMockitoJUnitRunner 1
#define INCLUDE_OrgMockitoJunitMockitoJUnitRunner 1
#include "org/mockito/junit/MockitoJUnitRunner.h"

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol OrgMockitoInternalRunnersInternalRunner;

@interface OrgMockitoRunnersMockitoJUnitRunner : OrgMockitoJunitMockitoJUnitRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithOrgMockitoInternalRunnersInternalRunner:(id<OrgMockitoInternalRunnersInternalRunner>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoRunnersMockitoJUnitRunner)

FOUNDATION_EXPORT void OrgMockitoRunnersMockitoJUnitRunner_initWithIOSClass_(OrgMockitoRunnersMockitoJUnitRunner *self, IOSClass *klass);

FOUNDATION_EXPORT OrgMockitoRunnersMockitoJUnitRunner *new_OrgMockitoRunnersMockitoJUnitRunner_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoRunnersMockitoJUnitRunner *create_OrgMockitoRunnersMockitoJUnitRunner_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoRunnersMockitoJUnitRunner)

#endif

#if !defined (OrgMockitoRunnersMockitoJUnitRunner_Silent_) && (INCLUDE_ALL_OrgMockitoRunnersMockitoJUnitRunner || defined(INCLUDE_OrgMockitoRunnersMockitoJUnitRunner_Silent))
#define OrgMockitoRunnersMockitoJUnitRunner_Silent_

@class IOSClass;

@interface OrgMockitoRunnersMockitoJUnitRunner_Silent : OrgMockitoRunnersMockitoJUnitRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoRunnersMockitoJUnitRunner_Silent)

FOUNDATION_EXPORT void OrgMockitoRunnersMockitoJUnitRunner_Silent_initWithIOSClass_(OrgMockitoRunnersMockitoJUnitRunner_Silent *self, IOSClass *klass);

FOUNDATION_EXPORT OrgMockitoRunnersMockitoJUnitRunner_Silent *new_OrgMockitoRunnersMockitoJUnitRunner_Silent_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoRunnersMockitoJUnitRunner_Silent *create_OrgMockitoRunnersMockitoJUnitRunner_Silent_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoRunnersMockitoJUnitRunner_Silent)

#endif

#if !defined (OrgMockitoRunnersMockitoJUnitRunner_Strict_) && (INCLUDE_ALL_OrgMockitoRunnersMockitoJUnitRunner || defined(INCLUDE_OrgMockitoRunnersMockitoJUnitRunner_Strict))
#define OrgMockitoRunnersMockitoJUnitRunner_Strict_

@class IOSClass;

@interface OrgMockitoRunnersMockitoJUnitRunner_Strict : OrgMockitoRunnersMockitoJUnitRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoRunnersMockitoJUnitRunner_Strict)

FOUNDATION_EXPORT void OrgMockitoRunnersMockitoJUnitRunner_Strict_initWithIOSClass_(OrgMockitoRunnersMockitoJUnitRunner_Strict *self, IOSClass *klass);

FOUNDATION_EXPORT OrgMockitoRunnersMockitoJUnitRunner_Strict *new_OrgMockitoRunnersMockitoJUnitRunner_Strict_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoRunnersMockitoJUnitRunner_Strict *create_OrgMockitoRunnersMockitoJUnitRunner_Strict_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoRunnersMockitoJUnitRunner_Strict)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoRunnersMockitoJUnitRunner")