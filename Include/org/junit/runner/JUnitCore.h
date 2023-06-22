//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runner/JUnitCore.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerJUnitCore")
#ifdef RESTRICT_OrgJunitRunnerJUnitCore
#define INCLUDE_ALL_OrgJunitRunnerJUnitCore 0
#else
#define INCLUDE_ALL_OrgJunitRunnerJUnitCore 1
#endif
#undef RESTRICT_OrgJunitRunnerJUnitCore

#if !defined (OrgJunitRunnerJUnitCore_) && (INCLUDE_ALL_OrgJunitRunnerJUnitCore || defined(INCLUDE_OrgJunitRunnerJUnitCore))
#define OrgJunitRunnerJUnitCore_

@class IOSObjectArray;
@class OrgJunitRunnerComputer;
@class OrgJunitRunnerNotificationRunListener;
@class OrgJunitRunnerRequest;
@class OrgJunitRunnerResult;
@class OrgJunitRunnerRunner;
@protocol JunitFrameworkTest;
@protocol OrgJunitInternalJUnitSystem;

@interface OrgJunitRunnerJUnitCore : NSObject

#pragma mark Public

- (instancetype)init;

- (void)addListenerWithOrgJunitRunnerNotificationRunListener:(OrgJunitRunnerNotificationRunListener *)listener;

- (NSString *)getVersion;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

- (void)removeListenerWithOrgJunitRunnerNotificationRunListener:(OrgJunitRunnerNotificationRunListener *)listener;

- (OrgJunitRunnerResult *)runWithIOSClassArray:(IOSObjectArray *)classes;

- (OrgJunitRunnerResult *)runWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)computer
                                      withIOSClassArray:(IOSObjectArray *)classes;

- (OrgJunitRunnerResult *)runWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request;

- (OrgJunitRunnerResult *)runWithOrgJunitRunnerRunner:(OrgJunitRunnerRunner *)runner;

- (OrgJunitRunnerResult *)runWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

+ (OrgJunitRunnerResult *)runClassesWithIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerResult *)runClassesWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)computer
                                             withIOSClassArray:(IOSObjectArray *)classes;

#pragma mark Package-Private

+ (OrgJunitRunnerComputer *)defaultComputer;

- (OrgJunitRunnerResult *)runMainWithOrgJunitInternalJUnitSystem:(id<OrgJunitInternalJUnitSystem>)system
                                               withNSStringArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerJUnitCore)

FOUNDATION_EXPORT void OrgJunitRunnerJUnitCore_init(OrgJunitRunnerJUnitCore *self);

FOUNDATION_EXPORT OrgJunitRunnerJUnitCore *new_OrgJunitRunnerJUnitCore_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerJUnitCore *create_OrgJunitRunnerJUnitCore_init(void);

FOUNDATION_EXPORT void OrgJunitRunnerJUnitCore_mainWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT OrgJunitRunnerResult *OrgJunitRunnerJUnitCore_runClassesWithIOSClassArray_(IOSObjectArray *classes);

FOUNDATION_EXPORT OrgJunitRunnerResult *OrgJunitRunnerJUnitCore_runClassesWithOrgJunitRunnerComputer_withIOSClassArray_(OrgJunitRunnerComputer *computer, IOSObjectArray *classes);

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitRunnerJUnitCore_defaultComputer(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerJUnitCore)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerJUnitCore")