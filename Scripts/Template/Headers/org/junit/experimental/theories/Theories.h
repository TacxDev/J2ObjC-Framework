//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/experimental/theories/Theories.java
//

#ifndef _OrgJunitExperimentalTheoriesTheories_H_
#define _OrgJunitExperimentalTheoriesTheories_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../org/junit/runners/BlockJUnit4ClassRunner.h"
#include "../../../../org/junit/runners/model/Statement.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangThrowable;
@class OrgJunitExperimentalTheoriesInternalAssignments;
@class OrgJunitInternalAssumptionViolatedException;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

@interface OrgJunitExperimentalTheoriesTheories : OrgJunitRunnersBlockJUnit4ClassRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (OrgJunitRunnersModelStatement *)methodBlockWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method;

#pragma mark Protected

- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;

- (id<JavaUtilList>)computeTestMethods;

- (void)validateConstructorWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateTestMethodsWithJavaUtilList:(id<JavaUtilList>)errors;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesTheories)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesTheories_initWithIOSClass_(OrgJunitExperimentalTheoriesTheories *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesTheories *new_OrgJunitExperimentalTheoriesTheories_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesTheories)

@interface OrgJunitExperimentalTheoriesTheories_TheoryAnchor : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                          withOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

- (void)evaluate;

#pragma mark Protected

- (void)handleAssumptionViolationWithOrgJunitInternalAssumptionViolatedException:(OrgJunitInternalAssumptionViolatedException *)e;

- (void)handleDataPointSuccess;

- (void)reportParameterizedErrorWithJavaLangThrowable:(JavaLangThrowable *)e
                                    withNSObjectArray:(IOSObjectArray *)params;

- (void)runWithAssignmentWithOrgJunitExperimentalTheoriesInternalAssignments:(OrgJunitExperimentalTheoriesInternalAssignments *)parameterAssignment;

- (void)runWithCompleteAssignmentWithOrgJunitExperimentalTheoriesInternalAssignments:(OrgJunitExperimentalTheoriesInternalAssignments *)complete;

- (void)runWithIncompleteAssignmentWithOrgJunitExperimentalTheoriesInternalAssignments:(OrgJunitExperimentalTheoriesInternalAssignments *)incomplete;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesTheories_TheoryAnchor)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesTheories_TheoryAnchor_initWithOrgJunitRunnersModelFrameworkMethod_withOrgJunitRunnersModelTestClass_(OrgJunitExperimentalTheoriesTheories_TheoryAnchor *self, OrgJunitRunnersModelFrameworkMethod *method, OrgJunitRunnersModelTestClass *testClass);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesTheories_TheoryAnchor *new_OrgJunitExperimentalTheoriesTheories_TheoryAnchor_initWithOrgJunitRunnersModelFrameworkMethod_withOrgJunitRunnersModelTestClass_(OrgJunitRunnersModelFrameworkMethod *method, OrgJunitRunnersModelTestClass *testClass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesTheories_TheoryAnchor)

#endif // _OrgJunitExperimentalTheoriesTheories_H_
