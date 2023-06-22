//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/errorprone/annotations/RestrictedApi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsRestrictedApi
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsRestrictedApi

#if !defined (ComGoogleErrorproneAnnotationsRestrictedApi_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi || defined(INCLUDE_ComGoogleErrorproneAnnotationsRestrictedApi))
#define ComGoogleErrorproneAnnotationsRestrictedApi_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol ComGoogleErrorproneAnnotationsRestrictedApi < JavaLangAnnotationAnnotation >

@property (readonly) NSString *explanation;
@property (readonly) NSString *link;
@property (readonly) NSString *allowedOnPath;
@property (readonly) IOSObjectArray *allowlistAnnotations;
@property (readonly) IOSObjectArray *allowlistWithWarningAnnotations;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsRestrictedApi : NSObject < ComGoogleErrorproneAnnotationsRestrictedApi > {
 @public
  NSString *explanation_;
  NSString *link_;
  NSString *allowedOnPath_;
  IOSObjectArray *allowlistAnnotations_;
  IOSObjectArray *allowlistWithWarningAnnotations_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsRestrictedApi)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsRestrictedApi> create_ComGoogleErrorproneAnnotationsRestrictedApi(NSString *allowedOnPath, IOSObjectArray *allowlistAnnotations, IOSObjectArray *allowlistWithWarningAnnotations, NSString *explanation, NSString *link);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsRestrictedApi)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsRestrictedApi")
