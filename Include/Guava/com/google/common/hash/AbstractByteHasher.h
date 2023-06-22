//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/hash/AbstractByteHasher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractByteHasher")
#ifdef RESTRICT_ComGoogleCommonHashAbstractByteHasher
#define INCLUDE_ALL_ComGoogleCommonHashAbstractByteHasher 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractByteHasher 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractByteHasher

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractByteHasher_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractByteHasher || defined(INCLUDE_ComGoogleCommonHashAbstractByteHasher))
#define ComGoogleCommonHashAbstractByteHasher_

#define RESTRICT_ComGoogleCommonHashAbstractHasher 1
#define INCLUDE_ComGoogleCommonHashAbstractHasher 1
#include "com/google/common/hash/AbstractHasher.h"

@class IOSByteArray;
@class JavaLangByte;
@class JavaLangCharacter;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangShort;
@class JavaNioByteBuffer;
@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashAbstractByteHasher : ComGoogleCommonHashAbstractHasher

#pragma mark Public

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray *)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putBytesWithJavaNioByteBuffer:(JavaNioByteBuffer *)bytes;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

#pragma mark Protected

- (void)updateWithByte:(jbyte)b;

- (void)updateWithByteArray:(IOSByteArray *)b;

- (void)updateWithByteArray:(IOSByteArray *)b
                    withInt:(jint)off
                    withInt:(jint)len;

- (void)updateWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractByteHasher)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractByteHasher_initPackagePrivate(ComGoogleCommonHashAbstractByteHasher *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractByteHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractByteHasher")