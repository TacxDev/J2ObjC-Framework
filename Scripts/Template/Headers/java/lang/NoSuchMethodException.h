//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NoSuchMethodException.java
//

#ifndef _JavaLangNoSuchMethodException_H_
#define _JavaLangNoSuchMethodException_H_

#include "../../J2ObjC_header.h"
#include "../../java/lang/ReflectiveOperationException.h"

/*!
 @brief Thrown when the VM notices that a program tries to reference,
 on a class or object, a method that does not exist.
 */
@interface JavaLangNoSuchMethodException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs a new <code>NoSuchMethodException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NoSuchMethodException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchMethodException)

FOUNDATION_EXPORT void JavaLangNoSuchMethodException_init(JavaLangNoSuchMethodException *self);

FOUNDATION_EXPORT JavaLangNoSuchMethodException *new_JavaLangNoSuchMethodException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangNoSuchMethodException_initWithNSString_(JavaLangNoSuchMethodException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNoSuchMethodException *new_JavaLangNoSuchMethodException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchMethodException)

#endif // _JavaLangNoSuchMethodException_H_
