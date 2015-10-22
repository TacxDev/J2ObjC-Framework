//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Error.java
//

#ifndef _JavaLangError_H_
#define _JavaLangError_H_

#include "../../J2ObjC_header.h"
#include "../../java/lang/Throwable.h"

/*!
 @brief <code>Error</code> is the superclass of all classes that represent unrecoverable
 errors.
 When errors are thrown, they should not be caught by application
 code.
 */
@interface JavaLangError : JavaLangThrowable

#pragma mark Public

/*!
 @brief Constructs a new <code>Error</code> that includes the current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Error</code> with the current stack trace and the
 specified detail message.
 @param detailMessage
 the detail message for this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>Error</code> with the current stack trace, the
 specified detail message and the specified cause.
 @param detailMessage
 the detail message for this error.
 @param throwable
 the cause of this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

/*!
 @brief Constructs a new <code>Error</code> with the current stack trace and the
 specified cause.
 @param throwable
 the cause of this error.
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;

#pragma mark Protected

/*!
 @brief Constructs a new <code>Error</code> with the current stack trace,
 the specified detail message, the specified cause, and whether suppression
 and/or writable stack trace is enabled.
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause
                     withBoolean:(jboolean)enableSuppression
                     withBoolean:(jboolean)writableStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangError)

FOUNDATION_EXPORT void JavaLangError_init(JavaLangError *self);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangError_initWithNSString_(JavaLangError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangError_initWithNSString_withJavaLangThrowable_(JavaLangError *self, NSString *detailMessage, JavaLangThrowable *throwable);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangError_initWithJavaLangThrowable_(JavaLangError *self, JavaLangThrowable *throwable);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithJavaLangThrowable_(JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangError_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(JavaLangError *self, NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangError)

#endif // _JavaLangError_H_
