//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/BufferUnderflowException.java
//

#ifndef _JavaNioBufferUnderflowException_H_
#define _JavaNioBufferUnderflowException_H_

#include "../../J2ObjC_header.h"
#include "../../java/lang/RuntimeException.h"

/*!
 @brief A <code>BufferUnderflowException</code> is thrown when elements are read
 from a buffer but there are not enough remaining elements in the buffer.
 */
@interface JavaNioBufferUnderflowException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <code>BufferUnderflowException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioBufferUnderflowException)

FOUNDATION_EXPORT void JavaNioBufferUnderflowException_init(JavaNioBufferUnderflowException *self);

FOUNDATION_EXPORT JavaNioBufferUnderflowException *new_JavaNioBufferUnderflowException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioBufferUnderflowException)

#endif // _JavaNioBufferUnderflowException_H_
