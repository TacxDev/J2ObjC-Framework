//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/testing/mockito/build_result/java/org/mockito/internal/runners/util/RunnerProvider.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalRunnersUtilRunnerProvider")
#ifdef RESTRICT_OrgMockitoInternalRunnersUtilRunnerProvider
#define INCLUDE_ALL_OrgMockitoInternalRunnersUtilRunnerProvider 0
#else
#define INCLUDE_ALL_OrgMockitoInternalRunnersUtilRunnerProvider 1
#endif
#undef RESTRICT_OrgMockitoInternalRunnersUtilRunnerProvider

#if !defined (OrgMockitoInternalRunnersUtilRunnerProvider_) && (INCLUDE_ALL_OrgMockitoInternalRunnersUtilRunnerProvider || defined(INCLUDE_OrgMockitoInternalRunnersUtilRunnerProvider))
#define OrgMockitoInternalRunnersUtilRunnerProvider_

@class IOSObjectArray;
@protocol OrgMockitoInternalRunnersInternalRunner;

@interface OrgMockitoInternalRunnersUtilRunnerProvider : NSObject

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoInternalRunnersInternalRunner>)newInstanceWithNSString:(NSString *)runnerClassName
                                                     withNSObjectArray:(IOSObjectArray *)constructorArgs OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalRunnersUtilRunnerProvider)

FOUNDATION_EXPORT void OrgMockitoInternalRunnersUtilRunnerProvider_init(OrgMockitoInternalRunnersUtilRunnerProvider *self);

FOUNDATION_EXPORT OrgMockitoInternalRunnersUtilRunnerProvider *new_OrgMockitoInternalRunnersUtilRunnerProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalRunnersUtilRunnerProvider *create_OrgMockitoInternalRunnersUtilRunnerProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersUtilRunnerProvider)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalRunnersUtilRunnerProvider")
