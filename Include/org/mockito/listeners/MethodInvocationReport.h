//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/listeners/MethodInvocationReport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport")
#ifdef RESTRICT_OrgMockitoListenersMethodInvocationReport
#define INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport 0
#else
#define INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport 1
#endif
#undef RESTRICT_OrgMockitoListenersMethodInvocationReport

#if !defined (OrgMockitoListenersMethodInvocationReport_) && (INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport || defined(INCLUDE_OrgMockitoListenersMethodInvocationReport))
#define OrgMockitoListenersMethodInvocationReport_

@class JavaLangBoolean;
@class JavaLangThrowable;
@protocol OrgMockitoInvocationDescribedInvocation;

@protocol OrgMockitoListenersMethodInvocationReport < JavaObject >

- (id<OrgMockitoInvocationDescribedInvocation>)getInvocation;

- (id)getReturnedValue;

- (JavaLangThrowable *)getThrowable;

- (jboolean)threwException;

- (NSString *)getLocationOfStubbing;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoListenersMethodInvocationReport)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoListenersMethodInvocationReport)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoListenersMethodInvocationReport")
