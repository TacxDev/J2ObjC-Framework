//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/ImmutableBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableBiMap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectImmutableBiMap))
#define ComGoogleCommonCollectImmutableBiMap_

#define RESTRICT_ComGoogleCommonCollectImmutableBiMapFauxverideShim 1
#define INCLUDE_ComGoogleCommonCollectImmutableBiMapFauxverideShim 1
#include "com/google/common/collect/ImmutableBiMapFauxverideShim.h"

#define RESTRICT_ComGoogleCommonCollectBiMap 1
#define INCLUDE_ComGoogleCommonCollectBiMap 1
#include "com/google/common/collect/BiMap.h"

@class ComGoogleCommonCollectImmutableBiMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class IOSObjectArray;
@class JavaLangInteger;
@protocol JavaLangIterable;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilMap;
@protocol JavaUtilStreamCollector;

@interface ComGoogleCommonCollectImmutableBiMap : ComGoogleCommonCollectImmutableBiMapFauxverideShim < ComGoogleCommonCollectBiMap >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableBiMap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableBiMap_Builder *)builderWithExpectedSizeWithInt:(jint)expectedSize;

+ (ComGoogleCommonCollectImmutableBiMap *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)entries OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableBiMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

- (ComGoogleCommonCollectImmutableSet *)keySet;

+ (ComGoogleCommonCollectImmutableBiMap *)of;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5
                                            withId:(id)k6
                                            withId:(id)v6;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5
                                            withId:(id)k6
                                            withId:(id)v6
                                            withId:(id)k7
                                            withId:(id)v7;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5
                                            withId:(id)k6
                                            withId:(id)v6
                                            withId:(id)k7
                                            withId:(id)v7
                                            withId:(id)k8
                                            withId:(id)v8;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5
                                            withId:(id)k6
                                            withId:(id)v6
                                            withId:(id)k7
                                            withId:(id)v7
                                            withId:(id)k8
                                            withId:(id)v8
                                            withId:(id)k9
                                            withId:(id)v9;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5
                                            withId:(id)k6
                                            withId:(id)v6
                                            withId:(id)k7
                                            withId:(id)v7
                                            withId:(id)k8
                                            withId:(id)v8
                                            withId:(id)k9
                                            withId:(id)v9
                                            withId:(id)k10
                                            withId:(id)v10;

+ (ComGoogleCommonCollectImmutableBiMap *)ofEntriesWithJavaUtilMap_EntryArray:(IOSObjectArray *)entries;

+ (id<JavaUtilStreamCollector>)toImmutableBiMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)keyFunction
                                               withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)valueFunction;

- (ComGoogleCommonCollectImmutableSet *)values;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectImmutableSet *)createValues;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableBiMap)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> ComGoogleCommonCollectImmutableBiMap_toImmutableBiMapWithJavaUtilFunctionFunction_withJavaUtilFunctionFunction_(id<JavaUtilFunctionFunction> keyFunction, id<JavaUtilFunctionFunction> valueFunction);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_of(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5, id k6, id v6);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5, id k6, id v6, id k7, id v7);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5, id k6, id v6, id k7, id v7, id k8, id v8);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5, id k6, id v6, id k7, id v7, id k8, id v8, id k9, id v9);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5, id k6, id v6, id k7, id v7, id k8, id v8, id k9, id v9, id k10, id v10);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofEntriesWithJavaUtilMap_EntryArray_(IOSObjectArray *entries);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *ComGoogleCommonCollectImmutableBiMap_builder(void);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *ComGoogleCommonCollectImmutableBiMap_builderWithExpectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_init(ComGoogleCommonCollectImmutableBiMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableBiMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableBiMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap || defined(INCLUDE_ComGoogleCommonCollectImmutableBiMap_Builder))
#define ComGoogleCommonCollectImmutableBiMap_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableMap 1
#define INCLUDE_ComGoogleCommonCollectImmutableMap_Builder 1
#include "com/google/common/collect/ImmutableMap.h"

@class ComGoogleCommonCollectImmutableBiMap;
@class JavaLangInteger;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableBiMap_Builder : ComGoogleCommonCollectImmutableMap_Builder

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableBiMap *)build;

- (ComGoogleCommonCollectImmutableBiMap *)buildKeepingLast;

- (ComGoogleCommonCollectImmutableBiMap *)buildOrThrow;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)orderEntriesByValueWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putWithId:(id)key
                                                     withId:(id)value;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable>)entries;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)size;

- (ComGoogleCommonCollectImmutableBiMap *)buildJdkBacked;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)combineWithComGoogleCommonCollectImmutableMap_Builder:(ComGoogleCommonCollectImmutableMap_Builder *)builder;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableBiMap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_Builder_init(ComGoogleCommonCollectImmutableBiMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *new_ComGoogleCommonCollectImmutableBiMap_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *create_ComGoogleCommonCollectImmutableBiMap_Builder_init(void);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_Builder_initWithInt_(ComGoogleCommonCollectImmutableBiMap_Builder *self, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *new_ComGoogleCommonCollectImmutableBiMap_Builder_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *create_ComGoogleCommonCollectImmutableBiMap_Builder_initWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableBiMap_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableBiMap")
