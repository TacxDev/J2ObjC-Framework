//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/experimental/categories/Category.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesCategory")
#ifdef RESTRICT_OrgJunitExperimentalCategoriesCategory
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesCategory 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesCategory 1
#endif
#undef RESTRICT_OrgJunitExperimentalCategoriesCategory

#if !defined (OrgJunitExperimentalCategoriesCategory_) && (INCLUDE_ALL_OrgJunitExperimentalCategoriesCategory || defined(INCLUDE_OrgJunitExperimentalCategoriesCategory))
#define OrgJunitExperimentalCategoriesCategory_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;

@protocol OrgJunitExperimentalCategoriesCategory < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitExperimentalCategoriesCategory : NSObject < OrgJunitExperimentalCategoriesCategory > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesCategory)

FOUNDATION_EXPORT id<OrgJunitExperimentalCategoriesCategory> create_OrgJunitExperimentalCategoriesCategory(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesCategory)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesCategory")
