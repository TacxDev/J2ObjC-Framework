//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/stubbing/Stubbing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingStubbing")
#ifdef RESTRICT_OrgMockitoStubbingStubbing
#define INCLUDE_ALL_OrgMockitoStubbingStubbing 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingStubbing 1
#endif
#undef RESTRICT_OrgMockitoStubbingStubbing

#if !defined (OrgMockitoStubbingStubbing_) && (INCLUDE_ALL_OrgMockitoStubbingStubbing || defined(INCLUDE_OrgMockitoStubbingStubbing))
#define OrgMockitoStubbingStubbing_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

@class JavaLangBoolean;
@class OrgMockitoQualityStrictness;
@protocol OrgMockitoInvocationInvocation;

@protocol OrgMockitoStubbingStubbing < OrgMockitoStubbingAnswer, JavaObject >

- (id<OrgMockitoInvocationInvocation>)getInvocation;

- (jboolean)wasUsed;

- (OrgMockitoQualityStrictness *)getStrictness;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingStubbing)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingStubbing)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingStubbing")