//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/nio/file/attribute/FileTime.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeFileTime")
#ifdef RESTRICT_JavaNioFileAttributeFileTime
#define INCLUDE_ALL_JavaNioFileAttributeFileTime 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeFileTime 1
#endif
#undef RESTRICT_JavaNioFileAttributeFileTime

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeFileTime_) && (INCLUDE_ALL_JavaNioFileAttributeFileTime || defined(INCLUDE_JavaNioFileAttributeFileTime))
#define JavaNioFileAttributeFileTime_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;

/*!
 @brief Convert FileTime units.
 This is a complete j2objc rewrite, designed to avoid Android's
  FileTime java.time dependencies. If an app only needs jre_channels (which many do),
  adding java.nio.file.FileTime to jre_channels would increase its size by ~23M.
 @author Mary Qin
 */
@interface JavaNioFileAttributeFileTime : NSObject < JavaLangComparable >

#pragma mark Public

- (jint)compareToWithId:(JavaNioFileAttributeFileTime *)o;

- (jboolean)isEqual:(id)o;

+ (JavaNioFileAttributeFileTime *)fromWithLong:(jlong)value
                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (JavaNioFileAttributeFileTime *)fromMillisWithLong:(jlong)value;

- (jlong)toWithJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jlong)toMillis;

#pragma mark Package-Private

- (instancetype __nonnull)initWithLong:(jlong)millis;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeFileTime)

FOUNDATION_EXPORT void JavaNioFileAttributeFileTime_initWithLong_(JavaNioFileAttributeFileTime *self, jlong millis);

FOUNDATION_EXPORT JavaNioFileAttributeFileTime *new_JavaNioFileAttributeFileTime_initWithLong_(jlong millis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileAttributeFileTime *create_JavaNioFileAttributeFileTime_initWithLong_(jlong millis);

FOUNDATION_EXPORT JavaNioFileAttributeFileTime *JavaNioFileAttributeFileTime_fromWithLong_withJavaUtilConcurrentTimeUnit_(jlong value, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT JavaNioFileAttributeFileTime *JavaNioFileAttributeFileTime_fromMillisWithLong_(jlong value);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeFileTime)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeFileTime")