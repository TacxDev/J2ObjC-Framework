//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/Test.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitTest")
#ifdef RESTRICT_OrgJunitTest
#define INCLUDE_ALL_OrgJunitTest 0
#else
#define INCLUDE_ALL_OrgJunitTest 1
#endif
#undef RESTRICT_OrgJunitTest

#if !defined (OrgJunitTest_) && (INCLUDE_ALL_OrgJunitTest || defined(INCLUDE_OrgJunitTest))
#define OrgJunitTest_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;

@protocol OrgJunitTest < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *expected;
@property (readonly) jlong timeout;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitTest : NSObject < OrgJunitTest > {
 @public
  IOSClass *expected_;
  jlong timeout_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitTest)

FOUNDATION_EXPORT id<OrgJunitTest> create_OrgJunitTest(IOSClass *expected, jlong timeout);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitTest)

#endif

#if !defined (OrgJunitTest_None_) && (INCLUDE_ALL_OrgJunitTest || defined(INCLUDE_OrgJunitTest_None))
#define OrgJunitTest_None_

#define RESTRICT_JavaLangThrowable 1
#define INCLUDE_JavaLangThrowable 1
#include "java/lang/Throwable.h"

@class JavaLangBoolean;

@interface OrgJunitTest_None : JavaLangThrowable

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitTest_None)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitTest_None)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitTest")
