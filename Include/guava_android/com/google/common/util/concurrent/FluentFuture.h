//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/util/concurrent/FluentFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture
#define INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentFluentFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture))
#define ComGoogleCommonUtilConcurrentFluentFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 1
#define INCLUDE_ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization 1
#include "com/google/common/util/concurrent/GwtFluentFutureCatchingSpecialization.h"

@class IOSClass;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonUtilConcurrentAsyncFunction;
@protocol ComGoogleCommonUtilConcurrentFutureCallback;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentScheduledExecutorService;

@interface ComGoogleCommonUtilConcurrentFluentFuture : ComGoogleCommonUtilConcurrentGwtFluentFutureCatchingSpecialization

#pragma mark Public

- (void)addCallbackWithComGoogleCommonUtilConcurrentFutureCallback:(id<ComGoogleCommonUtilConcurrentFutureCallback>)callback
                                    withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (ComGoogleCommonUtilConcurrentFluentFuture *)catchingWithIOSClass:(IOSClass *)exceptionType
                                    withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)fallback
                                     withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (ComGoogleCommonUtilConcurrentFluentFuture *)catchingAsyncWithIOSClass:(IOSClass *)exceptionType
                          withComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction>)fallback
                                          withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

+ (ComGoogleCommonUtilConcurrentFluentFuture *)fromWithComGoogleCommonUtilConcurrentFluentFuture:(ComGoogleCommonUtilConcurrentFluentFuture *)future;

+ (ComGoogleCommonUtilConcurrentFluentFuture *)fromWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)future;

- (ComGoogleCommonUtilConcurrentFluentFuture *)transformWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function
                                                         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (ComGoogleCommonUtilConcurrentFluentFuture *)transformAsyncWithComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction>)function
                                                                             withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (ComGoogleCommonUtilConcurrentFluentFuture *)withTimeoutWithLong:(jlong)timeout
                                    withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit
                    withJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)scheduledExecutor;

#pragma mark Package-Private

- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFluentFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFluentFuture_init(ComGoogleCommonUtilConcurrentFluentFuture *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFluentFuture *ComGoogleCommonUtilConcurrentFluentFuture_fromWithComGoogleCommonUtilConcurrentListenableFuture_(id<ComGoogleCommonUtilConcurrentListenableFuture> future);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFluentFuture *ComGoogleCommonUtilConcurrentFluentFuture_fromWithComGoogleCommonUtilConcurrentFluentFuture_(ComGoogleCommonUtilConcurrentFluentFuture *future);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFluentFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture))
#define ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_Trusted 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

@class JavaLangBoolean;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture : ComGoogleCommonUtilConcurrentFluentFuture < ComGoogleCommonUtilConcurrentAbstractFuture_Trusted >

#pragma mark Public

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (id)get;

- (id)getWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)isCancelled;

- (jboolean)isDone;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture_init(ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFluentFuture")
