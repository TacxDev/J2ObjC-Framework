//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/junit/build_result/java/org/junit/runner/manipulation/Sorter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerManipulationSorter")
#ifdef RESTRICT_OrgJunitRunnerManipulationSorter
#define INCLUDE_ALL_OrgJunitRunnerManipulationSorter 0
#else
#define INCLUDE_ALL_OrgJunitRunnerManipulationSorter 1
#endif
#undef RESTRICT_OrgJunitRunnerManipulationSorter

#if !defined (OrgJunitRunnerManipulationSorter_) && (INCLUDE_ALL_OrgJunitRunnerManipulationSorter || defined(INCLUDE_OrgJunitRunnerManipulationSorter))
#define OrgJunitRunnerManipulationSorter_

#define RESTRICT_OrgJunitRunnerManipulationOrdering 1
#define INCLUDE_OrgJunitRunnerManipulationOrdering 1
#include "org/junit/runner/manipulation/Ordering.h"

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class OrgJunitRunnerDescription;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;
@protocol JavaUtilList;

@interface OrgJunitRunnerManipulationSorter : OrgJunitRunnerManipulationOrdering < JavaUtilComparator >

#pragma mark Public

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (void)applyWithId:(id)target;

- (jint)compareWithId:(OrgJunitRunnerDescription *)o1
               withId:(OrgJunitRunnerDescription *)o2;

#pragma mark Protected

- (id<JavaUtilList>)orderItemsWithJavaUtilCollection:(id<JavaUtilCollection>)descriptions;

#pragma mark Package-Private

- (jboolean)validateOrderingIsCorrect;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(OrgJunitRunnerManipulationSorter)

inline OrgJunitRunnerManipulationSorter *OrgJunitRunnerManipulationSorter_get_NULL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgJunitRunnerManipulationSorter *OrgJunitRunnerManipulationSorter_NULL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJunitRunnerManipulationSorter, NULL, OrgJunitRunnerManipulationSorter *)

FOUNDATION_EXPORT void OrgJunitRunnerManipulationSorter_initWithJavaUtilComparator_(OrgJunitRunnerManipulationSorter *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT OrgJunitRunnerManipulationSorter *new_OrgJunitRunnerManipulationSorter_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerManipulationSorter *create_OrgJunitRunnerManipulationSorter_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationSorter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerManipulationSorter")