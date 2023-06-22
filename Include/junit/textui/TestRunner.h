//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/junit/textui/TestRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitTextuiTestRunner")
#ifdef RESTRICT_JunitTextuiTestRunner
#define INCLUDE_ALL_JunitTextuiTestRunner 0
#else
#define INCLUDE_ALL_JunitTextuiTestRunner 1
#endif
#undef RESTRICT_JunitTextuiTestRunner

#if !defined (JunitTextuiTestRunner_) && (INCLUDE_ALL_JunitTextuiTestRunner || defined(INCLUDE_JunitTextuiTestRunner))
#define JunitTextuiTestRunner_

#define RESTRICT_JunitRunnerBaseTestRunner 1
#define INCLUDE_JunitRunnerBaseTestRunner 1
#include "junit/runner/BaseTestRunner.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaIoPrintStream;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangThrowable;
@class JunitFrameworkTestResult;
@class JunitTextuiResultPrinter;
@protocol JunitFrameworkTest;

@interface JunitTextuiTestRunner : JunitRunnerBaseTestRunner

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)writer;

- (instancetype)initWithJunitTextuiResultPrinter:(JunitTextuiResultPrinter *)printer;

- (JunitFrameworkTestResult *)doRunWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (JunitFrameworkTestResult *)doRunWithJunitFrameworkTest:(id<JunitFrameworkTest>)suite
                                              withBoolean:(jboolean)wait;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

+ (void)runWithIOSClass:(IOSClass *)testClass;

+ (JunitFrameworkTestResult *)runWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

+ (void)runAndWaitWithJunitFrameworkTest:(id<JunitFrameworkTest>)suite;

- (void)setPrinterWithJunitTextuiResultPrinter:(JunitTextuiResultPrinter *)printer;

- (JunitFrameworkTestResult *)startWithNSStringArray:(IOSObjectArray *)args;

- (void)testEndedWithNSString:(NSString *)testName;

- (void)testFailedWithInt:(jint)status
   withJunitFrameworkTest:(id<JunitFrameworkTest>)test
    withJavaLangThrowable:(JavaLangThrowable *)e;

- (void)testStartedWithNSString:(NSString *)testName;

#pragma mark Protected

- (JunitFrameworkTestResult *)createTestResult;

- (void)pauseWithBoolean:(jboolean)wait;

- (void)runFailedWithNSString:(NSString *)message;

- (JunitFrameworkTestResult *)runSingleMethodWithNSString:(NSString *)testCase
                                             withNSString:(NSString *)method
                                              withBoolean:(jboolean)wait;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitTextuiTestRunner)

inline jint JunitTextuiTestRunner_get_SUCCESS_EXIT(void);
#define JunitTextuiTestRunner_SUCCESS_EXIT 0
J2OBJC_STATIC_FIELD_CONSTANT(JunitTextuiTestRunner, SUCCESS_EXIT, jint)

inline jint JunitTextuiTestRunner_get_FAILURE_EXIT(void);
#define JunitTextuiTestRunner_FAILURE_EXIT 1
J2OBJC_STATIC_FIELD_CONSTANT(JunitTextuiTestRunner, FAILURE_EXIT, jint)

inline jint JunitTextuiTestRunner_get_EXCEPTION_EXIT(void);
#define JunitTextuiTestRunner_EXCEPTION_EXIT 2
J2OBJC_STATIC_FIELD_CONSTANT(JunitTextuiTestRunner, EXCEPTION_EXIT, jint)

FOUNDATION_EXPORT void JunitTextuiTestRunner_init(JunitTextuiTestRunner *self);

FOUNDATION_EXPORT JunitTextuiTestRunner *new_JunitTextuiTestRunner_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitTextuiTestRunner *create_JunitTextuiTestRunner_init(void);

FOUNDATION_EXPORT void JunitTextuiTestRunner_initWithJavaIoPrintStream_(JunitTextuiTestRunner *self, JavaIoPrintStream *writer);

FOUNDATION_EXPORT JunitTextuiTestRunner *new_JunitTextuiTestRunner_initWithJavaIoPrintStream_(JavaIoPrintStream *writer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitTextuiTestRunner *create_JunitTextuiTestRunner_initWithJavaIoPrintStream_(JavaIoPrintStream *writer);

FOUNDATION_EXPORT void JunitTextuiTestRunner_initWithJunitTextuiResultPrinter_(JunitTextuiTestRunner *self, JunitTextuiResultPrinter *printer);

FOUNDATION_EXPORT JunitTextuiTestRunner *new_JunitTextuiTestRunner_initWithJunitTextuiResultPrinter_(JunitTextuiResultPrinter *printer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitTextuiTestRunner *create_JunitTextuiTestRunner_initWithJunitTextuiResultPrinter_(JunitTextuiResultPrinter *printer);

FOUNDATION_EXPORT void JunitTextuiTestRunner_runWithIOSClass_(IOSClass *testClass);

FOUNDATION_EXPORT JunitFrameworkTestResult *JunitTextuiTestRunner_runWithJunitFrameworkTest_(id<JunitFrameworkTest> test);

FOUNDATION_EXPORT void JunitTextuiTestRunner_runAndWaitWithJunitFrameworkTest_(id<JunitFrameworkTest> suite);

FOUNDATION_EXPORT void JunitTextuiTestRunner_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(JunitTextuiTestRunner)

#endif

#pragma pop_macro("INCLUDE_ALL_JunitTextuiTestRunner")