//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/junit/framework/JUnit4TestAdapter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkJUnit4TestAdapter")
#ifdef RESTRICT_JunitFrameworkJUnit4TestAdapter
#define INCLUDE_ALL_JunitFrameworkJUnit4TestAdapter 0
#else
#define INCLUDE_ALL_JunitFrameworkJUnit4TestAdapter 1
#endif
#undef RESTRICT_JunitFrameworkJUnit4TestAdapter

#if !defined (JunitFrameworkJUnit4TestAdapter_) && (INCLUDE_ALL_JunitFrameworkJUnit4TestAdapter || defined(INCLUDE_JunitFrameworkJUnit4TestAdapter))
#define JunitFrameworkJUnit4TestAdapter_

#define RESTRICT_JunitFrameworkTest 1
#define INCLUDE_JunitFrameworkTest 1
#include "junit/framework/Test.h"

#define RESTRICT_OrgJunitRunnerManipulationFilterable 1
#define INCLUDE_OrgJunitRunnerManipulationFilterable 1
#include "org/junit/runner/manipulation/Filterable.h"

#define RESTRICT_OrgJunitRunnerManipulationOrderable 1
#define INCLUDE_OrgJunitRunnerManipulationOrderable 1
#include "org/junit/runner/manipulation/Orderable.h"

#define RESTRICT_OrgJunitRunnerDescribable 1
#define INCLUDE_OrgJunitRunnerDescribable 1
#include "org/junit/runner/Describable.h"

@class IOSClass;
@class JavaLangInteger;
@class JunitFrameworkJUnit4TestAdapterCache;
@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationOrderer;
@class OrgJunitRunnerManipulationSorter;
@protocol JavaUtilList;

@interface JunitFrameworkJUnit4TestAdapter : NSObject < JunitFrameworkTest, OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationOrderable, OrgJunitRunnerDescribable >

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)newTestClass;

- (instancetype)initWithIOSClass:(IOSClass *)newTestClass
withJunitFrameworkJUnit4TestAdapterCache:(JunitFrameworkJUnit4TestAdapterCache *)cache;

- (jint)countTestCases;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (IOSClass *)getTestClass;

- (id<JavaUtilList>)getTests;

- (void)orderWithOrgJunitRunnerManipulationOrderer:(OrgJunitRunnerManipulationOrderer *)orderer;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkJUnit4TestAdapter)

FOUNDATION_EXPORT void JunitFrameworkJUnit4TestAdapter_initWithIOSClass_(JunitFrameworkJUnit4TestAdapter *self, IOSClass *newTestClass);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapter *new_JunitFrameworkJUnit4TestAdapter_initWithIOSClass_(IOSClass *newTestClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapter *create_JunitFrameworkJUnit4TestAdapter_initWithIOSClass_(IOSClass *newTestClass);

FOUNDATION_EXPORT void JunitFrameworkJUnit4TestAdapter_initWithIOSClass_withJunitFrameworkJUnit4TestAdapterCache_(JunitFrameworkJUnit4TestAdapter *self, IOSClass *newTestClass, JunitFrameworkJUnit4TestAdapterCache *cache);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapter *new_JunitFrameworkJUnit4TestAdapter_initWithIOSClass_withJunitFrameworkJUnit4TestAdapterCache_(IOSClass *newTestClass, JunitFrameworkJUnit4TestAdapterCache *cache) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapter *create_JunitFrameworkJUnit4TestAdapter_initWithIOSClass_withJunitFrameworkJUnit4TestAdapterCache_(IOSClass *newTestClass, JunitFrameworkJUnit4TestAdapterCache *cache);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkJUnit4TestAdapter)

#endif

#pragma pop_macro("INCLUDE_ALL_JunitFrameworkJUnit4TestAdapter")