//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/util/concurrent/AsyncFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncFunction")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAsyncFunction
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncFunction 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAsyncFunction

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAsyncFunction_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncFunction || defined(INCLUDE_ComGoogleCommonUtilConcurrentAsyncFunction))
#define ComGoogleCommonUtilConcurrentAsyncFunction_

@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol ComGoogleCommonUtilConcurrentAsyncFunction < JavaObject >

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)applyWithId:(id)input;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAsyncFunction)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAsyncFunction)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAsyncFunction")
