//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/experimental/theories/FromDataPoints.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesFromDataPoints")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesFromDataPoints
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesFromDataPoints 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesFromDataPoints 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesFromDataPoints

#if !defined (OrgJunitExperimentalTheoriesFromDataPoints_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesFromDataPoints || defined(INCLUDE_OrgJunitExperimentalTheoriesFromDataPoints))
#define OrgJunitExperimentalTheoriesFromDataPoints_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol OrgJunitExperimentalTheoriesFromDataPoints < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitExperimentalTheoriesFromDataPoints : NSObject < OrgJunitExperimentalTheoriesFromDataPoints > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesFromDataPoints)

FOUNDATION_EXPORT id<OrgJunitExperimentalTheoriesFromDataPoints> create_OrgJunitExperimentalTheoriesFromDataPoints(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesFromDataPoints)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesFromDataPoints")
