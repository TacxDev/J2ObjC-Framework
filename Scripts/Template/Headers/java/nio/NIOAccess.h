//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/NIOAccess.java
//

#ifndef _JavaNioNIOAccess_H_
#define _JavaNioNIOAccess_H_

#include "../../J2ObjC_header.h"

@class JavaNioBuffer;

/*!
 @brief This class is used via JNI by code in frameworks/base/.
 */
@interface JavaNioNIOAccess : NSObject

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Returns the underlying Java array containing the data of the
 given Buffer, or null if the Buffer is not backed by a Java array.
 */
+ (id)getBaseArrayWithJavaNioBuffer:(JavaNioBuffer *)b;

/*!
 @brief Returns the offset in bytes from the start of the underlying
 Java array object containing the data of the given Buffer to
 the actual start of the data.
 The start of the data takes into
 account the Buffer's current position. This method is only
 meaningful if getBaseArray() returns non-null.
 */
+ (jint)getBaseArrayOffsetWithJavaNioBuffer:(JavaNioBuffer *)b;

/*!
 @brief Returns the underlying native pointer to the data of the given
 Buffer starting at the Buffer's current position, or 0 if the
 Buffer is not backed by native heap storage.
 */
+ (jlong)getBasePointerWithJavaNioBuffer:(JavaNioBuffer *)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioNIOAccess)

FOUNDATION_EXPORT jlong JavaNioNIOAccess_getBasePointerWithJavaNioBuffer_(JavaNioBuffer *b);

FOUNDATION_EXPORT id JavaNioNIOAccess_getBaseArrayWithJavaNioBuffer_(JavaNioBuffer *b);

FOUNDATION_EXPORT jint JavaNioNIOAccess_getBaseArrayOffsetWithJavaNioBuffer_(JavaNioBuffer *b);

FOUNDATION_EXPORT void JavaNioNIOAccess_init(JavaNioNIOAccess *self);

FOUNDATION_EXPORT JavaNioNIOAccess *new_JavaNioNIOAccess_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioNIOAccess)

#endif // _JavaNioNIOAccess_H_
