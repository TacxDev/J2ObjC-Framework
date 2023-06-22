//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/ForwardingExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingExecutorService

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingExecutorService))
#define ComGoogleCommonUtilConcurrentForwardingExecutorService_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "com/google/common/collect/ForwardingObject.h"

#define RESTRICT_JavaUtilConcurrentExecutorService 1
#define INCLUDE_JavaUtilConcurrentExecutorService 1
#include "java/util/concurrent/ExecutorService.h"

@class JavaLangBoolean;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

@interface ComGoogleCommonUtilConcurrentForwardingExecutorService : ComGoogleCommonCollectForwardingObject < JavaUtilConcurrentExecutorService >

#pragma mark Public

- (jboolean)awaitTerminationWithLong:(jlong)timeout
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                             withLong:(jlong)timeout
       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)isShutdown;

- (jboolean)isTerminated;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentExecutorService>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingExecutorService_init(ComGoogleCommonUtilConcurrentForwardingExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingExecutorService")