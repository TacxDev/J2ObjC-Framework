//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/stubbing/BaseStubber.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingBaseStubber")
#ifdef RESTRICT_OrgMockitoStubbingBaseStubber
#define INCLUDE_ALL_OrgMockitoStubbingBaseStubber 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingBaseStubber 1
#endif
#undef RESTRICT_OrgMockitoStubbingBaseStubber

#if !defined (OrgMockitoStubbingBaseStubber_) && (INCLUDE_ALL_OrgMockitoStubbingBaseStubber || defined(INCLUDE_OrgMockitoStubbingBaseStubber))
#define OrgMockitoStubbingBaseStubber_

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingStubber;

@protocol OrgMockitoStubbingBaseStubber < JavaObject >

- (id<OrgMockitoStubbingStubber>)doThrowWithJavaLangThrowableArray:(IOSObjectArray *)toBeThrown;

- (id<OrgMockitoStubbingStubber>)doThrowWithIOSClass:(IOSClass *)toBeThrown;

- (id<OrgMockitoStubbingStubber>)doThrowWithIOSClass:(IOSClass *)toBeThrown
                                   withIOSClassArray:(IOSObjectArray *)nextToBeThrown;

- (id<OrgMockitoStubbingStubber>)doAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingStubber>)doNothing;

- (id<OrgMockitoStubbingStubber>)doReturnWithId:(id)toBeReturned;

- (id<OrgMockitoStubbingStubber>)doReturnWithId:(id)toBeReturned
                              withNSObjectArray:(IOSObjectArray *)nextToBeReturned;

- (id<OrgMockitoStubbingStubber>)doCallRealMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingBaseStubber)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingBaseStubber)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingBaseStubber")