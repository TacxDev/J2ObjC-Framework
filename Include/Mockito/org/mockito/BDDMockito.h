//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/BDDMockito.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoBDDMockito")
#ifdef RESTRICT_OrgMockitoBDDMockito
#define INCLUDE_ALL_OrgMockitoBDDMockito 0
#else
#define INCLUDE_ALL_OrgMockitoBDDMockito 1
#endif
#undef RESTRICT_OrgMockitoBDDMockito

#if !defined (OrgMockitoBDDMockito_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito))
#define OrgMockitoBDDMockito_

#define RESTRICT_OrgMockitoMockito 1
#define INCLUDE_OrgMockitoMockito 1
#include "org/mockito/Mockito.h"

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoBDDMockito_BDDMyOngoingStubbing;
@protocol OrgMockitoBDDMockito_BDDStubber;
@protocol OrgMockitoBDDMockito_Then;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoBDDMockito : OrgMockitoMockito

#pragma mark Public

- (instancetype)init;

+ (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)givenWithId:(id)methodCall;

+ (id<OrgMockitoBDDMockito_Then>)thenWithId:(id)mock;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willCallRealMethod;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willDoNothing;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned
                                      withNSObjectArray:(IOSObjectArray *)toBeReturnedNext;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown
                                           withIOSClassArray:(IOSObjectArray *)throwableTypes;

+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithJavaLangThrowableArray:(IOSObjectArray *)toBeThrown;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito)

FOUNDATION_EXPORT void OrgMockitoBDDMockito_init(OrgMockitoBDDMockito *self);

FOUNDATION_EXPORT OrgMockitoBDDMockito *new_OrgMockitoBDDMockito_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoBDDMockito *create_OrgMockitoBDDMockito_init(void);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDMyOngoingStubbing> OrgMockitoBDDMockito_givenWithId_(id methodCall);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_Then> OrgMockitoBDDMockito_thenWithId_(id mock);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithJavaLangThrowableArray_(IOSObjectArray *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithIOSClass_(IOSClass *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithIOSClass_withIOSClassArray_(IOSClass *toBeThrown, IOSObjectArray *throwableTypes);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willAnswerWithOrgMockitoStubbingAnswer_(id<OrgMockitoStubbingAnswer> answer);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willWithOrgMockitoStubbingAnswer_(id<OrgMockitoStubbingAnswer> answer);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willDoNothing(void);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willReturnWithId_(id toBeReturned);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willReturnWithId_withNSObjectArray_(id toBeReturned, IOSObjectArray *toBeReturnedNext);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willCallRealMethod(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito)

#endif

#if !defined (OrgMockitoBDDMockito_BDDMyOngoingStubbing_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDMyOngoingStubbing))
#define OrgMockitoBDDMockito_BDDMyOngoingStubbing_

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;

@protocol OrgMockitoBDDMockito_BDDMyOngoingStubbing < JavaObject >

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value
                                                withNSObjectArray:(IOSObjectArray *)values;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithJavaLangThrowableArray:(IOSObjectArray *)throwables;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithIOSClass:(IOSClass *)throwableType;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithIOSClass:(IOSClass *)throwableType
                                                     withIOSClassArray:(IOSObjectArray *)throwableTypes;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willCallRealMethod;

- (id)getMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDMyOngoingStubbing)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDMyOngoingStubbing)

#endif

#if !defined (OrgMockitoBDDMockito_Then_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_Then))
#define OrgMockitoBDDMockito_Then_

@protocol OrgMockitoInOrder;
@protocol OrgMockitoVerificationVerificationMode;

@protocol OrgMockitoBDDMockito_Then < JavaObject >

- (id)should;

- (id)shouldWithOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (id)shouldWithOrgMockitoInOrder:(id<OrgMockitoInOrder>)inOrder;

- (id)shouldWithOrgMockitoInOrder:(id<OrgMockitoInOrder>)inOrder
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (void)shouldHaveZeroInteractions;

- (void)shouldHaveNoMoreInteractions;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_Then)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_Then)

#endif

#if !defined (OrgMockitoBDDMockito_BDDStubber_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDStubber))
#define OrgMockitoBDDMockito_BDDStubber_

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;

@protocol OrgMockitoBDDMockito_BDDStubber < JavaObject >

- (id<OrgMockitoBDDMockito_BDDStubber>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoBDDMockito_BDDStubber>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoBDDMockito_BDDStubber>)willNothing;

- (id<OrgMockitoBDDMockito_BDDStubber>)willDoNothing;

- (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned;

- (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned
                                      withNSObjectArray:(IOSObjectArray *)nextToBeReturned;

- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithJavaLangThrowableArray:(IOSObjectArray *)toBeThrown;

- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown;

- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown
                                           withIOSClassArray:(IOSObjectArray *)nextToBeThrown;

- (id<OrgMockitoBDDMockito_BDDStubber>)willCallRealMethod;

- (id)givenWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDStubber)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDStubber)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoBDDMockito")
