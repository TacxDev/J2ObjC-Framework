//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runners/model/TestTimedOutException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelTestTimedOutException")
#ifdef RESTRICT_OrgJunitRunnersModelTestTimedOutException
#define INCLUDE_ALL_OrgJunitRunnersModelTestTimedOutException 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelTestTimedOutException 1
#endif
#undef RESTRICT_OrgJunitRunnersModelTestTimedOutException

#if !defined (OrgJunitRunnersModelTestTimedOutException_) && (INCLUDE_ALL_OrgJunitRunnersModelTestTimedOutException || defined(INCLUDE_OrgJunitRunnersModelTestTimedOutException))
#define OrgJunitRunnersModelTestTimedOutException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangBoolean;
@class JavaLangLong;
@class JavaLangThrowable;
@class JavaUtilConcurrentTimeUnit;

@interface OrgJunitRunnersModelTestTimedOutException : JavaLangException

#pragma mark Public

- (instancetype)initWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeUnit;

- (jlong)getTimeout;

- (JavaUtilConcurrentTimeUnit *)getTimeUnit;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelTestTimedOutException)

FOUNDATION_EXPORT void OrgJunitRunnersModelTestTimedOutException_initWithLong_withJavaUtilConcurrentTimeUnit_(OrgJunitRunnersModelTestTimedOutException *self, jlong timeout, JavaUtilConcurrentTimeUnit *timeUnit);

FOUNDATION_EXPORT OrgJunitRunnersModelTestTimedOutException *new_OrgJunitRunnersModelTestTimedOutException_initWithLong_withJavaUtilConcurrentTimeUnit_(jlong timeout, JavaUtilConcurrentTimeUnit *timeUnit) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersModelTestTimedOutException *create_OrgJunitRunnersModelTestTimedOutException_initWithLong_withJavaUtilConcurrentTimeUnit_(jlong timeout, JavaUtilConcurrentTimeUnit *timeUnit);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelTestTimedOutException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelTestTimedOutException")
