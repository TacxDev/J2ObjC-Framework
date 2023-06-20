//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/rules/DisableOnDebug.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesDisableOnDebug")
#ifdef RESTRICT_OrgJunitRulesDisableOnDebug
#define INCLUDE_ALL_OrgJunitRulesDisableOnDebug 0
#else
#define INCLUDE_ALL_OrgJunitRulesDisableOnDebug 1
#endif
#undef RESTRICT_OrgJunitRulesDisableOnDebug

#if !defined (OrgJunitRulesDisableOnDebug_) && (INCLUDE_ALL_OrgJunitRulesDisableOnDebug || defined(INCLUDE_OrgJunitRulesDisableOnDebug))
#define OrgJunitRulesDisableOnDebug_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "org/junit/rules/TestRule.h"

@class JavaLangBoolean;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;
@protocol JavaUtilList;

@interface OrgJunitRulesDisableOnDebug : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

- (instancetype)initWithOrgJunitRulesTestRule:(id<OrgJunitRulesTestRule>)rule;

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (jboolean)isDebugging;

#pragma mark Package-Private

- (instancetype)initWithOrgJunitRulesTestRule:(id<OrgJunitRulesTestRule>)rule
                             withJavaUtilList:(id<JavaUtilList>)inputArguments;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesDisableOnDebug)

FOUNDATION_EXPORT void OrgJunitRulesDisableOnDebug_initWithOrgJunitRulesTestRule_(OrgJunitRulesDisableOnDebug *self, id<OrgJunitRulesTestRule> rule);

FOUNDATION_EXPORT OrgJunitRulesDisableOnDebug *new_OrgJunitRulesDisableOnDebug_initWithOrgJunitRulesTestRule_(id<OrgJunitRulesTestRule> rule) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesDisableOnDebug *create_OrgJunitRulesDisableOnDebug_initWithOrgJunitRulesTestRule_(id<OrgJunitRulesTestRule> rule);

FOUNDATION_EXPORT void OrgJunitRulesDisableOnDebug_initWithOrgJunitRulesTestRule_withJavaUtilList_(OrgJunitRulesDisableOnDebug *self, id<OrgJunitRulesTestRule> rule, id<JavaUtilList> inputArguments);

FOUNDATION_EXPORT OrgJunitRulesDisableOnDebug *new_OrgJunitRulesDisableOnDebug_initWithOrgJunitRulesTestRule_withJavaUtilList_(id<OrgJunitRulesTestRule> rule, id<JavaUtilList> inputArguments) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesDisableOnDebug *create_OrgJunitRulesDisableOnDebug_initWithOrgJunitRulesTestRule_withJavaUtilList_(id<OrgJunitRulesTestRule> rule, id<JavaUtilList> inputArguments);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesDisableOnDebug)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesDisableOnDebug")
