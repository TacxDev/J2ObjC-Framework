//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/net/ElementTypesAreNonnullByDefault.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonNetElementTypesAreNonnullByDefault")
#ifdef RESTRICT_ComGoogleCommonNetElementTypesAreNonnullByDefault
#define INCLUDE_ALL_ComGoogleCommonNetElementTypesAreNonnullByDefault 0
#else
#define INCLUDE_ALL_ComGoogleCommonNetElementTypesAreNonnullByDefault 1
#endif
#undef RESTRICT_ComGoogleCommonNetElementTypesAreNonnullByDefault

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonNetElementTypesAreNonnullByDefault_) && (INCLUDE_ALL_ComGoogleCommonNetElementTypesAreNonnullByDefault || defined(INCLUDE_ComGoogleCommonNetElementTypesAreNonnullByDefault))
#define ComGoogleCommonNetElementTypesAreNonnullByDefault_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleCommonNetElementTypesAreNonnullByDefault < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonNetElementTypesAreNonnullByDefault : NSObject < ComGoogleCommonNetElementTypesAreNonnullByDefault >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonNetElementTypesAreNonnullByDefault)

FOUNDATION_EXPORT id<ComGoogleCommonNetElementTypesAreNonnullByDefault> create_ComGoogleCommonNetElementTypesAreNonnullByDefault(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetElementTypesAreNonnullByDefault)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonNetElementTypesAreNonnullByDefault")
