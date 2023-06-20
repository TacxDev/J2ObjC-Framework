//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/SettableFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSettableFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentSettableFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSettableFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentSettableFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentSettableFuture

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentSettableFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentSettableFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentSettableFuture))
#define ComGoogleCommonUtilConcurrentSettableFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

@class JavaLangBoolean;
@class JavaLangThrowable;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@interface ComGoogleCommonUtilConcurrentSettableFuture : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture

#pragma mark Public

+ (ComGoogleCommonUtilConcurrentSettableFuture *)create;

- (jboolean)setWithId:(id)value;

- (jboolean)setExceptionWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (jboolean)setFutureWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)future;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentSettableFuture)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSettableFuture *ComGoogleCommonUtilConcurrentSettableFuture_create(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentSettableFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentSettableFuture")
