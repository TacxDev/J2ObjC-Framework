//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runner/Description.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerDescription")
#ifdef RESTRICT_OrgJunitRunnerDescription
#define INCLUDE_ALL_OrgJunitRunnerDescription 0
#else
#define INCLUDE_ALL_OrgJunitRunnerDescription 1
#endif
#undef RESTRICT_OrgJunitRunnerDescription

#if !defined (OrgJunitRunnerDescription_) && (INCLUDE_ALL_OrgJunitRunnerDescription || defined(INCLUDE_OrgJunitRunnerDescription))
#define OrgJunitRunnerDescription_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaUtilArrayList;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaUtilCollection;

@interface OrgJunitRunnerDescription : NSObject < JavaIoSerializable >

#pragma mark Public

- (void)addChildWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (OrgJunitRunnerDescription *)childlessCopy;

+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithIOSClass:(IOSClass *)testClass;

+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithIOSClass:(IOSClass *)testClass
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithNSString:(NSString *)name
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

+ (OrgJunitRunnerDescription *)createSuiteDescriptionWithNSString:(NSString *)name
                                           withJavaIoSerializable:(id<JavaIoSerializable>)uniqueId
                            withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name;

+ (OrgJunitRunnerDescription *)createTestDescriptionWithIOSClass:(IOSClass *)clazz
                                                    withNSString:(NSString *)name
                           withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

+ (OrgJunitRunnerDescription *)createTestDescriptionWithNSString:(NSString *)className_
                                                    withNSString:(NSString *)name
                           withJavaLangAnnotationAnnotationArray:(IOSObjectArray *)annotations;

+ (OrgJunitRunnerDescription *)createTestDescriptionWithNSString:(NSString *)className_
                                                    withNSString:(NSString *)name
                                          withJavaIoSerializable:(id<JavaIoSerializable>)uniqueId;

- (jboolean)isEqual:(id)obj;

- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (id<JavaUtilCollection>)getAnnotations;

- (JavaUtilArrayList *)getChildren;

- (NSString *)getClassName;

- (NSString *)getDisplayName;

- (NSString *)getMethodName;

- (IOSClass *)getTestClass;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (jboolean)isSuite;

- (jboolean)isTest;

- (jint)testCount;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnerDescription)

inline OrgJunitRunnerDescription *OrgJunitRunnerDescription_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJunitRunnerDescription, EMPTY, OrgJunitRunnerDescription *)

inline OrgJunitRunnerDescription *OrgJunitRunnerDescription_get_TEST_MECHANISM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_TEST_MECHANISM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJunitRunnerDescription, TEST_MECHANISM, OrgJunitRunnerDescription *)

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithNSString_withJavaLangAnnotationAnnotationArray_(NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithNSString_withJavaIoSerializable_withJavaLangAnnotationAnnotationArray_(NSString *name, id<JavaIoSerializable> uniqueId, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithNSString_withNSString_withJavaLangAnnotationAnnotationArray_(NSString *className_, NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithIOSClass_withNSString_withJavaLangAnnotationAnnotationArray_(IOSClass *clazz, NSString *name, IOSObjectArray *annotations);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithIOSClass_withNSString_(IOSClass *clazz, NSString *name);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createTestDescriptionWithNSString_withNSString_withJavaIoSerializable_(NSString *className_, NSString *name, id<JavaIoSerializable> uniqueId);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithIOSClass_(IOSClass *testClass);

FOUNDATION_EXPORT OrgJunitRunnerDescription *OrgJunitRunnerDescription_createSuiteDescriptionWithIOSClass_withJavaLangAnnotationAnnotationArray_(IOSClass *testClass, IOSObjectArray *annotations);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerDescription)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerDescription")
