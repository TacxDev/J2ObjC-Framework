//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/exceptions/misusing/UnfinishedStubbingException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingUnfinishedStubbingException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingUnfinishedStubbingException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingUnfinishedStubbingException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingUnfinishedStubbingException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingUnfinishedStubbingException

#if !defined (OrgMockitoExceptionsMisusingUnfinishedStubbingException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingUnfinishedStubbingException || defined(INCLUDE_OrgMockitoExceptionsMisusingUnfinishedStubbingException))
#define OrgMockitoExceptionsMisusingUnfinishedStubbingException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingUnfinishedStubbingException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingUnfinishedStubbingException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingUnfinishedStubbingException_initWithNSString_(OrgMockitoExceptionsMisusingUnfinishedStubbingException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingUnfinishedStubbingException *new_OrgMockitoExceptionsMisusingUnfinishedStubbingException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingUnfinishedStubbingException *create_OrgMockitoExceptionsMisusingUnfinishedStubbingException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingUnfinishedStubbingException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingUnfinishedStubbingException")
