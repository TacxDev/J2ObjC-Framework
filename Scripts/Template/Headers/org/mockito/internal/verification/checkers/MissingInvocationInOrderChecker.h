//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/MissingInvocationInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_

#include "../../../../../J2ObjC_header.h"

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_init(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *new_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *self, OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker *new_OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker)

#endif // _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_
