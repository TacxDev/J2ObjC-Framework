//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/reflect/ParametricNullness.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectParametricNullness")
#ifdef RESTRICT_ComGoogleCommonReflectParametricNullness
#define INCLUDE_ALL_ComGoogleCommonReflectParametricNullness 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectParametricNullness 1
#endif
#undef RESTRICT_ComGoogleCommonReflectParametricNullness

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonReflectParametricNullness_) && (INCLUDE_ALL_ComGoogleCommonReflectParametricNullness || defined(INCLUDE_ComGoogleCommonReflectParametricNullness))
#define ComGoogleCommonReflectParametricNullness_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleCommonReflectParametricNullness < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonReflectParametricNullness : NSObject < ComGoogleCommonReflectParametricNullness >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectParametricNullness)

FOUNDATION_EXPORT id<ComGoogleCommonReflectParametricNullness> create_ComGoogleCommonReflectParametricNullness(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectParametricNullness)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectParametricNullness")