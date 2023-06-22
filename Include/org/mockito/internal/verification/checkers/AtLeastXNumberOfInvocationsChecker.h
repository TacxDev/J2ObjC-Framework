//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/AtLeastXNumberOfInvocationsChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker

#if !defined (OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker))
#define OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_

@class JavaLangInteger;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationMatchableInvocation;

@interface OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)checkAtLeastNumberOfInvocationsWithJavaUtilList:(id<JavaUtilList>)invocations
            withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted
                                                withInt:(jint)wantedCount;

+ (void)checkAtLeastNumberOfInvocationsWithJavaUtilList:(id<JavaUtilList>)invocations
            withOrgMockitoInvocationMatchableInvocation:(id<OrgMockitoInvocationMatchableInvocation>)wanted
                                                withInt:(jint)wantedCount
    withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_init(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker *new_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker *create_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_init(void);

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_checkAtLeastNumberOfInvocationsWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_withInt_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted, jint wantedCount);

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker_checkAtLeastNumberOfInvocationsWithJavaUtilList_withOrgMockitoInvocationMatchableInvocation_withInt_withOrgMockitoInternalVerificationApiInOrderContext_(id<JavaUtilList> invocations, id<OrgMockitoInvocationMatchableInvocation> wanted, jint wantedCount, id<OrgMockitoInternalVerificationApiInOrderContext> orderingContext);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersAtLeastXNumberOfInvocationsChecker")
