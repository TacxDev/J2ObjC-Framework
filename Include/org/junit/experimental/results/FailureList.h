//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/experimental/results/FailureList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalResultsFailureList")
#ifdef RESTRICT_OrgJunitExperimentalResultsFailureList
#define INCLUDE_ALL_OrgJunitExperimentalResultsFailureList 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalResultsFailureList 1
#endif
#undef RESTRICT_OrgJunitExperimentalResultsFailureList

#if !defined (OrgJunitExperimentalResultsFailureList_) && (INCLUDE_ALL_OrgJunitExperimentalResultsFailureList || defined(INCLUDE_OrgJunitExperimentalResultsFailureList))
#define OrgJunitExperimentalResultsFailureList_

@class OrgJunitRunnerResult;
@protocol JavaUtilList;

@interface OrgJunitExperimentalResultsFailureList : NSObject

#pragma mark Public

- (instancetype)initPackagePrivateWithJavaUtilList:(id<JavaUtilList>)failures;

- (OrgJunitRunnerResult *)result;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalResultsFailureList)

FOUNDATION_EXPORT void OrgJunitExperimentalResultsFailureList_initPackagePrivateWithJavaUtilList_(OrgJunitExperimentalResultsFailureList *self, id<JavaUtilList> failures);

FOUNDATION_EXPORT OrgJunitExperimentalResultsFailureList *new_OrgJunitExperimentalResultsFailureList_initPackagePrivateWithJavaUtilList_(id<JavaUtilList> failures) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalResultsFailureList *create_OrgJunitExperimentalResultsFailureList_initPackagePrivateWithJavaUtilList_(id<JavaUtilList> failures);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalResultsFailureList)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalResultsFailureList")
