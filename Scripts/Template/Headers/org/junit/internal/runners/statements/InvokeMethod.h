//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/internal/runners/statements/InvokeMethod.java
//

#ifndef _OrgJunitInternalRunnersStatementsInvokeMethod_H_
#define _OrgJunitInternalRunnersStatementsInvokeMethod_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../org/junit/runners/model/Statement.h"

@class OrgJunitRunnersModelFrameworkMethod;

@interface OrgJunitInternalRunnersStatementsInvokeMethod : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)testMethod
                                                     withId:(id)target;

- (void)evaluate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsInvokeMethod)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsInvokeMethod_initWithOrgJunitRunnersModelFrameworkMethod_withId_(OrgJunitInternalRunnersStatementsInvokeMethod *self, OrgJunitRunnersModelFrameworkMethod *testMethod, id target);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsInvokeMethod *new_OrgJunitInternalRunnersStatementsInvokeMethod_initWithOrgJunitRunnersModelFrameworkMethod_withId_(OrgJunitRunnersModelFrameworkMethod *testMethod, id target) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsInvokeMethod)

#endif // _OrgJunitInternalRunnersStatementsInvokeMethod_H_
