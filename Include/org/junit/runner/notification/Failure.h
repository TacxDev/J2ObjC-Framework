//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runner/notification/Failure.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerNotificationFailure")
#ifdef RESTRICT_OrgJunitRunnerNotificationFailure
#define INCLUDE_ALL_OrgJunitRunnerNotificationFailure 0
#else
#define INCLUDE_ALL_OrgJunitRunnerNotificationFailure 1
#endif
#undef RESTRICT_OrgJunitRunnerNotificationFailure

#if !defined (OrgJunitRunnerNotificationFailure_) && (INCLUDE_ALL_OrgJunitRunnerNotificationFailure || defined(INCLUDE_OrgJunitRunnerNotificationFailure))
#define OrgJunitRunnerNotificationFailure_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangThrowable;
@class OrgJunitRunnerDescription;

@interface OrgJunitRunnerNotificationFailure : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
                            withJavaLangThrowable:(JavaLangThrowable *)thrownException;

- (OrgJunitRunnerDescription *)getDescription;

- (JavaLangThrowable *)getException;

- (NSString *)getMessage;

- (NSString *)getTestHeader;

- (NSString *)getTrace;

- (NSString *)getTrimmedTrace;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerNotificationFailure)

FOUNDATION_EXPORT void OrgJunitRunnerNotificationFailure_initWithOrgJunitRunnerDescription_withJavaLangThrowable_(OrgJunitRunnerNotificationFailure *self, OrgJunitRunnerDescription *description_, JavaLangThrowable *thrownException);

FOUNDATION_EXPORT OrgJunitRunnerNotificationFailure *new_OrgJunitRunnerNotificationFailure_initWithOrgJunitRunnerDescription_withJavaLangThrowable_(OrgJunitRunnerDescription *description_, JavaLangThrowable *thrownException) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerNotificationFailure *create_OrgJunitRunnerNotificationFailure_initWithOrgJunitRunnerDescription_withJavaLangThrowable_(OrgJunitRunnerDescription *description_, JavaLangThrowable *thrownException);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerNotificationFailure)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerNotificationFailure")
