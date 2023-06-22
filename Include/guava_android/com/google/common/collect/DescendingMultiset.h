//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/DescendingMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectDescendingMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectDescendingMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectDescendingMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset || defined(INCLUDE_ComGoogleCommonCollectDescendingMultiset))
#define ComGoogleCommonCollectDescendingMultiset_

#define RESTRICT_ComGoogleCommonCollectForwardingMultiset 1
#define INCLUDE_ComGoogleCommonCollectForwardingMultiset 1
#include "com/google/common/collect/ForwardingMultiset.h"

#define RESTRICT_ComGoogleCommonCollectSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectSortedMultiset 1
#include "com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundType;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectDescendingMultiset : ComGoogleCommonCollectForwardingMultiset < ComGoogleCommonCollectSortedMultiset >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)toElement
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

- (id<JavaUtilIterator>)iterator;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id)fromElement
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)fromBoundType
                                                       withId:(id)toElement
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)toBoundType;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)fromElement
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (NSString *)description;

#pragma mark Protected

- (id<ComGoogleCommonCollectMultiset>)delegate;

#pragma mark Package-Private

- (instancetype)initPackagePrivate;

- (id<JavaUtilSet>)createEntrySet;

- (id<JavaUtilIterator>)entryIterator;

- (id<ComGoogleCommonCollectSortedMultiset>)forwardMultiset;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDescendingMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectDescendingMultiset_initPackagePrivate(ComGoogleCommonCollectDescendingMultiset *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDescendingMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectDescendingMultiset")