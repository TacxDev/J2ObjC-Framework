//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/junit/framework/JUnit4TestAdapterCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkJUnit4TestAdapterCache")
#ifdef RESTRICT_JunitFrameworkJUnit4TestAdapterCache
#define INCLUDE_ALL_JunitFrameworkJUnit4TestAdapterCache 0
#else
#define INCLUDE_ALL_JunitFrameworkJUnit4TestAdapterCache 1
#endif
#undef RESTRICT_JunitFrameworkJUnit4TestAdapterCache

#if !defined (JunitFrameworkJUnit4TestAdapterCache_) && (INCLUDE_ALL_JunitFrameworkJUnit4TestAdapterCache || defined(INCLUDE_JunitFrameworkJUnit4TestAdapterCache))
#define JunitFrameworkJUnit4TestAdapterCache_

#define RESTRICT_JavaUtilHashMap 1
#define INCLUDE_JavaUtilHashMap 1
#include "java/util/HashMap.h"

@class JavaLangBoolean;
@class JavaLangFloat;
@class JavaLangInteger;
@class JunitFrameworkJUnit4TestAdapter;
@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JunitFrameworkTest;

@interface JunitFrameworkJUnit4TestAdapterCache : JavaUtilHashMap

#pragma mark Public

- (instancetype)init;

- (id<JunitFrameworkTest>)asTestWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (id<JavaUtilList>)asTestListWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (id<JunitFrameworkTest>)computeIfAbsentWithId:(id)arg0
                   withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg1;

- (id<JunitFrameworkTest>)computeIfPresentWithId:(id)arg0
                  withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (id<JunitFrameworkTest>)computeWithId:(id)arg0
         withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

+ (JunitFrameworkJUnit4TestAdapterCache *)getDefault;

- (OrgJunitRunnerNotificationRunNotifier *)getNotifierWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result
                                               withJunitFrameworkJUnit4TestAdapter:(JunitFrameworkJUnit4TestAdapter *)adapter;

- (id<JunitFrameworkTest>)getOrDefaultWithId:(id)arg0
                                      withId:(id)arg1;

- (id<JunitFrameworkTest>)getWithId:(id)arg0;

- (id<JunitFrameworkTest>)mergeWithId:(id)arg0
                               withId:(id)arg1
       withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg2;

- (id<JunitFrameworkTest>)putIfAbsentWithId:(id)arg0
                                     withId:(id)arg1;

- (id<JunitFrameworkTest>)putWithId:(id)arg0
                             withId:(id)arg1;

- (id<JunitFrameworkTest>)removeWithId:(id)arg0;

- (id<JunitFrameworkTest>)replaceWithId:(id)arg0
                                 withId:(id)arg1;

#pragma mark Package-Private

- (id<JunitFrameworkTest>)createTestWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (id<JunitFrameworkTest>)putValWithInt:(jint)arg0
                                 withId:(id)arg1
                                 withId:(id)arg2
                            withBoolean:(jboolean)arg3
                            withBoolean:(jboolean)arg4;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithInt:(jint)arg0 NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0
                  withFloat:(jfloat)arg1 NS_UNAVAILABLE;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JunitFrameworkJUnit4TestAdapterCache)

FOUNDATION_EXPORT void JunitFrameworkJUnit4TestAdapterCache_init(JunitFrameworkJUnit4TestAdapterCache *self);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapterCache *new_JunitFrameworkJUnit4TestAdapterCache_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapterCache *create_JunitFrameworkJUnit4TestAdapterCache_init(void);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapterCache *JunitFrameworkJUnit4TestAdapterCache_getDefault(void);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkJUnit4TestAdapterCache)

#endif

#pragma pop_macro("INCLUDE_ALL_JunitFrameworkJUnit4TestAdapterCache")