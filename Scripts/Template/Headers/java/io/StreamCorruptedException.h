//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StreamCorruptedException.java
//

#ifndef _JavaIoStreamCorruptedException_H_
#define _JavaIoStreamCorruptedException_H_

#include "../../J2ObjC_header.h"
#include "../../java/io/ObjectStreamException.h"

/*!
 @brief Signals that the <code>ObjectInputStream.readObject()</code> method could not
 read an object due to missing information (for example, a cyclic reference
 that doesn't match a previous instance, or a missing class descriptor for the
 object to be loaded).
 */
@interface JavaIoStreamCorruptedException : JavaIoObjectStreamException

#pragma mark Public

/*!
 @brief Constructs a new <code>StreamCorruptedException</code> with its stack trace
 filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>StreamCorruptedException</code> with its stack trace
 and detail message filled in.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStreamCorruptedException)

FOUNDATION_EXPORT void JavaIoStreamCorruptedException_init(JavaIoStreamCorruptedException *self);

FOUNDATION_EXPORT JavaIoStreamCorruptedException *new_JavaIoStreamCorruptedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoStreamCorruptedException_initWithNSString_(JavaIoStreamCorruptedException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoStreamCorruptedException *new_JavaIoStreamCorruptedException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStreamCorruptedException)

#endif // _JavaIoStreamCorruptedException_H_
