//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/ImmutableSortedMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedMap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSortedMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMap || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedMap))
#define ComGoogleCommonCollectImmutableSortedMap_

#define RESTRICT_ComGoogleCommonCollectImmutableSortedMapFauxverideShim 1
#define INCLUDE_ComGoogleCommonCollectImmutableSortedMapFauxverideShim 1
#include "com/google/common/collect/ImmutableSortedMapFauxverideShim.h"

#define RESTRICT_JavaUtilNavigableMap 1
#define INCLUDE_JavaUtilNavigableMap 1
#include "java/util/NavigableMap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedMap_Builder;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRegularImmutableSortedSet;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSortedMap;

@interface ComGoogleCommonCollectImmutableSortedMap : ComGoogleCommonCollectImmutableSortedMapFauxverideShim < JavaUtilNavigableMap >

#pragma mark Public

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectImmutableSortedMap *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)entries OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMap *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)entries
                                                  withJavaUtilComparator:(id<JavaUtilComparator>)comparator OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map
                                             withJavaUtilComparator:(id<JavaUtilComparator>)comparator OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMap *)copyOfSortedWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)map OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSortedSet *)descendingKeySet;

- (ComGoogleCommonCollectImmutableSortedMap *)descendingMap;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id)firstKey;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSortedMap *)headMapWithId:(id)toKey;

- (ComGoogleCommonCollectImmutableSortedMap *)headMapWithId:(id)toKey
                                                withBoolean:(jboolean)inclusive;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (ComGoogleCommonCollectImmutableSortedSet *)keySet;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id)lastKey;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

+ (ComGoogleCommonCollectImmutableSortedMap_Builder *)naturalOrder;

- (ComGoogleCommonCollectImmutableSortedSet *)navigableKeySet;

+ (ComGoogleCommonCollectImmutableSortedMap *)of;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3
                                                withJavaLangComparable:(id<JavaLangComparable>)k4
                                                                withId:(id)v4;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3
                                                withJavaLangComparable:(id<JavaLangComparable>)k4
                                                                withId:(id)v4
                                                withJavaLangComparable:(id<JavaLangComparable>)k5
                                                                withId:(id)v5;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3
                                                withJavaLangComparable:(id<JavaLangComparable>)k4
                                                                withId:(id)v4
                                                withJavaLangComparable:(id<JavaLangComparable>)k5
                                                                withId:(id)v5
                                                withJavaLangComparable:(id<JavaLangComparable>)k6
                                                                withId:(id)v6;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3
                                                withJavaLangComparable:(id<JavaLangComparable>)k4
                                                                withId:(id)v4
                                                withJavaLangComparable:(id<JavaLangComparable>)k5
                                                                withId:(id)v5
                                                withJavaLangComparable:(id<JavaLangComparable>)k6
                                                                withId:(id)v6
                                                withJavaLangComparable:(id<JavaLangComparable>)k7
                                                                withId:(id)v7;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3
                                                withJavaLangComparable:(id<JavaLangComparable>)k4
                                                                withId:(id)v4
                                                withJavaLangComparable:(id<JavaLangComparable>)k5
                                                                withId:(id)v5
                                                withJavaLangComparable:(id<JavaLangComparable>)k6
                                                                withId:(id)v6
                                                withJavaLangComparable:(id<JavaLangComparable>)k7
                                                                withId:(id)v7
                                                withJavaLangComparable:(id<JavaLangComparable>)k8
                                                                withId:(id)v8;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3
                                                withJavaLangComparable:(id<JavaLangComparable>)k4
                                                                withId:(id)v4
                                                withJavaLangComparable:(id<JavaLangComparable>)k5
                                                                withId:(id)v5
                                                withJavaLangComparable:(id<JavaLangComparable>)k6
                                                                withId:(id)v6
                                                withJavaLangComparable:(id<JavaLangComparable>)k7
                                                                withId:(id)v7
                                                withJavaLangComparable:(id<JavaLangComparable>)k8
                                                                withId:(id)v8
                                                withJavaLangComparable:(id<JavaLangComparable>)k9
                                                                withId:(id)v9;

+ (ComGoogleCommonCollectImmutableSortedMap *)ofWithJavaLangComparable:(id<JavaLangComparable>)k1
                                                                withId:(id)v1
                                                withJavaLangComparable:(id<JavaLangComparable>)k2
                                                                withId:(id)v2
                                                withJavaLangComparable:(id<JavaLangComparable>)k3
                                                                withId:(id)v3
                                                withJavaLangComparable:(id<JavaLangComparable>)k4
                                                                withId:(id)v4
                                                withJavaLangComparable:(id<JavaLangComparable>)k5
                                                                withId:(id)v5
                                                withJavaLangComparable:(id<JavaLangComparable>)k6
                                                                withId:(id)v6
                                                withJavaLangComparable:(id<JavaLangComparable>)k7
                                                                withId:(id)v7
                                                withJavaLangComparable:(id<JavaLangComparable>)k8
                                                                withId:(id)v8
                                                withJavaLangComparable:(id<JavaLangComparable>)k9
                                                                withId:(id)v9
                                                withJavaLangComparable:(id<JavaLangComparable>)k10
                                                                withId:(id)v10;

+ (ComGoogleCommonCollectImmutableSortedMap_Builder *)orderedByWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

