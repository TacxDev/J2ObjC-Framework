//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/hash/LongAddable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashLongAddable")
#ifdef RESTRICT_ComGoogleCommonHashLongAddable
#define INCLUDE_ALL_ComGoogleCommonHashLongAddable 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashLongAddable 1
#endif
#undef RESTRICT_ComGoogleCommonHashLongAddable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashLongAddable_) && (INCLUDE_ALL_ComGoogleCommonHashLongAddable || defined(INCLUDE_ComGoogleCommonHashLongAddable))
#define ComGoogleCommonHashLongAddable_

@class JavaLangLong;

@protocol ComGoogleCommonHashLongAddable < JavaObject >

- (void)increment;

- (void)addWithLong:(jlong)x;

- (jlong)sum;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashLongAddable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashLongAddable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashLongAddable")