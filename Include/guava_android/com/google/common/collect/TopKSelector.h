//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/TopKSelector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTopKSelector")
#ifdef RESTRICT_ComGoogleCommonCollectTopKSelector
#define INCLUDE_ALL_ComGoogleCommonCollectTopKSelector 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTopKSelector 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTopKSelector

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTopKSelector_) && (INCLUDE_ALL_ComGoogleCommonCollectTopKSelector || defined(INCLUDE_ComGoogleCommonCollectTopKSelector))
#define ComGoogleCommonCollectTopKSelector_

@class JavaLangInteger;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectTopKSelector : NSObject

#pragma mark Public

+ (ComGoogleCommonCollectTopKSelector *)greatestWithInt:(jint)k;

+ (ComGoogleCommonCollectTopKSelector *)greatestWithInt:(jint)k
                                 withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectTopKSelector *)leastWithInt:(jint)k;

+ (ComGoogleCommonCollectTopKSelector *)leastWithInt:(jint)k
                              withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (void)offerWithId:(id)elem;

- (void)offerAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (void)offerAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (id<JavaUtilList>)topK;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTopKSelector)

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_leastWithInt_(jint k);

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_leastWithInt_withJavaUtilComparator_(jint k, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_greatestWithInt_(jint k);

FOUNDATION_EXPORT ComGoogleCommonCollectTopKSelector *ComGoogleCommonCollectTopKSelector_greatestWithInt_withJavaUtilComparator_(jint k, id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTopKSelector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTopKSelector")
