//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/eventbus/SubscriberExceptionHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler")
#ifdef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionHandler
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionHandler

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEventbusSubscriberExceptionHandler_) && (INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler || defined(INCLUDE_ComGoogleCommonEventbusSubscriberExceptionHandler))
#define ComGoogleCommonEventbusSubscriberExceptionHandler_

@class ComGoogleCommonEventbusSubscriberExceptionContext;
@class JavaLangThrowable;

@protocol ComGoogleCommonEventbusSubscriberExceptionHandler < JavaObject >

- (void)handleExceptionWithJavaLangThrowable:(JavaLangThrowable *)exception
withComGoogleCommonEventbusSubscriberExceptionContext:(ComGoogleCommonEventbusSubscriberExceptionContext *)context;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusSubscriberExceptionHandler)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberExceptionHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler")
