//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/verification/api/VerificationData.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationData")
#ifdef RESTRICT_OrgMockitoInternalVerificationApiVerificationData
#define INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationData 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationData 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationApiVerificationData

#if !defined (OrgMockitoInternalVerificationApiVerificationData_) && (INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationData || defined(INCLUDE_OrgMockitoInternalVerificationApiVerificationData))
#define OrgMockitoInternalVerificationApiVerificationData_

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInvocationMatchableInvocation;

@protocol OrgMockitoInternalVerificationApiVerificationData < JavaObject >

- (id<JavaUtilList>)getAllInvocations;

- (id<OrgMockitoInvocationMatchableInvocation>)getTarget;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationApiVerificationData)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationApiVerificationData)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationData")
