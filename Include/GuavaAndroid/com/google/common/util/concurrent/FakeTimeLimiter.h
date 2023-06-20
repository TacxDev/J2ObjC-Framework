//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/util/concurrent/FakeTimeLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentFakeTimeLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentFakeTimeLimiter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentFakeTimeLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentFakeTimeLimiter))
#define ComGoogleCommonUtilConcurrentFakeTimeLimiter_

#define RESTRICT_ComGoogleCommonUtilConcurrentTimeLimiter 1
#define INCLUDE_ComGoogleCommonUtilConcurrentTimeLimiter 1
#include "com/google/common/util/concurrent/TimeLimiter.h"

@class IOSClass;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentFakeTimeLimiter : NSObject < ComGoogleCommonUtilConcurrentTimeLimiter >

#pragma mark Public

- (instancetype)init;

- (id)callUninterruptiblyWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                                          withLong:(jlong)timeoutDuration
                                    withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit;

- (id)callWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                           withLong:(jlong)timeoutDuration
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit;

- (id)newProxyWithId:(id)target
        withIOSClass:(IOSClass *)interfaceType
            withLong:(jlong)timeoutDuration
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit OBJC_METHOD_FAMILY_NONE;

- (void)runUninterruptiblyWithTimeoutWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                 withLong:(jlong)timeoutDuration
                           withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit;

- (void)runWithTimeoutWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                  withLong:(jlong)timeoutDuration
            withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFakeTimeLimiter)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFakeTimeLimiter_init(ComGoogleCommonUtilConcurrentFakeTimeLimiter *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFakeTimeLimiter *new_ComGoogleCommonUtilConcurrentFakeTimeLimiter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFakeTimeLimiter *create_ComGoogleCommonUtilConcurrentFakeTimeLimiter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFakeTimeLimiter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter")
