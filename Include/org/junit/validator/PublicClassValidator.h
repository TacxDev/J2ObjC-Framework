//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/validator/PublicClassValidator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitValidatorPublicClassValidator")
#ifdef RESTRICT_OrgJunitValidatorPublicClassValidator
#define INCLUDE_ALL_OrgJunitValidatorPublicClassValidator 0
#else
#define INCLUDE_ALL_OrgJunitValidatorPublicClassValidator 1
#endif
#undef RESTRICT_OrgJunitValidatorPublicClassValidator

#if !defined (OrgJunitValidatorPublicClassValidator_) && (INCLUDE_ALL_OrgJunitValidatorPublicClassValidator || defined(INCLUDE_OrgJunitValidatorPublicClassValidator))
#define OrgJunitValidatorPublicClassValidator_

#define RESTRICT_OrgJunitValidatorTestClassValidator 1
#define INCLUDE_OrgJunitValidatorTestClassValidator 1
#include "org/junit/validator/TestClassValidator.h"

@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

@interface OrgJunitValidatorPublicClassValidator : NSObject < OrgJunitValidatorTestClassValidator >

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilList>)validateTestClassWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

@end

J2OBJC_STATIC_INIT(OrgJunitValidatorPublicClassValidator)

FOUNDATION_EXPORT void OrgJunitValidatorPublicClassValidator_init(OrgJunitValidatorPublicClassValidator *self);

FOUNDATION_EXPORT OrgJunitValidatorPublicClassValidator *new_OrgJunitValidatorPublicClassValidator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitValidatorPublicClassValidator *create_OrgJunitValidatorPublicClassValidator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitValidatorPublicClassValidator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitValidatorPublicClassValidator")