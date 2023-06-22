//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/AbstractSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractSetMultimap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractSetMultimap))
#define ComGoogleCommonCollectAbstractSetMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap 1
#include "com/google/common/collect/AbstractMapBasedMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSetMultimap 1
#include "com/google/common/collect/SetMultimap.h"

@class JavaLangBoolean;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractSetMultimap : ComGoogleCommonCollectAbstractMapBasedMultimap < ComGoogleCommonCollectSetMultimap >

#pragma mark Public

- (id<JavaUtilMap>)asMap;

- (id<JavaUtilSet>)entries;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilSet>)getWithId:(id)key;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

#pragma mark Protected

- (instancetype)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (id<JavaUtilSet>)createCollection;

- (id<JavaUtilSet>)createUnmodifiableEmptyCollection;

- (id<JavaUtilCollection>)unmodifiableCollectionSubclassWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id<JavaUtilCollection>)wrapCollectionWithId:(id)key
                        withJavaUtilCollection:(id<JavaUtilCollection>)collection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSetMultimap_initPackagePrivateWithJavaUtilMap_(ComGoogleCommonCollectAbstractSetMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap")
