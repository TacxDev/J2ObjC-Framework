//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/graph/ParametricNullness.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphParametricNullness")
#ifdef RESTRICT_ComGoogleCommonGraphParametricNullness
#define INCLUDE_ALL_ComGoogleCommonGraphParametricNullness 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphParametricNullness 1
#endif
#undef RESTRICT_ComGoogleCommonGraphParametricNullness

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphParametricNullness_) && (INCLUDE_ALL_ComGoogleCommonGraphParametricNullness || defined(INCLUDE_ComGoogleCommonGraphParametricNullness))
#define ComGoogleCommonGraphParametricNullness_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleCommonGraphParametricNullness < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonGraphParametricNullness : NSObject < ComGoogleCommonGraphParametricNullness >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphParametricNullness)

FOUNDATION_EXPORT id<ComGoogleCommonGraphParametricNullness> create_ComGoogleCommonGraphParametricNullness(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphParametricNullness)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphParametricNullness")
