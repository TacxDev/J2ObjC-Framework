//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/errorprone/annotations/Immutable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsImmutable")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsImmutable
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsImmutable 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsImmutable 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsImmutable

#if !defined (ComGoogleErrorproneAnnotationsImmutable_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsImmutable || defined(INCLUDE_ComGoogleErrorproneAnnotationsImmutable))
#define ComGoogleErrorproneAnnotationsImmutable_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleErrorproneAnnotationsImmutable < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *containerOf;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsImmutable : NSObject < ComGoogleErrorproneAnnotationsImmutable > {
 @public
  IOSObjectArray *containerOf_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsImmutable)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsImmutable> create_ComGoogleErrorproneAnnotationsImmutable(IOSObjectArray *containerOf);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsImmutable)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsImmutable")
