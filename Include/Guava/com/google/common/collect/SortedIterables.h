//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/SortedIterables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedIterables")
#ifdef RESTRICT_ComGoogleCommonCollectSortedIterables
#define INCLUDE_ALL_ComGoogleCommonCollectSortedIterables 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSortedIterables 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSortedIterables

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSortedIterables_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedIterables || defined(INCLUDE_ComGoogleCommonCollectSortedIterables))
#define ComGoogleCommonCollectSortedIterables_

@class JavaLangBoolean;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectSortedIterables : NSObject

#pragma mark Public

+ (id<JavaUtilComparator>)comparatorWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)sortedSet;

+ (jboolean)hasSameComparatorWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                               withJavaLangIterable:(id<JavaLangIterable>)elements;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedIterables)

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectSortedIterables_hasSameComparatorWithJavaUtilComparator_withJavaLangIterable_(id<JavaUtilComparator> comparator, id<JavaLangIterable> elements);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonCollectSortedIterables_comparatorWithJavaUtilSortedSet_(id<JavaUtilSortedSet> sortedSet);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedIterables)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedIterables")
