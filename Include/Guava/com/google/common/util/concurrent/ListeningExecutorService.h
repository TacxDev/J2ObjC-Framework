//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/ListeningExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentListeningExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentListeningExecutorService

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentListeningExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentListeningExecutorService))
#define ComGoogleCommonUtilConcurrentListeningExecutorService_

#define RESTRICT_JavaUtilConcurrentExecutorService 1
#define INCLUDE_JavaUtilConcurrentExecutorService 1
#include "java/util/concurrent/ExecutorService.h"

@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilList;

@protocol ComGoogleCommonUtilConcurrentListeningExecutorService < JavaUtilConcurrentExecutorService, JavaObject >

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                                         withId:(id)result;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListeningExecutorService)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListeningExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningExecutorService")
