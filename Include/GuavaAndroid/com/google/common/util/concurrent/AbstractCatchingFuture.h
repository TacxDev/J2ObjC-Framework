//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/util/concurrent/AbstractCatchingFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCatchingFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCatchingFuture

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAbstractCatchingFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractCatchingFuture))
#define ComGoogleCommonUtilConcurrentAbstractCatchingFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/FluentFuture.h"

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class IOSClass;
@class JavaLangThrowable;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonUtilConcurrentAsyncFunction;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentAbstractCatchingFuture : ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture < JavaLangRunnable > {
 @public
  id<ComGoogleCommonUtilConcurrentListenableFuture> inputFuture_;
  IOSClass *exceptionType_;
  id fallback_;
}

#pragma mark Public

- (void)run;

#pragma mark Protected

- (void)afterDone;

- (NSString *)pendingToString;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)inputFuture
                                                                       withIOSClass:(IOSClass *)exceptionType
                                                                             withId:(id)fallback;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)createWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                                                withIOSClass:(IOSClass *)exceptionType
                                                              withComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction>)fallback
                                                                              withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)createWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)input
                                                                                                withIOSClass:(IOSClass *)exceptionType
                                                                             withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)fallback
                                                                              withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (id)doFallbackWithId:(id)fallback
 withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (void)setResultWithId:(id)result;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractCatchingFuture)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture, inputFuture_, id<ComGoogleCommonUtilConcurrentListenableFuture>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture, exceptionType_, IOSClass *)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture, fallback_, id)

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentAbstractCatchingFuture_createWithComGoogleCommonUtilConcurrentListenableFuture_withIOSClass_withComGoogleCommonBaseFunction_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, IOSClass *exceptionType, id<ComGoogleCommonBaseFunction> fallback, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentAbstractCatchingFuture_createWithComGoogleCommonUtilConcurrentListenableFuture_withIOSClass_withComGoogleCommonUtilConcurrentAsyncFunction_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, IOSClass *exceptionType, id<ComGoogleCommonUtilConcurrentAsyncFunction> fallback, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractCatchingFuture_initPackagePrivateWithComGoogleCommonUtilConcurrentListenableFuture_withIOSClass_withId_(ComGoogleCommonUtilConcurrentAbstractCatchingFuture *self, id<ComGoogleCommonUtilConcurrentListenableFuture> inputFuture, IOSClass *exceptionType, id fallback);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture")
