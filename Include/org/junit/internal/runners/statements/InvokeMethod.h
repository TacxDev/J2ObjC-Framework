//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/internal/runners/statements/InvokeMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsInvokeMethod")
#ifdef RESTRICT_OrgJunitInternalRunnersStatementsInvokeMethod
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsInvokeMethod 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsInvokeMethod 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersStatementsInvokeMethod

#if !defined (OrgJunitInternalRunnersStatementsInvokeMethod_) && (INCLUDE_ALL_OrgJunitInternalRunnersStatementsInvokeMethod || defined(INCLUDE_OrgJunitInternalRunnersStatementsInvokeMethod))
#define OrgJunitInternalRunnersStatementsInvokeMethod_

#define RESTRICT_OrgJunitRunnersModelStatement 1
#define INCLUDE_OrgJunitRunnersModelStatement 1
#include "org/junit/runners/model/Statement.h"

@class OrgJunitRunnersModelFrameworkMethod;

@interface OrgJunitInternalRunnersStatementsInvokeMethod : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)testMethod
                                                     withId:(id)target;

- (void)evaluate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsInvokeMethod)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsInvokeMethod_initWithOrgJunitRunnersModelFrameworkMethod_withId_(OrgJunitInternalRunnersStatementsInvokeMethod *self, OrgJunitRunnersModelFrameworkMethod *testMethod, id target);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsInvokeMethod *new_OrgJunitInternalRunnersStatementsInvokeMethod_initWithOrgJunitRunnersModelFrameworkMethod_withId_(OrgJunitRunnersModelFrameworkMethod *testMethod, id target) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsInvokeMethod *create_OrgJunitInternalRunnersStatementsInvokeMethod_initWithOrgJunitRunnersModelFrameworkMethod_withId_(OrgJunitRunnersModelFrameworkMethod *testMethod, id target);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsInvokeMethod)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsInvokeMethod")
