//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/misusing/MockitoConfigurationException.java
//

#ifndef _OrgMockitoExceptionsMisusingMockitoConfigurationException_H_
#define _OrgMockitoExceptionsMisusingMockitoConfigurationException_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../org/mockito/exceptions/base/MockitoException.h"

@class JavaLangException;

@interface OrgMockitoExceptionsMisusingMockitoConfigurationException : OrgMockitoExceptionsBaseMockitoException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangException:(JavaLangException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsMisusingMockitoConfigurationException)

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_(OrgMockitoExceptionsMisusingMockitoConfigurationException *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMockitoConfigurationException *new_OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_withJavaLangException_(OrgMockitoExceptionsMisusingMockitoConfigurationException *self, NSString *message, JavaLangException *cause);

FOUNDATION_EXPORT OrgMockitoExceptionsMisusingMockitoConfigurationException *new_OrgMockitoExceptionsMisusingMockitoConfigurationException_initWithNSString_withJavaLangException_(NSString *message, JavaLangException *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsMisusingMockitoConfigurationException)

#endif // _OrgMockitoExceptionsMisusingMockitoConfigurationException_H_
