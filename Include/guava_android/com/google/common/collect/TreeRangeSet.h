//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/TreeRangeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeRangeSet")
#ifdef RESTRICT_ComGoogleCommonCollectTreeRangeSet
#define INCLUDE_ALL_ComGoogleCommonCollectTreeRangeSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTreeRangeSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTreeRangeSet

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectTreeRangeSet_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeRangeSet || defined(INCLUDE_ComGoogleCommonCollectTreeRangeSet))
#define ComGoogleCommonCollectTreeRangeSet_

#define RESTRICT_ComGoogleCommonCollectAbstractRangeSet 1
#define INCLUDE_ComGoogleCommonCollectAbstractRangeSet 1
#include "com/google/common/collect/AbstractRangeSet.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectRange;
@class JavaLangBoolean;
@protocol ComGoogleCommonCollectRangeSet;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilNavigableMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectTreeRangeSet : ComGoogleCommonCollectAbstractRangeSet < JavaIoSerializable > {
 @public
  id<JavaUtilNavigableMap> rangesByLowerBound_;
}

#pragma mark Public

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToAdd;

- (id<JavaUtilSet>)asDescendingSetOfRanges;

- (id<JavaUtilSet>)asRanges;

- (id<ComGoogleCommonCollectRangeSet>)complement;

+ (ComGoogleCommonCollectTreeRangeSet *)create;

+ (ComGoogleCommonCollectTreeRangeSet *)createWithJavaLangIterable:(id<JavaLangIterable>)ranges;

+ (ComGoogleCommonCollectTreeRangeSet *)createWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)rangeSet;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (jboolean)intersectsWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)rangeToRemove;

- (ComGoogleCommonCollectRange *)span;

- (id<ComGoogleCommonCollectRangeSet>)subRangeSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)view;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeRangeSet, rangesByLowerBound_, id<JavaUtilNavigableMap>)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet *ComGoogleCommonCollectTreeRangeSet_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet *ComGoogleCommonCollectTreeRangeSet_createWithComGoogleCommonCollectRangeSet_(id<ComGoogleCommonCollectRangeSet> rangeSet);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet *ComGoogleCommonCollectTreeRangeSet_createWithJavaLangIterable_(id<JavaLangIterable> ranges);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeSet)

#endif

#if !defined (ComGoogleCommonCollectTreeRangeSet_AsRanges_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeRangeSet || defined(INCLUDE_ComGoogleCommonCollectTreeRangeSet_AsRanges))
#define ComGoogleCommonCollectTreeRangeSet_AsRanges_

#define RESTRICT_ComGoogleCommonCollectForwardingCollection 1
#define INCLUDE_ComGoogleCommonCollectForwardingCollection 1
#include "com/google/common/collect/ForwardingCollection.h"

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class ComGoogleCommonCollectTreeRangeSet;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilCollection;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectTreeRangeSet_AsRanges : ComGoogleCommonCollectForwardingCollection < JavaUtilSet > {
 @public
  id<JavaUtilCollection> delegate_;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

#pragma mark Protected

- (id<JavaUtilCollection>)delegate;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectTreeRangeSet:(ComGoogleCommonCollectTreeRangeSet *)outer$
                                    withJavaUtilCollection:(id<JavaUtilCollection>)delegate;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeSet_AsRanges)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTreeRangeSet_AsRanges, delegate_, id<JavaUtilCollection>)

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeRangeSet_AsRanges_initWithComGoogleCommonCollectTreeRangeSet_withJavaUtilCollection_(ComGoogleCommonCollectTreeRangeSet_AsRanges *self, ComGoogleCommonCollectTreeRangeSet *outer$, id<JavaUtilCollection> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet_AsRanges *new_ComGoogleCommonCollectTreeRangeSet_AsRanges_initWithComGoogleCommonCollectTreeRangeSet_withJavaUtilCollection_(ComGoogleCommonCollectTreeRangeSet *outer$, id<JavaUtilCollection> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet_AsRanges *create_ComGoogleCommonCollectTreeRangeSet_AsRanges_initWithComGoogleCommonCollectTreeRangeSet_withJavaUtilCollection_(ComGoogleCommonCollectTreeRangeSet *outer$, id<JavaUtilCollection> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeSet_AsRanges)

#endif

#if !defined (ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeRangeSet || defined(INCLUDE_ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound))
#define ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_

#define RESTRICT_ComGoogleCommonCollectAbstractNavigableMap 1
#define INCLUDE_ComGoogleCommonCollectAbstractNavigableMap 1
#include "com/google/common/collect/AbstractNavigableMap.h"

@class ComGoogleCommonCollectCut;
@class ComGoogleCommonCollectRange;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;

@interface ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound : ComGoogleCommonCollectAbstractNavigableMap

#pragma mark Public

- (ComGoogleCommonCollectCut *)ceilingKeyWithId:(id)arg0;

- (id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectRange *)computeIfAbsentWithId:(id)arg0
                          withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg1;

- (ComGoogleCommonCollectRange *)computeIfPresentWithId:(id)arg0
                         withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (ComGoogleCommonCollectRange *)computeWithId:(id)arg0
                withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (jboolean)containsKeyWithId:(id)key;

- (ComGoogleCommonCollectCut *)firstKey;

- (ComGoogleCommonCollectCut *)floorKeyWithId:(id)arg0;

- (ComGoogleCommonCollectRange *)getWithId:(id)key;

- (ComGoogleCommonCollectRange *)getOrDefaultWithId:(id)arg0
                                             withId:(id)arg1;

- (id<JavaUtilNavigableMap>)headMapWithId:(ComGoogleCommonCollectCut *)toKey
                              withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectCut *)higherKeyWithId:(id)arg0;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectCut *)lastKey;

- (ComGoogleCommonCollectCut *)lowerKeyWithId:(id)arg0;

- (ComGoogleCommonCollectRange *)mergeWithId:(id)arg0
                                      withId:(id)arg1
              withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg2;

- (ComGoogleCommonCollectRange *)putIfAbsentWithId:(id)arg0
                                            withId:(id)arg1;

- (ComGoogleCommonCollectRange *)putWithId:(id)arg0
                                    withId:(id)arg1;

- (ComGoogleCommonCollectRange *)removeWithId:(id)arg0;

- (ComGoogleCommonCollectRange *)replaceWithId:(id)arg0
                                        withId:(id)arg1;

- (jint)size;

- (id<JavaUtilNavigableMap>)subMapWithId:(ComGoogleCommonCollectCut *)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(ComGoogleCommonCollectCut *)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(ComGoogleCommonCollectCut *)fromKey
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)rangesByLowerBound;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (id<JavaUtilIterator>)entryIterator;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound)

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_initWithJavaUtilNavigableMap_(ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound *self, id<JavaUtilNavigableMap> rangesByLowerBound);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound *new_ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_initWithJavaUtilNavigableMap_(id<JavaUtilNavigableMap> rangesByLowerBound) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound *create_ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound_initWithJavaUtilNavigableMap_(id<JavaUtilNavigableMap> rangesByLowerBound);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeRangeSet_RangesByUpperBound)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeRangeSet")
