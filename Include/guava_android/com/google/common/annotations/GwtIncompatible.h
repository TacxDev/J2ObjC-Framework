//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/annotations/GwtIncompatible.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible")
#ifdef RESTRICT_ComGoogleCommonAnnotationsGwtIncompatible
#define INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible 0
#else
#define INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible 1
#endif
#undef RESTRICT_ComGoogleCommonAnnotationsGwtIncompatible

#if !defined (ComGoogleCommonAnnotationsGwtIncompatible_) && (INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible || defined(INCLUDE_ComGoogleCommonAnnotationsGwtIncompatible))
#define ComGoogleCommonAnnotationsGwtIncompatible_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleCommonAnnotationsGwtIncompatible < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleCommonAnnotationsGwtIncompatible : NSObject < ComGoogleCommonAnnotationsGwtIncompatible > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonAnnotationsGwtIncompatible)

FOUNDATION_EXPORT id<ComGoogleCommonAnnotationsGwtIncompatible> create_ComGoogleCommonAnnotationsGwtIncompatible(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonAnnotationsGwtIncompatible)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonAnnotationsGwtIncompatible")
