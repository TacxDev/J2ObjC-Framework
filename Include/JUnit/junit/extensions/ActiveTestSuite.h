//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/junit/extensions/ActiveTestSuite.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitExtensionsActiveTestSuite")
#ifdef RESTRICT_JunitExtensionsActiveTestSuite
#define INCLUDE_ALL_JunitExtensionsActiveTestSuite 0
#else
#define INCLUDE_ALL_JunitExtensionsActiveTestSuite 1
#endif
#undef RESTRICT_JunitExtensionsActiveTestSuite

#if !defined (JunitExtensionsActiveTestSuite_) && (INCLUDE_ALL_JunitExtensionsActiveTestSuite || defined(INCLUDE_JunitExtensionsActiveTestSuite))
#define JunitExtensionsActiveTestSuite_

#define RESTRICT_JunitFrameworkTestSuite 1
#define INCLUDE_JunitFrameworkTestSuite 1
#include "junit/framework/TestSuite.h"

@class IOSClass;
@class IOSObjectArray;
@class JunitFrameworkTestResult;
@protocol JunitFrameworkTest;

@interface JunitExtensionsActiveTestSuite : JunitFrameworkTestSuite

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithIOSClass:(IOSClass *)theClass;

- (instancetype)initWithIOSClass:(IOSClass *)theClass
                    withNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)runFinished;

- (void)runTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
         withJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

#pragma mark Package-Private

- (void)waitUntilFinished;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithIOSClassArray:(IOSObjectArray *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithIOSClassArray:(IOSObjectArray *)arg0
                         withNSString:(NSString *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitExtensionsActiveTestSuite)

FOUNDATION_EXPORT void JunitExtensionsActiveTestSuite_init(JunitExtensionsActiveTestSuite *self);

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *new_JunitExtensionsActiveTestSuite_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *create_JunitExtensionsActiveTestSuite_init(void);

FOUNDATION_EXPORT void JunitExtensionsActiveTestSuite_initWithIOSClass_(JunitExtensionsActiveTestSuite *self, IOSClass *theClass);

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *new_JunitExtensionsActiveTestSuite_initWithIOSClass_(IOSClass *theClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *create_JunitExtensionsActiveTestSuite_initWithIOSClass_(IOSClass *theClass);

FOUNDATION_EXPORT void JunitExtensionsActiveTestSuite_initWithNSString_(JunitExtensionsActiveTestSuite *self, NSString *name);

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *new_JunitExtensionsActiveTestSuite_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *create_JunitExtensionsActiveTestSuite_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JunitExtensionsActiveTestSuite_initWithIOSClass_withNSString_(JunitExtensionsActiveTestSuite *self, IOSClass *theClass, NSString *name);

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *new_JunitExtensionsActiveTestSuite_initWithIOSClass_withNSString_(IOSClass *theClass, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitExtensionsActiveTestSuite *create_JunitExtensionsActiveTestSuite_initWithIOSClass_withNSString_(IOSClass *theClass, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JunitExtensionsActiveTestSuite)

#endif

#pragma pop_macro("INCLUDE_ALL_JunitExtensionsActiveTestSuite")