+ (ComGoogleCommonCollectImmutableSortedMap_Builder *)reverseOrder;

- (jint)size;

- (ComGoogleCommonCollectImmutableSortedMap *)subMapWithId:(id)fromKey
                                               withBoolean:(jboolean)fromInclusive
                                                    withId:(id)toKey
                                               withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectImmutableSortedMap *)subMapWithId:(id)fromKey
                                                    withId:(id)toKey;

- (ComGoogleCommonCollectImmutableSortedMap *)tailMapWithId:(id)fromKey;

- (ComGoogleCommonCollectImmutableSortedMap *)tailMapWithId:(id)fromKey
                                                withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)keySet
                                withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)valueList;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)keySet
                                withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)valueList
                           withComGoogleCommonCollectImmutableSortedMap:(ComGoogleCommonCollectImmutableSortedMap *)descendingMap;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

+ (ComGoogleCommonCollectImmutableSortedMap *)emptyMapWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (jboolean)isPartialView;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_emptyMapWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3, id<JavaLangComparable> k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3, id<JavaLangComparable> k4, id v4, id<JavaLangComparable> k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3, id<JavaLangComparable> k4, id v4, id<JavaLangComparable> k5, id v5, id<JavaLangComparable> k6, id v6);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3, id<JavaLangComparable> k4, id v4, id<JavaLangComparable> k5, id v5, id<JavaLangComparable> k6, id v6, id<JavaLangComparable> k7, id v7);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3, id<JavaLangComparable> k4, id v4, id<JavaLangComparable> k5, id v5, id<JavaLangComparable> k6, id v6, id<JavaLangComparable> k7, id v7, id<JavaLangComparable> k8, id v8);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3, id<JavaLangComparable> k4, id v4, id<JavaLangComparable> k5, id v5, id<JavaLangComparable> k6, id v6, id<JavaLangComparable> k7, id v7, id<JavaLangComparable> k8, id v8, id<JavaLangComparable> k9, id v9);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_ofWithJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_withJavaLangComparable_withId_(id<JavaLangComparable> k1, id v1, id<JavaLangComparable> k2, id v2, id<JavaLangComparable> k3, id v3, id<JavaLangComparable> k4, id v4, id<JavaLangComparable> k5, id v5, id<JavaLangComparable> k6, id v6, id<JavaLangComparable> k7, id v7, id<JavaLangComparable> k8, id v8, id<JavaLangComparable> k9, id v9, id<JavaLangComparable> k10, id v10);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_copyOfWithJavaUtilMap_withJavaUtilComparator_(id<JavaUtilMap> map, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_copyOfWithJavaLangIterable_withJavaUtilComparator_(id<JavaLangIterable> entries, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *ComGoogleCommonCollectImmutableSortedMap_copyOfSortedWithJavaUtilSortedMap_(id<JavaUtilSortedMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap_Builder *ComGoogleCommonCollectImmutableSortedMap_naturalOrder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap_Builder *ComGoogleCommonCollectImmutableSortedMap_orderedByWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap_Builder *ComGoogleCommonCollectImmutableSortedMap_reverseOrder(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableSortedMap *self, ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *new_ComGoogleCommonCollectImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *create_ComGoogleCommonCollectImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSortedMap_(ComGoogleCommonCollectImmutableSortedMap *self, ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList, ComGoogleCommonCollectImmutableSortedMap *descendingMap);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *new_ComGoogleCommonCollectImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSortedMap_(ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList, ComGoogleCommonCollectImmutableSortedMap *descendingMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap *create_ComGoogleCommonCollectImmutableSortedMap_initWithComGoogleCommonCollectRegularImmutableSortedSet_withComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableSortedMap_(ComGoogleCommonCollectRegularImmutableSortedSet *keySet, ComGoogleCommonCollectImmutableList *valueList, ComGoogleCommonCollectImmutableSortedMap *descendingMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableSortedMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMap || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedMap_Builder))
#define ComGoogleCommonCollectImmutableSortedMap_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMap_Builder 1
#include "com/google/common/collect/ImmutableMap.h"

@class ComGoogleCommonCollectImmutableSortedMap;
@class JavaLangInteger;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableSortedMap_Builder : ComGoogleCommonCollectImmutableMap_Builder

#pragma mark Public

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSortedMap *)build;

- (ComGoogleCommonCollectImmutableSortedMap *)buildKeepingLast;

- (ComGoogleCommonCollectImmutableSortedMap *)buildOrThrow;

- (ComGoogleCommonCollectImmutableSortedMap_Builder *)orderEntriesByValueWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableSortedMap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableSortedMap_Builder *)putWithId:(id)key
                                                         withId:(id)value;

- (ComGoogleCommonCollectImmutableSortedMap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable>)entries;

- (ComGoogleCommonCollectImmutableSortedMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableSortedMap_Builder *)combineWithComGoogleCommonCollectImmutableSortedMap_Builder:(ComGoogleCommonCollectImmutableSortedMap_Builder *)other;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMap_Builder_initWithJavaUtilComparator_(ComGoogleCommonCollectImmutableSortedMap_Builder *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap_Builder *new_ComGoogleCommonCollectImmutableSortedMap_Builder_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMap_Builder *create_ComGoogleCommonCollectImmutableSortedMap_Builder_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedMap_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMap")