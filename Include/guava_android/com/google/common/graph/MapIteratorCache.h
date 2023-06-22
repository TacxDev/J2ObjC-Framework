//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/graph/MapIteratorCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache")
#ifdef RESTRICT_ComGoogleCommonGraphMapIteratorCache
#define INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache 1
#endif
#undef RESTRICT_ComGoogleCommonGraphMapIteratorCache

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphMapIteratorCache_) && (INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache || defined(INCLUDE_ComGoogleCommonGraphMapIteratorCache))
#define ComGoogleCommonGraphMapIteratorCache_

@class JavaLangBoolean;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonGraphMapIteratorCache : NSObject

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap>)backingMap;

- (void)clear;

- (void)clearCache;

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id)getIfCachedWithId:(id)key;

- (id)getWithoutCachingWithId:(id)key;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (id<JavaUtilSet>)unmodifiableKeySet;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphMapIteratorCache)

FOUNDATION_EXPORT void ComGoogleCommonGraphMapIteratorCache_initPackagePrivateWithJavaUtilMap_(ComGoogleCommonGraphMapIteratorCache *self, id<JavaUtilMap> backingMap);

FOUNDATION_EXPORT ComGoogleCommonGraphMapIteratorCache *new_ComGoogleCommonGraphMapIteratorCache_initPackagePrivateWithJavaUtilMap_(id<JavaUtilMap> backingMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphMapIteratorCache *create_ComGoogleCommonGraphMapIteratorCache_initPackagePrivateWithJavaUtilMap_(id<JavaUtilMap> backingMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphMapIteratorCache)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache")
