//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/errorprone/annotations/MustBeClosed.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsMustBeClosed
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsMustBeClosed

#if !defined (ComGoogleErrorproneAnnotationsMustBeClosed_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed || defined(INCLUDE_ComGoogleErrorproneAnnotationsMustBeClosed))
#define ComGoogleErrorproneAnnotationsMustBeClosed_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleErrorproneAnnotationsMustBeClosed < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsMustBeClosed : NSObject < ComGoogleErrorproneAnnotationsMustBeClosed >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsMustBeClosed)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsMustBeClosed> create_ComGoogleErrorproneAnnotationsMustBeClosed(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsMustBeClosed)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsMustBeClosed")
