//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/MoreCollectors.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors")
#ifdef RESTRICT_ComGoogleCommonCollectMoreCollectors
#define INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMoreCollectors

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMoreCollectors_) && (INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors || defined(INCLUDE_ComGoogleCommonCollectMoreCollectors))
#define ComGoogleCommonCollectMoreCollectors_

@protocol JavaUtilStreamCollector;

@interface ComGoogleCommonCollectMoreCollectors : NSObject

#pragma mark Public

+ (id<JavaUtilStreamCollector>)onlyElement;

+ (id<JavaUtilStreamCollector>)toOptional;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectMoreCollectors)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectMoreCollectors_toOptional(void);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectMoreCollectors_onlyElement(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMoreCollectors)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMoreCollectors")
