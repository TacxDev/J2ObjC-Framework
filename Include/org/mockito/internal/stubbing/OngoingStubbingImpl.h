//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/stubbing/OngoingStubbingImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl")
#ifdef RESTRICT_OrgMockitoInternalStubbingOngoingStubbingImpl
#define INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingOngoingStubbingImpl

#if !defined (OrgMockitoInternalStubbingOngoingStubbingImpl_) && (INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl || defined(INCLUDE_OrgMockitoInternalStubbingOngoingStubbingImpl))
#define OrgMockitoInternalStubbingOngoingStubbingImpl_

#define RESTRICT_OrgMockitoInternalStubbingBaseStubbing 1
#define INCLUDE_OrgMockitoInternalStubbingBaseStubbing 1
#include "org/mockito/internal/stubbing/BaseStubbing.h"

@class OrgMockitoInternalStubbingInvocationContainerImpl;
@class OrgMockitoQualityStrictness;
@protocol JavaUtilList;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingOngoingStubbing;

@interface OrgMockitoInternalStubbingOngoingStubbingImpl : OrgMockitoInternalStubbingBaseStubbing

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainer;

- (id)getMock;

- (id<JavaUtilList>)getRegisteredInvocations;

- (void)setStrictnessWithOrgMockitoQualityStrictness:(OrgMockitoQualityStrictness *)strictness;

- (id<OrgMockitoStubbingOngoingStubbing>)thenWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingOngoingStubbing>)thenAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingOngoingStubbingImpl)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingOngoingStubbingImpl_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingOngoingStubbingImpl *self, OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainer);

FOUNDATION_EXPORT OrgMockitoInternalStubbingOngoingStubbingImpl *new_OrgMockitoInternalStubbingOngoingStubbingImpl_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingOngoingStubbingImpl *create_OrgMockitoInternalStubbingOngoingStubbingImpl_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainer);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingOngoingStubbingImpl)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl")
