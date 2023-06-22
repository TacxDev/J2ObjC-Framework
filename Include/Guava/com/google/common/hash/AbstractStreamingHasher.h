//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/hash/AbstractStreamingHasher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher")
#ifdef RESTRICT_ComGoogleCommonHashAbstractStreamingHasher
#define INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractStreamingHasher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractStreamingHasher_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher || defined(INCLUDE_ComGoogleCommonHashAbstractStreamingHasher))
#define ComGoogleCommonHashAbstractStreamingHasher_

#define RESTRICT_ComGoogleCommonHashAbstractHasher 1
#define INCLUDE_ComGoogleCommonHashAbstractHasher 1
#include "com/google/common/hash/AbstractHasher.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaLangByte;
@class JavaLangCharacter;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangShort;
@class JavaNioByteBuffer;
@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashAbstractStreamingHasher : ComGoogleCommonHashAbstractHasher

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hash__;

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putBytesWithJavaNioByteBuffer:(JavaNioByteBuffer *)readBuffer;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

#pragma mark Protected

- (instancetype)initPackagePrivateWithInt:(jint)chunkSize;

- (instancetype)initPackagePrivateWithInt:(jint)chunkSize
                                  withInt:(jint)bufferSize;

- (ComGoogleCommonHashHashCode *)makeHash;

- (void)processWithJavaNioByteBuffer:(JavaNioByteBuffer *)bb;

- (void)processRemainingWithJavaNioByteBuffer:(JavaNioByteBuffer *)bb;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractStreamingHasher)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractStreamingHasher_initPackagePrivateWithInt_(ComGoogleCommonHashAbstractStreamingHasher *self, jint chunkSize);

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractStreamingHasher_initPackagePrivateWithInt_withInt_(ComGoogleCommonHashAbstractStreamingHasher *self, jint chunkSize, jint bufferSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractStreamingHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher")