//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/invocation/Invocation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInvocationInvocation")
#ifdef RESTRICT_OrgMockitoInvocationInvocation
#define INCLUDE_ALL_OrgMockitoInvocationInvocation 0
#else
#define INCLUDE_ALL_OrgMockitoInvocationInvocation 1
#endif
#undef RESTRICT_OrgMockitoInvocationInvocation

#if !defined (OrgMockitoInvocationInvocation_) && (INCLUDE_ALL_OrgMockitoInvocationInvocation || defined(INCLUDE_OrgMockitoInvocationInvocation))
#define OrgMockitoInvocationInvocation_

#define RESTRICT_OrgMockitoInvocationInvocationOnMock 1
#define INCLUDE_OrgMockitoInvocationInvocationOnMock 1
#include "org/mockito/invocation/InvocationOnMock.h"

#define RESTRICT_OrgMockitoInvocationDescribedInvocation 1
#define INCLUDE_OrgMockitoInvocationDescribedInvocation 1
#include "org/mockito/invocation/DescribedInvocation.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoInvocationStubInfo;

@protocol OrgMockitoInvocationInvocation < OrgMockitoInvocationInvocationOnMock, OrgMockitoInvocationDescribedInvocation, JavaObject >

- (jboolean)isVerified;

- (jint)getSequenceNumber;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (IOSObjectArray *)getRawArguments;

- (IOSClass *)getRawReturnType;

- (void)markVerified;

- (id<OrgMockitoInvocationStubInfo>)stubInfo;

- (void)markStubbedWithOrgMockitoInvocationStubInfo:(id<OrgMockitoInvocationStubInfo>)stubInfo;

- (jboolean)isIgnoredForVerification;

- (void)ignoreForVerification;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationInvocation)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationInvocation)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInvocationInvocation")
