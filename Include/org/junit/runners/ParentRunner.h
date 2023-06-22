//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runners/ParentRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersParentRunner")
#ifdef RESTRICT_OrgJunitRunnersParentRunner
#define INCLUDE_ALL_OrgJunitRunnersParentRunner 0
#else
#define INCLUDE_ALL_OrgJunitRunnersParentRunner 1
#endif
#undef RESTRICT_OrgJunitRunnersParentRunner

#if !defined (OrgJunitRunnersParentRunner_) && (INCLUDE_ALL_OrgJunitRunnersParentRunner || defined(INCLUDE_OrgJunitRunnersParentRunner))
#define OrgJunitRunnersParentRunner_

#define RESTRICT_OrgJunitRunnerRunner 1
#define INCLUDE_OrgJunitRunnerRunner 1
#include "org/junit/runner/Runner.h"

#define RESTRICT_OrgJunitRunnerManipulationFilterable 1
#define INCLUDE_OrgJunitRunnerManipulationFilterable 1
#include "org/junit/runner/manipulation/Filterable.h"

#define RESTRICT_OrgJunitRunnerManipulationOrderable 1
#define INCLUDE_OrgJunitRunnerManipulationOrderable 1
#include "org/junit/runner/manipulation/Orderable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationOrderer;
@class OrgJunitRunnerManipulationSorter;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnersModelStatement;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;
@protocol OrgJunitRunnersModelRunnerScheduler;

@interface OrgJunitRunnersParentRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationOrderable >

#pragma mark Public

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (OrgJunitRunnersModelTestClass *)getTestClass;

- (void)orderWithOrgJunitRunnerManipulationOrderer:(OrgJunitRunnerManipulationOrderer *)orderer;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)setSchedulerWithOrgJunitRunnersModelRunnerScheduler:(id<OrgJunitRunnersModelRunnerScheduler>)scheduler;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

#pragma mark Protected

- (instancetype)initWithIOSClass:(IOSClass *)testClass;

- (instancetype)initWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

- (OrgJunitRunnersModelStatement *)childrenInvokerWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (OrgJunitRunnersModelStatement *)classBlockWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (id<JavaUtilList>)classRules;

- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;

- (OrgJunitRunnersModelTestClass *)createTestClassWithIOSClass:(IOSClass *)testClass;

- (OrgJunitRunnerDescription *)describeChildWithId:(id)child;

- (id<JavaUtilList>)getChildren;

- (NSString *)getName;

- (IOSObjectArray *)getRunnerAnnotations;

- (jboolean)isIgnoredWithId:(id)child;

- (void)runChildWithId:(id)child
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)runLeafWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement
                   withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
       withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)validatePublicVoidNoArgMethodsWithIOSClass:(IOSClass *)annotation
                                       withBoolean:(jboolean)isStatic
                                  withJavaUtilList:(id<JavaUtilList>)errors;

- (OrgJunitRunnersModelStatement *)withAfterClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (OrgJunitRunnersModelStatement *)withBeforeClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (OrgJunitRunnersModelStatement *)withInterruptIsolationWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnersParentRunner)

FOUNDATION_EXPORT void OrgJunitRunnersParentRunner_initWithIOSClass_(OrgJunitRunnersParentRunner *self, IOSClass *testClass);

FOUNDATION_EXPORT void OrgJunitRunnersParentRunner_initWithOrgJunitRunnersModelTestClass_(OrgJunitRunnersParentRunner *self, OrgJunitRunnersModelTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersParentRunner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersParentRunner")
