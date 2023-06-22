//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ImmutableSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSetMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap || defined(INCLUDE_ComGoogleCommonCollectImmutableSetMultimap))
#define ComGoogleCommonCollectImmutableSetMultimap_

#define RESTRICT_ComGoogleCommonCollectImmutableMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultimap 1
#include "com/google/common/collect/ImmutableMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSetMultimap 1
#include "com/google/common/collect/SetMultimap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultiset;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap_Builder;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilStreamCollector;

@interface ComGoogleCommonCollectImmutableSetMultimap : ComGoogleCommonCollectImmutableMultimap < ComGoogleCommonCollectSetMultimap >

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)asMap;

+ (ComGoogleCommonCollectImmutableSetMultimap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableSetMultimap *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)entries OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSetMultimap *)copyOfWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)entries;

+ (id<JavaUtilStreamCollector>)flatteningToImmutableSetMultimapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyFunction
                                                               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)valuesFunction;

- (ComGoogleCommonCollectImmutableSet *)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSetMultimap *)inverse;

- (ComGoogleCommonCollectImmutableMultiset *)keys;

- (ComGoogleCommonCollectImmutableSet *)keySet;

+ (ComGoogleCommonCollectImmutableSetMultimap *)of;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3
                                                  withId:(id)k4
                                                  withId:(id)v4;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3
                                                  withId:(id)k4
                                                  withId:(id)v4
                                                  withId:(id)k5
                                                  withId:(id)v5;

- (ComGoogleCommonCollectImmutableSet *)removeAllWithId:(id)key;

- (ComGoogleCommonCollectImmutableSet *)replaceValuesWithId:(id)key
                                       withJavaLangIterable:(id<JavaLangIterable>)values;

+ (id<JavaUtilStreamCollector>)toImmutableSetMultimapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyFunction
                                                     withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)valueFunction;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                                   withInt:(jint)size
                                    withJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

+ (ComGoogleCommonCollectImmutableSetMultimap *)fromMapEntriesWithJavaUtilCollection:(id<JavaUtilCollection>)mapEntries
                                                              withJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (id<JavaUtilComparator>)valueComparator;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)arg0
                                                   withInt:(jint)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSetMultimap)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableSetMultimap_toImmutableSetMultimapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableSetMultimap_flatteningToImmutableSetMultimapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valuesFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *ComGoogleCommonCollectImmutableSetMultimap_builder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_copyOfWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_fromMapEntriesWithJavaUtilCollection_withJavaUtilComparator_(id<JavaUtilCollection> mapEntries, id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableSetMultimap *self, ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *new_ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *create_ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSetMultimap)

#endif

#if !defined (ComGoogleCommonCollectImmutableSetMultimap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap || defined(INCLUDE_ComGoogleCommonCollectImmutableSetMultimap_Builder))
#define ComGoogleCommonCollectImmutableSetMultimap_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultimap_Builder 1
#include "com/google/common/collect/ImmutableMultimap.h"

@class ComGoogleCommonCollectImmutableSetMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableSetMultimap_Builder : ComGoogleCommonCollectImmutableMultimap_Builder

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableSetMultimap *)build;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)orderKeysByWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)orderValuesByWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putWithId:(id)key
                                                           withId:(id)value;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable>)entries;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithId:(id)key
                                                withJavaLangIterable:(id<JavaLangIterable>)values;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithId:(id)key
                                                   withNSObjectArray:(IOSObjectArray *)values;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

#pragma mark Package-Private

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)combineWithComGoogleCommonCollectImmutableMultimap_Builder:(ComGoogleCommonCollectImmutableMultimap_Builder *)other;

- (id<JavaUtilCollection>)newMutableValueCollection OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSetMultimap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSetMultimap_Builder_init(ComGoogleCommonCollectImmutableSetMultimap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *new_ComGoogleCommonCollectImmutableSetMultimap_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *create_ComGoogleCommonCollectImmutableSetMultimap_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSetMultimap_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSetMultimap")
