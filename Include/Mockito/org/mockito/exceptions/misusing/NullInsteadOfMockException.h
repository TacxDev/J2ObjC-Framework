//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/exceptions/misusing/NullInsteadOfMockException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingNullInsteadOfMockException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingNullInsteadOfMockException

#if !defined (OrgMockitoExceptionsMisusingNullInsteadOfMockException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException || defined(INCLUDE_OrgMockitoExceptionsMisusingNullInsteadOfMockException))
#define OrgMockitoExceptionsMisusingNullInsteadOfMockException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingNullInsteadOfMockException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingNullInsteadOfMockException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingNullInsteadOfMockException_initWithNSString_(OrgMockitoExceptionsMisusingNullInsteadOfMockException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingNullInsteadOfMockException *new_OrgMockitoExceptionsMisusingNullInsteadOfMockException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingNullInsteadOfMockException *create_OrgMockitoExceptionsMisusingNullInsteadOfMockException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingNullInsteadOfMockException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingNullInsteadOfMockException")
