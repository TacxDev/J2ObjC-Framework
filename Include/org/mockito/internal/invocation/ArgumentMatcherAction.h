//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/invocation/ArgumentMatcherAction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationArgumentMatcherAction")
#ifdef RESTRICT_OrgMockitoInternalInvocationArgumentMatcherAction
#define INCLUDE_ALL_OrgMockitoInternalInvocationArgumentMatcherAction 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationArgumentMatcherAction 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationArgumentMatcherAction

#if !defined (OrgMockitoInternalInvocationArgumentMatcherAction_) && (INCLUDE_ALL_OrgMockitoInternalInvocationArgumentMatcherAction || defined(INCLUDE_OrgMockitoInternalInvocationArgumentMatcherAction))
#define OrgMockitoInternalInvocationArgumentMatcherAction_

@class JavaLangBoolean;
@protocol OrgMockitoArgumentMatcher;

@protocol OrgMockitoInternalInvocationArgumentMatcherAction < JavaObject >

- (jboolean)applyWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher
                                        withId:(id)argument;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationArgumentMatcherAction)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationArgumentMatcherAction)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationArgumentMatcherAction")