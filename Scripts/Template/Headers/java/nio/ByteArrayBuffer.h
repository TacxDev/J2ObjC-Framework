//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteArrayBuffer.java
//

#ifndef _JavaNioByteArrayBuffer_H_
#define _JavaNioByteArrayBuffer_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/nio/ByteBuffer.h>

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;
@class JavaNioCharBuffer;
@class JavaNioDoubleBuffer;
@class JavaNioFloatBuffer;
@class JavaNioIntBuffer;
@class JavaNioLongBuffer;
@class JavaNioShortBuffer;

/*!
 @brief ByteArrayBuffer implements byte[]-backed ByteBuffers.
 */
@interface JavaNioByteArrayBuffer : JavaNioByteBuffer {
 @public
  /*!
   @brief These fields are non-private for NioUtils.unsafeArray.
   */
  IOSByteArray *backingArray_;
  jint arrayOffset_;
}

#pragma mark Public

- (JavaNioCharBuffer *)asCharBuffer;

- (JavaNioDoubleBuffer *)asDoubleBuffer;

- (JavaNioFloatBuffer *)asFloatBuffer;

- (JavaNioIntBuffer *)asIntBuffer;

- (JavaNioLongBuffer *)asLongBuffer;

- (JavaNioByteBuffer *)asReadOnlyBuffer;

- (JavaNioShortBuffer *)asShortBuffer;

- (JavaNioByteBuffer *)compact;

- (JavaNioByteBuffer *)duplicate;

- (jbyte)get;

- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)byteCount;

- (jbyte)getWithInt:(jint)index;

- (jchar)getChar;

- (jchar)getCharWithInt:(jint)index;

- (jdouble)getDouble;

- (jdouble)getDoubleWithInt:(jint)index;

- (jfloat)getFloat;

- (jfloat)getFloatWithInt:(jint)index;

- (jint)getInt;

- (jint)getIntWithInt:(jint)index;

- (jlong)getLong;

- (jlong)getLongWithInt:(jint)index;

- (jshort)getShort;

- (jshort)getShortWithInt:(jint)index;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (JavaNioByteBuffer *)putWithByte:(jbyte)b;

- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)byteCount;

- (JavaNioByteBuffer *)putWithInt:(jint)index
                         withByte:(jbyte)b;

- (JavaNioByteBuffer *)putCharWithChar:(jchar)value;

- (JavaNioByteBuffer *)putCharWithInt:(jint)index
                             withChar:(jchar)value;

- (JavaNioByteBuffer *)putDoubleWithDouble:(jdouble)value;

- (JavaNioByteBuffer *)putDoubleWithInt:(jint)index
                             withDouble:(jdouble)value;

- (JavaNioByteBuffer *)putFloatWithFloat:(jfloat)value;

- (JavaNioByteBuffer *)putFloatWithInt:(jint)index
                             withFloat:(jfloat)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)index
                             withInt:(jint)value;

- (JavaNioByteBuffer *)putLongWithInt:(jint)index
                             withLong:(jlong)value;

- (JavaNioByteBuffer *)putLongWithLong:(jlong)value;

- (JavaNioByteBuffer *)putShortWithInt:(jint)index
                             withShort:(jshort)value;

- (JavaNioByteBuffer *)putShortWithShort:(jshort)value;

- (JavaNioByteBuffer *)slice;

#pragma mark Package-Private

- (instancetype)initWithByteArray:(IOSByteArray *)backingArray;

- (void)getWithCharArray:(IOSCharArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)count;

- (void)getWithDoubleArray:(IOSDoubleArray *)dst
                   withInt:(jint)dstOffset
                   withInt:(jint)count;

- (void)getWithFloatArray:(IOSFloatArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)count;

- (void)getWithIntArray:(IOSIntArray *)dst
                withInt:(jint)dstOffset
                withInt:(jint)count;

- (void)getWithLongArray:(IOSLongArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)count;

- (void)getWithShortArray:(IOSShortArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)count;

- (IOSByteArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (void)putWithCharArray:(IOSCharArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)count;

- (void)putWithDoubleArray:(IOSDoubleArray *)src
                   withInt:(jint)srcOffset
                   withInt:(jint)count;

- (void)putWithFloatArray:(IOSFloatArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)count;

- (void)putWithIntArray:(IOSIntArray *)src
                withInt:(jint)srcOffset
                withInt:(jint)count;

- (void)putWithLongArray:(IOSLongArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)count;

- (void)putWithShortArray:(IOSShortArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)count;



@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioByteArrayBuffer)

J2OBJC_FIELD_SETTER(JavaNioByteArrayBuffer, backingArray_, IOSByteArray *)

FOUNDATION_EXPORT void JavaNioByteArrayBuffer_initWithByteArray_(JavaNioByteArrayBuffer *self, IOSByteArray *backingArray);

FOUNDATION_EXPORT JavaNioByteArrayBuffer *new_JavaNioByteArrayBuffer_initWithByteArray_(IOSByteArray *backingArray) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteArrayBuffer)

#endif // _JavaNioByteArrayBuffer_H_