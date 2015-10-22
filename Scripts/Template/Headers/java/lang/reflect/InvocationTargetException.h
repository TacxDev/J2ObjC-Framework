//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/InvocationTargetException.java
//

#ifndef _JavaLangReflectInvocationTargetException_H_
#define _JavaLangReflectInvocationTargetException_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/lang/ReflectiveOperationException.h"

@class JavaLangThrowable;

/*!
 @brief This class provides a wrapper for an exception thrown by a <code>Method</code> or
 <code>Constructor</code> invocation.
 */
@interface JavaLangReflectInvocationTargetException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a new <code>InvocationTargetException</code> instance with its
 cause / target exception filled in.
 @param exception
 the exception which occurred while running the Method or
 Constructor
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception;

/*!
 @brief Constructs a new <code>InvocationTargetException</code> instance with its
 cause / target exception and message filled in.
 @param detailMessage
 the detail message for the exception
 @param exception
 the exception which occurred while running the Method or
 Constructor
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception
                             withNSString:(NSString *)detailMessage;

/*!
 @brief Returns the cause of this exception, which may be <code>null</code>.
 @return the cause of this exception
 */
- (JavaLangThrowable *)getCause;

/*!
 @brief Returns the target exception, which may be <code>null</code>.
 @return the target exception
 */
- (JavaLangThrowable *)getTargetException;

#pragma mark Protected

/*!
 @brief Constructs a new <code>InvocationTargetException</code> instance with a
 <code>null</code> cause / target exception.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectInvocationTargetException)

FOUNDATION_EXPORT void JavaLangReflectInvocationTargetException_init(JavaLangReflectInvocationTargetException *self);

FOUNDATION_EXPORT JavaLangReflectInvocationTargetException *new_JavaLangReflectInvocationTargetException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangReflectInvocationTargetException_initWithJavaLangThrowable_(JavaLangReflectInvocationTargetException *self, JavaLangThrowable *exception);

FOUNDATION_EXPORT JavaLangReflectInvocationTargetException *new_JavaLangReflectInvocationTargetException_initWithJavaLangThrowable_(JavaLangThrowable *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangReflectInvocationTargetException_initWithJavaLangThrowable_withNSString_(JavaLangReflectInvocationTargetException *self, JavaLangThrowable *exception, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangReflectInvocationTargetException *new_JavaLangReflectInvocationTargetException_initWithJavaLangThrowable_withNSString_(JavaLangThrowable *exception, NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectInvocationTargetException)

#endif // _JavaLangReflectInvocationTargetException_H_
