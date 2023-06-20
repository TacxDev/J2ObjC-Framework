//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/WrappingScheduledExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService))
#define ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService_

#define RESTRICT_ComGoogleCommonUtilConcurrentWrappingExecutorService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentWrappingExecutorService 1
#include "com/google/common/util/concurrent/WrappingExecutorService.h"

#define RESTRICT_JavaUtilConcurrentScheduledExecutorService 1
#define INCLUDE_JavaUtilConcurrentScheduledExecutorService 1
#include "java/util/concurrent/ScheduledExecutorService.h"

@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutorService;
@protocol JavaUtilConcurrentScheduledFuture;

@interface ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService : ComGoogleCommonUtilConcurrentWrappingExecutorService < JavaUtilConcurrentScheduledExecutorService > {
 @public
  id<JavaUtilConcurrentScheduledExecutorService> delegate_WrappingScheduledExecutorService_;
}

#pragma mark Public

- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task
                                                                       withLong:(jlong)delay
                                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                             withLong:(jlong)delay
                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentScheduledFuture>)scheduleAtFixedRateWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                        withLong:(jlong)initialDelay
                                                                        withLong:(jlong)period
                                                  withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithFixedDelayWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                           withLong:(jlong)initialDelay
                                                                           withLong:(jlong)delay
                                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Protected

- (instancetype)initPackagePrivateWithJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivateWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService, delegate_WrappingScheduledExecutorService_, id<JavaUtilConcurrentScheduledExecutorService>)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService_initPackagePrivateWithJavaUtilConcurrentScheduledExecutorService_(ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService *self, id<JavaUtilConcurrentScheduledExecutorService> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService")
