//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/AbstractSortedKeySortedSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap))
#define ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractSortedSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractSortedSetMultimap 1
#include "com/google/common/collect/AbstractSortedSetMultimap.h"

@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap : ComGoogleCommonCollectAbstractSortedSetMultimap

#pragma mark Public

- (id<JavaUtilSortedMap>)asMap;

- (id<JavaUtilSortedSet>)keySet;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)map;

- (id<JavaUtilSortedMap>)backingMap;

- (id<JavaUtilSet>)createKeySet;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_initPackagePrivateWithJavaUtilSortedMap_(ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap *self, id<JavaUtilSortedMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap")
