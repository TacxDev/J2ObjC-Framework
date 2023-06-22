//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runner/Result.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerResult")
#ifdef RESTRICT_OrgJunitRunnerResult
#define INCLUDE_ALL_OrgJunitRunnerResult 0
#else
#define INCLUDE_ALL_OrgJunitRunnerResult 1
#endif
#undef RESTRICT_OrgJunitRunnerResult

#if !defined (OrgJunitRunnerResult_) && (INCLUDE_ALL_OrgJunitRunnerResult || defined(INCLUDE_OrgJunitRunnerResult))
#define OrgJunitRunnerResult_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class OrgJunitRunnerNotificationRunListener;
@protocol JavaUtilList;

@interface OrgJunitRunnerResult : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerNotificationRunListener *)createListener;

- (jint)getAssumptionFailureCount;

- (jint)getFailureCount;

- (id<JavaUtilList>)getFailures;

- (jint)getIgnoreCount;

- (jint)getRunCount;

- (jlong)getRunTime;

- (jboolean)wasSuccessful;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnerResult)

FOUNDATION_EXPORT void OrgJunitRunnerResult_init(OrgJunitRunnerResult *self);

FOUNDATION_EXPORT OrgJunitRunnerResult *new_OrgJunitRunnerResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerResult *create_OrgJunitRunnerResult_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerResult)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerResult")
