//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/stubbing/OngoingStubbing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingOngoingStubbing")
#ifdef RESTRICT_OrgMockitoStubbingOngoingStubbing
#define INCLUDE_ALL_OrgMockitoStubbingOngoingStubbing 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingOngoingStubbing 1
#endif
#undef RESTRICT_OrgMockitoStubbingOngoingStubbing

#if !defined (OrgMockitoStubbingOngoingStubbing_) && (INCLUDE_ALL_OrgMockitoStubbingOngoingStubbing || defined(INCLUDE_OrgMockitoStubbingOngoingStubbing))
#define OrgMockitoStubbingOngoingStubbing_

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;

@protocol OrgMockitoStubbingOngoingStubbing < JavaObject >

- (id<OrgMockitoStubbingOngoingStubbing>)thenReturnWithId:(id)value;

- (id<OrgMockitoStubbingOngoingStubbing>)thenReturnWithId:(id)value
                                        withNSObjectArray:(IOSObjectArray *)values;

- (id<OrgMockitoStubbingOngoingStubbing>)thenThrowWithJavaLangThrowableArray:(IOSObjectArray *)throwables;

- (id<OrgMockitoStubbingOngoingStubbing>)thenThrowWithIOSClass:(IOSClass *)throwableType;

- (id<OrgMockitoStubbingOngoingStubbing>)thenThrowWithIOSClass:(IOSClass *)toBeThrown
                                             withIOSClassArray:(IOSObjectArray *)nextToBeThrown;

- (id<OrgMockitoStubbingOngoingStubbing>)thenCallRealMethod;

- (id<OrgMockitoStubbingOngoingStubbing>)thenAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingOngoingStubbing>)thenWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id)getMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingOngoingStubbing)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingOngoingStubbing)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingOngoingStubbing")