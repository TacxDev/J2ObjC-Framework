//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/collect/ImmutableEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEntry")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableEntry
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEntry 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableEntry 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableEntry

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectImmutableEntry_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableEntry || defined(INCLUDE_ComGoogleCommonCollectImmutableEntry))
#define ComGoogleCommonCollectImmutableEntry_

#define RESTRICT_ComGoogleCommonCollectAbstractMapEntry 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapEntry 1
#include "com/google/common/collect/AbstractMapEntry.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectImmutableEntry : ComGoogleCommonCollectAbstractMapEntry < JavaIoSerializable > {
 @public
  id key_;
  id value_;
}

#pragma mark Public

- (id)getKey;

- (id)getValue;

- (id)setValueWithId:(id)value;

#pragma mark Package-Private

- (instancetype)initPackagePrivateWithId:(id)key
                                  withId:(id)value;

// Disallowed inherited constructors, do not use.

- (instancetype)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEntry)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableEntry, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableEntry, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableEntry_initPackagePrivateWithId_withId_(ComGoogleCommonCollectImmutableEntry *self, id key, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableEntry *new_ComGoogleCommonCollectImmutableEntry_initPackagePrivateWithId_withId_(id key, id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableEntry *create_ComGoogleCommonCollectImmutableEntry_initPackagePrivateWithId_withId_(id key, id value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEntry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableEntry")
