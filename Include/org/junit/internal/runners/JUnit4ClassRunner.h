//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/internal/runners/JUnit4ClassRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersJUnit4ClassRunner")
#ifdef RESTRICT_OrgJunitInternalRunnersJUnit4ClassRunner
#define INCLUDE_ALL_OrgJunitInternalRunnersJUnit4ClassRunner 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersJUnit4ClassRunner 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersJUnit4ClassRunner

#if !defined (OrgJunitInternalRunnersJUnit4ClassRunner_) && (INCLUDE_ALL_OrgJunitInternalRunnersJUnit4ClassRunner || defined(INCLUDE_OrgJunitInternalRunnersJUnit4ClassRunner))
#define OrgJunitInternalRunnersJUnit4ClassRunner_

#define RESTRICT_OrgJunitRunnerRunner 1
#define INCLUDE_OrgJunitRunnerRunner 1
#include "org/junit/runner/Runner.h"

#define RESTRICT_OrgJunitRunnerManipulationFilterable 1
#define INCLUDE_OrgJunitRunnerManipulationFilterable 1
#include "org/junit/runner/manipulation/Filterable.h"

#define RESTRICT_OrgJunitRunnerManipulationSortable 1
#define INCLUDE_OrgJunitRunnerManipulationSortable 1
#include "org/junit/runner/manipulation/Sortable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;
@class OrgJunitInternalRunnersTestClass;
@class OrgJunitInternalRunnersTestMethod;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationSorter;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol JavaUtilList;

@interface OrgJunitInternalRunnersJUnit4ClassRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationSortable >

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

#pragma mark Protected

- (IOSObjectArray *)classAnnotations;

- (id)createTest;

- (NSString *)getName;

- (OrgJunitInternalRunnersTestClass *)getTestClass;

- (id<JavaUtilList>)getTestMethods;

- (void)invokeTestMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method
        withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (OrgJunitRunnerDescription *)methodDescriptionWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (void)runMethodsWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (IOSObjectArray *)testAnnotationsWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (NSString *)testNameWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (void)validate;

- (OrgJunitInternalRunnersTestMethod *)wrapMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersJUnit4ClassRunner)

FOUNDATION_EXPORT void OrgJunitInternalRunnersJUnit4ClassRunner_initWithIOSClass_(OrgJunitInternalRunnersJUnit4ClassRunner *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitInternalRunnersJUnit4ClassRunner *new_OrgJunitInternalRunnersJUnit4ClassRunner_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersJUnit4ClassRunner *create_OrgJunitInternalRunnersJUnit4ClassRunner_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersJUnit4ClassRunner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersJUnit4ClassRunner")
