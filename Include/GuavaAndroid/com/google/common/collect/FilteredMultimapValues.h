//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/FilteredMultimapValues.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues")
#ifdef RESTRICT_ComGoogleCommonCollectFilteredMultimapValues
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues 1
#endif
#undef RESTRICT_ComGoogleCommonCollectFilteredMultimapValues

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectFilteredMultimapValues_) && (INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues || defined(INCLUDE_ComGoogleCommonCollectFilteredMultimapValues))
#define ComGoogleCommonCollectFilteredMultimapValues_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol ComGoogleCommonCollectFilteredMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectFilteredMultimapValues : JavaUtilAbstractCollection

#pragma mark Public

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonCollectFilteredMultimap:(id<ComGoogleCommonCollectFilteredMultimap>)multimap;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFilteredMultimapValues)

FOUNDATION_EXPORT void ComGoogleCommonCollectFilteredMultimapValues_initPackagePrivateWithComGoogleCommonCollectFilteredMultimap_(ComGoogleCommonCollectFilteredMultimapValues *self, id<ComGoogleCommonCollectFilteredMultimap> multimap);

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredMultimapValues *new_ComGoogleCommonCollectFilteredMultimapValues_initPackagePrivateWithComGoogleCommonCollectFilteredMultimap_(id<ComGoogleCommonCollectFilteredMultimap> multimap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectFilteredMultimapValues *create_ComGoogleCommonCollectFilteredMultimapValues_initPackagePrivateWithComGoogleCommonCollectFilteredMultimap_(id<ComGoogleCommonCollectFilteredMultimap> multimap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFilteredMultimapValues)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectFilteredMultimapValues")
