//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/annotations/Beta.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsBeta")
#ifdef RESTRICT_ComGoogleCommonAnnotationsBeta
#define INCLUDE_ALL_ComGoogleCommonAnnotationsBeta 0
#else
#define INCLUDE_ALL_ComGoogleCommonAnnotationsBeta 1
#endif
#undef RESTRICT_ComGoogleCommonAnnotationsBeta

#if !defined (ComGoogleCommonAnnotationsBeta_) && (INCLUDE_ALL_ComGoogleCommonAnnotationsBeta || defined(INCLUDE_ComGoogleCommonAnnotationsBeta))
#define ComGoogleCommonAnnotationsBeta_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleCommonAnnotationsBeta < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonAnnotationsBeta : NSObject < ComGoogleCommonAnnotationsBeta >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonAnnotationsBeta)

FOUNDATION_EXPORT id<ComGoogleCommonAnnotationsBeta> create_ComGoogleCommonAnnotationsBeta(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonAnnotationsBeta)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsBeta")