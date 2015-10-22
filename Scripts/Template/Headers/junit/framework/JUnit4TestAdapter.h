//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/framework/JUnit4TestAdapter.java
//

#ifndef _JunitFrameworkJUnit4TestAdapter_H_
#define _JunitFrameworkJUnit4TestAdapter_H_

#include "../../J2ObjC_header.h"
#include "../../junit/framework/Test.h"
#include "../../org/junit/runner/Describable.h"
#include "../../org/junit/runner/manipulation/Filterable.h"
#include "../../org/junit/runner/manipulation/Sortable.h"

@class IOSClass;
@class JunitFrameworkJUnit4TestAdapterCache;
@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationSorter;
@protocol JavaUtilList;

@interface JunitFrameworkJUnit4TestAdapter : NSObject < JunitFrameworkTest, OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationSortable, OrgJunitRunnerDescribable >

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)newTestClass;

- (instancetype)initWithIOSClass:(IOSClass *)newTestClass
withJunitFrameworkJUnit4TestAdapterCache:(JunitFrameworkJUnit4TestAdapterCache *)cache;

- (jint)countTestCases;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

- (IOSClass *)getTestClass;

- (id<JavaUtilList>)getTests;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkJUnit4TestAdapter)

FOUNDATION_EXPORT void JunitFrameworkJUnit4TestAdapter_initWithIOSClass_(JunitFrameworkJUnit4TestAdapter *self, IOSClass *newTestClass);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapter *new_JunitFrameworkJUnit4TestAdapter_initWithIOSClass_(IOSClass *newTestClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JunitFrameworkJUnit4TestAdapter_initWithIOSClass_withJunitFrameworkJUnit4TestAdapterCache_(JunitFrameworkJUnit4TestAdapter *self, IOSClass *newTestClass, JunitFrameworkJUnit4TestAdapterCache *cache);

FOUNDATION_EXPORT JunitFrameworkJUnit4TestAdapter *new_JunitFrameworkJUnit4TestAdapter_initWithIOSClass_withJunitFrameworkJUnit4TestAdapterCache_(IOSClass *newTestClass, JunitFrameworkJUnit4TestAdapterCache *cache) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkJUnit4TestAdapter)

#endif // _JunitFrameworkJUnit4TestAdapter_H_
