//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/exceptions/misusing/MockitoConfigurationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingMockitoConfigurationException")
#ifdef RESTRICT_OrgMockitoExceptionsMisusingMockitoConfigurationException
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingMockitoConfigurationException 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsMisusingMockitoConfigurationException 1
#endif
#undef RESTRICT_OrgMockitoExceptionsMisusingMockitoConfigurationException

#if !defined (OrgMockitoExceptionsMisusingMockitoConfigurationException_) && (INCLUDE_ALL_OrgMockitoExceptionsMisusingMockitoConfigurationException || defined(INCLUDE_OrgMockitoExceptionsMisusingMockitoConfigurationException))
#define OrgMockitoExceptionsMisusingMockitoConfigurationException_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoException 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoException 1
#include "org/mockito/exceptions/base/MockitoException.h"

@class JavaLangException;
@class JavaLangThrowable;

@interface OrgMockitoExceptionsMisusingMockitoConfigurationException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangException:(JavaLangException *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingMockitoConfigurationException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_(OrgMockitoExceptionsMisusingMockitoConfigurationException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMockitoConfigurationException *new_OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMockitoConfigurationException *create_OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_withJavaLangException_(OrgMockitoExceptionsMisusingMockitoConfigurationException *self, NSString *message, JavaLangException *cause);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMockitoConfigurationException *new_OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMockitoConfigurationException *create_OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *cause);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingMockitoConfigurationException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsMisusingMockitoConfigurationException")
