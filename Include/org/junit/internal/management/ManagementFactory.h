//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/internal/management/ManagementFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalManagementManagementFactory")
#ifdef RESTRICT_OrgJunitInternalManagementManagementFactory
#define INCLUDE_ALL_OrgJunitInternalManagementManagementFactory 0
#else
#define INCLUDE_ALL_OrgJunitInternalManagementManagementFactory 1
#endif
#undef RESTRICT_OrgJunitInternalManagementManagementFactory

#if !defined (OrgJunitInternalManagementManagementFactory_) && (INCLUDE_ALL_OrgJunitInternalManagementManagementFactory || defined(INCLUDE_OrgJunitInternalManagementManagementFactory))
#define OrgJunitInternalManagementManagementFactory_

@protocol OrgJunitInternalManagementRuntimeMXBean;
@protocol OrgJunitInternalManagementThreadMXBean;

@interface OrgJunitInternalManagementManagementFactory : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<OrgJunitInternalManagementRuntimeMXBean>)getRuntimeMXBean;

+ (id<OrgJunitInternalManagementThreadMXBean>)getThreadMXBean;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalManagementManagementFactory)

FOUNDATION_EXPORT void OrgJunitInternalManagementManagementFactory_init(OrgJunitInternalManagementManagementFactory *self);

FOUNDATION_EXPORT OrgJunitInternalManagementManagementFactory *new_OrgJunitInternalManagementManagementFactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalManagementManagementFactory *create_OrgJunitInternalManagementManagementFactory_init(void);

FOUNDATION_EXPORT id<OrgJunitInternalManagementRuntimeMXBean> OrgJunitInternalManagementManagementFactory_getRuntimeMXBean(void);

FOUNDATION_EXPORT id<OrgJunitInternalManagementThreadMXBean> OrgJunitInternalManagementManagementFactory_getThreadMXBean(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalManagementManagementFactory)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalManagementManagementFactory")
