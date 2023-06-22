//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/build_result/java/com/google/common/collect/NullsLastOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectNullsLastOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectNullsLastOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectNullsLastOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectNullsLastOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectNullsLastOrdering

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectNullsLastOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectNullsLastOrdering || defined(INCLUDE_ComGoogleCommonCollectNullsLastOrdering))
#define ComGoogleCommonCollectNullsLastOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;

@interface ComGoogleCommonCollectNullsLastOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectOrdering *ordering_;
}

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (ComGoogleCommonCollectOrdering *)nullsFirst;

- (ComGoogleCommonCollectOrdering *)nullsLast;

- (ComGoogleCommonCollectOrdering *)reverse;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectNullsLastOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectNullsLastOrdering, ordering_, ComGoogleCommonCollectOrdering *)

FOUNDATION_EXPORT void ComGoogleCommonCollectNullsLastOrdering_initPackagePrivateWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectNullsLastOrdering *self, ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectNullsLastOrdering *new_ComGoogleCommonCollectNullsLastOrdering_initPackagePrivateWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectNullsLastOrdering *create_ComGoogleCommonCollectNullsLastOrdering_initPackagePrivateWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectNullsLastOrdering)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectNullsLastOrdering")
