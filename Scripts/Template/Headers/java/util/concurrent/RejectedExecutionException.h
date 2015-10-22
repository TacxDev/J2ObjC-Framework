//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/RejectedExecutionException.java
//

#ifndef _JavaUtilConcurrentRejectedExecutionException_H_
#define _JavaUtilConcurrentRejectedExecutionException_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Exception thrown by an <code>Executor</code> when a task cannot be
 accepted for execution.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentRejectedExecutionException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <code>RejectedExecutionException</code> with no detail message.
 The cause is not initialized, and may subsequently be
 initialized by a call to <code>initCause</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>RejectedExecutionException</code> with the
 specified detail message.
 The cause is not initialized, and may
 subsequently be initialized by a call to <code>initCause</code>
 .
 @param message the detail message
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a <code>RejectedExecutionException</code> with the
 specified detail message and cause.
 @param message the detail message
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method)
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>RejectedExecutionException</code> with the
 specified cause.
 The detail message is set to <code>(cause ==
 null ? null : cause.toString())</code>
  (which typically contains
 the class and detail message of <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method)
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentRejectedExecutionException)

FOUNDATION_EXPORT void JavaUtilConcurrentRejectedExecutionException_init(JavaUtilConcurrentRejectedExecutionException *self);

FOUNDATION_EXPORT JavaUtilConcurrentRejectedExecutionException *new_JavaUtilConcurrentRejectedExecutionException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentRejectedExecutionException_initWithNSString_(JavaUtilConcurrentRejectedExecutionException *self, NSString *message);

FOUNDATION_EXPORT JavaUtilConcurrentRejectedExecutionException *new_JavaUtilConcurrentRejectedExecutionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentRejectedExecutionException_initWithNSString_withJavaLangThrowable_(JavaUtilConcurrentRejectedExecutionException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaUtilConcurrentRejectedExecutionException *new_JavaUtilConcurrentRejectedExecutionException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentRejectedExecutionException_initWithJavaLangThrowable_(JavaUtilConcurrentRejectedExecutionException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaUtilConcurrentRejectedExecutionException *new_JavaUtilConcurrentRejectedExecutionException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentRejectedExecutionException)

#endif // _JavaUtilConcurrentRejectedExecutionException_H_
