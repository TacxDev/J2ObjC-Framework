//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/StubberImpl.java
//

#ifndef _OrgMockitoInternalStubbingStubberImpl_H_
#define _OrgMockitoInternalStubbingStubberImpl_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../org/mockito/stubbing/Stubber.h"

@class IOSClass;
@class JavaLangThrowable;
@protocol JavaUtilList;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalStubbingStubberImpl : NSObject < OrgMockitoStubbingStubber > {
 @public
  id<JavaUtilList> answers_;
}

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoStubbingStubber>)doAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingStubber>)doCallRealMethod;

- (id<OrgMockitoStubbingStubber>)doNothing;

- (id<OrgMockitoStubbingStubber>)doReturnWithId:(id)toBeReturned;

- (id<OrgMockitoStubbingStubber>)doThrowWithIOSClass:(IOSClass *)toBeThrown;

- (id<OrgMockitoStubbingStubber>)doThrowWithJavaLangThrowable:(JavaLangThrowable *)toBeThrown;

- (id)whenWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingStubberImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingStubberImpl, answers_, id<JavaUtilList>)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingStubberImpl_init(OrgMockitoInternalStubbingStubberImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingStubberImpl *new_OrgMockitoInternalStubbingStubberImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingStubberImpl)

#endif // _OrgMockitoInternalStubbingStubberImpl_H_
