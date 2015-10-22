//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/GaiException.java
//

#ifndef _LibcoreIoGaiException_H_
#define _LibcoreIoGaiException_H_

#include "../../J2ObjC_header.h"
#include "../../java/lang/RuntimeException.h"

@class JavaLangThrowable;
@class JavaNetUnknownHostException;

/*!
 @brief An unchecked exception thrown when the <code>Os</code> <code>getaddrinfo</code> or <code>getnameinfo</code>
 methods fail.
 This exception contains the native error value, for comparison against the
 <code>GAI_</code> constants in <code>OsConstants</code>, should sophisticated
 callers need to adjust their behavior based on the exact failure.
 */
@interface LibcoreIoGaiException : JavaLangRuntimeException {
 @public
  jint error_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)functionName
                         withInt:(jint)error;

- (instancetype)initWithNSString:(NSString *)functionName
                         withInt:(jint)error
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Converts the stashed function name and error value to a human-readable string.
 We do this here rather than in the constructor so that callers only pay for
 this if they need it.
 */
- (NSString *)getMessage;

- (JavaNetUnknownHostException *)rethrowAsUnknownHostException;

- (JavaNetUnknownHostException *)rethrowAsUnknownHostExceptionWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoGaiException)

FOUNDATION_EXPORT void LibcoreIoGaiException_initWithNSString_withInt_(LibcoreIoGaiException *self, NSString *functionName, jint error);

FOUNDATION_EXPORT LibcoreIoGaiException *new_LibcoreIoGaiException_initWithNSString_withInt_(NSString *functionName, jint error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void LibcoreIoGaiException_initWithNSString_withInt_withJavaLangThrowable_(LibcoreIoGaiException *self, NSString *functionName, jint error, JavaLangThrowable *cause);

FOUNDATION_EXPORT LibcoreIoGaiException *new_LibcoreIoGaiException_initWithNSString_withInt_withJavaLangThrowable_(NSString *functionName, jint error, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoGaiException)

#endif // _LibcoreIoGaiException_H_
