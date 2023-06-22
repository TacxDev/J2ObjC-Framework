//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/junit/runner/BaseTestRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitRunnerBaseTestRunner")
#ifdef RESTRICT_JunitRunnerBaseTestRunner
#define INCLUDE_ALL_JunitRunnerBaseTestRunner 0
#else
#define INCLUDE_ALL_JunitRunnerBaseTestRunner 1
#endif
#undef RESTRICT_JunitRunnerBaseTestRunner

#if !defined (JunitRunnerBaseTestRunner_) && (INCLUDE_ALL_JunitRunnerBaseTestRunner || defined(INCLUDE_JunitRunnerBaseTestRunner))
#define JunitRunnerBaseTestRunner_

#define RESTRICT_JunitFrameworkTestListener 1
#define INCLUDE_JunitFrameworkTestListener 1
#include "junit/framework/TestListener.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaLangThrowable;
@class JavaUtilProperties;
@class JunitFrameworkAssertionFailedError;
@protocol JunitFrameworkTest;

@interface JunitRunnerBaseTestRunner : NSObject < JunitFrameworkTestListener > {
 @public
  jboolean fLoading_;
}

#pragma mark Public

- (instancetype)init;

- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                 withJavaLangThrowable:(JavaLangThrowable *)e;

- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)e;

- (NSString *)elapsedTimeAsStringWithLong:(jlong)runTime;

- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (NSString *)extractClassNameWithNSString:(NSString *)className_;

+ (NSString *)getFilteredTraceWithNSString:(NSString *)stack;

+ (NSString *)getFilteredTraceWithJavaLangThrowable:(JavaLangThrowable *)e;

+ (NSString *)getPreferenceWithNSString:(NSString *)key;

+ (jint)getPreferenceWithNSString:(NSString *)key
                          withInt:(jint)dflt;

- (id<JunitFrameworkTest>)getTestWithNSString:(NSString *)suiteClassName;

+ (void)savePreferences;

- (void)setLoadingWithBoolean:(jboolean)enable;

+ (void)setPreferenceWithNSString:(NSString *)key
                     withNSString:(NSString *)value;

- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)testEndedWithNSString:(NSString *)testName;

- (void)testFailedWithInt:(jint)status
   withJunitFrameworkTest:(id<JunitFrameworkTest>)test
    withJavaLangThrowable:(JavaLangThrowable *)e;

- (void)testStartedWithNSString:(NSString *)testName;

+ (NSString *)truncateWithNSString:(NSString *)s;

#pragma mark Protected

- (void)clearStatus;

+ (JavaUtilProperties *)getPreferences;

- (IOSClass *)loadSuiteClassWithNSString:(NSString *)suiteClassName;

- (NSString *)processArgumentsWithNSStringArray:(IOSObjectArray *)args;

- (void)runFailedWithNSString:(NSString *)message;

+ (void)setPreferencesWithJavaUtilProperties:(JavaUtilProperties *)preferences;

+ (jboolean)showStackRaw;

- (jboolean)useReloadingTestSuiteLoader;

#pragma mark Package-Private

+ (jboolean)filterLineWithNSString:(NSString *)line;

@end

J2OBJC_STATIC_INIT(JunitRunnerBaseTestRunner)

inline NSString *JunitRunnerBaseTestRunner_get_SUITE_METHODNAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JunitRunnerBaseTestRunner_SUITE_METHODNAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JunitRunnerBaseTestRunner, SUITE_METHODNAME, NSString *)

inline jint JunitRunnerBaseTestRunner_get_fgMaxMessageLength(void);
inline jint JunitRunnerBaseTestRunner_set_fgMaxMessageLength(jint value);
inline jint *JunitRunnerBaseTestRunner_getRef_fgMaxMessageLength(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint JunitRunnerBaseTestRunner_fgMaxMessageLength;
J2OBJC_STATIC_FIELD_PRIMITIVE(JunitRunnerBaseTestRunner, fgMaxMessageLength, jint)

inline jboolean JunitRunnerBaseTestRunner_get_fgFilterStack(void);
inline jboolean JunitRunnerBaseTestRunner_set_fgFilterStack(jboolean value);
inline jboolean *JunitRunnerBaseTestRunner_getRef_fgFilterStack(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jboolean JunitRunnerBaseTestRunner_fgFilterStack;
J2OBJC_STATIC_FIELD_PRIMITIVE(JunitRunnerBaseTestRunner, fgFilterStack, jboolean)

FOUNDATION_EXPORT void JunitRunnerBaseTestRunner_init(JunitRunnerBaseTestRunner *self);

FOUNDATION_EXPORT void JunitRunnerBaseTestRunner_setPreferencesWithJavaUtilProperties_(JavaUtilProperties *preferences);

FOUNDATION_EXPORT JavaUtilProperties *JunitRunnerBaseTestRunner_getPreferences(void);

FOUNDATION_EXPORT void JunitRunnerBaseTestRunner_savePreferences(void);

FOUNDATION_EXPORT void JunitRunnerBaseTestRunner_setPreferenceWithNSString_withNSString_(NSString *key, NSString *value);

FOUNDATION_EXPORT NSString *JunitRunnerBaseTestRunner_truncateWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *JunitRunnerBaseTestRunner_getPreferenceWithNSString_(NSString *key);

FOUNDATION_EXPORT jint JunitRunnerBaseTestRunner_getPreferenceWithNSString_withInt_(NSString *key, jint dflt);

FOUNDATION_EXPORT NSString *JunitRunnerBaseTestRunner_getFilteredTraceWithJavaLangThrowable_(JavaLangThrowable *e);

FOUNDATION_EXPORT NSString *JunitRunnerBaseTestRunner_getFilteredTraceWithNSString_(NSString *stack);

FOUNDATION_EXPORT jboolean JunitRunnerBaseTestRunner_showStackRaw(void);

FOUNDATION_EXPORT jboolean JunitRunnerBaseTestRunner_filterLineWithNSString_(NSString *line);

J2OBJC_TYPE_LITERAL_HEADER(JunitRunnerBaseTestRunner)

#endif

#pragma pop_macro("INCLUDE_ALL_JunitRunnerBaseTestRunner")