//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/ComparatorOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectComparatorOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectComparatorOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectComparatorOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectComparatorOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectComparatorOrdering

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectComparatorOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectComparatorOrdering || defined(INCLUDE_ComGoogleCommonCollectComparatorOrdering))
#define ComGoogleCommonCollectComparatorOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectComparatorOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  id<JavaUtilComparator> comparator_;
}

#pragma mark Public

- (jint)compareWithId:(id)a
               withId:(id)b;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectComparatorOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectComparatorOrdering, comparator_, id<JavaUtilComparator>)

FOUNDATION_EXPORT void ComGoogleCommonCollectComparatorOrdering_initPackagePrivateWithJavaUtilComparator_(ComGoogleCommonCollectComparatorOrdering *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectComparatorOrdering *new_ComGoogleCommonCollectComparatorOrdering_initPackagePrivateWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectComparatorOrdering *create_ComGoogleCommonCollectComparatorOrdering_initPackagePrivateWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComparatorOrdering)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectComparatorOrdering")
