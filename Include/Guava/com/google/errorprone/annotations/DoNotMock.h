//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/errorprone/annotations/DoNotMock.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotMock")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsDoNotMock
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotMock 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotMock 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsDoNotMock

#if !defined (ComGoogleErrorproneAnnotationsDoNotMock_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotMock || defined(INCLUDE_ComGoogleErrorproneAnnotationsDoNotMock))
#define ComGoogleErrorproneAnnotationsDoNotMock_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleErrorproneAnnotationsDoNotMock < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsDoNotMock : NSObject < ComGoogleErrorproneAnnotationsDoNotMock > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsDoNotMock)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsDoNotMock> create_ComGoogleErrorproneAnnotationsDoNotMock(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsDoNotMock)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsDoNotMock")