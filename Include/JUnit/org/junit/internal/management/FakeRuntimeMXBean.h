//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/internal/management/FakeRuntimeMXBean.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalManagementFakeRuntimeMXBean")
#ifdef RESTRICT_OrgJunitInternalManagementFakeRuntimeMXBean
#define INCLUDE_ALL_OrgJunitInternalManagementFakeRuntimeMXBean 0
#else
#define INCLUDE_ALL_OrgJunitInternalManagementFakeRuntimeMXBean 1
#endif
#undef RESTRICT_OrgJunitInternalManagementFakeRuntimeMXBean

#if !defined (OrgJunitInternalManagementFakeRuntimeMXBean_) && (INCLUDE_ALL_OrgJunitInternalManagementFakeRuntimeMXBean || defined(INCLUDE_OrgJunitInternalManagementFakeRuntimeMXBean))
#define OrgJunitInternalManagementFakeRuntimeMXBean_

#define RESTRICT_OrgJunitInternalManagementRuntimeMXBean 1
#define INCLUDE_OrgJunitInternalManagementRuntimeMXBean 1
#include "org/junit/internal/management/RuntimeMXBean.h"

@protocol JavaUtilList;

@interface OrgJunitInternalManagementFakeRuntimeMXBean : NSObject < OrgJunitInternalManagementRuntimeMXBean >

#pragma mark Public

- (id<JavaUtilList>)getInputArguments;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalManagementFakeRuntimeMXBean)

FOUNDATION_EXPORT void OrgJunitInternalManagementFakeRuntimeMXBean_initPackagePrivate(OrgJunitInternalManagementFakeRuntimeMXBean *self);

FOUNDATION_EXPORT OrgJunitInternalManagementFakeRuntimeMXBean *new_OrgJunitInternalManagementFakeRuntimeMXBean_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalManagementFakeRuntimeMXBean *create_OrgJunitInternalManagementFakeRuntimeMXBean_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalManagementFakeRuntimeMXBean)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalManagementFakeRuntimeMXBean")
