//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/base/ParametricNullness.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseParametricNullness")
#ifdef RESTRICT_ComGoogleCommonBaseParametricNullness
#define INCLUDE_ALL_ComGoogleCommonBaseParametricNullness 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseParametricNullness 1
#endif
#undef RESTRICT_ComGoogleCommonBaseParametricNullness

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseParametricNullness_) && (INCLUDE_ALL_ComGoogleCommonBaseParametricNullness || defined(INCLUDE_ComGoogleCommonBaseParametricNullness))
#define ComGoogleCommonBaseParametricNullness_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleCommonBaseParametricNullness < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonBaseParametricNullness : NSObject < ComGoogleCommonBaseParametricNullness >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseParametricNullness)

FOUNDATION_EXPORT id<ComGoogleCommonBaseParametricNullness> create_ComGoogleCommonBaseParametricNullness(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseParametricNullness)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseParametricNullness")