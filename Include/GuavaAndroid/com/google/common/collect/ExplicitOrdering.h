//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/ExplicitOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectExplicitOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectExplicitOrdering

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectExplicitOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering || defined(INCLUDE_ComGoogleCommonCollectExplicitOrdering))
#define ComGoogleCommonCollectExplicitOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableMap;
@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectExplicitOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableMap *rankMap_;
}

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)rankMap;

- (instancetype)initPackagePrivateWithJavaUtilList:(id<JavaUtilList>)valuesInOrder;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectExplicitOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectExplicitOrdering, rankMap_, ComGoogleCommonCollectImmutableMap *)

FOUNDATION_EXPORT void ComGoogleCommonCollectExplicitOrdering_initPackagePrivateWithJavaUtilList_(ComGoogleCommonCollectExplicitOrdering *self, id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *new_ComGoogleCommonCollectExplicitOrdering_initPackagePrivateWithJavaUtilList_(id<JavaUtilList> valuesInOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *create_ComGoogleCommonCollectExplicitOrdering_initPackagePrivateWithJavaUtilList_(id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT void ComGoogleCommonCollectExplicitOrdering_initPackagePrivateWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectExplicitOrdering *self, ComGoogleCommonCollectImmutableMap *rankMap);

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *new_ComGoogleCommonCollectExplicitOrdering_initPackagePrivateWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *rankMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *create_ComGoogleCommonCollectExplicitOrdering_initPackagePrivateWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *rankMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectExplicitOrdering)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering")
