//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/MissingInvocationChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersMissingInvocationChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersMissingInvocationChecker

#if !defined (OrgMockitoInternalVerificationCheckersMissingInvocationChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersMissingInvocationChecker))
#define OrgMockitoInternalVerificationCheckersMissingInvocationChecker_

@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationMatchableInvocation;

@interface OrgMockitoInternalVerificationCheckersMissingInvocationChecker : NSObject

#pragma mark Public

+ (void)checkMissingInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
   withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted;

+ (void)checkMissingInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
   withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersMissingInvocationChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationChecker_checkMissingInvocationWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted);

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersMissingInvocationChecker_checkMissingInvocationWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_withOrgMockitoInternalVerificationApiInOrderContext_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted, id<OrgMockitoInternalVerificationApiInOrderContext> context);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersMissingInvocationChecker)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersMissingInvocationChecker")
