//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/MapDifference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMapDifference")
#ifdef RESTRICT_ComGoogleCommonCollectMapDifference
#define INCLUDE_ALL_ComGoogleCommonCollectMapDifference 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMapDifference 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMapDifference

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMapDifference_) && (INCLUDE_ALL_ComGoogleCommonCollectMapDifference || defined(INCLUDE_ComGoogleCommonCollectMapDifference))
#define ComGoogleCommonCollectMapDifference_

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilMap;

@protocol ComGoogleCommonCollectMapDifference < JavaObject >

- (jboolean)areEqual;

- (id<JavaUtilMap>)entriesOnlyOnLeft;

- (id<JavaUtilMap>)entriesOnlyOnRight;

- (id<JavaUtilMap>)entriesInCommon;

- (id<JavaUtilMap>)entriesDiffering;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapDifference)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapDifference)

#endif

#if !defined (ComGoogleCommonCollectMapDifference_ValueDifference_) && (INCLUDE_ALL_ComGoogleCommonCollectMapDifference || defined(INCLUDE_ComGoogleCommonCollectMapDifference_ValueDifference))
#define ComGoogleCommonCollectMapDifference_ValueDifference_

@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleCommonCollectMapDifference_ValueDifference < JavaObject >

- (id)leftValue;

- (id)rightValue;

- (jboolean)isEqual:(id)other;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapDifference_ValueDifference)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapDifference_ValueDifference)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMapDifference")
