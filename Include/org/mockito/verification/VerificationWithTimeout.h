//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/verification/VerificationWithTimeout.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout")
#ifdef RESTRICT_OrgMockitoVerificationVerificationWithTimeout
#define INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout 0
#else
#define INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout 1
#endif
#undef RESTRICT_OrgMockitoVerificationVerificationWithTimeout

#if !defined (OrgMockitoVerificationVerificationWithTimeout_) && (INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout || defined(INCLUDE_OrgMockitoVerificationVerificationWithTimeout))
#define OrgMockitoVerificationVerificationWithTimeout_

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "org/mockito/verification/VerificationMode.h"

@class JavaLangInteger;

@protocol OrgMockitoVerificationVerificationWithTimeout < OrgMockitoVerificationVerificationMode, JavaObject >

- (id<OrgMockitoVerificationVerificationMode>)timesWithInt:(jint)wantedNumberOfInvocations;

- (id<OrgMockitoVerificationVerificationMode>)atLeastOnce;

- (id<OrgMockitoVerificationVerificationMode>)atLeastWithInt:(jint)minNumberOfInvocations;

- (id<OrgMockitoVerificationVerificationMode>)only;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoVerificationVerificationWithTimeout)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoVerificationVerificationWithTimeout)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout")
