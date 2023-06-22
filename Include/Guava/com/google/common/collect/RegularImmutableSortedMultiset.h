//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/RegularImmutableSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSortedMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectRegularImmutableSortedMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSortedMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSortedMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRegularImmutableSortedMultiset

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectRegularImmutableSortedMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectRegularImmutableSortedMultiset))
#define ComGoogleCommonCollectRegularImmutableSortedMultiset_

#define RESTRICT_ComGoogleCommonCollectImmutableSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectImmutableSortedMultiset 1
#include "com/google/common/collect/ImmutableSortedMultiset.h"

@class ComGoogleCommonCollectBoundType;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRegularImmutableSortedSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSLongArray;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionObjIntConsumer;

@interface ComGoogleCommonCollectRegularImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultiset {
 @public
  ComGoogleCommonCollectRegularImmutableSortedSet *elementSet_;
}

#pragma mark Public

- (jint)countWithId:(id)element;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (void)forEachEntryWithJavaUtilFunctionObjIntConsumer:(id<JavaUtilFunctionObjIntConsumer>)action;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id)upperBound
                                  withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (jint)size;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id)lowerBound
                                  withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)initPackagePrivateWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)elementSet
                                                                        withLongArray:(IOSLongArray *)cumulativeCounts
                                                                              withInt:(jint)offset
                                                                              withInt:(jint)length;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableSortedMultiset *)getSubMultisetWithInt:(jint)from
                                                                 withInt:(jint)to;

- (jboolean)isPartialView;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectRegularImmutableSortedMultiset)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRegularImmutableSortedMultiset, elementSet_, ComGoogleCommonCollectRegularImmutableSortedSet *)

inline ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectRegularImmutableSortedMultiset_get_NATURAL_EMPTY_MULTISET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectRegularImmutableSortedMultiset_NATURAL_EMPTY_MULTISET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectRegularImmutableSortedMultiset, NATURAL_EMPTY_MULTISET, ComGoogleCommonCollectImmutableSortedMultiset *)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableSortedMultiset_initPackagePrivateWithJavaUtilComparator_(ComGoogleCommonCollectRegularImmutableSortedMultiset *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedMultiset *new_ComGoogleCommonCollectRegularImmutableSortedMultiset_initPackagePrivateWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedMultiset *create_ComGoogleCommonCollectRegularImmutableSortedMultiset_initPackagePrivateWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableSortedMultiset_initPackagePrivateWithComGoogleCommonCollectRegularImmutableSortedSet_withLongArray_withInt_withInt_(ComGoogleCommonCollectRegularImmutableSortedMultiset *self, ComGoogleCommonCollectRegularImmutableSortedSet *elementSet, IOSLongArray *cumulativeCounts, jint offset, jint length);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedMultiset *new_ComGoogleCommonCollectRegularImmutableSortedMultiset_initPackagePrivateWithComGoogleCommonCollectRegularImmutableSortedSet_withLongArray_withInt_withInt_(ComGoogleCommonCollectRegularImmutableSortedSet *elementSet, IOSLongArray *cumulativeCounts, jint offset, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedMultiset *create_ComGoogleCommonCollectRegularImmutableSortedMultiset_initPackagePrivateWithComGoogleCommonCollectRegularImmutableSortedSet_withLongArray_withInt_withInt_(ComGoogleCommonCollectRegularImmutableSortedSet *elementSet, IOSLongArray *cumulativeCounts, jint offset, jint length);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableSortedMultiset)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRegularImmutableSortedMultiset")
