//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/internal/runners/statements/FailOnTimeout.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout")
#ifdef RESTRICT_OrgJunitInternalRunnersStatementsFailOnTimeout
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersStatementsFailOnTimeout

#if !defined (OrgJunitInternalRunnersStatementsFailOnTimeout_) && (INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout || defined(INCLUDE_OrgJunitInternalRunnersStatementsFailOnTimeout))
#define OrgJunitInternalRunnersStatementsFailOnTimeout_

#define RESTRICT_OrgJunitRunnersModelStatement 1
#define INCLUDE_OrgJunitRunnersModelStatement 1
#include "org/junit/runners/model/Statement.h"

@class JavaLangLong;
@class OrgJunitInternalRunnersStatementsFailOnTimeout_Builder;

@interface OrgJunitInternalRunnersStatementsFailOnTimeout : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement
                                             withLong:(jlong)timeoutMillis;

+ (OrgJunitInternalRunnersStatementsFailOnTimeout_Builder *)builder;

- (void)evaluate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsFailOnTimeout)

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFailOnTimeout_Builder *OrgJunitInternalRunnersStatementsFailOnTimeout_builder(void);

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitInternalRunnersStatementsFailOnTimeout *self, OrgJunitRunnersModelStatement *statement, jlong timeoutMillis);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFailOnTimeout *new_OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitRunnersModelStatement *statement, jlong timeoutMillis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsFailOnTimeout *create_OrgJunitInternalRunnersStatementsFailOnTimeout_initWithOrgJunitRunnersModelStatement_withLong_(OrgJunitRunnersModelStatement *statement, jlong timeoutMillis);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsFailOnTimeout)

#endif

#if !defined (OrgJunitInternalRunnersStatementsFailOnTimeout_Builder_) && (INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout || defined(INCLUDE_OrgJunitInternalRunnersStatementsFailOnTimeout_Builder))
#define OrgJunitInternalRunnersStatementsFailOnTimeout_Builder_

@class JavaLangBoolean;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnit;
@class OrgJunitInternalRunnersStatementsFailOnTimeout;
@class OrgJunitRunnersModelStatement;

@interface OrgJunitInternalRunnersStatementsFailOnTimeout_Builder : NSObject

#pragma mark Public

- (OrgJunitInternalRunnersStatementsFailOnTimeout *)buildWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (OrgJunitInternalRunnersStatementsFailOnTimeout_Builder *)withLookingForStuckThreadWithBoolean:(jboolean)enable;

- (OrgJunitInternalRunnersStatementsFailOnTimeout_Builder *)withTimeoutWithLong:(jlong)timeout
                                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsFailOnTimeout_Builder)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsFailOnTimeout_Builder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersStatementsFailOnTimeout")
